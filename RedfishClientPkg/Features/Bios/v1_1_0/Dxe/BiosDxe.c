/** @file
  Redfish feature driver implementation - Bios

  (C) Copyright 2020-2022 Hewlett Packard Enterprise Development LP<BR>
  Copyright (c) 2023-2024, NVIDIA CORPORATION & AFFILIATES. All rights reserved.
  Copyright (C) 2024-2025 Advanced Micro Devices, Inc. All rights reserved.<BR>

  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include "../Common/BiosCommon.h"

extern REDFISH_RESOURCE_COMMON_PRIVATE  *mRedfishResourcePrivate;
extern EFI_HANDLE                       mRedfishResourceConfigProtocolHandle;

EFI_STATUS
HandleResource (
  IN  REDFISH_RESOURCE_COMMON_PRIVATE  *Private,
  IN  EFI_STRING                       Uri
  );

/**
  Provisioning redfish resource by given URI.

  @param[in]   This                Pointer to EFI_HP_REDFISH_HII_PROTOCOL instance.
  @param[in]   Uri                 Target URI to create resource.
  @param[in]   PostMode            TRUE if the resource does not exist, post method is used.
                                   FALSE if the resource exist but property is missing, put method is used.

  @retval EFI_SUCCESS              Value is returned successfully.
  @retval Others                   Some error happened.

**/
EFI_STATUS
EFIAPI
RedfishResourceProvisioningResource (
  IN     EDKII_REDFISH_RESOURCE_CONFIG_PROTOCOL  *This,
  IN     EFI_STRING                              Uri,
  IN     BOOLEAN                                 PostMode
  )
{
  REDFISH_RESOURCE_COMMON_PRIVATE  *Private;
  EFI_STATUS                       Status;
  REDFISH_RESPONSE                 Response;

  if ((This == NULL) || IS_EMPTY_STRING (Uri)) {
    return EFI_INVALID_PARAMETER;
  }

  DEBUG ((DEBUG_MANAGEABILITY, "%a: provisioning in %s mode\n", __func__, (PostMode ? L"POST" : L"PATCH")));

  Private = REDFISH_RESOURCE_COMMON_PRIVATE_DATA_FROM_RESOURCE_PROTOCOL (This);
  if (Private->RedfishService == NULL) {
    return EFI_NOT_READY;
  }

  ZeroMem (&Response, sizeof (Response));
  Status = RedfishHttpGetResource (Private->RedfishService, Uri, NULL, &Response, TRUE);
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a: get resource from: %s failed\n", __func__, Uri));
    return Status;
  }

  Private->Uri     = Uri;
  Private->Payload = Response.Payload;
  ASSERT (Private->Payload != NULL);

  Status = RedfishProvisioningResourceCommon (Private, !PostMode);
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a: failed to provision resource to: %s: %r\n", __func__, Uri, Status));
  } else {
    //
    // Get latest ETag on URI and keep it in variable.
    //
    SetEtagFromUri (Private->RedfishService, Private->Uri, TRUE);
  }

  //
  // Release resource
  //
  RedfishHttpFreeResponse (&Response);
  Private->Payload = NULL;

  return Status;
}

/**
  Consume resource from given URI.

  @param[in]   This                Pointer to EFI_HP_REDFISH_HII_PROTOCOL instance.
  @param[in]   Uri                 The target URI to consume.

  @retval EFI_SUCCESS              Value is returned successfully.
  @retval Others                   Some error happened.

**/
EFI_STATUS
EFIAPI
RedfishResourceConsumeResource (
  IN     EDKII_REDFISH_RESOURCE_CONFIG_PROTOCOL  *This,
  IN     EFI_STRING                              Uri
  )
{
  REDFISH_RESOURCE_COMMON_PRIVATE  *Private;
  EFI_STATUS                       Status;
  REDFISH_RESPONSE                 Response;
  EFI_STRING                       PendingSettingUri;
  REDFISH_RESPONSE                 PendingSettingResponse;
  REDFISH_RESPONSE                 *ExpectedResponse;
  CHAR8                            *Etag;

  if ((This == NULL) || IS_EMPTY_STRING (Uri)) {
    return EFI_INVALID_PARAMETER;
  }

  Private = REDFISH_RESOURCE_COMMON_PRIVATE_DATA_FROM_RESOURCE_PROTOCOL (This);
  if (Private->RedfishService == NULL) {
    return EFI_NOT_READY;
  }

  ZeroMem (&Response, sizeof (Response));
  Status = RedfishHttpGetResource (Private->RedfishService, Uri, NULL, &Response, TRUE);
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a: get resource from: %s failed\n", __func__, Uri));
    return Status;
  }

  //
  // Check and see if "@Redfish.Settings" exist or not.
  //
  ZeroMem (&PendingSettingResponse, sizeof (PendingSettingResponse));
  PendingSettingUri = NULL;
  Status            = GetPendingSettings (
                        Private->RedfishService,
                        Response.Payload,
                        &PendingSettingResponse,
                        &PendingSettingUri
                        );
  if (!EFI_ERROR (Status)) {
    DEBUG ((DEBUG_MANAGEABILITY, "%a: @Redfish.Settings found: %s\n", __func__, PendingSettingUri));
    SetRedfishSettingsObjectsUri (Uri, PendingSettingUri);
    Private->Uri     = PendingSettingUri;
    ExpectedResponse = &PendingSettingResponse;
  } else {
    DEBUG ((DEBUG_MANAGEABILITY, "%a: No @Redfish.Settings is found\n", __func__));
    Private->Uri     = Uri;
    ExpectedResponse = &Response;
  }

  Private->Payload = ExpectedResponse->Payload;
  ASSERT (Private->Payload != NULL);

  Private->Json = JsonDumpString (RedfishJsonInPayload (Private->Payload), EDKII_JSON_COMPACT);
  ASSERT (Private->Json != NULL);

  //
  // Find etag in HTTP response header
  //
  Etag   = NULL;
  Status = GetHttpResponseEtag (ExpectedResponse, &Etag);
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a, failed to get ETag from HTTP header\n", __func__));
  }

  Status = RedfishConsumeResourceCommon (Private, Private->Json, Etag);
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a: failed to consume resource from: %s: %r\n", __func__, Private->Uri, Status));
  }

  // Release the resource of HTTP GET eariler.
  RedfishHttpFreeResponse (&Response);

  if (PendingSettingUri != NULL) {
    // Delete the settings URI to indicate BIOS already consumed the change.
    DEBUG ((DEBUG_INFO, "%a: Delete the resource on URI: %s:\n", __func__, Private->Uri));
    Status = RedfishHttpDeleteResource (Private->RedfishService, Private->Uri, &Response);
    if (EFI_ERROR (Status)) {
      DEBUG ((DEBUG_ERROR, "%a: Failed to delete the resource on URI (BMC may not implemented the DELETE on URI): %s: %r\n", __func__, Private->Uri, Status));
    }
  }

  //
  // Release resource
  //
  RedfishHttpFreeResponse (&Response);
  RedfishHttpFreeResponse (&PendingSettingResponse);
  Private->Payload = NULL;

  if (Private->Json != NULL) {
    FreePool (Private->Json);
    Private->Json = NULL;
  }

  if (Etag != NULL) {
    FreePool (Etag);
  }

  if (PendingSettingUri != NULL) {
    FreePool (PendingSettingUri);
  }

  return Status;
}

/**
  Get information about this protocol.

  @param[in]   This                Pointer to EFI_HP_REDFISH_HII_PROTOCOL instance.
  @param[out]  Schema              Supported schema.
  @param[out]  Major               Supported major number.
  @param[out]  Minor               Supported minor number.
  @param[out]  Errata              Supported errata number.

  @retval EFI_SUCCESS              Value is returned successfully.
  @retval Others                   Some error happened.

**/
EFI_STATUS
EFIAPI
RedfishResourceGetInfo (
  IN     EDKII_REDFISH_RESOURCE_CONFIG_PROTOCOL  *This,
  OUT    REDFISH_SCHEMA_INFO                     *Info
  )
{
  if ((This == NULL) || (Info == NULL)) {
    return EFI_INVALID_PARAMETER;
  }

  AsciiStrCpyS (Info->Schema, REDFISH_SCHEMA_STRING_SIZE, RESOURCE_SCHEMA);
  AsciiStrCpyS (Info->Major, REDFISH_SCHEMA_VERSION_SIZE, RESOURCE_SCHEMA_MAJOR);
  AsciiStrCpyS (Info->Minor, REDFISH_SCHEMA_VERSION_SIZE, RESOURCE_SCHEMA_MINOR);
  AsciiStrCpyS (Info->Errata, REDFISH_SCHEMA_VERSION_SIZE, RESOURCE_SCHEMA_ERRATA);

  return EFI_SUCCESS;
}

/**
  Update resource to given URI.

  @param[in]   This                Pointer to EFI_HP_REDFISH_HII_PROTOCOL instance.
  @param[in]   Uri                 The target URI to consume.

  @retval EFI_SUCCESS              Value is returned successfully.
  @retval Others                   Some error happened.

**/
EFI_STATUS
EFIAPI
RedfishResourceUpdate (
  IN     EDKII_REDFISH_RESOURCE_CONFIG_PROTOCOL  *This,
  IN     EFI_STRING                              Uri
  )
{
  REDFISH_RESOURCE_COMMON_PRIVATE  *Private;
  EFI_STATUS                       Status;
  REDFISH_RESPONSE                 Response;

  if ((This == NULL) || IS_EMPTY_STRING (Uri)) {
    return EFI_INVALID_PARAMETER;
  }

  Private = REDFISH_RESOURCE_COMMON_PRIVATE_DATA_FROM_RESOURCE_PROTOCOL (This);

  if (Private->RedfishService == NULL) {
    return EFI_NOT_READY;
  }

  ZeroMem (&Response, sizeof (Response));
  Status = RedfishHttpGetResource (Private->RedfishService, Uri, NULL, &Response, TRUE);
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a: get resource from: %s failed\n", __func__, Uri));
    return Status;
  }

  Private->Uri     = Uri;
  Private->Payload = Response.Payload;
  ASSERT (Private->Payload != NULL);

  Private->Json = JsonDumpString (RedfishJsonInPayload (Private->Payload), EDKII_JSON_COMPACT);
  ASSERT (Private->Json != NULL);

  Status = RedfishUpdateResourceCommon (Private, Private->Json);
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a: failed to update resource to: %s: %r\n", __func__, Uri, Status));
  } else {
    //
    // Get latest ETag on URI and keep it in variable.
    //
    SetEtagFromUri (Private->RedfishService, Private->Uri, TRUE);
  }

  //
  // Release resource
  //
  RedfishHttpFreeResponse (&Response);
  Private->Payload = NULL;

  if (Private->Json != NULL) {
    FreePool (Private->Json);
    Private->Json = NULL;
  }

  return Status;
}

/**
  Check resource on given URI.

  @param[in]   This                Pointer to EFI_HP_REDFISH_HII_PROTOCOL instance.
  @param[in]   Uri                 The target URI to consume.

  @retval EFI_SUCCESS              Value is returned successfully.
  @retval Others                   Some error happened.

**/
EFI_STATUS
EFIAPI
RedfishResourceCheck (
  IN     EDKII_REDFISH_RESOURCE_CONFIG_PROTOCOL  *This,
  IN     EFI_STRING                              Uri
  )
{
  REDFISH_RESOURCE_COMMON_PRIVATE  *Private;
  EFI_STATUS                       Status;
  REDFISH_RESPONSE                 Response;
  CHAR8                            *Etag;

  if ((This == NULL) || IS_EMPTY_STRING (Uri)) {
    return EFI_INVALID_PARAMETER;
  }

  Private = REDFISH_RESOURCE_COMMON_PRIVATE_DATA_FROM_RESOURCE_PROTOCOL (This);

  if (Private->RedfishService == NULL) {
    return EFI_NOT_READY;
  }

  ZeroMem (&Response, sizeof (Response));
  Status = RedfishHttpGetResource (Private->RedfishService, Uri, NULL, &Response, TRUE);
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a: get resource from: %s failed\n", __func__, Uri));
    return Status;
  }

  Private->Uri     = Uri;
  Private->Payload = Response.Payload;
  ASSERT (Private->Payload != NULL);

  Private->Json = JsonDumpString (RedfishJsonInPayload (Private->Payload), EDKII_JSON_COMPACT);
  ASSERT (Private->Json != NULL);

  //
  // Find etag in HTTP response header
  //
  Etag   = NULL;
  Status = GetHttpResponseEtag (&Response, &Etag);
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a, failed to get ETag from HTTP header\n", __func__));
  }

  Status = RedfishCheckResourceCommon (Private, Private->Json, Etag);
  if (EFI_ERROR (Status)) {
    if (Status == EFI_UNSUPPORTED) {
      DEBUG ((DEBUG_MANAGEABILITY, "%a: No BIOS configuration needs to be handled.\n", __func__));
    } else if (Status == EFI_NOT_FOUND) {
      DEBUG ((DEBUG_MANAGEABILITY, "%a: No BIOS property on Redfish service is found, we need to provision it.\n", __func__));
    } else {
      DEBUG ((DEBUG_ERROR, "%a: Failed to check resource from: %s, some of properties may not provisioned to Redfish yet.\n", __func__, Uri));
    }
  }

  //
  // Release resource
  //
  if (Etag != NULL) {
    FreePool (Etag);
  }

  RedfishHttpFreeResponse (&Response);
  Private->Payload = NULL;

  if (Private->Json != NULL) {
    FreePool (Private->Json);
    Private->Json = NULL;
  }

  return Status;
}

/**
  Identify resource on given URI.

  @param[in]   This                Pointer to EDKII_REDFISH_RESOURCE_CONFIG_PROTOCOL instance.
  @param[in]   Uri                 The target URI to consume.

  @retval EFI_SUCCESS              This is target resource which we want to handle.
  @retval EFI_UNSUPPORTED          This is not the target resource.
  @retval Others                   Some error happened.

**/
EFI_STATUS
EFIAPI
RedfishResourceIdentify (
  IN     EDKII_REDFISH_RESOURCE_CONFIG_PROTOCOL  *This,
  IN     EFI_STRING                              Uri
  )
{
  REDFISH_RESOURCE_COMMON_PRIVATE  *Private;
  EFI_STATUS                       Status;
  REDFISH_RESPONSE                 Response;

  if ((This == NULL) || IS_EMPTY_STRING (Uri)) {
    return EFI_INVALID_PARAMETER;
  }

  Private = REDFISH_RESOURCE_COMMON_PRIVATE_DATA_FROM_RESOURCE_PROTOCOL (This);

  if (Private->RedfishService == NULL) {
    return EFI_NOT_READY;
  }

  ZeroMem (&Response, sizeof (Response));
  Status = RedfishHttpGetResource (Private->RedfishService, Uri, NULL, &Response, TRUE);
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a: get resource from: %s failed\n", __func__, Uri));
    return Status;
  }

  Private->Uri     = Uri;
  Private->Payload = Response.Payload;
  ASSERT (Private->Payload != NULL);

  Private->Json = JsonDumpString (RedfishJsonInPayload (Private->Payload), EDKII_JSON_COMPACT);
  ASSERT (Private->Json != NULL);

  Status = RedfishIdentifyResourceCommon (Private, Private->Json);
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a: identify %s failed: %r\n", __func__, Uri, Status));
  }

  //
  // Release resource
  //
  RedfishHttpFreeResponse (&Response);
  Private->Payload = NULL;

  if (Private->Json != NULL) {
    FreePool (Private->Json);
    Private->Json = NULL;
  }

  return Status;
}

EDKII_REDFISH_RESOURCE_CONFIG_PROTOCOL  mRedfishResourceConfig = {
  RedfishResourceProvisioningResource,
  RedfishResourceConsumeResource,
  RedfishResourceUpdate,
  RedfishResourceCheck,
  RedfishResourceIdentify,
  RedfishResourceGetInfo
};

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
RedfishResourceInit (
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
RedfishResourceStop (
  IN  EDKII_REDFISH_CONFIG_HANDLER_PROTOCOL  *This
  )
{
  REDFISH_RESOURCE_COMMON_PRIVATE  *Private;

  Private = REDFISH_RESOURCE_COMMON_PRIVATE_DATA_FROM_CONFIG_PROTOCOL (This);

  if (Private->Event != NULL) {
    gBS->CloseEvent (Private->Event);
    Private->Event = NULL;
  }

  if (Private->RedfishService != NULL) {
    RedfishCleanupService (Private->RedfishService);
    Private->RedfishService = NULL;
  }

  return EFI_SUCCESS;
}

EDKII_REDFISH_CONFIG_HANDLER_PROTOCOL  mRedfishConfigHandler = {
  RedfishResourceInit,
  RedfishResourceStop
};

/**
  Callback function when gEfiRestJsonStructureProtocolGuid is installed.

  @param[in] Event    Event whose notification function is being invoked.
  @param[in] Context  Pointer to the notification function's context.
**/
VOID
EFIAPI
EfiRestJsonStructureProtocolIsReady (
  IN  EFI_EVENT  Event,
  IN  VOID       *Context
  )
{
  EFI_STATUS  Status;

  if (mRedfishResourcePrivate == NULL) {
    return;
  }

  if (mRedfishResourcePrivate->JsonStructProtocol != NULL) {
    return;
  }

  Status = gBS->LocateProtocol (
                  &gEfiRestJsonStructureProtocolGuid,
                  NULL,
                  (VOID **)&mRedfishResourcePrivate->JsonStructProtocol
                  );
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a: failed to locate gEfiRestJsonStructureProtocolGuid: %r\n", __func__, Status));
  }

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
RedfishResourceUnload (
  IN EFI_HANDLE  ImageHandle
  )
{
  EFI_STATUS                             Status;
  EDKII_REDFISH_CONFIG_HANDLER_PROTOCOL  *ConfigHandler;

  if (mRedfishResourcePrivate == NULL) {
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
  // Last, uninstall ConfigHandler Protocol and resource protocol.
  //
  Status = gBS->UninstallMultipleProtocolInterfaces (
                  ImageHandle,
                  &gEdkIIRedfishConfigHandlerProtocolGuid,
                  ConfigHandler,
                  &gEdkIIRedfishResourceConfigProtocolGuid,
                  &mRedfishResourcePrivate->RedfishResourceConfig,
                  NULL
                  );

  FreePool (mRedfishResourcePrivate);
  mRedfishResourcePrivate = NULL;

  return Status;
}

/**
  The callback function provided by Redfish Feature driver.

  @param[in]     This                Pointer to EDKII_REDFISH_FEATURE_PROTOCOL instance.
  @param[in]     FeatureAction       The action Redfish feature driver should take.
  @param[in]     Uri                 The collection URI.
  @param[in]     Context             The context of Redfish feature driver.
  @param[in,out] InformationExchange The pointer to RESOURCE_INFORMATION_EXCHANGE

  @retval EFI_SUCCESS              Redfish feature driver callback is executed successfully.
  @retval Others                   Some errors happened.

  @retval EFI_SUCCESS              Redfish feature driver callback is executed successfully.
  @retval Others                   Some errors happened.

**/
EFI_STATUS
EFIAPI
RedfishExternalResourceResourceFeatureCallback (
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
  EFI_STRING                       BiosUri;

  if (FeatureAction != CallbackActionStartOperation) {
    return EFI_UNSUPPORTED;
  }

  Private = (REDFISH_RESOURCE_COMMON_PRIVATE *)Context;

  RedfishService = Private->RedfishService;
  if (RedfishService == NULL) {
    DEBUG ((DEBUG_ERROR, "%a: no Redfish service configured\n", __func__));
    return EFI_NOT_READY;
  }

  //
  // Save in private structure.
  //
  Private->InformationExchange = InformationExchange;

  //
  // Find Redfish version on Redfish service.
  //
  Private->RedfishVersion = RedfishGetVersion (RedfishService);

  //
  // Create the full URI from Redfish service root.
  //
  ResourceUri = (EFI_STRING)AllocateZeroPool (MAX_URI_LENGTH * sizeof (CHAR16));
  if (ResourceUri == NULL) {
    DEBUG ((DEBUG_ERROR, "%a: Fail to allocate memory for full URI.\n", __func__));
    return EFI_OUT_OF_RESOURCES;
  }

  StrCatS (ResourceUri, MAX_URI_LENGTH, Private->RedfishVersion);
  StrCatS (ResourceUri, MAX_URI_LENGTH, InformationExchange->SendInformation.FullUri);

  //
  // Initialize collection path
  //
  BiosUri = RedfishGetUri (ResourceUri);
  if (BiosUri == NULL) {
    ASSERT (FALSE);
    FreePool (ResourceUri);
    return EFI_OUT_OF_RESOURCES;
  }

  Status = HandleResource (Private, BiosUri);
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a, process external resource: %s failed: %r\n", __func__, BiosUri, Status));
  }

  FreePool (BiosUri);
  FreePool (ResourceUri);
  return Status;
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

  if (mRedfishResourcePrivate == NULL) {
    return;
  }

  if (mRedfishResourcePrivate->FeatureProtocol != NULL) {
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
                              RedfishExternalResourceResourceFeatureCallback,
                              (VOID *)mRedfishResourcePrivate
                              );
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a: failed to register %s: %r\n", __func__, REDFISH_MANAGED_URI, Status));
  }

  mRedfishResourcePrivate->FeatureProtocol = FeatureProtocol;

  gBS->CloseEvent (Event);
}

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

  if (mRedfishResourcePrivate != NULL) {
    return EFI_ALREADY_STARTED;
  }

  mRedfishResourceConfigProtocolHandle = ImageHandle;

  mRedfishResourcePrivate = AllocateZeroPool (sizeof (REDFISH_RESOURCE_COMMON_PRIVATE));
  CopyMem (&mRedfishResourcePrivate->ConfigHandler, &mRedfishConfigHandler, sizeof (EDKII_REDFISH_CONFIG_HANDLER_PROTOCOL));
  CopyMem (&mRedfishResourcePrivate->RedfishResourceConfig, &mRedfishResourceConfig, sizeof (EDKII_REDFISH_RESOURCE_CONFIG_PROTOCOL));

  //
  // Publish config handler protocol and resource protocol.
  //
  Status = gBS->InstallMultipleProtocolInterfaces (
                  &ImageHandle,
                  &gEdkIIRedfishConfigHandlerProtocolGuid,
                  &mRedfishResourcePrivate->ConfigHandler,
                  &gEdkIIRedfishResourceConfigProtocolGuid,
                  &mRedfishResourcePrivate->RedfishResourceConfig,
                  NULL
                  );

  EfiCreateProtocolNotifyEvent (
    &gEfiRestJsonStructureProtocolGuid,
    TPL_CALLBACK,
    EfiRestJsonStructureProtocolIsReady,
    NULL,
    &Registration
    );

  EfiCreateProtocolNotifyEvent (
    &gEdkIIRedfishFeatureProtocolGuid,
    TPL_CALLBACK,
    EdkIIRedfishFeatureProtocolIsReady,
    (VOID *)mRedfishResourcePrivate,
    &Registration
    );

  return Status;
}
