# Definition of ActionInfo.V1_0_5 and functions<br><br>

## Parameters
    typedef struct _RedfishActionInfo_V1_0_5_Parameters_CS {
        RedfishCS_char_Array *AllowableValues;
        RedfishCS_char *DataType;
        RedfishCS_char *Name;
        RedfishCS_char *ObjectDataType;
        RedfishCS_bool *Required;
    } RedfishActionInfo_V1_0_5_Parameters_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**AllowableValues**|RedfishCS_char_Array| Structure array points to one or more than one **RedfishCS_char *** for property **AllowableValues**.| No| Yes
|**DataType**|RedfishCS_char| String pointer to **DataType** property.| No| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**ObjectDataType**|RedfishCS_char| String pointer to **ObjectDataType** property.| No| Yes
|**Required**|RedfishCS_bool| Boolean pointer to **Required** property.| No| Yes


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



## ActionInfo
    typedef struct _RedfishActionInfo_V1_0_5_ActionInfo_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishCS_char *Description;
        RedfishCS_char *Id;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishActionInfo_V1_0_5_Parameters_CS *Parameters;
    } RedfishActionInfo_V1_0_5_ActionInfo_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**Parameters**|RedfishActionInfo_V1_0_5_Parameters_CS| Structure points to **Parameters** property.| No| No
## Redfish ActionInfo V1_0_5 to C Structure Function
    RedfishCS_status
    Json_ActionInfo_V1_0_5_To_CS (RedfishCS_char *JsonRawText, RedfishActionInfo_V1_0_5_ActionInfo_CS **ReturnedCS);

## C Structure to Redfish ActionInfo V1_0_5 JSON Function
    RedfishCS_status
    CS_To_ActionInfo_V1_0_5_JSON (RedfishActionInfo_V1_0_5_ActionInfo_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish ActionInfo V1_0_5 C Structure Function
    RedfishCS_status
    DestroyActionInfo_V1_0_5_CS (RedfishActionInfo_V1_0_5_ActionInfo_CS *CSPtr);

