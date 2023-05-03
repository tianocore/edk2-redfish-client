# Definition of MessageRegistryFile.V1_1_1 and functions<br><br>

## Actions
    typedef struct _RedfishMessageRegistryFile_V1_1_1_Actions_CS {
        RedfishMessageRegistryFile_V1_1_1_OemActions_CS *Oem;
    } RedfishMessageRegistryFile_V1_1_1_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishMessageRegistryFile_V1_1_1_OemActions_CS| Structure points to **Oem** property.| No| No


## Location
    typedef struct _RedfishMessageRegistryFile_V1_1_1_Location_CS {
        RedfishCS_char *ArchiveFile;
        RedfishCS_char *ArchiveUri;
        RedfishCS_char *Language;
        RedfishCS_char *PublicationUri;
        RedfishCS_char *Uri;
    } RedfishMessageRegistryFile_V1_1_1_Location_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**ArchiveFile**|RedfishCS_char| String pointer to **ArchiveFile** property.| No| Yes
|**ArchiveUri**|RedfishCS_char| String pointer to **ArchiveUri** property.| No| Yes
|**Language**|RedfishCS_char| String pointer to **Language** property.| No| Yes
|**PublicationUri**|RedfishCS_char| String pointer to **PublicationUri** property.| No| Yes
|**Uri**|RedfishCS_char| String pointer to **Uri** property.| No| Yes


## OemActions
    typedef struct _RedfishMessageRegistryFile_V1_1_1_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishMessageRegistryFile_V1_1_1_OemActions_CS;

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


## MessageRegistryFile
    typedef struct _RedfishMessageRegistryFile_V1_1_1_MessageRegistryFile_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishMessageRegistryFile_V1_1_1_Actions_CS *Actions;
        RedfishCS_char *Description;
        RedfishCS_char *Id;
        RedfishCS_char *Languages;
        RedfishMessageRegistryFile_V1_1_1_Location_CS *Location;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_char *Registry;
    } RedfishMessageRegistryFile_V1_1_1_MessageRegistryFile_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishMessageRegistryFile_V1_1_1_Actions_CS| Structure points to **Actions** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**Languages**|RedfishCS_char| String pointer to **Languages** property.| Yes| Yes
|**Location**|RedfishMessageRegistryFile_V1_1_1_Location_CS| Structure points to **Location** property.| Yes| No
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**Registry**|RedfishCS_char| String pointer to **Registry** property.| Yes| Yes
## Redfish MessageRegistryFile V1_1_1 to C Structure Function
    RedfishCS_status
    Json_MessageRegistryFile_V1_1_1_To_CS (RedfishCS_char *JsonRawText, RedfishMessageRegistryFile_V1_1_1_MessageRegistryFile_CS **ReturnedCS);

## C Structure to Redfish MessageRegistryFile V1_1_1 JSON Function
    RedfishCS_status
    CS_To_MessageRegistryFile_V1_1_1_JSON (RedfishMessageRegistryFile_V1_1_1_MessageRegistryFile_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish MessageRegistryFile V1_1_1 C Structure Function
    RedfishCS_status
    DestroyMessageRegistryFile_V1_1_1_CS (RedfishMessageRegistryFile_V1_1_1_MessageRegistryFile_CS *CSPtr);

