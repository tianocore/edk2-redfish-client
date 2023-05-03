# Definition of RouteEntry.V1_0_0 and functions<br><br>

## Oem
    typedef struct _RedfishResource_Oem_CS {
        RedfishCS_Link Prop;
    } RedfishResource_Oem_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## Actions
    typedef struct _RedfishRouteEntry_V1_0_0_Actions_CS {
        RedfishRouteEntry_V1_0_0_OemActions_CS *Oem;
    } RedfishRouteEntry_V1_0_0_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishRouteEntry_V1_0_0_OemActions_CS| Structure points to **Oem** property.| No| No


## OemActions
    typedef struct _RedfishRouteEntry_V1_0_0_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishRouteEntry_V1_0_0_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## RouteEntry
    typedef struct _RedfishRouteEntry_V1_0_0_RouteEntry_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishRouteEntry_V1_0_0_Actions_CS *Actions;
        RedfishCS_char *Description;
        RedfishCS_char *Id;
        RedfishCS_int64 *MinimumHopCount;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_char *RawEntryHex;
        RedfishCS_Link RouteSet;
    } RedfishRouteEntry_V1_0_0_RouteEntry_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishRouteEntry_V1_0_0_Actions_CS| Structure points to **Actions** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**MinimumHopCount**|RedfishCS_int64| 64-bit long long interger pointer to **MinimumHopCount** property.| No| No
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**RawEntryHex**|RedfishCS_char| String pointer to **RawEntryHex** property.| No| No
|**RouteSet**|RedfishCS_Link| Structure link list to **RouteSet** property.| No| Yes
## Redfish RouteEntry V1_0_0 to C Structure Function
    RedfishCS_status
    Json_RouteEntry_V1_0_0_To_CS (RedfishCS_char *JsonRawText, RedfishRouteEntry_V1_0_0_RouteEntry_CS **ReturnedCS);

## C Structure to Redfish RouteEntry V1_0_0 JSON Function
    RedfishCS_status
    CS_To_RouteEntry_V1_0_0_JSON (RedfishRouteEntry_V1_0_0_RouteEntry_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish RouteEntry V1_0_0 C Structure Function
    RedfishCS_status
    DestroyRouteEntry_V1_0_0_CS (RedfishRouteEntry_V1_0_0_RouteEntry_CS *CSPtr);

