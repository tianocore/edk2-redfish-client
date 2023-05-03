# Definition of UpdateService.V1_7_2 and functions<br><br>

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


## Actions
    typedef struct _RedfishUpdateService_V1_7_2_Actions_CS {
        RedfishUpdateService_V1_7_2_SimpleUpdate_CS *UpdateService_SimpleUpdate;
        RedfishUpdateService_V1_7_2_StartUpdate_CS *UpdateService_StartUpdate;
        RedfishUpdateService_V1_7_2_OemActions_CS *Oem;
    } RedfishUpdateService_V1_7_2_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**UpdateService_SimpleUpdate**|RedfishUpdateService_V1_7_2_SimpleUpdate_CS| Structure points to **#UpdateService.SimpleUpdate** property.| No| No
|**UpdateService_StartUpdate**|RedfishUpdateService_V1_7_2_StartUpdate_CS| Structure points to **#UpdateService.StartUpdate** property.| No| No
|**Oem**|RedfishUpdateService_V1_7_2_OemActions_CS| Structure points to **Oem** property.| No| No


## HttpPushUriApplyTime
    typedef struct _RedfishUpdateService_V1_7_2_HttpPushUriApplyTime_CS {
        RedfishCS_char *ApplyTime;
        RedfishCS_int64 *MaintenanceWindowDurationInSeconds;
        RedfishCS_char *MaintenanceWindowStartTime;
    } RedfishUpdateService_V1_7_2_HttpPushUriApplyTime_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**ApplyTime**|RedfishCS_char| String pointer to **ApplyTime** property.| No| No
|**MaintenanceWindowDurationInSeconds**|RedfishCS_int64| 64-bit long long interger pointer to **MaintenanceWindowDurationInSeconds** property.| No| No
|**MaintenanceWindowStartTime**|RedfishCS_char| String pointer to **MaintenanceWindowStartTime** property.| No| No


## HttpPushUriOptions
    typedef struct _RedfishUpdateService_V1_7_2_HttpPushUriOptions_CS {
        RedfishUpdateService_V1_7_2_HttpPushUriApplyTime_CS *HttpPushUriApplyTime;
    } RedfishUpdateService_V1_7_2_HttpPushUriOptions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**HttpPushUriApplyTime**|RedfishUpdateService_V1_7_2_HttpPushUriApplyTime_CS| Structure points to **HttpPushUriApplyTime** property.| No| No


## OemActions
    typedef struct _RedfishUpdateService_V1_7_2_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishUpdateService_V1_7_2_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## SimpleUpdate
    typedef struct _RedfishUpdateService_V1_7_2_SimpleUpdate_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishUpdateService_V1_7_2_SimpleUpdate_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**target**|RedfishCS_char| String pointer to **target** property.| No| No
|**title**|RedfishCS_char| String pointer to **title** property.| No| No


## StartUpdate
    typedef struct _RedfishUpdateService_V1_7_2_StartUpdate_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishUpdateService_V1_7_2_StartUpdate_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**target**|RedfishCS_char| String pointer to **target** property.| No| No
|**title**|RedfishCS_char| String pointer to **title** property.| No| No


## UpdateParameters
    typedef struct _RedfishUpdateService_V1_7_2_UpdateParameters_CS {
        RedfishCS_char_Array *Targets;
    } RedfishUpdateService_V1_7_2_UpdateParameters_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Targets**|RedfishCS_char_Array| Structure array points to one or more than one **RedfishCS_char *** for property **Targets**.| No| Yes


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



## UpdateService
    typedef struct _RedfishUpdateService_V1_7_2_UpdateService_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishUpdateService_V1_7_2_Actions_CS *Actions;
        RedfishCS_char *Description;
        RedfishCS_Link FirmwareInventory;
        RedfishCS_char *HttpPushUri;
        RedfishUpdateService_V1_7_2_HttpPushUriOptions_CS *HttpPushUriOptions;
        RedfishCS_bool *HttpPushUriOptionsBusy;
        RedfishCS_char *HttpPushUriTargets;
        RedfishCS_bool *HttpPushUriTargetsBusy;
        RedfishCS_char *Id;
        RedfishCS_int64 *MaxImageSizeBytes;
        RedfishCS_char *MultipartHttpPushUri;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_bool *ServiceEnabled;
        RedfishCS_Link SoftwareInventory;
        RedfishResource_Status_CS *Status;
    } RedfishUpdateService_V1_7_2_UpdateService_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishUpdateService_V1_7_2_Actions_CS| Structure points to **Actions** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**FirmwareInventory**|RedfishCS_Link| Structure link list to **FirmwareInventory** property.| No| Yes
|**HttpPushUri**|RedfishCS_char| String pointer to **HttpPushUri** property.| No| Yes
|**HttpPushUriOptions**|RedfishUpdateService_V1_7_2_HttpPushUriOptions_CS| Structure points to **HttpPushUriOptions** property.| No| No
|**HttpPushUriOptionsBusy**|RedfishCS_bool| Boolean pointer to **HttpPushUriOptionsBusy** property.| No| No
|**HttpPushUriTargets**|RedfishCS_char| String pointer to **HttpPushUriTargets** property.| No| No
|**HttpPushUriTargetsBusy**|RedfishCS_bool| Boolean pointer to **HttpPushUriTargetsBusy** property.| No| No
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**MaxImageSizeBytes**|RedfishCS_int64| 64-bit long long interger pointer to **MaxImageSizeBytes** property.| No| Yes
|**MultipartHttpPushUri**|RedfishCS_char| String pointer to **MultipartHttpPushUri** property.| No| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**ServiceEnabled**|RedfishCS_bool| Boolean pointer to **ServiceEnabled** property.| No| No
|**SoftwareInventory**|RedfishCS_Link| Structure link list to **SoftwareInventory** property.| No| Yes
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
## Redfish UpdateService V1_7_2 to C Structure Function
    RedfishCS_status
    Json_UpdateService_V1_7_2_To_CS (RedfishCS_char *JsonRawText, RedfishUpdateService_V1_7_2_UpdateService_CS **ReturnedCS);

## C Structure to Redfish UpdateService V1_7_2 JSON Function
    RedfishCS_status
    CS_To_UpdateService_V1_7_2_JSON (RedfishUpdateService_V1_7_2_UpdateService_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish UpdateService V1_7_2 C Structure Function
    RedfishCS_status
    DestroyUpdateService_V1_7_2_CS (RedfishUpdateService_V1_7_2_UpdateService_CS *CSPtr);

