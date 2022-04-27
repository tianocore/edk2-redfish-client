//
// Auto-generated file by Redfish Schema C Structure Generator.
// https://github.com/DMTF/Redfish-Schema-C-Struct-Generator.
//
//  (C) Copyright 2019-2022 Hewlett Packard Enterprise Development LP<BR>
//
// Copyright Notice:
// Copyright 2019-2022 Distributed Management Task Force, Inc. All rights reserved.
// License: BSD 3-Clause License. For full text see link: https://github.com/DMTF/Redfish-JSON-C-Struct-Converter/blob/master/LICENSE.md
//

#include"Redfish_ComponentIntegrity_v1_0_0_CS.h"
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

static RedfishCS_status GenOemCs(RedfishComponentIntegrity_V1_0_0_ComponentIntegrity_CS *Cs, json_t *JsonObj, char *Key, RedfishResource_Oem_CS **Dst);
static RedfishCS_status GenidRefCs(RedfishComponentIntegrity_V1_0_0_ComponentIntegrity_CS *Cs, json_t *JsonObj, char *Key, Redfishodatav4_idRef_CS **Dst);
static RedfishCS_status GenSingleSessionInfo_ArrayCs(RedfishComponentIntegrity_V1_0_0_ComponentIntegrity_CS *Cs, json_t *JsonObj, char *Key, RedfishComponentIntegrity_V1_0_0_SingleSessionInfo_Array_CS **Dst);
//
//Generate C structure for #ComponentIntegrity.SPDMGetSignedMeasurements
//
static RedfishCS_status GenSPDMGetSignedMeasurementsCs(RedfishComponentIntegrity_V1_0_0_ComponentIntegrity_CS *Cs, json_t *JsonObj, char *Key, RedfishComponentIntegrity_V1_0_0_SPDMGetSignedMeasurements_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishComponentIntegrity_V1_0_0_SPDMGetSignedMeasurements_CS), (RedfishCS_void **)Dst);
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
static RedfishCS_status GenOemActionsCs(RedfishComponentIntegrity_V1_0_0_ComponentIntegrity_CS *Cs, json_t *JsonObj, char *Key, RedfishComponentIntegrity_V1_0_0_OemActions_CS **Dst)
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
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishComponentIntegrity_V1_0_0_OemActions_CS), (RedfishCS_void **)Dst);
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
static RedfishCS_status GenActionsCs(RedfishComponentIntegrity_V1_0_0_ComponentIntegrity_CS *Cs, json_t *JsonObj, char *Key, RedfishComponentIntegrity_V1_0_0_Actions_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishComponentIntegrity_V1_0_0_Actions_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // #ComponentIntegrity.SPDMGetSignedMeasurements
  Status = GenSPDMGetSignedMeasurementsCs (Cs, TempJsonObj, "#ComponentIntegrity.SPDMGetSignedMeasurements", &(*Dst)->ComponentIntegrity_SPDMGetSignedMeasurements);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Oem
  Status = GenOemActionsCs (Cs, TempJsonObj, "Oem", &(*Dst)->Oem);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
static RedfishCS_status GenidRef_Array_ElementCs(RedfishComponentIntegrity_V1_0_0_ComponentIntegrity_CS *Cs, json_t *JsonObj, RedfishCS_uint64 Index,  Redfishodatav4_idRef_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_array_get (JsonObj, (RedfishCS_int)Index);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsZeroMemory(Cs, sizeof(Redfishodatav4_idRef_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // @odata.id
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "@odata.id", &(*Dst)->odata_id);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  return RedfishCS_status_success;
Error:;
  return Status;
}
//
//Generate C structure for Redfishodatav4_idRef_Array_CS
//
static RedfishCS_status GenidRef_ArrayCs(RedfishComponentIntegrity_V1_0_0_ComponentIntegrity_CS *Cs, json_t *JsonObj, char *Key, Redfishodatav4_idRef_Array_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;
  RedfishCS_uint64 ArraySize;
  RedfishCS_uint64 Index;
  Redfishodatav4_idRef_Array_CS *ThisElement;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }

  if (json_is_array(TempJsonObj) != RedfishCS_boolean_true) {
    return RedfishCS_status_invalid_parameter;
  }

  ArraySize = json_array_size (TempJsonObj);
  Status = allocateArrayRecordCsMemory(Cs, sizeof (Redfishodatav4_idRef_Array_CS), ArraySize, (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  if (*Dst == NULL) {
    // Empty array
    return RedfishCS_status_success;
  }
  ThisElement = *Dst;
  for (Index = 0; Index < ArraySize; Index ++) {
    Status = GenidRef_Array_ElementCs(Cs, TempJsonObj, Index, &ThisElement->ArrayValue);
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
static RedfishCS_status GenOemCs(RedfishComponentIntegrity_V1_0_0_ComponentIntegrity_CS *Cs, json_t *JsonObj, char *Key, RedfishResource_Oem_CS **Dst)
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
static RedfishCS_status GenLinksCs(RedfishComponentIntegrity_V1_0_0_ComponentIntegrity_CS *Cs, json_t *JsonObj, char *Key, RedfishComponentIntegrity_V1_0_0_Links_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishComponentIntegrity_V1_0_0_Links_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // ComponentsProtected
  Status = GenidRef_ArrayCs (Cs, TempJsonObj, "ComponentsProtected", &(*Dst)->ComponentsProtected);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ComponentsProtected@odata.count
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "ComponentsProtected@odata.count", &(*Dst)->ComponentsProtectedodata_count);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Oem
  Status = GenOemCs (Cs, TempJsonObj, "Oem", &(*Dst)->Oem);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
static RedfishCS_status GenSingleSessionInfo_Array_ElementCs(RedfishComponentIntegrity_V1_0_0_ComponentIntegrity_CS *Cs, json_t *JsonObj, RedfishCS_uint64 Index,  RedfishComponentIntegrity_V1_0_0_SingleSessionInfo_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_array_get (JsonObj, (RedfishCS_int)Index);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsZeroMemory(Cs, sizeof(RedfishComponentIntegrity_V1_0_0_SingleSessionInfo_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // SessionId
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "SessionId", &(*Dst)->SessionId);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // SessionType
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "SessionType", &(*Dst)->SessionType);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  return RedfishCS_status_success;
Error:;
  return Status;
}
//
//Generate C structure for RedfishComponentIntegrity_V1_0_0_SingleSessionInfo_Array_CS
//
static RedfishCS_status GenSingleSessionInfo_ArrayCs(RedfishComponentIntegrity_V1_0_0_ComponentIntegrity_CS *Cs, json_t *JsonObj, char *Key, RedfishComponentIntegrity_V1_0_0_SingleSessionInfo_Array_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;
  RedfishCS_uint64 ArraySize;
  RedfishCS_uint64 Index;
  RedfishComponentIntegrity_V1_0_0_SingleSessionInfo_Array_CS *ThisElement;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }

  if (json_is_array(TempJsonObj) != RedfishCS_boolean_true) {
    return RedfishCS_status_invalid_parameter;
  }

  ArraySize = json_array_size (TempJsonObj);
  Status = allocateArrayRecordCsMemory(Cs, sizeof (RedfishComponentIntegrity_V1_0_0_SingleSessionInfo_Array_CS), ArraySize, (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  if (*Dst == NULL) {
    // Empty array
    return RedfishCS_status_success;
  }
  ThisElement = *Dst;
  for (Index = 0; Index < ArraySize; Index ++) {
    Status = GenSingleSessionInfo_Array_ElementCs(Cs, TempJsonObj, Index, &ThisElement->ArrayValue);
    if (Status != RedfishCS_status_success){
      goto Error;
    }
    ThisElement = ThisElement->Next;
  }
Error:;
  return Status;
}
//
//Generate C structure for ComponentCommunication
//
static RedfishCS_status GenSPDMcommunicationCs(RedfishComponentIntegrity_V1_0_0_ComponentIntegrity_CS *Cs, json_t *JsonObj, char *Key, RedfishComponentIntegrity_V1_0_0_SPDMcommunication_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishComponentIntegrity_V1_0_0_SPDMcommunication_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // Sessions
  Status = GenSingleSessionInfo_ArrayCs (Cs, TempJsonObj, "Sessions", &(*Dst)->Sessions);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
//
//Generate C structure for RequesterAuthentication
//
static RedfishCS_status GenSPDMrequesterAuthCs(RedfishComponentIntegrity_V1_0_0_ComponentIntegrity_CS *Cs, json_t *JsonObj, char *Key, RedfishComponentIntegrity_V1_0_0_SPDMrequesterAuth_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishComponentIntegrity_V1_0_0_SPDMrequesterAuth_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // ProvidedCertificate
  InitializeLinkHead (&(*Dst)->ProvidedCertificate);
  Status = CreateCsUriOrJsonByNode (Cs, TempJsonObj, "ProvidedCertificate", Cs->Header.ThisUri, &(*Dst)->ProvidedCertificate);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
//
//Generate C structure for ResponderAuthentication
//
static RedfishCS_status GenSPDMresponderAuthCs(RedfishComponentIntegrity_V1_0_0_ComponentIntegrity_CS *Cs, json_t *JsonObj, char *Key, RedfishComponentIntegrity_V1_0_0_SPDMresponderAuth_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishComponentIntegrity_V1_0_0_SPDMresponderAuth_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // ComponentCertificate
  InitializeLinkHead (&(*Dst)->ComponentCertificate);
  Status = CreateCsUriOrJsonByNode (Cs, TempJsonObj, "ComponentCertificate", Cs->Header.ThisUri, &(*Dst)->ComponentCertificate);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // VerificationStatus
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "VerificationStatus", &(*Dst)->VerificationStatus);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
//
//Generate C structure for IdentityAuthentication
//
static RedfishCS_status GenSPDMidentityCs(RedfishComponentIntegrity_V1_0_0_ComponentIntegrity_CS *Cs, json_t *JsonObj, char *Key, RedfishComponentIntegrity_V1_0_0_SPDMidentity_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishComponentIntegrity_V1_0_0_SPDMidentity_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // RequesterAuthentication
  Status = GenSPDMrequesterAuthCs (Cs, TempJsonObj, "RequesterAuthentication", &(*Dst)->RequesterAuthentication);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ResponderAuthentication
  Status = GenSPDMresponderAuthCs (Cs, TempJsonObj, "ResponderAuthentication", &(*Dst)->ResponderAuthentication);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
static RedfishCS_status GenSPDMsingleMeasurement_Array_ElementCs(RedfishComponentIntegrity_V1_0_0_ComponentIntegrity_CS *Cs, json_t *JsonObj, RedfishCS_uint64 Index,  RedfishComponentIntegrity_V1_0_0_SPDMsingleMeasurement_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_array_get (JsonObj, (RedfishCS_int)Index);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsZeroMemory(Cs, sizeof(RedfishComponentIntegrity_V1_0_0_SPDMsingleMeasurement_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // LastUpdated
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "LastUpdated", &(*Dst)->LastUpdated);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Measurement
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "Measurement", &(*Dst)->Measurement);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // MeasurementHashAlgorithm
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "MeasurementHashAlgorithm", &(*Dst)->MeasurementHashAlgorithm);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // MeasurementIndex
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "MeasurementIndex", &(*Dst)->MeasurementIndex);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // MeasurementType
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "MeasurementType", &(*Dst)->MeasurementType);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Oem
  Status = GenOemCs (Cs, TempJsonObj, "Oem", &(*Dst)->Oem);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // PartofSummaryHash
  Status = GetRedfishPropertyBoolean (Cs, TempJsonObj, "PartofSummaryHash", &(*Dst)->PartofSummaryHash);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  return RedfishCS_status_success;
Error:;
  return Status;
}
//
//Generate C structure for RedfishComponentIntegrity_V1_0_0_SPDMsingleMeasurement_Array_CS
//
static RedfishCS_status GenSPDMsingleMeasurement_ArrayCs(RedfishComponentIntegrity_V1_0_0_ComponentIntegrity_CS *Cs, json_t *JsonObj, char *Key, RedfishComponentIntegrity_V1_0_0_SPDMsingleMeasurement_Array_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;
  RedfishCS_uint64 ArraySize;
  RedfishCS_uint64 Index;
  RedfishComponentIntegrity_V1_0_0_SPDMsingleMeasurement_Array_CS *ThisElement;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }

  if (json_is_array(TempJsonObj) != RedfishCS_boolean_true) {
    return RedfishCS_status_invalid_parameter;
  }

  ArraySize = json_array_size (TempJsonObj);
  Status = allocateArrayRecordCsMemory(Cs, sizeof (RedfishComponentIntegrity_V1_0_0_SPDMsingleMeasurement_Array_CS), ArraySize, (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  if (*Dst == NULL) {
    // Empty array
    return RedfishCS_status_success;
  }
  ThisElement = *Dst;
  for (Index = 0; Index < ArraySize; Index ++) {
    Status = GenSPDMsingleMeasurement_Array_ElementCs(Cs, TempJsonObj, Index, &ThisElement->ArrayValue);
    if (Status != RedfishCS_status_success){
      goto Error;
    }
    ThisElement = ThisElement->Next;
  }
Error:;
  return Status;
}
//
//Generate C structure for MeasurementSet
//
static RedfishCS_status GenSPDMmeasurementSetCs(RedfishComponentIntegrity_V1_0_0_ComponentIntegrity_CS *Cs, json_t *JsonObj, char *Key, RedfishComponentIntegrity_V1_0_0_SPDMmeasurementSet_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishComponentIntegrity_V1_0_0_SPDMmeasurementSet_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // MeasurementSpecification
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "MeasurementSpecification", &(*Dst)->MeasurementSpecification);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // MeasurementSummary
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "MeasurementSummary", &(*Dst)->MeasurementSummary);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // MeasurementSummaryHashAlgorithm
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "MeasurementSummaryHashAlgorithm", &(*Dst)->MeasurementSummaryHashAlgorithm);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // MeasurementSummaryType
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "MeasurementSummaryType", &(*Dst)->MeasurementSummaryType);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Measurements
  Status = GenSPDMsingleMeasurement_ArrayCs (Cs, TempJsonObj, "Measurements", &(*Dst)->Measurements);
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
//Generate C structure for Requester
//
static RedfishCS_status GenidRefCs(RedfishComponentIntegrity_V1_0_0_ComponentIntegrity_CS *Cs, json_t *JsonObj, char *Key, Redfishodatav4_idRef_CS **Dst)
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
//
//Generate C structure for SPDM
//
static RedfishCS_status GenSPDMinfoCs(RedfishComponentIntegrity_V1_0_0_ComponentIntegrity_CS *Cs, json_t *JsonObj, char *Key, RedfishComponentIntegrity_V1_0_0_SPDMinfo_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishComponentIntegrity_V1_0_0_SPDMinfo_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // ComponentCommunication
  Status = GenSPDMcommunicationCs (Cs, TempJsonObj, "ComponentCommunication", &(*Dst)->ComponentCommunication);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // IdentityAuthentication
  Status = GenSPDMidentityCs (Cs, TempJsonObj, "IdentityAuthentication", &(*Dst)->IdentityAuthentication);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // MeasurementSet
  Status = GenSPDMmeasurementSetCs (Cs, TempJsonObj, "MeasurementSet", &(*Dst)->MeasurementSet);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Requester
  Status = GenidRefCs (Cs, TempJsonObj, "Requester", &(*Dst)->Requester);
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
static RedfishCS_status GenRedfishCS_char_ArrayCs(RedfishComponentIntegrity_V1_0_0_ComponentIntegrity_CS *Cs, json_t *JsonObj, char *Key, RedfishCS_char_Array **Dst)
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
static RedfishCS_status GenCondition_Array_ElementCs(RedfishComponentIntegrity_V1_0_0_ComponentIntegrity_CS *Cs, json_t *JsonObj, RedfishCS_uint64 Index,  RedfishResource_Condition_CS **Dst)
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

  // Resolution
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "Resolution", &(*Dst)->Resolution);
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
static RedfishCS_status GenCondition_ArrayCs(RedfishComponentIntegrity_V1_0_0_ComponentIntegrity_CS *Cs, json_t *JsonObj, char *Key, RedfishResource_Condition_Array_CS **Dst)
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
static RedfishCS_status GenStatusCs(RedfishComponentIntegrity_V1_0_0_ComponentIntegrity_CS *Cs, json_t *JsonObj, char *Key, RedfishResource_Status_CS **Dst)
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
//Generate C structure for ComponentCommunication
//
static RedfishCS_status GenTPMcommunicationCs(RedfishComponentIntegrity_V1_0_0_ComponentIntegrity_CS *Cs, json_t *JsonObj, char *Key, RedfishComponentIntegrity_V1_0_0_TPMcommunication_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishComponentIntegrity_V1_0_0_TPMcommunication_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // Sessions
  Status = GenSingleSessionInfo_ArrayCs (Cs, TempJsonObj, "Sessions", &(*Dst)->Sessions);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
//
//Generate C structure for IdentityAuthentication
//
static RedfishCS_status GenTPMauthCs(RedfishComponentIntegrity_V1_0_0_ComponentIntegrity_CS *Cs, json_t *JsonObj, char *Key, RedfishComponentIntegrity_V1_0_0_TPMauth_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishComponentIntegrity_V1_0_0_TPMauth_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // ComponentCertificate
  InitializeLinkHead (&(*Dst)->ComponentCertificate);
  Status = CreateCsUriOrJsonByNode (Cs, TempJsonObj, "ComponentCertificate", Cs->Header.ThisUri, &(*Dst)->ComponentCertificate);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // VerificationStatus
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "VerificationStatus", &(*Dst)->VerificationStatus);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
static RedfishCS_status GenTPMsingleMeasurement_Array_ElementCs(RedfishComponentIntegrity_V1_0_0_ComponentIntegrity_CS *Cs, json_t *JsonObj, RedfishCS_uint64 Index,  RedfishComponentIntegrity_V1_0_0_TPMsingleMeasurement_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_array_get (JsonObj, (RedfishCS_int)Index);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsZeroMemory(Cs, sizeof(RedfishComponentIntegrity_V1_0_0_TPMsingleMeasurement_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // LastUpdated
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "LastUpdated", &(*Dst)->LastUpdated);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Measurement
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "Measurement", &(*Dst)->Measurement);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // MeasurementHashAlgorithm
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "MeasurementHashAlgorithm", &(*Dst)->MeasurementHashAlgorithm);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // PCR
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "PCR", &(*Dst)->PCR);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  return RedfishCS_status_success;
Error:;
  return Status;
}
//
//Generate C structure for RedfishComponentIntegrity_V1_0_0_TPMsingleMeasurement_Array_CS
//
static RedfishCS_status GenTPMsingleMeasurement_ArrayCs(RedfishComponentIntegrity_V1_0_0_ComponentIntegrity_CS *Cs, json_t *JsonObj, char *Key, RedfishComponentIntegrity_V1_0_0_TPMsingleMeasurement_Array_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;
  RedfishCS_uint64 ArraySize;
  RedfishCS_uint64 Index;
  RedfishComponentIntegrity_V1_0_0_TPMsingleMeasurement_Array_CS *ThisElement;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }

  if (json_is_array(TempJsonObj) != RedfishCS_boolean_true) {
    return RedfishCS_status_invalid_parameter;
  }

  ArraySize = json_array_size (TempJsonObj);
  Status = allocateArrayRecordCsMemory(Cs, sizeof (RedfishComponentIntegrity_V1_0_0_TPMsingleMeasurement_Array_CS), ArraySize, (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  if (*Dst == NULL) {
    // Empty array
    return RedfishCS_status_success;
  }
  ThisElement = *Dst;
  for (Index = 0; Index < ArraySize; Index ++) {
    Status = GenTPMsingleMeasurement_Array_ElementCs(Cs, TempJsonObj, Index, &ThisElement->ArrayValue);
    if (Status != RedfishCS_status_success){
      goto Error;
    }
    ThisElement = ThisElement->Next;
  }
Error:;
  return Status;
}
//
//Generate C structure for MeasurementSet
//
static RedfishCS_status GenTPMmeasurementSetCs(RedfishComponentIntegrity_V1_0_0_ComponentIntegrity_CS *Cs, json_t *JsonObj, char *Key, RedfishComponentIntegrity_V1_0_0_TPMmeasurementSet_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishComponentIntegrity_V1_0_0_TPMmeasurementSet_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // Measurements
  Status = GenTPMsingleMeasurement_ArrayCs (Cs, TempJsonObj, "Measurements", &(*Dst)->Measurements);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
//
//Generate C structure for TPM
//
static RedfishCS_status GenTPMinfoCs(RedfishComponentIntegrity_V1_0_0_ComponentIntegrity_CS *Cs, json_t *JsonObj, char *Key, RedfishComponentIntegrity_V1_0_0_TPMinfo_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishComponentIntegrity_V1_0_0_TPMinfo_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // ComponentCommunication
  Status = GenTPMcommunicationCs (Cs, TempJsonObj, "ComponentCommunication", &(*Dst)->ComponentCommunication);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // IdentityAuthentication
  Status = GenTPMauthCs (Cs, TempJsonObj, "IdentityAuthentication", &(*Dst)->IdentityAuthentication);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // MeasurementSet
  Status = GenTPMmeasurementSetCs (Cs, TempJsonObj, "MeasurementSet", &(*Dst)->MeasurementSet);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
static RedfishCS_status CS_To_JSON_ActionsComponentIntegrity_SPDMGetSignedMeasurements(json_t *CsJson, char *Key, RedfishComponentIntegrity_V1_0_0_SPDMGetSignedMeasurements_CS *CSPtr)
{
  json_t *CsParentJson;

  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }

  CsParentJson = CsJson;
  CsJson = json_object();
  if (CsJson == NULL) {
    return RedfishCS_status_unsupported;
  }

  // target 
  if (InsertJsonStringObj (CsJson, "target", CSPtr->target) != RedfishCS_status_success) {goto Error;}

  // title 
  if (InsertJsonStringObj (CsJson, "title", CSPtr->title) != RedfishCS_status_success) {goto Error;}

  // Set to parent JSON object.
  if (json_object_set_new (CsParentJson, Key, CsJson) == -1) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_ActionsOem(json_t *CsJson, char *Key, RedfishComponentIntegrity_V1_0_0_OemActions_CS *CSPtr)
{
  json_t *CsParentJson;

  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }

  CsParentJson = CsJson;
  CsJson = json_object();
  if (CsJson == NULL) {
    return RedfishCS_status_unsupported;
  }

  // Check if this is RedfishCS_Type_CS_EmptyProp.
  CsEmptyPropLinkToJson(CsJson, Key, &CSPtr->Prop);
  // No JSON property for this structure.
  return RedfishCS_status_success;
}
static RedfishCS_status CS_To_JSON_Actions(json_t *CsJson, char *Key, RedfishComponentIntegrity_V1_0_0_Actions_CS *CSPtr)
{
  json_t *CsParentJson;

  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }

  CsParentJson = CsJson;
  CsJson = json_object();
  if (CsJson == NULL) {
    return RedfishCS_status_unsupported;
  }

  // #ComponentIntegrity.SPDMGetSignedMeasurements
  if (CS_To_JSON_ActionsComponentIntegrity_SPDMGetSignedMeasurements(CsJson, "#ComponentIntegrity.SPDMGetSignedMeasurements", CSPtr->ComponentIntegrity_SPDMGetSignedMeasurements) != RedfishCS_status_success) {goto Error;}

  // Oem
  if (CS_To_JSON_ActionsOem(CsJson, "Oem", CSPtr->Oem) != RedfishCS_status_success) {goto Error;}

  // Set to parent JSON object.
  if (json_object_set_new (CsParentJson, Key, CsJson) == -1) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_LinksComponentsProtected(json_t *CsJson, char *Key, Redfishodatav4_idRef_Array_CS *CSPtr)
{
  json_t *ArrayJson;
  json_t *ArrayMember;
  Redfishodatav4_idRef_Array_CS *NextArray;
  Redfishodatav4_idRef_CS *NextArrayItem;

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
    // @odata.id 
    if (InsertJsonStringObj (ArrayMember, "@odata.id", NextArrayItem->odata_id) != RedfishCS_status_success) {goto Error;}

    if (json_array_append_new (ArrayJson, ArrayMember) != 0) {goto Error;}
    NextArray = NextArray->Next;
  } while (NextArray != NULL);
  json_object_set_new (CsJson, Key, ArrayJson);

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_LinksOem(json_t *CsJson, char *Key, RedfishResource_Oem_CS *CSPtr)
{
  json_t *CsParentJson;

  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }

  CsParentJson = CsJson;
  CsJson = json_object();
  if (CsJson == NULL) {
    return RedfishCS_status_unsupported;
  }

  // Check if this is RedfishCS_Type_CS_EmptyProp.
  CsEmptyPropLinkToJson(CsJson, Key, &CSPtr->Prop);
  // No JSON property for this structure.
  return RedfishCS_status_success;
}
static RedfishCS_status CS_To_JSON_Links(json_t *CsJson, char *Key, RedfishComponentIntegrity_V1_0_0_Links_CS *CSPtr)
{
  json_t *CsParentJson;

  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }

  CsParentJson = CsJson;
  CsJson = json_object();
  if (CsJson == NULL) {
    return RedfishCS_status_unsupported;
  }

  // ComponentsProtected
  if (CS_To_JSON_LinksComponentsProtected(CsJson, "ComponentsProtected", CSPtr->ComponentsProtected) != RedfishCS_status_success) {goto Error;}

  // ComponentsProtected@odata.count 
  if (InsertJsonInt64Obj (CsJson, "ComponentsProtected@odata.count", CSPtr->ComponentsProtectedodata_count) != RedfishCS_status_success) {goto Error;}

  // Oem
  if (CS_To_JSON_LinksOem(CsJson, "Oem", CSPtr->Oem) != RedfishCS_status_success) {goto Error;}

  // Set to parent JSON object.
  if (json_object_set_new (CsParentJson, Key, CsJson) == -1) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_Oem(json_t *CsJson, char *Key, RedfishResource_Oem_CS *CSPtr)
{
  json_t *CsParentJson;

  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }

  CsParentJson = CsJson;
  CsJson = json_object();
  if (CsJson == NULL) {
    return RedfishCS_status_unsupported;
  }

  // Check if this is RedfishCS_Type_CS_EmptyProp.
  CsEmptyPropLinkToJson(CsJson, Key, &CSPtr->Prop);
  // No JSON property for this structure.
  return RedfishCS_status_success;
}
static RedfishCS_status CS_To_JSON_SPDMComponentCommunicationSessions(json_t *CsJson, char *Key, RedfishComponentIntegrity_V1_0_0_SingleSessionInfo_Array_CS *CSPtr)
{
  json_t *ArrayJson;
  json_t *ArrayMember;
  RedfishComponentIntegrity_V1_0_0_SingleSessionInfo_Array_CS *NextArray;
  RedfishComponentIntegrity_V1_0_0_SingleSessionInfo_CS *NextArrayItem;

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
    // SessionId 
    if (InsertJsonInt64Obj (ArrayMember, "SessionId", NextArrayItem->SessionId) != RedfishCS_status_success) {goto Error;}

    // SessionType 
    if (InsertJsonStringObj (ArrayMember, "SessionType", NextArrayItem->SessionType) != RedfishCS_status_success) {goto Error;}

    if (json_array_append_new (ArrayJson, ArrayMember) != 0) {goto Error;}
    NextArray = NextArray->Next;
  } while (NextArray != NULL);
  json_object_set_new (CsJson, Key, ArrayJson);

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_SPDMComponentCommunication(json_t *CsJson, char *Key, RedfishComponentIntegrity_V1_0_0_SPDMcommunication_CS *CSPtr)
{
  json_t *CsParentJson;

  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }

  CsParentJson = CsJson;
  CsJson = json_object();
  if (CsJson == NULL) {
    return RedfishCS_status_unsupported;
  }

  // Sessions
  if (CS_To_JSON_SPDMComponentCommunicationSessions(CsJson, "Sessions", CSPtr->Sessions) != RedfishCS_status_success) {goto Error;}

  // Set to parent JSON object.
  if (json_object_set_new (CsParentJson, Key, CsJson) == -1) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_SPDMIdentityAuthenticationRequesterAuthentication(json_t *CsJson, char *Key, RedfishComponentIntegrity_V1_0_0_SPDMrequesterAuth_CS *CSPtr)
{
  json_t *CsParentJson;

  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }

  CsParentJson = CsJson;
  CsJson = json_object();
  if (CsJson == NULL) {
    return RedfishCS_status_unsupported;
  }

  // ProvidedCertificate 
  if (InsertJsonLinkObj (CsJson, "ProvidedCertificate", &CSPtr->ProvidedCertificate) != RedfishCS_status_success) {goto Error;}

  // Set to parent JSON object.
  if (json_object_set_new (CsParentJson, Key, CsJson) == -1) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_SPDMIdentityAuthenticationResponderAuthentication(json_t *CsJson, char *Key, RedfishComponentIntegrity_V1_0_0_SPDMresponderAuth_CS *CSPtr)
{
  json_t *CsParentJson;

  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }

  CsParentJson = CsJson;
  CsJson = json_object();
  if (CsJson == NULL) {
    return RedfishCS_status_unsupported;
  }

  // ComponentCertificate 
  if (InsertJsonLinkObj (CsJson, "ComponentCertificate", &CSPtr->ComponentCertificate) != RedfishCS_status_success) {goto Error;}

  // VerificationStatus 
  if (InsertJsonStringObj (CsJson, "VerificationStatus", CSPtr->VerificationStatus) != RedfishCS_status_success) {goto Error;}

  // Set to parent JSON object.
  if (json_object_set_new (CsParentJson, Key, CsJson) == -1) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_SPDMIdentityAuthentication(json_t *CsJson, char *Key, RedfishComponentIntegrity_V1_0_0_SPDMidentity_CS *CSPtr)
{
  json_t *CsParentJson;

  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }

  CsParentJson = CsJson;
  CsJson = json_object();
  if (CsJson == NULL) {
    return RedfishCS_status_unsupported;
  }

  // RequesterAuthentication
  if (CS_To_JSON_SPDMIdentityAuthenticationRequesterAuthentication(CsJson, "RequesterAuthentication", CSPtr->RequesterAuthentication) != RedfishCS_status_success) {goto Error;}

  // ResponderAuthentication
  if (CS_To_JSON_SPDMIdentityAuthenticationResponderAuthentication(CsJson, "ResponderAuthentication", CSPtr->ResponderAuthentication) != RedfishCS_status_success) {goto Error;}

  // Set to parent JSON object.
  if (json_object_set_new (CsParentJson, Key, CsJson) == -1) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_SPDMMeasurementSetMeasurementsOem(json_t *CsJson, char *Key, RedfishResource_Oem_CS *CSPtr)
{
  json_t *CsParentJson;

  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }

  CsParentJson = CsJson;
  CsJson = json_object();
  if (CsJson == NULL) {
    return RedfishCS_status_unsupported;
  }

  // Check if this is RedfishCS_Type_CS_EmptyProp.
  CsEmptyPropLinkToJson(CsJson, Key, &CSPtr->Prop);
  // No JSON property for this structure.
  return RedfishCS_status_success;
}
static RedfishCS_status CS_To_JSON_SPDMMeasurementSetMeasurements(json_t *CsJson, char *Key, RedfishComponentIntegrity_V1_0_0_SPDMsingleMeasurement_Array_CS *CSPtr)
{
  json_t *ArrayJson;
  json_t *ArrayMember;
  RedfishComponentIntegrity_V1_0_0_SPDMsingleMeasurement_Array_CS *NextArray;
  RedfishComponentIntegrity_V1_0_0_SPDMsingleMeasurement_CS *NextArrayItem;

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
    // LastUpdated 
    if (InsertJsonStringObj (ArrayMember, "LastUpdated", NextArrayItem->LastUpdated) != RedfishCS_status_success) {goto Error;}

    // Measurement 
    if (InsertJsonStringObj (ArrayMember, "Measurement", NextArrayItem->Measurement) != RedfishCS_status_success) {goto Error;}

    // MeasurementHashAlgorithm 
    if (InsertJsonStringObj (ArrayMember, "MeasurementHashAlgorithm", NextArrayItem->MeasurementHashAlgorithm) != RedfishCS_status_success) {goto Error;}

    // MeasurementIndex 
    if (InsertJsonInt64Obj (ArrayMember, "MeasurementIndex", NextArrayItem->MeasurementIndex) != RedfishCS_status_success) {goto Error;}

    // MeasurementType 
    if (InsertJsonStringObj (ArrayMember, "MeasurementType", NextArrayItem->MeasurementType) != RedfishCS_status_success) {goto Error;}

    // Oem
    if (CS_To_JSON_SPDMMeasurementSetMeasurementsOem(ArrayMember, "Oem", NextArrayItem->Oem) != RedfishCS_status_success) {goto Error;}

    // PartofSummaryHash 
    if (InsertJsonBoolObj (ArrayMember, "PartofSummaryHash", NextArrayItem->PartofSummaryHash) != RedfishCS_status_success) {goto Error;}

    if (json_array_append_new (ArrayJson, ArrayMember) != 0) {goto Error;}
    NextArray = NextArray->Next;
  } while (NextArray != NULL);
  json_object_set_new (CsJson, Key, ArrayJson);

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_SPDMMeasurementSetOem(json_t *CsJson, char *Key, RedfishResource_Oem_CS *CSPtr)
{
  json_t *CsParentJson;

  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }

  CsParentJson = CsJson;
  CsJson = json_object();
  if (CsJson == NULL) {
    return RedfishCS_status_unsupported;
  }

  // Check if this is RedfishCS_Type_CS_EmptyProp.
  CsEmptyPropLinkToJson(CsJson, Key, &CSPtr->Prop);
  // No JSON property for this structure.
  return RedfishCS_status_success;
}
static RedfishCS_status CS_To_JSON_SPDMMeasurementSet(json_t *CsJson, char *Key, RedfishComponentIntegrity_V1_0_0_SPDMmeasurementSet_CS *CSPtr)
{
  json_t *CsParentJson;

  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }

  CsParentJson = CsJson;
  CsJson = json_object();
  if (CsJson == NULL) {
    return RedfishCS_status_unsupported;
  }

  // MeasurementSpecification 
  if (InsertJsonStringObj (CsJson, "MeasurementSpecification", CSPtr->MeasurementSpecification) != RedfishCS_status_success) {goto Error;}

  // MeasurementSummary 
  if (InsertJsonStringObj (CsJson, "MeasurementSummary", CSPtr->MeasurementSummary) != RedfishCS_status_success) {goto Error;}

  // MeasurementSummaryHashAlgorithm 
  if (InsertJsonStringObj (CsJson, "MeasurementSummaryHashAlgorithm", CSPtr->MeasurementSummaryHashAlgorithm) != RedfishCS_status_success) {goto Error;}

  // MeasurementSummaryType 
  if (InsertJsonStringObj (CsJson, "MeasurementSummaryType", CSPtr->MeasurementSummaryType) != RedfishCS_status_success) {goto Error;}

  // Measurements
  if (CS_To_JSON_SPDMMeasurementSetMeasurements(CsJson, "Measurements", CSPtr->Measurements) != RedfishCS_status_success) {goto Error;}

  // Oem
  if (CS_To_JSON_SPDMMeasurementSetOem(CsJson, "Oem", CSPtr->Oem) != RedfishCS_status_success) {goto Error;}

  // Set to parent JSON object.
  if (json_object_set_new (CsParentJson, Key, CsJson) == -1) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_SPDMRequester(json_t *CsJson, char *Key, Redfishodatav4_idRef_CS *CSPtr)
{
  json_t *CsParentJson;

  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }

  CsParentJson = CsJson;
  CsJson = json_object();
  if (CsJson == NULL) {
    return RedfishCS_status_unsupported;
  }

  // @odata.id 
  if (InsertJsonStringObj (CsJson, "@odata.id", CSPtr->odata_id) != RedfishCS_status_success) {goto Error;}

  // Set to parent JSON object.
  if (json_object_set_new (CsParentJson, Key, CsJson) == -1) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_SPDM(json_t *CsJson, char *Key, RedfishComponentIntegrity_V1_0_0_SPDMinfo_CS *CSPtr)
{
  json_t *CsParentJson;

  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }

  CsParentJson = CsJson;
  CsJson = json_object();
  if (CsJson == NULL) {
    return RedfishCS_status_unsupported;
  }

  // ComponentCommunication
  if (CS_To_JSON_SPDMComponentCommunication(CsJson, "ComponentCommunication", CSPtr->ComponentCommunication) != RedfishCS_status_success) {goto Error;}

  // IdentityAuthentication
  if (CS_To_JSON_SPDMIdentityAuthentication(CsJson, "IdentityAuthentication", CSPtr->IdentityAuthentication) != RedfishCS_status_success) {goto Error;}

  // MeasurementSet
  if (CS_To_JSON_SPDMMeasurementSet(CsJson, "MeasurementSet", CSPtr->MeasurementSet) != RedfishCS_status_success) {goto Error;}

  // Requester
  if (CS_To_JSON_SPDMRequester(CsJson, "Requester", CSPtr->Requester) != RedfishCS_status_success) {goto Error;}

  // Set to parent JSON object.
  if (json_object_set_new (CsParentJson, Key, CsJson) == -1) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_StatusConditionsOriginOfCondition(json_t *CsJson, char *Key, Redfishodatav4_idRef_CS *CSPtr)
{
  json_t *CsParentJson;

  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }

  CsParentJson = CsJson;
  CsJson = json_object();
  if (CsJson == NULL) {
    return RedfishCS_status_unsupported;
  }

  // @odata.id 
  if (InsertJsonStringObj (CsJson, "@odata.id", CSPtr->odata_id) != RedfishCS_status_success) {goto Error;}

  // Set to parent JSON object.
  if (json_object_set_new (CsParentJson, Key, CsJson) == -1) {goto Error;}

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

    // Resolution 
    if (InsertJsonStringObj (ArrayMember, "Resolution", NextArrayItem->Resolution) != RedfishCS_status_success) {goto Error;}

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
  json_t *CsParentJson;

  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }

  CsParentJson = CsJson;
  CsJson = json_object();
  if (CsJson == NULL) {
    return RedfishCS_status_unsupported;
  }

  // Check if this is RedfishCS_Type_CS_EmptyProp.
  CsEmptyPropLinkToJson(CsJson, Key, &CSPtr->Prop);
  // No JSON property for this structure.
  return RedfishCS_status_success;
}
static RedfishCS_status CS_To_JSON_Status(json_t *CsJson, char *Key, RedfishResource_Status_CS *CSPtr)
{
  json_t *CsParentJson;

  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }

  CsParentJson = CsJson;
  CsJson = json_object();
  if (CsJson == NULL) {
    return RedfishCS_status_unsupported;
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

  // Set to parent JSON object.
  if (json_object_set_new (CsParentJson, Key, CsJson) == -1) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_TPMComponentCommunicationSessions(json_t *CsJson, char *Key, RedfishComponentIntegrity_V1_0_0_SingleSessionInfo_Array_CS *CSPtr)
{
  json_t *ArrayJson;
  json_t *ArrayMember;
  RedfishComponentIntegrity_V1_0_0_SingleSessionInfo_Array_CS *NextArray;
  RedfishComponentIntegrity_V1_0_0_SingleSessionInfo_CS *NextArrayItem;

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
    // SessionId 
    if (InsertJsonInt64Obj (ArrayMember, "SessionId", NextArrayItem->SessionId) != RedfishCS_status_success) {goto Error;}

    // SessionType 
    if (InsertJsonStringObj (ArrayMember, "SessionType", NextArrayItem->SessionType) != RedfishCS_status_success) {goto Error;}

    if (json_array_append_new (ArrayJson, ArrayMember) != 0) {goto Error;}
    NextArray = NextArray->Next;
  } while (NextArray != NULL);
  json_object_set_new (CsJson, Key, ArrayJson);

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_TPMComponentCommunication(json_t *CsJson, char *Key, RedfishComponentIntegrity_V1_0_0_TPMcommunication_CS *CSPtr)
{
  json_t *CsParentJson;

  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }

  CsParentJson = CsJson;
  CsJson = json_object();
  if (CsJson == NULL) {
    return RedfishCS_status_unsupported;
  }

  // Sessions
  if (CS_To_JSON_TPMComponentCommunicationSessions(CsJson, "Sessions", CSPtr->Sessions) != RedfishCS_status_success) {goto Error;}

  // Set to parent JSON object.
  if (json_object_set_new (CsParentJson, Key, CsJson) == -1) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_TPMIdentityAuthentication(json_t *CsJson, char *Key, RedfishComponentIntegrity_V1_0_0_TPMauth_CS *CSPtr)
{
  json_t *CsParentJson;

  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }

  CsParentJson = CsJson;
  CsJson = json_object();
  if (CsJson == NULL) {
    return RedfishCS_status_unsupported;
  }

  // ComponentCertificate 
  if (InsertJsonLinkObj (CsJson, "ComponentCertificate", &CSPtr->ComponentCertificate) != RedfishCS_status_success) {goto Error;}

  // VerificationStatus 
  if (InsertJsonStringObj (CsJson, "VerificationStatus", CSPtr->VerificationStatus) != RedfishCS_status_success) {goto Error;}

  // Set to parent JSON object.
  if (json_object_set_new (CsParentJson, Key, CsJson) == -1) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_TPMMeasurementSetMeasurements(json_t *CsJson, char *Key, RedfishComponentIntegrity_V1_0_0_TPMsingleMeasurement_Array_CS *CSPtr)
{
  json_t *ArrayJson;
  json_t *ArrayMember;
  RedfishComponentIntegrity_V1_0_0_TPMsingleMeasurement_Array_CS *NextArray;
  RedfishComponentIntegrity_V1_0_0_TPMsingleMeasurement_CS *NextArrayItem;

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
    // LastUpdated 
    if (InsertJsonStringObj (ArrayMember, "LastUpdated", NextArrayItem->LastUpdated) != RedfishCS_status_success) {goto Error;}

    // Measurement 
    if (InsertJsonStringObj (ArrayMember, "Measurement", NextArrayItem->Measurement) != RedfishCS_status_success) {goto Error;}

    // MeasurementHashAlgorithm 
    if (InsertJsonStringObj (ArrayMember, "MeasurementHashAlgorithm", NextArrayItem->MeasurementHashAlgorithm) != RedfishCS_status_success) {goto Error;}

    // PCR 
    if (InsertJsonInt64Obj (ArrayMember, "PCR", NextArrayItem->PCR) != RedfishCS_status_success) {goto Error;}

    if (json_array_append_new (ArrayJson, ArrayMember) != 0) {goto Error;}
    NextArray = NextArray->Next;
  } while (NextArray != NULL);
  json_object_set_new (CsJson, Key, ArrayJson);

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_TPMMeasurementSet(json_t *CsJson, char *Key, RedfishComponentIntegrity_V1_0_0_TPMmeasurementSet_CS *CSPtr)
{
  json_t *CsParentJson;

  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }

  CsParentJson = CsJson;
  CsJson = json_object();
  if (CsJson == NULL) {
    return RedfishCS_status_unsupported;
  }

  // Measurements
  if (CS_To_JSON_TPMMeasurementSetMeasurements(CsJson, "Measurements", CSPtr->Measurements) != RedfishCS_status_success) {goto Error;}

  // Set to parent JSON object.
  if (json_object_set_new (CsParentJson, Key, CsJson) == -1) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_TPM(json_t *CsJson, char *Key, RedfishComponentIntegrity_V1_0_0_TPMinfo_CS *CSPtr)
{
  json_t *CsParentJson;

  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }

  CsParentJson = CsJson;
  CsJson = json_object();
  if (CsJson == NULL) {
    return RedfishCS_status_unsupported;
  }

  // ComponentCommunication
  if (CS_To_JSON_TPMComponentCommunication(CsJson, "ComponentCommunication", CSPtr->ComponentCommunication) != RedfishCS_status_success) {goto Error;}

  // IdentityAuthentication
  if (CS_To_JSON_TPMIdentityAuthentication(CsJson, "IdentityAuthentication", CSPtr->IdentityAuthentication) != RedfishCS_status_success) {goto Error;}

  // MeasurementSet
  if (CS_To_JSON_TPMMeasurementSet(CsJson, "MeasurementSet", CSPtr->MeasurementSet) != RedfishCS_status_success) {goto Error;}

  // Set to parent JSON object.
  if (json_object_set_new (CsParentJson, Key, CsJson) == -1) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}

//
// C structure to JSON for ComponentIntegrity.V1_0_0.ComponentIntegrity
//
RedfishCS_status CS_To_ComponentIntegrity_V1_0_0_JSON(RedfishComponentIntegrity_V1_0_0_ComponentIntegrity_CS *CSPtr, RedfishCS_char **JsonText)
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

  // ComponentIntegrityEnabled 
  if (InsertJsonBoolObj (CsJson, "ComponentIntegrityEnabled", CSPtr->ComponentIntegrityEnabled) != RedfishCS_status_success) {goto Error;}

  // ComponentIntegrityType 
  if (InsertJsonStringObj (CsJson, "ComponentIntegrityType", CSPtr->ComponentIntegrityType) != RedfishCS_status_success) {goto Error;}

  // ComponentIntegrityTypeVersion 
  if (InsertJsonStringObj (CsJson, "ComponentIntegrityTypeVersion", CSPtr->ComponentIntegrityTypeVersion) != RedfishCS_status_success) {goto Error;}

  // Description 
  if (InsertJsonStringObj (CsJson, "Description", CSPtr->Description) != RedfishCS_status_success) {goto Error;}

  // Id 
  if (InsertJsonStringObj (CsJson, "Id", CSPtr->Id) != RedfishCS_status_success) {goto Error;}

  // LastUpdated 
  if (InsertJsonStringObj (CsJson, "LastUpdated", CSPtr->LastUpdated) != RedfishCS_status_success) {goto Error;}

  // Links
  if (CS_To_JSON_Links(CsJson, "Links", CSPtr->Links) != RedfishCS_status_success) {goto Error;}

  // Name 
  if (InsertJsonStringObj (CsJson, "Name", CSPtr->Name) != RedfishCS_status_success) {goto Error;}

  // Oem
  if (CS_To_JSON_Oem(CsJson, "Oem", CSPtr->Oem) != RedfishCS_status_success) {goto Error;}

  // SPDM
  if (CS_To_JSON_SPDM(CsJson, "SPDM", CSPtr->SPDM) != RedfishCS_status_success) {goto Error;}

  // Status
  if (CS_To_JSON_Status(CsJson, "Status", CSPtr->Status) != RedfishCS_status_success) {goto Error;}

  // TPM
  if (CS_To_JSON_TPM(CsJson, "TPM", CSPtr->TPM) != RedfishCS_status_success) {goto Error;}

  // TargetComponentURI 
  if (InsertJsonStringObj (CsJson, "TargetComponentURI", CSPtr->TargetComponentURI) != RedfishCS_status_success) {goto Error;}

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
// Destory C Structure for ComponentIntegrity.V1_0_0.ComponentIntegrity
//
RedfishCS_status DestroyComponentIntegrity_V1_0_0_CS(RedfishComponentIntegrity_V1_0_0_ComponentIntegrity_CS *CSPtr)
{
  RedfishCS_status Status;

  Status = DestoryCsMemory ((RedfishCS_void *)CSPtr);
  return Status;
}

//
// Destory JSON text for ComponentIntegrity.V1_0_0.ComponentIntegrity
//
RedfishCS_status DestroyComponentIntegrity_V1_0_0_Json(RedfishCS_char *JsonText)
{
  free ((RedfishCS_void *)JsonText);
  return RedfishCS_status_success;
}

//
//Generate C structure for ComponentIntegrity.V1_0_0.ComponentIntegrity
//
RedfishCS_status
Json_ComponentIntegrity_V1_0_0_To_CS(RedfishCS_char *JsonRawText, RedfishComponentIntegrity_V1_0_0_ComponentIntegrity_CS **ReturnedCs)
{
  RedfishCS_status  Status;
  json_t *JsonObj;
  RedfishComponentIntegrity_V1_0_0_ComponentIntegrity_CS *Cs;

  Status = CreateJsonPayloadAndCs (JsonRawText, "ComponentIntegrity", "v1_0_0", "ComponentIntegrity", &JsonObj, (RedfishCS_void **)&Cs, sizeof (RedfishComponentIntegrity_V1_0_0_ComponentIntegrity_CS));
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

  // ComponentIntegrityEnabled
  Status = GetRedfishPropertyBoolean (Cs, JsonObj, "ComponentIntegrityEnabled", &Cs->ComponentIntegrityEnabled);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ComponentIntegrityType
  Status = GetRedfishPropertyStr (Cs, JsonObj, "ComponentIntegrityType", &Cs->ComponentIntegrityType);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){goto Error;}}

  // ComponentIntegrityTypeVersion
  Status = GetRedfishPropertyStr (Cs, JsonObj, "ComponentIntegrityTypeVersion", &Cs->ComponentIntegrityTypeVersion);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){goto Error;}}

  // Description
  Status = GetRedfishPropertyStr (Cs, JsonObj, "Description", &Cs->Description);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Id
  Status = GetRedfishPropertyStr (Cs, JsonObj, "Id", &Cs->Id);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){goto Error;}}

  // LastUpdated
  Status = GetRedfishPropertyStr (Cs, JsonObj, "LastUpdated", &Cs->LastUpdated);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Links
  Status = GenLinksCs (Cs, JsonObj, "Links", &Cs->Links);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Name
  Status = GetRedfishPropertyStr (Cs, JsonObj, "Name", &Cs->Name);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){goto Error;}}

  // Oem
  Status = GenOemCs (Cs, JsonObj, "Oem", &Cs->Oem);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // SPDM
  Status = GenSPDMinfoCs (Cs, JsonObj, "SPDM", &Cs->SPDM);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Status
  Status = GenStatusCs (Cs, JsonObj, "Status", &Cs->Status);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // TPM
  Status = GenTPMinfoCs (Cs, JsonObj, "TPM", &Cs->TPM);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // TargetComponentURI
  Status = GetRedfishPropertyStr (Cs, JsonObj, "TargetComponentURI", &Cs->TargetComponentURI);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){goto Error;}}

  json_decref(JsonObj);
  *ReturnedCs = Cs;
  return RedfishCS_status_success;
Error:;
  json_decref(JsonObj);
  DestroyComponentIntegrity_V1_0_0_CS (Cs);
  return Status;
}
