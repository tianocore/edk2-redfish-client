# Definition of Job.V1_0_5 and functions<br><br>

## Actions
    typedef struct _RedfishJob_V1_0_5_Actions_CS {
        RedfishJob_V1_0_5_OemActions_CS *Oem;
    } RedfishJob_V1_0_5_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishJob_V1_0_5_OemActions_CS| Structure points to **Oem** property.| No| No


## OemActions
    typedef struct _RedfishJob_V1_0_5_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishJob_V1_0_5_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## Payload
    typedef struct _RedfishJob_V1_0_5_Payload_CS {
        RedfishCS_char_Array *HttpHeaders;
        RedfishCS_char *HttpOperation;
        RedfishCS_char *JsonBody;
        RedfishCS_char *TargetUri;
    } RedfishJob_V1_0_5_Payload_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**HttpHeaders**|RedfishCS_char_Array| Structure array points to one or more than one **RedfishCS_char *** for property **HttpHeaders**.| No| Yes
|**HttpOperation**|RedfishCS_char| String pointer to **HttpOperation** property.| No| Yes
|**JsonBody**|RedfishCS_char| String pointer to **JsonBody** property.| No| Yes
|**TargetUri**|RedfishCS_char| String pointer to **TargetUri** property.| No| Yes


## Oem
    typedef struct _RedfishResource_Oem_CS {
        RedfishCS_Link Prop;
    } RedfishResource_Oem_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## RedfishCS_char_Array
    typedef struct _RedfishCS_char_Array  {
        RedfishCS_Link *Next;
        RedfishCS_char *ArrayValue;
    } RedfishCS_char_Array;



## Job
    typedef struct _RedfishJob_V1_0_5_Job_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishJob_V1_0_5_Actions_CS *Actions;
        RedfishCS_char *CreatedBy;
        RedfishCS_char *Description;
        RedfishCS_char *EndTime;
        RedfishCS_bool *HidePayload;
        RedfishCS_char *Id;
        RedfishCS_char *JobState;
        RedfishCS_char *JobStatus;
        RedfishCS_char *MaxExecutionTime;
        RedfishCS_Link Messages;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishJob_V1_0_5_Payload_CS *Payload;
        RedfishCS_int64 *PercentComplete;
        RedfishCS_Link Schedule;
        RedfishCS_char *StartTime;
        RedfishCS_char *StepOrder;
        RedfishCS_Link Steps;
    } RedfishJob_V1_0_5_Job_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishJob_V1_0_5_Actions_CS| Structure points to **Actions** property.| No| No
|**CreatedBy**|RedfishCS_char| String pointer to **CreatedBy** property.| No| Yes
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**EndTime**|RedfishCS_char| String pointer to **EndTime** property.| No| Yes
|**HidePayload**|RedfishCS_bool| Boolean pointer to **HidePayload** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**JobState**|RedfishCS_char| String pointer to **JobState** property.| No| No
|**JobStatus**|RedfishCS_char| String pointer to **JobStatus** property.| No| Yes
|**MaxExecutionTime**|RedfishCS_char| String pointer to **MaxExecutionTime** property.| No| No
|**Messages**|RedfishCS_Link| Structure link list to **Messages** property.| No| No
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**Payload**|RedfishJob_V1_0_5_Payload_CS| Structure points to **Payload** property.| No| No
|**PercentComplete**|RedfishCS_int64| 64-bit long long interger pointer to **PercentComplete** property.| No| Yes
|**Schedule**|RedfishCS_Link| Structure link list to **Schedule** property.| No| No
|**StartTime**|RedfishCS_char| String pointer to **StartTime** property.| No| Yes
|**StepOrder**|RedfishCS_char| String pointer to **StepOrder** property.| No| Yes
|**Steps**|RedfishCS_Link| Structure link list to **Steps** property.| No| Yes
## Redfish Job V1_0_5 to C Structure Function
    RedfishCS_status
    Json_Job_V1_0_5_To_CS (RedfishCS_char *JsonRawText, RedfishJob_V1_0_5_Job_CS **ReturnedCS);

## C Structure to Redfish Job V1_0_5 JSON Function
    RedfishCS_status
    CS_To_Job_V1_0_5_JSON (RedfishJob_V1_0_5_Job_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish Job V1_0_5 C Structure Function
    RedfishCS_status
    DestroyJob_V1_0_5_CS (RedfishJob_V1_0_5_Job_CS *CSPtr);

