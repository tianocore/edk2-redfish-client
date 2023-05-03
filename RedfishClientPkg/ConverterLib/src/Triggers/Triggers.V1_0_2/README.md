# Definition of Triggers.V1_0_2 and functions<br><br>

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
    typedef struct _RedfishTriggers_V1_0_2_Actions_CS {
        RedfishTriggers_V1_0_2_OemActions_CS *Oem;
    } RedfishTriggers_V1_0_2_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishTriggers_V1_0_2_OemActions_CS| Structure points to **Oem** property.| No| No


## DiscreteTrigger
    typedef struct _RedfishTriggers_V1_0_2_DiscreteTrigger_CS {
        RedfishCS_char *DwellTime;
        RedfishCS_char *Name;
        RedfishCS_char *Severity;
        RedfishCS_char *Value;
    } RedfishTriggers_V1_0_2_DiscreteTrigger_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**DwellTime**|RedfishCS_char| String pointer to **DwellTime** property.| No| No
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Severity**|RedfishCS_char| String pointer to **Severity** property.| No| No
|**Value**|RedfishCS_char| String pointer to **Value** property.| No| No


## OemActions
    typedef struct _RedfishTriggers_V1_0_2_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishTriggers_V1_0_2_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## Threshold
    typedef struct _RedfishTriggers_V1_0_2_Threshold_CS {
        RedfishCS_char *Activation;
        RedfishCS_char *DwellTime;
        RedfishCS_int64 *Reading;
    } RedfishTriggers_V1_0_2_Threshold_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Activation**|RedfishCS_char| String pointer to **Activation** property.| No| No
|**DwellTime**|RedfishCS_char| String pointer to **DwellTime** property.| No| No
|**Reading**|RedfishCS_int64| 64-bit long long interger pointer to **Reading** property.| No| No


## Thresholds
    typedef struct _RedfishTriggers_V1_0_2_Thresholds_CS {
        RedfishTriggers_V1_0_2_Threshold_CS *LowerCritical;
        RedfishTriggers_V1_0_2_Threshold_CS *LowerWarning;
        RedfishTriggers_V1_0_2_Threshold_CS *UpperCritical;
        RedfishTriggers_V1_0_2_Threshold_CS *UpperWarning;
    } RedfishTriggers_V1_0_2_Thresholds_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**LowerCritical**|RedfishTriggers_V1_0_2_Threshold_CS| Structure points to **LowerCritical** property.| No| No
|**LowerWarning**|RedfishTriggers_V1_0_2_Threshold_CS| Structure points to **LowerWarning** property.| No| No
|**UpperCritical**|RedfishTriggers_V1_0_2_Threshold_CS| Structure points to **UpperCritical** property.| No| No
|**UpperWarning**|RedfishTriggers_V1_0_2_Threshold_CS| Structure points to **UpperWarning** property.| No| No


## Wildcard
    typedef struct _RedfishTriggers_V1_0_2_Wildcard_CS {
        RedfishCS_char *Name;
        RedfishCS_char_Array *Values;
    } RedfishTriggers_V1_0_2_Wildcard_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Values**|RedfishCS_char_Array| Structure array points to one or more than one **RedfishCS_char *** for property **Values**.| No| Yes


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



## Triggers
    typedef struct _RedfishTriggers_V1_0_2_Triggers_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishTriggers_V1_0_2_Actions_CS *Actions;
        RedfishCS_char *Description;
        RedfishCS_char *DiscreteTriggerCondition;
        RedfishTriggers_V1_0_2_DiscreteTrigger_CS *DiscreteTriggers;
        RedfishCS_char *Id;
        RedfishCS_char *MetricProperties;
        RedfishCS_char *MetricType;
        RedfishCS_char *Name;
        RedfishTriggers_V1_0_2_Thresholds_CS *NumericThresholds;
        RedfishResource_Oem_CS *Oem;
        RedfishResource_Status_CS *Status;
        RedfishCS_char *TriggerActions;
        RedfishTriggers_V1_0_2_Wildcard_CS *Wildcards;
    } RedfishTriggers_V1_0_2_Triggers_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishTriggers_V1_0_2_Actions_CS| Structure points to **Actions** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**DiscreteTriggerCondition**|RedfishCS_char| String pointer to **DiscreteTriggerCondition** property.| No| Yes
|**DiscreteTriggers**|RedfishTriggers_V1_0_2_DiscreteTrigger_CS| Structure points to **DiscreteTriggers** property.| No| No
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**MetricProperties**|RedfishCS_char| String pointer to **MetricProperties** property.| No| No
|**MetricType**|RedfishCS_char| String pointer to **MetricType** property.| No| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**NumericThresholds**|RedfishTriggers_V1_0_2_Thresholds_CS| Structure points to **NumericThresholds** property.| No| No
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
|**TriggerActions**|RedfishCS_char| String pointer to **TriggerActions** property.| No| Yes
|**Wildcards**|RedfishTriggers_V1_0_2_Wildcard_CS| Structure points to **Wildcards** property.| No| No
## Redfish Triggers V1_0_2 to C Structure Function
    RedfishCS_status
    Json_Triggers_V1_0_2_To_CS (RedfishCS_char *JsonRawText, RedfishTriggers_V1_0_2_Triggers_CS **ReturnedCS);

## C Structure to Redfish Triggers V1_0_2 JSON Function
    RedfishCS_status
    CS_To_Triggers_V1_0_2_JSON (RedfishTriggers_V1_0_2_Triggers_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish Triggers V1_0_2 C Structure Function
    RedfishCS_status
    DestroyTriggers_V1_0_2_CS (RedfishTriggers_V1_0_2_Triggers_CS *CSPtr);

