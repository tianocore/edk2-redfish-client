# Definition of Session.V1_0_0 and functions<br><br>

## Oem
    typedef struct _RedfishResource_Oem_CS {
        RedfishCS_Link Prop;
    } RedfishResource_Oem_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## Session
    typedef struct _RedfishSession_V1_0_0_Session_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishCS_char *Description;
        RedfishCS_char *Id;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_char *Password;
        RedfishCS_char *UserName;
    } RedfishSession_V1_0_0_Session_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| No| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| No
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| No
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| No
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**Password**|RedfishCS_char| String pointer to **Password** property.| No| No
|**UserName**|RedfishCS_char| String pointer to **UserName** property.| No| Yes
## Redfish Session V1_0_0 to C Structure Function
    RedfishCS_status
    Json_Session_V1_0_0_To_CS (RedfishCS_char *JsonRawText, RedfishSession_V1_0_0_Session_CS **ReturnedCS);

## C Structure to Redfish Session V1_0_0 JSON Function
    RedfishCS_status
    CS_To_Session_V1_0_0_JSON (RedfishSession_V1_0_0_Session_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish Session V1_0_0 C Structure Function
    RedfishCS_status
    DestroySession_V1_0_0_CS (RedfishSession_V1_0_0_Session_CS *CSPtr);

