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

#include"Redfish_Memory_v1_9_0_CS.h"
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

static RedfishCS_status GenRedfishCS_int64_ArrayCs(RedfishMemory_V1_9_0_Memory_CS *Cs, json_t *JsonObj, char *Key, RedfishCS_int64_Array **Dst);
static RedfishCS_status GenRedfishCS_char_ArrayCs(RedfishMemory_V1_9_0_Memory_CS *Cs, json_t *JsonObj, char *Key, RedfishCS_char_Array **Dst);
static RedfishCS_status GenOemCs(RedfishMemory_V1_9_0_Memory_CS *Cs, json_t *JsonObj, char *Key, RedfishResource_Oem_CS **Dst);
//
//Generate C structure for #Memory.DisablePassphrase
//
static RedfishCS_status GenDisablePassphraseCs(RedfishMemory_V1_9_0_Memory_CS *Cs, json_t *JsonObj, char *Key, RedfishMemory_V1_9_0_DisablePassphrase_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishMemory_V1_9_0_DisablePassphrase_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // target
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "target", &(*Dst)->target);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // title
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "title", &(*Dst)->title);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
//
//Generate C structure for #Memory.OverwriteUnit
//
static RedfishCS_status GenOverwriteUnitCs(RedfishMemory_V1_9_0_Memory_CS *Cs, json_t *JsonObj, char *Key, RedfishMemory_V1_9_0_OverwriteUnit_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishMemory_V1_9_0_OverwriteUnit_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // target
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "target", &(*Dst)->target);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // title
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "title", &(*Dst)->title);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
//
//Generate C structure for #Memory.Reset
//
static RedfishCS_status GenResetCs(RedfishMemory_V1_9_0_Memory_CS *Cs, json_t *JsonObj, char *Key, RedfishMemory_V1_9_0_Reset_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishMemory_V1_9_0_Reset_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // target
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "target", &(*Dst)->target);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // title
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "title", &(*Dst)->title);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
//
//Generate C structure for #Memory.SecureEraseUnit
//
static RedfishCS_status GenSecureEraseUnitCs(RedfishMemory_V1_9_0_Memory_CS *Cs, json_t *JsonObj, char *Key, RedfishMemory_V1_9_0_SecureEraseUnit_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishMemory_V1_9_0_SecureEraseUnit_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // target
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "target", &(*Dst)->target);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // title
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "title", &(*Dst)->title);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
//
//Generate C structure for #Memory.SetPassphrase
//
static RedfishCS_status GenSetPassphraseCs(RedfishMemory_V1_9_0_Memory_CS *Cs, json_t *JsonObj, char *Key, RedfishMemory_V1_9_0_SetPassphrase_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishMemory_V1_9_0_SetPassphrase_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // target
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "target", &(*Dst)->target);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // title
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "title", &(*Dst)->title);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
//
//Generate C structure for #Memory.UnlockUnit
//
static RedfishCS_status GenUnlockUnitCs(RedfishMemory_V1_9_0_Memory_CS *Cs, json_t *JsonObj, char *Key, RedfishMemory_V1_9_0_UnlockUnit_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishMemory_V1_9_0_UnlockUnit_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // target
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "target", &(*Dst)->target);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // title
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "title", &(*Dst)->title);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
//
//Generate C structure for Oem
//
static RedfishCS_status GenOemActionsCs(RedfishMemory_V1_9_0_Memory_CS *Cs, json_t *JsonObj, char *Key, RedfishMemory_V1_9_0_OemActions_CS **Dst)
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
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishMemory_V1_9_0_OemActions_CS), (RedfishCS_void **)Dst);
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
static RedfishCS_status GenActionsCs(RedfishMemory_V1_9_0_Memory_CS *Cs, json_t *JsonObj, char *Key, RedfishMemory_V1_9_0_Actions_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishMemory_V1_9_0_Actions_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // #Memory.DisablePassphrase
  Status = GenDisablePassphraseCs (Cs, TempJsonObj, "#Memory.DisablePassphrase", &(*Dst)->Memory_DisablePassphrase);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // #Memory.OverwriteUnit
  Status = GenOverwriteUnitCs (Cs, TempJsonObj, "#Memory.OverwriteUnit", &(*Dst)->Memory_OverwriteUnit);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // #Memory.Reset
  Status = GenResetCs (Cs, TempJsonObj, "#Memory.Reset", &(*Dst)->Memory_Reset);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // #Memory.SecureEraseUnit
  Status = GenSecureEraseUnitCs (Cs, TempJsonObj, "#Memory.SecureEraseUnit", &(*Dst)->Memory_SecureEraseUnit);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // #Memory.SetPassphrase
  Status = GenSetPassphraseCs (Cs, TempJsonObj, "#Memory.SetPassphrase", &(*Dst)->Memory_SetPassphrase);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // #Memory.UnlockUnit
  Status = GenUnlockUnitCs (Cs, TempJsonObj, "#Memory.UnlockUnit", &(*Dst)->Memory_UnlockUnit);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Oem
  Status = GenOemActionsCs (Cs, TempJsonObj, "Oem", &(*Dst)->Oem);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
//
//Generate C structure for RedfishCS_int64_Array.
//
static RedfishCS_status GenRedfishCS_int64_Array_Element (void *Cs, json_t *JsonArrayObj, RedfishCS_uint64 ArraySize, RedfishCS_int64_Array *DstBuffer)
{
  json_t *TempJsonObj;
  RedfishCS_uint64 Index;
  RedfishCS_status Status;
  RedfishCS_int64_Array *ThisElement;

  if (DstBuffer == NULL) {
    return RedfishCS_status_invalid_parameter;
  }
  ThisElement = DstBuffer;
  for (Index = 0; Index < ArraySize; Index ++) {
    TempJsonObj = json_array_get (JsonArrayObj, (RedfishCS_int)Index);
    if (TempJsonObj == NULL){
      goto Error;
    }
    Status = allocateRecordCsMemory(Cs, sizeof(RedfishCS_uint64), (RedfishCS_void **)&ThisElement->ArrayValue);
    if (Status != RedfishCS_status_success){
      goto Error;
    }
    ThisElement = ThisElement->Next;
  }
Error:;
  return Status;
}
//
//Generate C structure for RedfishCS_int64_Array
//
static RedfishCS_status GenRedfishCS_int64_ArrayCs(RedfishMemory_V1_9_0_Memory_CS *Cs, json_t *JsonObj, char *Key, RedfishCS_int64_Array **Dst)
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
  Status = allocateArrayRecordCsMemory(Cs, sizeof (RedfishCS_int64_Array), ArraySize, (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  if (*Dst == NULL) {
    // Empty array
    return RedfishCS_status_success;
  }
  Status = GenRedfishCS_int64_Array_Element (Cs, TempJsonObj, ArraySize, *Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
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
static RedfishCS_status GenRedfishCS_char_ArrayCs(RedfishMemory_V1_9_0_Memory_CS *Cs, json_t *JsonObj, char *Key, RedfishCS_char_Array **Dst)
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
static RedfishCS_status GenOemCs(RedfishMemory_V1_9_0_Memory_CS *Cs, json_t *JsonObj, char *Key, RedfishResource_Oem_CS **Dst)
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
//Generate C structure for Links
//
static RedfishCS_status GenLinksCs(RedfishMemory_V1_9_0_Memory_CS *Cs, json_t *JsonObj, char *Key, RedfishMemory_V1_9_0_Links_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishMemory_V1_9_0_Links_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // Chassis
  InitializeLinkHead (&(*Dst)->Chassis);
  Status = CreateCsUriOrJsonByNode (Cs, TempJsonObj, "Chassis", Cs->Header.ThisUri, &(*Dst)->Chassis);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Oem
  Status = GenOemCs (Cs, TempJsonObj, "Oem", &(*Dst)->Oem);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
//
//Generate C structure for MemoryLocation
//
static RedfishCS_status GenMemoryLocationCs(RedfishMemory_V1_9_0_Memory_CS *Cs, json_t *JsonObj, char *Key, RedfishMemory_V1_9_0_MemoryLocation_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishMemory_V1_9_0_MemoryLocation_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // Channel
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "Channel", &(*Dst)->Channel);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // MemoryController
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "MemoryController", &(*Dst)->MemoryController);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Slot
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "Slot", &(*Dst)->Slot);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Socket
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "Socket", &(*Dst)->Socket);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
//
//Generate C structure for PowerManagementPolicy
//
static RedfishCS_status GenPowerManagementPolicyCs(RedfishMemory_V1_9_0_Memory_CS *Cs, json_t *JsonObj, char *Key, RedfishMemory_V1_9_0_PowerManagementPolicy_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishMemory_V1_9_0_PowerManagementPolicy_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // AveragePowerBudgetMilliWatts
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "AveragePowerBudgetMilliWatts", &(*Dst)->AveragePowerBudgetMilliWatts);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // MaxTDPMilliWatts
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "MaxTDPMilliWatts", &(*Dst)->MaxTDPMilliWatts);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // PeakPowerBudgetMilliWatts
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "PeakPowerBudgetMilliWatts", &(*Dst)->PeakPowerBudgetMilliWatts);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // PolicyEnabled
  Status = GetRedfishPropertyBoolean (Cs, TempJsonObj, "PolicyEnabled", &(*Dst)->PolicyEnabled);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
static RedfishCS_status GenRegionSet_Array_ElementCs(RedfishMemory_V1_9_0_Memory_CS *Cs, json_t *JsonObj, RedfishCS_uint64 Index,  RedfishMemory_V1_9_0_RegionSet_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_array_get (JsonObj, (RedfishCS_int)Index);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsZeroMemory(Cs, sizeof(RedfishMemory_V1_9_0_RegionSet_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // MemoryClassification
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "MemoryClassification", &(*Dst)->MemoryClassification);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // OffsetMiB
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "OffsetMiB", &(*Dst)->OffsetMiB);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // PassphraseEnabled
  Status = GetRedfishPropertyBoolean (Cs, TempJsonObj, "PassphraseEnabled", &(*Dst)->PassphraseEnabled);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // PassphraseState
  Status = GetRedfishPropertyBoolean (Cs, TempJsonObj, "PassphraseState", &(*Dst)->PassphraseState);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // RegionId
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "RegionId", &(*Dst)->RegionId);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // SizeMiB
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "SizeMiB", &(*Dst)->SizeMiB);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  return RedfishCS_status_success;
Error:;
  return Status;
}
//
//Generate C structure for RedfishMemory_V1_9_0_RegionSet_Array_CS
//
static RedfishCS_status GenRegionSet_ArrayCs(RedfishMemory_V1_9_0_Memory_CS *Cs, json_t *JsonObj, char *Key, RedfishMemory_V1_9_0_RegionSet_Array_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;
  RedfishCS_uint64 ArraySize;
  RedfishCS_uint64 Index;
  RedfishMemory_V1_9_0_RegionSet_Array_CS *ThisElement;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }

  if (json_is_array(TempJsonObj) != RedfishCS_boolean_true) {
    return RedfishCS_status_invalid_parameter;
  }

  ArraySize = json_array_size (TempJsonObj);
  Status = allocateArrayRecordCsMemory(Cs, sizeof (RedfishMemory_V1_9_0_RegionSet_Array_CS), ArraySize, (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  if (*Dst == NULL) {
    // Empty array
    return RedfishCS_status_success;
  }
  ThisElement = *Dst;
  for (Index = 0; Index < ArraySize; Index ++) {
    Status = GenRegionSet_Array_ElementCs(Cs, TempJsonObj, Index, &ThisElement->ArrayValue);
    if (Status != RedfishCS_status_success){
      goto Error;
    }
    ThisElement = ThisElement->Next;
  }
Error:;
  return Status;
}
//
//Generate C structure for SecurityCapabilities
//
static RedfishCS_status GenSecurityCapabilitiesCs(RedfishMemory_V1_9_0_Memory_CS *Cs, json_t *JsonObj, char *Key, RedfishMemory_V1_9_0_SecurityCapabilities_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishMemory_V1_9_0_SecurityCapabilities_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // ConfigurationLockCapable
  Status = GetRedfishPropertyBoolean (Cs, TempJsonObj, "ConfigurationLockCapable", &(*Dst)->ConfigurationLockCapable);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // DataLockCapable
  Status = GetRedfishPropertyBoolean (Cs, TempJsonObj, "DataLockCapable", &(*Dst)->DataLockCapable);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // MaxPassphraseCount
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "MaxPassphraseCount", &(*Dst)->MaxPassphraseCount);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // PassphraseCapable
  Status = GetRedfishPropertyBoolean (Cs, TempJsonObj, "PassphraseCapable", &(*Dst)->PassphraseCapable);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // PassphraseLockLimit
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "PassphraseLockLimit", &(*Dst)->PassphraseLockLimit);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // SecurityStates
  Status = GenRedfishCS_char_ArrayCs (Cs, TempJsonObj, "SecurityStates", &(*Dst)->SecurityStates);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
//
//Generate C structure for OriginOfCondition
//
static RedfishCS_status GenidRefCs(RedfishMemory_V1_9_0_Memory_CS *Cs, json_t *JsonObj, char *Key, Redfishodatav4_idRef_CS **Dst)
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
static RedfishCS_status GenCondition_Array_ElementCs(RedfishMemory_V1_9_0_Memory_CS *Cs, json_t *JsonObj, RedfishCS_uint64 Index,  RedfishResource_Condition_CS **Dst)
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
static RedfishCS_status GenCondition_ArrayCs(RedfishMemory_V1_9_0_Memory_CS *Cs, json_t *JsonObj, char *Key, RedfishResource_Condition_Array_CS **Dst)
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
static RedfishCS_status GenStatusCs(RedfishMemory_V1_9_0_Memory_CS *Cs, json_t *JsonObj, char *Key, RedfishResource_Status_CS **Dst)
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
static RedfishCS_status CS_To_JSON_ActionsMemory_DisablePassphrase(json_t *CsJson, char *Key, RedfishMemory_V1_9_0_DisablePassphrase_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // target 
  if (InsertJsonStringObj (CsJson, "target", CSPtr->target) != RedfishCS_status_success) {goto Error;}

  // title 
  if (InsertJsonStringObj (CsJson, "title", CSPtr->title) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_ActionsMemory_OverwriteUnit(json_t *CsJson, char *Key, RedfishMemory_V1_9_0_OverwriteUnit_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // target 
  if (InsertJsonStringObj (CsJson, "target", CSPtr->target) != RedfishCS_status_success) {goto Error;}

  // title 
  if (InsertJsonStringObj (CsJson, "title", CSPtr->title) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_ActionsMemory_Reset(json_t *CsJson, char *Key, RedfishMemory_V1_9_0_Reset_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // target 
  if (InsertJsonStringObj (CsJson, "target", CSPtr->target) != RedfishCS_status_success) {goto Error;}

  // title 
  if (InsertJsonStringObj (CsJson, "title", CSPtr->title) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_ActionsMemory_SecureEraseUnit(json_t *CsJson, char *Key, RedfishMemory_V1_9_0_SecureEraseUnit_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // target 
  if (InsertJsonStringObj (CsJson, "target", CSPtr->target) != RedfishCS_status_success) {goto Error;}

  // title 
  if (InsertJsonStringObj (CsJson, "title", CSPtr->title) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_ActionsMemory_SetPassphrase(json_t *CsJson, char *Key, RedfishMemory_V1_9_0_SetPassphrase_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // target 
  if (InsertJsonStringObj (CsJson, "target", CSPtr->target) != RedfishCS_status_success) {goto Error;}

  // title 
  if (InsertJsonStringObj (CsJson, "title", CSPtr->title) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_ActionsMemory_UnlockUnit(json_t *CsJson, char *Key, RedfishMemory_V1_9_0_UnlockUnit_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // target 
  if (InsertJsonStringObj (CsJson, "target", CSPtr->target) != RedfishCS_status_success) {goto Error;}

  // title 
  if (InsertJsonStringObj (CsJson, "title", CSPtr->title) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_ActionsOem(json_t *CsJson, char *Key, RedfishMemory_V1_9_0_OemActions_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // Check if this is RedfishCS_Type_CS_EmptyProp.
  CsEmptyPropLinkToJson(CsJson, Key, &CSPtr->Prop);
  // No JSON property for this structure.
  return RedfishCS_status_success;
}
static RedfishCS_status CS_To_JSON_Actions(json_t *CsJson, char *Key, RedfishMemory_V1_9_0_Actions_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // #Memory.DisablePassphrase
  if (CS_To_JSON_ActionsMemory_DisablePassphrase(CsJson, "#Memory.DisablePassphrase", CSPtr->Memory_DisablePassphrase) != RedfishCS_status_success) {goto Error;}

  // #Memory.OverwriteUnit
  if (CS_To_JSON_ActionsMemory_OverwriteUnit(CsJson, "#Memory.OverwriteUnit", CSPtr->Memory_OverwriteUnit) != RedfishCS_status_success) {goto Error;}

  // #Memory.Reset
  if (CS_To_JSON_ActionsMemory_Reset(CsJson, "#Memory.Reset", CSPtr->Memory_Reset) != RedfishCS_status_success) {goto Error;}

  // #Memory.SecureEraseUnit
  if (CS_To_JSON_ActionsMemory_SecureEraseUnit(CsJson, "#Memory.SecureEraseUnit", CSPtr->Memory_SecureEraseUnit) != RedfishCS_status_success) {goto Error;}

  // #Memory.SetPassphrase
  if (CS_To_JSON_ActionsMemory_SetPassphrase(CsJson, "#Memory.SetPassphrase", CSPtr->Memory_SetPassphrase) != RedfishCS_status_success) {goto Error;}

  // #Memory.UnlockUnit
  if (CS_To_JSON_ActionsMemory_UnlockUnit(CsJson, "#Memory.UnlockUnit", CSPtr->Memory_UnlockUnit) != RedfishCS_status_success) {goto Error;}

  // Oem
  if (CS_To_JSON_ActionsOem(CsJson, "Oem", CSPtr->Oem) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_LinksOem(json_t *CsJson, char *Key, RedfishResource_Oem_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // Check if this is RedfishCS_Type_CS_EmptyProp.
  CsEmptyPropLinkToJson(CsJson, Key, &CSPtr->Prop);
  // No JSON property for this structure.
  return RedfishCS_status_success;
}
static RedfishCS_status CS_To_JSON_Links(json_t *CsJson, char *Key, RedfishMemory_V1_9_0_Links_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // Chassis 
  if (InsertJsonLinkObj (CsJson, "Chassis", &CSPtr->Chassis) != RedfishCS_status_success) {goto Error;}

  // Oem
  if (CS_To_JSON_LinksOem(CsJson, "Oem", CSPtr->Oem) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_MemoryLocation(json_t *CsJson, char *Key, RedfishMemory_V1_9_0_MemoryLocation_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // Channel 
  if (InsertJsonInt64Obj (CsJson, "Channel", CSPtr->Channel) != RedfishCS_status_success) {goto Error;}

  // MemoryController 
  if (InsertJsonInt64Obj (CsJson, "MemoryController", CSPtr->MemoryController) != RedfishCS_status_success) {goto Error;}

  // Slot 
  if (InsertJsonInt64Obj (CsJson, "Slot", CSPtr->Slot) != RedfishCS_status_success) {goto Error;}

  // Socket 
  if (InsertJsonInt64Obj (CsJson, "Socket", CSPtr->Socket) != RedfishCS_status_success) {goto Error;}

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
static RedfishCS_status CS_To_JSON_PowerManagementPolicy(json_t *CsJson, char *Key, RedfishMemory_V1_9_0_PowerManagementPolicy_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // AveragePowerBudgetMilliWatts 
  if (InsertJsonInt64Obj (CsJson, "AveragePowerBudgetMilliWatts", CSPtr->AveragePowerBudgetMilliWatts) != RedfishCS_status_success) {goto Error;}

  // MaxTDPMilliWatts 
  if (InsertJsonInt64Obj (CsJson, "MaxTDPMilliWatts", CSPtr->MaxTDPMilliWatts) != RedfishCS_status_success) {goto Error;}

  // PeakPowerBudgetMilliWatts 
  if (InsertJsonInt64Obj (CsJson, "PeakPowerBudgetMilliWatts", CSPtr->PeakPowerBudgetMilliWatts) != RedfishCS_status_success) {goto Error;}

  // PolicyEnabled 
  if (InsertJsonBoolObj (CsJson, "PolicyEnabled", CSPtr->PolicyEnabled) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_Regions(json_t *CsJson, char *Key, RedfishMemory_V1_9_0_RegionSet_Array_CS *CSPtr)
{
  json_t *ArrayJson;
  json_t *ArrayMember;
  RedfishMemory_V1_9_0_RegionSet_Array_CS *NextArray;
  RedfishMemory_V1_9_0_RegionSet_CS *NextArrayItem;

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
    // MemoryClassification 
    if (InsertJsonStringObj (ArrayMember, "MemoryClassification", NextArrayItem->MemoryClassification) != RedfishCS_status_success) {goto Error;}

    // OffsetMiB 
    if (InsertJsonInt64Obj (ArrayMember, "OffsetMiB", NextArrayItem->OffsetMiB) != RedfishCS_status_success) {goto Error;}

    // PassphraseEnabled 
    if (InsertJsonBoolObj (ArrayMember, "PassphraseEnabled", NextArrayItem->PassphraseEnabled) != RedfishCS_status_success) {goto Error;}

    // PassphraseState 
    if (InsertJsonBoolObj (ArrayMember, "PassphraseState", NextArrayItem->PassphraseState) != RedfishCS_status_success) {goto Error;}

    // RegionId 
    if (InsertJsonStringObj (ArrayMember, "RegionId", NextArrayItem->RegionId) != RedfishCS_status_success) {goto Error;}

    // SizeMiB 
    if (InsertJsonInt64Obj (ArrayMember, "SizeMiB", NextArrayItem->SizeMiB) != RedfishCS_status_success) {goto Error;}

    if (json_array_append_new (ArrayJson, ArrayMember) != 0) {goto Error;}
    NextArray = NextArray->Next;
  } while (NextArray != NULL);
  json_object_set_new (CsJson, Key, ArrayJson);

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_SecurityCapabilities(json_t *CsJson, char *Key, RedfishMemory_V1_9_0_SecurityCapabilities_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // ConfigurationLockCapable 
  if (InsertJsonBoolObj (CsJson, "ConfigurationLockCapable", CSPtr->ConfigurationLockCapable) != RedfishCS_status_success) {goto Error;}

  // DataLockCapable 
  if (InsertJsonBoolObj (CsJson, "DataLockCapable", CSPtr->DataLockCapable) != RedfishCS_status_success) {goto Error;}

  // MaxPassphraseCount 
  if (InsertJsonInt64Obj (CsJson, "MaxPassphraseCount", CSPtr->MaxPassphraseCount) != RedfishCS_status_success) {goto Error;}

  // PassphraseCapable 
  if (InsertJsonBoolObj (CsJson, "PassphraseCapable", CSPtr->PassphraseCapable) != RedfishCS_status_success) {goto Error;}

  // PassphraseLockLimit 
  if (InsertJsonInt64Obj (CsJson, "PassphraseLockLimit", CSPtr->PassphraseLockLimit) != RedfishCS_status_success) {goto Error;}

  // SecurityStates 
  if (InsertJsonStringArrayObj (CsJson, "SecurityStates", CSPtr->SecurityStates) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
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

//
// C structure to JSON for Memory.V1_9_0.Memory
//
RedfishCS_status CS_To_Memory_V1_9_0_JSON(RedfishMemory_V1_9_0_Memory_CS *CSPtr, RedfishCS_char **JsonText)
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

  // AllocationAlignmentMiB 
  if (InsertJsonInt64Obj (CsJson, "AllocationAlignmentMiB", CSPtr->AllocationAlignmentMiB) != RedfishCS_status_success) {goto Error;}

  // AllocationIncrementMiB 
  if (InsertJsonInt64Obj (CsJson, "AllocationIncrementMiB", CSPtr->AllocationIncrementMiB) != RedfishCS_status_success) {goto Error;}

  // AllowedSpeedsMHz 
  if (InsertJsonInt64ArrayObj (CsJson, "AllowedSpeedsMHz", CSPtr->AllowedSpeedsMHz) != RedfishCS_status_success) {goto Error;}

  // Assembly 
  if (InsertJsonLinkObj (CsJson, "Assembly", &CSPtr->Assembly) != RedfishCS_status_success) {goto Error;}

  // BaseModuleType 
  if (InsertJsonStringObj (CsJson, "BaseModuleType", CSPtr->BaseModuleType) != RedfishCS_status_success) {goto Error;}

  // BusWidthBits 
  if (InsertJsonInt64Obj (CsJson, "BusWidthBits", CSPtr->BusWidthBits) != RedfishCS_status_success) {goto Error;}

  // CacheSizeMiB 
  if (InsertJsonInt64Obj (CsJson, "CacheSizeMiB", CSPtr->CacheSizeMiB) != RedfishCS_status_success) {goto Error;}

  // CapacityMiB 
  if (InsertJsonInt64Obj (CsJson, "CapacityMiB", CSPtr->CapacityMiB) != RedfishCS_status_success) {goto Error;}

  // ConfigurationLocked 
  if (InsertJsonBoolObj (CsJson, "ConfigurationLocked", CSPtr->ConfigurationLocked) != RedfishCS_status_success) {goto Error;}

  // DataWidthBits 
  if (InsertJsonInt64Obj (CsJson, "DataWidthBits", CSPtr->DataWidthBits) != RedfishCS_status_success) {goto Error;}

  // Description 
  if (InsertJsonStringObj (CsJson, "Description", CSPtr->Description) != RedfishCS_status_success) {goto Error;}

  // DeviceID 
  if (InsertJsonStringObj (CsJson, "DeviceID", CSPtr->DeviceID) != RedfishCS_status_success) {goto Error;}

  // DeviceLocator 
  if (InsertJsonStringObj (CsJson, "DeviceLocator", CSPtr->DeviceLocator) != RedfishCS_status_success) {goto Error;}

  // ErrorCorrection 
  if (InsertJsonStringObj (CsJson, "ErrorCorrection", CSPtr->ErrorCorrection) != RedfishCS_status_success) {goto Error;}

  // FirmwareApiVersion 
  if (InsertJsonStringObj (CsJson, "FirmwareApiVersion", CSPtr->FirmwareApiVersion) != RedfishCS_status_success) {goto Error;}

  // FirmwareRevision 
  if (InsertJsonStringObj (CsJson, "FirmwareRevision", CSPtr->FirmwareRevision) != RedfishCS_status_success) {goto Error;}

  // FunctionClasses 
  if (InsertJsonStringArrayObj (CsJson, "FunctionClasses", CSPtr->FunctionClasses) != RedfishCS_status_success) {goto Error;}

  // Id 
  if (InsertJsonStringObj (CsJson, "Id", CSPtr->Id) != RedfishCS_status_success) {goto Error;}

  // IsRankSpareEnabled 
  if (InsertJsonBoolObj (CsJson, "IsRankSpareEnabled", CSPtr->IsRankSpareEnabled) != RedfishCS_status_success) {goto Error;}

  // IsSpareDeviceEnabled 
  if (InsertJsonBoolObj (CsJson, "IsSpareDeviceEnabled", CSPtr->IsSpareDeviceEnabled) != RedfishCS_status_success) {goto Error;}

  // Links
  if (CS_To_JSON_Links(CsJson, "Links", CSPtr->Links) != RedfishCS_status_success) {goto Error;}

  // Location 
  if (InsertJsonLinkObj (CsJson, "Location", &CSPtr->Location) != RedfishCS_status_success) {goto Error;}

  // LogicalSizeMiB 
  if (InsertJsonInt64Obj (CsJson, "LogicalSizeMiB", CSPtr->LogicalSizeMiB) != RedfishCS_status_success) {goto Error;}

  // Manufacturer 
  if (InsertJsonStringObj (CsJson, "Manufacturer", CSPtr->Manufacturer) != RedfishCS_status_success) {goto Error;}

  // MaxTDPMilliWatts 
  if (InsertJsonInt64ArrayObj (CsJson, "MaxTDPMilliWatts", CSPtr->MaxTDPMilliWatts) != RedfishCS_status_success) {goto Error;}

  // MemoryDeviceType 
  if (InsertJsonStringObj (CsJson, "MemoryDeviceType", CSPtr->MemoryDeviceType) != RedfishCS_status_success) {goto Error;}

  // MemoryLocation
  if (CS_To_JSON_MemoryLocation(CsJson, "MemoryLocation", CSPtr->MemoryLocation) != RedfishCS_status_success) {goto Error;}

  // MemoryMedia 
  if (InsertJsonStringArrayObj (CsJson, "MemoryMedia", CSPtr->MemoryMedia) != RedfishCS_status_success) {goto Error;}

  // MemorySubsystemControllerManufacturerID 
  if (InsertJsonStringObj (CsJson, "MemorySubsystemControllerManufacturerID", CSPtr->MemorySubsystemControllerManufacturerID) != RedfishCS_status_success) {goto Error;}

  // MemorySubsystemControllerProductID 
  if (InsertJsonStringObj (CsJson, "MemorySubsystemControllerProductID", CSPtr->MemorySubsystemControllerProductID) != RedfishCS_status_success) {goto Error;}

  // MemoryType 
  if (InsertJsonStringObj (CsJson, "MemoryType", CSPtr->MemoryType) != RedfishCS_status_success) {goto Error;}

  // Metrics 
  if (InsertJsonLinkObj (CsJson, "Metrics", &CSPtr->Metrics) != RedfishCS_status_success) {goto Error;}

  // ModuleManufacturerID 
  if (InsertJsonStringObj (CsJson, "ModuleManufacturerID", CSPtr->ModuleManufacturerID) != RedfishCS_status_success) {goto Error;}

  // ModuleProductID 
  if (InsertJsonStringObj (CsJson, "ModuleProductID", CSPtr->ModuleProductID) != RedfishCS_status_success) {goto Error;}

  // Name 
  if (InsertJsonStringObj (CsJson, "Name", CSPtr->Name) != RedfishCS_status_success) {goto Error;}

  // NonVolatileSizeMiB 
  if (InsertJsonInt64Obj (CsJson, "NonVolatileSizeMiB", CSPtr->NonVolatileSizeMiB) != RedfishCS_status_success) {goto Error;}

  // Oem
  if (CS_To_JSON_Oem(CsJson, "Oem", CSPtr->Oem) != RedfishCS_status_success) {goto Error;}

  // OperatingMemoryModes 
  if (InsertJsonStringArrayObj (CsJson, "OperatingMemoryModes", CSPtr->OperatingMemoryModes) != RedfishCS_status_success) {goto Error;}

  // OperatingSpeedMhz 
  if (InsertJsonInt64Obj (CsJson, "OperatingSpeedMhz", CSPtr->OperatingSpeedMhz) != RedfishCS_status_success) {goto Error;}

  // PartNumber 
  if (InsertJsonStringObj (CsJson, "PartNumber", CSPtr->PartNumber) != RedfishCS_status_success) {goto Error;}

  // PersistentRegionNumberLimit 
  if (InsertJsonInt64Obj (CsJson, "PersistentRegionNumberLimit", CSPtr->PersistentRegionNumberLimit) != RedfishCS_status_success) {goto Error;}

  // PersistentRegionSizeLimitMiB 
  if (InsertJsonInt64Obj (CsJson, "PersistentRegionSizeLimitMiB", CSPtr->PersistentRegionSizeLimitMiB) != RedfishCS_status_success) {goto Error;}

  // PersistentRegionSizeMaxMiB 
  if (InsertJsonInt64Obj (CsJson, "PersistentRegionSizeMaxMiB", CSPtr->PersistentRegionSizeMaxMiB) != RedfishCS_status_success) {goto Error;}

  // PowerManagementPolicy
  if (CS_To_JSON_PowerManagementPolicy(CsJson, "PowerManagementPolicy", CSPtr->PowerManagementPolicy) != RedfishCS_status_success) {goto Error;}

  // RankCount 
  if (InsertJsonInt64Obj (CsJson, "RankCount", CSPtr->RankCount) != RedfishCS_status_success) {goto Error;}

  // Regions
  if (CS_To_JSON_Regions(CsJson, "Regions", CSPtr->Regions) != RedfishCS_status_success) {goto Error;}

  // SecurityCapabilities
  if (CS_To_JSON_SecurityCapabilities(CsJson, "SecurityCapabilities", CSPtr->SecurityCapabilities) != RedfishCS_status_success) {goto Error;}

  // SecurityState 
  if (InsertJsonStringObj (CsJson, "SecurityState", CSPtr->SecurityState) != RedfishCS_status_success) {goto Error;}

  // SerialNumber 
  if (InsertJsonStringObj (CsJson, "SerialNumber", CSPtr->SerialNumber) != RedfishCS_status_success) {goto Error;}

  // SpareDeviceCount 
  if (InsertJsonInt64Obj (CsJson, "SpareDeviceCount", CSPtr->SpareDeviceCount) != RedfishCS_status_success) {goto Error;}

  // Status
  if (CS_To_JSON_Status(CsJson, "Status", CSPtr->Status) != RedfishCS_status_success) {goto Error;}

  // SubsystemDeviceID 
  if (InsertJsonStringObj (CsJson, "SubsystemDeviceID", CSPtr->SubsystemDeviceID) != RedfishCS_status_success) {goto Error;}

  // SubsystemVendorID 
  if (InsertJsonStringObj (CsJson, "SubsystemVendorID", CSPtr->SubsystemVendorID) != RedfishCS_status_success) {goto Error;}

  // VendorID 
  if (InsertJsonStringObj (CsJson, "VendorID", CSPtr->VendorID) != RedfishCS_status_success) {goto Error;}

  // VolatileRegionNumberLimit 
  if (InsertJsonInt64Obj (CsJson, "VolatileRegionNumberLimit", CSPtr->VolatileRegionNumberLimit) != RedfishCS_status_success) {goto Error;}

  // VolatileRegionSizeLimitMiB 
  if (InsertJsonInt64Obj (CsJson, "VolatileRegionSizeLimitMiB", CSPtr->VolatileRegionSizeLimitMiB) != RedfishCS_status_success) {goto Error;}

  // VolatileRegionSizeMaxMiB 
  if (InsertJsonInt64Obj (CsJson, "VolatileRegionSizeMaxMiB", CSPtr->VolatileRegionSizeMaxMiB) != RedfishCS_status_success) {goto Error;}

  // VolatileSizeMiB 
  if (InsertJsonInt64Obj (CsJson, "VolatileSizeMiB", CSPtr->VolatileSizeMiB) != RedfishCS_status_success) {goto Error;}

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
// Destory C Structure for Memory.V1_9_0.Memory
//
RedfishCS_status DestroyMemory_V1_9_0_CS(RedfishMemory_V1_9_0_Memory_CS *CSPtr)
{
  RedfishCS_status Status;

  Status = DestoryCsMemory ((RedfishCS_void *)CSPtr);
  return Status;
}

//
// Destory JSON text for Memory.V1_9_0.Memory
//
RedfishCS_status DestroyMemory_V1_9_0_Json(RedfishCS_char *JsonText)
{
  free ((RedfishCS_void *)JsonText);
  return RedfishCS_status_success;
}

//
//Generate C structure for Memory.V1_9_0.Memory
//
RedfishCS_status
Json_Memory_V1_9_0_To_CS(RedfishCS_char *JsonRawText, RedfishMemory_V1_9_0_Memory_CS **ReturnedCs)
{
  RedfishCS_status  Status;
  json_t *JsonObj;
  RedfishMemory_V1_9_0_Memory_CS *Cs;

  Status = CreateJsonPayloadAndCs (JsonRawText, "Memory", "v1_9_0", "Memory", &JsonObj, (RedfishCS_void **)&Cs, sizeof (RedfishMemory_V1_9_0_Memory_CS));
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

  // AllocationAlignmentMiB
  Status = GetRedfishPropertyInt64 (Cs, JsonObj, "AllocationAlignmentMiB", &Cs->AllocationAlignmentMiB);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // AllocationIncrementMiB
  Status = GetRedfishPropertyInt64 (Cs, JsonObj, "AllocationIncrementMiB", &Cs->AllocationIncrementMiB);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // AllowedSpeedsMHz
  Status = GenRedfishCS_int64_ArrayCs (Cs, JsonObj, "AllowedSpeedsMHz", &Cs->AllowedSpeedsMHz);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Assembly
  InitializeLinkHead (&Cs->Assembly);
  Status = CreateCsUriOrJsonByNode (Cs, JsonObj, "Assembly", Cs->Header.ThisUri, &Cs->Assembly);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // BaseModuleType
  Status = GetRedfishPropertyStr (Cs, JsonObj, "BaseModuleType", &Cs->BaseModuleType);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // BusWidthBits
  Status = GetRedfishPropertyInt64 (Cs, JsonObj, "BusWidthBits", &Cs->BusWidthBits);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // CacheSizeMiB
  Status = GetRedfishPropertyInt64 (Cs, JsonObj, "CacheSizeMiB", &Cs->CacheSizeMiB);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // CapacityMiB
  Status = GetRedfishPropertyInt64 (Cs, JsonObj, "CapacityMiB", &Cs->CapacityMiB);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ConfigurationLocked
  Status = GetRedfishPropertyBoolean (Cs, JsonObj, "ConfigurationLocked", &Cs->ConfigurationLocked);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // DataWidthBits
  Status = GetRedfishPropertyInt64 (Cs, JsonObj, "DataWidthBits", &Cs->DataWidthBits);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Description
  Status = GetRedfishPropertyStr (Cs, JsonObj, "Description", &Cs->Description);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // DeviceID
  Status = GetRedfishPropertyStr (Cs, JsonObj, "DeviceID", &Cs->DeviceID);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // DeviceLocator
  Status = GetRedfishPropertyStr (Cs, JsonObj, "DeviceLocator", &Cs->DeviceLocator);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ErrorCorrection
  Status = GetRedfishPropertyStr (Cs, JsonObj, "ErrorCorrection", &Cs->ErrorCorrection);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // FirmwareApiVersion
  Status = GetRedfishPropertyStr (Cs, JsonObj, "FirmwareApiVersion", &Cs->FirmwareApiVersion);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // FirmwareRevision
  Status = GetRedfishPropertyStr (Cs, JsonObj, "FirmwareRevision", &Cs->FirmwareRevision);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // FunctionClasses
  Status = GenRedfishCS_char_ArrayCs (Cs, JsonObj, "FunctionClasses", &Cs->FunctionClasses);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Id
  Status = GetRedfishPropertyStr (Cs, JsonObj, "Id", &Cs->Id);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){goto Error;}}

  // IsRankSpareEnabled
  Status = GetRedfishPropertyBoolean (Cs, JsonObj, "IsRankSpareEnabled", &Cs->IsRankSpareEnabled);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // IsSpareDeviceEnabled
  Status = GetRedfishPropertyBoolean (Cs, JsonObj, "IsSpareDeviceEnabled", &Cs->IsSpareDeviceEnabled);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Links
  Status = GenLinksCs (Cs, JsonObj, "Links", &Cs->Links);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Location
  InitializeLinkHead (&Cs->Location);
  Status = CreateCsUriOrJsonByNode (Cs, JsonObj, "Location", Cs->Header.ThisUri, &Cs->Location);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // LogicalSizeMiB
  Status = GetRedfishPropertyInt64 (Cs, JsonObj, "LogicalSizeMiB", &Cs->LogicalSizeMiB);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Manufacturer
  Status = GetRedfishPropertyStr (Cs, JsonObj, "Manufacturer", &Cs->Manufacturer);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // MaxTDPMilliWatts
  Status = GenRedfishCS_int64_ArrayCs (Cs, JsonObj, "MaxTDPMilliWatts", &Cs->MaxTDPMilliWatts);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // MemoryDeviceType
  Status = GetRedfishPropertyStr (Cs, JsonObj, "MemoryDeviceType", &Cs->MemoryDeviceType);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // MemoryLocation
  Status = GenMemoryLocationCs (Cs, JsonObj, "MemoryLocation", &Cs->MemoryLocation);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // MemoryMedia
  Status = GenRedfishCS_char_ArrayCs (Cs, JsonObj, "MemoryMedia", &Cs->MemoryMedia);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // MemorySubsystemControllerManufacturerID
  Status = GetRedfishPropertyStr (Cs, JsonObj, "MemorySubsystemControllerManufacturerID", &Cs->MemorySubsystemControllerManufacturerID);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // MemorySubsystemControllerProductID
  Status = GetRedfishPropertyStr (Cs, JsonObj, "MemorySubsystemControllerProductID", &Cs->MemorySubsystemControllerProductID);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // MemoryType
  Status = GetRedfishPropertyStr (Cs, JsonObj, "MemoryType", &Cs->MemoryType);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Metrics
  InitializeLinkHead (&Cs->Metrics);
  Status = CreateCsUriOrJsonByNode (Cs, JsonObj, "Metrics", Cs->Header.ThisUri, &Cs->Metrics);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ModuleManufacturerID
  Status = GetRedfishPropertyStr (Cs, JsonObj, "ModuleManufacturerID", &Cs->ModuleManufacturerID);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ModuleProductID
  Status = GetRedfishPropertyStr (Cs, JsonObj, "ModuleProductID", &Cs->ModuleProductID);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Name
  Status = GetRedfishPropertyStr (Cs, JsonObj, "Name", &Cs->Name);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){goto Error;}}

  // NonVolatileSizeMiB
  Status = GetRedfishPropertyInt64 (Cs, JsonObj, "NonVolatileSizeMiB", &Cs->NonVolatileSizeMiB);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Oem
  Status = GenOemCs (Cs, JsonObj, "Oem", &Cs->Oem);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // OperatingMemoryModes
  Status = GenRedfishCS_char_ArrayCs (Cs, JsonObj, "OperatingMemoryModes", &Cs->OperatingMemoryModes);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // OperatingSpeedMhz
  Status = GetRedfishPropertyInt64 (Cs, JsonObj, "OperatingSpeedMhz", &Cs->OperatingSpeedMhz);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // PartNumber
  Status = GetRedfishPropertyStr (Cs, JsonObj, "PartNumber", &Cs->PartNumber);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // PersistentRegionNumberLimit
  Status = GetRedfishPropertyInt64 (Cs, JsonObj, "PersistentRegionNumberLimit", &Cs->PersistentRegionNumberLimit);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // PersistentRegionSizeLimitMiB
  Status = GetRedfishPropertyInt64 (Cs, JsonObj, "PersistentRegionSizeLimitMiB", &Cs->PersistentRegionSizeLimitMiB);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // PersistentRegionSizeMaxMiB
  Status = GetRedfishPropertyInt64 (Cs, JsonObj, "PersistentRegionSizeMaxMiB", &Cs->PersistentRegionSizeMaxMiB);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // PowerManagementPolicy
  Status = GenPowerManagementPolicyCs (Cs, JsonObj, "PowerManagementPolicy", &Cs->PowerManagementPolicy);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // RankCount
  Status = GetRedfishPropertyInt64 (Cs, JsonObj, "RankCount", &Cs->RankCount);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Regions
  Status = GenRegionSet_ArrayCs (Cs, JsonObj, "Regions", &Cs->Regions);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // SecurityCapabilities
  Status = GenSecurityCapabilitiesCs (Cs, JsonObj, "SecurityCapabilities", &Cs->SecurityCapabilities);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // SecurityState
  Status = GetRedfishPropertyStr (Cs, JsonObj, "SecurityState", &Cs->SecurityState);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // SerialNumber
  Status = GetRedfishPropertyStr (Cs, JsonObj, "SerialNumber", &Cs->SerialNumber);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // SpareDeviceCount
  Status = GetRedfishPropertyInt64 (Cs, JsonObj, "SpareDeviceCount", &Cs->SpareDeviceCount);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Status
  Status = GenStatusCs (Cs, JsonObj, "Status", &Cs->Status);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // SubsystemDeviceID
  Status = GetRedfishPropertyStr (Cs, JsonObj, "SubsystemDeviceID", &Cs->SubsystemDeviceID);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // SubsystemVendorID
  Status = GetRedfishPropertyStr (Cs, JsonObj, "SubsystemVendorID", &Cs->SubsystemVendorID);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // VendorID
  Status = GetRedfishPropertyStr (Cs, JsonObj, "VendorID", &Cs->VendorID);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // VolatileRegionNumberLimit
  Status = GetRedfishPropertyInt64 (Cs, JsonObj, "VolatileRegionNumberLimit", &Cs->VolatileRegionNumberLimit);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // VolatileRegionSizeLimitMiB
  Status = GetRedfishPropertyInt64 (Cs, JsonObj, "VolatileRegionSizeLimitMiB", &Cs->VolatileRegionSizeLimitMiB);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // VolatileRegionSizeMaxMiB
  Status = GetRedfishPropertyInt64 (Cs, JsonObj, "VolatileRegionSizeMaxMiB", &Cs->VolatileRegionSizeMaxMiB);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // VolatileSizeMiB
  Status = GetRedfishPropertyInt64 (Cs, JsonObj, "VolatileSizeMiB", &Cs->VolatileSizeMiB);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  json_decref(JsonObj);
  *ReturnedCs = Cs;
  return RedfishCS_status_success;
Error:;
  json_decref(JsonObj);
  DestroyMemory_V1_9_0_CS (Cs);
  return Status;
}
