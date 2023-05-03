# Definition of JsonSchemaFile.V1_0_7 and functions<br><br>

## Location
    typedef struct _RedfishJsonSchemaFile_V1_0_7_Location_CS {
        RedfishCS_char *ArchiveFile;
        RedfishCS_char *ArchiveUri;
        RedfishCS_char *Language;
        RedfishCS_char *PublicationUri;
        RedfishCS_char *Uri;
    } RedfishJsonSchemaFile_V1_0_7_Location_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**ArchiveFile**|RedfishCS_char| String pointer to **ArchiveFile** property.| No| Yes
|**ArchiveUri**|RedfishCS_char| String pointer to **ArchiveUri** property.| No| Yes
|**Language**|RedfishCS_char| String pointer to **Language** property.| No| Yes
|**PublicationUri**|RedfishCS_char| String pointer to **PublicationUri** property.| No| Yes
|**Uri**|RedfishCS_char| String pointer to **Uri** property.| No| Yes


## Oem
    typedef struct _RedfishResource_Oem_CS {
        RedfishCS_Link Prop;
    } RedfishResource_Oem_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## JsonSchemaFile
    typedef struct _RedfishJsonSchemaFile_V1_0_7_JsonSchemaFile_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishCS_char *Description;
        RedfishCS_char *Id;
        RedfishCS_char *Languages;
        RedfishJsonSchemaFile_V1_0_7_Location_CS *Location;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_char *Schema;
    } RedfishJsonSchemaFile_V1_0_7_JsonSchemaFile_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**Languages**|RedfishCS_char| String pointer to **Languages** property.| Yes| Yes
|**Location**|RedfishJsonSchemaFile_V1_0_7_Location_CS| Structure points to **Location** property.| Yes| No
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**Schema**|RedfishCS_char| String pointer to **Schema** property.| Yes| Yes
## Redfish JsonSchemaFile V1_0_7 to C Structure Function
    RedfishCS_status
    Json_JsonSchemaFile_V1_0_7_To_CS (RedfishCS_char *JsonRawText, RedfishJsonSchemaFile_V1_0_7_JsonSchemaFile_CS **ReturnedCS);

## C Structure to Redfish JsonSchemaFile V1_0_7 JSON Function
    RedfishCS_status
    CS_To_JsonSchemaFile_V1_0_7_JSON (RedfishJsonSchemaFile_V1_0_7_JsonSchemaFile_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish JsonSchemaFile V1_0_7 C Structure Function
    RedfishCS_status
    DestroyJsonSchemaFile_V1_0_7_CS (RedfishJsonSchemaFile_V1_0_7_JsonSchemaFile_CS *CSPtr);

