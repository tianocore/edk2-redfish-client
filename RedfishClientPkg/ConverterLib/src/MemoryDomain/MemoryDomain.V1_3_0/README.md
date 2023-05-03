# Definition of MemoryDomain.V1_3_0 and functions<br><br>

## Actions
    typedef struct _RedfishMemoryDomain_V1_3_0_Actions_CS {
        RedfishMemoryDomain_V1_3_0_OemActions_CS *Oem;
    } RedfishMemoryDomain_V1_3_0_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishMemoryDomain_V1_3_0_OemActions_CS| Structure points to **Oem** property.| No| No


## Links
    typedef struct _RedfishMemoryDomain_V1_3_0_Links_CS {
        RedfishCS_Link MediaControllers;
        RedfishCS_int64 *MediaControllersodata_count;
        RedfishResource_Oem_CS *Oem;
    } RedfishMemoryDomain_V1_3_0_Links_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**MediaControllers**|RedfishCS_Link| Structure link list to **MediaControllers** property.| No| Yes
|**MediaControllersodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **MediaControllers@odata.count** property.| No| No
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No


## MemorySet
    typedef struct _RedfishMemoryDomain_V1_3_0_MemorySet_CS {
        RedfishCS_Link MemorySet;
        RedfishCS_int64 *MemorySetodata_count;
    } RedfishMemoryDomain_V1_3_0_MemorySet_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**MemorySet**|RedfishCS_Link| Structure link list to **MemorySet** property.| No| Yes
|**MemorySetodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **MemorySet@odata.count** property.| No| No


## OemActions
    typedef struct _RedfishMemoryDomain_V1_3_0_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishMemoryDomain_V1_3_0_OemActions_CS;

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


## MemoryDomain
    typedef struct _RedfishMemoryDomain_V1_3_0_MemoryDomain_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishMemoryDomain_V1_3_0_Actions_CS *Actions;
        RedfishCS_bool *AllowsBlockProvisioning;
        RedfishCS_bool *AllowsMemoryChunkCreation;
        RedfishCS_bool *AllowsMirroring;
        RedfishCS_bool *AllowsSparing;
        RedfishCS_char *Description;
        RedfishCS_char *Id;
        RedfishMemoryDomain_V1_3_0_MemorySet_CS *InterleavableMemorySets;
        RedfishMemoryDomain_V1_3_0_Links_CS *Links;
        RedfishCS_Link MemoryChunks;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
    } RedfishMemoryDomain_V1_3_0_MemoryDomain_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishMemoryDomain_V1_3_0_Actions_CS| Structure points to **Actions** property.| No| No
|**AllowsBlockProvisioning**|RedfishCS_bool| Boolean pointer to **AllowsBlockProvisioning** property.| No| Yes
|**AllowsMemoryChunkCreation**|RedfishCS_bool| Boolean pointer to **AllowsMemoryChunkCreation** property.| No| Yes
|**AllowsMirroring**|RedfishCS_bool| Boolean pointer to **AllowsMirroring** property.| No| Yes
|**AllowsSparing**|RedfishCS_bool| Boolean pointer to **AllowsSparing** property.| No| Yes
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**InterleavableMemorySets**|RedfishMemoryDomain_V1_3_0_MemorySet_CS| Structure points to **InterleavableMemorySets** property.| No| No
|**Links**|RedfishMemoryDomain_V1_3_0_Links_CS| Structure points to **Links** property.| No| No
|**MemoryChunks**|RedfishCS_Link| Structure link list to **MemoryChunks** property.| No| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
## Redfish MemoryDomain V1_3_0 to C Structure Function
    RedfishCS_status
    Json_MemoryDomain_V1_3_0_To_CS (RedfishCS_char *JsonRawText, RedfishMemoryDomain_V1_3_0_MemoryDomain_CS **ReturnedCS);

## C Structure to Redfish MemoryDomain V1_3_0 JSON Function
    RedfishCS_status
    CS_To_MemoryDomain_V1_3_0_JSON (RedfishMemoryDomain_V1_3_0_MemoryDomain_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish MemoryDomain V1_3_0 C Structure Function
    RedfishCS_status
    DestroyMemoryDomain_V1_3_0_CS (RedfishMemoryDomain_V1_3_0_MemoryDomain_CS *CSPtr);

