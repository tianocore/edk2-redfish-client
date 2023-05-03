# Definition of Connection.V1_0_0 and functions<br><br>

## Actions
    typedef struct _RedfishConnection_V1_0_0_Actions_CS {
        RedfishConnection_V1_0_0_OemActions_CS *Oem;
    } RedfishConnection_V1_0_0_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishConnection_V1_0_0_OemActions_CS| Structure points to **Oem** property.| No| No


## Links
    typedef struct _RedfishConnection_V1_0_0_Links_CS {
        RedfishCS_Link InitiatorEndpointGroups;
        RedfishCS_int64 *InitiatorEndpointGroupsodata_count;
        RedfishCS_Link InitiatorEndpoints;
        RedfishCS_int64 *InitiatorEndpointsodata_count;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_Link TargetEndpointGroups;
        RedfishCS_int64 *TargetEndpointGroupsodata_count;
        RedfishCS_Link TargetEndpoints;
        RedfishCS_int64 *TargetEndpointsodata_count;
    } RedfishConnection_V1_0_0_Links_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**InitiatorEndpointGroups**|RedfishCS_Link| Structure link list to **InitiatorEndpointGroups** property.| No| No
|**InitiatorEndpointGroupsodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **InitiatorEndpointGroups@odata.count** property.| No| No
|**InitiatorEndpoints**|RedfishCS_Link| Structure link list to **InitiatorEndpoints** property.| No| No
|**InitiatorEndpointsodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **InitiatorEndpoints@odata.count** property.| No| No
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**TargetEndpointGroups**|RedfishCS_Link| Structure link list to **TargetEndpointGroups** property.| No| No
|**TargetEndpointGroupsodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **TargetEndpointGroups@odata.count** property.| No| No
|**TargetEndpoints**|RedfishCS_Link| Structure link list to **TargetEndpoints** property.| No| No
|**TargetEndpointsodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **TargetEndpoints@odata.count** property.| No| No


## OemActions
    typedef struct _RedfishConnection_V1_0_0_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishConnection_V1_0_0_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## VolumeInfo
    typedef struct _RedfishConnection_V1_0_0_VolumeInfo_CS {
        RedfishCS_char_Array *AccessCapabilities;
        RedfishCS_char *AccessState;
        RedfishCS_Link Volume;
    } RedfishConnection_V1_0_0_VolumeInfo_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**AccessCapabilities**|RedfishCS_char_Array| Structure array points to one or more than one **RedfishCS_char *** for property **AccessCapabilities**.| No| No
|**AccessState**|RedfishCS_char| String pointer to **AccessState** property.| No| No
|**Volume**|RedfishCS_Link| Structure link list to **Volume** property.| No| No


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


## idRef
    typedef struct _Redfishodatav4_idRef_CS {
        RedfishCS_char *odata_id;
    } Redfishodatav4_idRef_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No


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



## Connection
    typedef struct _RedfishConnection_V1_0_0_Connection_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishConnection_V1_0_0_Actions_CS *Actions;
        RedfishCS_char *ConnectionType;
        RedfishCS_char *Description;
        RedfishCS_char *Id;
        RedfishConnection_V1_0_0_Links_CS *Links;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishResource_Status_CS *Status;
        RedfishConnection_V1_0_0_VolumeInfo_CS *VolumeInfo;
    } RedfishConnection_V1_0_0_Connection_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishConnection_V1_0_0_Actions_CS| Structure points to **Actions** property.| No| No
|**ConnectionType**|RedfishCS_char| String pointer to **ConnectionType** property.| No| Yes
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**Links**|RedfishConnection_V1_0_0_Links_CS| Structure points to **Links** property.| No| No
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
|**VolumeInfo**|RedfishConnection_V1_0_0_VolumeInfo_CS| Structure points to **VolumeInfo** property.| No| No
## Redfish Connection V1_0_0 to C Structure Function
    RedfishCS_status
    Json_Connection_V1_0_0_To_CS (RedfishCS_char *JsonRawText, RedfishConnection_V1_0_0_Connection_CS **ReturnedCS);

## C Structure to Redfish Connection V1_0_0 JSON Function
    RedfishCS_status
    CS_To_Connection_V1_0_0_JSON (RedfishConnection_V1_0_0_Connection_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish Connection V1_0_0 C Structure Function
    RedfishCS_status
    DestroyConnection_V1_0_0_CS (RedfishConnection_V1_0_0_Connection_CS *CSPtr);

