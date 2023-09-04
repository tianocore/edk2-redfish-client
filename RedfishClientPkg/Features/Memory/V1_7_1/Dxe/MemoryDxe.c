/** @file
  Redfish feature driver implementation - Memory

  (C) Copyright 2020-2022 Hewlett Packard Enterprise Development LP<BR>
  Copyright (c) 2023, NVIDIA CORPORATION & AFFILIATES. All rights reserved.

  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include "../Common/MemoryCommon.h"

extern REDFISH_RESOURCE_COMMON_PRIVATE  *mRedfishResourcePrivate;

EFI_HANDLE  mRedfishResourceConfigProtocolHandle;

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

  DEBUG ((DEBUG_MANAGEABILITY, "%a, provisioning in %s mode\n", __func__, (PostMode ? L"POST" : L"PATCH")));

  Private = REDFISH_RESOURCE_COMMON_PRIVATE_DATA_FROM_RESOURCE_PROTOCOL (This);

  if (Private->RedfishService == NULL) {
    return EFI_NOT_READY;
  }

  Status = GetResourceByUri (Private->RedfishService, Uri, &Response);
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a, get resource from: %s failed\n", __func__, Uri));
    return Status;
  }

  Private->Uri     = Uri;
  Private->Payload = Response.Payload;
  ASSERT (Private->Payload != NULL);

  Status = RedfishProvisioningResourceCommon (Private, !PostMode);

  //
  // Release resource
  //
  if (Private->Payload != NULL) {
    RedfishFreeResponse (
      Response.StatusCode,
      Response.HeaderCount,
      Response.Headers,
      Response.Payload
      );
    Private->Payload = NULL;
  }

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
  CHAR8                            *Etag;

  if ((This == NULL) || IS_EMPTY_STRING (Uri)) {
    return EFI_INVALID_PARAMETER;
  }

  Private = REDFISH_RESOURCE_COMMON_PRIVATE_DATA_FROM_RESOURCE_PROTOCOL (This);

  if (Private->RedfishService == NULL) {
    return EFI_NOT_READY;
  }

  Status = GetResourceByUri (Private->RedfishService, Uri, &Response);
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a, get resource from: %s failed\n", __func__, Uri));
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
  Status = GetEtagAndLocation (&Response, &Etag, NULL);
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a, failed to get ETag from HTTP header\n", __func__));
  }

  Status = RedfishConsumeResourceCommon (Private, Private->Json, Etag);
  if (EFI_ERROR (Status)) {
    if (Status != EFI_ALREADY_STARTED) {
      DEBUG ((DEBUG_ERROR, "%a, failed to consume resource from: %s: %r\n", __func__, Uri, Status));
    }
  } else {
    //
    // Keep etag after consuming pending settings.
    //
    if (Etag != NULL) {
      SetEtagWithUri (Etag, Private->Uri);
    }
  }

  //
  // Release resource
  //
  if (Private->Payload != NULL) {
    RedfishFreeResponse (
      Response.StatusCode,
      Response.HeaderCount,
      Response.Headers,
      Response.Payload
      );
    Private->Payload = NULL;
  }

  if (Private->Json != NULL) {
    FreePool (Private->Json);
    Private->Json = NULL;
  }

  if (Etag != NULL) {
    FreePool (Etag);
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

  Status = GetResourceByUri (Private->RedfishService, Uri, &Response);
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a, get resource from: %s failed\n", __func__, Uri));
    return Status;
  }

  Private->Uri     = Uri;
  Private->Payload = Response.Payload;
  ASSERT (Private->Payload != NULL);

  Private->Json = JsonDumpString (RedfishJsonInPayload (Private->Payload), EDKII_JSON_COMPACT);
  ASSERT (Private->Json != NULL);

  Status = RedfishUpdateResourceCommon (Private, Private->Json);
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a, failed to update resource from: %s: %r\n", __func__, Uri, Status));
  }

  //
  // Release resource
  //
  if (Private->Payload != NULL) {
    RedfishFreeResponse (
      Response.StatusCode,
      Response.HeaderCount,
      Response.Headers,
      Response.Payload
      );
    Private->Payload = NULL;
  }

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

  if ((This == NULL) || IS_EMPTY_STRING (Uri)) {
    return EFI_INVALID_PARAMETER;
  }

  Private = REDFISH_RESOURCE_COMMON_PRIVATE_DATA_FROM_RESOURCE_PROTOCOL (This);

  if (Private->RedfishService == NULL) {
    return EFI_NOT_READY;
  }

  Status = GetResourceByUri (Private->RedfishService, Uri, &Response);
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a, get resource from: %s failed\n", __func__, Uri));
    return Status;
  }

  Private->Uri     = Uri;
  Private->Payload = Response.Payload;
  ASSERT (Private->Payload != NULL);

  Private->Json = JsonDumpString (RedfishJsonInPayload (Private->Payload), EDKII_JSON_COMPACT);
  ASSERT (Private->Json != NULL);

  Status = RedfishCheckResourceCommon (Private, Private->Json);
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a, failed to check resource from: %s: %r\n", __func__, Uri, Status));
  }

  //
  // Release resource
  //
  if (Private->Payload != NULL) {
    RedfishFreeResponse (
      Response.StatusCode,
      Response.HeaderCount,
      Response.Headers,
      Response.Payload
      );
    Private->Payload = NULL;
  }

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

  Status = GetResourceByUri (Private->RedfishService, Uri, &Response);
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a, get resource from: %s failed\n", __func__, Uri));
    return Status;
  }

  Private->Uri     = Uri;
  Private->Payload = Response.Payload;
  ASSERT (Private->Payload != NULL);

  Private->Json = JsonDumpString (RedfishJsonInPayload (Private->Payload), EDKII_JSON_COMPACT);
  ASSERT (Private->Json != NULL);

  Status = RedfishIdentifyResourceCommon (Private, Private->Json);
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a, identify %s failed: %r\n", __func__, Uri, Status));
  }

  //
  // Release resource
  //
  if (Private->Payload != NULL) {
    RedfishFreeResponse (
      Response.StatusCode,
      Response.HeaderCount,
      Response.Headers,
      Response.Payload
      );
    Private->Payload = NULL;
  }

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

  if (Private->Payload != NULL) {
    RedfishCleanupPayload (Private->Payload);
    Private->Payload = NULL;
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
EfiRestJasonStructureProtocolIsReady (
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
    DEBUG ((DEBUG_ERROR, "%a, failed to locate gEfiRestJsonStructureProtocolGuid: %r\n", __func__, Status));
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
    EfiRestJasonStructureProtocolIsReady,
    NULL,
    &Registration
    );

  return Status;
}
