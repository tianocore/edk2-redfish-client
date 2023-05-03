# Definition of Task.V1_1_3 and functions<br><br>

## Oem
    typedef struct _RedfishResource_Oem_CS {
        RedfishCS_Link Prop;
    } RedfishResource_Oem_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## Actions
    typedef struct _RedfishTask_V1_1_3_Actions_CS {
        RedfishTask_V1_1_3_OemActions_CS *Oem;
    } RedfishTask_V1_1_3_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishTask_V1_1_3_OemActions_CS| Structure points to **Oem** property.| No| No


## OemActions
    typedef struct _RedfishTask_V1_1_3_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishTask_V1_1_3_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## Task
    typedef struct _RedfishTask_V1_1_3_Task_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishTask_V1_1_3_Actions_CS *Actions;
        RedfishCS_char *Description;
        RedfishCS_char *EndTime;
        RedfishCS_char *Id;
        RedfishCS_Link Messages;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_char *StartTime;
        RedfishCS_char *TaskState;
        RedfishCS_char *TaskStatus;
    } RedfishTask_V1_1_3_Task_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishTask_V1_1_3_Actions_CS| Structure points to **Actions** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**EndTime**|RedfishCS_char| String pointer to **EndTime** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**Messages**|RedfishCS_Link| Structure link list to **Messages** property.| No| No
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**StartTime**|RedfishCS_char| String pointer to **StartTime** property.| No| Yes
|**TaskState**|RedfishCS_char| String pointer to **TaskState** property.| No| Yes
|**TaskStatus**|RedfishCS_char| String pointer to **TaskStatus** property.| No| Yes
## Redfish Task V1_1_3 to C Structure Function
    RedfishCS_status
    Json_Task_V1_1_3_To_CS (RedfishCS_char *JsonRawText, RedfishTask_V1_1_3_Task_CS **ReturnedCS);

## C Structure to Redfish Task V1_1_3 JSON Function
    RedfishCS_status
    CS_To_Task_V1_1_3_JSON (RedfishTask_V1_1_3_Task_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish Task V1_1_3 C Structure Function
    RedfishCS_status
    DestroyTask_V1_1_3_CS (RedfishTask_V1_1_3_Task_CS *CSPtr);

