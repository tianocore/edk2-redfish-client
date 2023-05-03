# Definition of EventService.V1_0_8 and functions<br><br>

## Actions
    typedef struct _RedfishEventService_V1_0_8_Actions_CS {
        RedfishEventService_V1_0_8_SubmitTestEvent_CS *EventService_SubmitTestEvent;
        RedfishEventService_V1_0_8_OemActions_CS *Oem;
    } RedfishEventService_V1_0_8_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**EventService_SubmitTestEvent**|RedfishEventService_V1_0_8_SubmitTestEvent_CS| Structure points to **#EventService.SubmitTestEvent** property.| No| No
|**Oem**|RedfishEventService_V1_0_8_OemActions_CS| Structure points to **Oem** property.| No| No


## OemActions
    typedef struct _RedfishEventService_V1_0_8_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishEventService_V1_0_8_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## SubmitTestEvent
    typedef struct _RedfishEventService_V1_0_8_SubmitTestEvent_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishEventService_V1_0_8_SubmitTestEvent_CS;

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



## EventService
    typedef struct _RedfishEventService_V1_0_8_EventService_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishEventService_V1_0_8_Actions_CS *Actions;
        RedfishCS_int64 *DeliveryRetryAttempts;
        RedfishCS_int64 *DeliveryRetryIntervalSeconds;
        RedfishCS_char *Description;
        RedfishCS_char *EventTypesForSubscription;
        RedfishCS_char *Id;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_bool *ServiceEnabled;
        RedfishResource_Status_CS *Status;
        RedfishCS_Link Subscriptions;
    } RedfishEventService_V1_0_8_EventService_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishEventService_V1_0_8_Actions_CS| Structure points to **Actions** property.| No| No
|**DeliveryRetryAttempts**|RedfishCS_int64| 64-bit long long interger pointer to **DeliveryRetryAttempts** property.| No| No
|**DeliveryRetryIntervalSeconds**|RedfishCS_int64| 64-bit long long interger pointer to **DeliveryRetryIntervalSeconds** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**EventTypesForSubscription**|RedfishCS_char| String pointer to **EventTypesForSubscription** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**ServiceEnabled**|RedfishCS_bool| Boolean pointer to **ServiceEnabled** property.| No| No
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
|**Subscriptions**|RedfishCS_Link| Structure link list to **Subscriptions** property.| No| Yes
## Redfish EventService V1_0_8 to C Structure Function
    RedfishCS_status
    Json_EventService_V1_0_8_To_CS (RedfishCS_char *JsonRawText, RedfishEventService_V1_0_8_EventService_CS **ReturnedCS);

## C Structure to Redfish EventService V1_0_8 JSON Function
    RedfishCS_status
    CS_To_EventService_V1_0_8_JSON (RedfishEventService_V1_0_8_EventService_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish EventService V1_0_8 C Structure Function
    RedfishCS_status
    DestroyEventService_V1_0_8_CS (RedfishEventService_V1_0_8_EventService_CS *CSPtr);

