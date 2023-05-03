# Definition of AggregationService.V1_0_1 and functions<br><br>

## Actions
    typedef struct _RedfishAggregationService_V1_0_1_Actions_CS {
        RedfishAggregationService_V1_0_1_Reset_CS *AggregationService_Reset;
        RedfishAggregationService_V1_0_1_SetDefaultBootOrder_CS *AggregationService_SetDefaultBootOrder;
        RedfishAggregationService_V1_0_1_OemActions_CS *Oem;
    } RedfishAggregationService_V1_0_1_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**AggregationService_Reset**|RedfishAggregationService_V1_0_1_Reset_CS| Structure points to **#AggregationService.Reset** property.| No| No
|**AggregationService_SetDefaultBootOrder**|RedfishAggregationService_V1_0_1_SetDefaultBootOrder_CS| Structure points to **#AggregationService.SetDefaultBootOrder** property.| No| No
|**Oem**|RedfishAggregationService_V1_0_1_OemActions_CS| Structure points to **Oem** property.| No| No


## OemActions
    typedef struct _RedfishAggregationService_V1_0_1_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishAggregationService_V1_0_1_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## Reset
    typedef struct _RedfishAggregationService_V1_0_1_Reset_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishAggregationService_V1_0_1_Reset_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**target**|RedfishCS_char| String pointer to **target** property.| No| No
|**title**|RedfishCS_char| String pointer to **title** property.| No| No


## SetDefaultBootOrder
    typedef struct _RedfishAggregationService_V1_0_1_SetDefaultBootOrder_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishAggregationService_V1_0_1_SetDefaultBootOrder_CS;

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



## AggregationService
    typedef struct _RedfishAggregationService_V1_0_1_AggregationService_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishAggregationService_V1_0_1_Actions_CS *Actions;
        RedfishCS_Link Aggregates;
        RedfishCS_Link AggregationSources;
        RedfishCS_Link ConnectionMethods;
        RedfishCS_char *Description;
        RedfishCS_char *Id;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_bool *ServiceEnabled;
        RedfishResource_Status_CS *Status;
    } RedfishAggregationService_V1_0_1_AggregationService_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishAggregationService_V1_0_1_Actions_CS| Structure points to **Actions** property.| No| No
|**Aggregates**|RedfishCS_Link| Structure link list to **Aggregates** property.| No| Yes
|**AggregationSources**|RedfishCS_Link| Structure link list to **AggregationSources** property.| No| Yes
|**ConnectionMethods**|RedfishCS_Link| Structure link list to **ConnectionMethods** property.| No| Yes
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**ServiceEnabled**|RedfishCS_bool| Boolean pointer to **ServiceEnabled** property.| No| No
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
## Redfish AggregationService V1_0_1 to C Structure Function
    RedfishCS_status
    Json_AggregationService_V1_0_1_To_CS (RedfishCS_char *JsonRawText, RedfishAggregationService_V1_0_1_AggregationService_CS **ReturnedCS);

## C Structure to Redfish AggregationService V1_0_1 JSON Function
    RedfishCS_status
    CS_To_AggregationService_V1_0_1_JSON (RedfishAggregationService_V1_0_1_AggregationService_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish AggregationService V1_0_1 C Structure Function
    RedfishCS_status
    DestroyAggregationService_V1_0_1_CS (RedfishAggregationService_V1_0_1_AggregationService_CS *CSPtr);

