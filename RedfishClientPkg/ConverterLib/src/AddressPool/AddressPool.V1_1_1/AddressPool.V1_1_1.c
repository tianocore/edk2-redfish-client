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

#include"Redfish_AddressPool_v1_1_1_CS.h"
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

static RedfishCS_status GenRedfishCS_char_ArrayCs(RedfishAddressPool_V1_1_1_AddressPool_CS *Cs, json_t *JsonObj, char *Key, RedfishCS_char_Array **Dst);
static RedfishCS_status GenIPv4AddressRangeCs(RedfishAddressPool_V1_1_1_AddressPool_CS *Cs, json_t *JsonObj, char *Key, RedfishAddressPool_V1_1_1_IPv4AddressRange_CS **Dst);
static RedfishCS_status GenVLANIdentifierAddressRangeCs(RedfishAddressPool_V1_1_1_AddressPool_CS *Cs, json_t *JsonObj, char *Key, RedfishAddressPool_V1_1_1_VLANIdentifierAddressRange_CS **Dst);
static RedfishCS_status GenEBGPCs(RedfishAddressPool_V1_1_1_AddressPool_CS *Cs, json_t *JsonObj, char *Key, RedfishAddressPool_V1_1_1_EBGP_CS **Dst);
static RedfishCS_status GenASNumberRangeCs(RedfishAddressPool_V1_1_1_AddressPool_CS *Cs, json_t *JsonObj, char *Key, RedfishAddressPool_V1_1_1_ASNumberRange_CS **Dst);
static RedfishCS_status GenBGPNeighborCs(RedfishAddressPool_V1_1_1_AddressPool_CS *Cs, json_t *JsonObj, char *Key, RedfishAddressPool_V1_1_1_BGPNeighbor_CS **Dst);
static RedfishCS_status GenBGPRouteCs(RedfishAddressPool_V1_1_1_AddressPool_CS *Cs, json_t *JsonObj, char *Key, RedfishAddressPool_V1_1_1_BGPRoute_CS **Dst);
static RedfishCS_status GenGracefulRestartCs(RedfishAddressPool_V1_1_1_AddressPool_CS *Cs, json_t *JsonObj, char *Key, RedfishAddressPool_V1_1_1_GracefulRestart_CS **Dst);
static RedfishCS_status GenMultiplePathsCs(RedfishAddressPool_V1_1_1_AddressPool_CS *Cs, json_t *JsonObj, char *Key, RedfishAddressPool_V1_1_1_MultiplePaths_CS **Dst);
static RedfishCS_status GenOemCs(RedfishAddressPool_V1_1_1_AddressPool_CS *Cs, json_t *JsonObj, char *Key, RedfishResource_Oem_CS **Dst);
//
//Generate C structure for Oem
//
static RedfishCS_status GenOemActionsCs(RedfishAddressPool_V1_1_1_AddressPool_CS *Cs, json_t *JsonObj, char *Key, RedfishAddressPool_V1_1_1_OemActions_CS **Dst)
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
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishAddressPool_V1_1_1_OemActions_CS), (RedfishCS_void **)Dst);
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
static RedfishCS_status GenActionsCs(RedfishAddressPool_V1_1_1_AddressPool_CS *Cs, json_t *JsonObj, char *Key, RedfishAddressPool_V1_1_1_Actions_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishAddressPool_V1_1_1_Actions_CS), (RedfishCS_void **)Dst);
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
//Generate C structure for BFDSingleHopOnly
//
static RedfishCS_status GenBFDSingleHopOnlyCs(RedfishAddressPool_V1_1_1_AddressPool_CS *Cs, json_t *JsonObj, char *Key, RedfishAddressPool_V1_1_1_BFDSingleHopOnly_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishAddressPool_V1_1_1_BFDSingleHopOnly_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // DemandModeEnabled
  Status = GetRedfishPropertyBoolean (Cs, TempJsonObj, "DemandModeEnabled", &(*Dst)->DemandModeEnabled);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // DesiredMinTxIntervalMilliseconds
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "DesiredMinTxIntervalMilliseconds", &(*Dst)->DesiredMinTxIntervalMilliseconds);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // KeyChain
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "KeyChain", &(*Dst)->KeyChain);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // LocalMultiplier
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "LocalMultiplier", &(*Dst)->LocalMultiplier);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // MeticulousModeEnabled
  Status = GetRedfishPropertyBoolean (Cs, TempJsonObj, "MeticulousModeEnabled", &(*Dst)->MeticulousModeEnabled);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // RequiredMinRxIntervalMilliseconds
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "RequiredMinRxIntervalMilliseconds", &(*Dst)->RequiredMinRxIntervalMilliseconds);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // SourcePort
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "SourcePort", &(*Dst)->SourcePort);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
//
//Generate C structure for ESINumberRange
//
static RedfishCS_status GenESINumberRangeCs(RedfishAddressPool_V1_1_1_AddressPool_CS *Cs, json_t *JsonObj, char *Key, RedfishAddressPool_V1_1_1_ESINumberRange_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishAddressPool_V1_1_1_ESINumberRange_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // Lower
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "Lower", &(*Dst)->Lower);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Upper
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "Upper", &(*Dst)->Upper);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
//
//Generate C structure for EVINumberRange
//
static RedfishCS_status GenEVINumberRangeCs(RedfishAddressPool_V1_1_1_AddressPool_CS *Cs, json_t *JsonObj, char *Key, RedfishAddressPool_V1_1_1_EVINumberRange_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishAddressPool_V1_1_1_EVINumberRange_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // Lower
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "Lower", &(*Dst)->Lower);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Upper
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "Upper", &(*Dst)->Upper);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
//
//Generate C structure for RouteDistinguisherRange
//
static RedfishCS_status GenRouteDistinguisherRangeCs(RedfishAddressPool_V1_1_1_AddressPool_CS *Cs, json_t *JsonObj, char *Key, RedfishAddressPool_V1_1_1_RouteDistinguisherRange_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishAddressPool_V1_1_1_RouteDistinguisherRange_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // Lower
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "Lower", &(*Dst)->Lower);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Upper
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "Upper", &(*Dst)->Upper);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
//
//Generate C structure for RouteTargetRange
//
static RedfishCS_status GenRouteTargetRangeCs(RedfishAddressPool_V1_1_1_AddressPool_CS *Cs, json_t *JsonObj, char *Key, RedfishAddressPool_V1_1_1_RouteTargetRange_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishAddressPool_V1_1_1_RouteTargetRange_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // Lower
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "Lower", &(*Dst)->Lower);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Upper
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "Upper", &(*Dst)->Upper);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
//
//Generate C structure for VLANIdentifierAddressRange
//
static RedfishCS_status GenVLANIdentifierAddressRangeCs(RedfishAddressPool_V1_1_1_AddressPool_CS *Cs, json_t *JsonObj, char *Key, RedfishAddressPool_V1_1_1_VLANIdentifierAddressRange_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishAddressPool_V1_1_1_VLANIdentifierAddressRange_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // Lower
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "Lower", &(*Dst)->Lower);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Upper
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "Upper", &(*Dst)->Upper);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
//
//Generate C structure for BGPEvpn
//
static RedfishCS_status GenBGPEvpnCs(RedfishAddressPool_V1_1_1_AddressPool_CS *Cs, json_t *JsonObj, char *Key, RedfishAddressPool_V1_1_1_BGPEvpn_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishAddressPool_V1_1_1_BGPEvpn_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // ARPProxyEnabled
  Status = GetRedfishPropertyBoolean (Cs, TempJsonObj, "ARPProxyEnabled", &(*Dst)->ARPProxyEnabled);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ARPSupressionEnabled
  Status = GetRedfishPropertyBoolean (Cs, TempJsonObj, "ARPSupressionEnabled", &(*Dst)->ARPSupressionEnabled);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // AnycastGatewayIPAddress
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "AnycastGatewayIPAddress", &(*Dst)->AnycastGatewayIPAddress);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // AnycastGatewayMACAddress
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "AnycastGatewayMACAddress", &(*Dst)->AnycastGatewayMACAddress);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ESINumberRange
  Status = GenESINumberRangeCs (Cs, TempJsonObj, "ESINumberRange", &(*Dst)->ESINumberRange);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // EVINumberRange
  Status = GenEVINumberRangeCs (Cs, TempJsonObj, "EVINumberRange", &(*Dst)->EVINumberRange);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // GatewayIPAddress
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "GatewayIPAddress", &(*Dst)->GatewayIPAddress);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // NDPProxyEnabled
  Status = GetRedfishPropertyBoolean (Cs, TempJsonObj, "NDPProxyEnabled", &(*Dst)->NDPProxyEnabled);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // NDPSupressionEnabled
  Status = GetRedfishPropertyBoolean (Cs, TempJsonObj, "NDPSupressionEnabled", &(*Dst)->NDPSupressionEnabled);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // RouteDistinguisherRange
  Status = GenRouteDistinguisherRangeCs (Cs, TempJsonObj, "RouteDistinguisherRange", &(*Dst)->RouteDistinguisherRange);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // RouteTargetRange
  Status = GenRouteTargetRangeCs (Cs, TempJsonObj, "RouteTargetRange", &(*Dst)->RouteTargetRange);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // UnderlayMulticastEnabled
  Status = GetRedfishPropertyBoolean (Cs, TempJsonObj, "UnderlayMulticastEnabled", &(*Dst)->UnderlayMulticastEnabled);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // UnknownUnicastSuppressionEnabled
  Status = GetRedfishPropertyBoolean (Cs, TempJsonObj, "UnknownUnicastSuppressionEnabled", &(*Dst)->UnknownUnicastSuppressionEnabled);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // VLANIdentifierAddressRange
  Status = GenVLANIdentifierAddressRangeCs (Cs, TempJsonObj, "VLANIdentifierAddressRange", &(*Dst)->VLANIdentifierAddressRange);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
//
//Generate C structure for ASNumberRange
//
static RedfishCS_status GenASNumberRangeCs(RedfishAddressPool_V1_1_1_AddressPool_CS *Cs, json_t *JsonObj, char *Key, RedfishAddressPool_V1_1_1_ASNumberRange_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishAddressPool_V1_1_1_ASNumberRange_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // Lower
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "Lower", &(*Dst)->Lower);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Upper
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "Upper", &(*Dst)->Upper);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
//
//Generate C structure for MaxPrefix
//
static RedfishCS_status GenMaxPrefixCs(RedfishAddressPool_V1_1_1_AddressPool_CS *Cs, json_t *JsonObj, char *Key, RedfishAddressPool_V1_1_1_MaxPrefix_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishAddressPool_V1_1_1_MaxPrefix_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // MaxPrefixNumber
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "MaxPrefixNumber", &(*Dst)->MaxPrefixNumber);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // RestartTimerSeconds
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "RestartTimerSeconds", &(*Dst)->RestartTimerSeconds);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ShutdownThresholdPercentage
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "ShutdownThresholdPercentage", &(*Dst)->ShutdownThresholdPercentage);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ThresholdWarningOnlyEnabled
  Status = GetRedfishPropertyBoolean (Cs, TempJsonObj, "ThresholdWarningOnlyEnabled", &(*Dst)->ThresholdWarningOnlyEnabled);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
//
//Generate C structure for BGPNeighbor
//
static RedfishCS_status GenBGPNeighborCs(RedfishAddressPool_V1_1_1_AddressPool_CS *Cs, json_t *JsonObj, char *Key, RedfishAddressPool_V1_1_1_BGPNeighbor_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishAddressPool_V1_1_1_BGPNeighbor_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // Address
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "Address", &(*Dst)->Address);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // AllowOwnASEnabled
  Status = GetRedfishPropertyBoolean (Cs, TempJsonObj, "AllowOwnASEnabled", &(*Dst)->AllowOwnASEnabled);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ConnectRetrySeconds
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "ConnectRetrySeconds", &(*Dst)->ConnectRetrySeconds);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // HoldTimeSeconds
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "HoldTimeSeconds", &(*Dst)->HoldTimeSeconds);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // KeepaliveIntervalSeconds
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "KeepaliveIntervalSeconds", &(*Dst)->KeepaliveIntervalSeconds);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // LocalAS
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "LocalAS", &(*Dst)->LocalAS);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // LogStateChangesEnabled
  Status = GetRedfishPropertyBoolean (Cs, TempJsonObj, "LogStateChangesEnabled", &(*Dst)->LogStateChangesEnabled);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // MaxPrefix
  Status = GenMaxPrefixCs (Cs, TempJsonObj, "MaxPrefix", &(*Dst)->MaxPrefix);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // MinimumAdvertisementIntervalSeconds
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "MinimumAdvertisementIntervalSeconds", &(*Dst)->MinimumAdvertisementIntervalSeconds);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // PassiveModeEnabled
  Status = GetRedfishPropertyBoolean (Cs, TempJsonObj, "PassiveModeEnabled", &(*Dst)->PassiveModeEnabled);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // PathMTUDiscoveryEnabled
  Status = GetRedfishPropertyBoolean (Cs, TempJsonObj, "PathMTUDiscoveryEnabled", &(*Dst)->PathMTUDiscoveryEnabled);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // PeerAS
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "PeerAS", &(*Dst)->PeerAS);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ReplacePeerASEnabled
  Status = GetRedfishPropertyBoolean (Cs, TempJsonObj, "ReplacePeerASEnabled", &(*Dst)->ReplacePeerASEnabled);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // TCPMaxSegmentSizeBytes
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "TCPMaxSegmentSizeBytes", &(*Dst)->TCPMaxSegmentSizeBytes);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // TreatAsWithdrawEnabled
  Status = GetRedfishPropertyBoolean (Cs, TempJsonObj, "TreatAsWithdrawEnabled", &(*Dst)->TreatAsWithdrawEnabled);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
//
//Generate C structure for BGPRoute
//
static RedfishCS_status GenBGPRouteCs(RedfishAddressPool_V1_1_1_AddressPool_CS *Cs, json_t *JsonObj, char *Key, RedfishAddressPool_V1_1_1_BGPRoute_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishAddressPool_V1_1_1_BGPRoute_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // AdvertiseInactiveRoutesEnabled
  Status = GetRedfishPropertyBoolean (Cs, TempJsonObj, "AdvertiseInactiveRoutesEnabled", &(*Dst)->AdvertiseInactiveRoutesEnabled);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // DistanceExternal
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "DistanceExternal", &(*Dst)->DistanceExternal);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // DistanceInternal
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "DistanceInternal", &(*Dst)->DistanceInternal);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // DistanceLocal
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "DistanceLocal", &(*Dst)->DistanceLocal);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ExternalCompareRouterIdEnabled
  Status = GetRedfishPropertyBoolean (Cs, TempJsonObj, "ExternalCompareRouterIdEnabled", &(*Dst)->ExternalCompareRouterIdEnabled);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // FlapDampingEnabled
  Status = GetRedfishPropertyBoolean (Cs, TempJsonObj, "FlapDampingEnabled", &(*Dst)->FlapDampingEnabled);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // SendDefaultRouteEnabled
  Status = GetRedfishPropertyBoolean (Cs, TempJsonObj, "SendDefaultRouteEnabled", &(*Dst)->SendDefaultRouteEnabled);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
//
//Generate C structure for GracefulRestart
//
static RedfishCS_status GenGracefulRestartCs(RedfishAddressPool_V1_1_1_AddressPool_CS *Cs, json_t *JsonObj, char *Key, RedfishAddressPool_V1_1_1_GracefulRestart_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishAddressPool_V1_1_1_GracefulRestart_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // GracefulRestartEnabled
  Status = GetRedfishPropertyBoolean (Cs, TempJsonObj, "GracefulRestartEnabled", &(*Dst)->GracefulRestartEnabled);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // HelperModeEnabled
  Status = GetRedfishPropertyBoolean (Cs, TempJsonObj, "HelperModeEnabled", &(*Dst)->HelperModeEnabled);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // StaleRoutesTimeSeconds
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "StaleRoutesTimeSeconds", &(*Dst)->StaleRoutesTimeSeconds);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // TimeSeconds
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "TimeSeconds", &(*Dst)->TimeSeconds);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
//
//Generate C structure for MultiplePaths
//
static RedfishCS_status GenMultiplePathsCs(RedfishAddressPool_V1_1_1_AddressPool_CS *Cs, json_t *JsonObj, char *Key, RedfishAddressPool_V1_1_1_MultiplePaths_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishAddressPool_V1_1_1_MultiplePaths_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // MaximumPaths
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "MaximumPaths", &(*Dst)->MaximumPaths);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // UseMultiplePathsEnabled
  Status = GetRedfishPropertyBoolean (Cs, TempJsonObj, "UseMultiplePathsEnabled", &(*Dst)->UseMultiplePathsEnabled);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
//
//Generate C structure for EBGP
//
static RedfishCS_status GenEBGPCs(RedfishAddressPool_V1_1_1_AddressPool_CS *Cs, json_t *JsonObj, char *Key, RedfishAddressPool_V1_1_1_EBGP_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishAddressPool_V1_1_1_EBGP_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // ASNumberRange
  Status = GenASNumberRangeCs (Cs, TempJsonObj, "ASNumberRange", &(*Dst)->ASNumberRange);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // AllowDuplicateASEnabled
  Status = GetRedfishPropertyBoolean (Cs, TempJsonObj, "AllowDuplicateASEnabled", &(*Dst)->AllowDuplicateASEnabled);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // AllowOverrideASEnabled
  Status = GetRedfishPropertyBoolean (Cs, TempJsonObj, "AllowOverrideASEnabled", &(*Dst)->AllowOverrideASEnabled);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // AlwaysCompareMEDEnabled
  Status = GetRedfishPropertyBoolean (Cs, TempJsonObj, "AlwaysCompareMEDEnabled", &(*Dst)->AlwaysCompareMEDEnabled);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // BGPLocalPreference
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "BGPLocalPreference", &(*Dst)->BGPLocalPreference);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // BGPNeighbor
  Status = GenBGPNeighborCs (Cs, TempJsonObj, "BGPNeighbor", &(*Dst)->BGPNeighbor);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // BGPRoute
  Status = GenBGPRouteCs (Cs, TempJsonObj, "BGPRoute", &(*Dst)->BGPRoute);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // BGPWeight
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "BGPWeight", &(*Dst)->BGPWeight);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // GracefulRestart
  Status = GenGracefulRestartCs (Cs, TempJsonObj, "GracefulRestart", &(*Dst)->GracefulRestart);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // MED
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "MED", &(*Dst)->MED);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // MultihopEnabled
  Status = GetRedfishPropertyBoolean (Cs, TempJsonObj, "MultihopEnabled", &(*Dst)->MultihopEnabled);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // MultihopTTL
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "MultihopTTL", &(*Dst)->MultihopTTL);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // MultiplePaths
  Status = GenMultiplePathsCs (Cs, TempJsonObj, "MultiplePaths", &(*Dst)->MultiplePaths);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // SendCommunityEnabled
  Status = GetRedfishPropertyBoolean (Cs, TempJsonObj, "SendCommunityEnabled", &(*Dst)->SendCommunityEnabled);
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
static RedfishCS_status GenRedfishCS_char_ArrayCs(RedfishAddressPool_V1_1_1_AddressPool_CS *Cs, json_t *JsonObj, char *Key, RedfishCS_char_Array **Dst)
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
//Generate C structure for DHCP
//
static RedfishCS_status GenDHCPCs(RedfishAddressPool_V1_1_1_AddressPool_CS *Cs, json_t *JsonObj, char *Key, RedfishAddressPool_V1_1_1_DHCP_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishAddressPool_V1_1_1_DHCP_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // DHCPInterfaceMTUBytes
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "DHCPInterfaceMTUBytes", &(*Dst)->DHCPInterfaceMTUBytes);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // DHCPRelayEnabled
  Status = GetRedfishPropertyBoolean (Cs, TempJsonObj, "DHCPRelayEnabled", &(*Dst)->DHCPRelayEnabled);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // DHCPServer
  Status = GenRedfishCS_char_ArrayCs (Cs, TempJsonObj, "DHCPServer", &(*Dst)->DHCPServer);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
//
//Generate C structure for EBGPAddressRange
//
static RedfishCS_status GenIPv4AddressRangeCs(RedfishAddressPool_V1_1_1_AddressPool_CS *Cs, json_t *JsonObj, char *Key, RedfishAddressPool_V1_1_1_IPv4AddressRange_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishAddressPool_V1_1_1_IPv4AddressRange_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // Lower
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "Lower", &(*Dst)->Lower);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Upper
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "Upper", &(*Dst)->Upper);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
//
//Generate C structure for IPv4
//
static RedfishCS_status GenIPv4Cs(RedfishAddressPool_V1_1_1_AddressPool_CS *Cs, json_t *JsonObj, char *Key, RedfishAddressPool_V1_1_1_IPv4_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishAddressPool_V1_1_1_IPv4_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // AnycastGatewayIPAddress
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "AnycastGatewayIPAddress", &(*Dst)->AnycastGatewayIPAddress);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // AnycastGatewayMACAddress
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "AnycastGatewayMACAddress", &(*Dst)->AnycastGatewayMACAddress);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // DHCP
  Status = GenDHCPCs (Cs, TempJsonObj, "DHCP", &(*Dst)->DHCP);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // DNSDomainName
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "DNSDomainName", &(*Dst)->DNSDomainName);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // DNSServer
  Status = GenRedfishCS_char_ArrayCs (Cs, TempJsonObj, "DNSServer", &(*Dst)->DNSServer);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // DistributeIntoUnderlayEnabled
  Status = GetRedfishPropertyBoolean (Cs, TempJsonObj, "DistributeIntoUnderlayEnabled", &(*Dst)->DistributeIntoUnderlayEnabled);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // EBGPAddressRange
  Status = GenIPv4AddressRangeCs (Cs, TempJsonObj, "EBGPAddressRange", &(*Dst)->EBGPAddressRange);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // FabricLinkAddressRange
  Status = GenIPv4AddressRangeCs (Cs, TempJsonObj, "FabricLinkAddressRange", &(*Dst)->FabricLinkAddressRange);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // GatewayIPAddress
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "GatewayIPAddress", &(*Dst)->GatewayIPAddress);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // HostAddressRange
  Status = GenIPv4AddressRangeCs (Cs, TempJsonObj, "HostAddressRange", &(*Dst)->HostAddressRange);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // IBGPAddressRange
  Status = GenIPv4AddressRangeCs (Cs, TempJsonObj, "IBGPAddressRange", &(*Dst)->IBGPAddressRange);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // LoopbackAddressRange
  Status = GenIPv4AddressRangeCs (Cs, TempJsonObj, "LoopbackAddressRange", &(*Dst)->LoopbackAddressRange);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ManagementAddressRange
  Status = GenIPv4AddressRangeCs (Cs, TempJsonObj, "ManagementAddressRange", &(*Dst)->ManagementAddressRange);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // NTPOffsetHoursMinutes
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "NTPOffsetHoursMinutes", &(*Dst)->NTPOffsetHoursMinutes);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // NTPServer
  Status = GenRedfishCS_char_ArrayCs (Cs, TempJsonObj, "NTPServer", &(*Dst)->NTPServer);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // NTPTimezone
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "NTPTimezone", &(*Dst)->NTPTimezone);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // NativeVLAN
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "NativeVLAN", &(*Dst)->NativeVLAN);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // VLANIdentifierAddressRange
  Status = GenVLANIdentifierAddressRangeCs (Cs, TempJsonObj, "VLANIdentifierAddressRange", &(*Dst)->VLANIdentifierAddressRange);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
//
//Generate C structure for MultiProtocolIBGP
//
static RedfishCS_status GenCommonBGPPropertiesCs(RedfishAddressPool_V1_1_1_AddressPool_CS *Cs, json_t *JsonObj, char *Key, RedfishAddressPool_V1_1_1_CommonBGPProperties_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishAddressPool_V1_1_1_CommonBGPProperties_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // ASNumberRange
  Status = GenASNumberRangeCs (Cs, TempJsonObj, "ASNumberRange", &(*Dst)->ASNumberRange);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // BGPNeighbor
  Status = GenBGPNeighborCs (Cs, TempJsonObj, "BGPNeighbor", &(*Dst)->BGPNeighbor);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // BGPRoute
  Status = GenBGPRouteCs (Cs, TempJsonObj, "BGPRoute", &(*Dst)->BGPRoute);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // GracefulRestart
  Status = GenGracefulRestartCs (Cs, TempJsonObj, "GracefulRestart", &(*Dst)->GracefulRestart);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // MultiplePaths
  Status = GenMultiplePathsCs (Cs, TempJsonObj, "MultiplePaths", &(*Dst)->MultiplePaths);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // SendCommunityEnabled
  Status = GetRedfishPropertyBoolean (Cs, TempJsonObj, "SendCommunityEnabled", &(*Dst)->SendCommunityEnabled);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
//
//Generate C structure for Ethernet
//
static RedfishCS_status GenEthernetCs(RedfishAddressPool_V1_1_1_AddressPool_CS *Cs, json_t *JsonObj, char *Key, RedfishAddressPool_V1_1_1_Ethernet_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishAddressPool_V1_1_1_Ethernet_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // BFDSingleHopOnly
  Status = GenBFDSingleHopOnlyCs (Cs, TempJsonObj, "BFDSingleHopOnly", &(*Dst)->BFDSingleHopOnly);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // BGPEvpn
  Status = GenBGPEvpnCs (Cs, TempJsonObj, "BGPEvpn", &(*Dst)->BGPEvpn);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // EBGP
  Status = GenEBGPCs (Cs, TempJsonObj, "EBGP", &(*Dst)->EBGP);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // IPv4
  Status = GenIPv4Cs (Cs, TempJsonObj, "IPv4", &(*Dst)->IPv4);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // MultiProtocolEBGP
  Status = GenEBGPCs (Cs, TempJsonObj, "MultiProtocolEBGP", &(*Dst)->MultiProtocolEBGP);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // MultiProtocolIBGP
  Status = GenCommonBGPPropertiesCs (Cs, TempJsonObj, "MultiProtocolIBGP", &(*Dst)->MultiProtocolIBGP);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
//
//Generate C structure for GenZ
//
static RedfishCS_status GenGenZCs(RedfishAddressPool_V1_1_1_AddressPool_CS *Cs, json_t *JsonObj, char *Key, RedfishAddressPool_V1_1_1_GenZ_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishAddressPool_V1_1_1_GenZ_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // AccessKey
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "AccessKey", &(*Dst)->AccessKey);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // MaxCID
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "MaxCID", &(*Dst)->MaxCID);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // MaxSID
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "MaxSID", &(*Dst)->MaxSID);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // MinCID
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "MinCID", &(*Dst)->MinCID);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // MinSID
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "MinSID", &(*Dst)->MinSID);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
//
//Generate C structure for Oem
//
static RedfishCS_status GenOemCs(RedfishAddressPool_V1_1_1_AddressPool_CS *Cs, json_t *JsonObj, char *Key, RedfishResource_Oem_CS **Dst)
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
static RedfishCS_status GenLinksCs(RedfishAddressPool_V1_1_1_AddressPool_CS *Cs, json_t *JsonObj, char *Key, RedfishAddressPool_V1_1_1_Links_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishAddressPool_V1_1_1_Links_CS), (RedfishCS_void **)Dst);
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

  // Oem
  Status = GenOemCs (Cs, TempJsonObj, "Oem", &(*Dst)->Oem);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Zones
  InitializeLinkHead (&(*Dst)->Zones);
  Status = CreateCsUriOrJsonByNodeArray (Cs, TempJsonObj, "Zones", Cs->Header.ThisUri, &(*Dst)->Zones);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Zones@odata.count
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "Zones@odata.count", &(*Dst)->Zonesodata_count);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
//
//Generate C structure for OriginOfCondition
//
static RedfishCS_status GenidRefCs(RedfishAddressPool_V1_1_1_AddressPool_CS *Cs, json_t *JsonObj, char *Key, Redfishodatav4_idRef_CS **Dst)
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
static RedfishCS_status GenCondition_Array_ElementCs(RedfishAddressPool_V1_1_1_AddressPool_CS *Cs, json_t *JsonObj, RedfishCS_uint64 Index,  RedfishResource_Condition_CS **Dst)
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
static RedfishCS_status GenCondition_ArrayCs(RedfishAddressPool_V1_1_1_AddressPool_CS *Cs, json_t *JsonObj, char *Key, RedfishResource_Condition_Array_CS **Dst)
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
static RedfishCS_status GenStatusCs(RedfishAddressPool_V1_1_1_AddressPool_CS *Cs, json_t *JsonObj, char *Key, RedfishResource_Status_CS **Dst)
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
static RedfishCS_status CS_To_JSON_ActionsOem(json_t *CsJson, char *Key, RedfishAddressPool_V1_1_1_OemActions_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // Check if this is RedfishCS_Type_CS_EmptyProp.
  CsEmptyPropLinkToJson(CsJson, Key, &CSPtr->Prop);
  // No JSON property for this structure.
  return RedfishCS_status_success;
}
static RedfishCS_status CS_To_JSON_Actions(json_t *CsJson, char *Key, RedfishAddressPool_V1_1_1_Actions_CS *CSPtr)
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
static RedfishCS_status CS_To_JSON_EthernetBFDSingleHopOnly(json_t *CsJson, char *Key, RedfishAddressPool_V1_1_1_BFDSingleHopOnly_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // DemandModeEnabled 
  if (InsertJsonBoolObj (CsJson, "DemandModeEnabled", CSPtr->DemandModeEnabled) != RedfishCS_status_success) {goto Error;}

  // DesiredMinTxIntervalMilliseconds 
  if (InsertJsonInt64Obj (CsJson, "DesiredMinTxIntervalMilliseconds", CSPtr->DesiredMinTxIntervalMilliseconds) != RedfishCS_status_success) {goto Error;}

  // KeyChain 
  if (InsertJsonStringObj (CsJson, "KeyChain", CSPtr->KeyChain) != RedfishCS_status_success) {goto Error;}

  // LocalMultiplier 
  if (InsertJsonInt64Obj (CsJson, "LocalMultiplier", CSPtr->LocalMultiplier) != RedfishCS_status_success) {goto Error;}

  // MeticulousModeEnabled 
  if (InsertJsonBoolObj (CsJson, "MeticulousModeEnabled", CSPtr->MeticulousModeEnabled) != RedfishCS_status_success) {goto Error;}

  // RequiredMinRxIntervalMilliseconds 
  if (InsertJsonInt64Obj (CsJson, "RequiredMinRxIntervalMilliseconds", CSPtr->RequiredMinRxIntervalMilliseconds) != RedfishCS_status_success) {goto Error;}

  // SourcePort 
  if (InsertJsonInt64Obj (CsJson, "SourcePort", CSPtr->SourcePort) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_EthernetBGPEvpnESINumberRange(json_t *CsJson, char *Key, RedfishAddressPool_V1_1_1_ESINumberRange_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // Lower 
  if (InsertJsonInt64Obj (CsJson, "Lower", CSPtr->Lower) != RedfishCS_status_success) {goto Error;}

  // Upper 
  if (InsertJsonInt64Obj (CsJson, "Upper", CSPtr->Upper) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_EthernetBGPEvpnEVINumberRange(json_t *CsJson, char *Key, RedfishAddressPool_V1_1_1_EVINumberRange_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // Lower 
  if (InsertJsonInt64Obj (CsJson, "Lower", CSPtr->Lower) != RedfishCS_status_success) {goto Error;}

  // Upper 
  if (InsertJsonInt64Obj (CsJson, "Upper", CSPtr->Upper) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_EthernetBGPEvpnRouteDistinguisherRange(json_t *CsJson, char *Key, RedfishAddressPool_V1_1_1_RouteDistinguisherRange_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // Lower 
  if (InsertJsonInt64Obj (CsJson, "Lower", CSPtr->Lower) != RedfishCS_status_success) {goto Error;}

  // Upper 
  if (InsertJsonInt64Obj (CsJson, "Upper", CSPtr->Upper) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_EthernetBGPEvpnRouteTargetRange(json_t *CsJson, char *Key, RedfishAddressPool_V1_1_1_RouteTargetRange_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // Lower 
  if (InsertJsonInt64Obj (CsJson, "Lower", CSPtr->Lower) != RedfishCS_status_success) {goto Error;}

  // Upper 
  if (InsertJsonInt64Obj (CsJson, "Upper", CSPtr->Upper) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_EthernetBGPEvpnVLANIdentifierAddressRange(json_t *CsJson, char *Key, RedfishAddressPool_V1_1_1_VLANIdentifierAddressRange_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // Lower 
  if (InsertJsonInt64Obj (CsJson, "Lower", CSPtr->Lower) != RedfishCS_status_success) {goto Error;}

  // Upper 
  if (InsertJsonInt64Obj (CsJson, "Upper", CSPtr->Upper) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_EthernetBGPEvpn(json_t *CsJson, char *Key, RedfishAddressPool_V1_1_1_BGPEvpn_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // ARPProxyEnabled 
  if (InsertJsonBoolObj (CsJson, "ARPProxyEnabled", CSPtr->ARPProxyEnabled) != RedfishCS_status_success) {goto Error;}

  // ARPSupressionEnabled 
  if (InsertJsonBoolObj (CsJson, "ARPSupressionEnabled", CSPtr->ARPSupressionEnabled) != RedfishCS_status_success) {goto Error;}

  // AnycastGatewayIPAddress 
  if (InsertJsonStringObj (CsJson, "AnycastGatewayIPAddress", CSPtr->AnycastGatewayIPAddress) != RedfishCS_status_success) {goto Error;}

  // AnycastGatewayMACAddress 
  if (InsertJsonStringObj (CsJson, "AnycastGatewayMACAddress", CSPtr->AnycastGatewayMACAddress) != RedfishCS_status_success) {goto Error;}

  // ESINumberRange
  if (CS_To_JSON_EthernetBGPEvpnESINumberRange(CsJson, "ESINumberRange", CSPtr->ESINumberRange) != RedfishCS_status_success) {goto Error;}

  // EVINumberRange
  if (CS_To_JSON_EthernetBGPEvpnEVINumberRange(CsJson, "EVINumberRange", CSPtr->EVINumberRange) != RedfishCS_status_success) {goto Error;}

  // GatewayIPAddress 
  if (InsertJsonStringObj (CsJson, "GatewayIPAddress", CSPtr->GatewayIPAddress) != RedfishCS_status_success) {goto Error;}

  // NDPProxyEnabled 
  if (InsertJsonBoolObj (CsJson, "NDPProxyEnabled", CSPtr->NDPProxyEnabled) != RedfishCS_status_success) {goto Error;}

  // NDPSupressionEnabled 
  if (InsertJsonBoolObj (CsJson, "NDPSupressionEnabled", CSPtr->NDPSupressionEnabled) != RedfishCS_status_success) {goto Error;}

  // RouteDistinguisherRange
  if (CS_To_JSON_EthernetBGPEvpnRouteDistinguisherRange(CsJson, "RouteDistinguisherRange", CSPtr->RouteDistinguisherRange) != RedfishCS_status_success) {goto Error;}

  // RouteTargetRange
  if (CS_To_JSON_EthernetBGPEvpnRouteTargetRange(CsJson, "RouteTargetRange", CSPtr->RouteTargetRange) != RedfishCS_status_success) {goto Error;}

  // UnderlayMulticastEnabled 
  if (InsertJsonBoolObj (CsJson, "UnderlayMulticastEnabled", CSPtr->UnderlayMulticastEnabled) != RedfishCS_status_success) {goto Error;}

  // UnknownUnicastSuppressionEnabled 
  if (InsertJsonBoolObj (CsJson, "UnknownUnicastSuppressionEnabled", CSPtr->UnknownUnicastSuppressionEnabled) != RedfishCS_status_success) {goto Error;}

  // VLANIdentifierAddressRange
  if (CS_To_JSON_EthernetBGPEvpnVLANIdentifierAddressRange(CsJson, "VLANIdentifierAddressRange", CSPtr->VLANIdentifierAddressRange) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_EthernetEBGPASNumberRange(json_t *CsJson, char *Key, RedfishAddressPool_V1_1_1_ASNumberRange_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // Lower 
  if (InsertJsonInt64Obj (CsJson, "Lower", CSPtr->Lower) != RedfishCS_status_success) {goto Error;}

  // Upper 
  if (InsertJsonInt64Obj (CsJson, "Upper", CSPtr->Upper) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_EthernetEBGPBGPNeighborMaxPrefix(json_t *CsJson, char *Key, RedfishAddressPool_V1_1_1_MaxPrefix_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // MaxPrefixNumber 
  if (InsertJsonInt64Obj (CsJson, "MaxPrefixNumber", CSPtr->MaxPrefixNumber) != RedfishCS_status_success) {goto Error;}

  // RestartTimerSeconds 
  if (InsertJsonInt64Obj (CsJson, "RestartTimerSeconds", CSPtr->RestartTimerSeconds) != RedfishCS_status_success) {goto Error;}

  // ShutdownThresholdPercentage 
  if (InsertJsonInt64Obj (CsJson, "ShutdownThresholdPercentage", CSPtr->ShutdownThresholdPercentage) != RedfishCS_status_success) {goto Error;}

  // ThresholdWarningOnlyEnabled 
  if (InsertJsonBoolObj (CsJson, "ThresholdWarningOnlyEnabled", CSPtr->ThresholdWarningOnlyEnabled) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_EthernetEBGPBGPNeighbor(json_t *CsJson, char *Key, RedfishAddressPool_V1_1_1_BGPNeighbor_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // Address 
  if (InsertJsonStringObj (CsJson, "Address", CSPtr->Address) != RedfishCS_status_success) {goto Error;}

  // AllowOwnASEnabled 
  if (InsertJsonBoolObj (CsJson, "AllowOwnASEnabled", CSPtr->AllowOwnASEnabled) != RedfishCS_status_success) {goto Error;}

  // ConnectRetrySeconds 
  if (InsertJsonInt64Obj (CsJson, "ConnectRetrySeconds", CSPtr->ConnectRetrySeconds) != RedfishCS_status_success) {goto Error;}

  // HoldTimeSeconds 
  if (InsertJsonInt64Obj (CsJson, "HoldTimeSeconds", CSPtr->HoldTimeSeconds) != RedfishCS_status_success) {goto Error;}

  // KeepaliveIntervalSeconds 
  if (InsertJsonInt64Obj (CsJson, "KeepaliveIntervalSeconds", CSPtr->KeepaliveIntervalSeconds) != RedfishCS_status_success) {goto Error;}

  // LocalAS 
  if (InsertJsonInt64Obj (CsJson, "LocalAS", CSPtr->LocalAS) != RedfishCS_status_success) {goto Error;}

  // LogStateChangesEnabled 
  if (InsertJsonBoolObj (CsJson, "LogStateChangesEnabled", CSPtr->LogStateChangesEnabled) != RedfishCS_status_success) {goto Error;}

  // MaxPrefix
  if (CS_To_JSON_EthernetEBGPBGPNeighborMaxPrefix(CsJson, "MaxPrefix", CSPtr->MaxPrefix) != RedfishCS_status_success) {goto Error;}

  // MinimumAdvertisementIntervalSeconds 
  if (InsertJsonInt64Obj (CsJson, "MinimumAdvertisementIntervalSeconds", CSPtr->MinimumAdvertisementIntervalSeconds) != RedfishCS_status_success) {goto Error;}

  // PassiveModeEnabled 
  if (InsertJsonBoolObj (CsJson, "PassiveModeEnabled", CSPtr->PassiveModeEnabled) != RedfishCS_status_success) {goto Error;}

  // PathMTUDiscoveryEnabled 
  if (InsertJsonBoolObj (CsJson, "PathMTUDiscoveryEnabled", CSPtr->PathMTUDiscoveryEnabled) != RedfishCS_status_success) {goto Error;}

  // PeerAS 
  if (InsertJsonInt64Obj (CsJson, "PeerAS", CSPtr->PeerAS) != RedfishCS_status_success) {goto Error;}

  // ReplacePeerASEnabled 
  if (InsertJsonBoolObj (CsJson, "ReplacePeerASEnabled", CSPtr->ReplacePeerASEnabled) != RedfishCS_status_success) {goto Error;}

  // TCPMaxSegmentSizeBytes 
  if (InsertJsonInt64Obj (CsJson, "TCPMaxSegmentSizeBytes", CSPtr->TCPMaxSegmentSizeBytes) != RedfishCS_status_success) {goto Error;}

  // TreatAsWithdrawEnabled 
  if (InsertJsonBoolObj (CsJson, "TreatAsWithdrawEnabled", CSPtr->TreatAsWithdrawEnabled) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_EthernetEBGPBGPRoute(json_t *CsJson, char *Key, RedfishAddressPool_V1_1_1_BGPRoute_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // AdvertiseInactiveRoutesEnabled 
  if (InsertJsonBoolObj (CsJson, "AdvertiseInactiveRoutesEnabled", CSPtr->AdvertiseInactiveRoutesEnabled) != RedfishCS_status_success) {goto Error;}

  // DistanceExternal 
  if (InsertJsonInt64Obj (CsJson, "DistanceExternal", CSPtr->DistanceExternal) != RedfishCS_status_success) {goto Error;}

  // DistanceInternal 
  if (InsertJsonInt64Obj (CsJson, "DistanceInternal", CSPtr->DistanceInternal) != RedfishCS_status_success) {goto Error;}

  // DistanceLocal 
  if (InsertJsonInt64Obj (CsJson, "DistanceLocal", CSPtr->DistanceLocal) != RedfishCS_status_success) {goto Error;}

  // ExternalCompareRouterIdEnabled 
  if (InsertJsonBoolObj (CsJson, "ExternalCompareRouterIdEnabled", CSPtr->ExternalCompareRouterIdEnabled) != RedfishCS_status_success) {goto Error;}

  // FlapDampingEnabled 
  if (InsertJsonBoolObj (CsJson, "FlapDampingEnabled", CSPtr->FlapDampingEnabled) != RedfishCS_status_success) {goto Error;}

  // SendDefaultRouteEnabled 
  if (InsertJsonBoolObj (CsJson, "SendDefaultRouteEnabled", CSPtr->SendDefaultRouteEnabled) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_EthernetEBGPGracefulRestart(json_t *CsJson, char *Key, RedfishAddressPool_V1_1_1_GracefulRestart_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // GracefulRestartEnabled 
  if (InsertJsonBoolObj (CsJson, "GracefulRestartEnabled", CSPtr->GracefulRestartEnabled) != RedfishCS_status_success) {goto Error;}

  // HelperModeEnabled 
  if (InsertJsonBoolObj (CsJson, "HelperModeEnabled", CSPtr->HelperModeEnabled) != RedfishCS_status_success) {goto Error;}

  // StaleRoutesTimeSeconds 
  if (InsertJsonInt64Obj (CsJson, "StaleRoutesTimeSeconds", CSPtr->StaleRoutesTimeSeconds) != RedfishCS_status_success) {goto Error;}

  // TimeSeconds 
  if (InsertJsonInt64Obj (CsJson, "TimeSeconds", CSPtr->TimeSeconds) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_EthernetEBGPMultiplePaths(json_t *CsJson, char *Key, RedfishAddressPool_V1_1_1_MultiplePaths_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // MaximumPaths 
  if (InsertJsonInt64Obj (CsJson, "MaximumPaths", CSPtr->MaximumPaths) != RedfishCS_status_success) {goto Error;}

  // UseMultiplePathsEnabled 
  if (InsertJsonBoolObj (CsJson, "UseMultiplePathsEnabled", CSPtr->UseMultiplePathsEnabled) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_EthernetEBGP(json_t *CsJson, char *Key, RedfishAddressPool_V1_1_1_EBGP_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // ASNumberRange
  if (CS_To_JSON_EthernetEBGPASNumberRange(CsJson, "ASNumberRange", CSPtr->ASNumberRange) != RedfishCS_status_success) {goto Error;}

  // AllowDuplicateASEnabled 
  if (InsertJsonBoolObj (CsJson, "AllowDuplicateASEnabled", CSPtr->AllowDuplicateASEnabled) != RedfishCS_status_success) {goto Error;}

  // AllowOverrideASEnabled 
  if (InsertJsonBoolObj (CsJson, "AllowOverrideASEnabled", CSPtr->AllowOverrideASEnabled) != RedfishCS_status_success) {goto Error;}

  // AlwaysCompareMEDEnabled 
  if (InsertJsonBoolObj (CsJson, "AlwaysCompareMEDEnabled", CSPtr->AlwaysCompareMEDEnabled) != RedfishCS_status_success) {goto Error;}

  // BGPLocalPreference 
  if (InsertJsonInt64Obj (CsJson, "BGPLocalPreference", CSPtr->BGPLocalPreference) != RedfishCS_status_success) {goto Error;}

  // BGPNeighbor
  if (CS_To_JSON_EthernetEBGPBGPNeighbor(CsJson, "BGPNeighbor", CSPtr->BGPNeighbor) != RedfishCS_status_success) {goto Error;}

  // BGPRoute
  if (CS_To_JSON_EthernetEBGPBGPRoute(CsJson, "BGPRoute", CSPtr->BGPRoute) != RedfishCS_status_success) {goto Error;}

  // BGPWeight 
  if (InsertJsonInt64Obj (CsJson, "BGPWeight", CSPtr->BGPWeight) != RedfishCS_status_success) {goto Error;}

  // GracefulRestart
  if (CS_To_JSON_EthernetEBGPGracefulRestart(CsJson, "GracefulRestart", CSPtr->GracefulRestart) != RedfishCS_status_success) {goto Error;}

  // MED 
  if (InsertJsonInt64Obj (CsJson, "MED", CSPtr->MED) != RedfishCS_status_success) {goto Error;}

  // MultihopEnabled 
  if (InsertJsonBoolObj (CsJson, "MultihopEnabled", CSPtr->MultihopEnabled) != RedfishCS_status_success) {goto Error;}

  // MultihopTTL 
  if (InsertJsonInt64Obj (CsJson, "MultihopTTL", CSPtr->MultihopTTL) != RedfishCS_status_success) {goto Error;}

  // MultiplePaths
  if (CS_To_JSON_EthernetEBGPMultiplePaths(CsJson, "MultiplePaths", CSPtr->MultiplePaths) != RedfishCS_status_success) {goto Error;}

  // SendCommunityEnabled 
  if (InsertJsonBoolObj (CsJson, "SendCommunityEnabled", CSPtr->SendCommunityEnabled) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_EthernetIPv4DHCP(json_t *CsJson, char *Key, RedfishAddressPool_V1_1_1_DHCP_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // DHCPInterfaceMTUBytes 
  if (InsertJsonInt64Obj (CsJson, "DHCPInterfaceMTUBytes", CSPtr->DHCPInterfaceMTUBytes) != RedfishCS_status_success) {goto Error;}

  // DHCPRelayEnabled 
  if (InsertJsonBoolObj (CsJson, "DHCPRelayEnabled", CSPtr->DHCPRelayEnabled) != RedfishCS_status_success) {goto Error;}

  // DHCPServer 
  if (InsertJsonStringArrayObj (CsJson, "DHCPServer", CSPtr->DHCPServer) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_EthernetIPv4EBGPAddressRange(json_t *CsJson, char *Key, RedfishAddressPool_V1_1_1_IPv4AddressRange_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // Lower 
  if (InsertJsonStringObj (CsJson, "Lower", CSPtr->Lower) != RedfishCS_status_success) {goto Error;}

  // Upper 
  if (InsertJsonStringObj (CsJson, "Upper", CSPtr->Upper) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_EthernetIPv4FabricLinkAddressRange(json_t *CsJson, char *Key, RedfishAddressPool_V1_1_1_IPv4AddressRange_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // Lower 
  if (InsertJsonStringObj (CsJson, "Lower", CSPtr->Lower) != RedfishCS_status_success) {goto Error;}

  // Upper 
  if (InsertJsonStringObj (CsJson, "Upper", CSPtr->Upper) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_EthernetIPv4HostAddressRange(json_t *CsJson, char *Key, RedfishAddressPool_V1_1_1_IPv4AddressRange_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // Lower 
  if (InsertJsonStringObj (CsJson, "Lower", CSPtr->Lower) != RedfishCS_status_success) {goto Error;}

  // Upper 
  if (InsertJsonStringObj (CsJson, "Upper", CSPtr->Upper) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_EthernetIPv4IBGPAddressRange(json_t *CsJson, char *Key, RedfishAddressPool_V1_1_1_IPv4AddressRange_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // Lower 
  if (InsertJsonStringObj (CsJson, "Lower", CSPtr->Lower) != RedfishCS_status_success) {goto Error;}

  // Upper 
  if (InsertJsonStringObj (CsJson, "Upper", CSPtr->Upper) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_EthernetIPv4LoopbackAddressRange(json_t *CsJson, char *Key, RedfishAddressPool_V1_1_1_IPv4AddressRange_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // Lower 
  if (InsertJsonStringObj (CsJson, "Lower", CSPtr->Lower) != RedfishCS_status_success) {goto Error;}

  // Upper 
  if (InsertJsonStringObj (CsJson, "Upper", CSPtr->Upper) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_EthernetIPv4ManagementAddressRange(json_t *CsJson, char *Key, RedfishAddressPool_V1_1_1_IPv4AddressRange_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // Lower 
  if (InsertJsonStringObj (CsJson, "Lower", CSPtr->Lower) != RedfishCS_status_success) {goto Error;}

  // Upper 
  if (InsertJsonStringObj (CsJson, "Upper", CSPtr->Upper) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_EthernetIPv4VLANIdentifierAddressRange(json_t *CsJson, char *Key, RedfishAddressPool_V1_1_1_VLANIdentifierAddressRange_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // Lower 
  if (InsertJsonInt64Obj (CsJson, "Lower", CSPtr->Lower) != RedfishCS_status_success) {goto Error;}

  // Upper 
  if (InsertJsonInt64Obj (CsJson, "Upper", CSPtr->Upper) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_EthernetIPv4(json_t *CsJson, char *Key, RedfishAddressPool_V1_1_1_IPv4_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // AnycastGatewayIPAddress 
  if (InsertJsonStringObj (CsJson, "AnycastGatewayIPAddress", CSPtr->AnycastGatewayIPAddress) != RedfishCS_status_success) {goto Error;}

  // AnycastGatewayMACAddress 
  if (InsertJsonStringObj (CsJson, "AnycastGatewayMACAddress", CSPtr->AnycastGatewayMACAddress) != RedfishCS_status_success) {goto Error;}

  // DHCP
  if (CS_To_JSON_EthernetIPv4DHCP(CsJson, "DHCP", CSPtr->DHCP) != RedfishCS_status_success) {goto Error;}

  // DNSDomainName 
  if (InsertJsonStringObj (CsJson, "DNSDomainName", CSPtr->DNSDomainName) != RedfishCS_status_success) {goto Error;}

  // DNSServer 
  if (InsertJsonStringArrayObj (CsJson, "DNSServer", CSPtr->DNSServer) != RedfishCS_status_success) {goto Error;}

  // DistributeIntoUnderlayEnabled 
  if (InsertJsonBoolObj (CsJson, "DistributeIntoUnderlayEnabled", CSPtr->DistributeIntoUnderlayEnabled) != RedfishCS_status_success) {goto Error;}

  // EBGPAddressRange
  if (CS_To_JSON_EthernetIPv4EBGPAddressRange(CsJson, "EBGPAddressRange", CSPtr->EBGPAddressRange) != RedfishCS_status_success) {goto Error;}

  // FabricLinkAddressRange
  if (CS_To_JSON_EthernetIPv4FabricLinkAddressRange(CsJson, "FabricLinkAddressRange", CSPtr->FabricLinkAddressRange) != RedfishCS_status_success) {goto Error;}

  // GatewayIPAddress 
  if (InsertJsonStringObj (CsJson, "GatewayIPAddress", CSPtr->GatewayIPAddress) != RedfishCS_status_success) {goto Error;}

  // HostAddressRange
  if (CS_To_JSON_EthernetIPv4HostAddressRange(CsJson, "HostAddressRange", CSPtr->HostAddressRange) != RedfishCS_status_success) {goto Error;}

  // IBGPAddressRange
  if (CS_To_JSON_EthernetIPv4IBGPAddressRange(CsJson, "IBGPAddressRange", CSPtr->IBGPAddressRange) != RedfishCS_status_success) {goto Error;}

  // LoopbackAddressRange
  if (CS_To_JSON_EthernetIPv4LoopbackAddressRange(CsJson, "LoopbackAddressRange", CSPtr->LoopbackAddressRange) != RedfishCS_status_success) {goto Error;}

  // ManagementAddressRange
  if (CS_To_JSON_EthernetIPv4ManagementAddressRange(CsJson, "ManagementAddressRange", CSPtr->ManagementAddressRange) != RedfishCS_status_success) {goto Error;}

  // NTPOffsetHoursMinutes 
  if (InsertJsonInt64Obj (CsJson, "NTPOffsetHoursMinutes", CSPtr->NTPOffsetHoursMinutes) != RedfishCS_status_success) {goto Error;}

  // NTPServer 
  if (InsertJsonStringArrayObj (CsJson, "NTPServer", CSPtr->NTPServer) != RedfishCS_status_success) {goto Error;}

  // NTPTimezone 
  if (InsertJsonStringObj (CsJson, "NTPTimezone", CSPtr->NTPTimezone) != RedfishCS_status_success) {goto Error;}

  // NativeVLAN 
  if (InsertJsonInt64Obj (CsJson, "NativeVLAN", CSPtr->NativeVLAN) != RedfishCS_status_success) {goto Error;}

  // VLANIdentifierAddressRange
  if (CS_To_JSON_EthernetIPv4VLANIdentifierAddressRange(CsJson, "VLANIdentifierAddressRange", CSPtr->VLANIdentifierAddressRange) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_EthernetMultiProtocolEBGPASNumberRange(json_t *CsJson, char *Key, RedfishAddressPool_V1_1_1_ASNumberRange_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // Lower 
  if (InsertJsonInt64Obj (CsJson, "Lower", CSPtr->Lower) != RedfishCS_status_success) {goto Error;}

  // Upper 
  if (InsertJsonInt64Obj (CsJson, "Upper", CSPtr->Upper) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_EthernetMultiProtocolEBGPBGPNeighborMaxPrefix(json_t *CsJson, char *Key, RedfishAddressPool_V1_1_1_MaxPrefix_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // MaxPrefixNumber 
  if (InsertJsonInt64Obj (CsJson, "MaxPrefixNumber", CSPtr->MaxPrefixNumber) != RedfishCS_status_success) {goto Error;}

  // RestartTimerSeconds 
  if (InsertJsonInt64Obj (CsJson, "RestartTimerSeconds", CSPtr->RestartTimerSeconds) != RedfishCS_status_success) {goto Error;}

  // ShutdownThresholdPercentage 
  if (InsertJsonInt64Obj (CsJson, "ShutdownThresholdPercentage", CSPtr->ShutdownThresholdPercentage) != RedfishCS_status_success) {goto Error;}

  // ThresholdWarningOnlyEnabled 
  if (InsertJsonBoolObj (CsJson, "ThresholdWarningOnlyEnabled", CSPtr->ThresholdWarningOnlyEnabled) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_EthernetMultiProtocolEBGPBGPNeighbor(json_t *CsJson, char *Key, RedfishAddressPool_V1_1_1_BGPNeighbor_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // Address 
  if (InsertJsonStringObj (CsJson, "Address", CSPtr->Address) != RedfishCS_status_success) {goto Error;}

  // AllowOwnASEnabled 
  if (InsertJsonBoolObj (CsJson, "AllowOwnASEnabled", CSPtr->AllowOwnASEnabled) != RedfishCS_status_success) {goto Error;}

  // ConnectRetrySeconds 
  if (InsertJsonInt64Obj (CsJson, "ConnectRetrySeconds", CSPtr->ConnectRetrySeconds) != RedfishCS_status_success) {goto Error;}

  // HoldTimeSeconds 
  if (InsertJsonInt64Obj (CsJson, "HoldTimeSeconds", CSPtr->HoldTimeSeconds) != RedfishCS_status_success) {goto Error;}

  // KeepaliveIntervalSeconds 
  if (InsertJsonInt64Obj (CsJson, "KeepaliveIntervalSeconds", CSPtr->KeepaliveIntervalSeconds) != RedfishCS_status_success) {goto Error;}

  // LocalAS 
  if (InsertJsonInt64Obj (CsJson, "LocalAS", CSPtr->LocalAS) != RedfishCS_status_success) {goto Error;}

  // LogStateChangesEnabled 
  if (InsertJsonBoolObj (CsJson, "LogStateChangesEnabled", CSPtr->LogStateChangesEnabled) != RedfishCS_status_success) {goto Error;}

  // MaxPrefix
  if (CS_To_JSON_EthernetMultiProtocolEBGPBGPNeighborMaxPrefix(CsJson, "MaxPrefix", CSPtr->MaxPrefix) != RedfishCS_status_success) {goto Error;}

  // MinimumAdvertisementIntervalSeconds 
  if (InsertJsonInt64Obj (CsJson, "MinimumAdvertisementIntervalSeconds", CSPtr->MinimumAdvertisementIntervalSeconds) != RedfishCS_status_success) {goto Error;}

  // PassiveModeEnabled 
  if (InsertJsonBoolObj (CsJson, "PassiveModeEnabled", CSPtr->PassiveModeEnabled) != RedfishCS_status_success) {goto Error;}

  // PathMTUDiscoveryEnabled 
  if (InsertJsonBoolObj (CsJson, "PathMTUDiscoveryEnabled", CSPtr->PathMTUDiscoveryEnabled) != RedfishCS_status_success) {goto Error;}

  // PeerAS 
  if (InsertJsonInt64Obj (CsJson, "PeerAS", CSPtr->PeerAS) != RedfishCS_status_success) {goto Error;}

  // ReplacePeerASEnabled 
  if (InsertJsonBoolObj (CsJson, "ReplacePeerASEnabled", CSPtr->ReplacePeerASEnabled) != RedfishCS_status_success) {goto Error;}

  // TCPMaxSegmentSizeBytes 
  if (InsertJsonInt64Obj (CsJson, "TCPMaxSegmentSizeBytes", CSPtr->TCPMaxSegmentSizeBytes) != RedfishCS_status_success) {goto Error;}

  // TreatAsWithdrawEnabled 
  if (InsertJsonBoolObj (CsJson, "TreatAsWithdrawEnabled", CSPtr->TreatAsWithdrawEnabled) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_EthernetMultiProtocolEBGPBGPRoute(json_t *CsJson, char *Key, RedfishAddressPool_V1_1_1_BGPRoute_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // AdvertiseInactiveRoutesEnabled 
  if (InsertJsonBoolObj (CsJson, "AdvertiseInactiveRoutesEnabled", CSPtr->AdvertiseInactiveRoutesEnabled) != RedfishCS_status_success) {goto Error;}

  // DistanceExternal 
  if (InsertJsonInt64Obj (CsJson, "DistanceExternal", CSPtr->DistanceExternal) != RedfishCS_status_success) {goto Error;}

  // DistanceInternal 
  if (InsertJsonInt64Obj (CsJson, "DistanceInternal", CSPtr->DistanceInternal) != RedfishCS_status_success) {goto Error;}

  // DistanceLocal 
  if (InsertJsonInt64Obj (CsJson, "DistanceLocal", CSPtr->DistanceLocal) != RedfishCS_status_success) {goto Error;}

  // ExternalCompareRouterIdEnabled 
  if (InsertJsonBoolObj (CsJson, "ExternalCompareRouterIdEnabled", CSPtr->ExternalCompareRouterIdEnabled) != RedfishCS_status_success) {goto Error;}

  // FlapDampingEnabled 
  if (InsertJsonBoolObj (CsJson, "FlapDampingEnabled", CSPtr->FlapDampingEnabled) != RedfishCS_status_success) {goto Error;}

  // SendDefaultRouteEnabled 
  if (InsertJsonBoolObj (CsJson, "SendDefaultRouteEnabled", CSPtr->SendDefaultRouteEnabled) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_EthernetMultiProtocolEBGPGracefulRestart(json_t *CsJson, char *Key, RedfishAddressPool_V1_1_1_GracefulRestart_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // GracefulRestartEnabled 
  if (InsertJsonBoolObj (CsJson, "GracefulRestartEnabled", CSPtr->GracefulRestartEnabled) != RedfishCS_status_success) {goto Error;}

  // HelperModeEnabled 
  if (InsertJsonBoolObj (CsJson, "HelperModeEnabled", CSPtr->HelperModeEnabled) != RedfishCS_status_success) {goto Error;}

  // StaleRoutesTimeSeconds 
  if (InsertJsonInt64Obj (CsJson, "StaleRoutesTimeSeconds", CSPtr->StaleRoutesTimeSeconds) != RedfishCS_status_success) {goto Error;}

  // TimeSeconds 
  if (InsertJsonInt64Obj (CsJson, "TimeSeconds", CSPtr->TimeSeconds) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_EthernetMultiProtocolEBGPMultiplePaths(json_t *CsJson, char *Key, RedfishAddressPool_V1_1_1_MultiplePaths_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // MaximumPaths 
  if (InsertJsonInt64Obj (CsJson, "MaximumPaths", CSPtr->MaximumPaths) != RedfishCS_status_success) {goto Error;}

  // UseMultiplePathsEnabled 
  if (InsertJsonBoolObj (CsJson, "UseMultiplePathsEnabled", CSPtr->UseMultiplePathsEnabled) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_EthernetMultiProtocolEBGP(json_t *CsJson, char *Key, RedfishAddressPool_V1_1_1_EBGP_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // ASNumberRange
  if (CS_To_JSON_EthernetMultiProtocolEBGPASNumberRange(CsJson, "ASNumberRange", CSPtr->ASNumberRange) != RedfishCS_status_success) {goto Error;}

  // AllowDuplicateASEnabled 
  if (InsertJsonBoolObj (CsJson, "AllowDuplicateASEnabled", CSPtr->AllowDuplicateASEnabled) != RedfishCS_status_success) {goto Error;}

  // AllowOverrideASEnabled 
  if (InsertJsonBoolObj (CsJson, "AllowOverrideASEnabled", CSPtr->AllowOverrideASEnabled) != RedfishCS_status_success) {goto Error;}

  // AlwaysCompareMEDEnabled 
  if (InsertJsonBoolObj (CsJson, "AlwaysCompareMEDEnabled", CSPtr->AlwaysCompareMEDEnabled) != RedfishCS_status_success) {goto Error;}

  // BGPLocalPreference 
  if (InsertJsonInt64Obj (CsJson, "BGPLocalPreference", CSPtr->BGPLocalPreference) != RedfishCS_status_success) {goto Error;}

  // BGPNeighbor
  if (CS_To_JSON_EthernetMultiProtocolEBGPBGPNeighbor(CsJson, "BGPNeighbor", CSPtr->BGPNeighbor) != RedfishCS_status_success) {goto Error;}

  // BGPRoute
  if (CS_To_JSON_EthernetMultiProtocolEBGPBGPRoute(CsJson, "BGPRoute", CSPtr->BGPRoute) != RedfishCS_status_success) {goto Error;}

  // BGPWeight 
  if (InsertJsonInt64Obj (CsJson, "BGPWeight", CSPtr->BGPWeight) != RedfishCS_status_success) {goto Error;}

  // GracefulRestart
  if (CS_To_JSON_EthernetMultiProtocolEBGPGracefulRestart(CsJson, "GracefulRestart", CSPtr->GracefulRestart) != RedfishCS_status_success) {goto Error;}

  // MED 
  if (InsertJsonInt64Obj (CsJson, "MED", CSPtr->MED) != RedfishCS_status_success) {goto Error;}

  // MultihopEnabled 
  if (InsertJsonBoolObj (CsJson, "MultihopEnabled", CSPtr->MultihopEnabled) != RedfishCS_status_success) {goto Error;}

  // MultihopTTL 
  if (InsertJsonInt64Obj (CsJson, "MultihopTTL", CSPtr->MultihopTTL) != RedfishCS_status_success) {goto Error;}

  // MultiplePaths
  if (CS_To_JSON_EthernetMultiProtocolEBGPMultiplePaths(CsJson, "MultiplePaths", CSPtr->MultiplePaths) != RedfishCS_status_success) {goto Error;}

  // SendCommunityEnabled 
  if (InsertJsonBoolObj (CsJson, "SendCommunityEnabled", CSPtr->SendCommunityEnabled) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_EthernetMultiProtocolIBGPASNumberRange(json_t *CsJson, char *Key, RedfishAddressPool_V1_1_1_ASNumberRange_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // Lower 
  if (InsertJsonInt64Obj (CsJson, "Lower", CSPtr->Lower) != RedfishCS_status_success) {goto Error;}

  // Upper 
  if (InsertJsonInt64Obj (CsJson, "Upper", CSPtr->Upper) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_EthernetMultiProtocolIBGPBGPNeighborMaxPrefix(json_t *CsJson, char *Key, RedfishAddressPool_V1_1_1_MaxPrefix_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // MaxPrefixNumber 
  if (InsertJsonInt64Obj (CsJson, "MaxPrefixNumber", CSPtr->MaxPrefixNumber) != RedfishCS_status_success) {goto Error;}

  // RestartTimerSeconds 
  if (InsertJsonInt64Obj (CsJson, "RestartTimerSeconds", CSPtr->RestartTimerSeconds) != RedfishCS_status_success) {goto Error;}

  // ShutdownThresholdPercentage 
  if (InsertJsonInt64Obj (CsJson, "ShutdownThresholdPercentage", CSPtr->ShutdownThresholdPercentage) != RedfishCS_status_success) {goto Error;}

  // ThresholdWarningOnlyEnabled 
  if (InsertJsonBoolObj (CsJson, "ThresholdWarningOnlyEnabled", CSPtr->ThresholdWarningOnlyEnabled) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_EthernetMultiProtocolIBGPBGPNeighbor(json_t *CsJson, char *Key, RedfishAddressPool_V1_1_1_BGPNeighbor_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // Address 
  if (InsertJsonStringObj (CsJson, "Address", CSPtr->Address) != RedfishCS_status_success) {goto Error;}

  // AllowOwnASEnabled 
  if (InsertJsonBoolObj (CsJson, "AllowOwnASEnabled", CSPtr->AllowOwnASEnabled) != RedfishCS_status_success) {goto Error;}

  // ConnectRetrySeconds 
  if (InsertJsonInt64Obj (CsJson, "ConnectRetrySeconds", CSPtr->ConnectRetrySeconds) != RedfishCS_status_success) {goto Error;}

  // HoldTimeSeconds 
  if (InsertJsonInt64Obj (CsJson, "HoldTimeSeconds", CSPtr->HoldTimeSeconds) != RedfishCS_status_success) {goto Error;}

  // KeepaliveIntervalSeconds 
  if (InsertJsonInt64Obj (CsJson, "KeepaliveIntervalSeconds", CSPtr->KeepaliveIntervalSeconds) != RedfishCS_status_success) {goto Error;}

  // LocalAS 
  if (InsertJsonInt64Obj (CsJson, "LocalAS", CSPtr->LocalAS) != RedfishCS_status_success) {goto Error;}

  // LogStateChangesEnabled 
  if (InsertJsonBoolObj (CsJson, "LogStateChangesEnabled", CSPtr->LogStateChangesEnabled) != RedfishCS_status_success) {goto Error;}

  // MaxPrefix
  if (CS_To_JSON_EthernetMultiProtocolIBGPBGPNeighborMaxPrefix(CsJson, "MaxPrefix", CSPtr->MaxPrefix) != RedfishCS_status_success) {goto Error;}

  // MinimumAdvertisementIntervalSeconds 
  if (InsertJsonInt64Obj (CsJson, "MinimumAdvertisementIntervalSeconds", CSPtr->MinimumAdvertisementIntervalSeconds) != RedfishCS_status_success) {goto Error;}

  // PassiveModeEnabled 
  if (InsertJsonBoolObj (CsJson, "PassiveModeEnabled", CSPtr->PassiveModeEnabled) != RedfishCS_status_success) {goto Error;}

  // PathMTUDiscoveryEnabled 
  if (InsertJsonBoolObj (CsJson, "PathMTUDiscoveryEnabled", CSPtr->PathMTUDiscoveryEnabled) != RedfishCS_status_success) {goto Error;}

  // PeerAS 
  if (InsertJsonInt64Obj (CsJson, "PeerAS", CSPtr->PeerAS) != RedfishCS_status_success) {goto Error;}

  // ReplacePeerASEnabled 
  if (InsertJsonBoolObj (CsJson, "ReplacePeerASEnabled", CSPtr->ReplacePeerASEnabled) != RedfishCS_status_success) {goto Error;}

  // TCPMaxSegmentSizeBytes 
  if (InsertJsonInt64Obj (CsJson, "TCPMaxSegmentSizeBytes", CSPtr->TCPMaxSegmentSizeBytes) != RedfishCS_status_success) {goto Error;}

  // TreatAsWithdrawEnabled 
  if (InsertJsonBoolObj (CsJson, "TreatAsWithdrawEnabled", CSPtr->TreatAsWithdrawEnabled) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_EthernetMultiProtocolIBGPBGPRoute(json_t *CsJson, char *Key, RedfishAddressPool_V1_1_1_BGPRoute_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // AdvertiseInactiveRoutesEnabled 
  if (InsertJsonBoolObj (CsJson, "AdvertiseInactiveRoutesEnabled", CSPtr->AdvertiseInactiveRoutesEnabled) != RedfishCS_status_success) {goto Error;}

  // DistanceExternal 
  if (InsertJsonInt64Obj (CsJson, "DistanceExternal", CSPtr->DistanceExternal) != RedfishCS_status_success) {goto Error;}

  // DistanceInternal 
  if (InsertJsonInt64Obj (CsJson, "DistanceInternal", CSPtr->DistanceInternal) != RedfishCS_status_success) {goto Error;}

  // DistanceLocal 
  if (InsertJsonInt64Obj (CsJson, "DistanceLocal", CSPtr->DistanceLocal) != RedfishCS_status_success) {goto Error;}

  // ExternalCompareRouterIdEnabled 
  if (InsertJsonBoolObj (CsJson, "ExternalCompareRouterIdEnabled", CSPtr->ExternalCompareRouterIdEnabled) != RedfishCS_status_success) {goto Error;}

  // FlapDampingEnabled 
  if (InsertJsonBoolObj (CsJson, "FlapDampingEnabled", CSPtr->FlapDampingEnabled) != RedfishCS_status_success) {goto Error;}

  // SendDefaultRouteEnabled 
  if (InsertJsonBoolObj (CsJson, "SendDefaultRouteEnabled", CSPtr->SendDefaultRouteEnabled) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_EthernetMultiProtocolIBGPGracefulRestart(json_t *CsJson, char *Key, RedfishAddressPool_V1_1_1_GracefulRestart_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // GracefulRestartEnabled 
  if (InsertJsonBoolObj (CsJson, "GracefulRestartEnabled", CSPtr->GracefulRestartEnabled) != RedfishCS_status_success) {goto Error;}

  // HelperModeEnabled 
  if (InsertJsonBoolObj (CsJson, "HelperModeEnabled", CSPtr->HelperModeEnabled) != RedfishCS_status_success) {goto Error;}

  // StaleRoutesTimeSeconds 
  if (InsertJsonInt64Obj (CsJson, "StaleRoutesTimeSeconds", CSPtr->StaleRoutesTimeSeconds) != RedfishCS_status_success) {goto Error;}

  // TimeSeconds 
  if (InsertJsonInt64Obj (CsJson, "TimeSeconds", CSPtr->TimeSeconds) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_EthernetMultiProtocolIBGPMultiplePaths(json_t *CsJson, char *Key, RedfishAddressPool_V1_1_1_MultiplePaths_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // MaximumPaths 
  if (InsertJsonInt64Obj (CsJson, "MaximumPaths", CSPtr->MaximumPaths) != RedfishCS_status_success) {goto Error;}

  // UseMultiplePathsEnabled 
  if (InsertJsonBoolObj (CsJson, "UseMultiplePathsEnabled", CSPtr->UseMultiplePathsEnabled) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_EthernetMultiProtocolIBGP(json_t *CsJson, char *Key, RedfishAddressPool_V1_1_1_CommonBGPProperties_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // ASNumberRange
  if (CS_To_JSON_EthernetMultiProtocolIBGPASNumberRange(CsJson, "ASNumberRange", CSPtr->ASNumberRange) != RedfishCS_status_success) {goto Error;}

  // BGPNeighbor
  if (CS_To_JSON_EthernetMultiProtocolIBGPBGPNeighbor(CsJson, "BGPNeighbor", CSPtr->BGPNeighbor) != RedfishCS_status_success) {goto Error;}

  // BGPRoute
  if (CS_To_JSON_EthernetMultiProtocolIBGPBGPRoute(CsJson, "BGPRoute", CSPtr->BGPRoute) != RedfishCS_status_success) {goto Error;}

  // GracefulRestart
  if (CS_To_JSON_EthernetMultiProtocolIBGPGracefulRestart(CsJson, "GracefulRestart", CSPtr->GracefulRestart) != RedfishCS_status_success) {goto Error;}

  // MultiplePaths
  if (CS_To_JSON_EthernetMultiProtocolIBGPMultiplePaths(CsJson, "MultiplePaths", CSPtr->MultiplePaths) != RedfishCS_status_success) {goto Error;}

  // SendCommunityEnabled 
  if (InsertJsonBoolObj (CsJson, "SendCommunityEnabled", CSPtr->SendCommunityEnabled) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_Ethernet(json_t *CsJson, char *Key, RedfishAddressPool_V1_1_1_Ethernet_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // BFDSingleHopOnly
  if (CS_To_JSON_EthernetBFDSingleHopOnly(CsJson, "BFDSingleHopOnly", CSPtr->BFDSingleHopOnly) != RedfishCS_status_success) {goto Error;}

  // BGPEvpn
  if (CS_To_JSON_EthernetBGPEvpn(CsJson, "BGPEvpn", CSPtr->BGPEvpn) != RedfishCS_status_success) {goto Error;}

  // EBGP
  if (CS_To_JSON_EthernetEBGP(CsJson, "EBGP", CSPtr->EBGP) != RedfishCS_status_success) {goto Error;}

  // IPv4
  if (CS_To_JSON_EthernetIPv4(CsJson, "IPv4", CSPtr->IPv4) != RedfishCS_status_success) {goto Error;}

  // MultiProtocolEBGP
  if (CS_To_JSON_EthernetMultiProtocolEBGP(CsJson, "MultiProtocolEBGP", CSPtr->MultiProtocolEBGP) != RedfishCS_status_success) {goto Error;}

  // MultiProtocolIBGP
  if (CS_To_JSON_EthernetMultiProtocolIBGP(CsJson, "MultiProtocolIBGP", CSPtr->MultiProtocolIBGP) != RedfishCS_status_success) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_GenZ(json_t *CsJson, char *Key, RedfishAddressPool_V1_1_1_GenZ_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // AccessKey 
  if (InsertJsonStringObj (CsJson, "AccessKey", CSPtr->AccessKey) != RedfishCS_status_success) {goto Error;}

  // MaxCID 
  if (InsertJsonInt64Obj (CsJson, "MaxCID", CSPtr->MaxCID) != RedfishCS_status_success) {goto Error;}

  // MaxSID 
  if (InsertJsonInt64Obj (CsJson, "MaxSID", CSPtr->MaxSID) != RedfishCS_status_success) {goto Error;}

  // MinCID 
  if (InsertJsonInt64Obj (CsJson, "MinCID", CSPtr->MinCID) != RedfishCS_status_success) {goto Error;}

  // MinSID 
  if (InsertJsonInt64Obj (CsJson, "MinSID", CSPtr->MinSID) != RedfishCS_status_success) {goto Error;}

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
static RedfishCS_status CS_To_JSON_Links(json_t *CsJson, char *Key, RedfishAddressPool_V1_1_1_Links_CS *CSPtr)
{
  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  // Endpoints 
  if (InsertJsonLinkArrayObj (CsJson, "Endpoints", &CSPtr->Endpoints) != RedfishCS_status_success) {goto Error;}

  // Endpoints@odata.count 
  if (InsertJsonInt64Obj (CsJson, "Endpoints@odata.count", CSPtr->Endpointsodata_count) != RedfishCS_status_success) {goto Error;}

  // Oem
  if (CS_To_JSON_LinksOem(CsJson, "Oem", CSPtr->Oem) != RedfishCS_status_success) {goto Error;}

  // Zones 
  if (InsertJsonLinkArrayObj (CsJson, "Zones", &CSPtr->Zones) != RedfishCS_status_success) {goto Error;}

  // Zones@odata.count 
  if (InsertJsonInt64Obj (CsJson, "Zones@odata.count", CSPtr->Zonesodata_count) != RedfishCS_status_success) {goto Error;}

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

//
// C structure to JSON for AddressPool.V1_1_1.AddressPool
//
RedfishCS_status CS_To_AddressPool_V1_1_1_JSON(RedfishAddressPool_V1_1_1_AddressPool_CS *CSPtr, RedfishCS_char **JsonText)
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

  // Ethernet
  if (CS_To_JSON_Ethernet(CsJson, "Ethernet", CSPtr->Ethernet) != RedfishCS_status_success) {goto Error;}

  // GenZ
  if (CS_To_JSON_GenZ(CsJson, "GenZ", CSPtr->GenZ) != RedfishCS_status_success) {goto Error;}

  // Id 
  if (InsertJsonStringObj (CsJson, "Id", CSPtr->Id) != RedfishCS_status_success) {goto Error;}

  // Links
  if (CS_To_JSON_Links(CsJson, "Links", CSPtr->Links) != RedfishCS_status_success) {goto Error;}

  // Name 
  if (InsertJsonStringObj (CsJson, "Name", CSPtr->Name) != RedfishCS_status_success) {goto Error;}

  // Oem
  if (CS_To_JSON_Oem(CsJson, "Oem", CSPtr->Oem) != RedfishCS_status_success) {goto Error;}

  // Status
  if (CS_To_JSON_Status(CsJson, "Status", CSPtr->Status) != RedfishCS_status_success) {goto Error;}

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
// Destory C Structure for AddressPool.V1_1_1.AddressPool
//
RedfishCS_status DestroyAddressPool_V1_1_1_CS(RedfishAddressPool_V1_1_1_AddressPool_CS *CSPtr)
{
  RedfishCS_status Status;

  Status = DestoryCsMemory ((RedfishCS_void *)CSPtr);
  return Status;
}

//
// Destory JSON text for AddressPool.V1_1_1.AddressPool
//
RedfishCS_status DestroyAddressPool_V1_1_1_Json(RedfishCS_char *JsonText)
{
  free ((RedfishCS_void *)JsonText);
  return RedfishCS_status_success;
}

//
//Generate C structure for AddressPool.V1_1_1.AddressPool
//
RedfishCS_status
Json_AddressPool_V1_1_1_To_CS(RedfishCS_char *JsonRawText, RedfishAddressPool_V1_1_1_AddressPool_CS **ReturnedCs)
{
  RedfishCS_status  Status;
  json_t *JsonObj;
  RedfishAddressPool_V1_1_1_AddressPool_CS *Cs;

  Status = CreateJsonPayloadAndCs (JsonRawText, "AddressPool", "v1_1_1", "AddressPool", &JsonObj, (RedfishCS_void **)&Cs, sizeof (RedfishAddressPool_V1_1_1_AddressPool_CS));
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

  // Description
  Status = GetRedfishPropertyStr (Cs, JsonObj, "Description", &Cs->Description);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Ethernet
  Status = GenEthernetCs (Cs, JsonObj, "Ethernet", &Cs->Ethernet);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // GenZ
  Status = GenGenZCs (Cs, JsonObj, "GenZ", &Cs->GenZ);
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

  // Name
  Status = GetRedfishPropertyStr (Cs, JsonObj, "Name", &Cs->Name);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){goto Error;}}

  // Oem
  Status = GenOemCs (Cs, JsonObj, "Oem", &Cs->Oem);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Status
  Status = GenStatusCs (Cs, JsonObj, "Status", &Cs->Status);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  json_decref(JsonObj);
  *ReturnedCs = Cs;
  return RedfishCS_status_success;
Error:;
  json_decref(JsonObj);
  DestroyAddressPool_V1_1_1_CS (Cs);
  return Status;
}
