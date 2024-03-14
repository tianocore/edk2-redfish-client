/** @file
  Redfish feature driver implementation - common functions

  (C) Copyright 2020-2022 Hewlett Packard Enterprise Development LP<BR>
  Copyright (c) 2023-2024, NVIDIA CORPORATION & AFFILIATES. All rights reserved.

  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include "SecureBootCommon.h"

CHAR8  SecureBootEmptyJson[] = "{\"@odata.id\": \"\", \"@odata.type\": \"#SecureBoot.v1_1_0.SecureBoot\", \"Id\": \"\", \"Name\": \"\", \"Attributes\":{}}";

REDFISH_RESOURCE_COMMON_PRIVATE  *mRedfishResourcePrivate                                  = NULL;
EFI_HANDLE                       mRedfishResourceConfigProtocolHandle                      = NULL;
CHAR16                           *mSecureBootSupportedAttributes[SECURE_BOOT_MODE_STR_LEN] = {
  L"SecureBootCurrentBoot",
  L"SecureBootEnable",
  L"SecureBootMode"
};

/**
  Read EFI_SECURE_BOOT_ENABLE_NAME variable and return its value to caller.

  @retval BOOLEAN    TRUE when EFI_SECURE_BOOT_ENABLE_NAME value is SECURE_BOOT_ENABLE
                     FALSE when EFI_SECURE_BOOT_ENABLE_NAME value is SECURE_BOOT_DISABLE
**/
BOOLEAN
RedfishReadSecureBootEnable (
  VOID
  )
{
  UINT8    *Buffer;
  BOOLEAN  SecureBootEnableValue;

  Buffer                = NULL;
  SecureBootEnableValue = FALSE;

  GetVariable2 (
    EFI_SECURE_BOOT_ENABLE_NAME,
    &gEfiSecureBootEnableDisableGuid,
    (VOID **)&Buffer,
    NULL
    );

  if (Buffer != NULL) {
    if (*Buffer == SECURE_BOOT_ENABLE) {
      SecureBootEnableValue = TRUE;
    }

    FreePool (Buffer);
  }

  return SecureBootEnableValue;
}

/**
  Write EFI_SECURE_BOOT_ENABLE_NAME variable with given value.

  @param[in]   SecureBootEnableValue    Value to write. TRUE is SECURE_BOOT_ENABLE.
                                        FALSE is SECURE_BOOT_DISABLE.

  @retval EFI_SUCCESS              Write value successfully.
  @retval Others                   Some error happened.
**/
EFI_STATUS
RedfishWriteSecureBootEnable (
  BOOLEAN  SecureBootEnableValue
  )
{
  EFI_STATUS  Status;
  UINT8       VarValue;

  VarValue = (SecureBootEnableValue ? SECURE_BOOT_ENABLE : SECURE_BOOT_DISABLE);
  Status   = gRT->SetVariable (
                    EFI_SECURE_BOOT_ENABLE_NAME,
                    &gEfiSecureBootEnableDisableGuid,
                    EFI_VARIABLE_NON_VOLATILE | EFI_VARIABLE_BOOTSERVICE_ACCESS,
                    sizeof (VarValue),
                    &VarValue
                    );

  return Status;
}

/**
  Consume Redfish resource in given Json data.

  @param[in]   This                Pointer to REDFISH_RESOURCE_COMMON_PRIVATE instance.
  @param[in]   Json                The JSON to consume.
  @param[in]   HeaderEtag          The Etag string returned in HTTP header.

  @retval EFI_SUCCESS              Consume Redfish attribute successfully.
  @retval Others                   Some error happened.

**/
EFI_STATUS
RedfishConsumeResourceCommon (
  IN  REDFISH_RESOURCE_COMMON_PRIVATE  *Private,
  IN  CHAR8                            *Json,
  IN  CHAR8                            *HeaderEtag OPTIONAL
  )
{
  EFI_STATUS                        Status;
  EFI_REDFISH_SECUREBOOT_V1_1_0     *SecureBoot;
  EFI_REDFISH_SECUREBOOT_V1_1_0_CS  *SecureBootCs;
  BOOLEAN                           SecureBootEnableDisable;

  if ((Private == NULL) || IS_EMPTY_STRING (Json)) {
    return EFI_INVALID_PARAMETER;
  }

  SecureBoot              = NULL;
  SecureBootCs            = NULL;
  SecureBootEnableDisable = RedfishReadSecureBootEnable ();

  Status = Private->JsonStructProtocol->ToStructure (
                                          Private->JsonStructProtocol,
                                          NULL,
                                          Json,
                                          (EFI_REST_JSON_STRUCTURE_HEADER **)&SecureBoot
                                          );
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a: ToStructure() failed: %r\n", __func__, Status));
    return Status;
  }

  SecureBootCs = SecureBoot->SecureBoot;

  //
  // Check ETAG to see if we need to consume it
  //
  if (CheckEtag (Private->Uri, HeaderEtag, SecureBootCs->odata_etag)) {
    //
    // No change
    //
    DEBUG ((REDFISH_DEBUG_TRACE, "%a: ETAG: %s has no change, ignore consume action\n", __func__, Private->Uri));
    Status = EFI_ALREADY_STARTED;
    goto ON_RELEASE;
  }

  //
  // Secure boot enable
  //
  if (SecureBootCs->SecureBootEnable != NULL) {
    if (SecureBootEnableDisable != *SecureBootCs->SecureBootEnable) {
      //
      // Write value to "SecureBootEnable" variable. AuthVariableLib will enable or disable secure boot
      // based on "SecureBootEnable" value.
      //
      Status = RedfishWriteSecureBootEnable (*SecureBootCs->SecureBootEnable);
      if (EFI_ERROR (Status)) {
        DEBUG ((DEBUG_ERROR, "%a: write secure boot enable disable failed: %r\n", __func__, Status));
      } else {
        REDFISH_ENABLE_SYSTEM_REBOOT ();
      }
    } else {
      DEBUG ((REDFISH_DEBUG_TRACE, "%a: secure boot mode is not changed\n", __func__));
    }
  }

ON_RELEASE:

  //
  // Release resource.
  //
  Private->JsonStructProtocol->DestoryStructure (
                                 Private->JsonStructProtocol,
                                 (EFI_REST_JSON_STRUCTURE_HEADER *)SecureBoot
                                 );

  return EFI_SUCCESS;
}

/**
  Provision Redfish resource. This function reads secure boot variable and convert it
  to Redfish attribute.

  @param[in]   JsonStructProtocol  Pointer to Json structure protocol.
  @param[in]   InputJson           Jason data on input.
  @param[in]   ResourceId          Resource ID. This is optional.
  @param[in]   ConfigureLang       Configure language for this Redfish resource.
  @param[in]   ProvisionMode       TRUE when this is to provision Redfish attribute to
                                   Redfish service. FALSE is to update Redfish attribute
                                   to Redfish service.
  @param[out]  ResultJson          Json data on output.

  @retval EFI_SUCCESS              Provision Redfish attribute successfully.
  @retval Others                   Some error happened.

**/
EFI_STATUS
ProvisioningSecureBootProperties (
  IN  EFI_REST_JSON_STRUCTURE_PROTOCOL  *JsonStructProtocol,
  IN  CHAR8                             *InputJson,
  IN  CHAR8                             *ResourceId OPTIONAL,
  IN  EFI_STRING                        ConfigureLang,
  IN  BOOLEAN                           ProvisionMode,
  OUT CHAR8                             **ResultJson
  )
{
  EFI_REDFISH_SECUREBOOT_V1_1_0     *SecureBoot;
  EFI_REDFISH_SECUREBOOT_V1_1_0_CS  *SecureBootCs;
  EFI_STATUS                        Status;
  BOOLEAN                           PropertyChanged;
  CHAR8                             *AsciiStringValue;
  INT32                             *IntegerValue;
  UINT8                             SetupMode;
  BOOLEAN                           SecureBootEnabled;
  BOOLEAN                           SecureBootEnableDisable;

  if ((JsonStructProtocol == NULL) || (ResultJson == NULL) || IS_EMPTY_STRING (InputJson) || IS_EMPTY_STRING (ConfigureLang)) {
    return EFI_INVALID_PARAMETER;
  }

  DEBUG ((REDFISH_DEBUG_TRACE, "%a provision for %s with: %s\n", __func__, ConfigureLang, (ProvisionMode ? L"Provision resource" : L"Update resource")));

  *ResultJson             = NULL;
  PropertyChanged         = FALSE;
  AsciiStringValue        = NULL;
  IntegerValue            = NULL;
  SecureBootEnableDisable = RedfishReadSecureBootEnable ();
  SecureBootEnabled       = IsSecureBootEnabled ();

  SecureBoot = NULL;
  Status     = JsonStructProtocol->ToStructure (
                                     JsonStructProtocol,
                                     NULL,
                                     InputJson,
                                     (EFI_REST_JSON_STRUCTURE_HEADER **)&SecureBoot
                                     );
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a: ToStructure failure: %r\n", __func__, Status));
    return Status;
  }

  SecureBootCs = SecureBoot->SecureBoot;

  //
  // ID
  //
  if (SecureBootCs->Id != NULL) {
    SecureBootCs->Id = NULL;
  }

  //
  // Name
  //
  if (SecureBootCs->Name != NULL) {
    SecureBootCs->Name = NULL;
  }

  //
  // Secure boot variables that we will handle here
  //
  // EFI_SETUP_MODE_NAME (gEfiGlobalVariableGuid)
  // EFI_SECURE_BOOT_MODE_NAME (gEfiGlobalVariableGuid)
  // EFI_SECURE_BOOT_ENABLE_NAME (gEfiSecureBootEnableDisableGuid)
  //

  //
  // Current Boot
  //
  if (PropertyChecker (SecureBootCs->SecureBootCurrentBoot, ProvisionMode)) {
    AsciiStringValue = AllocateZeroPool (SECURE_BOOT_MODE_STR_LEN * sizeof (CHAR8));
    if (AsciiStringValue != NULL) {
      AsciiSPrint (AsciiStringValue, SECURE_BOOT_MODE_STR_LEN, "%a", (SecureBootEnabled ? SECURE_BOOT_ENABLED : SECURE_BOOT_DISABLED));
      if (ProvisionMode || (AsciiStrCmp (SecureBootCs->SecureBootCurrentBoot, AsciiStringValue) != 0)) {
        SecureBootCs->SecureBootCurrentBoot = AsciiStringValue;
        PropertyChanged                     = TRUE;
      } else {
        FreePool (AsciiStringValue);
      }
    } else {
      DEBUG ((DEBUG_ERROR, "%a: out of resource\n", __func__));
    }
  }

  //
  // Secure boot enable
  //
  if (PropertyChecker (SecureBootCs->SecureBootEnable, ProvisionMode)) {
    if (ProvisionMode || (*SecureBootCs->SecureBootEnable != SecureBootEnableDisable)) {
      IntegerValue = AllocatePool (sizeof (*IntegerValue));
      if (IntegerValue != NULL) {
        *IntegerValue                  = (SecureBootEnableDisable ? 0x01 : 0x00);
        SecureBootCs->SecureBootEnable = IntegerValue;
        PropertyChanged                = TRUE;
      } else {
        DEBUG ((DEBUG_ERROR, "%a: out of resource\n", __func__));
      }
    }
  }

  //
  // Secure boot mode
  //
  if (PropertyChecker (SecureBootCs->SecureBootMode, ProvisionMode)) {
    Status = GetSetupMode (&SetupMode);
    if (!EFI_ERROR (Status)) {
      AsciiStringValue = AllocateZeroPool (SECURE_BOOT_MODE_STR_LEN *sizeof (CHAR8));
      if (AsciiStringValue != NULL) {
        AsciiSPrint (AsciiStringValue, SECURE_BOOT_MODE_STR_LEN *sizeof (CHAR8), "%a", (SetupMode == USER_MODE ? SECURE_BOOT_USER_MODE : SECURE_BOOT_SETUP_MODE));
        if (ProvisionMode || (AsciiStrCmp (SecureBootCs->SecureBootMode, AsciiStringValue) != 0)) {
          SecureBootCs->SecureBootMode = AsciiStringValue;
          PropertyChanged              = TRUE;
        } else {
          FreePool (AsciiStringValue);
        }
      }
    } else {
      DEBUG ((DEBUG_ERROR, "%a: cannot read setup mode: %r\n", __func__, Status));
    }
  }

  //
  // Convert C structure back to JSON text.
  //
  Status = JsonStructProtocol->ToJson (
                                 JsonStructProtocol,
                                 (EFI_REST_JSON_STRUCTURE_HEADER *)SecureBoot,
                                 ResultJson
                                 );
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a: ToJson() failed: %r\n", __func__, Status));
  }

  //
  // Release resource.
  //
  JsonStructProtocol->DestoryStructure (
                        JsonStructProtocol,
                        (EFI_REST_JSON_STRUCTURE_HEADER *)SecureBoot
                        );

  if (EFI_ERROR (Status)) {
    return Status;
  }

  return (PropertyChanged ? EFI_SUCCESS : EFI_NOT_FOUND);
}

/**
  Provision Redfish resource and upload data to Redfish service. This function
  checks OEM data and platform addendum data before sending data to Redfish service.

  @param[in]   Private   Pointer to private data.

  @retval EFI_SUCCESS              Provision Redfish resource successfully.
  @retval Others                   Some error happened.

**/
EFI_STATUS
ProvisioningSecureBootResource (
  IN  REDFISH_RESOURCE_COMMON_PRIVATE  *Private
  )
{
  EFI_STATUS        Status;
  CHAR8             *Json;
  CHAR8             *JsonWithAddendum;
  REDFISH_RESPONSE  Response;

  if (Private == NULL) {
    return EFI_INVALID_PARAMETER;
  }

  ZeroMem (&Response, sizeof (REDFISH_RESPONSE));
  Json = NULL;

  Status = ProvisioningSecureBootProperties (
             Private->JsonStructProtocol,
             SecureBootEmptyJson,
             NULL,
             REDFISH_DUMMY_CONFIG_LANG,
             TRUE,
             &Json
             );
  if (EFI_ERROR (Status)) {
    if (Status == EFI_NOT_FOUND) {
      DEBUG ((REDFISH_DEBUG_TRACE, "%a: provisioning existing resource for %s ignored. Nothing changed\n", __func__, REDFISH_DUMMY_CONFIG_LANG));
      Status = EFI_SUCCESS;
    } else {
      DEBUG ((DEBUG_ERROR, "%a: provisioning existing resource for %s failed: %r\n", __func__, REDFISH_DUMMY_CONFIG_LANG, Status));
    }

    goto ON_RELEASE;
  }

  //
  // Check and see if platform has OEM data or not
  //
  Status = RedfishGetOemData (
             Private->Uri,
             RESOURCE_SCHEMA,
             RESOURCE_SCHEMA_VERSION,
             Json,
             &JsonWithAddendum
             );
  if (!EFI_ERROR (Status) && (JsonWithAddendum != NULL)) {
    FreePool (Json);
    Json             = JsonWithAddendum;
    JsonWithAddendum = NULL;
  }

  //
  // Check and see if platform has addendum data or not
  //
  Status = RedfishGetAddendumData (
             Private->Uri,
             RESOURCE_SCHEMA,
             RESOURCE_SCHEMA_VERSION,
             Json,
             &JsonWithAddendum
             );
  if (!EFI_ERROR (Status) && (JsonWithAddendum != NULL)) {
    FreePool (Json);
    Json             = JsonWithAddendum;
    JsonWithAddendum = NULL;
  }

  DEBUG ((REDFISH_DEBUG_TRACE, "%a: provisioning existing resource for %s\n", __func__, REDFISH_DUMMY_CONFIG_LANG));

  //
  // PATCH back to instance
  //
  Status = RedfishHttpPatchResource (Private->RedfishService, Private->Uri, Json, &Response);
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a: patch resource for %s failed: %r\n", __func__, REDFISH_DUMMY_CONFIG_LANG, Status));
  }

ON_RELEASE:

  if (Json != NULL) {
    FreePool (Json);
  }

  RedfishHttpFreeResponse (&Response);

  return Status;
}

/**
  Provisioning redfish resource to Redfish service.

  @param[in]   Private             Pointer to private data.
  @param[in]   ResourceExist       This is not used in Redfish secure
                                   boot resource.

  @retval EFI_SUCCESS              Provision resource successfully.
  @retval Others                   Some error happened.

**/
EFI_STATUS
RedfishProvisioningResourceCommon (
  IN     REDFISH_RESOURCE_COMMON_PRIVATE  *Private,
  IN     BOOLEAN                          ResourceExist
  )
{
  if (Private == NULL) {
    return EFI_INVALID_PARAMETER;
  }

  return ProvisioningSecureBootResource (Private);
}

/**
  Check resource from given Json data.

  @param[in]   This                Pointer to REDFISH_RESOURCE_COMMON_PRIVATE instance.
  @param[in]   Json                The JSON data to check.
  @param[in]   HeaderEtag          The Etag string returned in HTTP header.

  @retval EFI_SUCCESS              Check resource successfully.
  @retval Others                   Some error happened.

**/
EFI_STATUS
RedfishCheckResourceCommon (
  IN     REDFISH_RESOURCE_COMMON_PRIVATE  *Private,
  IN     CHAR8                            *Json,
  IN     CHAR8                            *HeaderEtag OPTIONAL
  )
{
  UINTN       Index;
  EFI_STATUS  Status;
  UINTN       Count;
  EFI_STRING  Property;

  if ((Private == NULL) || IS_EMPTY_STRING (Json)) {
    return EFI_INVALID_PARAMETER;
  }

  //
  // Check ETAG to see if we need to check it
  //
  if (CheckEtag (Private->Uri, HeaderEtag, NULL)) {
    //
    // No change
    //
    DEBUG ((REDFISH_DEBUG_TRACE, "%a: ETAG: %s has no change, ignore check action\n", __func__, Private->Uri));
    return EFI_SUCCESS;
  }

  Count = sizeof (mSecureBootSupportedAttributes) / sizeof (mSecureBootSupportedAttributes[0]);
  if (Count == 0) {
    return EFI_UNSUPPORTED;
  }

  Status = EFI_SUCCESS;
  for (Index = 0; Index < Count; Index++) {
    Property = mSecureBootSupportedAttributes[Index];
    if (Property == NULL) {
      continue;
    }

    DEBUG ((REDFISH_DEBUG_TRACE, "%a: [%d] check attribute for: %s\n", __func__, Index, Property));
    if (!MatchPropertyWithJsonContext (Property, Json)) {
      DEBUG ((REDFISH_DEBUG_TRACE, "%a: property is missing: %s\n", __func__, Property));
      Status = EFI_NOT_FOUND;
      break;
    }
  }

  return Status;
}

/**
  Update resource to Redfish service.

  @param[in]   Private             Pointer to REDFISH_RESOURCE_COMMON_PRIVATE instance.
  @param[in]   Json                The JSON data to be updated.

  @retval EFI_SUCCESS              Update resource successfully.
  @retval Others                   Some error happened.

**/
EFI_STATUS
RedfishUpdateResourceCommon (
  IN     REDFISH_RESOURCE_COMMON_PRIVATE  *Private,
  IN     CHAR8                            *InputJson
  )
{
  EFI_STATUS        Status;
  CHAR8             *Json;
  CHAR8             *JsonWithAddendum;
  REDFISH_RESPONSE  Response;

  if ((Private == NULL) || IS_EMPTY_STRING (InputJson)) {
    return EFI_INVALID_PARAMETER;
  }

  ZeroMem (&Response, sizeof (REDFISH_RESPONSE));
  Json = NULL;

  Status = ProvisioningSecureBootProperties (
             Private->JsonStructProtocol,
             SecureBootEmptyJson,
             NULL,
             REDFISH_DUMMY_CONFIG_LANG,
             TRUE,
             &Json
             );
  if (EFI_ERROR (Status)) {
    if (Status == EFI_NOT_FOUND) {
      DEBUG ((REDFISH_DEBUG_TRACE, "%a: update resource for %s ignored. Nothing changed\n", __func__, REDFISH_DUMMY_CONFIG_LANG));
      Status = EFI_SUCCESS;
    } else {
      DEBUG ((DEBUG_ERROR, "%a: update resource for %s failed: %r\n", __func__, REDFISH_DUMMY_CONFIG_LANG, Status));
    }

    goto ON_RELEASE;
  }

  //
  // Check and see if platform has OEM data or not
  //
  Status = RedfishGetOemData (
             Private->Uri,
             RESOURCE_SCHEMA,
             RESOURCE_SCHEMA_VERSION,
             Json,
             &JsonWithAddendum
             );
  if (!EFI_ERROR (Status) && (JsonWithAddendum != NULL)) {
    FreePool (Json);
    Json             = JsonWithAddendum;
    JsonWithAddendum = NULL;
  }

  //
  // Check and see if platform has addendum data or not
  //
  Status = RedfishGetAddendumData (
             Private->Uri,
             RESOURCE_SCHEMA,
             RESOURCE_SCHEMA_VERSION,
             Json,
             &JsonWithAddendum
             );
  if (!EFI_ERROR (Status) && (JsonWithAddendum != NULL)) {
    FreePool (Json);
    Json             = JsonWithAddendum;
    JsonWithAddendum = NULL;
  }

  DEBUG ((REDFISH_DEBUG_TRACE, "%a: update resource for %s\n", __func__, REDFISH_DUMMY_CONFIG_LANG));

  //
  // PATCH back to instance
  //
  Status = RedfishHttpPatchResource (Private->RedfishService, Private->Uri, Json, &Response);
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a: patch resource for %s failed: %r\n", __func__, REDFISH_DUMMY_CONFIG_LANG, Status));
  }

ON_RELEASE:

  if (Json != NULL) {
    FreePool (Json);
  }

  RedfishHttpFreeResponse (&Response);

  return Status;
}

/**
  Identify resource in given Json data.

  @param[in]   Private             Pointer to REDFISH_RESOURCE_COMMON_PRIVATE instance.
  @param[in]   Json                The JSON to be identified.

  @retval EFI_SUCCESS              Identify resource successfully.
  @retval Others                   Some error happened.

**/
EFI_STATUS
RedfishIdentifyResourceCommon (
  IN     REDFISH_RESOURCE_COMMON_PRIVATE  *Private,
  IN     CHAR8                            *Json
  )
{
  BOOLEAN  Supported;

  Supported = RedfishIdentifyResource (Private->Uri, Private->Json);
  if (Supported) {
    //
    // Keep URI and ConfigLang mapping
    //
    RedfishSetRedfishUri (REDFISH_DUMMY_CONFIG_LANG, Private->Uri);
  }

  return (Supported ? EFI_SUCCESS : EFI_UNSUPPORTED);
}

/**
  Handle Redfish resource in Uri.

  @param[in]   Private             Pointer to REDFISH_RESOURCE_COMMON_PRIVATE instance.
  @param[in]   Uri                 URI to Redfish resource that we like to process.

  @retval EFI_SUCCESS              Handle resource successfully.
  @retval Others                   Some error happened.

**/
EFI_STATUS
HandleResource (
  IN  REDFISH_RESOURCE_COMMON_PRIVATE  *Private,
  IN  EFI_STRING                       Uri
  )
{
  EFI_STATUS           Status;
  REDFISH_SCHEMA_INFO  SchemaInfo;
  EFI_STRING           ConfigLang;

  if ((Private == NULL) || IS_EMPTY_STRING (Uri)) {
    return EFI_INVALID_PARAMETER;
  }

  //
  // Resource match
  //

  DEBUG ((REDFISH_DEBUG_TRACE, "%a: process resource for: %s\n", __func__, Uri));

  Status = GetRedfishSchemaInfo (Private->RedfishService, Private->JsonStructProtocol, Uri, NULL, &SchemaInfo);
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a: failed to get schema information from: %s %r\n", __func__, Uri, Status));
    return Status;
  }

  //
  // Check and see if this is target resource that we want to handle.
  // Some resource is handled by other provider so we have to make sure this first.
  //
  DEBUG ((REDFISH_DEBUG_TRACE, "%a: Identify for %s\n", __func__, Uri));
  ConfigLang = RedfishGetConfigLanguage (Uri);
  if (ConfigLang == NULL) {
    Status = EdkIIRedfishResourceConfigIdentify (&SchemaInfo, Uri, NULL, Private->InformationExchange);
    if (EFI_ERROR (Status)) {
      if (Status == EFI_UNSUPPORTED) {
        DEBUG ((REDFISH_DEBUG_TRACE, "%a: \"%s\" is not handled by us\n", __func__, Uri));
        return EFI_SUCCESS;
      } else if (Status == EFI_NOT_FOUND) {
        DEBUG ((REDFISH_DEBUG_TRACE, "%a: \"%s\" has nothing to handle\n", __func__, Uri));
        return EFI_SUCCESS;
      }

      DEBUG ((DEBUG_ERROR, "%a: fail to identify resource: \"%s\": %r\n", __func__, Uri, Status));
      return Status;
    }
  } else {
    DEBUG ((REDFISH_DEBUG_TRACE, "%a: history record found: %s\n", __func__, ConfigLang));
    FreePool (ConfigLang);
  }

  //
  // Check and see if target property exist or not even when collection member exists.
  // If not, we still do provision.
  //
  DEBUG ((REDFISH_DEBUG_TRACE, "%a Check for %s\n", __func__, Uri));
  Status = EdkIIRedfishResourceConfigCheck (&SchemaInfo, Uri, NULL);
  if (EFI_ERROR (Status)) {
    if (Status == EFI_UNSUPPORTED) {
      DEBUG ((REDFISH_DEBUG_TRACE, "%a: \"%s\" is not handled by us\n", __func__, Uri));
      return EFI_SUCCESS;
    }

    //
    // The target property does not exist, do the provision to create property.
    //
    DEBUG ((REDFISH_DEBUG_TRACE, "%a provision for %s\n", __func__, Uri));
    Status = EdkIIRedfishResourceConfigProvisioning (&SchemaInfo, Uri, NULL, Private->InformationExchange, FALSE);
    if (EFI_ERROR (Status)) {
      DEBUG ((DEBUG_ERROR, "%a: failed to provision with GET mode: %r\n", __func__, Status));
    }

    DEBUG ((REDFISH_DEBUG_TRACE, "%a: process resource for: %s finished\n", __func__, Uri));

    return Status;
  }

  //
  // Consume first.
  //
  DEBUG ((REDFISH_DEBUG_TRACE, "%a consume for %s\n", __func__, Uri));
  Status = EdkIIRedfishResourceConfigConsume (&SchemaInfo, Uri, NULL);
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a: failed to consume resource for: %s: %r\n", __func__, Uri, Status));
  }

  //
  // Patch.
  //
  DEBUG ((REDFISH_DEBUG_TRACE, "%a update for %s\n", __func__, Uri));
  Status = EdkIIRedfishResourceConfigUpdate (&SchemaInfo, Uri, NULL);
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a: failed to update resource for: %s: %r\n", __func__, Uri, Status));
  }

  DEBUG ((REDFISH_DEBUG_TRACE, "%a: process resource for: %s finished\n", __func__, Uri));

  return Status;
}
