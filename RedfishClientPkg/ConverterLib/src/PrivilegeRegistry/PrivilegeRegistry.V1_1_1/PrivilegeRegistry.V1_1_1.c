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

#include"Redfish_PrivilegeRegistry_v1_1_1_CS.h"
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

static RedfishCS_status GenOperationPrivilege_ArrayCs(RedfishPrivilegeRegistry_V1_1_1_PrivilegeRegistry_CS *Cs, json_t *JsonObj, char *Key, RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_Array_CS **Dst);
static RedfishCS_status GenOperationMapCs(RedfishPrivilegeRegistry_V1_1_1_PrivilegeRegistry_CS *Cs, json_t *JsonObj, char *Key, RedfishPrivilegeRegistry_V1_1_1_OperationMap_CS **Dst);
static RedfishCS_status GenRedfishCS_char_ArrayCs(RedfishPrivilegeRegistry_V1_1_1_PrivilegeRegistry_CS *Cs, json_t *JsonObj, char *Key, RedfishCS_char_Array **Dst);
static RedfishCS_status GenTarget_PrivilegeMap_ArrayCs(RedfishPrivilegeRegistry_V1_1_1_PrivilegeRegistry_CS *Cs, json_t *JsonObj, char *Key, RedfishPrivilegeRegistry_V1_1_1_Target_PrivilegeMap_Array_CS **Dst);
//
//Generate C structure for Oem
//
static RedfishCS_status GenOemActionsCs(RedfishPrivilegeRegistry_V1_1_1_PrivilegeRegistry_CS *Cs, json_t *JsonObj, char *Key, RedfishPrivilegeRegistry_V1_1_1_OemActions_CS **Dst)
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
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishPrivilegeRegistry_V1_1_1_OemActions_CS), (RedfishCS_void **)Dst);
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
static RedfishCS_status GenActionsCs(RedfishPrivilegeRegistry_V1_1_1_PrivilegeRegistry_CS *Cs, json_t *JsonObj, char *Key, RedfishPrivilegeRegistry_V1_1_1_Actions_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishPrivilegeRegistry_V1_1_1_Actions_CS), (RedfishCS_void **)Dst);
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
static RedfishCS_status GenRedfishCS_char_ArrayCs(RedfishPrivilegeRegistry_V1_1_1_PrivilegeRegistry_CS *Cs, json_t *JsonObj, char *Key, RedfishCS_char_Array **Dst)
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
static RedfishCS_status GenOperationPrivilege_Array_ElementCs(RedfishPrivilegeRegistry_V1_1_1_PrivilegeRegistry_CS *Cs, json_t *JsonObj, RedfishCS_uint64 Index,  RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_array_get (JsonObj, (RedfishCS_int)Index);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsZeroMemory(Cs, sizeof(RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // Privilege
  Status = GenRedfishCS_char_ArrayCs (Cs, TempJsonObj, "Privilege", &(*Dst)->Privilege);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  return RedfishCS_status_success;
Error:;
  return Status;
}
//
//Generate C structure for RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_Array_CS
//
static RedfishCS_status GenOperationPrivilege_ArrayCs(RedfishPrivilegeRegistry_V1_1_1_PrivilegeRegistry_CS *Cs, json_t *JsonObj, char *Key, RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_Array_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;
  RedfishCS_uint64 ArraySize;
  RedfishCS_uint64 Index;
  RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_Array_CS *ThisElement;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }

  if (json_is_array(TempJsonObj) != RedfishCS_boolean_true) {
    return RedfishCS_status_invalid_parameter;
  }

  ArraySize = json_array_size (TempJsonObj);
  Status = allocateArrayRecordCsMemory(Cs, sizeof (RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_Array_CS), ArraySize, (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  if (*Dst == NULL) {
    // Empty array
    return RedfishCS_status_success;
  }
  ThisElement = *Dst;
  for (Index = 0; Index < ArraySize; Index ++) {
    Status = GenOperationPrivilege_Array_ElementCs(Cs, TempJsonObj, Index, &ThisElement->ArrayValue);
    if (Status != RedfishCS_status_success){
      goto Error;
    }
    ThisElement = ThisElement->Next;
  }
Error:;
  return Status;
}
//
//Generate C structure for OperationMap
//
static RedfishCS_status GenOperationMapCs(RedfishPrivilegeRegistry_V1_1_1_PrivilegeRegistry_CS *Cs, json_t *JsonObj, char *Key, RedfishPrivilegeRegistry_V1_1_1_OperationMap_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishPrivilegeRegistry_V1_1_1_OperationMap_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // DELETE
  Status = GenOperationPrivilege_ArrayCs (Cs, TempJsonObj, "DELETE", &(*Dst)->DELETE);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // GET
  Status = GenOperationPrivilege_ArrayCs (Cs, TempJsonObj, "GET", &(*Dst)->GET);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // HEAD
  Status = GenOperationPrivilege_ArrayCs (Cs, TempJsonObj, "HEAD", &(*Dst)->HEAD);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // PATCH
  Status = GenOperationPrivilege_ArrayCs (Cs, TempJsonObj, "PATCH", &(*Dst)->PATCH);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // POST
  Status = GenOperationPrivilege_ArrayCs (Cs, TempJsonObj, "POST", &(*Dst)->POST);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // PUT
  Status = GenOperationPrivilege_ArrayCs (Cs, TempJsonObj, "PUT", &(*Dst)->PUT);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
static RedfishCS_status GenTarget_PrivilegeMap_Array_ElementCs(RedfishPrivilegeRegistry_V1_1_1_PrivilegeRegistry_CS *Cs, json_t *JsonObj, RedfishCS_uint64 Index,  RedfishPrivilegeRegistry_V1_1_1_Target_PrivilegeMap_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_array_get (JsonObj, (RedfishCS_int)Index);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsZeroMemory(Cs, sizeof(RedfishPrivilegeRegistry_V1_1_1_Target_PrivilegeMap_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // OperationMap
  Status = GenOperationMapCs (Cs, TempJsonObj, "OperationMap", &(*Dst)->OperationMap);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Targets
  Status = GenRedfishCS_char_ArrayCs (Cs, TempJsonObj, "Targets", &(*Dst)->Targets);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  return RedfishCS_status_success;
Error:;
  return Status;
}
//
//Generate C structure for RedfishPrivilegeRegistry_V1_1_1_Target_PrivilegeMap_Array_CS
//
static RedfishCS_status GenTarget_PrivilegeMap_ArrayCs(RedfishPrivilegeRegistry_V1_1_1_PrivilegeRegistry_CS *Cs, json_t *JsonObj, char *Key, RedfishPrivilegeRegistry_V1_1_1_Target_PrivilegeMap_Array_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;
  RedfishCS_uint64 ArraySize;
  RedfishCS_uint64 Index;
  RedfishPrivilegeRegistry_V1_1_1_Target_PrivilegeMap_Array_CS *ThisElement;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }

  if (json_is_array(TempJsonObj) != RedfishCS_boolean_true) {
    return RedfishCS_status_invalid_parameter;
  }

  ArraySize = json_array_size (TempJsonObj);
  Status = allocateArrayRecordCsMemory(Cs, sizeof (RedfishPrivilegeRegistry_V1_1_1_Target_PrivilegeMap_Array_CS), ArraySize, (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  if (*Dst == NULL) {
    // Empty array
    return RedfishCS_status_success;
  }
  ThisElement = *Dst;
  for (Index = 0; Index < ArraySize; Index ++) {
    Status = GenTarget_PrivilegeMap_Array_ElementCs(Cs, TempJsonObj, Index, &ThisElement->ArrayValue);
    if (Status != RedfishCS_status_success){
      goto Error;
    }
    ThisElement = ThisElement->Next;
  }
Error:;
  return Status;
}
static RedfishCS_status GenMapping_Array_ElementCs(RedfishPrivilegeRegistry_V1_1_1_PrivilegeRegistry_CS *Cs, json_t *JsonObj, RedfishCS_uint64 Index,  RedfishPrivilegeRegistry_V1_1_1_Mapping_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_array_get (JsonObj, (RedfishCS_int)Index);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsZeroMemory(Cs, sizeof(RedfishPrivilegeRegistry_V1_1_1_Mapping_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // Entity
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "Entity", &(*Dst)->Entity);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // OperationMap
  Status = GenOperationMapCs (Cs, TempJsonObj, "OperationMap", &(*Dst)->OperationMap);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // PropertyOverrides
  Status = GenTarget_PrivilegeMap_ArrayCs (Cs, TempJsonObj, "PropertyOverrides", &(*Dst)->PropertyOverrides);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ResourceURIOverrides
  Status = GenTarget_PrivilegeMap_ArrayCs (Cs, TempJsonObj, "ResourceURIOverrides", &(*Dst)->ResourceURIOverrides);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // SubordinateOverrides
  Status = GenTarget_PrivilegeMap_ArrayCs (Cs, TempJsonObj, "SubordinateOverrides", &(*Dst)->SubordinateOverrides);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  return RedfishCS_status_success;
Error:;
  return Status;
}
//
//Generate C structure for RedfishPrivilegeRegistry_V1_1_1_Mapping_Array_CS
//
static RedfishCS_status GenMapping_ArrayCs(RedfishPrivilegeRegistry_V1_1_1_PrivilegeRegistry_CS *Cs, json_t *JsonObj, char *Key, RedfishPrivilegeRegistry_V1_1_1_Mapping_Array_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;
  RedfishCS_uint64 ArraySize;
  RedfishCS_uint64 Index;
  RedfishPrivilegeRegistry_V1_1_1_Mapping_Array_CS *ThisElement;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }

  if (json_is_array(TempJsonObj) != RedfishCS_boolean_true) {
    return RedfishCS_status_invalid_parameter;
  }

  ArraySize = json_array_size (TempJsonObj);
  Status = allocateArrayRecordCsMemory(Cs, sizeof (RedfishPrivilegeRegistry_V1_1_1_Mapping_Array_CS), ArraySize, (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  if (*Dst == NULL) {
    // Empty array
    return RedfishCS_status_success;
  }
  ThisElement = *Dst;
  for (Index = 0; Index < ArraySize; Index ++) {
    Status = GenMapping_Array_ElementCs(Cs, TempJsonObj, Index, &ThisElement->ArrayValue);
    if (Status != RedfishCS_status_success){
      goto Error;
    }
    ThisElement = ThisElement->Next;
  }
Error:;
  return Status;
}
//
//Generate C structure for Oem
//
static RedfishCS_status GenOemCs(RedfishPrivilegeRegistry_V1_1_1_PrivilegeRegistry_CS *Cs, json_t *JsonObj, char *Key, RedfishResource_Oem_CS **Dst)
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
static RedfishCS_status CS_To_JSON_ActionsOem(json_t *CsJson, char *Key, RedfishPrivilegeRegistry_V1_1_1_OemActions_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // Check if this is RedfishCS_Type_CS_EmptyProp.
  CsEmptyPropLinkToJson(CsJson, Key, &CSPtr->Prop);
  // No JSON property for this structure.
  return RedfishCS_status_success;
}
static RedfishCS_status CS_To_JSON_Actions(json_t *CsJson, char *Key, RedfishPrivilegeRegistry_V1_1_1_Actions_CS *CSPtr)
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
static RedfishCS_status CS_To_JSON_MappingsOperationMapDELETE(json_t *CsJson, char *Key, RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_Array_CS *CSPtr)
{
  json_t *ArrayJson;
  json_t *ArrayMember;
  RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_Array_CS *NextArray;
  RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_CS *NextArrayItem;

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
    // Privilege 
    if (InsertJsonStringArrayObj (ArrayMember, "Privilege", NextArrayItem->Privilege) != RedfishCS_status_success) {goto Error;}

    if (json_array_append_new (ArrayJson, ArrayMember) != 0) {goto Error;}
    NextArray = NextArray->Next;
  } while (NextArray != NULL);
  json_object_set_new (CsJson, Key, ArrayJson);

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_MappingsOperationMapGET(json_t *CsJson, char *Key, RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_Array_CS *CSPtr)
{
  json_t *ArrayJson;
  json_t *ArrayMember;
  RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_Array_CS *NextArray;
  RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_CS *NextArrayItem;

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
    // Privilege 
    if (InsertJsonStringArrayObj (ArrayMember, "Privilege", NextArrayItem->Privilege) != RedfishCS_status_success) {goto Error;}

    if (json_array_append_new (ArrayJson, ArrayMember) != 0) {goto Error;}
    NextArray = NextArray->Next;
  } while (NextArray != NULL);
  json_object_set_new (CsJson, Key, ArrayJson);

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_MappingsOperationMapHEAD(json_t *CsJson, char *Key, RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_Array_CS *CSPtr)
{
  json_t *ArrayJson;
  json_t *ArrayMember;
  RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_Array_CS *NextArray;
  RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_CS *NextArrayItem;

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
    // Privilege 
    if (InsertJsonStringArrayObj (ArrayMember, "Privilege", NextArrayItem->Privilege) != RedfishCS_status_success) {goto Error;}

    if (json_array_append_new (ArrayJson, ArrayMember) != 0) {goto Error;}
    NextArray = NextArray->Next;
  } while (NextArray != NULL);
  json_object_set_new (CsJson, Key, ArrayJson);

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_MappingsOperationMapPATCH(json_t *CsJson, char *Key, RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_Array_CS *CSPtr)
{
  json_t *ArrayJson;
  json_t *ArrayMember;
  RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_Array_CS *NextArray;
  RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_CS *NextArrayItem;

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
    // Privilege 
    if (InsertJsonStringArrayObj (ArrayMember, "Privilege", NextArrayItem->Privilege) != RedfishCS_status_success) {goto Error;}

    if (json_array_append_new (ArrayJson, ArrayMember) != 0) {goto Error;}
    NextArray = NextArray->Next;
  } while (NextArray != NULL);
  json_object_set_new (CsJson, Key, ArrayJson);

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_MappingsOperationMapPOST(json_t *CsJson, char *Key, RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_Array_CS *CSPtr)
{
  json_t *ArrayJson;
  json_t *ArrayMember;
  RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_Array_CS *NextArray;
  RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_CS *NextArrayItem;

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
    // Privilege 
    if (InsertJsonStringArrayObj (ArrayMember, "Privilege", NextArrayItem->Privilege) != RedfishCS_status_success) {goto Error;}

    if (json_array_append_new (ArrayJson, ArrayMember) != 0) {goto Error;}
    NextArray = NextArray->Next;
  } while (NextArray != NULL);
  json_object_set_new (CsJson, Key, ArrayJson);

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_MappingsOperationMapPUT(json_t *CsJson, char *Key, RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_Array_CS *CSPtr)
{
  json_t *ArrayJson;
  json_t *ArrayMember;
  RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_Array_CS *NextArray;
  RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_CS *NextArrayItem;

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
    // Privilege 
    if (InsertJsonStringArrayObj (ArrayMember, "Privilege", NextArrayItem->Privilege) != RedfishCS_status_success) {goto Error;}

    if (json_array_append_new (ArrayJson, ArrayMember) != 0) {goto Error;}
    NextArray = NextArray->Next;
  } while (NextArray != NULL);
  json_object_set_new (CsJson, Key, ArrayJson);

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_MappingsOperationMap(json_t *CsJson, char *Key, RedfishPrivilegeRegistry_V1_1_1_OperationMap_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // DELETE
  if (CS_To_JSON_MappingsOperationMapDELETE(CsJson, "DELETE", CSPtr->DELETE) != RedfishCS_status_success) {goto Error;}

  // GET
  if (CS_To_JSON_MappingsOperationMapGET(CsJson, "GET", CSPtr->GET) != RedfishCS_status_success) {goto Error;}

  // HEAD
  if (CS_To_JSON_MappingsOperationMapHEAD(CsJson, "HEAD", CSPtr->HEAD) != RedfishCS_status_success) {goto Error;}

  // PATCH
  if (CS_To_JSON_MappingsOperationMapPATCH(CsJson, "PATCH", CSPtr->PATCH) != RedfishCS_status_success) {goto Error;}

  // POST
  if (CS_To_JSON_MappingsOperationMapPOST(CsJson, "POST", CSPtr->POST) != RedfishCS_status_success) {goto Error;}

  // PUT
  if (CS_To_JSON_MappingsOperationMapPUT(CsJson, "PUT", CSPtr->PUT) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_MappingsPropertyOverridesOperationMapDELETE(json_t *CsJson, char *Key, RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_Array_CS *CSPtr)
{
  json_t *ArrayJson;
  json_t *ArrayMember;
  RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_Array_CS *NextArray;
  RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_CS *NextArrayItem;

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
    // Privilege 
    if (InsertJsonStringArrayObj (ArrayMember, "Privilege", NextArrayItem->Privilege) != RedfishCS_status_success) {goto Error;}

    if (json_array_append_new (ArrayJson, ArrayMember) != 0) {goto Error;}
    NextArray = NextArray->Next;
  } while (NextArray != NULL);
  json_object_set_new (CsJson, Key, ArrayJson);

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_MappingsPropertyOverridesOperationMapGET(json_t *CsJson, char *Key, RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_Array_CS *CSPtr)
{
  json_t *ArrayJson;
  json_t *ArrayMember;
  RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_Array_CS *NextArray;
  RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_CS *NextArrayItem;

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
    // Privilege 
    if (InsertJsonStringArrayObj (ArrayMember, "Privilege", NextArrayItem->Privilege) != RedfishCS_status_success) {goto Error;}

    if (json_array_append_new (ArrayJson, ArrayMember) != 0) {goto Error;}
    NextArray = NextArray->Next;
  } while (NextArray != NULL);
  json_object_set_new (CsJson, Key, ArrayJson);

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_MappingsPropertyOverridesOperationMapHEAD(json_t *CsJson, char *Key, RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_Array_CS *CSPtr)
{
  json_t *ArrayJson;
  json_t *ArrayMember;
  RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_Array_CS *NextArray;
  RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_CS *NextArrayItem;

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
    // Privilege 
    if (InsertJsonStringArrayObj (ArrayMember, "Privilege", NextArrayItem->Privilege) != RedfishCS_status_success) {goto Error;}

    if (json_array_append_new (ArrayJson, ArrayMember) != 0) {goto Error;}
    NextArray = NextArray->Next;
  } while (NextArray != NULL);
  json_object_set_new (CsJson, Key, ArrayJson);

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_MappingsPropertyOverridesOperationMapPATCH(json_t *CsJson, char *Key, RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_Array_CS *CSPtr)
{
  json_t *ArrayJson;
  json_t *ArrayMember;
  RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_Array_CS *NextArray;
  RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_CS *NextArrayItem;

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
    // Privilege 
    if (InsertJsonStringArrayObj (ArrayMember, "Privilege", NextArrayItem->Privilege) != RedfishCS_status_success) {goto Error;}

    if (json_array_append_new (ArrayJson, ArrayMember) != 0) {goto Error;}
    NextArray = NextArray->Next;
  } while (NextArray != NULL);
  json_object_set_new (CsJson, Key, ArrayJson);

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_MappingsPropertyOverridesOperationMapPOST(json_t *CsJson, char *Key, RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_Array_CS *CSPtr)
{
  json_t *ArrayJson;
  json_t *ArrayMember;
  RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_Array_CS *NextArray;
  RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_CS *NextArrayItem;

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
    // Privilege 
    if (InsertJsonStringArrayObj (ArrayMember, "Privilege", NextArrayItem->Privilege) != RedfishCS_status_success) {goto Error;}

    if (json_array_append_new (ArrayJson, ArrayMember) != 0) {goto Error;}
    NextArray = NextArray->Next;
  } while (NextArray != NULL);
  json_object_set_new (CsJson, Key, ArrayJson);

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_MappingsPropertyOverridesOperationMapPUT(json_t *CsJson, char *Key, RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_Array_CS *CSPtr)
{
  json_t *ArrayJson;
  json_t *ArrayMember;
  RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_Array_CS *NextArray;
  RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_CS *NextArrayItem;

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
    // Privilege 
    if (InsertJsonStringArrayObj (ArrayMember, "Privilege", NextArrayItem->Privilege) != RedfishCS_status_success) {goto Error;}

    if (json_array_append_new (ArrayJson, ArrayMember) != 0) {goto Error;}
    NextArray = NextArray->Next;
  } while (NextArray != NULL);
  json_object_set_new (CsJson, Key, ArrayJson);

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_MappingsPropertyOverridesOperationMap(json_t *CsJson, char *Key, RedfishPrivilegeRegistry_V1_1_1_OperationMap_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // DELETE
  if (CS_To_JSON_MappingsPropertyOverridesOperationMapDELETE(CsJson, "DELETE", CSPtr->DELETE) != RedfishCS_status_success) {goto Error;}

  // GET
  if (CS_To_JSON_MappingsPropertyOverridesOperationMapGET(CsJson, "GET", CSPtr->GET) != RedfishCS_status_success) {goto Error;}

  // HEAD
  if (CS_To_JSON_MappingsPropertyOverridesOperationMapHEAD(CsJson, "HEAD", CSPtr->HEAD) != RedfishCS_status_success) {goto Error;}

  // PATCH
  if (CS_To_JSON_MappingsPropertyOverridesOperationMapPATCH(CsJson, "PATCH", CSPtr->PATCH) != RedfishCS_status_success) {goto Error;}

  // POST
  if (CS_To_JSON_MappingsPropertyOverridesOperationMapPOST(CsJson, "POST", CSPtr->POST) != RedfishCS_status_success) {goto Error;}

  // PUT
  if (CS_To_JSON_MappingsPropertyOverridesOperationMapPUT(CsJson, "PUT", CSPtr->PUT) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_MappingsPropertyOverrides(json_t *CsJson, char *Key, RedfishPrivilegeRegistry_V1_1_1_Target_PrivilegeMap_Array_CS *CSPtr)
{
  json_t *ArrayJson;
  json_t *ArrayMember;
  RedfishPrivilegeRegistry_V1_1_1_Target_PrivilegeMap_Array_CS *NextArray;
  RedfishPrivilegeRegistry_V1_1_1_Target_PrivilegeMap_CS *NextArrayItem;

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
    // OperationMap
    if (CS_To_JSON_MappingsPropertyOverridesOperationMap(ArrayMember, "OperationMap", NextArrayItem->OperationMap) != RedfishCS_status_success) {goto Error;}

    // Targets 
    if (InsertJsonStringArrayObj (ArrayMember, "Targets", NextArrayItem->Targets) != RedfishCS_status_success) {goto Error;}

    if (json_array_append_new (ArrayJson, ArrayMember) != 0) {goto Error;}
    NextArray = NextArray->Next;
  } while (NextArray != NULL);
  json_object_set_new (CsJson, Key, ArrayJson);

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_MappingsResourceURIOverridesOperationMapDELETE(json_t *CsJson, char *Key, RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_Array_CS *CSPtr)
{
  json_t *ArrayJson;
  json_t *ArrayMember;
  RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_Array_CS *NextArray;
  RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_CS *NextArrayItem;

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
    // Privilege 
    if (InsertJsonStringArrayObj (ArrayMember, "Privilege", NextArrayItem->Privilege) != RedfishCS_status_success) {goto Error;}

    if (json_array_append_new (ArrayJson, ArrayMember) != 0) {goto Error;}
    NextArray = NextArray->Next;
  } while (NextArray != NULL);
  json_object_set_new (CsJson, Key, ArrayJson);

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_MappingsResourceURIOverridesOperationMapGET(json_t *CsJson, char *Key, RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_Array_CS *CSPtr)
{
  json_t *ArrayJson;
  json_t *ArrayMember;
  RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_Array_CS *NextArray;
  RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_CS *NextArrayItem;

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
    // Privilege 
    if (InsertJsonStringArrayObj (ArrayMember, "Privilege", NextArrayItem->Privilege) != RedfishCS_status_success) {goto Error;}

    if (json_array_append_new (ArrayJson, ArrayMember) != 0) {goto Error;}
    NextArray = NextArray->Next;
  } while (NextArray != NULL);
  json_object_set_new (CsJson, Key, ArrayJson);

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_MappingsResourceURIOverridesOperationMapHEAD(json_t *CsJson, char *Key, RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_Array_CS *CSPtr)
{
  json_t *ArrayJson;
  json_t *ArrayMember;
  RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_Array_CS *NextArray;
  RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_CS *NextArrayItem;

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
    // Privilege 
    if (InsertJsonStringArrayObj (ArrayMember, "Privilege", NextArrayItem->Privilege) != RedfishCS_status_success) {goto Error;}

    if (json_array_append_new (ArrayJson, ArrayMember) != 0) {goto Error;}
    NextArray = NextArray->Next;
  } while (NextArray != NULL);
  json_object_set_new (CsJson, Key, ArrayJson);

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_MappingsResourceURIOverridesOperationMapPATCH(json_t *CsJson, char *Key, RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_Array_CS *CSPtr)
{
  json_t *ArrayJson;
  json_t *ArrayMember;
  RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_Array_CS *NextArray;
  RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_CS *NextArrayItem;

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
    // Privilege 
    if (InsertJsonStringArrayObj (ArrayMember, "Privilege", NextArrayItem->Privilege) != RedfishCS_status_success) {goto Error;}

    if (json_array_append_new (ArrayJson, ArrayMember) != 0) {goto Error;}
    NextArray = NextArray->Next;
  } while (NextArray != NULL);
  json_object_set_new (CsJson, Key, ArrayJson);

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_MappingsResourceURIOverridesOperationMapPOST(json_t *CsJson, char *Key, RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_Array_CS *CSPtr)
{
  json_t *ArrayJson;
  json_t *ArrayMember;
  RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_Array_CS *NextArray;
  RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_CS *NextArrayItem;

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
    // Privilege 
    if (InsertJsonStringArrayObj (ArrayMember, "Privilege", NextArrayItem->Privilege) != RedfishCS_status_success) {goto Error;}

    if (json_array_append_new (ArrayJson, ArrayMember) != 0) {goto Error;}
    NextArray = NextArray->Next;
  } while (NextArray != NULL);
  json_object_set_new (CsJson, Key, ArrayJson);

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_MappingsResourceURIOverridesOperationMapPUT(json_t *CsJson, char *Key, RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_Array_CS *CSPtr)
{
  json_t *ArrayJson;
  json_t *ArrayMember;
  RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_Array_CS *NextArray;
  RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_CS *NextArrayItem;

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
    // Privilege 
    if (InsertJsonStringArrayObj (ArrayMember, "Privilege", NextArrayItem->Privilege) != RedfishCS_status_success) {goto Error;}

    if (json_array_append_new (ArrayJson, ArrayMember) != 0) {goto Error;}
    NextArray = NextArray->Next;
  } while (NextArray != NULL);
  json_object_set_new (CsJson, Key, ArrayJson);

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_MappingsResourceURIOverridesOperationMap(json_t *CsJson, char *Key, RedfishPrivilegeRegistry_V1_1_1_OperationMap_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // DELETE
  if (CS_To_JSON_MappingsResourceURIOverridesOperationMapDELETE(CsJson, "DELETE", CSPtr->DELETE) != RedfishCS_status_success) {goto Error;}

  // GET
  if (CS_To_JSON_MappingsResourceURIOverridesOperationMapGET(CsJson, "GET", CSPtr->GET) != RedfishCS_status_success) {goto Error;}

  // HEAD
  if (CS_To_JSON_MappingsResourceURIOverridesOperationMapHEAD(CsJson, "HEAD", CSPtr->HEAD) != RedfishCS_status_success) {goto Error;}

  // PATCH
  if (CS_To_JSON_MappingsResourceURIOverridesOperationMapPATCH(CsJson, "PATCH", CSPtr->PATCH) != RedfishCS_status_success) {goto Error;}

  // POST
  if (CS_To_JSON_MappingsResourceURIOverridesOperationMapPOST(CsJson, "POST", CSPtr->POST) != RedfishCS_status_success) {goto Error;}

  // PUT
  if (CS_To_JSON_MappingsResourceURIOverridesOperationMapPUT(CsJson, "PUT", CSPtr->PUT) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_MappingsResourceURIOverrides(json_t *CsJson, char *Key, RedfishPrivilegeRegistry_V1_1_1_Target_PrivilegeMap_Array_CS *CSPtr)
{
  json_t *ArrayJson;
  json_t *ArrayMember;
  RedfishPrivilegeRegistry_V1_1_1_Target_PrivilegeMap_Array_CS *NextArray;
  RedfishPrivilegeRegistry_V1_1_1_Target_PrivilegeMap_CS *NextArrayItem;

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
    // OperationMap
    if (CS_To_JSON_MappingsResourceURIOverridesOperationMap(ArrayMember, "OperationMap", NextArrayItem->OperationMap) != RedfishCS_status_success) {goto Error;}

    // Targets 
    if (InsertJsonStringArrayObj (ArrayMember, "Targets", NextArrayItem->Targets) != RedfishCS_status_success) {goto Error;}

    if (json_array_append_new (ArrayJson, ArrayMember) != 0) {goto Error;}
    NextArray = NextArray->Next;
  } while (NextArray != NULL);
  json_object_set_new (CsJson, Key, ArrayJson);

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_MappingsSubordinateOverridesOperationMapDELETE(json_t *CsJson, char *Key, RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_Array_CS *CSPtr)
{
  json_t *ArrayJson;
  json_t *ArrayMember;
  RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_Array_CS *NextArray;
  RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_CS *NextArrayItem;

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
    // Privilege 
    if (InsertJsonStringArrayObj (ArrayMember, "Privilege", NextArrayItem->Privilege) != RedfishCS_status_success) {goto Error;}

    if (json_array_append_new (ArrayJson, ArrayMember) != 0) {goto Error;}
    NextArray = NextArray->Next;
  } while (NextArray != NULL);
  json_object_set_new (CsJson, Key, ArrayJson);

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_MappingsSubordinateOverridesOperationMapGET(json_t *CsJson, char *Key, RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_Array_CS *CSPtr)
{
  json_t *ArrayJson;
  json_t *ArrayMember;
  RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_Array_CS *NextArray;
  RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_CS *NextArrayItem;

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
    // Privilege 
    if (InsertJsonStringArrayObj (ArrayMember, "Privilege", NextArrayItem->Privilege) != RedfishCS_status_success) {goto Error;}

    if (json_array_append_new (ArrayJson, ArrayMember) != 0) {goto Error;}
    NextArray = NextArray->Next;
  } while (NextArray != NULL);
  json_object_set_new (CsJson, Key, ArrayJson);

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_MappingsSubordinateOverridesOperationMapHEAD(json_t *CsJson, char *Key, RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_Array_CS *CSPtr)
{
  json_t *ArrayJson;
  json_t *ArrayMember;
  RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_Array_CS *NextArray;
  RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_CS *NextArrayItem;

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
    // Privilege 
    if (InsertJsonStringArrayObj (ArrayMember, "Privilege", NextArrayItem->Privilege) != RedfishCS_status_success) {goto Error;}

    if (json_array_append_new (ArrayJson, ArrayMember) != 0) {goto Error;}
    NextArray = NextArray->Next;
  } while (NextArray != NULL);
  json_object_set_new (CsJson, Key, ArrayJson);

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_MappingsSubordinateOverridesOperationMapPATCH(json_t *CsJson, char *Key, RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_Array_CS *CSPtr)
{
  json_t *ArrayJson;
  json_t *ArrayMember;
  RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_Array_CS *NextArray;
  RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_CS *NextArrayItem;

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
    // Privilege 
    if (InsertJsonStringArrayObj (ArrayMember, "Privilege", NextArrayItem->Privilege) != RedfishCS_status_success) {goto Error;}

    if (json_array_append_new (ArrayJson, ArrayMember) != 0) {goto Error;}
    NextArray = NextArray->Next;
  } while (NextArray != NULL);
  json_object_set_new (CsJson, Key, ArrayJson);

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_MappingsSubordinateOverridesOperationMapPOST(json_t *CsJson, char *Key, RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_Array_CS *CSPtr)
{
  json_t *ArrayJson;
  json_t *ArrayMember;
  RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_Array_CS *NextArray;
  RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_CS *NextArrayItem;

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
    // Privilege 
    if (InsertJsonStringArrayObj (ArrayMember, "Privilege", NextArrayItem->Privilege) != RedfishCS_status_success) {goto Error;}

    if (json_array_append_new (ArrayJson, ArrayMember) != 0) {goto Error;}
    NextArray = NextArray->Next;
  } while (NextArray != NULL);
  json_object_set_new (CsJson, Key, ArrayJson);

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_MappingsSubordinateOverridesOperationMapPUT(json_t *CsJson, char *Key, RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_Array_CS *CSPtr)
{
  json_t *ArrayJson;
  json_t *ArrayMember;
  RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_Array_CS *NextArray;
  RedfishPrivilegeRegistry_V1_1_1_OperationPrivilege_CS *NextArrayItem;

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
    // Privilege 
    if (InsertJsonStringArrayObj (ArrayMember, "Privilege", NextArrayItem->Privilege) != RedfishCS_status_success) {goto Error;}

    if (json_array_append_new (ArrayJson, ArrayMember) != 0) {goto Error;}
    NextArray = NextArray->Next;
  } while (NextArray != NULL);
  json_object_set_new (CsJson, Key, ArrayJson);

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_MappingsSubordinateOverridesOperationMap(json_t *CsJson, char *Key, RedfishPrivilegeRegistry_V1_1_1_OperationMap_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // DELETE
  if (CS_To_JSON_MappingsSubordinateOverridesOperationMapDELETE(CsJson, "DELETE", CSPtr->DELETE) != RedfishCS_status_success) {goto Error;}

  // GET
  if (CS_To_JSON_MappingsSubordinateOverridesOperationMapGET(CsJson, "GET", CSPtr->GET) != RedfishCS_status_success) {goto Error;}

  // HEAD
  if (CS_To_JSON_MappingsSubordinateOverridesOperationMapHEAD(CsJson, "HEAD", CSPtr->HEAD) != RedfishCS_status_success) {goto Error;}

  // PATCH
  if (CS_To_JSON_MappingsSubordinateOverridesOperationMapPATCH(CsJson, "PATCH", CSPtr->PATCH) != RedfishCS_status_success) {goto Error;}

  // POST
  if (CS_To_JSON_MappingsSubordinateOverridesOperationMapPOST(CsJson, "POST", CSPtr->POST) != RedfishCS_status_success) {goto Error;}

  // PUT
  if (CS_To_JSON_MappingsSubordinateOverridesOperationMapPUT(CsJson, "PUT", CSPtr->PUT) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_MappingsSubordinateOverrides(json_t *CsJson, char *Key, RedfishPrivilegeRegistry_V1_1_1_Target_PrivilegeMap_Array_CS *CSPtr)
{
  json_t *ArrayJson;
  json_t *ArrayMember;
  RedfishPrivilegeRegistry_V1_1_1_Target_PrivilegeMap_Array_CS *NextArray;
  RedfishPrivilegeRegistry_V1_1_1_Target_PrivilegeMap_CS *NextArrayItem;

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
    // OperationMap
    if (CS_To_JSON_MappingsSubordinateOverridesOperationMap(ArrayMember, "OperationMap", NextArrayItem->OperationMap) != RedfishCS_status_success) {goto Error;}

    // Targets 
    if (InsertJsonStringArrayObj (ArrayMember, "Targets", NextArrayItem->Targets) != RedfishCS_status_success) {goto Error;}

    if (json_array_append_new (ArrayJson, ArrayMember) != 0) {goto Error;}
    NextArray = NextArray->Next;
  } while (NextArray != NULL);
  json_object_set_new (CsJson, Key, ArrayJson);

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_Mappings(json_t *CsJson, char *Key, RedfishPrivilegeRegistry_V1_1_1_Mapping_Array_CS *CSPtr)
{
  json_t *ArrayJson;
  json_t *ArrayMember;
  RedfishPrivilegeRegistry_V1_1_1_Mapping_Array_CS *NextArray;
  RedfishPrivilegeRegistry_V1_1_1_Mapping_CS *NextArrayItem;

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
    // Entity 
    if (InsertJsonStringObj (ArrayMember, "Entity", NextArrayItem->Entity) != RedfishCS_status_success) {goto Error;}

    // OperationMap
    if (CS_To_JSON_MappingsOperationMap(ArrayMember, "OperationMap", NextArrayItem->OperationMap) != RedfishCS_status_success) {goto Error;}

    // PropertyOverrides
    if (CS_To_JSON_MappingsPropertyOverrides(ArrayMember, "PropertyOverrides", NextArrayItem->PropertyOverrides) != RedfishCS_status_success) {goto Error;}

    // ResourceURIOverrides
    if (CS_To_JSON_MappingsResourceURIOverrides(ArrayMember, "ResourceURIOverrides", NextArrayItem->ResourceURIOverrides) != RedfishCS_status_success) {goto Error;}

    // SubordinateOverrides
    if (CS_To_JSON_MappingsSubordinateOverrides(ArrayMember, "SubordinateOverrides", NextArrayItem->SubordinateOverrides) != RedfishCS_status_success) {goto Error;}

    if (json_array_append_new (ArrayJson, ArrayMember) != 0) {goto Error;}
    NextArray = NextArray->Next;
  } while (NextArray != NULL);
  json_object_set_new (CsJson, Key, ArrayJson);

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

//
// C structure to JSON for PrivilegeRegistry.V1_1_1.PrivilegeRegistry
//
RedfishCS_status CS_To_PrivilegeRegistry_V1_1_1_JSON(RedfishPrivilegeRegistry_V1_1_1_PrivilegeRegistry_CS *CSPtr, RedfishCS_char **JsonText)
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

  // Description 
  if (InsertJsonStringObj (CsJson, "Description", CSPtr->Description) != RedfishCS_status_success) {goto Error;}

  // Id 
  if (InsertJsonStringObj (CsJson, "Id", CSPtr->Id) != RedfishCS_status_success) {goto Error;}

  // Mappings
  if (CS_To_JSON_Mappings(CsJson, "Mappings", CSPtr->Mappings) != RedfishCS_status_success) {goto Error;}

  // Name 
  if (InsertJsonStringObj (CsJson, "Name", CSPtr->Name) != RedfishCS_status_success) {goto Error;}

  // OEMPrivilegesUsed 
  if (InsertJsonStringArrayObj (CsJson, "OEMPrivilegesUsed", CSPtr->OEMPrivilegesUsed) != RedfishCS_status_success) {goto Error;}

  // Oem
  if (CS_To_JSON_Oem(CsJson, "Oem", CSPtr->Oem) != RedfishCS_status_success) {goto Error;}

  // PrivilegesUsed 
  if (InsertJsonStringArrayObj (CsJson, "PrivilegesUsed", CSPtr->PrivilegesUsed) != RedfishCS_status_success) {goto Error;}

  // @odata.context 
  if (InsertJsonStringObj (CsJson, "@odata.context", CSPtr->odata_context) != RedfishCS_status_success) {goto Error;}

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
// Destory C Structure for PrivilegeRegistry.V1_1_1.PrivilegeRegistry
//
RedfishCS_status DestroyPrivilegeRegistry_V1_1_1_CS(RedfishPrivilegeRegistry_V1_1_1_PrivilegeRegistry_CS *CSPtr)
{
  RedfishCS_status Status;

  Status = DestoryCsMemory ((RedfishCS_void *)CSPtr);
  return Status;
}

//
// Destory JSON text for PrivilegeRegistry.V1_1_1.PrivilegeRegistry
//
RedfishCS_status DestroyPrivilegeRegistry_V1_1_1_Json(RedfishCS_char *JsonText)
{
  free ((RedfishCS_void *)JsonText);
  return RedfishCS_status_success;
}

//
//Generate C structure for PrivilegeRegistry.V1_1_1.PrivilegeRegistry
//
RedfishCS_status
Json_PrivilegeRegistry_V1_1_1_To_CS(RedfishCS_char *JsonRawText, RedfishPrivilegeRegistry_V1_1_1_PrivilegeRegistry_CS **ReturnedCs)
{
  RedfishCS_status  Status;
  json_t *JsonObj;
  RedfishPrivilegeRegistry_V1_1_1_PrivilegeRegistry_CS *Cs;

  Status = CreateJsonPayloadAndCs (JsonRawText, "PrivilegeRegistry", "v1_1_1", "PrivilegeRegistry", &JsonObj, (RedfishCS_void **)&Cs, sizeof (RedfishPrivilegeRegistry_V1_1_1_PrivilegeRegistry_CS));
  if (Status != RedfishCS_status_success) {
    goto Error;
  }

  // @odata.context
  Status = GetRedfishPropertyStr (Cs, JsonObj, "@odata.context", &Cs->odata_context);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // @odata.id
  Status = GetRedfishPropertyStr (Cs, JsonObj, "@odata.id", &Cs->odata_id);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // @odata.type
  Status = GetRedfishPropertyStr (Cs, JsonObj, "@odata.type", &Cs->odata_type);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){goto Error;}}

  // Actions
  Status = GenActionsCs (Cs, JsonObj, "Actions", &Cs->Actions);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Description
  Status = GetRedfishPropertyStr (Cs, JsonObj, "Description", &Cs->Description);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Id
  Status = GetRedfishPropertyStr (Cs, JsonObj, "Id", &Cs->Id);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){goto Error;}}

  // Mappings
  Status = GenMapping_ArrayCs (Cs, JsonObj, "Mappings", &Cs->Mappings);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Name
  Status = GetRedfishPropertyStr (Cs, JsonObj, "Name", &Cs->Name);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){goto Error;}}

  // OEMPrivilegesUsed
  Status = GenRedfishCS_char_ArrayCs (Cs, JsonObj, "OEMPrivilegesUsed", &Cs->OEMPrivilegesUsed);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Oem
  Status = GenOemCs (Cs, JsonObj, "Oem", &Cs->Oem);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // PrivilegesUsed
  Status = GenRedfishCS_char_ArrayCs (Cs, JsonObj, "PrivilegesUsed", &Cs->PrivilegesUsed);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  json_decref(JsonObj);
  *ReturnedCs = Cs;
  return RedfishCS_status_success;
Error:;
  json_decref(JsonObj);
  DestroyPrivilegeRegistry_V1_1_1_CS (Cs);
  return Status;
}
