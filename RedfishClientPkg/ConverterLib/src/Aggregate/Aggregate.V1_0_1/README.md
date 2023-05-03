# Definition of Aggregate.V1_0_1 and functions<br><br>

## Actions
    typedef struct _RedfishAggregate_V1_0_1_Actions_CS {
        RedfishAggregate_V1_0_1_AddElements_CS *Aggregate_AddElements;
        RedfishAggregate_V1_0_1_RemoveElements_CS *Aggregate_RemoveElements;
        RedfishAggregate_V1_0_1_Reset_CS *Aggregate_Reset;
        RedfishAggregate_V1_0_1_SetDefaultBootOrder_CS *Aggregate_SetDefaultBootOrder;
        RedfishAggregate_V1_0_1_OemActions_CS *Oem;
    } RedfishAggregate_V1_0_1_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Aggregate_AddElements**|RedfishAggregate_V1_0_1_AddElements_CS| Structure points to **#Aggregate.AddElements** property.| No| No
|**Aggregate_RemoveElements**|RedfishAggregate_V1_0_1_RemoveElements_CS| Structure points to **#Aggregate.RemoveElements** property.| No| No
|**Aggregate_Reset**|RedfishAggregate_V1_0_1_Reset_CS| Structure points to **#Aggregate.Reset** property.| No| No
|**Aggregate_SetDefaultBootOrder**|RedfishAggregate_V1_0_1_SetDefaultBootOrder_CS| Structure points to **#Aggregate.SetDefaultBootOrder** property.| No| No
|**Oem**|RedfishAggregate_V1_0_1_OemActions_CS| Structure points to **Oem** property.| No| No


## AddElements
    typedef struct _RedfishAggregate_V1_0_1_AddElements_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishAggregate_V1_0_1_AddElements_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**target**|RedfishCS_char| String pointer to **target** property.| No| No
|**title**|RedfishCS_char| String pointer to **title** property.| No| No


## OemActions
    typedef struct _RedfishAggregate_V1_0_1_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishAggregate_V1_0_1_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## RemoveElements
    typedef struct _RedfishAggregate_V1_0_1_RemoveElements_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishAggregate_V1_0_1_RemoveElements_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**target**|RedfishCS_char| String pointer to **target** property.| No| No
|**title**|RedfishCS_char| String pointer to **title** property.| No| No


## Reset
    typedef struct _RedfishAggregate_V1_0_1_Reset_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishAggregate_V1_0_1_Reset_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**target**|RedfishCS_char| String pointer to **target** property.| No| No
|**title**|RedfishCS_char| String pointer to **title** property.| No| No


## SetDefaultBootOrder
    typedef struct _RedfishAggregate_V1_0_1_SetDefaultBootOrder_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishAggregate_V1_0_1_SetDefaultBootOrder_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**target**|RedfishCS_char| String pointer to **target** property.| No| No
|**title**|RedfishCS_char| String pointer to **title** property.| No| No


## Oem
    typedef struct _RedfishResource_Oem_CS {
        RedfishCS_Link Prop;
    } RedfishResource_Oem_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## Aggregate
    typedef struct _RedfishAggregate_V1_0_1_Aggregate_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishAggregate_V1_0_1_Actions_CS *Actions;
        RedfishCS_char *Description;
        RedfishCS_Link Elements;
        RedfishCS_int64 *Elementsodata_count;
        RedfishCS_int64 *ElementsCount;
        RedfishCS_char *Id;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
    } RedfishAggregate_V1_0_1_Aggregate_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishAggregate_V1_0_1_Actions_CS| Structure points to **Actions** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**Elements**|RedfishCS_Link| Structure link list to **Elements** property.| Yes| Yes
|**Elementsodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **Elements@odata.count** property.| No| No
|**ElementsCount**|RedfishCS_int64| 64-bit long long interger pointer to **ElementsCount** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
## Redfish Aggregate V1_0_1 to C Structure Function
    RedfishCS_status
    Json_Aggregate_V1_0_1_To_CS (RedfishCS_char *JsonRawText, RedfishAggregate_V1_0_1_Aggregate_CS **ReturnedCS);

## C Structure to Redfish Aggregate V1_0_1 JSON Function
    RedfishCS_status
    CS_To_Aggregate_V1_0_1_JSON (RedfishAggregate_V1_0_1_Aggregate_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish Aggregate V1_0_1 C Structure Function
    RedfishCS_status
    DestroyAggregate_V1_0_1_CS (RedfishAggregate_V1_0_1_Aggregate_CS *CSPtr);

