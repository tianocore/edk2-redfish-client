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

#include"Redfish_Volume_v1_6_0_CS.h"
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

static RedfishCS_status GenOemCs(RedfishVolume_V1_6_0_Volume_CS *Cs, json_t *JsonObj, char *Key, RedfishResource_Oem_CS **Dst);
static RedfishCS_status GenidRefCs(RedfishVolume_V1_6_0_Volume_CS *Cs, json_t *JsonObj, char *Key, Redfishodatav4_idRef_CS **Dst);
//
//Generate C structure for #Volume.AssignReplicaTarget
//
static RedfishCS_status GenAssignReplicaTargetCs(RedfishVolume_V1_6_0_Volume_CS *Cs, json_t *JsonObj, char *Key, RedfishVolume_V1_6_0_AssignReplicaTarget_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishVolume_V1_6_0_AssignReplicaTarget_CS), (RedfishCS_void **)Dst);
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
//Generate C structure for #Volume.ChangeRAIDLayout
//
static RedfishCS_status GenChangeRAIDLayoutCs(RedfishVolume_V1_6_0_Volume_CS *Cs, json_t *JsonObj, char *Key, RedfishVolume_V1_6_0_ChangeRAIDLayout_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishVolume_V1_6_0_ChangeRAIDLayout_CS), (RedfishCS_void **)Dst);
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
//Generate C structure for #Volume.CheckConsistency
//
static RedfishCS_status GenCheckConsistencyCs(RedfishVolume_V1_6_0_Volume_CS *Cs, json_t *JsonObj, char *Key, RedfishVolume_V1_6_0_CheckConsistency_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishVolume_V1_6_0_CheckConsistency_CS), (RedfishCS_void **)Dst);
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
//Generate C structure for #Volume.CreateReplicaTarget
//
static RedfishCS_status GenCreateReplicaTargetCs(RedfishVolume_V1_6_0_Volume_CS *Cs, json_t *JsonObj, char *Key, RedfishVolume_V1_6_0_CreateReplicaTarget_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishVolume_V1_6_0_CreateReplicaTarget_CS), (RedfishCS_void **)Dst);
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
//Generate C structure for #Volume.ForceEnable
//
static RedfishCS_status GenForceEnableCs(RedfishVolume_V1_6_0_Volume_CS *Cs, json_t *JsonObj, char *Key, RedfishVolume_V1_6_0_ForceEnable_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishVolume_V1_6_0_ForceEnable_CS), (RedfishCS_void **)Dst);
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
//Generate C structure for #Volume.Initialize
//
static RedfishCS_status GenInitializeCs(RedfishVolume_V1_6_0_Volume_CS *Cs, json_t *JsonObj, char *Key, RedfishVolume_V1_6_0_Initialize_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishVolume_V1_6_0_Initialize_CS), (RedfishCS_void **)Dst);
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
//Generate C structure for #Volume.RemoveReplicaRelationship
//
static RedfishCS_status GenRemoveReplicaRelationshipCs(RedfishVolume_V1_6_0_Volume_CS *Cs, json_t *JsonObj, char *Key, RedfishVolume_V1_6_0_RemoveReplicaRelationship_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishVolume_V1_6_0_RemoveReplicaRelationship_CS), (RedfishCS_void **)Dst);
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
//Generate C structure for #Volume.ResumeReplication
//
static RedfishCS_status GenResumeReplicationCs(RedfishVolume_V1_6_0_Volume_CS *Cs, json_t *JsonObj, char *Key, RedfishVolume_V1_6_0_ResumeReplication_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishVolume_V1_6_0_ResumeReplication_CS), (RedfishCS_void **)Dst);
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
//Generate C structure for #Volume.ReverseReplicationRelationship
//
static RedfishCS_status GenReverseReplicationRelationshipCs(RedfishVolume_V1_6_0_Volume_CS *Cs, json_t *JsonObj, char *Key, RedfishVolume_V1_6_0_ReverseReplicationRelationship_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishVolume_V1_6_0_ReverseReplicationRelationship_CS), (RedfishCS_void **)Dst);
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
//Generate C structure for #Volume.SplitReplication
//
static RedfishCS_status GenSplitReplicationCs(RedfishVolume_V1_6_0_Volume_CS *Cs, json_t *JsonObj, char *Key, RedfishVolume_V1_6_0_SplitReplication_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishVolume_V1_6_0_SplitReplication_CS), (RedfishCS_void **)Dst);
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
//Generate C structure for #Volume.SuspendReplication
//
static RedfishCS_status GenSuspendReplicationCs(RedfishVolume_V1_6_0_Volume_CS *Cs, json_t *JsonObj, char *Key, RedfishVolume_V1_6_0_SuspendReplication_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishVolume_V1_6_0_SuspendReplication_CS), (RedfishCS_void **)Dst);
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
static RedfishCS_status GenOemActionsCs(RedfishVolume_V1_6_0_Volume_CS *Cs, json_t *JsonObj, char *Key, RedfishVolume_V1_6_0_OemActions_CS **Dst)
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
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishVolume_V1_6_0_OemActions_CS), (RedfishCS_void **)Dst);
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
static RedfishCS_status GenActionsCs(RedfishVolume_V1_6_0_Volume_CS *Cs, json_t *JsonObj, char *Key, RedfishVolume_V1_6_0_Actions_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishVolume_V1_6_0_Actions_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // #Volume.AssignReplicaTarget
  Status = GenAssignReplicaTargetCs (Cs, TempJsonObj, "#Volume.AssignReplicaTarget", &(*Dst)->Volume_AssignReplicaTarget);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // #Volume.ChangeRAIDLayout
  Status = GenChangeRAIDLayoutCs (Cs, TempJsonObj, "#Volume.ChangeRAIDLayout", &(*Dst)->Volume_ChangeRAIDLayout);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // #Volume.CheckConsistency
  Status = GenCheckConsistencyCs (Cs, TempJsonObj, "#Volume.CheckConsistency", &(*Dst)->Volume_CheckConsistency);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // #Volume.CreateReplicaTarget
  Status = GenCreateReplicaTargetCs (Cs, TempJsonObj, "#Volume.CreateReplicaTarget", &(*Dst)->Volume_CreateReplicaTarget);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // #Volume.ForceEnable
  Status = GenForceEnableCs (Cs, TempJsonObj, "#Volume.ForceEnable", &(*Dst)->Volume_ForceEnable);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // #Volume.Initialize
  Status = GenInitializeCs (Cs, TempJsonObj, "#Volume.Initialize", &(*Dst)->Volume_Initialize);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // #Volume.RemoveReplicaRelationship
  Status = GenRemoveReplicaRelationshipCs (Cs, TempJsonObj, "#Volume.RemoveReplicaRelationship", &(*Dst)->Volume_RemoveReplicaRelationship);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // #Volume.ResumeReplication
  Status = GenResumeReplicationCs (Cs, TempJsonObj, "#Volume.ResumeReplication", &(*Dst)->Volume_ResumeReplication);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // #Volume.ReverseReplicationRelationship
  Status = GenReverseReplicationRelationshipCs (Cs, TempJsonObj, "#Volume.ReverseReplicationRelationship", &(*Dst)->Volume_ReverseReplicationRelationship);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // #Volume.SplitReplication
  Status = GenSplitReplicationCs (Cs, TempJsonObj, "#Volume.SplitReplication", &(*Dst)->Volume_SplitReplication);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // #Volume.SuspendReplication
  Status = GenSuspendReplicationCs (Cs, TempJsonObj, "#Volume.SuspendReplication", &(*Dst)->Volume_SuspendReplication);
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
//Generate C structure for Oem
//
static RedfishCS_status GenOemCs(RedfishVolume_V1_6_0_Volume_CS *Cs, json_t *JsonObj, char *Key, RedfishResource_Oem_CS **Dst)
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
static RedfishCS_status GenLinksCs(RedfishVolume_V1_6_0_Volume_CS *Cs, json_t *JsonObj, char *Key, RedfishVolume_V1_6_0_Links_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishVolume_V1_6_0_Links_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // CacheDataVolumes
  InitializeLinkHead (&(*Dst)->CacheDataVolumes);
  Status = CreateCsUriOrJsonByNode (Cs, TempJsonObj, "CacheDataVolumes", Cs->Header.ThisUri, &(*Dst)->CacheDataVolumes);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // CacheDataVolumes@odata.count
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "CacheDataVolumes@odata.count", &(*Dst)->CacheDataVolumesodata_count);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // CacheVolumeSource
  InitializeLinkHead (&(*Dst)->CacheVolumeSource);
  Status = CreateCsUriOrJsonByNode (Cs, TempJsonObj, "CacheVolumeSource", Cs->Header.ThisUri, &(*Dst)->CacheVolumeSource);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ClassOfService
  InitializeLinkHead (&(*Dst)->ClassOfService);
  Status = CreateCsUriOrJsonByNode (Cs, TempJsonObj, "ClassOfService", Cs->Header.ThisUri, &(*Dst)->ClassOfService);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ClientEndpoints
  InitializeLinkHead (&(*Dst)->ClientEndpoints);
  Status = CreateCsUriOrJsonByNodeArray (Cs, TempJsonObj, "ClientEndpoints", Cs->Header.ThisUri, &(*Dst)->ClientEndpoints);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ClientEndpoints@odata.count
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "ClientEndpoints@odata.count", &(*Dst)->ClientEndpointsodata_count);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ConsistencyGroups
  InitializeLinkHead (&(*Dst)->ConsistencyGroups);
  Status = CreateCsUriOrJsonByNodeArray (Cs, TempJsonObj, "ConsistencyGroups", Cs->Header.ThisUri, &(*Dst)->ConsistencyGroups);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ConsistencyGroups@odata.count
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "ConsistencyGroups@odata.count", &(*Dst)->ConsistencyGroupsodata_count);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // DedicatedSpareDrives
  InitializeLinkHead (&(*Dst)->DedicatedSpareDrives);
  Status = CreateCsUriOrJsonByNodeArray (Cs, TempJsonObj, "DedicatedSpareDrives", Cs->Header.ThisUri, &(*Dst)->DedicatedSpareDrives);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // DedicatedSpareDrives@odata.count
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "DedicatedSpareDrives@odata.count", &(*Dst)->DedicatedSpareDrivesodata_count);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Drives
  InitializeLinkHead (&(*Dst)->Drives);
  Status = CreateCsUriOrJsonByNodeArray (Cs, TempJsonObj, "Drives", Cs->Header.ThisUri, &(*Dst)->Drives);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Drives@odata.count
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "Drives@odata.count", &(*Dst)->Drivesodata_count);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // JournalingMedia
  InitializeLinkHead (&(*Dst)->JournalingMedia);
  Status = CreateCsUriOrJsonByNode (Cs, TempJsonObj, "JournalingMedia", Cs->Header.ThisUri, &(*Dst)->JournalingMedia);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Oem
  Status = GenOemCs (Cs, TempJsonObj, "Oem", &(*Dst)->Oem);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // OwningStorageResource
  InitializeLinkHead (&(*Dst)->OwningStorageResource);
  Status = CreateCsUriOrJsonByNode (Cs, TempJsonObj, "OwningStorageResource", Cs->Header.ThisUri, &(*Dst)->OwningStorageResource);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // OwningStorageService
  InitializeLinkHead (&(*Dst)->OwningStorageService);
  Status = CreateCsUriOrJsonByNode (Cs, TempJsonObj, "OwningStorageService", Cs->Header.ThisUri, &(*Dst)->OwningStorageService);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ServerEndpoints
  InitializeLinkHead (&(*Dst)->ServerEndpoints);
  Status = CreateCsUriOrJsonByNodeArray (Cs, TempJsonObj, "ServerEndpoints", Cs->Header.ThisUri, &(*Dst)->ServerEndpoints);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ServerEndpoints@odata.count
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "ServerEndpoints@odata.count", &(*Dst)->ServerEndpointsodata_count);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // SpareResourceSets
  InitializeLinkHead (&(*Dst)->SpareResourceSets);
  Status = CreateCsUriOrJsonByNodeArray (Cs, TempJsonObj, "SpareResourceSets", Cs->Header.ThisUri, &(*Dst)->SpareResourceSets);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // SpareResourceSets@odata.count
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "SpareResourceSets@odata.count", &(*Dst)->SpareResourceSetsodata_count);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // StorageGroups
  InitializeLinkHead (&(*Dst)->StorageGroups);
  Status = CreateCsUriOrJsonByNodeArray (Cs, TempJsonObj, "StorageGroups", Cs->Header.ThisUri, &(*Dst)->StorageGroups);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // StorageGroups@odata.count
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "StorageGroups@odata.count", &(*Dst)->StorageGroupsodata_count);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
//
//Generate C structure for NamespaceFeatures
//
static RedfishCS_status GenNamespaceFeaturesCs(RedfishVolume_V1_6_0_Volume_CS *Cs, json_t *JsonObj, char *Key, RedfishVolume_V1_6_0_NamespaceFeatures_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishVolume_V1_6_0_NamespaceFeatures_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // SupportsAtomicTransactionSize
  Status = GetRedfishPropertyBoolean (Cs, TempJsonObj, "SupportsAtomicTransactionSize", &(*Dst)->SupportsAtomicTransactionSize);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // SupportsDeallocatedOrUnwrittenLBError
  Status = GetRedfishPropertyBoolean (Cs, TempJsonObj, "SupportsDeallocatedOrUnwrittenLBError", &(*Dst)->SupportsDeallocatedOrUnwrittenLBError);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // SupportsIOPerformanceHints
  Status = GetRedfishPropertyBoolean (Cs, TempJsonObj, "SupportsIOPerformanceHints", &(*Dst)->SupportsIOPerformanceHints);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // SupportsNGUIDReuse
  Status = GetRedfishPropertyBoolean (Cs, TempJsonObj, "SupportsNGUIDReuse", &(*Dst)->SupportsNGUIDReuse);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // SupportsThinProvisioning
  Status = GetRedfishPropertyBoolean (Cs, TempJsonObj, "SupportsThinProvisioning", &(*Dst)->SupportsThinProvisioning);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
//
//Generate C structure for NVMeNamespaceProperties
//
static RedfishCS_status GenNVMeNamespacePropertiesCs(RedfishVolume_V1_6_0_Volume_CS *Cs, json_t *JsonObj, char *Key, RedfishVolume_V1_6_0_NVMeNamespaceProperties_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishVolume_V1_6_0_NVMeNamespaceProperties_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // FormattedLBASize
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "FormattedLBASize", &(*Dst)->FormattedLBASize);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // IsShareable
  Status = GetRedfishPropertyBoolean (Cs, TempJsonObj, "IsShareable", &(*Dst)->IsShareable);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // MetadataTransferredAtEndOfDataLBA
  Status = GetRedfishPropertyBoolean (Cs, TempJsonObj, "MetadataTransferredAtEndOfDataLBA", &(*Dst)->MetadataTransferredAtEndOfDataLBA);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // NVMeVersion
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "NVMeVersion", &(*Dst)->NVMeVersion);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // NamespaceFeatures
  Status = GenNamespaceFeaturesCs (Cs, TempJsonObj, "NamespaceFeatures", &(*Dst)->NamespaceFeatures);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // NamespaceId
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "NamespaceId", &(*Dst)->NamespaceId);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // NumberLBAFormats
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "NumberLBAFormats", &(*Dst)->NumberLBAFormats);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
//
//Generate C structure for Operations
//
static RedfishCS_status GenOperationCs(RedfishVolume_V1_6_0_Volume_CS *Cs, json_t *JsonObj, char *Key, RedfishVolume_V1_6_0_Operation_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishVolume_V1_6_0_Operation_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // AssociatedFeaturesRegistry
  InitializeLinkHead (&(*Dst)->AssociatedFeaturesRegistry);
  Status = CreateCsUriOrJsonByNode (Cs, TempJsonObj, "AssociatedFeaturesRegistry", Cs->Header.ThisUri, &(*Dst)->AssociatedFeaturesRegistry);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // OperationName
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "OperationName", &(*Dst)->OperationName);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // PercentageComplete
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "PercentageComplete", &(*Dst)->PercentageComplete);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
//
//Generate C structure for Replica
//
static RedfishCS_status GenidRefCs(RedfishVolume_V1_6_0_Volume_CS *Cs, json_t *JsonObj, char *Key, Redfishodatav4_idRef_CS **Dst)
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
//Generate C structure for ReplicaInfo
//
static RedfishCS_status GenReplicaInfoCs(RedfishVolume_V1_6_0_Volume_CS *Cs, json_t *JsonObj, char *Key, RedfishStorageReplicaInfo_V1_3_0_ReplicaInfo_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishStorageReplicaInfo_V1_3_0_ReplicaInfo_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // ConsistencyEnabled
  Status = GetRedfishPropertyBoolean (Cs, TempJsonObj, "ConsistencyEnabled", &(*Dst)->ConsistencyEnabled);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ConsistencyState
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "ConsistencyState", &(*Dst)->ConsistencyState);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ConsistencyStatus
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "ConsistencyStatus", &(*Dst)->ConsistencyStatus);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ConsistencyType
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "ConsistencyType", &(*Dst)->ConsistencyType);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // DataProtectionLineOfService
  InitializeLinkHead (&(*Dst)->DataProtectionLineOfService);
  Status = CreateCsUriOrJsonByNode (Cs, TempJsonObj, "DataProtectionLineOfService", Cs->Header.ThisUri, &(*Dst)->DataProtectionLineOfService);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // FailedCopyStopsHostIO
  Status = GetRedfishPropertyBoolean (Cs, TempJsonObj, "FailedCopyStopsHostIO", &(*Dst)->FailedCopyStopsHostIO);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // PercentSynced
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "PercentSynced", &(*Dst)->PercentSynced);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Replica
  Status = GenidRefCs (Cs, TempJsonObj, "Replica", &(*Dst)->Replica);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ReplicaFaultDomain
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "ReplicaFaultDomain", &(*Dst)->ReplicaFaultDomain);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ReplicaPriority
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "ReplicaPriority", &(*Dst)->ReplicaPriority);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ReplicaProgressStatus
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "ReplicaProgressStatus", &(*Dst)->ReplicaProgressStatus);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ReplicaReadOnlyAccess
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "ReplicaReadOnlyAccess", &(*Dst)->ReplicaReadOnlyAccess);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ReplicaRecoveryMode
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "ReplicaRecoveryMode", &(*Dst)->ReplicaRecoveryMode);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ReplicaRole
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "ReplicaRole", &(*Dst)->ReplicaRole);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ReplicaSkewBytes
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "ReplicaSkewBytes", &(*Dst)->ReplicaSkewBytes);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ReplicaState
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "ReplicaState", &(*Dst)->ReplicaState);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ReplicaType
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "ReplicaType", &(*Dst)->ReplicaType);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ReplicaUpdateMode
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "ReplicaUpdateMode", &(*Dst)->ReplicaUpdateMode);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // RequestedReplicaState
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "RequestedReplicaState", &(*Dst)->RequestedReplicaState);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // SourceReplica
  Status = GenidRefCs (Cs, TempJsonObj, "SourceReplica", &(*Dst)->SourceReplica);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // SyncMaintained
  Status = GetRedfishPropertyBoolean (Cs, TempJsonObj, "SyncMaintained", &(*Dst)->SyncMaintained);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // UndiscoveredElement
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "UndiscoveredElement", &(*Dst)->UndiscoveredElement);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // WhenActivated
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "WhenActivated", &(*Dst)->WhenActivated);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // WhenDeactivated
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "WhenDeactivated", &(*Dst)->WhenDeactivated);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // WhenEstablished
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "WhenEstablished", &(*Dst)->WhenEstablished);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // WhenSuspended
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "WhenSuspended", &(*Dst)->WhenSuspended);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // WhenSynced
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "WhenSynced", &(*Dst)->WhenSynced);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // WhenSynchronized
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "WhenSynchronized", &(*Dst)->WhenSynchronized);
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
static RedfishCS_status GenRedfishCS_char_ArrayCs(RedfishVolume_V1_6_0_Volume_CS *Cs, json_t *JsonObj, char *Key, RedfishCS_char_Array **Dst)
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
static RedfishCS_status GenCondition_Array_ElementCs(RedfishVolume_V1_6_0_Volume_CS *Cs, json_t *JsonObj, RedfishCS_uint64 Index,  RedfishResource_Condition_CS **Dst)
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
static RedfishCS_status GenCondition_ArrayCs(RedfishVolume_V1_6_0_Volume_CS *Cs, json_t *JsonObj, char *Key, RedfishResource_Condition_Array_CS **Dst)
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
static RedfishCS_status GenStatusCs(RedfishVolume_V1_6_0_Volume_CS *Cs, json_t *JsonObj, char *Key, RedfishResource_Status_CS **Dst)
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
static RedfishCS_status CS_To_JSON_ActionsOem(json_t *CsJson, char *Key, RedfishVolume_V1_6_0_OemActions_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // Check if this is RedfishCS_Type_CS_EmptyProp.
  CsEmptyPropLinkToJson(CsJson, Key, &CSPtr->Prop);
  // No JSON property for this structure.
  return RedfishCS_status_success;
}
static RedfishCS_status CS_To_JSON_ActionsVolume_AssignReplicaTarget(json_t *CsJson, char *Key, RedfishVolume_V1_6_0_AssignReplicaTarget_CS *CSPtr)
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
static RedfishCS_status CS_To_JSON_ActionsVolume_ChangeRAIDLayout(json_t *CsJson, char *Key, RedfishVolume_V1_6_0_ChangeRAIDLayout_CS *CSPtr)
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
static RedfishCS_status CS_To_JSON_ActionsVolume_CheckConsistency(json_t *CsJson, char *Key, RedfishVolume_V1_6_0_CheckConsistency_CS *CSPtr)
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
static RedfishCS_status CS_To_JSON_ActionsVolume_CreateReplicaTarget(json_t *CsJson, char *Key, RedfishVolume_V1_6_0_CreateReplicaTarget_CS *CSPtr)
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
static RedfishCS_status CS_To_JSON_ActionsVolume_ForceEnable(json_t *CsJson, char *Key, RedfishVolume_V1_6_0_ForceEnable_CS *CSPtr)
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
static RedfishCS_status CS_To_JSON_ActionsVolume_Initialize(json_t *CsJson, char *Key, RedfishVolume_V1_6_0_Initialize_CS *CSPtr)
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
static RedfishCS_status CS_To_JSON_ActionsVolume_RemoveReplicaRelationship(json_t *CsJson, char *Key, RedfishVolume_V1_6_0_RemoveReplicaRelationship_CS *CSPtr)
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
static RedfishCS_status CS_To_JSON_ActionsVolume_ResumeReplication(json_t *CsJson, char *Key, RedfishVolume_V1_6_0_ResumeReplication_CS *CSPtr)
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
static RedfishCS_status CS_To_JSON_ActionsVolume_ReverseReplicationRelationship(json_t *CsJson, char *Key, RedfishVolume_V1_6_0_ReverseReplicationRelationship_CS *CSPtr)
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
static RedfishCS_status CS_To_JSON_ActionsVolume_SplitReplication(json_t *CsJson, char *Key, RedfishVolume_V1_6_0_SplitReplication_CS *CSPtr)
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
static RedfishCS_status CS_To_JSON_ActionsVolume_SuspendReplication(json_t *CsJson, char *Key, RedfishVolume_V1_6_0_SuspendReplication_CS *CSPtr)
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
static RedfishCS_status CS_To_JSON_Actions(json_t *CsJson, char *Key, RedfishVolume_V1_6_0_Actions_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // Oem
  if (CS_To_JSON_ActionsOem(CsJson, "Oem", CSPtr->Oem) != RedfishCS_status_success) {goto Error;}

  // #Volume.AssignReplicaTarget
  if (CS_To_JSON_ActionsVolume_AssignReplicaTarget(CsJson, "#Volume.AssignReplicaTarget", CSPtr->Volume_AssignReplicaTarget) != RedfishCS_status_success) {goto Error;}

  // #Volume.ChangeRAIDLayout
  if (CS_To_JSON_ActionsVolume_ChangeRAIDLayout(CsJson, "#Volume.ChangeRAIDLayout", CSPtr->Volume_ChangeRAIDLayout) != RedfishCS_status_success) {goto Error;}

  // #Volume.CheckConsistency
  if (CS_To_JSON_ActionsVolume_CheckConsistency(CsJson, "#Volume.CheckConsistency", CSPtr->Volume_CheckConsistency) != RedfishCS_status_success) {goto Error;}

  // #Volume.CreateReplicaTarget
  if (CS_To_JSON_ActionsVolume_CreateReplicaTarget(CsJson, "#Volume.CreateReplicaTarget", CSPtr->Volume_CreateReplicaTarget) != RedfishCS_status_success) {goto Error;}

  // #Volume.ForceEnable
  if (CS_To_JSON_ActionsVolume_ForceEnable(CsJson, "#Volume.ForceEnable", CSPtr->Volume_ForceEnable) != RedfishCS_status_success) {goto Error;}

  // #Volume.Initialize
  if (CS_To_JSON_ActionsVolume_Initialize(CsJson, "#Volume.Initialize", CSPtr->Volume_Initialize) != RedfishCS_status_success) {goto Error;}

  // #Volume.RemoveReplicaRelationship
  if (CS_To_JSON_ActionsVolume_RemoveReplicaRelationship(CsJson, "#Volume.RemoveReplicaRelationship", CSPtr->Volume_RemoveReplicaRelationship) != RedfishCS_status_success) {goto Error;}

  // #Volume.ResumeReplication
  if (CS_To_JSON_ActionsVolume_ResumeReplication(CsJson, "#Volume.ResumeReplication", CSPtr->Volume_ResumeReplication) != RedfishCS_status_success) {goto Error;}

  // #Volume.ReverseReplicationRelationship
  if (CS_To_JSON_ActionsVolume_ReverseReplicationRelationship(CsJson, "#Volume.ReverseReplicationRelationship", CSPtr->Volume_ReverseReplicationRelationship) != RedfishCS_status_success) {goto Error;}

  // #Volume.SplitReplication
  if (CS_To_JSON_ActionsVolume_SplitReplication(CsJson, "#Volume.SplitReplication", CSPtr->Volume_SplitReplication) != RedfishCS_status_success) {goto Error;}

  // #Volume.SuspendReplication
  if (CS_To_JSON_ActionsVolume_SuspendReplication(CsJson, "#Volume.SuspendReplication", CSPtr->Volume_SuspendReplication) != RedfishCS_status_success) {goto Error;}

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
static RedfishCS_status CS_To_JSON_Links(json_t *CsJson, char *Key, RedfishVolume_V1_6_0_Links_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // CacheDataVolumes 
  if (InsertJsonLinkObj (CsJson, "CacheDataVolumes", &CSPtr->CacheDataVolumes) != RedfishCS_status_success) {goto Error;}

  // CacheDataVolumes@odata.count 
  if (InsertJsonInt64Obj (CsJson, "CacheDataVolumes@odata.count", CSPtr->CacheDataVolumesodata_count) != RedfishCS_status_success) {goto Error;}

  // CacheVolumeSource 
  if (InsertJsonLinkObj (CsJson, "CacheVolumeSource", &CSPtr->CacheVolumeSource) != RedfishCS_status_success) {goto Error;}

  // ClassOfService 
  if (InsertJsonLinkObj (CsJson, "ClassOfService", &CSPtr->ClassOfService) != RedfishCS_status_success) {goto Error;}

  // ClientEndpoints 
  if (InsertJsonLinkArrayObj (CsJson, "ClientEndpoints", &CSPtr->ClientEndpoints) != RedfishCS_status_success) {goto Error;}

  // ClientEndpoints@odata.count 
  if (InsertJsonInt64Obj (CsJson, "ClientEndpoints@odata.count", CSPtr->ClientEndpointsodata_count) != RedfishCS_status_success) {goto Error;}

  // ConsistencyGroups 
  if (InsertJsonLinkArrayObj (CsJson, "ConsistencyGroups", &CSPtr->ConsistencyGroups) != RedfishCS_status_success) {goto Error;}

  // ConsistencyGroups@odata.count 
  if (InsertJsonInt64Obj (CsJson, "ConsistencyGroups@odata.count", CSPtr->ConsistencyGroupsodata_count) != RedfishCS_status_success) {goto Error;}

  // DedicatedSpareDrives 
  if (InsertJsonLinkArrayObj (CsJson, "DedicatedSpareDrives", &CSPtr->DedicatedSpareDrives) != RedfishCS_status_success) {goto Error;}

  // DedicatedSpareDrives@odata.count 
  if (InsertJsonInt64Obj (CsJson, "DedicatedSpareDrives@odata.count", CSPtr->DedicatedSpareDrivesodata_count) != RedfishCS_status_success) {goto Error;}

  // Drives 
  if (InsertJsonLinkArrayObj (CsJson, "Drives", &CSPtr->Drives) != RedfishCS_status_success) {goto Error;}

  // Drives@odata.count 
  if (InsertJsonInt64Obj (CsJson, "Drives@odata.count", CSPtr->Drivesodata_count) != RedfishCS_status_success) {goto Error;}

  // JournalingMedia 
  if (InsertJsonLinkObj (CsJson, "JournalingMedia", &CSPtr->JournalingMedia) != RedfishCS_status_success) {goto Error;}

  // Oem
  if (CS_To_JSON_LinksOem(CsJson, "Oem", CSPtr->Oem) != RedfishCS_status_success) {goto Error;}

  // OwningStorageResource 
  if (InsertJsonLinkObj (CsJson, "OwningStorageResource", &CSPtr->OwningStorageResource) != RedfishCS_status_success) {goto Error;}

  // OwningStorageService 
  if (InsertJsonLinkObj (CsJson, "OwningStorageService", &CSPtr->OwningStorageService) != RedfishCS_status_success) {goto Error;}

  // ServerEndpoints 
  if (InsertJsonLinkArrayObj (CsJson, "ServerEndpoints", &CSPtr->ServerEndpoints) != RedfishCS_status_success) {goto Error;}

  // ServerEndpoints@odata.count 
  if (InsertJsonInt64Obj (CsJson, "ServerEndpoints@odata.count", CSPtr->ServerEndpointsodata_count) != RedfishCS_status_success) {goto Error;}

  // SpareResourceSets 
  if (InsertJsonLinkArrayObj (CsJson, "SpareResourceSets", &CSPtr->SpareResourceSets) != RedfishCS_status_success) {goto Error;}

  // SpareResourceSets@odata.count 
  if (InsertJsonInt64Obj (CsJson, "SpareResourceSets@odata.count", CSPtr->SpareResourceSetsodata_count) != RedfishCS_status_success) {goto Error;}

  // StorageGroups 
  if (InsertJsonLinkArrayObj (CsJson, "StorageGroups", &CSPtr->StorageGroups) != RedfishCS_status_success) {goto Error;}

  // StorageGroups@odata.count 
  if (InsertJsonInt64Obj (CsJson, "StorageGroups@odata.count", CSPtr->StorageGroupsodata_count) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_NVMeNamespacePropertiesNamespaceFeatures(json_t *CsJson, char *Key, RedfishVolume_V1_6_0_NamespaceFeatures_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // SupportsAtomicTransactionSize 
  if (InsertJsonBoolObj (CsJson, "SupportsAtomicTransactionSize", CSPtr->SupportsAtomicTransactionSize) != RedfishCS_status_success) {goto Error;}

  // SupportsDeallocatedOrUnwrittenLBError 
  if (InsertJsonBoolObj (CsJson, "SupportsDeallocatedOrUnwrittenLBError", CSPtr->SupportsDeallocatedOrUnwrittenLBError) != RedfishCS_status_success) {goto Error;}

  // SupportsIOPerformanceHints 
  if (InsertJsonBoolObj (CsJson, "SupportsIOPerformanceHints", CSPtr->SupportsIOPerformanceHints) != RedfishCS_status_success) {goto Error;}

  // SupportsNGUIDReuse 
  if (InsertJsonBoolObj (CsJson, "SupportsNGUIDReuse", CSPtr->SupportsNGUIDReuse) != RedfishCS_status_success) {goto Error;}

  // SupportsThinProvisioning 
  if (InsertJsonBoolObj (CsJson, "SupportsThinProvisioning", CSPtr->SupportsThinProvisioning) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_NVMeNamespaceProperties(json_t *CsJson, char *Key, RedfishVolume_V1_6_0_NVMeNamespaceProperties_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // FormattedLBASize 
  if (InsertJsonStringObj (CsJson, "FormattedLBASize", CSPtr->FormattedLBASize) != RedfishCS_status_success) {goto Error;}

  // IsShareable 
  if (InsertJsonBoolObj (CsJson, "IsShareable", CSPtr->IsShareable) != RedfishCS_status_success) {goto Error;}

  // MetadataTransferredAtEndOfDataLBA 
  if (InsertJsonBoolObj (CsJson, "MetadataTransferredAtEndOfDataLBA", CSPtr->MetadataTransferredAtEndOfDataLBA) != RedfishCS_status_success) {goto Error;}

  // NVMeVersion 
  if (InsertJsonStringObj (CsJson, "NVMeVersion", CSPtr->NVMeVersion) != RedfishCS_status_success) {goto Error;}

  // NamespaceFeatures
  if (CS_To_JSON_NVMeNamespacePropertiesNamespaceFeatures(CsJson, "NamespaceFeatures", CSPtr->NamespaceFeatures) != RedfishCS_status_success) {goto Error;}

  // NamespaceId 
  if (InsertJsonStringObj (CsJson, "NamespaceId", CSPtr->NamespaceId) != RedfishCS_status_success) {goto Error;}

  // NumberLBAFormats 
  if (InsertJsonInt64Obj (CsJson, "NumberLBAFormats", CSPtr->NumberLBAFormats) != RedfishCS_status_success) {goto Error;}

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
static RedfishCS_status CS_To_JSON_Operations(json_t *CsJson, char *Key, RedfishVolume_V1_6_0_Operation_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // AssociatedFeaturesRegistry 
  if (InsertJsonLinkObj (CsJson, "AssociatedFeaturesRegistry", &CSPtr->AssociatedFeaturesRegistry) != RedfishCS_status_success) {goto Error;}

  // OperationName 
  if (InsertJsonStringObj (CsJson, "OperationName", CSPtr->OperationName) != RedfishCS_status_success) {goto Error;}

  // PercentageComplete 
  if (InsertJsonInt64Obj (CsJson, "PercentageComplete", CSPtr->PercentageComplete) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_ReplicaInfoReplica(json_t *CsJson, char *Key, Redfishodatav4_idRef_CS *CSPtr)
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
static RedfishCS_status CS_To_JSON_ReplicaInfoSourceReplica(json_t *CsJson, char *Key, Redfishodatav4_idRef_CS *CSPtr)
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
static RedfishCS_status CS_To_JSON_ReplicaInfo(json_t *CsJson, char *Key, RedfishStorageReplicaInfo_V1_3_0_ReplicaInfo_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // ConsistencyEnabled 
  if (InsertJsonBoolObj (CsJson, "ConsistencyEnabled", CSPtr->ConsistencyEnabled) != RedfishCS_status_success) {goto Error;}

  // ConsistencyState 
  if (InsertJsonStringObj (CsJson, "ConsistencyState", CSPtr->ConsistencyState) != RedfishCS_status_success) {goto Error;}

  // ConsistencyStatus 
  if (InsertJsonStringObj (CsJson, "ConsistencyStatus", CSPtr->ConsistencyStatus) != RedfishCS_status_success) {goto Error;}

  // ConsistencyType 
  if (InsertJsonStringObj (CsJson, "ConsistencyType", CSPtr->ConsistencyType) != RedfishCS_status_success) {goto Error;}

  // DataProtectionLineOfService 
  if (InsertJsonLinkObj (CsJson, "DataProtectionLineOfService", &CSPtr->DataProtectionLineOfService) != RedfishCS_status_success) {goto Error;}

  // FailedCopyStopsHostIO 
  if (InsertJsonBoolObj (CsJson, "FailedCopyStopsHostIO", CSPtr->FailedCopyStopsHostIO) != RedfishCS_status_success) {goto Error;}

  // PercentSynced 
  if (InsertJsonInt64Obj (CsJson, "PercentSynced", CSPtr->PercentSynced) != RedfishCS_status_success) {goto Error;}

  // Replica
  if (CS_To_JSON_ReplicaInfoReplica(CsJson, "Replica", CSPtr->Replica) != RedfishCS_status_success) {goto Error;}

  // ReplicaFaultDomain 
  if (InsertJsonStringObj (CsJson, "ReplicaFaultDomain", CSPtr->ReplicaFaultDomain) != RedfishCS_status_success) {goto Error;}

  // ReplicaPriority 
  if (InsertJsonStringObj (CsJson, "ReplicaPriority", CSPtr->ReplicaPriority) != RedfishCS_status_success) {goto Error;}

  // ReplicaProgressStatus 
  if (InsertJsonStringObj (CsJson, "ReplicaProgressStatus", CSPtr->ReplicaProgressStatus) != RedfishCS_status_success) {goto Error;}

  // ReplicaReadOnlyAccess 
  if (InsertJsonStringObj (CsJson, "ReplicaReadOnlyAccess", CSPtr->ReplicaReadOnlyAccess) != RedfishCS_status_success) {goto Error;}

  // ReplicaRecoveryMode 
  if (InsertJsonStringObj (CsJson, "ReplicaRecoveryMode", CSPtr->ReplicaRecoveryMode) != RedfishCS_status_success) {goto Error;}

  // ReplicaRole 
  if (InsertJsonStringObj (CsJson, "ReplicaRole", CSPtr->ReplicaRole) != RedfishCS_status_success) {goto Error;}

  // ReplicaSkewBytes 
  if (InsertJsonInt64Obj (CsJson, "ReplicaSkewBytes", CSPtr->ReplicaSkewBytes) != RedfishCS_status_success) {goto Error;}

  // ReplicaState 
  if (InsertJsonStringObj (CsJson, "ReplicaState", CSPtr->ReplicaState) != RedfishCS_status_success) {goto Error;}

  // ReplicaType 
  if (InsertJsonStringObj (CsJson, "ReplicaType", CSPtr->ReplicaType) != RedfishCS_status_success) {goto Error;}

  // ReplicaUpdateMode 
  if (InsertJsonStringObj (CsJson, "ReplicaUpdateMode", CSPtr->ReplicaUpdateMode) != RedfishCS_status_success) {goto Error;}

  // RequestedReplicaState 
  if (InsertJsonStringObj (CsJson, "RequestedReplicaState", CSPtr->RequestedReplicaState) != RedfishCS_status_success) {goto Error;}

  // SourceReplica
  if (CS_To_JSON_ReplicaInfoSourceReplica(CsJson, "SourceReplica", CSPtr->SourceReplica) != RedfishCS_status_success) {goto Error;}

  // SyncMaintained 
  if (InsertJsonBoolObj (CsJson, "SyncMaintained", CSPtr->SyncMaintained) != RedfishCS_status_success) {goto Error;}

  // UndiscoveredElement 
  if (InsertJsonStringObj (CsJson, "UndiscoveredElement", CSPtr->UndiscoveredElement) != RedfishCS_status_success) {goto Error;}

  // WhenActivated 
  if (InsertJsonStringObj (CsJson, "WhenActivated", CSPtr->WhenActivated) != RedfishCS_status_success) {goto Error;}

  // WhenDeactivated 
  if (InsertJsonStringObj (CsJson, "WhenDeactivated", CSPtr->WhenDeactivated) != RedfishCS_status_success) {goto Error;}

  // WhenEstablished 
  if (InsertJsonStringObj (CsJson, "WhenEstablished", CSPtr->WhenEstablished) != RedfishCS_status_success) {goto Error;}

  // WhenSuspended 
  if (InsertJsonStringObj (CsJson, "WhenSuspended", CSPtr->WhenSuspended) != RedfishCS_status_success) {goto Error;}

  // WhenSynced 
  if (InsertJsonStringObj (CsJson, "WhenSynced", CSPtr->WhenSynced) != RedfishCS_status_success) {goto Error;}

  // WhenSynchronized 
  if (InsertJsonStringObj (CsJson, "WhenSynchronized", CSPtr->WhenSynchronized) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_ReplicaTargets(json_t *CsJson, char *Key, Redfishodatav4_idRef_CS *CSPtr)
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
// C structure to JSON for Volume.V1_6_0.Volume
//
RedfishCS_status CS_To_Volume_V1_6_0_JSON(RedfishVolume_V1_6_0_Volume_CS *CSPtr, RedfishCS_char **JsonText)
{
  json_t  *CsJson;

  if (CSPtr == NULL || JsonText == NULL || CSPtr->Header.ResourceType != RedfishCS_Type_CS) {
    return RedfishCS_status_invalid_parameter;
  }
  CsJson = json_object();
  if (CsJson == NULL) {
    return RedfishCS_status_unsupported;
  }
  // AccessCapabilities 
  if (InsertJsonStringObj (CsJson, "AccessCapabilities", CSPtr->AccessCapabilities) != RedfishCS_status_success) {goto Error;}

  // Actions
  if (CS_To_JSON_Actions(CsJson, "Actions", CSPtr->Actions) != RedfishCS_status_success) {goto Error;}

  // AllocatedPools 
  if (InsertJsonLinkObj (CsJson, "AllocatedPools", &CSPtr->AllocatedPools) != RedfishCS_status_success) {goto Error;}

  // BlockSizeBytes 
  if (InsertJsonInt64Obj (CsJson, "BlockSizeBytes", CSPtr->BlockSizeBytes) != RedfishCS_status_success) {goto Error;}

  // Capacity 
  if (InsertJsonLinkObj (CsJson, "Capacity", &CSPtr->Capacity) != RedfishCS_status_success) {goto Error;}

  // CapacityBytes 
  if (InsertJsonInt64Obj (CsJson, "CapacityBytes", CSPtr->CapacityBytes) != RedfishCS_status_success) {goto Error;}

  // CapacitySources 
  if (InsertJsonLinkObj (CsJson, "CapacitySources", &CSPtr->CapacitySources) != RedfishCS_status_success) {goto Error;}

  // CapacitySources@odata.count 
  if (InsertJsonInt64Obj (CsJson, "CapacitySources@odata.count", CSPtr->CapacitySourcesodata_count) != RedfishCS_status_success) {goto Error;}

  // Compressed 
  if (InsertJsonBoolObj (CsJson, "Compressed", CSPtr->Compressed) != RedfishCS_status_success) {goto Error;}

  // Deduplicated 
  if (InsertJsonBoolObj (CsJson, "Deduplicated", CSPtr->Deduplicated) != RedfishCS_status_success) {goto Error;}

  // Description 
  if (InsertJsonStringObj (CsJson, "Description", CSPtr->Description) != RedfishCS_status_success) {goto Error;}

  // DisplayName 
  if (InsertJsonStringObj (CsJson, "DisplayName", CSPtr->DisplayName) != RedfishCS_status_success) {goto Error;}

  // Encrypted 
  if (InsertJsonBoolObj (CsJson, "Encrypted", CSPtr->Encrypted) != RedfishCS_status_success) {goto Error;}

  // EncryptionTypes 
  if (InsertJsonStringObj (CsJson, "EncryptionTypes", CSPtr->EncryptionTypes) != RedfishCS_status_success) {goto Error;}

  // IOPerfModeEnabled 
  if (InsertJsonBoolObj (CsJson, "IOPerfModeEnabled", CSPtr->IOPerfModeEnabled) != RedfishCS_status_success) {goto Error;}

  // IOStatistics 
  if (InsertJsonLinkObj (CsJson, "IOStatistics", &CSPtr->IOStatistics) != RedfishCS_status_success) {goto Error;}

  // Id 
  if (InsertJsonStringObj (CsJson, "Id", CSPtr->Id) != RedfishCS_status_success) {goto Error;}

  // Identifiers 
  if (InsertJsonLinkObj (CsJson, "Identifiers", &CSPtr->Identifiers) != RedfishCS_status_success) {goto Error;}

  // InitializeMethod 
  if (InsertJsonStringObj (CsJson, "InitializeMethod", CSPtr->InitializeMethod) != RedfishCS_status_success) {goto Error;}

  // Links
  if (CS_To_JSON_Links(CsJson, "Links", CSPtr->Links) != RedfishCS_status_success) {goto Error;}

  // LogicalUnitNumber 
  if (InsertJsonInt64Obj (CsJson, "LogicalUnitNumber", CSPtr->LogicalUnitNumber) != RedfishCS_status_success) {goto Error;}

  // LowSpaceWarningThresholdPercents 
  if (InsertJsonInt64Obj (CsJson, "LowSpaceWarningThresholdPercents", CSPtr->LowSpaceWarningThresholdPercents) != RedfishCS_status_success) {goto Error;}

  // Manufacturer 
  if (InsertJsonStringObj (CsJson, "Manufacturer", CSPtr->Manufacturer) != RedfishCS_status_success) {goto Error;}

  // MaxBlockSizeBytes 
  if (InsertJsonInt64Obj (CsJson, "MaxBlockSizeBytes", CSPtr->MaxBlockSizeBytes) != RedfishCS_status_success) {goto Error;}

  // MediaSpanCount 
  if (InsertJsonInt64Obj (CsJson, "MediaSpanCount", CSPtr->MediaSpanCount) != RedfishCS_status_success) {goto Error;}

  // Model 
  if (InsertJsonStringObj (CsJson, "Model", CSPtr->Model) != RedfishCS_status_success) {goto Error;}

  // NVMeNamespaceProperties
  if (CS_To_JSON_NVMeNamespaceProperties(CsJson, "NVMeNamespaceProperties", CSPtr->NVMeNamespaceProperties) != RedfishCS_status_success) {goto Error;}

  // Name 
  if (InsertJsonStringObj (CsJson, "Name", CSPtr->Name) != RedfishCS_status_success) {goto Error;}

  // Oem
  if (CS_To_JSON_Oem(CsJson, "Oem", CSPtr->Oem) != RedfishCS_status_success) {goto Error;}

  // Operations
  if (CS_To_JSON_Operations(CsJson, "Operations", CSPtr->Operations) != RedfishCS_status_success) {goto Error;}

  // OptimumIOSizeBytes 
  if (InsertJsonInt64Obj (CsJson, "OptimumIOSizeBytes", CSPtr->OptimumIOSizeBytes) != RedfishCS_status_success) {goto Error;}

  // ProvisioningPolicy 
  if (InsertJsonStringObj (CsJson, "ProvisioningPolicy", CSPtr->ProvisioningPolicy) != RedfishCS_status_success) {goto Error;}

  // RAIDType 
  if (InsertJsonStringObj (CsJson, "RAIDType", CSPtr->RAIDType) != RedfishCS_status_success) {goto Error;}

  // ReadCachePolicy 
  if (InsertJsonStringObj (CsJson, "ReadCachePolicy", CSPtr->ReadCachePolicy) != RedfishCS_status_success) {goto Error;}

  // RecoverableCapacitySourceCount 
  if (InsertJsonInt64Obj (CsJson, "RecoverableCapacitySourceCount", CSPtr->RecoverableCapacitySourceCount) != RedfishCS_status_success) {goto Error;}

  // RemainingCapacityPercent 
  if (InsertJsonInt64Obj (CsJson, "RemainingCapacityPercent", CSPtr->RemainingCapacityPercent) != RedfishCS_status_success) {goto Error;}

  // ReplicaInfo
  if (CS_To_JSON_ReplicaInfo(CsJson, "ReplicaInfo", CSPtr->ReplicaInfo) != RedfishCS_status_success) {goto Error;}

  // ReplicaTargets
  if (CS_To_JSON_ReplicaTargets(CsJson, "ReplicaTargets", CSPtr->ReplicaTargets) != RedfishCS_status_success) {goto Error;}

  // ReplicaTargets@odata.count 
  if (InsertJsonInt64Obj (CsJson, "ReplicaTargets@odata.count", CSPtr->ReplicaTargetsodata_count) != RedfishCS_status_success) {goto Error;}

  // Status
  if (CS_To_JSON_Status(CsJson, "Status", CSPtr->Status) != RedfishCS_status_success) {goto Error;}

  // StorageGroups 
  if (InsertJsonLinkObj (CsJson, "StorageGroups", &CSPtr->StorageGroups) != RedfishCS_status_success) {goto Error;}

  // StripSizeBytes 
  if (InsertJsonInt64Obj (CsJson, "StripSizeBytes", CSPtr->StripSizeBytes) != RedfishCS_status_success) {goto Error;}

  // VolumeType 
  if (InsertJsonStringObj (CsJson, "VolumeType", CSPtr->VolumeType) != RedfishCS_status_success) {goto Error;}

  // VolumeUsage 
  if (InsertJsonStringObj (CsJson, "VolumeUsage", CSPtr->VolumeUsage) != RedfishCS_status_success) {goto Error;}

  // WriteCachePolicy 
  if (InsertJsonStringObj (CsJson, "WriteCachePolicy", CSPtr->WriteCachePolicy) != RedfishCS_status_success) {goto Error;}

  // WriteCacheState 
  if (InsertJsonStringObj (CsJson, "WriteCacheState", CSPtr->WriteCacheState) != RedfishCS_status_success) {goto Error;}

  // WriteHoleProtectionPolicy 
  if (InsertJsonStringObj (CsJson, "WriteHoleProtectionPolicy", CSPtr->WriteHoleProtectionPolicy) != RedfishCS_status_success) {goto Error;}

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
// Destory C Structure for Volume.V1_6_0.Volume
//
RedfishCS_status DestroyVolume_V1_6_0_CS(RedfishVolume_V1_6_0_Volume_CS *CSPtr)
{
  RedfishCS_status Status;

  Status = DestoryCsMemory ((RedfishCS_void *)CSPtr);
  return Status;
}

//
// Destory JSON text for Volume.V1_6_0.Volume
//
RedfishCS_status DestroyVolume_V1_6_0_Json(RedfishCS_char *JsonText)
{
  free ((RedfishCS_void *)JsonText);
  return RedfishCS_status_success;
}

//
//Generate C structure for Volume.V1_6_0.Volume
//
RedfishCS_status
Json_Volume_V1_6_0_To_CS(RedfishCS_char *JsonRawText, RedfishVolume_V1_6_0_Volume_CS **ReturnedCs)
{
  RedfishCS_status  Status;
  json_t *JsonObj;
  RedfishVolume_V1_6_0_Volume_CS *Cs;

  Status = CreateJsonPayloadAndCs (JsonRawText, "Volume", "v1_6_0", "Volume", &JsonObj, (RedfishCS_void **)&Cs, sizeof (RedfishVolume_V1_6_0_Volume_CS));
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

  // AccessCapabilities
  Status = GetRedfishPropertyStr (Cs, JsonObj, "AccessCapabilities", &Cs->AccessCapabilities);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Actions
  Status = GenActionsCs (Cs, JsonObj, "Actions", &Cs->Actions);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // AllocatedPools
  InitializeLinkHead (&Cs->AllocatedPools);
  Status = CreateCsUriOrJsonByNode (Cs, JsonObj, "AllocatedPools", Cs->Header.ThisUri, &Cs->AllocatedPools);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // BlockSizeBytes
  Status = GetRedfishPropertyInt64 (Cs, JsonObj, "BlockSizeBytes", &Cs->BlockSizeBytes);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Capacity
  InitializeLinkHead (&Cs->Capacity);
  Status = CreateCsUriOrJsonByNode (Cs, JsonObj, "Capacity", Cs->Header.ThisUri, &Cs->Capacity);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // CapacityBytes
  Status = GetRedfishPropertyInt64 (Cs, JsonObj, "CapacityBytes", &Cs->CapacityBytes);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // CapacitySources
  InitializeLinkHead (&Cs->CapacitySources);
  Status = CreateCsUriOrJsonByNode (Cs, JsonObj, "CapacitySources", Cs->Header.ThisUri, &Cs->CapacitySources);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // CapacitySources@odata.count
  Status = GetRedfishPropertyInt64 (Cs, JsonObj, "CapacitySources@odata.count", &Cs->CapacitySourcesodata_count);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Compressed
  Status = GetRedfishPropertyBoolean (Cs, JsonObj, "Compressed", &Cs->Compressed);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Deduplicated
  Status = GetRedfishPropertyBoolean (Cs, JsonObj, "Deduplicated", &Cs->Deduplicated);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Description
  Status = GetRedfishPropertyStr (Cs, JsonObj, "Description", &Cs->Description);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // DisplayName
  Status = GetRedfishPropertyStr (Cs, JsonObj, "DisplayName", &Cs->DisplayName);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Encrypted
  Status = GetRedfishPropertyBoolean (Cs, JsonObj, "Encrypted", &Cs->Encrypted);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // EncryptionTypes
  Status = GetRedfishPropertyStr (Cs, JsonObj, "EncryptionTypes", &Cs->EncryptionTypes);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // IOPerfModeEnabled
  Status = GetRedfishPropertyBoolean (Cs, JsonObj, "IOPerfModeEnabled", &Cs->IOPerfModeEnabled);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // IOStatistics
  InitializeLinkHead (&Cs->IOStatistics);
  Status = CreateCsUriOrJsonByNode (Cs, JsonObj, "IOStatistics", Cs->Header.ThisUri, &Cs->IOStatistics);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Id
  Status = GetRedfishPropertyStr (Cs, JsonObj, "Id", &Cs->Id);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){goto Error;}}

  // Identifiers
  InitializeLinkHead (&Cs->Identifiers);
  Status = CreateCsUriOrJsonByNode (Cs, JsonObj, "Identifiers", Cs->Header.ThisUri, &Cs->Identifiers);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // InitializeMethod
  Status = GetRedfishPropertyStr (Cs, JsonObj, "InitializeMethod", &Cs->InitializeMethod);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Links
  Status = GenLinksCs (Cs, JsonObj, "Links", &Cs->Links);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // LogicalUnitNumber
  Status = GetRedfishPropertyInt64 (Cs, JsonObj, "LogicalUnitNumber", &Cs->LogicalUnitNumber);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // LowSpaceWarningThresholdPercents
  Status = GetRedfishPropertyInt64 (Cs, JsonObj, "LowSpaceWarningThresholdPercents", &Cs->LowSpaceWarningThresholdPercents);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Manufacturer
  Status = GetRedfishPropertyStr (Cs, JsonObj, "Manufacturer", &Cs->Manufacturer);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // MaxBlockSizeBytes
  Status = GetRedfishPropertyInt64 (Cs, JsonObj, "MaxBlockSizeBytes", &Cs->MaxBlockSizeBytes);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // MediaSpanCount
  Status = GetRedfishPropertyInt64 (Cs, JsonObj, "MediaSpanCount", &Cs->MediaSpanCount);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Model
  Status = GetRedfishPropertyStr (Cs, JsonObj, "Model", &Cs->Model);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // NVMeNamespaceProperties
  Status = GenNVMeNamespacePropertiesCs (Cs, JsonObj, "NVMeNamespaceProperties", &Cs->NVMeNamespaceProperties);
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

  // Operations
  Status = GenOperationCs (Cs, JsonObj, "Operations", &Cs->Operations);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // OptimumIOSizeBytes
  Status = GetRedfishPropertyInt64 (Cs, JsonObj, "OptimumIOSizeBytes", &Cs->OptimumIOSizeBytes);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ProvisioningPolicy
  Status = GetRedfishPropertyStr (Cs, JsonObj, "ProvisioningPolicy", &Cs->ProvisioningPolicy);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // RAIDType
  Status = GetRedfishPropertyStr (Cs, JsonObj, "RAIDType", &Cs->RAIDType);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ReadCachePolicy
  Status = GetRedfishPropertyStr (Cs, JsonObj, "ReadCachePolicy", &Cs->ReadCachePolicy);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // RecoverableCapacitySourceCount
  Status = GetRedfishPropertyInt64 (Cs, JsonObj, "RecoverableCapacitySourceCount", &Cs->RecoverableCapacitySourceCount);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // RemainingCapacityPercent
  Status = GetRedfishPropertyInt64 (Cs, JsonObj, "RemainingCapacityPercent", &Cs->RemainingCapacityPercent);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ReplicaInfo
  Status = GenReplicaInfoCs (Cs, JsonObj, "ReplicaInfo", &Cs->ReplicaInfo);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ReplicaTargets
  Status = GenidRefCs (Cs, JsonObj, "ReplicaTargets", &Cs->ReplicaTargets);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ReplicaTargets@odata.count
  Status = GetRedfishPropertyInt64 (Cs, JsonObj, "ReplicaTargets@odata.count", &Cs->ReplicaTargetsodata_count);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Status
  Status = GenStatusCs (Cs, JsonObj, "Status", &Cs->Status);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // StorageGroups
  InitializeLinkHead (&Cs->StorageGroups);
  Status = CreateCsUriOrJsonByNode (Cs, JsonObj, "StorageGroups", Cs->Header.ThisUri, &Cs->StorageGroups);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // StripSizeBytes
  Status = GetRedfishPropertyInt64 (Cs, JsonObj, "StripSizeBytes", &Cs->StripSizeBytes);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // VolumeType
  Status = GetRedfishPropertyStr (Cs, JsonObj, "VolumeType", &Cs->VolumeType);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // VolumeUsage
  Status = GetRedfishPropertyStr (Cs, JsonObj, "VolumeUsage", &Cs->VolumeUsage);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // WriteCachePolicy
  Status = GetRedfishPropertyStr (Cs, JsonObj, "WriteCachePolicy", &Cs->WriteCachePolicy);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // WriteCacheState
  Status = GetRedfishPropertyStr (Cs, JsonObj, "WriteCacheState", &Cs->WriteCacheState);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // WriteHoleProtectionPolicy
  Status = GetRedfishPropertyStr (Cs, JsonObj, "WriteHoleProtectionPolicy", &Cs->WriteHoleProtectionPolicy);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  json_decref(JsonObj);
  *ReturnedCs = Cs;
  return RedfishCS_status_success;
Error:;
  json_decref(JsonObj);
  DestroyVolume_V1_6_0_CS (Cs);
  return Status;
}
