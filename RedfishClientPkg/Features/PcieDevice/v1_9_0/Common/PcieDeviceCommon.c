/** @file
  Redfish feature driver implementation - common functions

  Copyright (C) 2026 Advanced Micro Devices, Inc. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include "PcieDeviceCommon.h"
#include <Library/PrintLib.h>

CHAR8  PcieDeviceEmptyJson[] = "{\"@odata.id\": \"\", \"@odata.type\": \"#PCIeDevice.v1_9_0.PCIeDevice\", \"Id\": \"\", \"Name\": \"\"}";

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
  return EFI_UNSUPPORTED;
}

/**
  Find the content after the opening brace of a JSON object.

  @param[in]   JsonString  The JSON string to parse.

  @return  Pointer to the content after the opening '{', or
           pointer to the end of string if '{' is not found.

**/
CHAR8 *
GetJsonObjectContent (
  IN  CHAR8  *JsonString
  )
{
  CHAR8  *Cursor;

  Cursor = JsonString;
  while ((*Cursor != '\0') && (*Cursor != '{')) {
    Cursor++;
  }

  if (*Cursor == '{') {
    Cursor++;
  }

  return Cursor;
}

/**
  Patch PCIe interface properties into JSON output.

  @param[in]      ThisPcieTopology  Pointer to REDFISH_SYSTEM_TOPOLOGY_PCIE.
  @param[in,out]  Json              On input, the original JSON.
                                    On output, the patched JSON.

  @retval EFI_SUCCESS               JSON was patched successfully.
  @retval EFI_INVALID_PARAMETER     Input parameter is NULL.
  @retval EFI_OUT_OF_RESOURCES      Failed to allocate memory.

**/
EFI_STATUS
PatchPCIeInterface (
  IN      REDFISH_SYSTEM_TOPOLOGY_PCIE  *ThisPcieTopology,
  IN OUT  CHAR8                         **Json
  )
{
  CHAR8  *PatchedJson;
  CHAR8  *OriginalJson;
  CHAR8  *JsonContent;
  UINTN  PatchedJsonLen;

  if ((ThisPcieTopology == NULL) || (Json == NULL) || (*Json == NULL)) {
    return EFI_INVALID_PARAMETER;
  }

  PatchedJson  = NULL;
  OriginalJson = *Json;
  JsonContent  = GetJsonObjectContent (OriginalJson);

  PatchedJsonLen = AsciiStrLen (OriginalJson) * 2;

  PatchedJson = AllocateZeroPool (PatchedJsonLen);
  if (PatchedJson == NULL) {
    return EFI_OUT_OF_RESOURCES;
  }

  AsciiSPrint (
    PatchedJson,
    PatchedJsonLen,
    "{\n\"MaxLanes\": %d,\n\"LanesInUse\": %d,\n\"MaxPCIeType\": \"%d\",\n\"PCIeType\": \"%d\",\n%a",
    ThisPcieTopology->MaxLanes,
    ThisPcieTopology->LanesInUse,
    ThisPcieTopology->MaxPCIeType,
    ThisPcieTopology->PCIeType,
    JsonContent
    );

  FreePool (*Json);
  *Json = PatchedJson;

  return EFI_SUCCESS;
}

/**
  Provisioning one redfish PCIeDevice resource.

  @param[in]    JsonStructProtocol  Pointer to EFI_REST_JSON_STRUCTURE_PROTOCOL.
  @param[in]    InputJson           Input PCIeDevice JSON template.
  @param[in]    ThisPcieTopology    Pointer to this REDFISH_SYSTEM_TOPOLOGY_PCIE.
  @param[in]    IsCreateOrUpdate    Is to create the new resource of PCIeDevice.
  @param[out]   ResultJson          The result JSON of new PCIeDevice resource.

  @retval EFI_SUCCESS               PCIeDevice resource is provisioned successfully.
  @retval Others                    Some error happened.

**/
EFI_STATUS
ProvisioningPcieProperties (
  IN  EFI_REST_JSON_STRUCTURE_PROTOCOL  *JsonStructProtocol,
  IN  CHAR8                             *InputJson,
  IN  REDFISH_SYSTEM_TOPOLOGY_PCIE      *ThisPcieTopology,
  IN  BOOLEAN                           IsCreateOrUpdate,
  OUT CHAR8                             **ResultJson
  )
{
  EFI_REDFISH_PCIEDEVICE_V1_9_0     *PcieDevice;
  EFI_REDFISH_PCIEDEVICE_V1_9_0_CS  *PcieDeviceCs;
  EFI_STATUS                        Status;
  CHAR8                             *PatchedJson;
  UINTN                             StringLength;

  if ((JsonStructProtocol == NULL) || (ResultJson == NULL) || IS_EMPTY_STRING (InputJson)) {
    return EFI_INVALID_PARAMETER;
  }

  //
  // 17 bytes covers "%08x%08x" (16 hex + null) for SerialNumber,
  // "Single Function" (15 + null) for DeviceType, and "%04x" for
  // Manufacturer/Model. Use 32 for safety margin.
  //
  StringLength = 32;

  DEBUG ((
    REDFISH_DEBUG_TRACE,
    "%a provision PCIeDevice with: %s\n",
    __func__,
    (IsCreateOrUpdate ? L"Provision resource" : L"Update resource")
    ));

  *ResultJson = NULL;
  PcieDevice  = NULL;
  PatchedJson = NULL;

  if (PcdGetBool (PcdRedfishCompatibleSchemaSupport)) {
    Status = RedfishSetCompatibleSchemaVersion (&mSchemaInfo, InputJson, &PatchedJson);
    if (EFI_ERROR (Status)) {
      DEBUG ((DEBUG_ERROR, "%a, cannot set compatible schema version: %r\n", __func__, Status));
      return Status;
    }
  }

  Status = JsonStructProtocol->ToStructure (
                                 JsonStructProtocol,
                                 NULL,
                                 (PatchedJson == NULL ? InputJson : PatchedJson),
                                 (EFI_REST_JSON_STRUCTURE_HEADER **)&PcieDevice
                                 );
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a, ToStructure failure: %r\n", __func__, Status));
    goto ON_RELEASE;
  }

  PcieDeviceCs = PcieDevice->PCIeDevice;

  //
  // Handle SerialNumber
  //
  PcieDeviceCs->SerialNumber = AllocateZeroPool (StringLength);
  if (PcieDeviceCs->SerialNumber != NULL) {
    AsciiSPrint (
      PcieDeviceCs->SerialNumber,
      StringLength,
      "%08x%08x",
      ThisPcieTopology->SerialNumber.Upper,
      ThisPcieTopology->SerialNumber.Lower
      );
    DEBUG ((DEBUG_INFO, "Serial Number = %a\n", PcieDeviceCs->SerialNumber));
  }

  PcieDeviceCs->DeviceType = AllocateZeroPool (StringLength);
  if (PcieDeviceCs->DeviceType != NULL) {
    AsciiSPrint (
      PcieDeviceCs->DeviceType,
      StringLength,
      "%a",
      ThisPcieTopology->DeviceType ? "Multi Function" : "Single Function"
      );
    DEBUG ((DEBUG_INFO, "Device Type = %a\n", PcieDeviceCs->DeviceType));
  }

  PcieDeviceCs->Manufacturer = AllocateZeroPool (StringLength);
  if (PcieDeviceCs->Manufacturer != NULL) {
    AsciiSPrint (
      PcieDeviceCs->Manufacturer,
      StringLength,
      "%04x",
      ThisPcieTopology->Manufacturer
      );
    DEBUG ((DEBUG_INFO, "Manufacturer = %a\n", PcieDeviceCs->Manufacturer));
  }

  PcieDeviceCs->Model = AllocateZeroPool (StringLength);
  if (PcieDeviceCs->Model != NULL) {
    AsciiSPrint (
      PcieDeviceCs->Model,
      StringLength,
      "%04x",
      ThisPcieTopology->Model
      );
    DEBUG ((DEBUG_INFO, "Model = %a\n", PcieDeviceCs->Model));
  }

  //
  // Convert C structure back to JSON text.
  //
  Status = JsonStructProtocol->ToJson (
                                 JsonStructProtocol,
                                 (EFI_REST_JSON_STRUCTURE_HEADER *)PcieDevice,
                                 ResultJson
                                 );
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a, ToJson() failed: %r\n", __func__, Status));
    goto ON_RELEASE;
  }

  Status = PatchPCIeInterface (ThisPcieTopology, ResultJson);
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a, PatchPCIeInterface() failed: %r\n", __func__, Status));
  }

ON_RELEASE:
  //
  // Release resource.
  //
  if (PcieDevice != NULL) {
    JsonStructProtocol->DestoryStructure (
                          JsonStructProtocol,
                          (EFI_REST_JSON_STRUCTURE_HEADER *)PcieDevice
                          );
  }

  if (PatchedJson != NULL) {
    FreePool (PatchedJson);
  }

  return Status;
}

/**
  Provisioning one redfish PCIeDevice resource.

  @param[in]    Private           Pointer to REDFISH_RESOURCE_COMMON_PRIVATE.
  @param[in]    ThisPcieTopology  Pointer to this REDFISH_SYSTEM_TOPOLOGY_PCIE.
  @param[in]    PciIndexId        Zero-based index of PCIe device.
  @param[out]   UriReturned       The URI returned that contains newly created resource.

  @retval EFI_SUCCESS             PCIeDevice resource is provisioned successfully.
  @retval Others                  Some error happened.

**/
EFI_STATUS
ProvisioningPcieDeviceResource (
  IN  REDFISH_RESOURCE_COMMON_PRIVATE  *Private,
  IN  REDFISH_SYSTEM_TOPOLOGY_PCIE     *ThisPcieTopology,
  IN  UINTN                            PciIndexId,
  OUT CHAR8                            **UriReturned
  )
{
  CHAR8             *Json;
  EFI_STATUS        Status;
  EFI_STRING        NewResourceLocation;
  CHAR16            ResourceId[16];
  CHAR16            *UriInstance;
  UINTN             SizeString;
  UINTN             UriLen;
  REDFISH_RESPONSE  Response;

  if ((Private == NULL) || (ThisPcieTopology == NULL) || (UriReturned == NULL)) {
    return EFI_INVALID_PARAMETER;
  }

  *UriReturned        = NULL;
  Json                = NULL;
  UriInstance         = NULL;
  NewResourceLocation = NULL;

  ZeroMem (&Response, sizeof (REDFISH_RESPONSE));
  UnicodeSPrint (ResourceId, sizeof (ResourceId), L"%d", PciIndexId);

  Status = ProvisioningPcieProperties (
             Private->JsonStructProtocol,
             PcieDeviceEmptyJson,
             ThisPcieTopology,
             TRUE,
             &Json
             );
  if (EFI_ERROR (Status)) {
    DEBUG ((
      DEBUG_ERROR,
      "%a, provisioning resource for #%d PCIe device failed: %r\n",
      __func__,
      PciIndexId,
      Status
      ));
    return Status;
  }

  //
  // Generate the URI for the new resource
  //
  SizeString  = (StrLen (Private->Uri) + StrLen (L"/") + StrLen (ResourceId) + 1) * sizeof (CHAR16);
  UriInstance = AllocateZeroPool (SizeString);
  if (UriInstance == NULL) {
    DEBUG ((DEBUG_ERROR, "%a, failed to allocate memory for URI\n", __func__));
    Status = EFI_OUT_OF_RESOURCES;
    goto RELEASE_RESOURCE;
  }

  UnicodeSPrint (UriInstance, SizeString, L"%s%s%s", Private->Uri, L"/", ResourceId);
  Status = RedfishHttpPostResource (Private->RedfishService, UriInstance, Json, &Response);
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a, post PCIe resource failed: %r\n", __func__, Status));
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

    UriLen       = StrLen (NewResourceLocation) + 1;
    *UriReturned = AllocateZeroPool (UriLen);
    if (*UriReturned != NULL) {
      UnicodeStrToAsciiStrS (NewResourceLocation, *UriReturned, UriLen);
    }
  }

RELEASE_RESOURCE:
  RedfishHttpFreeResponse (&Response);

  if (NewResourceLocation != NULL) {
    FreePool (NewResourceLocation);
  }

  if (Json != NULL) {
    FreePool (Json);
  }

  if (UriInstance != NULL) {
    FreePool (UriInstance);
  }

  return Status;
}

/**
  Provisioning redfish PCIeDevice resources.

  @param[in]   Private             Pointer to REDFISH_RESOURCE_COMMON_PRIVATE.

  @retval EFI_SUCCESS              PCIeDevice resources are provisioned successfully.
  @retval Others                   Some error happened.

**/
EFI_STATUS
ProvisioningPcieDeviceResources (
  IN  REDFISH_RESOURCE_COMMON_PRIVATE  *Private
  )
{
  UINTN                                 NumberOfPcie;
  UINTN                                 Index;
  EFI_STATUS                            Status;
  EDKII_REDFISH_SYSTEM_TOPOLOGY_DEVICE  *PciTopology;
  CHAR8                                 **PcieResourceUri;
  CHAR8                                 **UriReturned;
  REDFISH_FEATURE_ARRAY_TYPE_URI        *ReturnUris;

  if (Private == NULL) {
    return EFI_INVALID_PARAMETER;
  }

  NumberOfPcie = 0;
  Status       = RedfishSystemTopologyGetCount (REDFISH_SYSTEM_TOPOLOGY_TYPE_PCIE, &NumberOfPcie);
  DEBUG ((DEBUG_INFO, "NumberOfPcie = %d\n", NumberOfPcie));
  if (EFI_ERROR (Status)) {
    if ((Status == EFI_NOT_FOUND) || (NumberOfPcie == 0)) {
      DEBUG ((REDFISH_DEBUG_TRACE, "%a, No PCIe device to provision.\n", __func__));
      return EFI_SUCCESS;
    } else {
      DEBUG ((DEBUG_ERROR, "%a, Failed to get Pcie device count.\n", __func__));
      return Status;
    }
  }

  PcieResourceUri = AllocateZeroPool (sizeof (CHAR8 *) * NumberOfPcie);
  if (PcieResourceUri == NULL) {
    DEBUG ((DEBUG_ERROR, "%a: Not enough memory for PCIeResourceUri\n", __func__));
    return EFI_OUT_OF_RESOURCES;
  }

  PciTopology = NULL;
  UriReturned = PcieResourceUri;

  for (Index = 0; Index < NumberOfPcie; Index++) {
    Status = RedfishGetSystemTopologyGetEntry (REDFISH_SYSTEM_TOPOLOGY_TYPE_PCIE, &PciTopology);
    if (EFI_ERROR (Status) || (PciTopology == NULL)) {
      DEBUG ((DEBUG_INFO, "%a: topology iterator exhausted at index %d\n", __func__, Index));
      break;
    }

    Status = ProvisioningPcieDeviceResource (
               Private,
               &PciTopology->DeviceType.PcieDevice,
               Index,
               UriReturned
               );
    if (EFI_ERROR (Status)) {
      DEBUG ((DEBUG_ERROR, "%a: Failed to provision PCIe device #%d\n", __func__, Index));
    } else {
      UriReturned++;
    }
  }

  //
  // Set up the return exchange information.
  //
  ReturnUris = AllocateZeroPool (sizeof (REDFISH_FEATURE_ARRAY_TYPE_URI));
  if (ReturnUris == NULL) {
    DEBUG ((DEBUG_ERROR, "%a, Not enough memory for REDFISH_FEATURE_ARRAY_TYPE_URI\n", __func__));
    FreePool (PcieResourceUri);
    return EFI_OUT_OF_RESOURCES;
  }

  ReturnUris->Count = (UINTN)(UriReturned - PcieResourceUri);
  ReturnUris->List  = PcieResourceUri;

  Private->InformationExchange->ReturnedInformation.Type                            = InformationTypeArrayMemberUri;
  Private->InformationExchange->ReturnedInformation.ResourceTypeReturnedInformation = ReturnUris;
  return EFI_SUCCESS;
}

/**
  Provisioning existing redfish PCIeDevice resource.

  @param[in]   Private             Pointer to REDFISH_RESOURCE_COMMON_PRIVATE.

  @retval EFI_UNSUPPORTED          This function is not supported.

**/
EFI_STATUS
ProvisioningPcieDeviceExistResource (
  IN  REDFISH_RESOURCE_COMMON_PRIVATE  *Private
  )
{
  return EFI_UNSUPPORTED;
}

/**
  Provisioning redfish resource by given URI.

  @param[in]   This                Pointer to REDFISH_RESOURCE_COMMON_PRIVATE instance.
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

  return (ResourceExist ? ProvisioningPcieDeviceExistResource (Private) : ProvisioningPcieDeviceResources (Private));
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
  return EFI_SUCCESS;
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
  return EFI_SUCCESS;
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
  return EFI_SUCCESS;
}
