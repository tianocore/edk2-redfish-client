# Definition of OutletGroup.V1_0_1 and functions<br><br>

## Actions
    typedef struct _RedfishOutletGroup_V1_0_1_Actions_CS {
        RedfishOutletGroup_V1_0_1_PowerControl_CS *OutletGroup_PowerControl;
        RedfishOutletGroup_V1_0_1_ResetMetrics_CS *OutletGroup_ResetMetrics;
        RedfishOutletGroup_V1_0_1_OemActions_CS *Oem;
    } RedfishOutletGroup_V1_0_1_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**OutletGroup_PowerControl**|RedfishOutletGroup_V1_0_1_PowerControl_CS| Structure points to **#OutletGroup.PowerControl** property.| No| No
|**OutletGroup_ResetMetrics**|RedfishOutletGroup_V1_0_1_ResetMetrics_CS| Structure points to **#OutletGroup.ResetMetrics** property.| No| No
|**Oem**|RedfishOutletGroup_V1_0_1_OemActions_CS| Structure points to **Oem** property.| No| No


## Links
    typedef struct _RedfishOutletGroup_V1_0_1_Links_CS {
        RedfishResource_Oem_CS *Oem;
        RedfishCS_Link Outlets;
        RedfishCS_int64 *Outletsodata_count;
    } RedfishOutletGroup_V1_0_1_Links_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**Outlets**|RedfishCS_Link| Structure link list to **Outlets** property.| No| No
|**Outletsodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **Outlets@odata.count** property.| No| No


## OemActions
    typedef struct _RedfishOutletGroup_V1_0_1_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishOutletGroup_V1_0_1_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## PowerControl
    typedef struct _RedfishOutletGroup_V1_0_1_PowerControl_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishOutletGroup_V1_0_1_PowerControl_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**target**|RedfishCS_char| String pointer to **target** property.| No| No
|**title**|RedfishCS_char| String pointer to **title** property.| No| No


## ResetMetrics
    typedef struct _RedfishOutletGroup_V1_0_1_ResetMetrics_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishOutletGroup_V1_0_1_ResetMetrics_CS;

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



## OutletGroup
    typedef struct _RedfishOutletGroup_V1_0_1_OutletGroup_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishOutletGroup_V1_0_1_Actions_CS *Actions;
        RedfishCS_char *CreatedBy;
        RedfishCS_char *Description;
        RedfishCS_Link EnergykWh;
        RedfishCS_char *Id;
        RedfishOutletGroup_V1_0_1_Links_CS *Links;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_int64 *PowerCycleDelaySeconds;
        RedfishCS_bool *PowerEnabled;
        RedfishCS_int64 *PowerOffDelaySeconds;
        RedfishCS_int64 *PowerOnDelaySeconds;
        RedfishCS_int64 *PowerRestoreDelaySeconds;
        RedfishCS_char *PowerRestorePolicy;
        RedfishCS_char *PowerState;
        RedfishCS_Link PowerWatts;
        RedfishResource_Status_CS *Status;
    } RedfishOutletGroup_V1_0_1_OutletGroup_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishOutletGroup_V1_0_1_Actions_CS| Structure points to **Actions** property.| No| No
|**CreatedBy**|RedfishCS_char| String pointer to **CreatedBy** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**EnergykWh**|RedfishCS_Link| Structure link list to **EnergykWh** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**Links**|RedfishOutletGroup_V1_0_1_Links_CS| Structure points to **Links** property.| No| No
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**PowerCycleDelaySeconds**|RedfishCS_int64| 64-bit long long interger pointer to **PowerCycleDelaySeconds** property.| No| No
|**PowerEnabled**|RedfishCS_bool| Boolean pointer to **PowerEnabled** property.| No| Yes
|**PowerOffDelaySeconds**|RedfishCS_int64| 64-bit long long interger pointer to **PowerOffDelaySeconds** property.| No| No
|**PowerOnDelaySeconds**|RedfishCS_int64| 64-bit long long interger pointer to **PowerOnDelaySeconds** property.| No| No
|**PowerRestoreDelaySeconds**|RedfishCS_int64| 64-bit long long interger pointer to **PowerRestoreDelaySeconds** property.| No| No
|**PowerRestorePolicy**|RedfishCS_char| String pointer to **PowerRestorePolicy** property.| No| No
|**PowerState**|RedfishCS_char| String pointer to **PowerState** property.| No| Yes
|**PowerWatts**|RedfishCS_Link| Structure link list to **PowerWatts** property.| No| Yes
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
## Redfish OutletGroup V1_0_1 to C Structure Function
    RedfishCS_status
    Json_OutletGroup_V1_0_1_To_CS (RedfishCS_char *JsonRawText, RedfishOutletGroup_V1_0_1_OutletGroup_CS **ReturnedCS);

## C Structure to Redfish OutletGroup V1_0_1 JSON Function
    RedfishCS_status
    CS_To_OutletGroup_V1_0_1_JSON (RedfishOutletGroup_V1_0_1_OutletGroup_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish OutletGroup V1_0_1 C Structure Function
    RedfishCS_status
    DestroyOutletGroup_V1_0_1_CS (RedfishOutletGroup_V1_0_1_OutletGroup_CS *CSPtr);

