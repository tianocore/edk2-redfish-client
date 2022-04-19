# Definition of Control.V1_0_0 and functions<br><br>

## Actions
    typedef struct _RedfishControl_V1_0_0_Actions_CS {
        RedfishControl_V1_0_0_OemActions_CS *Oem;
    } RedfishControl_V1_0_0_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishControl_V1_0_0_OemActions_CS| Structure points to **Oem** property.| No| No


## ControlExcerpt
    typedef struct _RedfishControl_V1_0_0_ControlExcerpt_CS {
        RedfishCS_int64 *AllowableMax;
        RedfishCS_int64 *AllowableMin;
        RedfishCS_char *ControlMode;
        RedfishCS_char *DataSourceUri;
        RedfishCS_int64 *Reading;
        RedfishCS_char *ReadingUnits;
    } RedfishControl_V1_0_0_ControlExcerpt_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**AllowableMax**|RedfishCS_int64| 64-bit long long interger pointer to **AllowableMax** property.| No| Yes
|**AllowableMin**|RedfishCS_int64| 64-bit long long interger pointer to **AllowableMin** property.| No| Yes
|**ControlMode**|RedfishCS_char| String pointer to **ControlMode** property.| No| No
|**DataSourceUri**|RedfishCS_char| String pointer to **DataSourceUri** property.| No| Yes
|**Reading**|RedfishCS_int64| 64-bit long long interger pointer to **Reading** property.| No| Yes
|**ReadingUnits**|RedfishCS_char| String pointer to **ReadingUnits** property.| No| Yes


## ControlLoop
    typedef struct _RedfishControl_V1_0_0_ControlLoop_CS {
        RedfishCS_char *CoefficientUpdateTime;
        RedfishCS_int64 *Differential;
        RedfishCS_int64 *Integral;
        RedfishCS_int64 *Proportional;
    } RedfishControl_V1_0_0_ControlLoop_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**CoefficientUpdateTime**|RedfishCS_char| String pointer to **CoefficientUpdateTime** property.| No| Yes
|**Differential**|RedfishCS_int64| 64-bit long long interger pointer to **Differential** property.| No| No
|**Integral**|RedfishCS_int64| 64-bit long long interger pointer to **Integral** property.| No| No
|**Proportional**|RedfishCS_int64| 64-bit long long interger pointer to **Proportional** property.| No| No


## ControlRangeExcerpt
    typedef struct _RedfishControl_V1_0_0_ControlRangeExcerpt_CS {
        RedfishCS_int64 *AllowableMax;
        RedfishCS_int64 *AllowableMin;
        RedfishCS_int64_Array *AllowableNumericValues;
        RedfishCS_char *ControlMode;
        RedfishCS_char *DataSourceUri;
        RedfishCS_int64 *Reading;
        RedfishCS_char *ReadingUnits;
        RedfishCS_int64 *SettingMax;
        RedfishCS_int64 *SettingMin;
    } RedfishControl_V1_0_0_ControlRangeExcerpt_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**AllowableMax**|RedfishCS_int64| 64-bit long long interger pointer to **AllowableMax** property.| No| Yes
|**AllowableMin**|RedfishCS_int64| 64-bit long long interger pointer to **AllowableMin** property.| No| Yes
|**AllowableNumericValues**|RedfishCS_int64_Array| Structure array points to one or more than one **RedfishCS_int64 *** for property **AllowableNumericValues**.| No| Yes
|**ControlMode**|RedfishCS_char| String pointer to **ControlMode** property.| No| No
|**DataSourceUri**|RedfishCS_char| String pointer to **DataSourceUri** property.| No| Yes
|**Reading**|RedfishCS_int64| 64-bit long long interger pointer to **Reading** property.| No| Yes
|**ReadingUnits**|RedfishCS_char| String pointer to **ReadingUnits** property.| No| Yes
|**SettingMax**|RedfishCS_int64| 64-bit long long interger pointer to **SettingMax** property.| No| No
|**SettingMin**|RedfishCS_int64| 64-bit long long interger pointer to **SettingMin** property.| No| No


## ControlSingleExcerpt
    typedef struct _RedfishControl_V1_0_0_ControlSingleExcerpt_CS {
        RedfishCS_int64 *AllowableMax;
        RedfishCS_int64 *AllowableMin;
        RedfishCS_char *ControlMode;
        RedfishCS_char *DataSourceUri;
        RedfishCS_int64 *Reading;
        RedfishCS_char *ReadingUnits;
        RedfishCS_int64 *SetPoint;
    } RedfishControl_V1_0_0_ControlSingleExcerpt_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**AllowableMax**|RedfishCS_int64| 64-bit long long interger pointer to **AllowableMax** property.| No| Yes
|**AllowableMin**|RedfishCS_int64| 64-bit long long interger pointer to **AllowableMin** property.| No| Yes
|**ControlMode**|RedfishCS_char| String pointer to **ControlMode** property.| No| No
|**DataSourceUri**|RedfishCS_char| String pointer to **DataSourceUri** property.| No| Yes
|**Reading**|RedfishCS_int64| 64-bit long long interger pointer to **Reading** property.| No| Yes
|**ReadingUnits**|RedfishCS_char| String pointer to **ReadingUnits** property.| No| Yes
|**SetPoint**|RedfishCS_int64| 64-bit long long interger pointer to **SetPoint** property.| No| No


## OemActions
    typedef struct _RedfishControl_V1_0_0_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishControl_V1_0_0_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## Condition
    typedef struct _RedfishResource_Condition_CS {
        RedfishCS_Link LogEntry;
        RedfishCS_char *Message;
        RedfishCS_char_Array *MessageArgs;
        RedfishCS_char *MessageId;
        Redfishodatav4_idRef_CS *OriginOfCondition;
        RedfishCS_char *Resolution;
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
|**Resolution**|RedfishCS_char| String pointer to **Resolution** property.| No| Yes
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


## RedfishCS_int64_Array
    typedef struct _RedfishCS_int64_Array  {
        RedfishCS_Link *Next;
        RedfishCS_int64 *ArrayValue;
    } RedfishCS_int64_Array;



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



## Control
    typedef struct _RedfishControl_V1_0_0_Control_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishCS_int64 *Accuracy;
        RedfishControl_V1_0_0_Actions_CS *Actions;
        RedfishCS_int64 *AllowableMax;
        RedfishCS_int64 *AllowableMin;
        RedfishCS_int64 *AllowableNumericValues;
        RedfishCS_Link AssociatedSensors;
        RedfishCS_int64 *AssociatedSensorsodata_count;
        RedfishCS_int64 *ControlDelaySeconds;
        RedfishControl_V1_0_0_ControlLoop_CS *ControlLoop;
        RedfishCS_char *ControlMode;
        RedfishCS_char *ControlType;
        RedfishCS_int64 *DeadBand;
        RedfishCS_char *Description;
        RedfishCS_char *Id;
        RedfishCS_char *Implementation;
        RedfishCS_int64 *Increment;
        RedfishCS_Link Location;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_char *PhysicalContext;
        RedfishCS_char *PhysicalSubContext;
        Redfishodatav4_idRef_CS *RelatedItem;
        RedfishCS_int64 *RelatedItemodata_count;
        RedfishCS_Link Sensor;
        RedfishCS_int64 *SetPoint;
        RedfishCS_char *SetPointType;
        RedfishCS_char *SetPointUnits;
        RedfishCS_char *SetPointUpdateTime;
        RedfishCS_int64 *SettingMax;
        RedfishCS_int64 *SettingMin;
        RedfishResource_Status_CS *Status;
    } RedfishControl_V1_0_0_Control_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Accuracy**|RedfishCS_int64| 64-bit long long interger pointer to **Accuracy** property.| No| Yes
|**Actions**|RedfishControl_V1_0_0_Actions_CS| Structure points to **Actions** property.| No| No
|**AllowableMax**|RedfishCS_int64| 64-bit long long interger pointer to **AllowableMax** property.| No| Yes
|**AllowableMin**|RedfishCS_int64| 64-bit long long interger pointer to **AllowableMin** property.| No| Yes
|**AllowableNumericValues**|RedfishCS_int64| 64-bit long long interger pointer to **AllowableNumericValues** property.| No| Yes
|**AssociatedSensors**|RedfishCS_Link| Structure link list to **AssociatedSensors** property.| No| Yes
|**AssociatedSensorsodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **AssociatedSensors@odata.count** property.| No| No
|**ControlDelaySeconds**|RedfishCS_int64| 64-bit long long interger pointer to **ControlDelaySeconds** property.| No| No
|**ControlLoop**|RedfishControl_V1_0_0_ControlLoop_CS| Structure points to **ControlLoop** property.| No| No
|**ControlMode**|RedfishCS_char| String pointer to **ControlMode** property.| No| No
|**ControlType**|RedfishCS_char| String pointer to **ControlType** property.| No| Yes
|**DeadBand**|RedfishCS_int64| 64-bit long long interger pointer to **DeadBand** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**Implementation**|RedfishCS_char| String pointer to **Implementation** property.| No| Yes
|**Increment**|RedfishCS_int64| 64-bit long long interger pointer to **Increment** property.| No| Yes
|**Location**|RedfishCS_Link| Structure link list to **Location** property.| No| No
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**PhysicalContext**|RedfishCS_char| String pointer to **PhysicalContext** property.| No| Yes
|**PhysicalSubContext**|RedfishCS_char| String pointer to **PhysicalSubContext** property.| No| Yes
|**RelatedItem**|Redfishodatav4_idRef_CS| Structure points to **RelatedItem** property.| No| Yes
|**RelatedItemodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **RelatedItem@odata.count** property.| No| No
|**Sensor**|RedfishCS_Link| Structure link list to **Sensor** property.| No| Yes
|**SetPoint**|RedfishCS_int64| 64-bit long long interger pointer to **SetPoint** property.| No| No
|**SetPointType**|RedfishCS_char| String pointer to **SetPointType** property.| No| Yes
|**SetPointUnits**|RedfishCS_char| String pointer to **SetPointUnits** property.| No| Yes
|**SetPointUpdateTime**|RedfishCS_char| String pointer to **SetPointUpdateTime** property.| No| Yes
|**SettingMax**|RedfishCS_int64| 64-bit long long interger pointer to **SettingMax** property.| No| No
|**SettingMin**|RedfishCS_int64| 64-bit long long interger pointer to **SettingMin** property.| No| No
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
## Redfish Control V1_0_0 to C Structure Function
    RedfishCS_status
    Json_Control_V1_0_0_To_CS (RedfishCS_char *JsonRawText, RedfishControl_V1_0_0_Control_CS **ReturnedCS);

## C Structure to Redfish Control V1_0_0 JSON Function
    RedfishCS_status
    CS_To_Control_V1_0_0_JSON (RedfishControl_V1_0_0_Control_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish Control V1_0_0 C Structure Function
    RedfishCS_status
    DestroyControl_V1_0_0_CS (RedfishControl_V1_0_0_Control_CS *CSPtr);

