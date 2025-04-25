/** @file

  Redfish Bios Attribute Registry driver implementation

  Copyright (C) 2026 Advanced Micro Devices, Inc. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include "BiosAttributeRegistryDxe.h"

REDFISH_RESOURCE_COMMON_PRIVATE  *mRedfishBiosAttributeRegistryPrivate = NULL;

//
// Adding the entry to the structure for the
// supported PCIeDevice Redfish schema.
//
REDFISH_SCHEMA_INFO  SupportedRedfishSchema[] = {
  {
    REDFISH_BIOS_ATTRIBUTE_REGISTRY_SCHEMA_NAME,
    "1",
    "3",
    "6"
  }
};

CHAR8  EmptyAttributeRegistryJson[] = "{\"@odata.id\": \"\"," \
                                      "\"@odata.type\": \"#AttributeRegistry.v1_3_6.AttributeRegistry\"," \
                                      "\"Id\": \"\"," \
                                      "\"Name\": \"BIOS Attribute Registry\"," \
                                      "\"Language\":\"Eng\"," \
                                      "\"OwningEntity\": \"BIOS\"," \
                                      "\"RegistryVersion\":\"1.0.0\"}";

/**
  Provion the BIOS Attribute Registry to Redfish service.

  @param[in]     Private            Point to the instance of REDFISH_RESOURCE_COMMON_PRIVATE.
  @param[in]     AttributesJsonObj  JSON object of RegistryEntries.

  @retval EFI_SUCCESS              Redfish BIOS Attribute Registry is provisioned successfully.
  @retval Others                   Some errors happened.

**/
EFI_STATUS
ProvisionAttributeRegistry (
  IN  REDFISH_RESOURCE_COMMON_PRIVATE  *Private,
  IN  EDKII_JSON_VALUE                 AttributesJsonObj
  )
{
  EFI_STATUS                            Status;
  EDKII_JSON_VALUE                      AttributeRegistryJsonObj;
  EDKII_JSON_ERROR                      JsonError;
  CHAR8                                 *JsonString;
  REDFISH_RESPONSE                      Response;
  EFI_REDFISH_ATTRIBUTEREGISTRY_V1_3_6  *AttributeRegistry;
  EFI_REST_JSON_STRUCTURE_PROTOCOL      *JsonStructProtocol;

  DEBUG ((DEBUG_MANAGEABILITY, "%a: Provision BIOS AttributeRegistry to %s.\n", __func__, Private->Uri));

  JsonStructProtocol = Private->JsonStructProtocol;
  JsonString         = NULL;
  AttributeRegistry  = NULL;

  AttributeRegistryJsonObj = JsonLoadBuffer (EmptyAttributeRegistryJson, AsciiStrLen (EmptyAttributeRegistryJson), 0, &JsonError);
  if (AttributeRegistryJsonObj == NULL) {
    DEBUG ((DEBUG_ERROR, "%a: Unable to load JSON string to JSON object.\n", __func__));
    Status = EFI_DEVICE_ERROR;
    goto RELEASE_RESOURCE;
  }

  JsonObjectSetValue (AttributeRegistryJsonObj, "RegistryEntries", AttributesJsonObj);
  JsonString = JsonDumpString (AttributeRegistryJsonObj, EDKII_JSON_COMPACT);
  DEBUG ((DEBUG_MANAGEABILITY, "%a: Attribute registry string length = %d\n", __func__, AsciiStrLen (JsonString)));
  Status = JsonStructProtocol->ToStructure (
                                 JsonStructProtocol,
                                 NULL,
                                 JsonString,
                                 (EFI_REST_JSON_STRUCTURE_HEADER **)&AttributeRegistry
                                 );
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a: Unable to convert EmptyAttributeRegistryJson to C structure.\n", __func__));
    goto RELEASE_RESOURCE;
  }

  FreePool (JsonString);

  //
  // Add other properties to BIOS AttributeRegistry CS.
  //

  //
  // Convert C structure back to JSON text.
  //
  Status = JsonStructProtocol->ToJson (
                                 JsonStructProtocol,
                                 (EFI_REST_JSON_STRUCTURE_HEADER *)AttributeRegistry,
                                 &JsonString
                                 );
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a: ToJson() failed: %r\n", __func__, Status));
    goto RELEASE_RESOURCE;
  }

  JsonStructProtocol->DestoryStructure (
                        JsonStructProtocol,
                        (EFI_REST_JSON_STRUCTURE_HEADER *)AttributeRegistry
                        );

  Status = RedfishHttpPutResource (Private->RedfishService, Private->Uri, JsonString, &Response);
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a: PUT BIOS Attribute Registry failed: %r\n", __func__, Status));
    goto RELEASE_RESOURCE;
  }

RELEASE_RESOURCE:
  if (JsonString != NULL) {
    FreePool (JsonString);
  }

  if (AttributeRegistryJsonObj != NULL) {
    JsonValueFree (AttributeRegistryJsonObj);
  }

  if (AttributeRegistry != NULL) {
    FreePool (AttributeRegistry);
  }

  return Status;
}

/**
  Provion the BIOS Attribute Registry.

  @param[in]     Private  Point to the instance of REDFISH_RESOURCE_COMMON_PRIVATE

  @retval EFI_SUCCESS              Redfish BIOS Attribute Registry is provisioned successfully.
  @retval Others                   Some errors happened.

**/
EFI_STATUS
BiosAttributeRegistryHandler (
  IN REDFISH_RESOURCE_COMMON_PRIVATE  *Private,
  IN CHAR8                            *RedfishSchemaVersion
  )
{
  EFI_STATUS           Status;
  UINTN                Count;
  UINTN                Index;
  EFI_STRING           *ConfigLangList;
  EDKII_REDFISH_VALUE  RedfishValue;
  EDKII_JSON_VALUE     JsonValue;
  EDKII_JSON_VALUE     AttributesObj;
  EDKII_JSON_VALUE     AttributeObj;
  EDKII_JSON_VALUE     AttributesArray;
  CHAR8                *KeyAscii;

  if (Private == NULL) {
    return EFI_INVALID_PARAMETER;
  }

  DEBUG ((DEBUG_MANAGEABILITY, "%a: Bios attribute registry handler for %s\n", __func__, Private->Uri));

  ConfigLangList = NULL;
  KeyAscii       = NULL;
  KeyAscii       = AllocateZeroPool (REDFISH_BIOS_CONFIG_LANG_SIZE);
  if (KeyAscii == NULL) {
    DEBUG ((DEBUG_ERROR, "%a: unable to allocate memory for the string.\n", __func__));
    goto ON_RELEASE;
  }

  Status = RedfishPlatformConfigGetConfigureLang ("Bios", RedfishSchemaVersion, L"/Bios/.*", &ConfigLangList, &Count);
  if (Status == EFI_NOT_FOUND) {
    DEBUG ((DEBUG_MANAGEABILITY, "%a: no platform configuration is found.\n", __func__));
  } else if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a: Failed to get the configure language of the platform configurations.\n", __func__));
  }

  AttributesArray = NULL;
  AttributesObj   = NULL;
  //
  // Redfish property "Attributes"
  //
  AttributesObj = JsonValueInitObject ();
  if (AttributesObj == NULL) {
    Status = EFI_OUT_OF_RESOURCES;
    goto ON_RELEASE;
  }

  //
  // Array JSON object under "Attributes"
  //
  AttributesArray = JsonValueInitArray ();
  if (AttributesArray == NULL) {
    Status = EFI_OUT_OF_RESOURCES;
    goto ON_RELEASE;
  }

  //
  // Loop to get the attribute registry for each ConfigureLang.
  //
  for (Index = 0; Index < Count; Index++) {
    Status = UnicodeStrToAsciiStrS (
               (CONST CHAR16 *)ConfigLangList[Index],
               KeyAscii,
               REDFISH_BIOS_CONFIG_LANG_SIZE
               );
    if (EFI_ERROR (Status)) {
      DEBUG ((DEBUG_ERROR, "%a: failed to invoke UnicodeStrToAsciiStrS for key %s, %r,  keep going on the next one.\n", __func__, ConfigLangList[Index], Status));
      continue;
    }

    DEBUG ((DEBUG_MANAGEABILITY, "%a: Generate AttributeRegistry for the Attribute %s.\n", __func__, ConfigLangList[Index], Status));

    Status = RedfishPlatformConfigGetValue ("Bios", RedfishSchemaVersion, ConfigLangList[Index], &RedfishValue);
    if (EFI_ERROR (Status)) {
      DEBUG ((DEBUG_ERROR, "%a: Failed to get the value of configure language %s, keep going on the next one.\n", __func__, ConfigLangList[Index]));
      continue;
    }

    Status = RedfishValueToJsonValue (&RedfishValue, &JsonValue);
    if (!EFI_ERROR (Status)) {
      Status = GenerateAttributeDetails ("Bios", RedfishSchemaVersion, KeyAscii, JsonValue, &AttributeObj);
      JsonValueFree (JsonValue);
      if (EFI_ERROR (Status)) {
        DEBUG ((DEBUG_ERROR, "%a: Failed to get the detail of BIOS attribute of configure language %s, keep going on the next one.\n", __func__, ConfigLangList[Index]));
        continue;
      }
    } else {
      DEBUG ((DEBUG_ERROR, "%a: Failed to convert Redfish value to Json value for %s.\n", __func__, ConfigLangList[Index]));
      continue;
    }

    DEBUG_CODE_BEGIN ();
    if (AttributeObj != NULL) {
      DumpJsonData (__func__, AttributeObj);
    }

    DEBUG_CODE_END ();

    if (AttributeObj != NULL) {
      JsonArrayAppendValue (AttributesArray, AttributeObj);
    }
  }

  JsonObjectSetValue (AttributesObj, "Attributes", AttributesArray);

  DEBUG ((DEBUG_MANAGEABILITY, "%a: Total %d attributes.\n", __func__, Count));

  DEBUG_CODE_BEGIN ();
  if (AttributesObj != NULL) {
    DumpJsonData (__func__, AttributesObj);
  }

  DEBUG_CODE_END ();

  //
  // HTTP PUT to BIOS attribute registry
  //
  Status = ProvisionAttributeRegistry (Private, AttributesObj);
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a: Failed to provision BIOS AttributeRegistry to %s.\n", __func__, Private->Uri));
  } else {
    DEBUG ((DEBUG_MANAGEABILITY, "%a: Sucessfully provisioned BIOS AttributeRegistry to %s.\n", __func__, Private->Uri));
  }

ON_RELEASE:
  if (ConfigLangList != NULL) {
    FreePool (ConfigLangList);
  }

  if (KeyAscii != NULL) {
    FreePool (KeyAscii);
  }

  if (AttributesObj != NULL) {
    JsonValueFree (AttributesObj);
  }

  return Status;
}

/**
  The callback function provided by Redfish Feature driver.

  @param[in]     This                Pointer to EDKII_REDFISH_FEATURE_PROTOCOL instance.
  @param[in]     FeatureAction       The action Redfish feature driver should take.
  @param[in]     Context             The context of Redfish feature driver.
  @param[in,out] InformationExchange The pointer to RESOURCE_INFORMATION_EXCHANGE

  @retval EFI_SUCCESS              Redfish feature driver callback is executed successfully.
  @retval Others                   Some errors happened.

  @retval EFI_SUCCESS              Redfish feature driver callback is executed successfully.
  @retval Others                   Some errors happened.

**/
EFI_STATUS
EFIAPI
RedfishBiosAttributeRegistryCallback (
  IN     EDKII_REDFISH_FEATURE_PROTOCOL  *This,
  IN     FEATURE_CALLBACK_ACTION         FeatureAction,
  IN     VOID                            *Context,
  IN OUT RESOURCE_INFORMATION_EXCHANGE   *InformationExchange
  )
{
  EFI_STATUS                       Status;
  REDFISH_SERVICE                  RedfishService;
  REDFISH_RESOURCE_COMMON_PRIVATE  *Private;
  EFI_STRING                       ResourceUri;
  CHAR8                            *AttributeRegistry;
  EFI_STRING                       AttributeRegistryString;
  REDFISH_RESPONSE                 Response;
  EDKII_JSON_VALUE                 JsonValue;
  CHAR8                            *PropertyNameAscii;
  CHAR8                            *OdataType;
  CHAR8                            *BiosSchemaVersion;
  CHAR8                            *BiosSchemaType;
  CHAR8                            *BiosResource;
  EFI_STRING                       OdataTypeString;
  EFI_STRING                       TempUri;

  if (FeatureAction != CallbackActionStartOperation) {
    return EFI_UNSUPPORTED;
  }

  Private        = (REDFISH_RESOURCE_COMMON_PRIVATE *)Context;
  RedfishService = Private->RedfishService;
  if (RedfishService == NULL) {
    DEBUG ((DEBUG_ERROR, "%a: no Redfish service configured\n", __func__));
    return EFI_NOT_READY;
  }

  TempUri                 = NULL;
  OdataType               = NULL;
  AttributeRegistryString = NULL;
  BiosSchemaType          = NULL;
  BiosSchemaVersion       = NULL;
  BiosResource            = NULL;

  //
  // Save in private structure.
  //
  Private->InformationExchange = InformationExchange;

  //
  // Find Redfish version on Redfish service.
  //
  Private->RedfishVersion = RedfishGetVersion (RedfishService);
  ResourceUri             = (EFI_STRING)AllocateZeroPool (MAX_URI_LENGTH * sizeof (CHAR16));
  if (ResourceUri == NULL) {
    DEBUG ((DEBUG_ERROR, "%a: Fail to allocate memory for ResourceUri.\n", __func__));
    return EFI_OUT_OF_RESOURCES;
  }

  ResourceUri[0] = 0;
  StrCatS (ResourceUri, MAX_URI_LENGTH, Private->RedfishVersion);
  StrCatS (ResourceUri, MAX_URI_LENGTH, InformationExchange->SendInformation.ParentUri);
  TempUri = RedfishGetUri (ResourceUri);
  DEBUG ((DEBUG_MANAGEABILITY, "%a: Redfish parent BIOS resource URI - %s\n", __func__, TempUri));

  PropertyNameAscii = StrUnicodeToAscii (Private->InformationExchange->SendInformation.PropertyName);
  if (PropertyNameAscii == NULL) {
    DEBUG ((DEBUG_ERROR, "%a: failed to invoke StrUnicodeToAscii for %s.\n", __func__, Private->InformationExchange->SendInformation.PropertyName));
    Status = EFI_OUT_OF_RESOURCES;
    goto ON_RELEASE;
  }

  //
  // Read the BIOS AttributeRegistry property from BIOS Redfish Resource.
  //
  AttributeRegistryString = NULL;
  Status                  = RedfishHttpGetResource (Private->RedfishService, TempUri, NULL, &Response, TRUE);
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a: Unable to get resource from: %s :%r\n", __func__, ResourceUri, Status));
    goto ON_RELEASE;
  }

  JsonValue = RedfishJsonInPayload (Response.Payload);
  if (JsonValue == NULL) {
    DEBUG ((DEBUG_ERROR, "%a: Failed to get JSON object of %s.\n", __func__, InformationExchange->SendInformation.ParentUri));
    Status = EFI_DEVICE_ERROR;
    goto ON_RELEASE;
  }

  DEBUG ((DEBUG_MANAGEABILITY, "%a: Get the property %a from Redfish BIOS resource.\n", __func__, PropertyNameAscii));
  AttributeRegistry = (CHAR8 *)JsonValueGetAsciiString (JsonObjectGetValue ((CONST EDKII_JSON_OBJECT)JsonValue, (CONST CHAR8 *)PropertyNameAscii));
  if (AttributeRegistry == NULL) {
    DEBUG ((DEBUG_ERROR, "%a: Failed to get AttributeRegistry proerty from Redfish BIOS resource.\n", __func__));
    Status = EFI_DEVICE_ERROR;
    goto ON_RELEASE;
  }

  DEBUG ((DEBUG_MANAGEABILITY, "%a: \"AttributeRegistry\" is %a.\n", __func__, AttributeRegistry));

  AttributeRegistryString = StrAsciiToUnicode (AttributeRegistry);
  if (AttributeRegistryString == NULL) {
    DEBUG ((DEBUG_ERROR, "%a: failed to invoke StrUnicodeToAscii for %s.\n", __func__, AttributeRegistry));
    Status = EFI_OUT_OF_RESOURCES;
    goto ON_RELEASE;
  }

  //
  // Get BIOS @odata.type
  //
  OdataTypeString = GetOdataType (Response.Payload);
  if (OdataTypeString == NULL) {
    DEBUG ((DEBUG_ERROR, "%a: failed to get @odata.type\n.", __func__));
    Status = EFI_DEVICE_ERROR;
    goto ON_RELEASE;
  }

  OdataType = StrUnicodeToAscii (OdataTypeString);
  FreePool (OdataTypeString);
  if (OdataType == NULL) {
    DEBUG ((DEBUG_ERROR, "%a: failed to invoke StrUnicodeToAscii for %s.\n", __func__, OdataType));
    Status = EFI_OUT_OF_RESOURCES;
    goto ON_RELEASE;
  }

  DEBUG ((DEBUG_MANAGEABILITY, "%a: \"@odata.type\" is %a.\n", __func__, OdataType));

  //
  // Create the full URI from Redfish service root to AttributeRegistry URI
  //
  ResourceUri[0] = 0;
  StrCatS (ResourceUri, MAX_URI_LENGTH, Private->RedfishVersion);
  StrCatS (ResourceUri, MAX_URI_LENGTH, InformationExchange->SendInformation.ParentUri);
  StrCatS (ResourceUri, MAX_URI_LENGTH, L"/");
  StrCatS (ResourceUri, MAX_URI_LENGTH, AttributeRegistryString);
  DEBUG ((DEBUG_MANAGEABILITY, "%a: Redfish Bios AttributeRegistry resource URI - %s\n", __func__, ResourceUri));

  Private->Uri = RedfishGetUri (ResourceUri);
  Status       = GetOdataTypeSchemaVersion (OdataType, &BiosSchemaType, &BiosSchemaVersion, &BiosResource);
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a: Unable to get BIOS version from @odata.type.: %a %r\n", __func__, OdataType, Status));
    goto ON_RELEASE;
  }

  Status = BiosAttributeRegistryHandler (
             Private,
             BiosSchemaVersion
             );
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a: Bios attribute registry handler failure: %r\n", __func__, Status));
    goto ON_RELEASE;
  }

  Status = EFI_SUCCESS;

ON_RELEASE:
  if (PropertyNameAscii != NULL) {
    FreePool (PropertyNameAscii);
  }

  if (ResourceUri != NULL) {
    FreePool (ResourceUri);
  }

  if (AttributeRegistryString != NULL) {
    FreePool (AttributeRegistryString);
  }

  if (TempUri != NULL) {
    FreePool (TempUri);
  }

  if (OdataType != NULL) {
    FreePool (OdataType);
  }

  if (BiosSchemaType != NULL) {
    FreePool (BiosSchemaType);
  }

  if (BiosSchemaVersion != NULL) {
    FreePool (BiosSchemaVersion);
  }

  if (BiosResource != NULL) {
    FreePool (BiosResource);
  }

  RedfishHttpFreeResponse (&Response);
  InformationExchange->ReturnedInformation.Type = InformationTypeNone;
  return Status;
}

/**
  Initialize a Redfish configure handler.

  This function will be called by the Redfish config driver to initialize each Redfish configure
  handler.

  @param[in]   This                     Pointer to EDKII_REDFISH_CONFIG_HANDLER_PROTOCOL instance.
  @param[in]   RedfishConfigServiceInfo Redfish service information.

  @retval EFI_SUCCESS                  The handler has been initialized successfully.
  @retval EFI_DEVICE_ERROR             Failed to create or configure the REST EX protocol instance.
  @retval EFI_ALREADY_STARTED          This handler has already been initialized.
  @retval Other                        Error happens during the initialization.

**/
EFI_STATUS
EFIAPI
RedfishBiosAttributeRegistryInit (
  IN  EDKII_REDFISH_CONFIG_HANDLER_PROTOCOL  *This,
  IN  REDFISH_CONFIG_SERVICE_INFORMATION     *RedfishConfigServiceInfo
  )
{
  REDFISH_RESOURCE_COMMON_PRIVATE  *Private;

  Private = REDFISH_RESOURCE_COMMON_PRIVATE_DATA_FROM_CONFIG_PROTOCOL (This);

  Private->RedfishService = RedfishCreateService (RedfishConfigServiceInfo);
  if (Private->RedfishService == NULL) {
    return EFI_DEVICE_ERROR;
  }

  return EFI_SUCCESS;
}

/**
  Stop a Redfish configure handler.

  @param[in]   This                Pointer to EDKII_REDFISH_CONFIG_HANDLER_PROTOCOL instance.

  @retval EFI_SUCCESS              This handler has been stoped successfully.
  @retval Others                   Some error happened.

**/
EFI_STATUS
EFIAPI
RedfishBiosAttributeRegistryStop (
  IN  EDKII_REDFISH_CONFIG_HANDLER_PROTOCOL  *This
  )
{
  REDFISH_RESOURCE_COMMON_PRIVATE  *Private;

  Private = REDFISH_RESOURCE_COMMON_PRIVATE_DATA_FROM_CONFIG_PROTOCOL (This);

  if (Private->RedfishService != NULL) {
    RedfishCleanupService (Private->RedfishService);
    Private->RedfishService = NULL;
  }

  if (Private->FeatureProtocol != NULL) {
    Private->FeatureProtocol->Unregister (
                                Private->FeatureProtocol,
                                REDFISH_MANAGED_URI,
                                NULL
                                );
  }

  return EFI_SUCCESS;
}

/**
  Callback function when gEfiRestJsonStructureProtocolGuid is installed.

  @param[in] Event    Event whose notification function is being invoked.
  @param[in] Context  Pointer to the notification function's context.
**/
VOID
EFIAPI
EfiRestJasonStructureProtocolIsReady (
  IN  EFI_EVENT  Event,
  IN  VOID       *Context
  )
{
  EFI_STATUS  Status;

  if (mRedfishBiosAttributeRegistryPrivate == NULL) {
    return;
  }

  if (mRedfishBiosAttributeRegistryPrivate->JsonStructProtocol != NULL) {
    return;
  }

  Status = gBS->LocateProtocol (
                  &gEfiRestJsonStructureProtocolGuid,
                  NULL,
                  (VOID **)&mRedfishBiosAttributeRegistryPrivate->JsonStructProtocol
                  );
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a: failed to locate gEfiRestJsonStructureProtocolGuid: %r\n", __func__, Status));
  }

  gBS->CloseEvent (Event);
}

/**
  Callback function when gEdkIIRedfishFeatureProtocolGuid is installed.

  @param[in] Event    Event whose notification function is being invoked.
  @param[in] Context  Pointer to the notification function's context.
**/
VOID
EFIAPI
EdkIIRedfishFeatureProtocolIsReady (
  IN  EFI_EVENT  Event,
  IN  VOID       *Context
  )
{
  EFI_STATUS                      Status;
  EDKII_REDFISH_FEATURE_PROTOCOL  *FeatureProtocol;

  if (mRedfishBiosAttributeRegistryPrivate == NULL) {
    return;
  }

  if (mRedfishBiosAttributeRegistryPrivate->FeatureProtocol != NULL) {
    return;
  }

  Status = gBS->LocateProtocol (
                  &gEdkIIRedfishFeatureProtocolGuid,
                  NULL,
                  (VOID **)&FeatureProtocol
                  );
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a: failed to locate gEdkIIRedfishFeatureProtocolGuid: %r\n", __func__, Status));
    gBS->CloseEvent (Event);
    return;
  }

  Status = FeatureProtocol->Register (
                              FeatureProtocol,
                              REDFISH_MANAGED_URI,
                              RedfishBiosAttributeRegistryCallback,
                              (VOID *)mRedfishBiosAttributeRegistryPrivate
                              );
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a: failed to register %s: %r\n", __func__, REDFISH_MANAGED_URI, Status));
  }

  mRedfishBiosAttributeRegistryPrivate->FeatureProtocol = FeatureProtocol;

  gBS->CloseEvent (Event);
}

/**
  Unloads an image.

  @param  ImageHandle           Handle that identifies the image to be unloaded.

  @retval EFI_SUCCESS           The image has been unloaded.
  @retval EFI_INVALID_PARAMETER ImageHandle is not a valid image handle.

**/
EFI_STATUS
EFIAPI
RedfishBiosAttributeRegistryUnload (
  IN EFI_HANDLE  ImageHandle
  )
{
  EFI_STATUS                             Status;
  EDKII_REDFISH_CONFIG_HANDLER_PROTOCOL  *ConfigHandler;

  if (mRedfishBiosAttributeRegistryPrivate == NULL) {
    return EFI_NOT_READY;
  }

  ConfigHandler = NULL;

  //
  // Firstly, find ConfigHandler Protocol interface in this ImageHandle.
  //
  Status = gBS->OpenProtocol (
                  ImageHandle,
                  &gEdkIIRedfishConfigHandlerProtocolGuid,
                  (VOID **)&ConfigHandler,
                  NULL,
                  NULL,
                  EFI_OPEN_PROTOCOL_BY_HANDLE_PROTOCOL
                  );
  if (EFI_ERROR (Status) || (ConfigHandler == NULL)) {
    return Status;
  }

  ConfigHandler->Stop (ConfigHandler);

  //
  // Last, uninstall ConfigHandler Protocol.
  //
  Status = gBS->UninstallMultipleProtocolInterfaces (
                  ImageHandle,
                  &gEdkIIRedfishConfigHandlerProtocolGuid,
                  ConfigHandler,
                  NULL
                  );

  FreePool (mRedfishBiosAttributeRegistryPrivate);
  mRedfishBiosAttributeRegistryPrivate = NULL;

  return Status;
}

EDKII_REDFISH_CONFIG_HANDLER_PROTOCOL  mRedfishConfigHandler = {
  RedfishBiosAttributeRegistryInit,
  RedfishBiosAttributeRegistryStop
};

/**
  This is the declaration of an EFI image entry point. This entry point is
  the same for UEFI Applications, UEFI OS Loaders, and UEFI Drivers including
  both device drivers and bus drivers. It initialize the global variables and
  publish the driver binding protocol.

  @param[in]   ImageHandle      The firmware allocated handle for the UEFI image.
  @param[in]   SystemTable      A pointer to the EFI System Table.

  @retval EFI_SUCCESS           The operation completed successfully.
  @retval EFI_ACCESS_DENIED     EFI_ISCSI_INITIATOR_NAME_PROTOCOL was installed unexpectedly.
  @retval Others                Other errors as indicated.
**/
EFI_STATUS
EFIAPI
RedfishResourceEntryPoint (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  )
{
  EFI_STATUS  Status;
  VOID        *Registration;

  if (mRedfishBiosAttributeRegistryPrivate != NULL) {
    return EFI_ALREADY_STARTED;
  }

  mRedfishBiosAttributeRegistryPrivate = AllocateZeroPool (sizeof (REDFISH_RESOURCE_COMMON_PRIVATE));
  CopyMem (&mRedfishBiosAttributeRegistryPrivate->ConfigHandler, &mRedfishConfigHandler, sizeof (EDKII_REDFISH_CONFIG_HANDLER_PROTOCOL));

  Status = gBS->InstallProtocolInterface (
                  &ImageHandle,
                  &gEdkIIRedfishConfigHandlerProtocolGuid,
                  EFI_NATIVE_INTERFACE,
                  &mRedfishBiosAttributeRegistryPrivate->ConfigHandler
                  );

  EfiCreateProtocolNotifyEvent (
    &gEfiRestJsonStructureProtocolGuid,
    TPL_CALLBACK,
    EfiRestJasonStructureProtocolIsReady,
    NULL,
    &Registration
    );

  EfiCreateProtocolNotifyEvent (
    &gEdkIIRedfishFeatureProtocolGuid,
    TPL_CALLBACK,
    EdkIIRedfishFeatureProtocolIsReady,
    NULL,
    &Registration
    );

  return Status;
}
