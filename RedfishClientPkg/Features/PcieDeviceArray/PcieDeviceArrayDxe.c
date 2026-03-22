/** @file

  Redfish feature driver implementation - PCIe Device Array

  Copyright (C) 2026 Advanced Micro Devices, Inc. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include "PcieDeviceArrayDxe.h"

REDFISH_ARRAY_PRIVATE  *mRedfishArrayPrivate = NULL;

//
// Adding the entry to the structure for the
// supported PCIeDevice Redfish schema.
//
REDFISH_SCHEMA_INFO  SupportedRedfishSchema[] = {
  {
    REDFISH_PCIE_DEVICE_SCHEMA_NAME,
    "1",
    "9",
    "0"
  }
};

CHAR8  EmptyPCieArrayJson[] = "{\"PCIeDevice\": \"[]\"}";

/**
  Provisioning redfish PCIrDevice resources

  @param[in]   Private     Pointer to REDFISH_ARRAY_PRIVATE.
  @param[in]   UriArray    URI array
  @param[in]   Json        Return JSON object of PCIe array.

  @retval EFI_STATUS               Some error happened.

**/
EFI_STATUS
GeneratePcieArrayJson (
  IN  REDFISH_ARRAY_PRIVATE           *Private,
  IN  REDFISH_FEATURE_ARRAY_TYPE_URI  *UriArray,
  IN  CHAR8                           **Json
  )
{
  EFI_STATUS                                 Status;
  UINTN                                      NumberOfUri;
  CHAR8                                      *ResultJson;
  CHAR8                                      **ThisUriPtr;
  EFI_REDFISH_PCIEDEVICEARRAY                PcieDeviceArray;
  RedfishPCIeDeviceArray_PCIeDeviceArray_CS  *PcieDeviceArrayCs;
  RedfishCS_Type_Uri_Data                    *TempUriData;

  if ((UriArray == NULL) || (UriArray->Count == 0) || (Private == NULL) || (Json == NULL)) {
    return EFI_INVALID_PARAMETER;
  }

  PcieDeviceArrayCs = (RedfishPCIeDeviceArray_PCIeDeviceArray_CS *)AllocatePool (sizeof (RedfishPCIeDeviceArray_PCIeDeviceArray_CS));
  if (PcieDeviceArrayCs == NULL) {
    DEBUG ((DEBUG_ERROR, "%a: Not enough memory for the PcieDeviceArrayCs.\n"));
    return EFI_OUT_OF_RESOURCES;
  }

  PcieDeviceArrayCs->Header.KeyName =
    StrUnicodeToAscii (Private->InformationExchange->SendInformation.PropertyName);
  if (PcieDeviceArrayCs->Header.KeyName == NULL) {
    DEBUG ((DEBUG_ERROR, "%a: Not enough memory for the PropertyName.\n"));
    return EFI_OUT_OF_RESOURCES;
  }

  //
  // Initial header.
  //
  PcieDeviceArrayCs->Header.ResourceType = RedfishCS_Type_CS;
  InitializeLinkHead (&PcieDeviceArrayCs->Header.LinkEntry);
  InitializeLinkHead (&PcieDeviceArrayCs->PCIeDevices.Header.LinkEntry);
  //
  // Go through the URI array.
  //
  ThisUriPtr = UriArray->List;
  for (NumberOfUri = 0; NumberOfUri < UriArray->Count; NumberOfUri++) {
    TempUriData = (RedfishCS_Type_Uri_Data *)AllocatePool (sizeof (RedfishCS_Type_Uri_Data));
    if (TempUriData == NULL) {
      DEBUG ((DEBUG_ERROR, "%a: Not enough memory for the TempUriData.\n"));
      return EFI_OUT_OF_RESOURCES;
    }

    TempUriData->Header.KeyName      = "@odata.id";
    TempUriData->Header.ResourceType = RedfishCS_Type_Uri;
    TempUriData->Header.ThisUri      = *ThisUriPtr;
    TempUriData->Uri                 = *ThisUriPtr;
    InitializeLinkHead (&TempUriData->Header.LinkEntry);
    InsertTailLink (&PcieDeviceArrayCs->PCIeDevices.Header.LinkEntry, &TempUriData->Header.LinkEntry);
    ThisUriPtr++;
  }

  //
  // Convert CS to JSON
  //
  PcieDeviceArray.Header.JsonRsrcIdentifier.NameSpace.ResourceTypeName = REDFISH_SCHEMA_NAME;
  PcieDeviceArray.Header.JsonRsrcIdentifier.NameSpace.MajorVersion     = RESOURCE_SCHEMA_MAJOR;
  PcieDeviceArray.Header.JsonRsrcIdentifier.NameSpace.MinorVersion     = RESOURCE_SCHEMA_MINOR;
  PcieDeviceArray.Header.JsonRsrcIdentifier.NameSpace.ErrataVersion    = RESOURCE_SCHEMA_MINOR;
  PcieDeviceArray.Header.JsonRsrcIdentifier.DataType                   = REDFISH_SCHEMA_NAME;
  PcieDeviceArray.PCIeDeviceArray                                      = PcieDeviceArrayCs;
  //
  // Convert C structure to JSON text.
  //
  Status = Private->JsonStructProtocol->ToJson (
                                          Private->JsonStructProtocol,
                                          (EFI_REST_JSON_STRUCTURE_HEADER *)&PcieDeviceArray,
                                          &ResultJson
                                          );
  //
  // Free resource
  //
  do {
    TempUriData = (RedfishCS_Type_Uri_Data *)GetFirstLink (&PcieDeviceArrayCs->PCIeDevices.Header.LinkEntry);
    RemoveLink (&TempUriData->Header.LinkEntry);
    FreePool (TempUriData);
  } while (!IsLinkEmpty (&PcieDeviceArrayCs->PCIeDevices.Header.LinkEntry));

  *Json = ResultJson;

  FreePool (PcieDeviceArrayCs->Header.KeyName);
  FreePool (PcieDeviceArrayCs);
  return Status;
}

/**
  Provisioning redfish PCIrDevice resources

  @param[in]   Private    Pointer to REDFISH_ARRAY_PRIVATE.
  @param[in]   UriArray   URI array

  @retval EFI_STATUS               Some error happened.

**/
EFI_STATUS
UpdateRedfishPcieDeviceArray (
  IN  REDFISH_ARRAY_PRIVATE           *Private,
  IN  REDFISH_FEATURE_ARRAY_TYPE_URI  *UriArray
  )
{
  CHAR8             *Json;
  EFI_STATUS        Status;
  REDFISH_RESPONSE  Response;

  Json   = NULL;
  Status = GeneratePcieArrayJson (Private, UriArray, &Json);
  if (EFI_ERROR (Status) || (Json == NULL)) {
    DEBUG ((DEBUG_ERROR, "%a: Fail to generate PCIe devices array.\n"));
  }

  //
  // Use parent Redfish URI to  patch the array values.
  //
  DEBUG ((DEBUG_MANAGEABILITY, "%a: Patching PCIe device array to %s: %r\n", __func__, Private->ArrayParentUri, Status));
  Status = RedfishHttpPatchResource (Private->RedfishService, Private->ArrayParentUri, Json, &Response);
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a: Fail to patch PCIe device array to %s: %r\n", __func__, Private->ArrayParentUri, Status));
  }

  FreePool (Json);
  return Status;
}

/**
  Handle each PCIe device instance.

  @param [in] Private            Pointer to REDFISH_ARRAY_PRIVATE.
  @param [in] Uri                The URI to eacj PCIe Device resource.

  @retval EFI_SUCCESS            Instance is handled successfully.
  @retval EFI_INVALID_PARAMETER  The given Private is NULL.
  @retval Otherwise              Other errors.

**/
EFI_STATUS
HandleResource (
  IN  REDFISH_ARRAY_PRIVATE  *Private,
  IN  EFI_STRING             Uri
  )
{
  EFI_STATUS           Status;
  REDFISH_SCHEMA_INFO  *SchemaInfo;
  UINTN                SupportedSchemaIndex;
  REDFISH_RESPONSE     Response;

  if ((Private == NULL) || IS_EMPTY_STRING (Uri)) {
    return EFI_INVALID_PARAMETER;
  }

  Status     = EFI_DEVICE_ERROR;
  SchemaInfo = SupportedRedfishSchema;
  for (SupportedSchemaIndex = 0; SupportedSchemaIndex < (sizeof (SupportedRedfishSchema) / sizeof (REDFISH_SCHEMA_INFO)); SupportedSchemaIndex++) {
    //
    // Check and see if target property exist.
    // If yes, we will delete it from PCIeArray.
    //
    DEBUG ((REDFISH_DEBUG_TRACE, "%a: Check for %s\n", __func__, Uri));
    Status = EdkIIRedfishResourceConfigCheck (SchemaInfo, Uri, NULL);
    if (!EFI_ERROR (Status)) {
      //
      // PCIeDevice is found on Redfish service
      // Delete this resource as the current implementation is
      // to clean up PCIeDevice instance and re-provision it.
      //
      // Redfish service may return 405 Method Not Allowed as
      // it doesn't support HTTP DELETE on this resource.
      // We exit here and this error won't impact the follow
      // up process.
      //
      Status = RedfishHttpDeleteResource (Private->RedfishService, Uri, &Response);
      if (EFI_ERROR (Status)) {
        DEBUG ((DEBUG_ERROR, "%a: failed to delete resource for: %s: %r\n", __func__, Private->ArrayUri, Status));
        goto ExitReturn;
      }
    } else {
      if (Status == EFI_NOT_FOUND) {
        //
        // This PCIeDevice is not found on the Redfish service.
        // Means this is a new PCIeDevice to Redfish service.
        //
        goto ExitReturn;
      }

      if (Status != EFI_DEVICE_ERROR) {
        DEBUG ((DEBUG_ERROR, "%a: failed to create resource for: %s: %r\n", __func__, Private->ArrayUri, Status));
        goto ExitReturn;
      }
    }

    //
    // The code reaches to here because the EFI_DEVICE_ERROR.
    // Means this resource is not handled by the given SchemaInfo.
    //
    SchemaInfo++;
  }

  DEBUG ((DEBUG_ERROR, "%a: No Redfish feature driver to handle the property URI: %s: %r\n", __func__, Private->ArrayUri, Status));

ExitReturn:
  return Status;
}

/**
  Handle all the instances in the array.

  @param [in] Private            Pointer to REDFISH_ARRAY_PRIVATE.

  @retval EFI_SUCCESS            Instances in the array are handled successfully.
  @retval EFI_INVALID_PARAMETER  The given Private is NULL.
  @retval Otherwise              Other errors.

**/
EFI_STATUS
HandleArrayResource (
  IN  REDFISH_ARRAY_PRIVATE  *Private
  )
{
  EFI_STATUS                                 Status;
  EFI_REDFISH_PCIEDEVICEARRAY                *PcieDeviceArrayInterpret;
  RedfishPCIeDeviceArray_PCIeDeviceArray_CS  *ArrayCs;
  RedfishCS_Link                             *List;
  RedfishCS_Header                           *Header;
  RedfishCS_Type_Uri_Data                    *UriData;
  EFI_STRING                                 ArrayUri;
  EFI_REST_JSON_RESOURCE_TYPE_IDENTIFIER     JsonTypeIdentifier;
  REDFISH_RESPONSE                           Response;

  //
  // PCIeDevice is found on Redfish service
  // Current implementation is to clean up
  // PCIeDevice instance and re-provision it.
  //

  if (Private == NULL) {
    return EFI_INVALID_PARAMETER;
  }

  if ((Private->JsonStructProtocol == NULL) || (Private->ArrayJson == NULL)) {
    return EFI_NOT_READY;
  }

  DEBUG ((REDFISH_DEBUG_TRACE, "%a: process PCIeDevice array for: %s\n", __func__, Private->ArrayUri));

  //
  // Build the JSON Structure Identifier.
  //
  JsonTypeIdentifier.NameSpace.ResourceTypeName = REDFISH_SCHEMA_NAME;
  JsonTypeIdentifier.NameSpace.MajorVersion     = RESOURCE_SCHEMA_MAJOR;
  JsonTypeIdentifier.NameSpace.MinorVersion     = RESOURCE_SCHEMA_MINOR;
  JsonTypeIdentifier.NameSpace.ErrataVersion    = RESOURCE_SCHEMA_MINOR;
  JsonTypeIdentifier.DataType                   = REDFISH_SCHEMA_NAME;

  //
  // Convert JSON text to C structure.
  //
  Status = Private->JsonStructProtocol->ToStructure (
                                          Private->JsonStructProtocol,
                                          &JsonTypeIdentifier,
                                          Private->ArrayJson,
                                          (EFI_REST_JSON_STRUCTURE_HEADER **)&PcieDeviceArrayInterpret
                                          );
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a: ToStructure() failed: %r\n", __func__, Status));
    return Status;
  }

  ArrayCs = PcieDeviceArrayInterpret->PCIeDeviceArray;
  if (IsLinkEmpty (&ArrayCs->PCIeDevices.Header.LinkEntry)) {
    DEBUG ((DEBUG_MANAGEABILITY, "%a: No PCIeDevice found.\n", __func__));
    Status = EFI_NOT_FOUND;
    goto ErrorExit;
  }

  List = GetFirstLink (&ArrayCs->PCIeDevices.Header.LinkEntry);
  while (TRUE) {
    Header = (RedfishCS_Header *)List;
    if (Header->ResourceType == RedfishCS_Type_Uri) {
      UriData  = (RedfishCS_Type_Uri_Data *)Header;
      ArrayUri = NULL;
      ArrayUri = StrAsciiToUnicode (UriData->Uri);
      ASSERT (ArrayUri != NULL);
      if (ArrayUri != NULL) {
        Status = HandleResource (Private, ArrayUri);
        if (EFI_ERROR (Status)) {
          if (Status == EFI_NOT_FOUND) {
            DEBUG ((DEBUG_MANAGEABILITY, "%a: The corresponding PCIe device of %a is not found.\n", __func__, UriData->Uri));
            DEBUG ((DEBUG_MANAGEABILITY, "%a: The hardware configuration maybe changed.\n", __func__, UriData->Uri));
          } else {
            DEBUG ((DEBUG_ERROR, "%a: process PCIeDevice resource: %a failed: %r\n", __func__, UriData->Uri, Status));
          }
        }

        FreePool (ArrayUri);
      }
    }

    if (IsLinkAtEnd (&ArrayCs->PCIeDevices.Header.LinkEntry, List)) {
      break;
    }

    List = GetNextLink (&ArrayCs->PCIeDevices.Header.LinkEntry, List);
  }

  //
  // Now we are going to patch an empty array to the parent URI.
  // Redfish service may return 405 Method Not Allowed as
  // it doesn't support HTTP PATCH on this resource. This error
  // doesn't impact the follow up process.
  //
  Status = RedfishHttpPatchResource (Private->RedfishService, Private->ArrayParentUri, EmptyPCieArrayJson, &Response);
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a: Fail to patch PCIe device %s to an empty array: %r\n", __func__, Private->ArrayParentUri, Status));
  }

ErrorExit:
  Status = Private->JsonStructProtocol->DestoryStructure (
                                          Private->JsonStructProtocol,
                                          (EFI_REST_JSON_STRUCTURE_HEADER *)PcieDeviceArrayInterpret
                                          );
  return Status;
}

/**
  Create the array resource.

  @param [in] Private            Pointer to REDFISH_ARRAY_PRIVATE.

  @retval EFI_SUCCESS            Array information is released successfully.
  @retval EFI_INVALID_PARAMETER  The given Private is NULL.
  @retval Otherwise              Other errors.

**/
EFI_STATUS
CreateArrayResource (
  IN  REDFISH_ARRAY_PRIVATE  *Private
  )
{
  EFI_STATUS           Status;
  REDFISH_SCHEMA_INFO  *SchemaInfo;
  UINTN                SupportedSchemaIndex;

  if (Private == NULL) {
    return EFI_INVALID_PARAMETER;
  }

  DEBUG ((REDFISH_DEBUG_TRACE, "%a: create resource for array resource of: %s\n", __func__, Private->ArrayUri));

  Status     = EFI_DEVICE_ERROR;
  SchemaInfo = SupportedRedfishSchema;
  for (SupportedSchemaIndex = 0; SupportedSchemaIndex < (sizeof (SupportedRedfishSchema) / sizeof (REDFISH_SCHEMA_INFO)); SupportedSchemaIndex++) {
    Status = EdkIIRedfishResourceConfigProvisioning (SchemaInfo, Private->ArrayUri, NULL, Private->InformationExchange, TRUE);
    if (!EFI_ERROR (Status)) {
      //
      // Handle the newly created PCIeDevice URI.
      //
      // Redfish service may return 405 Method Not Allowed as
      // it doesn't support HTTP PATCH on this resource.
      // However, Redfish service may update this array by itself when
      // the PCIe device resource is provisioned in EdkIIRedfishResourceConfigProvisioning().
      //
      if ((Private->InformationExchange->ReturnedInformation.ResourceTypeReturnedInformation != NULL) &&
          (Private->InformationExchange->ReturnedInformation.Type == InformationTypeArrayMemberUri))
      {
        Status = UpdateRedfishPcieDeviceArray (
                   Private,
                   (REDFISH_FEATURE_ARRAY_TYPE_URI *)Private->InformationExchange->ReturnedInformation.ResourceTypeReturnedInformation
                   );
        FreePool (Private->InformationExchange->ReturnedInformation.ResourceTypeReturnedInformation);
      }

      return Status;
    }

    if (EFI_ERROR (Status) && (Status != EFI_DEVICE_ERROR)) {
      DEBUG ((DEBUG_ERROR, "%a: failed to create resource for: %s: %r\n", __func__, Private->ArrayUri, Status));
      return Status;
    }

    SchemaInfo++;
  }

  DEBUG ((DEBUG_ERROR, "%a: No Redfish feature driver to handle the property URI: %s: %r\n", __func__, Private->ArrayUri, Status));
  return Status;
}

/**
  Release array resource.

  @param [in] Private            Pointer to REDFISH_ARRAY_PRIVATE.

  @retval EFI_SUCCESS            Array information is released successfully.
  @retval EFI_INVALID_PARAMETER  The given Private is NULL.
  @retval Otherwise              Other errors.

**/
EFI_STATUS
ReleaseArrayResource (
  IN REDFISH_ARRAY_PRIVATE  *Private
  )
{
  if (Private == NULL) {
    return EFI_INVALID_PARAMETER;
  }

  //
  // Release resource
  //
  RedfishHttpFreeResponse (&Private->Response);

  if (Private->ArrayJson != NULL) {
    FreePool (Private->ArrayJson);
    Private->ArrayJson = NULL;
  }

  if (Private->RedfishVersion != NULL) {
    FreePool (Private->RedfishVersion);
    Private->RedfishVersion = NULL;
  }

  return EFI_SUCCESS;
}

/**
  Handle PCIe device array resource. This includes HTTP delete all
  the exising PCIe Device resource on the parent URI, and then provision
  PCIe devices to the array resource.

  @param [in] Private            Pointer to REDFISH_ARRAY_PRIVATE.

  @retval EFI_SUCCESS            Array information is retrieved successfully.
  @retval EFI_INVALID_PARAMETER  The given Private is NULL.
  @retval Otherwise              Other errors.

**/
EFI_STATUS
ArrayHandler (
  IN REDFISH_ARRAY_PRIVATE  *Private
  )
{
  EFI_STATUS         Status;
  EDKII_JSON_VALUE   JsonValue;
  EDKII_JSON_OBJECT  PcieDevicesValue;
  CHAR8              *PropertyNameAscii;

  if (Private == NULL) {
    return EFI_INVALID_PARAMETER;
  }

  DEBUG ((REDFISH_DEBUG_TRACE, "%a: array handler for %s\n", __func__, Private->ArrayUri));

  PropertyNameAscii = AllocateZeroPool (StrSize (Private->InformationExchange->SendInformation.PropertyName) / 2);
  if (PropertyNameAscii == NULL) {
    DEBUG ((DEBUG_ERROR, "%a: unable to allocate memory for the string: %s\n", __func__, Private->InformationExchange->SendInformation.PropertyName));
    goto ON_RELEASE;
  }

  Status = UnicodeStrToAsciiStrS (
             (CONST CHAR16 *)Private->InformationExchange->SendInformation.PropertyName,
             PropertyNameAscii,
             StrSize (Private->InformationExchange->SendInformation.PropertyName) / 2
             );
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a: failed to invoke UnicodeStrToAsciiStrS: %s : %r\n", __func__, Private->InformationExchange->SendInformation.PropertyName, Status));
    goto ON_RELEASE;
  }

  //
  // Query array from Redfish service.
  //
  Status = RedfishHttpGetResource (Private->RedfishService, Private->ArrayParentUri, NULL, &Private->Response, TRUE);
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a: unable to get resource from: %s :%r\n", __func__, Private->ArrayParentUri, Status));
    goto ON_RELEASE;
  }

  Private->ArrayParentPayload = Private->Response.Payload;
  ASSERT (Private->ArrayParentPayload != NULL);

  //
  // Current implementation is to delete all of the existing PCI device on
  // Redfish service in HandleArrayResource, then provision the PCI device
  // to Redfish service. The performance way is to keep the unchanged PCI devices
  // and add the newly found PCI devices to Redfish service.
  //
  Private->ArrayJson = NULL;
  JsonValue          = RedfishJsonInPayload (Private->ArrayParentPayload);
  JsonValue          = JsonObjectGetValue (JsonValueGetObject (JsonValue), PropertyNameAscii);
  if (JsonValue != NULL) {
    PcieDevicesValue = JsonValueInitObject ();
    if (PcieDevicesValue != NULL) {
      JsonObjectSetValue (JsonValueGetObject (PcieDevicesValue), PropertyNameAscii, JsonValue);
      Private->ArrayJson = JsonDumpString (PcieDevicesValue, EDKII_JSON_COMPACT);
      ASSERT (Private->ArrayJson != NULL);
      Status = HandleArrayResource (Private);
    } else {
      DEBUG ((DEBUG_ERROR, "%a: Failed to create a new JSON value object: %r\n", __func__, Status));
      goto ON_RELEASE_HTTP;
    }
  } else {
    DEBUG ((DEBUG_ERROR, "%a: Failed to get JSON value of %a: %r\n", __func__, PropertyNameAscii, Status));
    goto ON_RELEASE_HTTP;
  }

  Status = CreateArrayResource (Private);
  if (EFI_ERROR (Status)) {
    if (JsonValue == NULL) {
      DEBUG ((DEBUG_ERROR, "%a: Failed to create PCIeDevice array: %r\n", __func__, Status));
    } else {
      DEBUG ((DEBUG_MANAGEABILITY, "%a: Failed to handle PCIeDevice array: %r\n", __func__, Status));
    }
  }

ON_RELEASE_HTTP:
  RedfishHttpFreeResponse (&Private->Response);

ON_RELEASE:
  if (PropertyNameAscii != NULL) {
    FreePool (PropertyNameAscii);
  }

  if (PcieDevicesValue != NULL) {
    JsonValueFree (PcieDevicesValue);
  }

  ReleaseArrayResource (Private);
  return Status;
}

/**
  The callback function provided by Redfish Feature driver.

  @param[in]     This                Pointer to EDKII_REDFISH_FEATURE_PROTOCOL instance.
  @param[in]     FeatureAction       The action Redfish feature driver should take.
  @param[in]     Uri                 The array URI.
  @param[in]     Context             The context of Redfish feature driver.
  @param[in,out] InformationExchange The pointer to RESOURCE_INFORMATION_EXCHANGE

  @retval EFI_SUCCESS              Redfish feature driver callback is executed successfully.
  @retval Others                   Some errors happened.

**/
EFI_STATUS
EFIAPI
RedfishPcieDeviceArrayFeatureCallback (
  IN     EDKII_REDFISH_FEATURE_PROTOCOL  *This,
  IN     FEATURE_CALLBACK_ACTION         FeatureAction,
  IN     VOID                            *Context,
  IN OUT RESOURCE_INFORMATION_EXCHANGE   *InformationExchange
  )
{
  EFI_STATUS             Status;
  REDFISH_SERVICE        RedfishService;
  REDFISH_ARRAY_PRIVATE  *Private;
  EFI_STRING             ResourceUri;

  if (FeatureAction != CallbackActionStartOperation) {
    return EFI_UNSUPPORTED;
  }

  Private = (REDFISH_ARRAY_PRIVATE *)Context;

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
    DEBUG ((DEBUG_ERROR, "%a: Fail to allocate memory for array full URI.\n", __func__));
    return EFI_OUT_OF_RESOURCES;
  }

  StrCatS (ResourceUri, MAX_URI_LENGTH, Private->RedfishVersion);
  StrCatS (ResourceUri, MAX_URI_LENGTH, InformationExchange->SendInformation.FullUri);
  DEBUG ((DEBUG_MANAGEABILITY, "%a: Redfish array resource URI - %s\n", __func__, ResourceUri));
  Private->ArrayUri = RedfishGetUri (ResourceUri); // Initialize array path
  if (Private->ArrayUri == NULL) {
    FreePool (ResourceUri);
    ASSERT (FALSE);
    return EFI_OUT_OF_RESOURCES;
  }

  //
  // Array is usually the resource in the parent resource,
  // use the parent uri to get the resource.
  //
  ResourceUri[0] = 0;
  StrCatS (ResourceUri, MAX_URI_LENGTH, Private->RedfishVersion);
  StrCatS (ResourceUri, MAX_URI_LENGTH, InformationExchange->SendInformation.ParentUri);
  DEBUG ((DEBUG_MANAGEABILITY, "%a: Redfish array parent resource URI - %s\n", __func__, ResourceUri));
  Private->ArrayParentUri = RedfishGetUri (ResourceUri); // Initialize array parent path
  if (Private->ArrayParentUri == NULL) {
    FreePool (ResourceUri);
    ASSERT (FALSE);
    return EFI_OUT_OF_RESOURCES;
  }

  Status = ArrayHandler (Private);
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a: ArrayHandler failure: %r\n", __func__, Status));
  }

  FreePool (ResourceUri);
  FreePool (Private->ArrayParentUri);

  InformationExchange->ReturnedInformation.Type = InformationTypeNone;
  return EFI_SUCCESS;
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
RedfishPcieDeviceArrayInit (
  IN  EDKII_REDFISH_CONFIG_HANDLER_PROTOCOL  *This,
  IN  REDFISH_CONFIG_SERVICE_INFORMATION     *RedfishConfigServiceInfo
  )
{
  REDFISH_ARRAY_PRIVATE  *Private;

  Private = REDFISH_ARRAY_PRIVATE_DATA_FROM_PROTOCOL (This);

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
RedfishPcieDeviceArrayStop (
  IN  EDKII_REDFISH_CONFIG_HANDLER_PROTOCOL  *This
  )
{
  REDFISH_ARRAY_PRIVATE  *Private;

  Private = REDFISH_ARRAY_PRIVATE_DATA_FROM_PROTOCOL (This);

  if (Private->RedfishService != NULL) {
    RedfishCleanupService (Private->RedfishService);
    Private->RedfishService = NULL;
  }

  ReleaseArrayResource (Private);

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

  if (mRedfishArrayPrivate == NULL) {
    return;
  }

  if (mRedfishArrayPrivate->JsonStructProtocol != NULL) {
    return;
  }

  Status = gBS->LocateProtocol (
                  &gEfiRestJsonStructureProtocolGuid,
                  NULL,
                  (VOID **)&mRedfishArrayPrivate->JsonStructProtocol
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

  if (mRedfishArrayPrivate == NULL) {
    return;
  }

  if (mRedfishArrayPrivate->FeatureProtocol != NULL) {
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
                              RedfishPcieDeviceArrayFeatureCallback,
                              (VOID *)mRedfishArrayPrivate
                              );
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a: failed to register %s: %r\n", __func__, REDFISH_MANAGED_URI, Status));
  }

  mRedfishArrayPrivate->FeatureProtocol = FeatureProtocol;

  gBS->CloseEvent (Event);
}

/**
  Unloads an image.

  @param [in] ImageHandle        Handle that identifies the image to be unloaded.

  @retval EFI_SUCCESS           The image has been unloaded.
  @retval EFI_INVALID_PARAMETER ImageHandle is not a valid image handle.

**/
EFI_STATUS
EFIAPI
RedfishPcieDeviceArrayUnload (
  IN EFI_HANDLE  ImageHandle
  )
{
  EFI_STATUS                             Status;
  EDKII_REDFISH_CONFIG_HANDLER_PROTOCOL  *ConfigHandler;

  if (mRedfishArrayPrivate == NULL) {
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

  FreePool (mRedfishArrayPrivate);
  mRedfishArrayPrivate = NULL;

  return Status;
}

EDKII_REDFISH_CONFIG_HANDLER_PROTOCOL  mRedfishConfigHandler = {
  RedfishPcieDeviceArrayInit,
  RedfishPcieDeviceArrayStop
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
RedfishPcieDeviceArrayEntryPoint (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  )
{
  EFI_STATUS  Status;
  VOID        *Registration;

  if (mRedfishArrayPrivate != NULL) {
    return EFI_ALREADY_STARTED;
  }

  mRedfishArrayPrivate = AllocateZeroPool (sizeof (REDFISH_ARRAY_PRIVATE));
  CopyMem (&mRedfishArrayPrivate->ConfigHandler, &mRedfishConfigHandler, sizeof (EDKII_REDFISH_CONFIG_HANDLER_PROTOCOL));

  Status = gBS->InstallProtocolInterface (
                  &ImageHandle,
                  &gEdkIIRedfishConfigHandlerProtocolGuid,
                  EFI_NATIVE_INTERFACE,
                  &mRedfishArrayPrivate->ConfigHandler
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
