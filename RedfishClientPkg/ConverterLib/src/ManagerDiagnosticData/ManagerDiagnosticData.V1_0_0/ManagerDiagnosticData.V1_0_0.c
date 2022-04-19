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

#include"Redfish_ManagerDiagnosticData_v1_0_0_CS.h"
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

//
//Generate C structure for #ManagerDiagnosticData.ResetMetrics
//
static RedfishCS_status GenResetMetricsCs(RedfishManagerDiagnosticData_V1_0_0_ManagerDiagnosticData_CS *Cs, json_t *JsonObj, char *Key, RedfishManagerDiagnosticData_V1_0_0_ResetMetrics_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishManagerDiagnosticData_V1_0_0_ResetMetrics_CS), (RedfishCS_void **)Dst);
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
static RedfishCS_status GenOemActionsCs(RedfishManagerDiagnosticData_V1_0_0_ManagerDiagnosticData_CS *Cs, json_t *JsonObj, char *Key, RedfishManagerDiagnosticData_V1_0_0_OemActions_CS **Dst)
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
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishManagerDiagnosticData_V1_0_0_OemActions_CS), (RedfishCS_void **)Dst);
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
static RedfishCS_status GenActionsCs(RedfishManagerDiagnosticData_V1_0_0_ManagerDiagnosticData_CS *Cs, json_t *JsonObj, char *Key, RedfishManagerDiagnosticData_V1_0_0_Actions_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishManagerDiagnosticData_V1_0_0_Actions_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // #ManagerDiagnosticData.ResetMetrics
  Status = GenResetMetricsCs (Cs, TempJsonObj, "#ManagerDiagnosticData.ResetMetrics", &(*Dst)->ManagerDiagnosticData_ResetMetrics);
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
//Generate C structure for BootTimeStatistics
//
static RedfishCS_status GenBootTimeStatisticsCs(RedfishManagerDiagnosticData_V1_0_0_ManagerDiagnosticData_CS *Cs, json_t *JsonObj, char *Key, RedfishManagerDiagnosticData_V1_0_0_BootTimeStatistics_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishManagerDiagnosticData_V1_0_0_BootTimeStatistics_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // FirmwareTimeSeconds
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "FirmwareTimeSeconds", &(*Dst)->FirmwareTimeSeconds);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // InitrdTimeSeconds
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "InitrdTimeSeconds", &(*Dst)->InitrdTimeSeconds);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // KernelTimeSeconds
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "KernelTimeSeconds", &(*Dst)->KernelTimeSeconds);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // LoaderTimeSeconds
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "LoaderTimeSeconds", &(*Dst)->LoaderTimeSeconds);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // UserSpaceTimeSeconds
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "UserSpaceTimeSeconds", &(*Dst)->UserSpaceTimeSeconds);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
static RedfishCS_status GenI2CBusStatistics_Array_ElementCs(RedfishManagerDiagnosticData_V1_0_0_ManagerDiagnosticData_CS *Cs, json_t *JsonObj, RedfishCS_uint64 Index,  RedfishManagerDiagnosticData_V1_0_0_I2CBusStatistics_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_array_get (JsonObj, (RedfishCS_int)Index);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsZeroMemory(Cs, sizeof(RedfishManagerDiagnosticData_V1_0_0_I2CBusStatistics_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // BusErrorCount
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "BusErrorCount", &(*Dst)->BusErrorCount);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // I2CBusName
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "I2CBusName", &(*Dst)->I2CBusName);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // NACKCount
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "NACKCount", &(*Dst)->NACKCount);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // TotalTransactionCount
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "TotalTransactionCount", &(*Dst)->TotalTransactionCount);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  return RedfishCS_status_success;
Error:;
  return Status;
}
//
//Generate C structure for RedfishManagerDiagnosticData_V1_0_0_I2CBusStatistics_Array_CS
//
static RedfishCS_status GenI2CBusStatistics_ArrayCs(RedfishManagerDiagnosticData_V1_0_0_ManagerDiagnosticData_CS *Cs, json_t *JsonObj, char *Key, RedfishManagerDiagnosticData_V1_0_0_I2CBusStatistics_Array_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;
  RedfishCS_uint64 ArraySize;
  RedfishCS_uint64 Index;
  RedfishManagerDiagnosticData_V1_0_0_I2CBusStatistics_Array_CS *ThisElement;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }

  if (json_is_array(TempJsonObj) != RedfishCS_boolean_true) {
    return RedfishCS_status_invalid_parameter;
  }

  ArraySize = json_array_size (TempJsonObj);
  Status = allocateArrayRecordCsMemory(Cs, sizeof (RedfishManagerDiagnosticData_V1_0_0_I2CBusStatistics_Array_CS), ArraySize, (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  if (*Dst == NULL) {
    // Empty array
    return RedfishCS_status_success;
  }
  ThisElement = *Dst;
  for (Index = 0; Index < ArraySize; Index ++) {
    Status = GenI2CBusStatistics_Array_ElementCs(Cs, TempJsonObj, Index, &ThisElement->ArrayValue);
    if (Status != RedfishCS_status_success){
      goto Error;
    }
    ThisElement = ThisElement->Next;
  }
Error:;
  return Status;
}
//
//Generate C structure for MemoryECCStatistics
//
static RedfishCS_status GenMemoryECCStatisticsCs(RedfishManagerDiagnosticData_V1_0_0_ManagerDiagnosticData_CS *Cs, json_t *JsonObj, char *Key, RedfishManagerDiagnosticData_V1_0_0_MemoryECCStatistics_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishManagerDiagnosticData_V1_0_0_MemoryECCStatistics_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // CorrectableECCErrorCount
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "CorrectableECCErrorCount", &(*Dst)->CorrectableECCErrorCount);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // UncorrectableECCErrorCount
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "UncorrectableECCErrorCount", &(*Dst)->UncorrectableECCErrorCount);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
//
//Generate C structure for MemoryStatistics
//
static RedfishCS_status GenMemoryStatisticsCs(RedfishManagerDiagnosticData_V1_0_0_ManagerDiagnosticData_CS *Cs, json_t *JsonObj, char *Key, RedfishManagerDiagnosticData_V1_0_0_MemoryStatistics_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishManagerDiagnosticData_V1_0_0_MemoryStatistics_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // AvailableBytes
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "AvailableBytes", &(*Dst)->AvailableBytes);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // BuffersAndCacheBytes
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "BuffersAndCacheBytes", &(*Dst)->BuffersAndCacheBytes);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // FreeBytes
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "FreeBytes", &(*Dst)->FreeBytes);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // SharedBytes
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "SharedBytes", &(*Dst)->SharedBytes);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // TotalBytes
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "TotalBytes", &(*Dst)->TotalBytes);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // UsedBytes
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "UsedBytes", &(*Dst)->UsedBytes);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
//
//Generate C structure for Oem
//
static RedfishCS_status GenOemCs(RedfishManagerDiagnosticData_V1_0_0_ManagerDiagnosticData_CS *Cs, json_t *JsonObj, char *Key, RedfishResource_Oem_CS **Dst)
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
//Generate C structure for ProcessorStatistics
//
static RedfishCS_status GenProcessorStatisticsCs(RedfishManagerDiagnosticData_V1_0_0_ManagerDiagnosticData_CS *Cs, json_t *JsonObj, char *Key, RedfishManagerDiagnosticData_V1_0_0_ProcessorStatistics_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishManagerDiagnosticData_V1_0_0_ProcessorStatistics_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // KernelPercent
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "KernelPercent", &(*Dst)->KernelPercent);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // UserPercent
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "UserPercent", &(*Dst)->UserPercent);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
static RedfishCS_status GenProcessStatistics_Array_ElementCs(RedfishManagerDiagnosticData_V1_0_0_ManagerDiagnosticData_CS *Cs, json_t *JsonObj, RedfishCS_uint64 Index,  RedfishManagerDiagnosticData_V1_0_0_ProcessStatistics_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_array_get (JsonObj, (RedfishCS_int)Index);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsZeroMemory(Cs, sizeof(RedfishManagerDiagnosticData_V1_0_0_ProcessStatistics_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // CommandLine
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "CommandLine", &(*Dst)->CommandLine);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // KernelTimeSeconds
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "KernelTimeSeconds", &(*Dst)->KernelTimeSeconds);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ResidentSetSizeBytes
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "ResidentSetSizeBytes", &(*Dst)->ResidentSetSizeBytes);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // UserTimeSeconds
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "UserTimeSeconds", &(*Dst)->UserTimeSeconds);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  return RedfishCS_status_success;
Error:;
  return Status;
}
//
//Generate C structure for RedfishManagerDiagnosticData_V1_0_0_ProcessStatistics_Array_CS
//
static RedfishCS_status GenProcessStatistics_ArrayCs(RedfishManagerDiagnosticData_V1_0_0_ManagerDiagnosticData_CS *Cs, json_t *JsonObj, char *Key, RedfishManagerDiagnosticData_V1_0_0_ProcessStatistics_Array_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;
  RedfishCS_uint64 ArraySize;
  RedfishCS_uint64 Index;
  RedfishManagerDiagnosticData_V1_0_0_ProcessStatistics_Array_CS *ThisElement;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }

  if (json_is_array(TempJsonObj) != RedfishCS_boolean_true) {
    return RedfishCS_status_invalid_parameter;
  }

  ArraySize = json_array_size (TempJsonObj);
  Status = allocateArrayRecordCsMemory(Cs, sizeof (RedfishManagerDiagnosticData_V1_0_0_ProcessStatistics_Array_CS), ArraySize, (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  if (*Dst == NULL) {
    // Empty array
    return RedfishCS_status_success;
  }
  ThisElement = *Dst;
  for (Index = 0; Index < ArraySize; Index ++) {
    Status = GenProcessStatistics_Array_ElementCs(Cs, TempJsonObj, Index, &ThisElement->ArrayValue);
    if (Status != RedfishCS_status_success){
      goto Error;
    }
    ThisElement = ThisElement->Next;
  }
Error:;
  return Status;
}
static RedfishCS_status CS_To_JSON_ActionsManagerDiagnosticData_ResetMetrics(json_t *CsJson, char *Key, RedfishManagerDiagnosticData_V1_0_0_ResetMetrics_CS *CSPtr)
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
static RedfishCS_status CS_To_JSON_ActionsOem(json_t *CsJson, char *Key, RedfishManagerDiagnosticData_V1_0_0_OemActions_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // Check if this is RedfishCS_Type_CS_EmptyProp.
  CsEmptyPropLinkToJson(CsJson, Key, &CSPtr->Prop);
  // No JSON property for this structure.
  return RedfishCS_status_success;
}
static RedfishCS_status CS_To_JSON_Actions(json_t *CsJson, char *Key, RedfishManagerDiagnosticData_V1_0_0_Actions_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // #ManagerDiagnosticData.ResetMetrics
  if (CS_To_JSON_ActionsManagerDiagnosticData_ResetMetrics(CsJson, "#ManagerDiagnosticData.ResetMetrics", CSPtr->ManagerDiagnosticData_ResetMetrics) != RedfishCS_status_success) {goto Error;}

  // Oem
  if (CS_To_JSON_ActionsOem(CsJson, "Oem", CSPtr->Oem) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_BootTimeStatistics(json_t *CsJson, char *Key, RedfishManagerDiagnosticData_V1_0_0_BootTimeStatistics_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // FirmwareTimeSeconds 
  if (InsertJsonInt64Obj (CsJson, "FirmwareTimeSeconds", CSPtr->FirmwareTimeSeconds) != RedfishCS_status_success) {goto Error;}

  // InitrdTimeSeconds 
  if (InsertJsonInt64Obj (CsJson, "InitrdTimeSeconds", CSPtr->InitrdTimeSeconds) != RedfishCS_status_success) {goto Error;}

  // KernelTimeSeconds 
  if (InsertJsonInt64Obj (CsJson, "KernelTimeSeconds", CSPtr->KernelTimeSeconds) != RedfishCS_status_success) {goto Error;}

  // LoaderTimeSeconds 
  if (InsertJsonInt64Obj (CsJson, "LoaderTimeSeconds", CSPtr->LoaderTimeSeconds) != RedfishCS_status_success) {goto Error;}

  // UserSpaceTimeSeconds 
  if (InsertJsonInt64Obj (CsJson, "UserSpaceTimeSeconds", CSPtr->UserSpaceTimeSeconds) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_I2CBuses(json_t *CsJson, char *Key, RedfishManagerDiagnosticData_V1_0_0_I2CBusStatistics_Array_CS *CSPtr)
{
  json_t *ArrayJson;
  json_t *ArrayMember;
  RedfishManagerDiagnosticData_V1_0_0_I2CBusStatistics_Array_CS *NextArray;
  RedfishManagerDiagnosticData_V1_0_0_I2CBusStatistics_CS *NextArrayItem;

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
    // BusErrorCount 
    if (InsertJsonInt64Obj (ArrayMember, "BusErrorCount", NextArrayItem->BusErrorCount) != RedfishCS_status_success) {goto Error;}

    // I2CBusName 
    if (InsertJsonStringObj (ArrayMember, "I2CBusName", NextArrayItem->I2CBusName) != RedfishCS_status_success) {goto Error;}

    // NACKCount 
    if (InsertJsonInt64Obj (ArrayMember, "NACKCount", NextArrayItem->NACKCount) != RedfishCS_status_success) {goto Error;}

    // TotalTransactionCount 
    if (InsertJsonInt64Obj (ArrayMember, "TotalTransactionCount", NextArrayItem->TotalTransactionCount) != RedfishCS_status_success) {goto Error;}

    if (json_array_append_new (ArrayJson, ArrayMember) != 0) {goto Error;}
    NextArray = NextArray->Next;
  } while (NextArray != NULL);
  json_object_set_new (CsJson, Key, ArrayJson);

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_MemoryECCStatistics(json_t *CsJson, char *Key, RedfishManagerDiagnosticData_V1_0_0_MemoryECCStatistics_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // CorrectableECCErrorCount 
  if (InsertJsonInt64Obj (CsJson, "CorrectableECCErrorCount", CSPtr->CorrectableECCErrorCount) != RedfishCS_status_success) {goto Error;}

  // UncorrectableECCErrorCount 
  if (InsertJsonInt64Obj (CsJson, "UncorrectableECCErrorCount", CSPtr->UncorrectableECCErrorCount) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_MemoryStatistics(json_t *CsJson, char *Key, RedfishManagerDiagnosticData_V1_0_0_MemoryStatistics_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // AvailableBytes 
  if (InsertJsonInt64Obj (CsJson, "AvailableBytes", CSPtr->AvailableBytes) != RedfishCS_status_success) {goto Error;}

  // BuffersAndCacheBytes 
  if (InsertJsonInt64Obj (CsJson, "BuffersAndCacheBytes", CSPtr->BuffersAndCacheBytes) != RedfishCS_status_success) {goto Error;}

  // FreeBytes 
  if (InsertJsonInt64Obj (CsJson, "FreeBytes", CSPtr->FreeBytes) != RedfishCS_status_success) {goto Error;}

  // SharedBytes 
  if (InsertJsonInt64Obj (CsJson, "SharedBytes", CSPtr->SharedBytes) != RedfishCS_status_success) {goto Error;}

  // TotalBytes 
  if (InsertJsonInt64Obj (CsJson, "TotalBytes", CSPtr->TotalBytes) != RedfishCS_status_success) {goto Error;}

  // UsedBytes 
  if (InsertJsonInt64Obj (CsJson, "UsedBytes", CSPtr->UsedBytes) != RedfishCS_status_success) {goto Error;}

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
static RedfishCS_status CS_To_JSON_ProcessorStatistics(json_t *CsJson, char *Key, RedfishManagerDiagnosticData_V1_0_0_ProcessorStatistics_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // KernelPercent 
  if (InsertJsonInt64Obj (CsJson, "KernelPercent", CSPtr->KernelPercent) != RedfishCS_status_success) {goto Error;}

  // UserPercent 
  if (InsertJsonInt64Obj (CsJson, "UserPercent", CSPtr->UserPercent) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_TopProcesses(json_t *CsJson, char *Key, RedfishManagerDiagnosticData_V1_0_0_ProcessStatistics_Array_CS *CSPtr)
{
  json_t *ArrayJson;
  json_t *ArrayMember;
  RedfishManagerDiagnosticData_V1_0_0_ProcessStatistics_Array_CS *NextArray;
  RedfishManagerDiagnosticData_V1_0_0_ProcessStatistics_CS *NextArrayItem;

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
    // CommandLine 
    if (InsertJsonStringObj (ArrayMember, "CommandLine", NextArrayItem->CommandLine) != RedfishCS_status_success) {goto Error;}

    // KernelTimeSeconds 
    if (InsertJsonInt64Obj (ArrayMember, "KernelTimeSeconds", NextArrayItem->KernelTimeSeconds) != RedfishCS_status_success) {goto Error;}

    // ResidentSetSizeBytes 
    if (InsertJsonInt64Obj (ArrayMember, "ResidentSetSizeBytes", NextArrayItem->ResidentSetSizeBytes) != RedfishCS_status_success) {goto Error;}

    // UserTimeSeconds 
    if (InsertJsonInt64Obj (ArrayMember, "UserTimeSeconds", NextArrayItem->UserTimeSeconds) != RedfishCS_status_success) {goto Error;}

    if (json_array_append_new (ArrayJson, ArrayMember) != 0) {goto Error;}
    NextArray = NextArray->Next;
  } while (NextArray != NULL);
  json_object_set_new (CsJson, Key, ArrayJson);

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}

//
// C structure to JSON for ManagerDiagnosticData.V1_0_0.ManagerDiagnosticData
//
RedfishCS_status CS_To_ManagerDiagnosticData_V1_0_0_JSON(RedfishManagerDiagnosticData_V1_0_0_ManagerDiagnosticData_CS *CSPtr, RedfishCS_char **JsonText)
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

  // BootTimeStatistics
  if (CS_To_JSON_BootTimeStatistics(CsJson, "BootTimeStatistics", CSPtr->BootTimeStatistics) != RedfishCS_status_success) {goto Error;}

  // Description 
  if (InsertJsonStringObj (CsJson, "Description", CSPtr->Description) != RedfishCS_status_success) {goto Error;}

  // FreeStorageSpaceKiB 
  if (InsertJsonInt64Obj (CsJson, "FreeStorageSpaceKiB", CSPtr->FreeStorageSpaceKiB) != RedfishCS_status_success) {goto Error;}

  // I2CBuses
  if (CS_To_JSON_I2CBuses(CsJson, "I2CBuses", CSPtr->I2CBuses) != RedfishCS_status_success) {goto Error;}

  // Id 
  if (InsertJsonStringObj (CsJson, "Id", CSPtr->Id) != RedfishCS_status_success) {goto Error;}

  // MemoryECCStatistics
  if (CS_To_JSON_MemoryECCStatistics(CsJson, "MemoryECCStatistics", CSPtr->MemoryECCStatistics) != RedfishCS_status_success) {goto Error;}

  // MemoryStatistics
  if (CS_To_JSON_MemoryStatistics(CsJson, "MemoryStatistics", CSPtr->MemoryStatistics) != RedfishCS_status_success) {goto Error;}

  // Name 
  if (InsertJsonStringObj (CsJson, "Name", CSPtr->Name) != RedfishCS_status_success) {goto Error;}

  // Oem
  if (CS_To_JSON_Oem(CsJson, "Oem", CSPtr->Oem) != RedfishCS_status_success) {goto Error;}

  // ProcessorStatistics
  if (CS_To_JSON_ProcessorStatistics(CsJson, "ProcessorStatistics", CSPtr->ProcessorStatistics) != RedfishCS_status_success) {goto Error;}

  // TopProcesses
  if (CS_To_JSON_TopProcesses(CsJson, "TopProcesses", CSPtr->TopProcesses) != RedfishCS_status_success) {goto Error;}

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
// Destory C Structure for ManagerDiagnosticData.V1_0_0.ManagerDiagnosticData
//
RedfishCS_status DestroyManagerDiagnosticData_V1_0_0_CS(RedfishManagerDiagnosticData_V1_0_0_ManagerDiagnosticData_CS *CSPtr)
{
  RedfishCS_status Status;

  Status = DestoryCsMemory ((RedfishCS_void *)CSPtr);
  return Status;
}

//
// Destory JSON text for ManagerDiagnosticData.V1_0_0.ManagerDiagnosticData
//
RedfishCS_status DestroyManagerDiagnosticData_V1_0_0_Json(RedfishCS_char *JsonText)
{
  free ((RedfishCS_void *)JsonText);
  return RedfishCS_status_success;
}

//
//Generate C structure for ManagerDiagnosticData.V1_0_0.ManagerDiagnosticData
//
RedfishCS_status
Json_ManagerDiagnosticData_V1_0_0_To_CS(RedfishCS_char *JsonRawText, RedfishManagerDiagnosticData_V1_0_0_ManagerDiagnosticData_CS **ReturnedCs)
{
  RedfishCS_status  Status;
  json_t *JsonObj;
  RedfishManagerDiagnosticData_V1_0_0_ManagerDiagnosticData_CS *Cs;

  Status = CreateJsonPayloadAndCs (JsonRawText, "ManagerDiagnosticData", "v1_0_0", "ManagerDiagnosticData", &JsonObj, (RedfishCS_void **)&Cs, sizeof (RedfishManagerDiagnosticData_V1_0_0_ManagerDiagnosticData_CS));
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

  // BootTimeStatistics
  Status = GenBootTimeStatisticsCs (Cs, JsonObj, "BootTimeStatistics", &Cs->BootTimeStatistics);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Description
  Status = GetRedfishPropertyStr (Cs, JsonObj, "Description", &Cs->Description);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // FreeStorageSpaceKiB
  Status = GetRedfishPropertyInt64 (Cs, JsonObj, "FreeStorageSpaceKiB", &Cs->FreeStorageSpaceKiB);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // I2CBuses
  Status = GenI2CBusStatistics_ArrayCs (Cs, JsonObj, "I2CBuses", &Cs->I2CBuses);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Id
  Status = GetRedfishPropertyStr (Cs, JsonObj, "Id", &Cs->Id);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){goto Error;}}

  // MemoryECCStatistics
  Status = GenMemoryECCStatisticsCs (Cs, JsonObj, "MemoryECCStatistics", &Cs->MemoryECCStatistics);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // MemoryStatistics
  Status = GenMemoryStatisticsCs (Cs, JsonObj, "MemoryStatistics", &Cs->MemoryStatistics);
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

  // ProcessorStatistics
  Status = GenProcessorStatisticsCs (Cs, JsonObj, "ProcessorStatistics", &Cs->ProcessorStatistics);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // TopProcesses
  Status = GenProcessStatistics_ArrayCs (Cs, JsonObj, "TopProcesses", &Cs->TopProcesses);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  json_decref(JsonObj);
  *ReturnedCs = Cs;
  return RedfishCS_status_success;
Error:;
  json_decref(JsonObj);
  DestroyManagerDiagnosticData_V1_0_0_CS (Cs);
  return Status;
}
