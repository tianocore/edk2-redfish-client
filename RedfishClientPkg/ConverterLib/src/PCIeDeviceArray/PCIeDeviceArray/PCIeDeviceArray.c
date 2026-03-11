/** @file
  Redfish Schema JSON to C converter.

  Copyright (C) 2026 Advanced Micro Devices, Inc. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include"Redfish_PCIeDeviceArray_CS.h"
#include <stdlib.h>
#include <string.h>
#include <jansson.h>

RedfishCS_status InsertJsonLinkArrayObj (json_t *JsonObj, char *Key, RedfishCS_Link *LinkArray);
RedfishCS_status CreateCsUriOrJsonByNodeArray (RedfishCS_void *Cs, json_t *JsonObj, RedfishCS_char *NodeName, RedfishCS_char *ParentUri, RedfishCS_Link *LinkHead);
RedfishCS_status CreateJsonPayloadAndCs (char *JsonRawText, char *ResourceType, char *ResourceVersion, char *TypeName, json_t **JsonObjReturned, void **Cs, int size);

RedfishCS_status CS_To_PCIeDeviceArray_JSON(RedfishPCIeDeviceArray_PCIeDeviceArray_CS *CSPtr, RedfishCS_char **JsonText)
{
  json_t  *CsJson;

  if (CSPtr == NULL || JsonText == NULL || CSPtr->Header.ResourceType != RedfishCS_Type_CS) {
    return RedfishCS_status_invalid_parameter;
  }
  CsJson = json_object();
  if (CsJson == NULL) {
    return RedfishCS_status_unsupported;
  }
  if (InsertJsonLinkArrayObj(CsJson, CSPtr->Header.KeyName, &CSPtr->PCIeDevices.Header.LinkEntry) != RedfishCS_status_success) {goto Error;}

  *JsonText = (RedfishCS_char *)json_dumps(CsJson, JSON_INDENT(2 * 1) | JSON_ENSURE_ASCII);
  json_decref(CsJson);
  return RedfishCS_status_success;
Error:;
  json_decref(CsJson);
  return RedfishCS_status_unsupported;
}

//
// Destory C Structure for PCIeDeviceArray.PCIeDeviceArray
//
RedfishCS_status DestroyPCIeDeviceArray_CS(RedfishPCIeDeviceArray_PCIeDeviceArray_CS *CSPtr)
{
  RedfishCS_status Status;

  Status = DestoryCsMemory ((RedfishCS_void *)CSPtr);
  return Status;
}

//
// Destory JSON text for PCIeDeviceArray.PCIeDeviceArray
//
RedfishCS_status DestroyPCIeDeviceArray_Json(RedfishCS_char *JsonText)
{
  free ((RedfishCS_void *)JsonText);
  return RedfishCS_status_success;
}

//
//Generate C structure for PCIeDeviceArray.NOVERSIONED.PCIeDeviceArray
//
RedfishCS_status
Json_PCIeDeviceArray_To_CS(RedfishCS_char *JsonRawText, RedfishPCIeDeviceArray_PCIeDeviceArray_CS **ReturnedCs)
{
  RedfishCS_status  Status;
  json_t *JsonObj;
  RedfishPCIeDeviceArray_PCIeDeviceArray_CS *Cs;

  Status = CreateJsonPayloadAndCs (JsonRawText, "", "", "", &JsonObj, (RedfishCS_void **)&Cs, sizeof (RedfishPCIeDeviceArray_PCIeDeviceArray_CS));
  if (Status != RedfishCS_status_success) {
    goto Error;
  }

  // Array Members
  InitializeLinkHead (&Cs->PCIeDevices.Header.LinkEntry);
  Status = CreateCsUriOrJsonByNodeArray (Cs, JsonObj, "PCIeDevices", Cs->Header.ThisUri, &Cs->PCIeDevices.Header.LinkEntry);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){goto Error;}}
  *ReturnedCs = Cs;
  return RedfishCS_status_success;
Error:
  return Status;
}
