# Definition of Port.V1_1_1 and functions<br><br>

## Actions
    typedef struct _RedfishPort_V1_1_1_Actions_CS {
        RedfishPort_V1_1_1_Reset_CS *Port_Reset;
        RedfishPort_V1_1_1_OemActions_CS *Oem;
    } RedfishPort_V1_1_1_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Port_Reset**|RedfishPort_V1_1_1_Reset_CS| Structure points to **#Port.Reset** property.| No| No
|**Oem**|RedfishPort_V1_1_1_OemActions_CS| Structure points to **Oem** property.| No| No


## Links
    typedef struct _RedfishPort_V1_1_1_Links_CS {
        RedfishCS_Link AssociatedEndpoints;
        RedfishCS_int64 *AssociatedEndpointsodata_count;
        RedfishCS_Link ConnectedSwitchPorts;
        RedfishCS_int64 *ConnectedSwitchPortsodata_count;
        RedfishCS_Link ConnectedSwitches;
        RedfishCS_int64 *ConnectedSwitchesodata_count;
        RedfishResource_Oem_CS *Oem;
    } RedfishPort_V1_1_1_Links_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**AssociatedEndpoints**|RedfishCS_Link| Structure link list to **AssociatedEndpoints** property.| No| Yes
|**AssociatedEndpointsodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **AssociatedEndpoints@odata.count** property.| No| No
|**ConnectedSwitchPorts**|RedfishCS_Link| Structure link list to **ConnectedSwitchPorts** property.| No| Yes
|**ConnectedSwitchPortsodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **ConnectedSwitchPorts@odata.count** property.| No| No
|**ConnectedSwitches**|RedfishCS_Link| Structure link list to **ConnectedSwitches** property.| No| Yes
|**ConnectedSwitchesodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **ConnectedSwitches@odata.count** property.| No| No
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No


## OemActions
    typedef struct _RedfishPort_V1_1_1_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishPort_V1_1_1_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## Reset
    typedef struct _RedfishPort_V1_1_1_Reset_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishPort_V1_1_1_Reset_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**target**|RedfishCS_char| String pointer to **target** property.| No| No
|**title**|RedfishCS_char| String pointer to **title** property.| No| No


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



## Port
    typedef struct _RedfishPort_V1_1_1_Port_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishPort_V1_1_1_Actions_CS *Actions;
        RedfishCS_int64 *CurrentSpeedGbps;
        RedfishCS_char *Description;
        RedfishCS_char *Id;
        RedfishPort_V1_1_1_Links_CS *Links;
        RedfishCS_Link Location;
        RedfishCS_int64 *MaxSpeedGbps;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_char *PortId;
        RedfishCS_char *PortProtocol;
        RedfishCS_char *PortType;
        RedfishResource_Status_CS *Status;
        RedfishCS_int64 *Width;
    } RedfishPort_V1_1_1_Port_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishPort_V1_1_1_Actions_CS| Structure points to **Actions** property.| No| No
|**CurrentSpeedGbps**|RedfishCS_int64| 64-bit long long interger pointer to **CurrentSpeedGbps** property.| No| Yes
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**Links**|RedfishPort_V1_1_1_Links_CS| Structure points to **Links** property.| No| No
|**Location**|RedfishCS_Link| Structure link list to **Location** property.| No| No
|**MaxSpeedGbps**|RedfishCS_int64| 64-bit long long interger pointer to **MaxSpeedGbps** property.| No| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**PortId**|RedfishCS_char| String pointer to **PortId** property.| No| Yes
|**PortProtocol**|RedfishCS_char| String pointer to **PortProtocol** property.| No| Yes
|**PortType**|RedfishCS_char| String pointer to **PortType** property.| No| Yes
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
|**Width**|RedfishCS_int64| 64-bit long long interger pointer to **Width** property.| No| Yes
## Redfish Port V1_1_1 to C Structure Function
    RedfishCS_status
    Json_Port_V1_1_1_To_CS (RedfishCS_char *JsonRawText, RedfishPort_V1_1_1_Port_CS **ReturnedCS);

## C Structure to Redfish Port V1_1_1 JSON Function
    RedfishCS_status
    CS_To_Port_V1_1_1_JSON (RedfishPort_V1_1_1_Port_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish Port V1_1_1 C Structure Function
    RedfishCS_status
    DestroyPort_V1_1_1_CS (RedfishPort_V1_1_1_Port_CS *CSPtr);

