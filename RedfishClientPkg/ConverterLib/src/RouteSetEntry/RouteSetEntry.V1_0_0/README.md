# Definition of RouteSetEntry.V1_0_0 and functions<br><br>

## Oem
    typedef struct _RedfishResource_Oem_CS {
        RedfishCS_Link Prop;
    } RedfishResource_Oem_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## Actions
    typedef struct _RedfishRouteSetEntry_V1_0_0_Actions_CS {
        RedfishRouteSetEntry_V1_0_0_OemActions_CS *Oem;
    } RedfishRouteSetEntry_V1_0_0_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishRouteSetEntry_V1_0_0_OemActions_CS| Structure points to **Oem** property.| No| No


## OemActions
    typedef struct _RedfishRouteSetEntry_V1_0_0_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishRouteSetEntry_V1_0_0_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## RouteSetEntry
    typedef struct _RedfishRouteSetEntry_V1_0_0_RouteSetEntry_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishRouteSetEntry_V1_0_0_Actions_CS *Actions;
        RedfishCS_char *Description;
        RedfishCS_int64 *EgressIdentifier;
        RedfishCS_int64 *HopCount;
        RedfishCS_char *Id;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_int64 *VCAction;
        RedfishCS_bool *Valid;
    } RedfishRouteSetEntry_V1_0_0_RouteSetEntry_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishRouteSetEntry_V1_0_0_Actions_CS| Structure points to **Actions** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**EgressIdentifier**|RedfishCS_int64| 64-bit long long interger pointer to **EgressIdentifier** property.| No| No
|**HopCount**|RedfishCS_int64| 64-bit long long interger pointer to **HopCount** property.| No| No
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**VCAction**|RedfishCS_int64| 64-bit long long interger pointer to **VCAction** property.| No| No
|**Valid**|RedfishCS_bool| Boolean pointer to **Valid** property.| No| No
## Redfish RouteSetEntry V1_0_0 to C Structure Function
    RedfishCS_status
    Json_RouteSetEntry_V1_0_0_To_CS (RedfishCS_char *JsonRawText, RedfishRouteSetEntry_V1_0_0_RouteSetEntry_CS **ReturnedCS);

## C Structure to Redfish RouteSetEntry V1_0_0 JSON Function
    RedfishCS_status
    CS_To_RouteSetEntry_V1_0_0_JSON (RedfishRouteSetEntry_V1_0_0_RouteSetEntry_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish RouteSetEntry V1_0_0 C Structure Function
    RedfishCS_status
    DestroyRouteSetEntry_V1_0_0_CS (RedfishRouteSetEntry_V1_0_0_RouteSetEntry_CS *CSPtr);

