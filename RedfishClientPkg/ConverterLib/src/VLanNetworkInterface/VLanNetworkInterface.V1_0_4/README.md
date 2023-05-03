# Definition of VLanNetworkInterface.V1_0_4 and functions<br><br>

## Oem
    typedef struct _RedfishResource_Oem_CS {
        RedfishCS_Link Prop;
    } RedfishResource_Oem_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## VLAN
    typedef struct _RedfishVLanNetworkInterface_V1_0_4_VLAN_CS {
        RedfishCS_bool *VLANEnable;
        RedfishCS_int64 *VLANId;
    } RedfishVLanNetworkInterface_V1_0_4_VLAN_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**VLANEnable**|RedfishCS_bool| Boolean pointer to **VLANEnable** property.| No| No
|**VLANId**|RedfishCS_int64| 64-bit long long interger pointer to **VLANId** property.| No| No


## VLanNetworkInterface
    typedef struct _RedfishVLanNetworkInterface_V1_0_4_VLanNetworkInterface_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishCS_char *Description;
        RedfishCS_char *Id;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_bool *VLANEnable;
        RedfishCS_int64 *VLANId;
    } RedfishVLanNetworkInterface_V1_0_4_VLanNetworkInterface_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| No| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**VLANEnable**|RedfishCS_bool| Boolean pointer to **VLANEnable** property.| No| No
|**VLANId**|RedfishCS_int64| 64-bit long long interger pointer to **VLANId** property.| No| No
## Redfish VLanNetworkInterface V1_0_4 to C Structure Function
    RedfishCS_status
    Json_VLanNetworkInterface_V1_0_4_To_CS (RedfishCS_char *JsonRawText, RedfishVLanNetworkInterface_V1_0_4_VLanNetworkInterface_CS **ReturnedCS);

## C Structure to Redfish VLanNetworkInterface V1_0_4 JSON Function
    RedfishCS_status
    CS_To_VLanNetworkInterface_V1_0_4_JSON (RedfishVLanNetworkInterface_V1_0_4_VLanNetworkInterface_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish VLanNetworkInterface V1_0_4 C Structure Function
    RedfishCS_status
    DestroyVLanNetworkInterface_V1_0_4_CS (RedfishVLanNetworkInterface_V1_0_4_VLanNetworkInterface_CS *CSPtr);

