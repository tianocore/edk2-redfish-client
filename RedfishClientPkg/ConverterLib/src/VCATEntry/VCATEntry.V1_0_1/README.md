# Definition of VCATEntry.V1_0_1 and functions<br><br>

## Oem
    typedef struct _RedfishResource_Oem_CS {
        RedfishCS_Link Prop;
    } RedfishResource_Oem_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## Actions
    typedef struct _RedfishVCATEntry_V1_0_1_Actions_CS {
        RedfishVCATEntry_V1_0_1_OemActions_CS *Oem;
    } RedfishVCATEntry_V1_0_1_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishVCATEntry_V1_0_1_OemActions_CS| Structure points to **Oem** property.| No| No


## OemActions
    typedef struct _RedfishVCATEntry_V1_0_1_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishVCATEntry_V1_0_1_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## VCATableEntry
    typedef struct _RedfishVCATEntry_V1_0_1_VCATableEntry_CS {
        RedfishCS_char *Threshold;
        RedfishCS_char *VCMask;
    } RedfishVCATEntry_V1_0_1_VCATableEntry_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Threshold**|RedfishCS_char| String pointer to **Threshold** property.| No| No
|**VCMask**|RedfishCS_char| String pointer to **VCMask** property.| No| No


## VCATEntry
    typedef struct _RedfishVCATEntry_V1_0_1_VCATEntry_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishVCATEntry_V1_0_1_Actions_CS *Actions;
        RedfishCS_char *Description;
        RedfishCS_char *Id;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_char *RawEntryHex;
        RedfishVCATEntry_V1_0_1_VCATableEntry_CS *VCEntries;
    } RedfishVCATEntry_V1_0_1_VCATEntry_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishVCATEntry_V1_0_1_Actions_CS| Structure points to **Actions** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**RawEntryHex**|RedfishCS_char| String pointer to **RawEntryHex** property.| No| No
|**VCEntries**|RedfishVCATEntry_V1_0_1_VCATableEntry_CS| Structure points to **VCEntries** property.| No| No
## Redfish VCATEntry V1_0_1 to C Structure Function
    RedfishCS_status
    Json_VCATEntry_V1_0_1_To_CS (RedfishCS_char *JsonRawText, RedfishVCATEntry_V1_0_1_VCATEntry_CS **ReturnedCS);

## C Structure to Redfish VCATEntry V1_0_1 JSON Function
    RedfishCS_status
    CS_To_VCATEntry_V1_0_1_JSON (RedfishVCATEntry_V1_0_1_VCATEntry_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish VCATEntry V1_0_1 C Structure Function
    RedfishCS_status
    DestroyVCATEntry_V1_0_1_CS (RedfishVCATEntry_V1_0_1_VCATEntry_CS *CSPtr);

