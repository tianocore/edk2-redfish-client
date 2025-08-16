/** @file
  Redfish feature driver implementation - common functions

  (C) Copyright 2020-2022 Hewlett Packard Enterprise Development LP<BR>
  Copyright (c) 2023, NVIDIA CORPORATION & AFFILIATES. All rights reserved.
  Copyright (C) 2024-2025 Advanced Micro Devices, Inc. All rights reserved.<BR>

  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include "BiosCommon.h"

CHAR8  BiosEmptyJson[] = "{\"@odata.id\": \"\", \"@odata.type\": \"#Bios.v1_1_0.Bios\", \"Id\": \"\", \"Name\": \"\", \"Attributes\":{}}";

REDFISH_RESOURCE_COMMON_PRIVATE  *mRedfishResourcePrivate             = NULL;
EFI_HANDLE                       mRedfishResourceConfigProtocolHandle = NULL;
REDFISH_SCHEMA_INFO              mSchemaInfo                          = {
  { RESOURCE_SCHEMA        },
  { RESOURCE_SCHEMA_MAJOR  },
  { RESOURCE_SCHEMA_MINOR  },
  { RESOURCE_SCHEMA_ERRATA }
};

/**
  Consume resource from given URI.

  @param[in]   This                Pointer to REDFISH_RESOURCE_COMMON_PRIVATE instance.
  @param[in]   Json                The JSON to consume.
  @param[in]   HeaderEtag          The Etag string returned in HTTP header.

  @retval EFI_SUCCESS              Value is returned successfully.
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
  EFI_REDFISH_BIOS_V1_1_0           *Bios;
  EFI_REDFISH_BIOS_V1_1_0_CS        *BiosCs;
  EFI_STRING                        ConfigureLang;
  RedfishCS_Type_EmptyProp_CS_Data  *EmptyPropCs;
  CHAR8                             *PatchedJson;

  if ((Private == NULL) || IS_EMPTY_STRING (Json)) {
    return EFI_INVALID_PARAMETER;
  }

  Bios          = NULL;
  BiosCs        = NULL;
  ConfigureLang = NULL;
  PatchedJson   = NULL;

  if (PcdGetBool (PcdRedfishCompatibleSchemaSupport)) {
    Status = RedfishSetCompatibleSchemaVersion (&mSchemaInfo, Json, &PatchedJson);
    if (EFI_ERROR (Status)) {
      DEBUG ((DEBUG_ERROR, "%a, cannot set compatible schema version: %r\n", __func__, Status));
      return Status;
    }
  }

  Status = Private->JsonStructProtocol->ToStructure (
                                          Private->JsonStructProtocol,
                                          NULL,
                                          (PatchedJson == NULL ? Json : PatchedJson),
                                          (EFI_REST_JSON_STRUCTURE_HEADER **)&Bios
                                          );
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a: ToStructure() failed: %r\n", __func__, Status));
    goto ON_RELEASE;
  }

  BiosCs = Bios->Bios;

  //
  // Check ETAG to see if we need to consume it
  //
  if (CheckEtag (Private->Uri, HeaderEtag, BiosCs->odata_etag)) {
    //
    // No change
    //
    DEBUG ((DEBUG_MANAGEABILITY, "%a: ETAG: %s has no change, ignore consume action\n", __func__, Private->Uri));
    Status = EFI_SUCCESS;
    goto ON_RELEASE;
  }

  //
  // Handle ATTRIBUTES
  //
  if (BiosCs->Attributes == NULL) {
    BiosCs->Attributes = AllocateZeroPool (sizeof (RedfishBios_V1_1_0_Attributes_CS));
    ASSERT (BiosCs->Attributes != NULL);
    // initialize list
    BiosCs->Attributes->Prop.ForwardLink = &BiosCs->Attributes->Prop;
  }

  //
  // Handle ATTRIBUTES->EmptyProperty
  //
  if (BiosCs->Attributes != NULL) {
    //
    // Validate empty property.
    //
    if (BiosCs->Attributes->Prop.ForwardLink == &BiosCs->Attributes->Prop) {
      goto ON_RELEASE;
    }

    EmptyPropCs = (RedfishCS_Type_EmptyProp_CS_Data *)BiosCs->Attributes->Prop.ForwardLink;
    if (EmptyPropCs->Header.ResourceType == RedfishCS_Type_JSON) {
      DEBUG ((DEBUG_ERROR, "%a: Empty property with RedfishCS_Type_JSON type resource is not supported yet. (%s)\n", __func__, Private->Uri));
      goto ON_RELEASE;
    }

    if (EmptyPropCs->NunmOfProperties > 0) {
      //
      // Find corresponding configure language for collection resource.
      //
      ConfigureLang = GetConfigureLang (BiosCs->odata_id, "Attributes");
      if (ConfigureLang != NULL) {
        DEBUG ((DEBUG_MANAGEABILITY, "%a: Configure language %s.\n", __func__, ConfigureLang));
        Status = ApplyFeatureSettingsVagueType (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, ConfigureLang, EmptyPropCs->KeyValuePtr, EmptyPropCs->NunmOfProperties);
        if (EFI_ERROR (Status)) {
          DEBUG ((DEBUG_ERROR, "%a: apply setting for %s failed: %r\n", __func__, ConfigureLang, Status));
        }

        FreePool (ConfigureLang);
      } else {
        DEBUG ((DEBUG_ERROR, "%a: can not get configure language for URI: %s\n", __func__, Private->Uri));
      }
    }
  }

ON_RELEASE:

  //
  // Release resource.
  //
  if (Bios != NULL) {
    Private->JsonStructProtocol->DestoryStructure (
                                   Private->JsonStructProtocol,
                                   (EFI_REST_JSON_STRUCTURE_HEADER *)Bios
                                   );
  }

  if (PatchedJson != NULL) {
    FreePool (PatchedJson);
  }

  return EFI_SUCCESS;
}

/**
  Provision the BIOS configurations.

  @param[in]   JsonStructProtocol   Pointer to EFI_REST_JSON_STRUCTURE_PROTOCOL instance.
  @param[in]   InputJson            The input JSON file
  @param[in]   ResourceId           The Redfish resource ID.
  @param[in]   ConfigureLang        ConfigureLang of BIOS configuration.
  @param[in]   ProvisionMode        TRUE is provsion a new resource, FALSE means provision an exist resource.
  @param[out]  ResultJson           The final BIOS Redfish resource to provision.

  @retval EFI_SUCCESS               The final JSON of BIOS Redfish resource is returned.
  @retval Others                    Some error happened.

**/
EFI_STATUS
ProvisioningBiosProperties (
  IN  EFI_REST_JSON_STRUCTURE_PROTOCOL  *JsonStructProtocol,
  IN  CHAR8                             *InputJson,
  IN  CHAR8                             *ResourceId OPTIONAL,
  IN  EFI_STRING                        ConfigureLang,
  IN  BOOLEAN                           ProvisionMode,
  OUT CHAR8                             **ResultJson
  )
{
  EFI_REDFISH_BIOS_V1_1_0       *Bios;
  EFI_REDFISH_BIOS_V1_1_0_CS    *BiosCs;
  EFI_REDFISH_BIOS_V1_1_0       *BiosEmpty;
  EFI_REDFISH_BIOS_V1_1_0_CS    *BiosCsEmpty;
  EFI_STATUS                    Status;
  BOOLEAN                       PropertyChanged;
  RedfishCS_EmptyProp_KeyValue  *PropertyVagueValues;
  UINT32                        VagueValueNumber;
  CHAR8                         *PatchedJson;

  if ((JsonStructProtocol == NULL) || (ResultJson == NULL) || IS_EMPTY_STRING (InputJson) || IS_EMPTY_STRING (ConfigureLang)) {
    return EFI_INVALID_PARAMETER;
  }

  DEBUG ((DEBUG_MANAGEABILITY, "%a: Provision for %s with: %s\n", __func__, ConfigureLang, (ProvisionMode ? L"Provision resource" : L"Update resource")));

  *ResultJson     = NULL;
  PropertyChanged = FALSE;
  Bios            = NULL;
  PatchedJson     = NULL;

  if (PcdGetBool (PcdRedfishCompatibleSchemaSupport)) {
    Status = RedfishSetCompatibleSchemaVersion (&mSchemaInfo, InputJson, &PatchedJson);
    if (EFI_ERROR (Status)) {
      DEBUG ((DEBUG_ERROR, "%a: Cannot set compatible schema version: %r\n", __func__, Status));
      return Status;
    }
  }

  Bios   = NULL;
  Status = JsonStructProtocol->ToStructure (
                                 JsonStructProtocol,
                                 NULL,
                                 (PatchedJson == NULL ? InputJson : PatchedJson),
                                 (EFI_REST_JSON_STRUCTURE_HEADER **)&Bios
                                 );
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a: ToStructure failure: %r\n", __func__, Status));
    goto ON_RELEASE;
  }

  BiosEmpty = NULL;
  Status    = JsonStructProtocol->ToStructure (
                                    JsonStructProtocol,
                                    NULL,
                                    (PatchedJson == NULL ? BiosEmptyJson : PatchedJson),
                                    (EFI_REST_JSON_STRUCTURE_HEADER **)&BiosEmpty
                                    );
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a: ToStructure failure: %r\n", __func__, Status));
    goto ON_RELEASE;
  }

  BiosCs = Bios->Bios;
  //
  // Initial an empty ComputerSystemCS
  //
  BiosCsEmpty = BiosEmpty->Bios;

  //
  // Handle ATTRIBUTES
  //
  if (BiosCs->Attributes != NULL) {
    //
    // Handle ATTRIBUTES
    //
    if (PropertyChecker (BiosCs->Attributes, ProvisionMode)) {
      DEBUG ((DEBUG_MANAGEABILITY, "%a: Getting platform configuration values of all x-UEFI-redfish configuration languages...\n", __func__));
      PropertyVagueValues = GetPropertyVagueValue (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, L"Attributes", ConfigureLang, &VagueValueNumber);
      DEBUG ((DEBUG_MANAGEABILITY, "%a: %d BIOS Configurations to compare (Provision mode: %s)\n", __func__, VagueValueNumber, ProvisionMode ? L"New" : L"Exist"));
      if (PropertyVagueValues != NULL) {
        if (ProvisionMode || !CompareRedfishPropertyVagueValues (
                                ((RedfishCS_Type_EmptyProp_CS_Data *)BiosCs->Attributes->Prop.ForwardLink)->KeyValuePtr,
                                ((RedfishCS_Type_EmptyProp_CS_Data *)BiosCs->Attributes->Prop.ForwardLink)->NunmOfProperties,
                                PropertyVagueValues,
                                VagueValueNumber
                                ))
        {
          //
          // Use the properties on system to replace the one on Redfish service.
          //
          ((RedfishCS_Type_EmptyProp_CS_Data *)BiosCsEmpty->Attributes->Prop.ForwardLink)->KeyValuePtr      = PropertyVagueValues;
          ((RedfishCS_Type_EmptyProp_CS_Data *)BiosCsEmpty->Attributes->Prop.ForwardLink)->NunmOfProperties = VagueValueNumber;
          PropertyChanged                                                                                   = TRUE;
        }
      }
    }
  }

  //
  // Convert C structure back to JSON text.
  //
  Status = JsonStructProtocol->ToJson (
                                 JsonStructProtocol,
                                 (EFI_REST_JSON_STRUCTURE_HEADER *)BiosEmpty,
                                 ResultJson
                                 );
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a: ToJson() failed: %r\n", __func__, Status));
    goto ON_RELEASE;
  }

  if (PropertyChanged) {
    //
    // Remove Redfish unchangeable properties.
    //
    DEBUG ((
      DEBUG_MANAGEABILITY,
      "%a: PropertyChanged == TRUE, configuration is updated from BIOS or the Redfish pending setting that was just applied to BIOS.\n",
      __func__
      ));
    Status = RedfishRemoveUnchangeableProperties (ResultJson);
    if (EFI_ERROR (Status)) {
      DEBUG ((DEBUG_ERROR, "%a: Fail to remove Redfish unchangeable properties from ResultJson.\n", __func__));
      *ResultJson = NULL;
    }
  }

ON_RELEASE:
  //
  // Release resource.
  //
  if (Bios != NULL) {
    JsonStructProtocol->DestoryStructure (
                          JsonStructProtocol,
                          (EFI_REST_JSON_STRUCTURE_HEADER *)Bios
                          );
  }

  JsonStructProtocol->DestoryStructure (
                        JsonStructProtocol,
                        (EFI_REST_JSON_STRUCTURE_HEADER *)BiosEmpty
                        );

  if (PatchedJson != NULL) {
    FreePool (PatchedJson);
  }

  if (EFI_ERROR (Status)) {
    return Status;
  }

  return (PropertyChanged ? EFI_SUCCESS : EFI_NOT_FOUND);
}

/**
  Provisioning the refresh new BIOS Redfish resource for one configuration language.

  @param[in]   Private             Pointer to REDFISH_RESOURCE_COMMON_PRIVATE.
  @param[in]   Index               ConfigureLang index.
  @param[in]   ConfigureLang       ConfigureLang string.

  @retval EFI_SUCCESS              BIOS Redfish resource is provisioned sucessfully.
  @retval Others                   Some error happen.

**/
EFI_STATUS
ProvisioningBiosResource (
  IN  REDFISH_RESOURCE_COMMON_PRIVATE  *Private,
  IN  UINTN                            Index,
  IN  EFI_STRING                       ConfigureLang
  )
{
  CHAR8             *Json;
  CHAR8             *JsonWithAddendum;
  EFI_STATUS        Status;
  EFI_STRING        NewResourceLocation;
  CHAR8             ResourceId[16];
  REDFISH_RESPONSE  Response;

  if (IS_EMPTY_STRING (ConfigureLang) || (Private == NULL)) {
    return EFI_INVALID_PARAMETER;
  }

  ZeroMem (&Response, sizeof (REDFISH_RESPONSE));
  AsciiSPrint (ResourceId, sizeof (ResourceId), "%d", Index);

  NewResourceLocation = NULL;

  Status = ProvisioningBiosProperties (
             Private->JsonStructProtocol,
             BiosEmptyJson,
             ResourceId,
             ConfigureLang,
             TRUE,
             &Json
             );
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a: provisioning resource for %s failed: %r\n", __func__, ConfigureLang, Status));
    return Status;
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

  Status = RedfishHttpPostResource (Private->RedfishService, Private->Uri, Json, &Response);
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a: post Bios resource for %s failed: %r\n", __func__, ConfigureLang, Status));
    goto RELEASE_RESOURCE;
  }

  //
  // Per Redfish spec. the URL of new resource will be returned in "Location" header.
  //
  Status = GetHttpResponseLocation (&Response, &NewResourceLocation);
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a: cannot find new location: %r\n", __func__, Status));
    goto RELEASE_RESOURCE;
  }

  //
  // Keep location of new resource.
  //
  if (NewResourceLocation != NULL) {
    DEBUG ((DEBUG_MANAGEABILITY, "%a: Location: %s\n", __func__, NewResourceLocation));
    RedfishSetRedfishUri (ConfigureLang, NewResourceLocation);
  }

RELEASE_RESOURCE:

  if (NewResourceLocation != NULL) {
    FreePool (NewResourceLocation);
  }

  if (Json != NULL) {
    FreePool (Json);
  }

  RedfishHttpFreeResponse (&Response);

  return Status;
}

/**
  Provisioning the refresh new BIOS Redfish resource according to the configuration languages.

  @param[in]   Private             Pointer to REDFISH_RESOURCE_COMMON_PRIVATE.
                                   FALSE if resource does not exist POST method is used.

  @retval EFI_SUCCESS              BIOS Redfish resource is provisioned sucessfully.
          EFI_NOT_FOUND            No need to provision BIOS Redfish resource as
                                   there is no BIOS configuration is managed by Redfish.
  @retval Others                   Some error happened.

**/
EFI_STATUS
ProvisioningBiosResources (
  IN  REDFISH_RESOURCE_COMMON_PRIVATE  *Private
  )
{
  REDFISH_FEATURE_ARRAY_TYPE_CONFIG_LANG  ConfigureLangArray;

  if (Private == NULL) {
    return EFI_INVALID_PARAMETER;
  }

  ConfigureLangArray.Index         = 1;
  ConfigureLangArray.ConfigureLang = RedfishGetConfigLanguage (Private->Uri);
  if (ConfigureLangArray.ConfigureLang == NULL) {
    return EFI_NOT_FOUND;
  }

  DEBUG ((DEBUG_MANAGEABILITY, "%a: Create BIOS resource from ConfigureLang: %s\n", __func__, ConfigureLangArray.ConfigureLang));

  ProvisioningBiosResource (Private, ConfigureLangArray.Index, ConfigureLangArray.ConfigureLang);
  FreePool (ConfigureLangArray.ConfigureLang);
  return EFI_SUCCESS;
}

/**
  Provisioning the existing BIOS Redfish resource.

  @param[in]   Private             Pointer to REDFISH_RESOURCE_COMMON_PRIVATE.
                                   FALSE if resource does not exist POST method is used.

  @retval EFI_SUCCESS              Value is returned successfully.
  @retval Others                   Some error happened.

**/
EFI_STATUS
ProvisioningBiosExistResource (
  IN  REDFISH_RESOURCE_COMMON_PRIVATE  *Private
  )
{
  EFI_STATUS        Status;
  EFI_STRING        ConfigureLang;
  CHAR8             *Json;
  CHAR8             *JsonWithAddendum;
  REDFISH_RESPONSE  Response;

  if (Private == NULL) {
    return EFI_INVALID_PARAMETER;
  }

  Json          = NULL;
  ConfigureLang = NULL;
  ZeroMem (&Response, sizeof (REDFISH_RESPONSE));

  ConfigureLang = RedfishGetConfigLanguage (Private->Uri);
  if (ConfigureLang == NULL) {
    return EFI_NOT_FOUND;
  }

  DEBUG ((DEBUG_ERROR, "%a: provisioning existing resource for %s.\n", __func__, ConfigureLang));
  Status = ProvisioningBiosProperties (
             Private->JsonStructProtocol,
             BiosEmptyJson,
             NULL,
             ConfigureLang,
             TRUE,
             &Json
             );
  if (EFI_ERROR (Status)) {
    if (Status == EFI_NOT_FOUND) {
      DEBUG ((DEBUG_MANAGEABILITY, "%a: provisioning existing resource for %s ignored. Nothing changed\n", __func__, ConfigureLang));
      Status = EFI_SUCCESS;
    } else {
      DEBUG ((DEBUG_ERROR, "%a: provisioning existing resource for %s failed: %r\n", __func__, ConfigureLang, Status));
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

  DEBUG ((DEBUG_MANAGEABILITY, "%a: provisioning existing resource for %s\n", __func__, ConfigureLang));

  //
  // PATCH the resource.
  //
  Status = RedfishHttpPatchResource (Private->RedfishService, Private->Uri, Json, &Response);
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a: patch resource for %s failed: %r\n", __func__, ConfigureLang, Status));
  }

ON_RELEASE:

  RedfishHttpFreeResponse (&Response);

  if (Json != NULL) {
    FreePool (Json);
  }

  if (ConfigureLang != NULL) {
    FreePool (ConfigureLang);
  }

  return Status;
}

/**
  Provisioning redfish resource by given URI.

  @param[in]   This                Pointer to EFI_HP_REDFISH_HII_PROTOCOL instance.
  @param[in]   ResourceExist       TRUE if resource exists, PUT method will be used.
                                   FALSE if resource does not exist POST method is used.

  @retval EFI_SUCCESS              Value is returned successfully.
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

  return (ResourceExist ? ProvisioningBiosExistResource (Private) : ProvisioningBiosResources (Private));
}

/**
  Check resource from given URI.

  @param[in]   This                Pointer to REDFISH_RESOURCE_COMMON_PRIVATE instance.
  @param[in]   Json                The JSON to consume.
  @param[in]   HeaderEtag          The Etag string returned in HTTP header.

  @retval EFI_SUCCESS              Value is returned successfully.
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
  EFI_STRING  *ConfigureLangList;
  UINTN       Count;
  EFI_STRING  Property;

  if ((Private == NULL) || IS_EMPTY_STRING (Json)) {
    return EFI_INVALID_PARAMETER;
  }

  //
  // Check ETAG to see if we need to check this resource again or not.
  //
  if (CheckEtag (Private->Uri, HeaderEtag, NULL)) {
    //
    // No change
    //
    DEBUG ((DEBUG_MANAGEABILITY, "%a: ETAG: %s has no change, ignore check action\n", __func__, Private->Uri));
    return EFI_SUCCESS;
  }

  Status = RedfishPlatformConfigGetConfigureLang (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, CONFIG_LANG_ARRAY_PATTERN, &ConfigureLangList, &Count);
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a: RedfishPlatformConfigGetConfigureLang failed: %r\n", __func__, Status));
    return Status;
  }

  DEBUG ((DEBUG_MANAGEABILITY, "%a: Total configure language %d\n", __func__, Count));
  if (Count == 0) {
    return EFI_UNSUPPORTED;
  }

  Status = EFI_NOT_FOUND;
  for (Index = 0; Index < Count; Index++) {
    Property = GetPropertyFromConfigureLang (Private->Uri, ConfigureLangList[Index]);
    if (Property == NULL) {
      continue;
    }

    if (MatchPropertyWithJsonContext (Property, Json)) {
      //
      // When there is any attribute found in /Bios/Attributes, it means that
      // the provisioning was performed before. Any missing attribute will
      // be handled by update operation.
      // When all attributes are missing in /Bios/Attributes, provisioning is
      // performed.
      //
      Status = EFI_SUCCESS;
    }
  }

  if (Status == EFI_NOT_FOUND) {
    DEBUG ((DEBUG_MANAGEABILITY, "%a, None of the BIOS property is found, we will provision it.\n", __func__));
  }

  FreePool (ConfigureLangList);
  return Status;
}

/**
  Update resource to given URI.

  @param[in]   This                Pointer to REDFISH_RESOURCE_COMMON_PRIVATE instance.
  @param[in]   Json                The JSON to consume.

  @retval EFI_SUCCESS              Value is returned successfully.
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
  EFI_STRING        ConfigureLang;
  REDFISH_RESPONSE  Response;

  if ((Private == NULL) || IS_EMPTY_STRING (InputJson)) {
    return EFI_INVALID_PARAMETER;
  }

  Json          = NULL;
  ConfigureLang = NULL;
  ZeroMem (&Response, sizeof (REDFISH_RESPONSE));

  ConfigureLang = RedfishGetConfigLanguage (Private->Uri);
  if (ConfigureLang == NULL) {
    return EFI_NOT_FOUND;
  }

  Status = ProvisioningBiosProperties (
             Private->JsonStructProtocol,
             InputJson,
             NULL,
             ConfigureLang,
             FALSE,
             &Json
             );
  if (EFI_ERROR (Status)) {
    if (Status == EFI_NOT_FOUND) {
      DEBUG ((DEBUG_MANAGEABILITY, "%a: update resource for %s ignored. Nothing changed\n", __func__, ConfigureLang));
      Status = EFI_SUCCESS;
    } else {
      DEBUG ((DEBUG_ERROR, "%a: update resource for %s failed: %r\n", __func__, ConfigureLang, Status));
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

  DEBUG ((DEBUG_MANAGEABILITY, "%a: update resource for %s\n", __func__, ConfigureLang));

  //
  // PUT back to Redfish BIOS resource.
  // We can't use PATCH here because PATCH to BIOS Redfish resource
  // put the changes on BIOS/SD.
  //
  Status = RedfishHttpPutResource (Private->RedfishService, Private->Uri, Json, &Response);
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a: HTTP PUT resource for %s failed: %r\n", __func__, ConfigureLang, Status));
  }

ON_RELEASE:

  RedfishHttpFreeResponse (&Response);

  if (Json != NULL) {
    FreePool (Json);
  }

  if (ConfigureLang != NULL) {
    FreePool (ConfigureLang);
  }

  return Status;
}

/**
  Identify resource from given URI.

  @param[in]   This                Pointer to REDFISH_RESOURCE_COMMON_PRIVATE instance.
  @param[in]   Json                The JSON to consume.

  @retval EFI_SUCCESS              Value is returned successfully.
  @retval Others                   Some error happened.

**/
EFI_STATUS
RedfishIdentifyResourceCommon (
  IN     REDFISH_RESOURCE_COMMON_PRIVATE  *Private,
  IN     CHAR8                            *Json
  )
{
  BOOLEAN                                      Supported;
  EFI_STATUS                                   Status;
  EFI_STRING                                   EndOfChar;
  REDFISH_FEATURE_ARRAY_TYPE_CONFIG_LANG_LIST  ConfigLangList;
  CHAR8                                        *PatchedJson;

  PatchedJson = NULL;

  if (PcdGetBool (PcdRedfishCompatibleSchemaSupport)) {
    Status = RedfishSetCompatibleSchemaVersion (&mSchemaInfo, Json, &PatchedJson);
    if (EFI_ERROR (Status)) {
      DEBUG ((DEBUG_ERROR, "%a, cannot set compatible schema version: %r\n", __func__, Status));
      return Status;
    }
  }

  Supported = RedfishIdentifyResource (Private->Uri, (PatchedJson == NULL ? Json : PatchedJson));
  if (PatchedJson != NULL) {
    FreePool (PatchedJson);
    PatchedJson = NULL;
  }

  if (Supported) {
    Status = RedfishFeatureGetUnifiedArrayTypeConfigureLang (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, CONFIG_LANG_ARRAY_PATTERN, &ConfigLangList);
    if (EFI_ERROR (Status)) {
      DEBUG ((DEBUG_ERROR, "%a: RedfishFeatureGetUnifiedArrayTypeConfigureLang failed: %r\n", __func__, Status));
      return Status;
    }

    if (ConfigLangList.Count == 0) {
      return EFI_SUCCESS;
    }

    // EndOfChar = StrStr (ConfigLangList.List[0].ConfigureLang, L"}");
    Status = IsConfigLangArray (ConfigLangList.List[0].ConfigureLang, NULL, &EndOfChar);
    if (EFI_ERROR (Status) && (Status != EFI_NOT_FOUND)) {
      ASSERT (FALSE);
      return EFI_DEVICE_ERROR;
    }

    if (Status != EFI_SUCCESS) {
      //
      // This is not the collection config language.
      //
      GetConfigLangNodeByIndex (ConfigLangList.List[0].ConfigureLang, 0, &EndOfChar);
    }

    *(++EndOfChar) = '\0';
    //
    // Keep URI and ConfigLang mapping
    //
    RedfishSetRedfishUri (ConfigLangList.List[0].ConfigureLang, Private->Uri);
    //
    // Set the configuration language in the RESOURCE_INFORMATION_EXCHANGE.
    // This information is sent back to the parent resource (e.g. the collection driver).
    //
    EdkIIRedfishResourceSetConfigureLang (mRedfishResourceConfigProtocolHandle, &ConfigLangList);
    DestroyConfiglanguageList (&ConfigLangList);
    return EFI_SUCCESS;
  }

  return EFI_UNSUPPORTED;
}

EFI_STATUS
HandleResource (
  IN  REDFISH_RESOURCE_COMMON_PRIVATE  *Private,
  IN  EFI_STRING                       Uri
  )
{
  EFI_STATUS           Status;
  REDFISH_SCHEMA_INFO  SchemaInfo;
  EFI_STRING           ConfigLang;
  BOOLEAN              SystemResetDetected;

  if ((Private == NULL) || IS_EMPTY_STRING (Uri)) {
    return EFI_INVALID_PARAMETER;
  }

  //
  // Resource matching.
  //
  DEBUG ((DEBUG_MANAGEABILITY, "%a: process resource for: %s\n", __func__, Uri));

  Status = GetRedfishSchemaInfo (Private->RedfishService, Private->JsonStructProtocol, Uri, NULL, &SchemaInfo);
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a: failed to get schema information from: %s %r\n", __func__, Uri, Status));
    return Status;
  }

  //
  // Check and see if this is target resource that we want to handle.
  // Some resource is handled by other provider so we have to make sure this first.
  //
  DEBUG ((DEBUG_MANAGEABILITY, "%s Identify for %s\n", __func__, Uri));
  SystemResetDetected = FALSE;
  ConfigLang          = RedfishGetConfigLanguage (Uri);
  if (ConfigLang == NULL) {
    Status = EdkIIRedfishResourceConfigIdentify (&SchemaInfo, Uri, NULL, Private->InformationExchange);
    if (EFI_ERROR (Status)) {
      if (Status == EFI_UNSUPPORTED) {
        DEBUG ((DEBUG_MANAGEABILITY, "%a: \"%s\" is not handled by us\n", __func__, Uri));
        return EFI_SUCCESS;
      } else if (Status == EFI_NOT_FOUND) {
        DEBUG ((DEBUG_MANAGEABILITY, "%a, \"%s\" has nothing to handle\n", __func__, Uri));
        return EFI_SUCCESS;
      }

      DEBUG ((DEBUG_ERROR, "%a: fail to identify resource: \"%s\": %r\n", __func__, Uri, Status));
      return Status;
    }

    //
    // When there is no history record in UEFI variable, this is first boot or
    // system is reset by defaulting command. The pending setting on BMC may be
    // a stale value so we will ignore pending settings in BMC.
    //
    SystemResetDetected = TRUE;
  } else {
    DEBUG ((REDFISH_DEBUG_TRACE, "%a: history record found: %s\n", __func__, ConfigLang));
    FreePool (ConfigLang);
  }

  //
  // Check and see if target property exist or not even when collection member exists.
  // If not, we still do provision.
  //
  DEBUG ((REDFISH_DEBUG_TRACE, "%a: Check for %s\n", __func__, Uri));
  Status = EdkIIRedfishResourceConfigCheck (&SchemaInfo, Uri, NULL);
  if (EFI_ERROR (Status)) {
    if (Status == EFI_UNSUPPORTED) {
      DEBUG ((REDFISH_DEBUG_TRACE, "%a: \"%s\" has no attribute that is handled by us\n", __func__, Uri));
      return EFI_SUCCESS;
    }

    if (Status == EFI_NOT_FOUND) {
      //
      // The target property does not exist, do the provision to create property.
      //
      DEBUG ((REDFISH_DEBUG_TRACE, "%a: None of properties are exist, full provision the resource for %s.\n", __func__, Uri));
      Status = EdkIIRedfishResourceConfigProvisioning (&SchemaInfo, Uri, NULL, Private->InformationExchange, TRUE);
      if (EFI_ERROR (Status)) {
        DEBUG ((DEBUG_ERROR, "%a: Failed to provision %r.\n", __func__, Status));
        return Status;
      }

      DEBUG ((DEBUG_MANAGEABILITY, "%a: Process resource for: %s finished.\n", __func__, Uri));
    } else {
      DEBUG ((DEBUG_ERROR, "%a: Failed to check the resource on %s %r.\n", __func__, Uri, Status));
      return Status;
    }
  }

  //
  // Consume first.
  //
  if (SystemResetDetected) {
    DEBUG ((DEBUG_MANAGEABILITY, "%a: System has been reset to the default setting. Ignore the pending settings and don't consume it because they may be the stale values.\n", __func__));
    DEBUG ((DEBUG_MANAGEABILITY, "%a: Skip the consume porcess.\n", __func__));
  } else {
    DEBUG ((DEBUG_MANAGEABILITY, "%a: Consume for %s\n", __func__, Uri));
    Status = EdkIIRedfishResourceConfigConsume (&SchemaInfo, Uri, NULL);
    if (EFI_ERROR (Status)) {
      DEBUG ((DEBUG_ERROR, "%a: Failed to consume resource for: %s: %r\n", __func__, Uri, Status));
    }
  }

  //
  // Patch it.
  //
  DEBUG ((REDFISH_DEBUG_TRACE, "%a Update for %s\n", __func__, Uri));
  Status = EdkIIRedfishResourceConfigUpdate (&SchemaInfo, Uri, NULL);
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a: Failed to update resource for: %s: %r\n", __func__, Uri, Status));
  }

  DEBUG ((DEBUG_MANAGEABILITY, "%a: Process resource for: %s finished\n", __func__, Uri));

  return Status;
}
