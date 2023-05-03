# Definition of ConnectionMethod.V1_0_0 and functions<br><br>

## Actions
    typedef struct _RedfishConnectionMethod_V1_0_0_Actions_CS {
        RedfishConnectionMethod_V1_0_0_OemActions_CS *Oem;
    } RedfishConnectionMethod_V1_0_0_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishConnectionMethod_V1_0_0_OemActions_CS| Structure points to **Oem** property.| No| No


## Links
    typedef struct _RedfishConnectionMethod_V1_0_0_Links_CS {
        RedfishCS_Link AggregationSources;
        RedfishCS_int64 *AggregationSourcesodata_count;
        RedfishResource_Oem_CS *Oem;
    } RedfishConnectionMethod_V1_0_0_Links_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**AggregationSources**|RedfishCS_Link| Structure link list to **AggregationSources** property.| No| Yes
|**AggregationSourcesodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **AggregationSources@odata.count** property.| No| No
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No


## OemActions
    typedef struct _RedfishConnectionMethod_V1_0_0_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishConnectionMethod_V1_0_0_OemActions_CS;

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


## ConnectionMethod
    typedef struct _RedfishConnectionMethod_V1_0_0_ConnectionMethod_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishConnectionMethod_V1_0_0_Actions_CS *Actions;
        RedfishCS_char *ConnectionMethodType;
        RedfishCS_char *ConnectionMethodVariant;
        RedfishCS_char *Description;
        RedfishCS_char *Id;
        RedfishConnectionMethod_V1_0_0_Links_CS *Links;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
    } RedfishConnectionMethod_V1_0_0_ConnectionMethod_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishConnectionMethod_V1_0_0_Actions_CS| Structure points to **Actions** property.| No| No
|**ConnectionMethodType**|RedfishCS_char| String pointer to **ConnectionMethodType** property.| No| Yes
|**ConnectionMethodVariant**|RedfishCS_char| String pointer to **ConnectionMethodVariant** property.| No| Yes
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**Links**|RedfishConnectionMethod_V1_0_0_Links_CS| Structure points to **Links** property.| No| No
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
## Redfish ConnectionMethod V1_0_0 to C Structure Function
    RedfishCS_status
    Json_ConnectionMethod_V1_0_0_To_CS (RedfishCS_char *JsonRawText, RedfishConnectionMethod_V1_0_0_ConnectionMethod_CS **ReturnedCS);

## C Structure to Redfish ConnectionMethod V1_0_0 JSON Function
    RedfishCS_status
    CS_To_ConnectionMethod_V1_0_0_JSON (RedfishConnectionMethod_V1_0_0_ConnectionMethod_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish ConnectionMethod V1_0_0 C Structure Function
    RedfishCS_status
    DestroyConnectionMethod_V1_0_0_CS (RedfishConnectionMethod_V1_0_0_ConnectionMethod_CS *CSPtr);

