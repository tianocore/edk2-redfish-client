# Definition of SoftwareInventory.V1_2_0 and functions<br><br>

## Condition
    typedef struct _RedfishResource_Condition_CS {
        RedfishCS_Link LogEntry;
        RedfishCS_char *Message;
        RedfishCS_char_Array *MessageArgs;
        RedfishCS_char *MessageId;
        Redfishodatav4_idRef_CS *OriginOfCondition;
        RedfishCS_char *Severity;
        RedfishCS_char *Timestamp;
    } RedfishResource_Condition_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**LogEntry**|RedfishCS_Link| Structure link list to **LogEntry** property.| No| Yes
|**Message**|RedfishCS_char| String pointer to **Message** property.| No| Yes
|**MessageArgs**|RedfishCS_char_Array| Structure array points to one or more than one **RedfishCS_char *** for property **MessageArgs**.| No| Yes
|**MessageId**|RedfishCS_char| String pointer to **MessageId** property.| No| Yes
|**OriginOfCondition**|Redfishodatav4_idRef_CS| Structure points to **OriginOfCondition** property.| No| Yes
|**Severity**|RedfishCS_char| String pointer to **Severity** property.| No| Yes
|**Timestamp**|RedfishCS_char| String pointer to **Timestamp** property.| No| Yes


## Oem
    typedef struct _RedfishResource_Oem_CS {
        RedfishCS_Link Prop;
    } RedfishResource_Oem_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## Status
    typedef struct _RedfishResource_Status_CS {
        RedfishResource_Condition_Array_CS *Conditions;
        RedfishCS_char *Health;
        RedfishCS_char *HealthRollup;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_char *State;
    } RedfishResource_Status_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Conditions**|RedfishResource_Condition_Array_CS| Structure array points to one or more than one **RedfishResource_Condition_Array_CS** structures for property **Conditions**.| No| No
|**Health**|RedfishCS_char| String pointer to **Health** property.| No| Yes
|**HealthRollup**|RedfishCS_char| String pointer to **HealthRollup** property.| No| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**State**|RedfishCS_char| String pointer to **State** property.| No| Yes


## Actions
    typedef struct _RedfishSoftwareInventory_V1_2_0_Actions_CS {
        RedfishSoftwareInventory_V1_2_0_OemActions_CS *Oem;
    } RedfishSoftwareInventory_V1_2_0_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishSoftwareInventory_V1_2_0_OemActions_CS| Structure points to **Oem** property.| No| No


## OemActions
    typedef struct _RedfishSoftwareInventory_V1_2_0_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishSoftwareInventory_V1_2_0_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## idRef
    typedef struct _Redfishodata_V4_0_2_idRef_CS {
        RedfishCS_char *odata_id;
    } Redfishodata_V4_0_2_idRef_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| No| No


## idRef
    typedef struct _Redfishodatav4_idRef_CS {
        RedfishCS_char *odata_id;
    } Redfishodatav4_idRef_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| No| No


## RedfishCS_char_Array
    typedef struct _RedfishCS_char_Array  {
        RedfishCS_Link *Next;
        RedfishCS_char *ArrayValue;
    } RedfishCS_char_Array;



## RedfishResource_Condition_Array_CS
    typedef struct _RedfishResource_Condition_Array_CS  {
        RedfishCS_Link *Next;
        RedfishResource_Condition_CS *ArrayValue;
    } RedfishResource_Condition_Array_CS;



## SoftwareInventory
    typedef struct _RedfishSoftwareInventory_V1_2_0_SoftwareInventory_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishSoftwareInventory_V1_2_0_Actions_CS *Actions;
        RedfishCS_char *Description;
        RedfishCS_char *Id;
        RedfishCS_char *LowestSupportedVersion;
        RedfishCS_char *Manufacturer;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        Redfishodata_V4_0_2_idRef_CS *RelatedItem;
        RedfishCS_int64 *RelatedItemodata_count;
        RedfishCS_char *ReleaseDate;
        RedfishCS_char *SoftwareId;
        RedfishResource_Status_CS *Status;
        RedfishCS_char *UefiDevicePaths;
        RedfishCS_bool *Updateable;
        RedfishCS_char *Version;
    } RedfishSoftwareInventory_V1_2_0_SoftwareInventory_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| No| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| No| No
|**Actions**|RedfishSoftwareInventory_V1_2_0_Actions_CS| Structure points to **Actions** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**LowestSupportedVersion**|RedfishCS_char| String pointer to **LowestSupportedVersion** property.| No| Yes
|**Manufacturer**|RedfishCS_char| String pointer to **Manufacturer** property.| No| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**RelatedItem**|Redfishodata_V4_0_2_idRef_CS| Structure points to **RelatedItem** property.| No| Yes
|**RelatedItemodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **RelatedItem@odata.count** property.| No| No
|**ReleaseDate**|RedfishCS_char| String pointer to **ReleaseDate** property.| No| Yes
|**SoftwareId**|RedfishCS_char| String pointer to **SoftwareId** property.| No| Yes
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
|**UefiDevicePaths**|RedfishCS_char| String pointer to **UefiDevicePaths** property.| No| Yes
|**Updateable**|RedfishCS_bool| Boolean pointer to **Updateable** property.| No| Yes
|**Version**|RedfishCS_char| String pointer to **Version** property.| No| Yes
## Redfish SoftwareInventory V1_2_0 to C Structure Function
    RedfishCS_status
    Json_SoftwareInventory_V1_2_0_To_CS (RedfishCS_char *JsonRawText, RedfishSoftwareInventory_V1_2_0_SoftwareInventory_CS **ReturnedCS);

## C Structure to Redfish SoftwareInventory V1_2_0 JSON Function
    RedfishCS_status
    CS_To_SoftwareInventory_V1_2_0_JSON (RedfishSoftwareInventory_V1_2_0_SoftwareInventory_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish SoftwareInventory V1_2_0 C Structure Function
    RedfishCS_status
    DestroySoftwareInventory_V1_2_0_CS (RedfishSoftwareInventory_V1_2_0_SoftwareInventory_CS *CSPtr);

