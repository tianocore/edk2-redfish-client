# Definition of AggregationSource.V1_0_0 and functions<br><br>

## Actions
    typedef struct _RedfishAggregationSource_V1_0_0_Actions_CS {
        RedfishAggregationSource_V1_0_0_OemActions_CS *Oem;
    } RedfishAggregationSource_V1_0_0_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishAggregationSource_V1_0_0_OemActions_CS| Structure points to **Oem** property.| No| No


## Links
    typedef struct _RedfishAggregationSource_V1_0_0_Links_CS {
        RedfishCS_Link ConnectionMethod;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_Link ResourcesAccessed;
        RedfishCS_int64 *ResourcesAccessedodata_count;
    } RedfishAggregationSource_V1_0_0_Links_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**ConnectionMethod**|RedfishCS_Link| Structure link list to **ConnectionMethod** property.| No| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**ResourcesAccessed**|RedfishCS_Link| Structure link list to **ResourcesAccessed** property.| No| Yes
|**ResourcesAccessedodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **ResourcesAccessed@odata.count** property.| No| No


## OemActions
    typedef struct _RedfishAggregationSource_V1_0_0_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishAggregationSource_V1_0_0_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## Oem
    typedef struct _RedfishResource_Oem_CS {
        RedfishCS_Link Prop;
    } RedfishResource_Oem_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## AggregationSource
    typedef struct _RedfishAggregationSource_V1_0_0_AggregationSource_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishAggregationSource_V1_0_0_Actions_CS *Actions;
        RedfishCS_char *Description;
        RedfishCS_char *HostName;
        RedfishCS_char *Id;
        RedfishAggregationSource_V1_0_0_Links_CS *Links;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_char *Password;
        RedfishCS_char *UserName;
    } RedfishAggregationSource_V1_0_0_AggregationSource_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishAggregationSource_V1_0_0_Actions_CS| Structure points to **Actions** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**HostName**|RedfishCS_char| String pointer to **HostName** property.| Yes| No
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**Links**|RedfishAggregationSource_V1_0_0_Links_CS| Structure points to **Links** property.| No| No
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**Password**|RedfishCS_char| String pointer to **Password** property.| No| No
|**UserName**|RedfishCS_char| String pointer to **UserName** property.| No| No
## Redfish AggregationSource V1_0_0 to C Structure Function
    RedfishCS_status
    Json_AggregationSource_V1_0_0_To_CS (RedfishCS_char *JsonRawText, RedfishAggregationSource_V1_0_0_AggregationSource_CS **ReturnedCS);

## C Structure to Redfish AggregationSource V1_0_0 JSON Function
    RedfishCS_status
    CS_To_AggregationSource_V1_0_0_JSON (RedfishAggregationSource_V1_0_0_AggregationSource_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish AggregationSource V1_0_0 C Structure Function
    RedfishCS_status
    DestroyAggregationSource_V1_0_0_CS (RedfishAggregationSource_V1_0_0_AggregationSource_CS *CSPtr);

