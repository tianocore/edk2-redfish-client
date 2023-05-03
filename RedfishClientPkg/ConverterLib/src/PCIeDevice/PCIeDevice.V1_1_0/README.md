# Definition of PCIeDevice.V1_1_0 and functions<br><br>

## PCIeDevice_Actions
    typedef struct _RedfishPCIeDevice_V1_1_0_PCIeDevice_Actions_CS {
        RedfishPCIeDevice_V1_1_0_PCIeDevice_Actions_Oem_CS *Oem;
    } RedfishPCIeDevice_V1_1_0_PCIeDevice_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishPCIeDevice_V1_1_0_PCIeDevice_Actions_Oem_CS| Structure points to **Oem** property.| No| No


## PCIeDevice_Actions_Oem
    typedef struct _RedfishPCIeDevice_V1_1_0_PCIeDevice_Actions_Oem_CS {
        RedfishCS_Link Prop;
    } RedfishPCIeDevice_V1_1_0_PCIeDevice_Actions_Oem_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## PCIeDevice_Links
    typedef struct _RedfishPCIeDevice_V1_1_0_PCIeDevice_Links_CS {
        RedfishCS_Link Chassis;
        RedfishCS_int64 *Chassisodata_count;
        RedfishCS_char *Chassisodata_navigationLink;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_Link PCIeFunctions;
        RedfishCS_int64 *PCIeFunctionsodata_count;
        RedfishCS_char *PCIeFunctionsodata_navigationLink;
    } RedfishPCIeDevice_V1_1_0_PCIeDevice_Links_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Chassis**|RedfishCS_Link| Structure link list to **Chassis** property.| No| Yes
|**Chassisodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **Chassis@odata.count** property.| No| No
|**Chassisodata_navigationLink**|RedfishCS_char| String pointer to **Chassis@odata.navigationLink** property.| No| No
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**PCIeFunctions**|RedfishCS_Link| Structure link list to **PCIeFunctions** property.| No| Yes
|**PCIeFunctionsodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **PCIeFunctions@odata.count** property.| No| No
|**PCIeFunctionsodata_navigationLink**|RedfishCS_char| String pointer to **PCIeFunctions@odata.navigationLink** property.| No| No


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



## PCIeDevice
    typedef struct _RedfishPCIeDevice_V1_1_0_PCIeDevice_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishPCIeDevice_V1_1_0_PCIeDevice_Actions_CS *Actions;
        RedfishCS_char *AssetTag;
        RedfishCS_char *Description;
        RedfishCS_char *DeviceType;
        RedfishCS_char *FirmwareVersion;
        RedfishCS_char *Id;
        RedfishPCIeDevice_V1_1_0_PCIeDevice_Links_CS *Links;
        RedfishCS_char *Manufacturer;
        RedfishCS_char *Model;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_char *PartNumber;
        RedfishCS_char *SKU;
        RedfishCS_char *SerialNumber;
        RedfishResource_Status_CS *Status;
    } RedfishPCIeDevice_V1_1_0_PCIeDevice_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| No| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| No| No
|**Actions**|RedfishPCIeDevice_V1_1_0_PCIeDevice_Actions_CS| Structure points to **Actions** property.| No| No
|**AssetTag**|RedfishCS_char| String pointer to **AssetTag** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**DeviceType**|RedfishCS_char| String pointer to **DeviceType** property.| No| Yes
|**FirmwareVersion**|RedfishCS_char| String pointer to **FirmwareVersion** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**Links**|RedfishPCIeDevice_V1_1_0_PCIeDevice_Links_CS| Structure points to **Links** property.| No| No
|**Manufacturer**|RedfishCS_char| String pointer to **Manufacturer** property.| No| Yes
|**Model**|RedfishCS_char| String pointer to **Model** property.| No| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**PartNumber**|RedfishCS_char| String pointer to **PartNumber** property.| No| Yes
|**SKU**|RedfishCS_char| String pointer to **SKU** property.| No| Yes
|**SerialNumber**|RedfishCS_char| String pointer to **SerialNumber** property.| No| Yes
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
## Redfish PCIeDevice V1_1_0 to C Structure Function
    RedfishCS_status
    Json_PCIeDevice_V1_1_0_To_CS (RedfishCS_char *JsonRawText, RedfishPCIeDevice_V1_1_0_PCIeDevice_CS **ReturnedCS);

## C Structure to Redfish PCIeDevice V1_1_0 JSON Function
    RedfishCS_status
    CS_To_PCIeDevice_V1_1_0_JSON (RedfishPCIeDevice_V1_1_0_PCIeDevice_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish PCIeDevice V1_1_0 C Structure Function
    RedfishCS_status
    DestroyPCIeDevice_V1_1_0_CS (RedfishPCIeDevice_V1_1_0_PCIeDevice_CS *CSPtr);

