//
// Auto-generated file by Redfish Schema C Structure Generator.
// https://github.com/DMTF/Redfish-Schema-C-Struct-Generator.
//
//  (C) Copyright 2019-2021 Hewlett Packard Enterprise Development LP<BR>
//
// Copyright Notice:
// Copyright 2019-2021 Distributed Management Task Force, Inc. All rights reserved.
// License: BSD 3-Clause License. For full text see link: https://github.com/DMTF/Redfish-JSON-C-Struct-Converter/blob/master/LICENSE.md
//

#include"Redfish_NetworkDeviceFunction_v1_2_2_CS.h"
#include <stdlib.h>
#include <string.h>
#include <jansson.h>

RedfishCS_bool SupportedRedfishResource (RedfishCS_char *Odata_Type, RedfishCS_char *NameSpace, RedfishCS_char *Version, RedfishCS_char *DataType);
RedfishCS_status CreateCsUriByNode (RedfishCS_void *Cs, json_t *JsonOj, RedfishCS_char *NodeName, RedfishCS_char *ParentUri, RedfishCS_Type_Uri_Data **CsTypeUriData);
RedfishCS_status CreateCsJsonByNode (RedfishCS_void *Cs, json_t *JsonOj, RedfishCS_char *NodeName, RedfishCS_char *ParentUri, RedfishCS_Type_JSON_Data **CsTypeJsonData);
RedfishCS_status CreateCsUriOrJsonByNode (RedfishCS_void *Cs, json_t *JsonObj, RedfishCS_char *NodeName, RedfishCS_char *ParentUri, RedfishCS_Link *LinkHead);
RedfishCS_status CreateCsUriOrJsonByNodeArray (RedfishCS_void *Cs, json_t *JsonObj, RedfishCS_char *NodeName, RedfishCS_char *ParentUri, RedfishCS_Link *LinkHead);
RedfishCS_status CreateJsonPayloadAndCs (char *JsonRawText, char *ResourceType, char *ResourceVersion, char *TypeName, json_t **JsonObjReturned, void **Cs, int size);
RedfishCS_status GetRedfishPropertyStr (RedfishCS_void *Cs, json_t *JsonObj, char *Key, RedfishCS_char **DstBuffer);
RedfishCS_status GetRedfishPropertyBoolean (RedfishCS_void *Cs, json_t *JsonObj, char *Key, RedfishCS_bool **DstBuffer);
RedfishCS_status GetRedfishPropertyVague (RedfishCS_void *Cs, json_t *JsonObj, char *Key, RedfishCS_Vague **DstBuffer);
RedfishCS_status DestoryCsMemory (RedfishCS_void *rootCs);
RedfishCS_status GetRedfishPropertyInt64 (RedfishCS_void *Cs, json_t *JsonObj, char *Key, RedfishCS_int64 **Dst);
RedfishCS_status InsertJsonStringObj (json_t *JsonObj, char *Key, char *StringValue);
RedfishCS_status InsertJsonLinkObj (json_t *JsonObj, char *Key, RedfishCS_Link *Link);
RedfishCS_status InsertJsonInt64Obj (json_t *ParentJsonObj, char *Key, RedfishCS_int64 *Int64Value);
RedfishCS_status InsertJsonBoolObj (json_t *ParentJsonObj, char *Key, RedfishCS_bool *BoolValue);
RedfishCS_status InsertJsonStringArrayObj (json_t *JsonObj, char *Key, RedfishCS_char_Array *StringValueArray);
RedfishCS_status InsertJsonLinkArrayObj (json_t *JsonObj, char *Key, RedfishCS_Link *LinkArray);
RedfishCS_status InsertJsonInt64ArrayObj (json_t *ParentJsonObj, char *Key, RedfishCS_int64_Array *Int64ValueArray);
RedfishCS_status InsertJsonBoolArrayObj (json_t *ParentJsonObj, char *Key, RedfishCS_bool_Array *BoolValueArray);
RedfishCS_status InsertJsonVagueObj (json_t *ParentJsonObj, char *Key, RedfishCS_Vague *VagueValue);
RedfishCS_bool CheckEmptyPropJsonObject(json_t *JsonObj, RedfishCS_uint32 *NumOfProperty);
RedfishCS_status CreateEmptyPropCsJson(RedfishCS_void *Cs, json_t *JsonOj, RedfishCS_char *NodeName, RedfishCS_char *ParentUri, RedfishCS_Type_EmptyProp_CS_Data **CsTypeEmptyPropCS, RedfishCS_uint32 NunmOfProperties);
RedfishCS_status CsEmptyPropLinkToJson(json_t *CsJson, char *Key, RedfishCS_Link *Link);

static RedfishCS_status GenRedfishCS_char_ArrayCs(RedfishNetworkDeviceFunction_V1_2_2_NetworkDeviceFunction_CS *Cs, json_t *JsonObj, char *Key, RedfishCS_char_Array **Dst);
static RedfishCS_status GenOemCs(RedfishNetworkDeviceFunction_V1_2_2_NetworkDeviceFunction_CS *Cs, json_t *JsonObj, char *Key, RedfishResource_Oem_CS **Dst);
//
//Generate C structure for Oem
//
static RedfishCS_status GenOemActionsCs(RedfishNetworkDeviceFunction_V1_2_2_NetworkDeviceFunction_CS *Cs, json_t *JsonObj, char *Key, RedfishNetworkDeviceFunction_V1_2_2_OemActions_CS **Dst)
{
  RedfishCS_status Status;
  RedfishCS_Type_JSON_Data *CsTypeJson;
  RedfishCS_Type_EmptyProp_CS_Data *CsTypeEmptyPropCS;
  RedfishCS_uint32 NunmOfEmptyPropProperties;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishNetworkDeviceFunction_V1_2_2_OemActions_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  InitializeLinkHead (&(*Dst)->Prop);

  //
  // Try to create C structure if the property is
  // declared as empty property in schema. The supported property type
  // is string, integer, real, number and boolean.
  //
  if (CheckEmptyPropJsonObject(TempJsonObj, &NunmOfEmptyPropProperties)) {
    Status = CreateEmptyPropCsJson(Cs, JsonObj, Key, Cs->Header.ThisUri, &CsTypeEmptyPropCS, NunmOfEmptyPropProperties);
    if (Status != RedfishCS_status_success) {
      goto Error;
    }
    InsertTailLink(&(*Dst)->Prop, &CsTypeEmptyPropCS->Header.LinkEntry);
  } else {
    Status = CreateCsJsonByNode (Cs, JsonObj, Key, Cs->Header.ThisUri, &CsTypeJson);
    if (Status != RedfishCS_status_success) {
      goto Error;
    }
    InsertTailLink(&(*Dst)->Prop, &CsTypeJson->Header.LinkEntry);
  }
Error:;
  return Status;
}
//
//Generate C structure for Actions
//
static RedfishCS_status GenActionsCs(RedfishNetworkDeviceFunction_V1_2_2_NetworkDeviceFunction_CS *Cs, json_t *JsonObj, char *Key, RedfishNetworkDeviceFunction_V1_2_2_Actions_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishNetworkDeviceFunction_V1_2_2_Actions_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // Oem
  Status = GenOemActionsCs (Cs, TempJsonObj, "Oem", &(*Dst)->Oem);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
//
//Generate C structure for Ethernet
//
static RedfishCS_status GenEthernetCs(RedfishNetworkDeviceFunction_V1_2_2_NetworkDeviceFunction_CS *Cs, json_t *JsonObj, char *Key, RedfishNetworkDeviceFunction_V1_2_2_Ethernet_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishNetworkDeviceFunction_V1_2_2_Ethernet_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // MACAddress
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "MACAddress", &(*Dst)->MACAddress);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // MTUSize
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "MTUSize", &(*Dst)->MTUSize);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // PermanentMACAddress
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "PermanentMACAddress", &(*Dst)->PermanentMACAddress);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
static RedfishCS_status GenBootTargets_Array_ElementCs(RedfishNetworkDeviceFunction_V1_2_2_NetworkDeviceFunction_CS *Cs, json_t *JsonObj, RedfishCS_uint64 Index,  RedfishNetworkDeviceFunction_V1_2_2_BootTargets_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_array_get (JsonObj, (RedfishCS_int)Index);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsZeroMemory(Cs, sizeof(RedfishNetworkDeviceFunction_V1_2_2_BootTargets_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // BootPriority
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "BootPriority", &(*Dst)->BootPriority);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // LUNID
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "LUNID", &(*Dst)->LUNID);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // WWPN
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "WWPN", &(*Dst)->WWPN);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  return RedfishCS_status_success;
Error:;
  return Status;
}
//
//Generate C structure for RedfishNetworkDeviceFunction_V1_2_2_BootTargets_Array_CS
//
static RedfishCS_status GenBootTargets_ArrayCs(RedfishNetworkDeviceFunction_V1_2_2_NetworkDeviceFunction_CS *Cs, json_t *JsonObj, char *Key, RedfishNetworkDeviceFunction_V1_2_2_BootTargets_Array_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;
  RedfishCS_uint64 ArraySize;
  RedfishCS_uint64 Index;
  RedfishNetworkDeviceFunction_V1_2_2_BootTargets_Array_CS *ThisElement;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }

  if (json_is_array(TempJsonObj) != RedfishCS_boolean_true) {
    return RedfishCS_status_invalid_parameter;
  }

  ArraySize = json_array_size (TempJsonObj);
  Status = allocateArrayRecordCsMemory(Cs, sizeof (RedfishNetworkDeviceFunction_V1_2_2_BootTargets_Array_CS), ArraySize, (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  if (*Dst == NULL) {
    // Empty array
    return RedfishCS_status_success;
  }
  ThisElement = *Dst;
  for (Index = 0; Index < ArraySize; Index ++) {
    Status = GenBootTargets_Array_ElementCs(Cs, TempJsonObj, Index, &ThisElement->ArrayValue);
    if (Status != RedfishCS_status_success){
      goto Error;
    }
    ThisElement = ThisElement->Next;
  }
Error:;
  return Status;
}
//
//Generate C structure for FibreChannel
//
static RedfishCS_status GenFibreChannelCs(RedfishNetworkDeviceFunction_V1_2_2_NetworkDeviceFunction_CS *Cs, json_t *JsonObj, char *Key, RedfishNetworkDeviceFunction_V1_2_2_FibreChannel_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishNetworkDeviceFunction_V1_2_2_FibreChannel_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // AllowFIPVLANDiscovery
  Status = GetRedfishPropertyBoolean (Cs, TempJsonObj, "AllowFIPVLANDiscovery", &(*Dst)->AllowFIPVLANDiscovery);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // BootTargets
  Status = GenBootTargets_ArrayCs (Cs, TempJsonObj, "BootTargets", &(*Dst)->BootTargets);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // FCoEActiveVLANId
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "FCoEActiveVLANId", &(*Dst)->FCoEActiveVLANId);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // FCoELocalVLANId
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "FCoELocalVLANId", &(*Dst)->FCoELocalVLANId);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // PermanentWWNN
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "PermanentWWNN", &(*Dst)->PermanentWWNN);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // PermanentWWPN
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "PermanentWWPN", &(*Dst)->PermanentWWPN);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // WWNN
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "WWNN", &(*Dst)->WWNN);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // WWNSource
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "WWNSource", &(*Dst)->WWNSource);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // WWPN
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "WWPN", &(*Dst)->WWPN);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
//
//Generate C structure for Links
//
static RedfishCS_status GenLinksCs(RedfishNetworkDeviceFunction_V1_2_2_NetworkDeviceFunction_CS *Cs, json_t *JsonObj, char *Key, RedfishNetworkDeviceFunction_V1_2_2_Links_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishNetworkDeviceFunction_V1_2_2_Links_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // Endpoints
  InitializeLinkHead (&(*Dst)->Endpoints);
  Status = CreateCsUriOrJsonByNodeArray (Cs, TempJsonObj, "Endpoints", Cs->Header.ThisUri, &(*Dst)->Endpoints);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Endpoints@odata.count
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "Endpoints@odata.count", &(*Dst)->Endpointsodata_count);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // PCIeFunction
  InitializeLinkHead (&(*Dst)->PCIeFunction);
  Status = CreateCsUriOrJsonByNode (Cs, TempJsonObj, "PCIeFunction", Cs->Header.ThisUri, &(*Dst)->PCIeFunction);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
//
//Generate C structure for Redfish_char_Array.
//
static RedfishCS_status GenRedfishCS_char_Array_Element (void *Cs, json_t *JsonArrayObj, RedfishCS_uint64 ArraySize, RedfishCS_char_Array *DstBuffer)
{
  json_t *TempJsonObj;
  RedfishCS_uint64 Index;
  RedfishCS_status Status;
  RedfishCS_char_Array *ThisElement;

  if (DstBuffer == NULL) {
    return RedfishCS_status_invalid_parameter;
  }
  ThisElement = DstBuffer;
  for (Index = 0; Index < ArraySize; Index ++) {
    TempJsonObj = json_array_get (JsonArrayObj, (RedfishCS_int)Index);
    Status = allocateDuplicateStr (Cs, (char *)json_string_value(TempJsonObj), (RedfishCS_void **)&ThisElement->ArrayValue);
    if (Status != RedfishCS_status_success){
      goto Error;
    }
    ThisElement = ThisElement->Next;
  }
Error:;
  return Status;
}
//
//Generate C structure for RedfishCS_char_Array
//
static RedfishCS_status GenRedfishCS_char_ArrayCs(RedfishNetworkDeviceFunction_V1_2_2_NetworkDeviceFunction_CS *Cs, json_t *JsonObj, char *Key, RedfishCS_char_Array **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;
  RedfishCS_uint64 ArraySize;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }

  if (json_is_array(TempJsonObj) != RedfishCS_boolean_true) {
    return RedfishCS_status_invalid_parameter;
  }

  ArraySize = json_array_size (TempJsonObj);
  Status = allocateArrayRecordCsMemory(Cs, sizeof (RedfishCS_char_Array), ArraySize, (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  if (*Dst == NULL) {
    // Empty array
    return RedfishCS_status_success;
  }
  Status = GenRedfishCS_char_Array_Element (Cs, TempJsonObj, ArraySize, *Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
Error:;
  return Status;
}
//
//Generate C structure for Oem
//
static RedfishCS_status GenOemCs(RedfishNetworkDeviceFunction_V1_2_2_NetworkDeviceFunction_CS *Cs, json_t *JsonObj, char *Key, RedfishResource_Oem_CS **Dst)
{
  RedfishCS_status Status;
  RedfishCS_Type_JSON_Data *CsTypeJson;
  RedfishCS_Type_EmptyProp_CS_Data *CsTypeEmptyPropCS;
  RedfishCS_uint32 NunmOfEmptyPropProperties;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishResource_Oem_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  InitializeLinkHead (&(*Dst)->Prop);

  //
  // Try to create C structure if the property is
  // declared as empty property in schema. The supported property type
  // is string, integer, real, number and boolean.
  //
  if (CheckEmptyPropJsonObject(TempJsonObj, &NunmOfEmptyPropProperties)) {
    Status = CreateEmptyPropCsJson(Cs, JsonObj, Key, Cs->Header.ThisUri, &CsTypeEmptyPropCS, NunmOfEmptyPropProperties);
    if (Status != RedfishCS_status_success) {
      goto Error;
    }
    InsertTailLink(&(*Dst)->Prop, &CsTypeEmptyPropCS->Header.LinkEntry);
  } else {
    Status = CreateCsJsonByNode (Cs, JsonObj, Key, Cs->Header.ThisUri, &CsTypeJson);
    if (Status != RedfishCS_status_success) {
      goto Error;
    }
    InsertTailLink(&(*Dst)->Prop, &CsTypeJson->Header.LinkEntry);
  }
Error:;
  return Status;
}
//
//Generate C structure for OriginOfCondition
//
static RedfishCS_status GenidRefCs(RedfishNetworkDeviceFunction_V1_2_2_NetworkDeviceFunction_CS *Cs, json_t *JsonObj, char *Key, Redfishodatav4_idRef_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(Redfishodatav4_idRef_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // @odata.id
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "@odata.id", &(*Dst)->odata_id);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
static RedfishCS_status GenCondition_Array_ElementCs(RedfishNetworkDeviceFunction_V1_2_2_NetworkDeviceFunction_CS *Cs, json_t *JsonObj, RedfishCS_uint64 Index,  RedfishResource_Condition_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_array_get (JsonObj, (RedfishCS_int)Index);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsZeroMemory(Cs, sizeof(RedfishResource_Condition_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // LogEntry
  InitializeLinkHead (&(*Dst)->LogEntry);
  Status = CreateCsUriOrJsonByNode (Cs, TempJsonObj, "LogEntry", Cs->Header.ThisUri, &(*Dst)->LogEntry);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Message
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "Message", &(*Dst)->Message);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // MessageArgs
  Status = GenRedfishCS_char_ArrayCs (Cs, TempJsonObj, "MessageArgs", &(*Dst)->MessageArgs);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // MessageId
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "MessageId", &(*Dst)->MessageId);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // OriginOfCondition
  Status = GenidRefCs (Cs, TempJsonObj, "OriginOfCondition", &(*Dst)->OriginOfCondition);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Severity
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "Severity", &(*Dst)->Severity);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Timestamp
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "Timestamp", &(*Dst)->Timestamp);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  return RedfishCS_status_success;
Error:;
  return Status;
}
//
//Generate C structure for RedfishResource_Condition_Array_CS
//
static RedfishCS_status GenCondition_ArrayCs(RedfishNetworkDeviceFunction_V1_2_2_NetworkDeviceFunction_CS *Cs, json_t *JsonObj, char *Key, RedfishResource_Condition_Array_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;
  RedfishCS_uint64 ArraySize;
  RedfishCS_uint64 Index;
  RedfishResource_Condition_Array_CS *ThisElement;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }

  if (json_is_array(TempJsonObj) != RedfishCS_boolean_true) {
    return RedfishCS_status_invalid_parameter;
  }

  ArraySize = json_array_size (TempJsonObj);
  Status = allocateArrayRecordCsMemory(Cs, sizeof (RedfishResource_Condition_Array_CS), ArraySize, (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  if (*Dst == NULL) {
    // Empty array
    return RedfishCS_status_success;
  }
  ThisElement = *Dst;
  for (Index = 0; Index < ArraySize; Index ++) {
    Status = GenCondition_Array_ElementCs(Cs, TempJsonObj, Index, &ThisElement->ArrayValue);
    if (Status != RedfishCS_status_success){
      goto Error;
    }
    ThisElement = ThisElement->Next;
  }
Error:;
  return Status;
}
//
//Generate C structure for Status
//
static RedfishCS_status GenStatusCs(RedfishNetworkDeviceFunction_V1_2_2_NetworkDeviceFunction_CS *Cs, json_t *JsonObj, char *Key, RedfishResource_Status_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishResource_Status_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // Conditions
  Status = GenCondition_ArrayCs (Cs, TempJsonObj, "Conditions", &(*Dst)->Conditions);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Health
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "Health", &(*Dst)->Health);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // HealthRollup
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "HealthRollup", &(*Dst)->HealthRollup);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Oem
  Status = GenOemCs (Cs, TempJsonObj, "Oem", &(*Dst)->Oem);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // State
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "State", &(*Dst)->State);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
//
//Generate C structure for iSCSIBoot
//
static RedfishCS_status GeniSCSIBootCs(RedfishNetworkDeviceFunction_V1_2_2_NetworkDeviceFunction_CS *Cs, json_t *JsonObj, char *Key, RedfishNetworkDeviceFunction_V1_2_2_iSCSIBoot_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishNetworkDeviceFunction_V1_2_2_iSCSIBoot_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // AuthenticationMethod
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "AuthenticationMethod", &(*Dst)->AuthenticationMethod);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // CHAPSecret
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "CHAPSecret", &(*Dst)->CHAPSecret);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // CHAPUsername
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "CHAPUsername", &(*Dst)->CHAPUsername);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // IPAddressType
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "IPAddressType", &(*Dst)->IPAddressType);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // IPMaskDNSViaDHCP
  Status = GetRedfishPropertyBoolean (Cs, TempJsonObj, "IPMaskDNSViaDHCP", &(*Dst)->IPMaskDNSViaDHCP);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // InitiatorDefaultGateway
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "InitiatorDefaultGateway", &(*Dst)->InitiatorDefaultGateway);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // InitiatorIPAddress
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "InitiatorIPAddress", &(*Dst)->InitiatorIPAddress);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // InitiatorName
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "InitiatorName", &(*Dst)->InitiatorName);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // InitiatorNetmask
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "InitiatorNetmask", &(*Dst)->InitiatorNetmask);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // MutualCHAPSecret
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "MutualCHAPSecret", &(*Dst)->MutualCHAPSecret);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // MutualCHAPUsername
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "MutualCHAPUsername", &(*Dst)->MutualCHAPUsername);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // PrimaryDNS
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "PrimaryDNS", &(*Dst)->PrimaryDNS);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // PrimaryLUN
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "PrimaryLUN", &(*Dst)->PrimaryLUN);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // PrimaryTargetIPAddress
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "PrimaryTargetIPAddress", &(*Dst)->PrimaryTargetIPAddress);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // PrimaryTargetName
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "PrimaryTargetName", &(*Dst)->PrimaryTargetName);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // PrimaryTargetTCPPort
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "PrimaryTargetTCPPort", &(*Dst)->PrimaryTargetTCPPort);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // PrimaryVLANEnable
  Status = GetRedfishPropertyBoolean (Cs, TempJsonObj, "PrimaryVLANEnable", &(*Dst)->PrimaryVLANEnable);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // PrimaryVLANId
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "PrimaryVLANId", &(*Dst)->PrimaryVLANId);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // RouterAdvertisementEnabled
  Status = GetRedfishPropertyBoolean (Cs, TempJsonObj, "RouterAdvertisementEnabled", &(*Dst)->RouterAdvertisementEnabled);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // SecondaryDNS
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "SecondaryDNS", &(*Dst)->SecondaryDNS);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // SecondaryLUN
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "SecondaryLUN", &(*Dst)->SecondaryLUN);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // SecondaryTargetIPAddress
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "SecondaryTargetIPAddress", &(*Dst)->SecondaryTargetIPAddress);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // SecondaryTargetName
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "SecondaryTargetName", &(*Dst)->SecondaryTargetName);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // SecondaryTargetTCPPort
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "SecondaryTargetTCPPort", &(*Dst)->SecondaryTargetTCPPort);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // SecondaryVLANEnable
  Status = GetRedfishPropertyBoolean (Cs, TempJsonObj, "SecondaryVLANEnable", &(*Dst)->SecondaryVLANEnable);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // SecondaryVLANId
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "SecondaryVLANId", &(*Dst)->SecondaryVLANId);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // TargetInfoViaDHCP
  Status = GetRedfishPropertyBoolean (Cs, TempJsonObj, "TargetInfoViaDHCP", &(*Dst)->TargetInfoViaDHCP);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
static RedfishCS_status CS_To_JSON_ActionsOem(json_t *CsJson, char *Key, RedfishNetworkDeviceFunction_V1_2_2_OemActions_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // Check if this is RedfishCS_Type_CS_EmptyProp.
  CsEmptyPropLinkToJson(CsJson, Key, &CSPtr->Prop);
  // No JSON property for this structure.
  return RedfishCS_status_success;
}
static RedfishCS_status CS_To_JSON_Actions(json_t *CsJson, char *Key, RedfishNetworkDeviceFunction_V1_2_2_Actions_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // Oem
  if (CS_To_JSON_ActionsOem(CsJson, "Oem", CSPtr->Oem) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_Ethernet(json_t *CsJson, char *Key, RedfishNetworkDeviceFunction_V1_2_2_Ethernet_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // MACAddress 
  if (InsertJsonStringObj (CsJson, "MACAddress", CSPtr->MACAddress) != RedfishCS_status_success) {goto Error;}

  // MTUSize 
  if (InsertJsonInt64Obj (CsJson, "MTUSize", CSPtr->MTUSize) != RedfishCS_status_success) {goto Error;}

  // PermanentMACAddress 
  if (InsertJsonStringObj (CsJson, "PermanentMACAddress", CSPtr->PermanentMACAddress) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_FibreChannelBootTargets(json_t *CsJson, char *Key, RedfishNetworkDeviceFunction_V1_2_2_BootTargets_Array_CS *CSPtr)
{
  json_t *ArrayJson;
  json_t *ArrayMember;
  RedfishNetworkDeviceFunction_V1_2_2_BootTargets_Array_CS *NextArray;
  RedfishNetworkDeviceFunction_V1_2_2_BootTargets_CS *NextArrayItem;

  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  ArrayJson = json_array();
  if (ArrayJson == NULL) {
    return RedfishCS_status_unsupported;
  }
  NextArray = CSPtr;
  do {
    ArrayMember = json_object();
    if (ArrayMember == NULL) {
      return RedfishCS_status_unsupported;
    }

    NextArrayItem = NextArray->ArrayValue;
    // BootPriority 
    if (InsertJsonInt64Obj (ArrayMember, "BootPriority", NextArrayItem->BootPriority) != RedfishCS_status_success) {goto Error;}

    // LUNID 
    if (InsertJsonStringObj (ArrayMember, "LUNID", NextArrayItem->LUNID) != RedfishCS_status_success) {goto Error;}

    // WWPN 
    if (InsertJsonStringObj (ArrayMember, "WWPN", NextArrayItem->WWPN) != RedfishCS_status_success) {goto Error;}

    if (json_array_append_new (ArrayJson, ArrayMember) != 0) {goto Error;}
    NextArray = NextArray->Next;
  } while (NextArray != NULL);
  json_object_set_new (CsJson, Key, ArrayJson);

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_FibreChannel(json_t *CsJson, char *Key, RedfishNetworkDeviceFunction_V1_2_2_FibreChannel_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // AllowFIPVLANDiscovery 
  if (InsertJsonBoolObj (CsJson, "AllowFIPVLANDiscovery", CSPtr->AllowFIPVLANDiscovery) != RedfishCS_status_success) {goto Error;}

  // BootTargets
  if (CS_To_JSON_FibreChannelBootTargets(CsJson, "BootTargets", CSPtr->BootTargets) != RedfishCS_status_success) {goto Error;}

  // FCoEActiveVLANId 
  if (InsertJsonInt64Obj (CsJson, "FCoEActiveVLANId", CSPtr->FCoEActiveVLANId) != RedfishCS_status_success) {goto Error;}

  // FCoELocalVLANId 
  if (InsertJsonInt64Obj (CsJson, "FCoELocalVLANId", CSPtr->FCoELocalVLANId) != RedfishCS_status_success) {goto Error;}

  // PermanentWWNN 
  if (InsertJsonStringObj (CsJson, "PermanentWWNN", CSPtr->PermanentWWNN) != RedfishCS_status_success) {goto Error;}

  // PermanentWWPN 
  if (InsertJsonStringObj (CsJson, "PermanentWWPN", CSPtr->PermanentWWPN) != RedfishCS_status_success) {goto Error;}

  // WWNN 
  if (InsertJsonStringObj (CsJson, "WWNN", CSPtr->WWNN) != RedfishCS_status_success) {goto Error;}

  // WWNSource 
  if (InsertJsonStringObj (CsJson, "WWNSource", CSPtr->WWNSource) != RedfishCS_status_success) {goto Error;}

  // WWPN 
  if (InsertJsonStringObj (CsJson, "WWPN", CSPtr->WWPN) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_Links(json_t *CsJson, char *Key, RedfishNetworkDeviceFunction_V1_2_2_Links_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // Endpoints 
  if (InsertJsonLinkArrayObj (CsJson, "Endpoints", &CSPtr->Endpoints) != RedfishCS_status_success) {goto Error;}

  // Endpoints@odata.count 
  if (InsertJsonInt64Obj (CsJson, "Endpoints@odata.count", CSPtr->Endpointsodata_count) != RedfishCS_status_success) {goto Error;}

  // PCIeFunction 
  if (InsertJsonLinkObj (CsJson, "PCIeFunction", &CSPtr->PCIeFunction) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_Oem(json_t *CsJson, char *Key, RedfishResource_Oem_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // Check if this is RedfishCS_Type_CS_EmptyProp.
  CsEmptyPropLinkToJson(CsJson, Key, &CSPtr->Prop);
  // No JSON property for this structure.
  return RedfishCS_status_success;
}
static RedfishCS_status CS_To_JSON_StatusConditionsOriginOfCondition(json_t *CsJson, char *Key, Redfishodatav4_idRef_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // @odata.id 
  if (InsertJsonStringObj (CsJson, "@odata.id", CSPtr->odata_id) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_StatusConditions(json_t *CsJson, char *Key, RedfishResource_Condition_Array_CS *CSPtr)
{
  json_t *ArrayJson;
  json_t *ArrayMember;
  RedfishResource_Condition_Array_CS *NextArray;
  RedfishResource_Condition_CS *NextArrayItem;

  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  ArrayJson = json_array();
  if (ArrayJson == NULL) {
    return RedfishCS_status_unsupported;
  }
  NextArray = CSPtr;
  do {
    ArrayMember = json_object();
    if (ArrayMember == NULL) {
      return RedfishCS_status_unsupported;
    }

    NextArrayItem = NextArray->ArrayValue;
    // LogEntry 
    if (InsertJsonLinkObj (ArrayMember, "LogEntry", &NextArrayItem->LogEntry) != RedfishCS_status_success) {goto Error;}

    // Message 
    if (InsertJsonStringObj (ArrayMember, "Message", NextArrayItem->Message) != RedfishCS_status_success) {goto Error;}

    // MessageArgs 
    if (InsertJsonStringArrayObj (ArrayMember, "MessageArgs", NextArrayItem->MessageArgs) != RedfishCS_status_success) {goto Error;}

    // MessageId 
    if (InsertJsonStringObj (ArrayMember, "MessageId", NextArrayItem->MessageId) != RedfishCS_status_success) {goto Error;}

    // OriginOfCondition
    if (CS_To_JSON_StatusConditionsOriginOfCondition(ArrayMember, "OriginOfCondition", NextArrayItem->OriginOfCondition) != RedfishCS_status_success) {goto Error;}

    // Severity 
    if (InsertJsonStringObj (ArrayMember, "Severity", NextArrayItem->Severity) != RedfishCS_status_success) {goto Error;}

    // Timestamp 
    if (InsertJsonStringObj (ArrayMember, "Timestamp", NextArrayItem->Timestamp) != RedfishCS_status_success) {goto Error;}

    if (json_array_append_new (ArrayJson, ArrayMember) != 0) {goto Error;}
    NextArray = NextArray->Next;
  } while (NextArray != NULL);
  json_object_set_new (CsJson, Key, ArrayJson);

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_StatusOem(json_t *CsJson, char *Key, RedfishResource_Oem_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // Check if this is RedfishCS_Type_CS_EmptyProp.
  CsEmptyPropLinkToJson(CsJson, Key, &CSPtr->Prop);
  // No JSON property for this structure.
  return RedfishCS_status_success;
}
static RedfishCS_status CS_To_JSON_Status(json_t *CsJson, char *Key, RedfishResource_Status_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // Conditions
  if (CS_To_JSON_StatusConditions(CsJson, "Conditions", CSPtr->Conditions) != RedfishCS_status_success) {goto Error;}

  // Health 
  if (InsertJsonStringObj (CsJson, "Health", CSPtr->Health) != RedfishCS_status_success) {goto Error;}

  // HealthRollup 
  if (InsertJsonStringObj (CsJson, "HealthRollup", CSPtr->HealthRollup) != RedfishCS_status_success) {goto Error;}

  // Oem
  if (CS_To_JSON_StatusOem(CsJson, "Oem", CSPtr->Oem) != RedfishCS_status_success) {goto Error;}

  // State 
  if (InsertJsonStringObj (CsJson, "State", CSPtr->State) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_iSCSIBoot(json_t *CsJson, char *Key, RedfishNetworkDeviceFunction_V1_2_2_iSCSIBoot_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // AuthenticationMethod 
  if (InsertJsonStringObj (CsJson, "AuthenticationMethod", CSPtr->AuthenticationMethod) != RedfishCS_status_success) {goto Error;}

  // CHAPSecret 
  if (InsertJsonStringObj (CsJson, "CHAPSecret", CSPtr->CHAPSecret) != RedfishCS_status_success) {goto Error;}

  // CHAPUsername 
  if (InsertJsonStringObj (CsJson, "CHAPUsername", CSPtr->CHAPUsername) != RedfishCS_status_success) {goto Error;}

  // IPAddressType 
  if (InsertJsonStringObj (CsJson, "IPAddressType", CSPtr->IPAddressType) != RedfishCS_status_success) {goto Error;}

  // IPMaskDNSViaDHCP 
  if (InsertJsonBoolObj (CsJson, "IPMaskDNSViaDHCP", CSPtr->IPMaskDNSViaDHCP) != RedfishCS_status_success) {goto Error;}

  // InitiatorDefaultGateway 
  if (InsertJsonStringObj (CsJson, "InitiatorDefaultGateway", CSPtr->InitiatorDefaultGateway) != RedfishCS_status_success) {goto Error;}

  // InitiatorIPAddress 
  if (InsertJsonStringObj (CsJson, "InitiatorIPAddress", CSPtr->InitiatorIPAddress) != RedfishCS_status_success) {goto Error;}

  // InitiatorName 
  if (InsertJsonStringObj (CsJson, "InitiatorName", CSPtr->InitiatorName) != RedfishCS_status_success) {goto Error;}

  // InitiatorNetmask 
  if (InsertJsonStringObj (CsJson, "InitiatorNetmask", CSPtr->InitiatorNetmask) != RedfishCS_status_success) {goto Error;}

  // MutualCHAPSecret 
  if (InsertJsonStringObj (CsJson, "MutualCHAPSecret", CSPtr->MutualCHAPSecret) != RedfishCS_status_success) {goto Error;}

  // MutualCHAPUsername 
  if (InsertJsonStringObj (CsJson, "MutualCHAPUsername", CSPtr->MutualCHAPUsername) != RedfishCS_status_success) {goto Error;}

  // PrimaryDNS 
  if (InsertJsonStringObj (CsJson, "PrimaryDNS", CSPtr->PrimaryDNS) != RedfishCS_status_success) {goto Error;}

  // PrimaryLUN 
  if (InsertJsonInt64Obj (CsJson, "PrimaryLUN", CSPtr->PrimaryLUN) != RedfishCS_status_success) {goto Error;}

  // PrimaryTargetIPAddress 
  if (InsertJsonStringObj (CsJson, "PrimaryTargetIPAddress", CSPtr->PrimaryTargetIPAddress) != RedfishCS_status_success) {goto Error;}

  // PrimaryTargetName 
  if (InsertJsonStringObj (CsJson, "PrimaryTargetName", CSPtr->PrimaryTargetName) != RedfishCS_status_success) {goto Error;}

  // PrimaryTargetTCPPort 
  if (InsertJsonInt64Obj (CsJson, "PrimaryTargetTCPPort", CSPtr->PrimaryTargetTCPPort) != RedfishCS_status_success) {goto Error;}

  // PrimaryVLANEnable 
  if (InsertJsonBoolObj (CsJson, "PrimaryVLANEnable", CSPtr->PrimaryVLANEnable) != RedfishCS_status_success) {goto Error;}

  // PrimaryVLANId 
  if (InsertJsonInt64Obj (CsJson, "PrimaryVLANId", CSPtr->PrimaryVLANId) != RedfishCS_status_success) {goto Error;}

  // RouterAdvertisementEnabled 
  if (InsertJsonBoolObj (CsJson, "RouterAdvertisementEnabled", CSPtr->RouterAdvertisementEnabled) != RedfishCS_status_success) {goto Error;}

  // SecondaryDNS 
  if (InsertJsonStringObj (CsJson, "SecondaryDNS", CSPtr->SecondaryDNS) != RedfishCS_status_success) {goto Error;}

  // SecondaryLUN 
  if (InsertJsonInt64Obj (CsJson, "SecondaryLUN", CSPtr->SecondaryLUN) != RedfishCS_status_success) {goto Error;}

  // SecondaryTargetIPAddress 
  if (InsertJsonStringObj (CsJson, "SecondaryTargetIPAddress", CSPtr->SecondaryTargetIPAddress) != RedfishCS_status_success) {goto Error;}

  // SecondaryTargetName 
  if (InsertJsonStringObj (CsJson, "SecondaryTargetName", CSPtr->SecondaryTargetName) != RedfishCS_status_success) {goto Error;}

  // SecondaryTargetTCPPort 
  if (InsertJsonInt64Obj (CsJson, "SecondaryTargetTCPPort", CSPtr->SecondaryTargetTCPPort) != RedfishCS_status_success) {goto Error;}

  // SecondaryVLANEnable 
  if (InsertJsonBoolObj (CsJson, "SecondaryVLANEnable", CSPtr->SecondaryVLANEnable) != RedfishCS_status_success) {goto Error;}

  // SecondaryVLANId 
  if (InsertJsonInt64Obj (CsJson, "SecondaryVLANId", CSPtr->SecondaryVLANId) != RedfishCS_status_success) {goto Error;}

  // TargetInfoViaDHCP 
  if (InsertJsonBoolObj (CsJson, "TargetInfoViaDHCP", CSPtr->TargetInfoViaDHCP) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}

//
// C structure to JSON for NetworkDeviceFunction.V1_2_2.NetworkDeviceFunction
//
RedfishCS_status CS_To_NetworkDeviceFunction_V1_2_2_JSON(RedfishNetworkDeviceFunction_V1_2_2_NetworkDeviceFunction_CS *CSPtr, RedfishCS_char **JsonText)
{
  json_t  *CsJson;

  if (CSPtr == NULL || JsonText == NULL || CSPtr->Header.ResourceType != RedfishCS_Type_CS) {
    return RedfishCS_status_invalid_parameter;
  }
  CsJson = json_object();
  if (CsJson == NULL) {
    return RedfishCS_status_unsupported;
  }
  // Actions
  if (CS_To_JSON_Actions(CsJson, "Actions", CSPtr->Actions) != RedfishCS_status_success) {goto Error;}

  // AssignablePhysicalPorts 
  if (InsertJsonLinkArrayObj (CsJson, "AssignablePhysicalPorts", &CSPtr->AssignablePhysicalPorts) != RedfishCS_status_success) {goto Error;}

  // AssignablePhysicalPorts@odata.count 
  if (InsertJsonInt64Obj (CsJson, "AssignablePhysicalPorts@odata.count", CSPtr->AssignablePhysicalPortsodata_count) != RedfishCS_status_success) {goto Error;}

  // BootMode 
  if (InsertJsonStringObj (CsJson, "BootMode", CSPtr->BootMode) != RedfishCS_status_success) {goto Error;}

  // Description 
  if (InsertJsonStringObj (CsJson, "Description", CSPtr->Description) != RedfishCS_status_success) {goto Error;}

  // DeviceEnabled 
  if (InsertJsonBoolObj (CsJson, "DeviceEnabled", CSPtr->DeviceEnabled) != RedfishCS_status_success) {goto Error;}

  // Ethernet
  if (CS_To_JSON_Ethernet(CsJson, "Ethernet", CSPtr->Ethernet) != RedfishCS_status_success) {goto Error;}

  // FibreChannel
  if (CS_To_JSON_FibreChannel(CsJson, "FibreChannel", CSPtr->FibreChannel) != RedfishCS_status_success) {goto Error;}

  // Id 
  if (InsertJsonStringObj (CsJson, "Id", CSPtr->Id) != RedfishCS_status_success) {goto Error;}

  // Links
  if (CS_To_JSON_Links(CsJson, "Links", CSPtr->Links) != RedfishCS_status_success) {goto Error;}

  // MaxVirtualFunctions 
  if (InsertJsonInt64Obj (CsJson, "MaxVirtualFunctions", CSPtr->MaxVirtualFunctions) != RedfishCS_status_success) {goto Error;}

  // Name 
  if (InsertJsonStringObj (CsJson, "Name", CSPtr->Name) != RedfishCS_status_success) {goto Error;}

  // NetDevFuncCapabilities 
  if (InsertJsonStringArrayObj (CsJson, "NetDevFuncCapabilities", CSPtr->NetDevFuncCapabilities) != RedfishCS_status_success) {goto Error;}

  // NetDevFuncType 
  if (InsertJsonStringObj (CsJson, "NetDevFuncType", CSPtr->NetDevFuncType) != RedfishCS_status_success) {goto Error;}

  // Oem
  if (CS_To_JSON_Oem(CsJson, "Oem", CSPtr->Oem) != RedfishCS_status_success) {goto Error;}

  // PhysicalPortAssignment 
  if (InsertJsonLinkObj (CsJson, "PhysicalPortAssignment", &CSPtr->PhysicalPortAssignment) != RedfishCS_status_success) {goto Error;}

  // Status
  if (CS_To_JSON_Status(CsJson, "Status", CSPtr->Status) != RedfishCS_status_success) {goto Error;}

  // VirtualFunctionsEnabled 
  if (InsertJsonBoolObj (CsJson, "VirtualFunctionsEnabled", CSPtr->VirtualFunctionsEnabled) != RedfishCS_status_success) {goto Error;}

  // iSCSIBoot
  if (CS_To_JSON_iSCSIBoot(CsJson, "iSCSIBoot", CSPtr->iSCSIBoot) != RedfishCS_status_success) {goto Error;}

  // @odata.context 
  if (InsertJsonStringObj (CsJson, "@odata.context", CSPtr->odata_context) != RedfishCS_status_success) {goto Error;}

  // @odata.etag 
  if (InsertJsonStringObj (CsJson, "@odata.etag", CSPtr->odata_etag) != RedfishCS_status_success) {goto Error;}

  // @odata.id 
  if (InsertJsonStringObj (CsJson, "@odata.id", CSPtr->odata_id) != RedfishCS_status_success) {goto Error;}

  // @odata.type 
  if (InsertJsonStringObj (CsJson, "@odata.type", CSPtr->odata_type) != RedfishCS_status_success) {goto Error;}

  *JsonText = (RedfishCS_char *)json_dumps(CsJson, JSON_INDENT(2 * 1) | JSON_ENSURE_ASCII);
  json_decref(CsJson);
  return RedfishCS_status_success;
Error:;
  json_decref(CsJson);
  return RedfishCS_status_unsupported;
}

//
// Destory C Structure for NetworkDeviceFunction.V1_2_2.NetworkDeviceFunction
//
RedfishCS_status DestroyNetworkDeviceFunction_V1_2_2_CS(RedfishNetworkDeviceFunction_V1_2_2_NetworkDeviceFunction_CS *CSPtr)
{
  RedfishCS_status Status;

  Status = DestoryCsMemory ((RedfishCS_void *)CSPtr);
  return Status;
}

//
// Destory JSON text for NetworkDeviceFunction.V1_2_2.NetworkDeviceFunction
//
RedfishCS_status DestroyNetworkDeviceFunction_V1_2_2_Json(RedfishCS_char *JsonText)
{
  free ((RedfishCS_void *)JsonText);
  return RedfishCS_status_success;
}

//
//Generate C structure for NetworkDeviceFunction.V1_2_2.NetworkDeviceFunction
//
RedfishCS_status
Json_NetworkDeviceFunction_V1_2_2_To_CS(RedfishCS_char *JsonRawText, RedfishNetworkDeviceFunction_V1_2_2_NetworkDeviceFunction_CS **ReturnedCs)
{
  RedfishCS_status  Status;
  json_t *JsonObj;
  RedfishNetworkDeviceFunction_V1_2_2_NetworkDeviceFunction_CS *Cs;

  Status = CreateJsonPayloadAndCs (JsonRawText, "NetworkDeviceFunction", "v1_2_2", "NetworkDeviceFunction", &JsonObj, (RedfishCS_void **)&Cs, sizeof (RedfishNetworkDeviceFunction_V1_2_2_NetworkDeviceFunction_CS));
  if (Status != RedfishCS_status_success) {
    goto Error;
  }

  // @odata.context
  Status = GetRedfishPropertyStr (Cs, JsonObj, "@odata.context", &Cs->odata_context);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // @odata.etag
  Status = GetRedfishPropertyStr (Cs, JsonObj, "@odata.etag", &Cs->odata_etag);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // @odata.id
  Status = GetRedfishPropertyStr (Cs, JsonObj, "@odata.id", &Cs->odata_id);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){goto Error;}}

  // @odata.type
  Status = GetRedfishPropertyStr (Cs, JsonObj, "@odata.type", &Cs->odata_type);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){goto Error;}}

  // Actions
  Status = GenActionsCs (Cs, JsonObj, "Actions", &Cs->Actions);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // AssignablePhysicalPorts
  InitializeLinkHead (&Cs->AssignablePhysicalPorts);
  Status = CreateCsUriOrJsonByNodeArray (Cs, JsonObj, "AssignablePhysicalPorts", Cs->Header.ThisUri, &Cs->AssignablePhysicalPorts);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // AssignablePhysicalPorts@odata.count
  Status = GetRedfishPropertyInt64 (Cs, JsonObj, "AssignablePhysicalPorts@odata.count", &Cs->AssignablePhysicalPortsodata_count);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // BootMode
  Status = GetRedfishPropertyStr (Cs, JsonObj, "BootMode", &Cs->BootMode);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Description
  Status = GetRedfishPropertyStr (Cs, JsonObj, "Description", &Cs->Description);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // DeviceEnabled
  Status = GetRedfishPropertyBoolean (Cs, JsonObj, "DeviceEnabled", &Cs->DeviceEnabled);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Ethernet
  Status = GenEthernetCs (Cs, JsonObj, "Ethernet", &Cs->Ethernet);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // FibreChannel
  Status = GenFibreChannelCs (Cs, JsonObj, "FibreChannel", &Cs->FibreChannel);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Id
  Status = GetRedfishPropertyStr (Cs, JsonObj, "Id", &Cs->Id);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){goto Error;}}

  // Links
  Status = GenLinksCs (Cs, JsonObj, "Links", &Cs->Links);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // MaxVirtualFunctions
  Status = GetRedfishPropertyInt64 (Cs, JsonObj, "MaxVirtualFunctions", &Cs->MaxVirtualFunctions);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Name
  Status = GetRedfishPropertyStr (Cs, JsonObj, "Name", &Cs->Name);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){goto Error;}}

  // NetDevFuncCapabilities
  Status = GenRedfishCS_char_ArrayCs (Cs, JsonObj, "NetDevFuncCapabilities", &Cs->NetDevFuncCapabilities);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // NetDevFuncType
  Status = GetRedfishPropertyStr (Cs, JsonObj, "NetDevFuncType", &Cs->NetDevFuncType);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Oem
  Status = GenOemCs (Cs, JsonObj, "Oem", &Cs->Oem);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // PhysicalPortAssignment
  InitializeLinkHead (&Cs->PhysicalPortAssignment);
  Status = CreateCsUriOrJsonByNode (Cs, JsonObj, "PhysicalPortAssignment", Cs->Header.ThisUri, &Cs->PhysicalPortAssignment);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Status
  Status = GenStatusCs (Cs, JsonObj, "Status", &Cs->Status);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // VirtualFunctionsEnabled
  Status = GetRedfishPropertyBoolean (Cs, JsonObj, "VirtualFunctionsEnabled", &Cs->VirtualFunctionsEnabled);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // iSCSIBoot
  Status = GeniSCSIBootCs (Cs, JsonObj, "iSCSIBoot", &Cs->iSCSIBoot);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  json_decref(JsonObj);
  *ReturnedCs = Cs;
  return RedfishCS_status_success;
Error:;
  json_decref(JsonObj);
  DestroyNetworkDeviceFunction_V1_2_2_CS (Cs);
  return Status;
}
