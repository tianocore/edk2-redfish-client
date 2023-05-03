# Definition of Role.V1_0_4 and functions<br><br>

## Oem
    typedef struct _RedfishResource_Oem_CS {
        RedfishCS_Link Prop;
    } RedfishResource_Oem_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## Role
    typedef struct _RedfishRole_V1_0_4_Role_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishCS_char *AssignedPrivileges;
        RedfishCS_char *Description;
        RedfishCS_char *Id;
        RedfishCS_bool *IsPredefined;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_char *OemPrivileges;
    } RedfishRole_V1_0_4_Role_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**AssignedPrivileges**|RedfishCS_char| String pointer to **AssignedPrivileges** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**IsPredefined**|RedfishCS_bool| Boolean pointer to **IsPredefined** property.| No| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**OemPrivileges**|RedfishCS_char| String pointer to **OemPrivileges** property.| No| No
## Redfish Role V1_0_4 to C Structure Function
    RedfishCS_status
    Json_Role_V1_0_4_To_CS (RedfishCS_char *JsonRawText, RedfishRole_V1_0_4_Role_CS **ReturnedCS);

## C Structure to Redfish Role V1_0_4 JSON Function
    RedfishCS_status
    CS_To_Role_V1_0_4_JSON (RedfishRole_V1_0_4_Role_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish Role V1_0_4 C Structure Function
    RedfishCS_status
    DestroyRole_V1_0_4_CS (RedfishRole_V1_0_4_Role_CS *CSPtr);

