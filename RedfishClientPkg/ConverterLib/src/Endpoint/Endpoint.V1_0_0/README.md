# Definition of Endpoint.V1_0_0 and functions<br><br>

## ConnectedEntity
    typedef struct _RedfishEndpoint_V1_0_0_ConnectedEntity_CS {
        RedfishCS_Link EntityLink;
        RedfishEndpoint_V1_0_0_PciId_CS *EntityPciId;
        RedfishCS_char *EntityRole;
        RedfishCS_char *EntityType;
        RedfishResource_V1_1_0_Identifier_Array_CS *Identifiers;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_char *PciClassCode;
        RedfishCS_int64 *PciFunctionNumber;
    } RedfishEndpoint_V1_0_0_ConnectedEntity_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**EntityLink**|RedfishCS_Link| Structure link list to **EntityLink** property.| No| Yes
|**EntityPciId**|RedfishEndpoint_V1_0_0_PciId_CS| Structure points to **EntityPciId** property.| No| Yes
|**EntityRole**|RedfishCS_char| String pointer to **EntityRole** property.| No| Yes
|**EntityType**|RedfishCS_char| String pointer to **EntityType** property.| No| Yes
|**Identifiers**|RedfishResource_V1_1_0_Identifier_Array_CS| Structure array points to one or more than one **RedfishResource_V1_1_0_Identifier_Array_CS** structures for property **Identifiers**.| No| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| Yes
|**PciClassCode**|RedfishCS_char| String pointer to **PciClassCode** property.| No| No
|**PciFunctionNumber**|RedfishCS_int64| 64-bit long long interger pointer to **PciFunctionNumber** property.| No| Yes


## Endpoint_Actions
    typedef struct _RedfishEndpoint_V1_0_0_Endpoint_Actions_CS {
        RedfishCS_Link Oem;
    } RedfishEndpoint_V1_0_0_Endpoint_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishCS_Link| Structure link list to **Oem** property.| No| No


## Endpoint_Links
    typedef struct _RedfishEndpoint_V1_0_0_Endpoint_Links_CS {
        RedfishCS_Link MutuallyExclusiveEndpoints;
        RedfishCS_int64 *MutuallyExclusiveEndpointsodata_count;
        RedfishCS_char *MutuallyExclusiveEndpointsodata_navigationLink;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_Link Ports;
        RedfishCS_int64 *Portsodata_count;
        RedfishCS_char *Portsodata_navigationLink;
    } RedfishEndpoint_V1_0_0_Endpoint_Links_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**MutuallyExclusiveEndpoints**|RedfishCS_Link| Structure link list to **MutuallyExclusiveEndpoints** property.| No| Yes
|**MutuallyExclusiveEndpointsodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **MutuallyExclusiveEndpoints@odata.count** property.| No| No
|**MutuallyExclusiveEndpointsodata_navigationLink**|RedfishCS_char| String pointer to **MutuallyExclusiveEndpoints@odata.navigationLink** property.| No| No
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**Ports**|RedfishCS_Link| Structure link list to **Ports** property.| No| Yes
|**Portsodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **Ports@odata.count** property.| No| No
|**Portsodata_navigationLink**|RedfishCS_char| String pointer to **Ports@odata.navigationLink** property.| No| No


## PciId
    typedef struct _RedfishEndpoint_V1_0_0_PciId_CS {
        RedfishCS_char *DeviceId;
        RedfishCS_char *SubsystemId;
        RedfishCS_char *SubsystemVendorId;
        RedfishCS_char *VendorId;
    } RedfishEndpoint_V1_0_0_PciId_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**DeviceId**|RedfishCS_char| String pointer to **DeviceId** property.| No| No
|**SubsystemId**|RedfishCS_char| String pointer to **SubsystemId** property.| No| No
|**SubsystemVendorId**|RedfishCS_char| String pointer to **SubsystemVendorId** property.| No| No
|**VendorId**|RedfishCS_char| String pointer to **VendorId** property.| No| No


## Condition
    typedef struct _RedfishResource_Condition_CS {
        RedfishCS_Link LogEntry;
        RedfishCS_char *Message;
        RedfishCS_char_Array *MessageArgs;
        RedfishCS_char *MessageId;
        Redfishodatav4_idRef_CS *OriginOfCondition;
        RedfishCS_char *Severity;
        RedfishCS_char *Timestamp;
    } RedfishResource_Condition_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**LogEntry**|RedfishCS_Link| Structure link list to **LogEntry** property.| No| Yes
|**Message**|RedfishCS_char| String pointer to **Message** property.| No| Yes
|**MessageArgs**|RedfishCS_char_Array| Structure array points to one or more than one **RedfishCS_char *** for property **MessageArgs**.| No| Yes
|**MessageId**|RedfishCS_char| String pointer to **MessageId** property.| No| Yes
|**OriginOfCondition**|Redfishodatav4_idRef_CS| Structure points to **OriginOfCondition** property.| No| Yes
|**Severity**|RedfishCS_char| String pointer to **Severity** property.| No| Yes
|**Timestamp**|RedfishCS_char| String pointer to **Timestamp** property.| No| Yes


## Oem
    typedef struct _RedfishResource_Oem_CS {
        RedfishCS_Link Prop;
    } RedfishResource_Oem_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## Status
    typedef struct _RedfishResource_Status_CS {
        RedfishResource_Condition_Array_CS *Conditions;
        RedfishCS_char *Health;
        RedfishCS_char *HealthRollup;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_char *State;
    } RedfishResource_Status_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Conditions**|RedfishResource_Condition_Array_CS| Structure array points to one or more than one **RedfishResource_Condition_Array_CS** structures for property **Conditions**.| No| No
|**Health**|RedfishCS_char| String pointer to **Health** property.| No| Yes
|**HealthRollup**|RedfishCS_char| String pointer to **HealthRollup** property.| No| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**State**|RedfishCS_char| String pointer to **State** property.| No| Yes


## Identifier
    typedef struct _RedfishResource_V1_1_0_Identifier_CS {
        RedfishCS_char *DurableName;
        RedfishCS_char *DurableNameFormat;
    } RedfishResource_V1_1_0_Identifier_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**DurableName**|RedfishCS_char| String pointer to **DurableName** property.| No| Yes
|**DurableNameFormat**|RedfishCS_char| String pointer to **DurableNameFormat** property.| No| Yes


## idRef
    typedef struct _Redfishodatav4_idRef_CS {
        RedfishCS_char *odata_id;
    } Redfishodatav4_idRef_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| No| No


## RedfishResource_V1_1_0_Identifier_Array_CS
    typedef struct _RedfishResource_V1_1_0_Identifier_Array_CS  {
        RedfishCS_Link *Next;
        RedfishResource_V1_1_0_Identifier_CS *ArrayValue;
    } RedfishResource_V1_1_0_Identifier_Array_CS;



## RedfishCS_char_Array
    typedef struct _RedfishCS_char_Array  {
        RedfishCS_Link *Next;
        RedfishCS_char *ArrayValue;
    } RedfishCS_char_Array;



## RedfishResource_Condition_Array_CS
    typedef struct _RedfishResource_Condition_Array_CS  {
        RedfishCS_Link *Next;
        RedfishResource_Condition_CS *ArrayValue;
    } RedfishResource_Condition_Array_CS;



## Endpoint
    typedef struct _RedfishEndpoint_V1_0_0_Endpoint_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishEndpoint_V1_0_0_Endpoint_Actions_CS *Actions;
        RedfishEndpoint_V1_0_0_ConnectedEntity_CS *ConnectedEntities;
        RedfishCS_char *Description;
        RedfishCS_char *EndpointProtocol;
        RedfishCS_int64 *HostReservationMemoryBytes;
        RedfishCS_char *Id;
        RedfishResource_V1_1_0_Identifier_CS *Identifiers;
        RedfishEndpoint_V1_0_0_Endpoint_Links_CS *Links;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishEndpoint_V1_0_0_PciId_CS *PciId;
        RedfishCS_Link Redundancy;
        RedfishCS_int64 *Redundancyodata_count;
        RedfishCS_char *Redundancyodata_navigationLink;
        RedfishResource_Status_CS *Status;
    } RedfishEndpoint_V1_0_0_Endpoint_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| No| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| No| No
|**Actions**|RedfishEndpoint_V1_0_0_Endpoint_Actions_CS| Structure points to **Actions** property.| No| Yes
|**ConnectedEntities**|RedfishEndpoint_V1_0_0_ConnectedEntity_CS| Structure points to **ConnectedEntities** property.| No| Yes
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| No
|**EndpointProtocol**|RedfishCS_char| String pointer to **EndpointProtocol** property.| No| Yes
|**HostReservationMemoryBytes**|RedfishCS_int64| 64-bit long long interger pointer to **HostReservationMemoryBytes** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| No
|**Identifiers**|RedfishResource_V1_1_0_Identifier_CS| Structure points to **Identifiers** property.| No| Yes
|**Links**|RedfishEndpoint_V1_0_0_Endpoint_Links_CS| Structure points to **Links** property.| No| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| No
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**PciId**|RedfishEndpoint_V1_0_0_PciId_CS| Structure points to **PciId** property.| No| Yes
|**Redundancy**|RedfishCS_Link| Structure link list to **Redundancy** property.| No| Yes
|**Redundancyodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **Redundancy@odata.count** property.| No| No
|**Redundancyodata_navigationLink**|RedfishCS_char| String pointer to **Redundancy@odata.navigationLink** property.| No| No
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
## Redfish Endpoint V1_0_0 to C Structure Function
    RedfishCS_status
    Json_Endpoint_V1_0_0_To_CS (RedfishCS_char *JsonRawText, RedfishEndpoint_V1_0_0_Endpoint_CS **ReturnedCS);

## C Structure to Redfish Endpoint V1_0_0 JSON Function
    RedfishCS_status
    CS_To_Endpoint_V1_0_0_JSON (RedfishEndpoint_V1_0_0_Endpoint_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish Endpoint V1_0_0 C Structure Function
    RedfishCS_status
    DestroyEndpoint_V1_0_0_CS (RedfishEndpoint_V1_0_0_Endpoint_CS *CSPtr);

