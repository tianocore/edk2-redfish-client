# Definition of TelemetryService.V1_3_0 and functions<br><br>

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
    typedef struct _RedfishTelemetryService_V1_3_0_Actions_CS {
        RedfishTelemetryService_V1_3_0_ClearMetricReports_CS *TelemetryService_ClearMetricReports;
        RedfishTelemetryService_V1_3_0_ResetMetricReportDefinitionsToDefaults_CS *TelemetryService_ResetMetricReportDefinitionsToDefaults;
        RedfishTelemetryService_V1_3_0_ResetTriggersToDefaults_CS *TelemetryService_ResetTriggersToDefaults;
        RedfishTelemetryService_V1_3_0_SubmitTestMetricReport_CS *TelemetryService_SubmitTestMetricReport;
        RedfishTelemetryService_V1_3_0_OemActions_CS *Oem;
    } RedfishTelemetryService_V1_3_0_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**TelemetryService_ClearMetricReports**|RedfishTelemetryService_V1_3_0_ClearMetricReports_CS| Structure points to **#TelemetryService.ClearMetricReports** property.| No| No
|**TelemetryService_ResetMetricReportDefinitionsToDefaults**|RedfishTelemetryService_V1_3_0_ResetMetricReportDefinitionsToDefaults_CS| Structure points to **#TelemetryService.ResetMetricReportDefinitionsToDefaults** property.| No| No
|**TelemetryService_ResetTriggersToDefaults**|RedfishTelemetryService_V1_3_0_ResetTriggersToDefaults_CS| Structure points to **#TelemetryService.ResetTriggersToDefaults** property.| No| No
|**TelemetryService_SubmitTestMetricReport**|RedfishTelemetryService_V1_3_0_SubmitTestMetricReport_CS| Structure points to **#TelemetryService.SubmitTestMetricReport** property.| No| No
|**Oem**|RedfishTelemetryService_V1_3_0_OemActions_CS| Structure points to **Oem** property.| No| No


## ClearMetricReports
    typedef struct _RedfishTelemetryService_V1_3_0_ClearMetricReports_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishTelemetryService_V1_3_0_ClearMetricReports_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**target**|RedfishCS_char| String pointer to **target** property.| No| No
|**title**|RedfishCS_char| String pointer to **title** property.| No| No


## MetricValue
    typedef struct _RedfishTelemetryService_V1_3_0_MetricValue_CS {
        RedfishCS_Link MetricDefinition;
        RedfishCS_char *MetricId;
        RedfishCS_char *MetricProperty;
        RedfishCS_char *MetricValue;
        RedfishCS_char *Timestamp;
    } RedfishTelemetryService_V1_3_0_MetricValue_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**MetricDefinition**|RedfishCS_Link| Structure link list to **MetricDefinition** property.| No| Yes
|**MetricId**|RedfishCS_char| String pointer to **MetricId** property.| No| Yes
|**MetricProperty**|RedfishCS_char| String pointer to **MetricProperty** property.| No| Yes
|**MetricValue**|RedfishCS_char| String pointer to **MetricValue** property.| No| Yes
|**Timestamp**|RedfishCS_char| String pointer to **Timestamp** property.| No| Yes


## OemActions
    typedef struct _RedfishTelemetryService_V1_3_0_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishTelemetryService_V1_3_0_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## ResetMetricReportDefinitionsToDefaults
    typedef struct _RedfishTelemetryService_V1_3_0_ResetMetricReportDefinitionsToDefaults_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishTelemetryService_V1_3_0_ResetMetricReportDefinitionsToDefaults_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**target**|RedfishCS_char| String pointer to **target** property.| No| No
|**title**|RedfishCS_char| String pointer to **title** property.| No| No


## ResetTriggersToDefaults
    typedef struct _RedfishTelemetryService_V1_3_0_ResetTriggersToDefaults_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishTelemetryService_V1_3_0_ResetTriggersToDefaults_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**target**|RedfishCS_char| String pointer to **target** property.| No| No
|**title**|RedfishCS_char| String pointer to **title** property.| No| No


## SubmitTestMetricReport
    typedef struct _RedfishTelemetryService_V1_3_0_SubmitTestMetricReport_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishTelemetryService_V1_3_0_SubmitTestMetricReport_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**target**|RedfishCS_char| String pointer to **target** property.| No| No
|**title**|RedfishCS_char| String pointer to **title** property.| No| No


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



## TelemetryService
    typedef struct _RedfishTelemetryService_V1_3_0_TelemetryService_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishTelemetryService_V1_3_0_Actions_CS *Actions;
        RedfishCS_char *Description;
        RedfishCS_char *Id;
        RedfishCS_Link LogService;
        RedfishCS_int64 *MaxReports;
        RedfishCS_Link MetricDefinitions;
        RedfishCS_Link MetricReportDefinitions;
        RedfishCS_Link MetricReports;
        RedfishCS_char *MinCollectionInterval;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_bool *ServiceEnabled;
        RedfishResource_Status_CS *Status;
        RedfishCS_char *SupportedCollectionFunctions;
        RedfishCS_Link Triggers;
    } RedfishTelemetryService_V1_3_0_TelemetryService_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishTelemetryService_V1_3_0_Actions_CS| Structure points to **Actions** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**LogService**|RedfishCS_Link| Structure link list to **LogService** property.| No| Yes
|**MaxReports**|RedfishCS_int64| 64-bit long long interger pointer to **MaxReports** property.| No| Yes
|**MetricDefinitions**|RedfishCS_Link| Structure link list to **MetricDefinitions** property.| No| Yes
|**MetricReportDefinitions**|RedfishCS_Link| Structure link list to **MetricReportDefinitions** property.| No| Yes
|**MetricReports**|RedfishCS_Link| Structure link list to **MetricReports** property.| No| Yes
|**MinCollectionInterval**|RedfishCS_char| String pointer to **MinCollectionInterval** property.| No| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**ServiceEnabled**|RedfishCS_bool| Boolean pointer to **ServiceEnabled** property.| No| No
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
|**SupportedCollectionFunctions**|RedfishCS_char| String pointer to **SupportedCollectionFunctions** property.| No| No
|**Triggers**|RedfishCS_Link| Structure link list to **Triggers** property.| No| Yes
## Redfish TelemetryService V1_3_0 to C Structure Function
    RedfishCS_status
    Json_TelemetryService_V1_3_0_To_CS (RedfishCS_char *JsonRawText, RedfishTelemetryService_V1_3_0_TelemetryService_CS **ReturnedCS);

## C Structure to Redfish TelemetryService V1_3_0 JSON Function
    RedfishCS_status
    CS_To_TelemetryService_V1_3_0_JSON (RedfishTelemetryService_V1_3_0_TelemetryService_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish TelemetryService V1_3_0 C Structure Function
    RedfishCS_status
    DestroyTelemetryService_V1_3_0_CS (RedfishTelemetryService_V1_3_0_TelemetryService_CS *CSPtr);

