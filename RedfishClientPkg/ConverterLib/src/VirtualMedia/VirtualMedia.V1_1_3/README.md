# Definition of VirtualMedia.V1_1_3 and functions<br><br>

## Oem
    typedef struct _RedfishResource_Oem_CS {
        RedfishCS_Link Prop;
    } RedfishResource_Oem_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## Actions
    typedef struct _RedfishVirtualMedia_V1_1_3_Actions_CS {
        RedfishVirtualMedia_V1_1_3_OemActions_CS *Oem;
    } RedfishVirtualMedia_V1_1_3_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishVirtualMedia_V1_1_3_OemActions_CS| Structure points to **Oem** property.| No| No


## OemActions
    typedef struct _RedfishVirtualMedia_V1_1_3_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishVirtualMedia_V1_1_3_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## VirtualMedia
    typedef struct _RedfishVirtualMedia_V1_1_3_VirtualMedia_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishVirtualMedia_V1_1_3_Actions_CS *Actions;
        RedfishCS_char *ConnectedVia;
        RedfishCS_char *Description;
        RedfishCS_char *Id;
        RedfishCS_char *Image;
        RedfishCS_char *ImageName;
        RedfishCS_bool *Inserted;
        RedfishCS_char *MediaTypes;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_bool *WriteProtected;
    } RedfishVirtualMedia_V1_1_3_VirtualMedia_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishVirtualMedia_V1_1_3_Actions_CS| Structure points to **Actions** property.| No| No
|**ConnectedVia**|RedfishCS_char| String pointer to **ConnectedVia** property.| No| Yes
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**Image**|RedfishCS_char| String pointer to **Image** property.| No| No
|**ImageName**|RedfishCS_char| String pointer to **ImageName** property.| No| Yes
|**Inserted**|RedfishCS_bool| Boolean pointer to **Inserted** property.| No| No
|**MediaTypes**|RedfishCS_char| String pointer to **MediaTypes** property.| No| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**WriteProtected**|RedfishCS_bool| Boolean pointer to **WriteProtected** property.| No| No
## Redfish VirtualMedia V1_1_3 to C Structure Function
    RedfishCS_status
    Json_VirtualMedia_V1_1_3_To_CS (RedfishCS_char *JsonRawText, RedfishVirtualMedia_V1_1_3_VirtualMedia_CS **ReturnedCS);

## C Structure to Redfish VirtualMedia V1_1_3 JSON Function
    RedfishCS_status
    CS_To_VirtualMedia_V1_1_3_JSON (RedfishVirtualMedia_V1_1_3_VirtualMedia_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish VirtualMedia V1_1_3 C Structure Function
    RedfishCS_status
    DestroyVirtualMedia_V1_1_3_CS (RedfishVirtualMedia_V1_1_3_VirtualMedia_CS *CSPtr);

