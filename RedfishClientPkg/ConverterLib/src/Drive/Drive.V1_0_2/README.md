# Definition of Drive.V1_0_2 and functions<br><br>

## Drive_Actions
    typedef struct _RedfishDrive_V1_0_2_Drive_Actions_CS {
        RedfishDrive_V1_0_2_SecureErase_CS *Drive_SecureErase;
        RedfishDrive_V1_0_2_Drive_Actions_Oem_CS *Oem;
    } RedfishDrive_V1_0_2_Drive_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Drive_SecureErase**|RedfishDrive_V1_0_2_SecureErase_CS| Structure points to **#Drive.SecureErase** property.| No| No
|**Oem**|RedfishDrive_V1_0_2_Drive_Actions_Oem_CS| Structure points to **Oem** property.| No| No


## Drive_Actions_Oem
    typedef struct _RedfishDrive_V1_0_2_Drive_Actions_Oem_CS {
        RedfishCS_Link Prop;
    } RedfishDrive_V1_0_2_Drive_Actions_Oem_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## Drive_Links
    typedef struct _RedfishDrive_V1_0_2_Drive_Links_CS {
        RedfishResource_Oem_CS *Oem;
        RedfishCS_Link Volumes;
        RedfishCS_int64 *Volumesodata_count;
        RedfishCS_char *Volumesodata_navigationLink;
    } RedfishDrive_V1_0_2_Drive_Links_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**Volumes**|RedfishCS_Link| Structure link list to **Volumes** property.| No| Yes
|**Volumesodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **Volumes@odata.count** property.| No| No
|**Volumesodata_navigationLink**|RedfishCS_char| String pointer to **Volumes@odata.navigationLink** property.| No| No


## SecureErase
    typedef struct _RedfishDrive_V1_0_2_SecureErase_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishDrive_V1_0_2_SecureErase_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**target**|RedfishCS_char| String pointer to **target** property.| No| No
|**title**|RedfishCS_char| String pointer to **title** property.| No| No


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


## Identifier
    typedef struct _RedfishResource_V1_1_0_Identifier_CS {
        RedfishCS_char *DurableName;
        RedfishCS_char *DurableNameFormat;
    } RedfishResource_V1_1_0_Identifier_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**DurableName**|RedfishCS_char| String pointer to **DurableName** property.| No| Yes
|**DurableNameFormat**|RedfishCS_char| String pointer to **DurableNameFormat** property.| No| Yes


## Location
    typedef struct _RedfishResource_V1_1_0_Location_CS {
        RedfishCS_char *Info;
        RedfishCS_char *InfoFormat;
        RedfishResource_Oem_CS *Oem;
    } RedfishResource_V1_1_0_Location_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Info**|RedfishCS_char| String pointer to **Info** property.| No| Yes
|**InfoFormat**|RedfishCS_char| String pointer to **InfoFormat** property.| No| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No


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



## Drive
    typedef struct _RedfishDrive_V1_0_2_Drive_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishDrive_V1_0_2_Drive_Actions_CS *Actions;
        RedfishCS_char *AssetTag;
        RedfishCS_int64 *BlockSizeBytes;
        RedfishCS_int64 *CapableSpeedGbs;
        RedfishCS_int64 *CapacityBytes;
        RedfishCS_char *Description;
        RedfishCS_char *EncryptionAbility;
        RedfishCS_char *EncryptionStatus;
        RedfishCS_bool *FailurePredicted;
        RedfishCS_char *HotspareType;
        RedfishCS_char *Id;
        RedfishResource_V1_1_0_Identifier_CS *Identifiers;
        RedfishCS_char *IndicatorLED;
        RedfishDrive_V1_0_2_Drive_Links_CS *Links;
        RedfishResource_V1_1_0_Location_CS *Location;
        RedfishCS_char *Manufacturer;
        RedfishCS_char *MediaType;
        RedfishCS_char *Model;
        RedfishCS_char *Name;
        RedfishCS_int64 *NegotiatedSpeedGbs;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_char *PartNumber;
        RedfishCS_int64 *PredictedMediaLifeLeftPercent;
        RedfishCS_char *Protocol;
        RedfishCS_char *Revision;
        RedfishCS_int64 *RotationSpeedRPM;
        RedfishCS_char *SKU;
        RedfishCS_char *SerialNumber;
        RedfishResource_Status_CS *Status;
        RedfishCS_char *StatusIndicator;
    } RedfishDrive_V1_0_2_Drive_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| No| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| No| No
|**Actions**|RedfishDrive_V1_0_2_Drive_Actions_CS| Structure points to **Actions** property.| No| No
|**AssetTag**|RedfishCS_char| String pointer to **AssetTag** property.| No| No
|**BlockSizeBytes**|RedfishCS_int64| 64-bit long long interger pointer to **BlockSizeBytes** property.| No| Yes
|**CapableSpeedGbs**|RedfishCS_int64| 64-bit long long interger pointer to **CapableSpeedGbs** property.| No| Yes
|**CapacityBytes**|RedfishCS_int64| 64-bit long long interger pointer to **CapacityBytes** property.| No| Yes
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**EncryptionAbility**|RedfishCS_char| String pointer to **EncryptionAbility** property.| No| Yes
|**EncryptionStatus**|RedfishCS_char| String pointer to **EncryptionStatus** property.| No| Yes
|**FailurePredicted**|RedfishCS_bool| Boolean pointer to **FailurePredicted** property.| No| Yes
|**HotspareType**|RedfishCS_char| String pointer to **HotspareType** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**Identifiers**|RedfishResource_V1_1_0_Identifier_CS| Structure points to **Identifiers** property.| No| No
|**IndicatorLED**|RedfishCS_char| String pointer to **IndicatorLED** property.| No| No
|**Links**|RedfishDrive_V1_0_2_Drive_Links_CS| Structure points to **Links** property.| No| No
|**Location**|RedfishResource_V1_1_0_Location_CS| Structure points to **Location** property.| No| No
|**Manufacturer**|RedfishCS_char| String pointer to **Manufacturer** property.| No| Yes
|**MediaType**|RedfishCS_char| String pointer to **MediaType** property.| No| Yes
|**Model**|RedfishCS_char| String pointer to **Model** property.| No| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**NegotiatedSpeedGbs**|RedfishCS_int64| 64-bit long long interger pointer to **NegotiatedSpeedGbs** property.| No| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**PartNumber**|RedfishCS_char| String pointer to **PartNumber** property.| No| Yes
|**PredictedMediaLifeLeftPercent**|RedfishCS_int64| 64-bit long long interger pointer to **PredictedMediaLifeLeftPercent** property.| No| Yes
|**Protocol**|RedfishCS_char| String pointer to **Protocol** property.| No| Yes
|**Revision**|RedfishCS_char| String pointer to **Revision** property.| No| Yes
|**RotationSpeedRPM**|RedfishCS_int64| 64-bit long long interger pointer to **RotationSpeedRPM** property.| No| Yes
|**SKU**|RedfishCS_char| String pointer to **SKU** property.| No| Yes
|**SerialNumber**|RedfishCS_char| String pointer to **SerialNumber** property.| No| Yes
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
|**StatusIndicator**|RedfishCS_char| String pointer to **StatusIndicator** property.| No| No
## Redfish Drive V1_0_2 to C Structure Function
    RedfishCS_status
    Json_Drive_V1_0_2_To_CS (RedfishCS_char *JsonRawText, RedfishDrive_V1_0_2_Drive_CS **ReturnedCS);

## C Structure to Redfish Drive V1_0_2 JSON Function
    RedfishCS_status
    CS_To_Drive_V1_0_2_JSON (RedfishDrive_V1_0_2_Drive_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish Drive V1_0_2 C Structure Function
    RedfishCS_status
    DestroyDrive_V1_0_2_CS (RedfishDrive_V1_0_2_Drive_CS *CSPtr);

