# Definition of MemoryChunks.V1_0_5 and functions<br><br>

## InterleaveSet
    typedef struct _RedfishMemoryChunks_V1_0_5_InterleaveSet_CS {
        Redfishodatav4_idRef_CS *Memory;
        RedfishCS_int64 *MemoryLevel;
        RedfishCS_int64 *OffsetMiB;
        RedfishCS_char *RegionId;
        RedfishCS_int64 *SizeMiB;
    } RedfishMemoryChunks_V1_0_5_InterleaveSet_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Memory**|Redfishodatav4_idRef_CS| Structure points to **Memory** property.| No| Yes
|**MemoryLevel**|RedfishCS_int64| 64-bit long long interger pointer to **MemoryLevel** property.| No| Yes
|**OffsetMiB**|RedfishCS_int64| 64-bit long long interger pointer to **OffsetMiB** property.| No| Yes
|**RegionId**|RedfishCS_char| String pointer to **RegionId** property.| No| Yes
|**SizeMiB**|RedfishCS_int64| 64-bit long long interger pointer to **SizeMiB** property.| No| Yes


## Oem
    typedef struct _RedfishResource_Oem_CS {
        RedfishCS_Link Prop;
    } RedfishResource_Oem_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## idRef
    typedef struct _Redfishodatav4_idRef_CS {
        RedfishCS_char *odata_id;
    } Redfishodatav4_idRef_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No


## MemoryChunks
    typedef struct _RedfishMemoryChunks_V1_0_5_MemoryChunks_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishCS_char *AddressRangeType;
        RedfishCS_char *Description;
        RedfishCS_char *Id;
        RedfishMemoryChunks_V1_0_5_InterleaveSet_CS *InterleaveSets;
        RedfishCS_bool *IsMirrorEnabled;
        RedfishCS_bool *IsSpare;
        RedfishCS_int64 *MemoryChunkSizeMiB;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
    } RedfishMemoryChunks_V1_0_5_MemoryChunks_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**AddressRangeType**|RedfishCS_char| String pointer to **AddressRangeType** property.| No| Yes
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**InterleaveSets**|RedfishMemoryChunks_V1_0_5_InterleaveSet_CS| Structure points to **InterleaveSets** property.| No| No
|**IsMirrorEnabled**|RedfishCS_bool| Boolean pointer to **IsMirrorEnabled** property.| No| Yes
|**IsSpare**|RedfishCS_bool| Boolean pointer to **IsSpare** property.| No| Yes
|**MemoryChunkSizeMiB**|RedfishCS_int64| 64-bit long long interger pointer to **MemoryChunkSizeMiB** property.| No| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
## Redfish MemoryChunks V1_0_5 to C Structure Function
    RedfishCS_status
    Json_MemoryChunks_V1_0_5_To_CS (RedfishCS_char *JsonRawText, RedfishMemoryChunks_V1_0_5_MemoryChunks_CS **ReturnedCS);

## C Structure to Redfish MemoryChunks V1_0_5 JSON Function
    RedfishCS_status
    CS_To_MemoryChunks_V1_0_5_JSON (RedfishMemoryChunks_V1_0_5_MemoryChunks_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish MemoryChunks V1_0_5 C Structure Function
    RedfishCS_status
    DestroyMemoryChunks_V1_0_5_CS (RedfishMemoryChunks_V1_0_5_MemoryChunks_CS *CSPtr);

