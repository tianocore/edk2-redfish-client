# Definition of Switch.V1_4_1 and functions<br><br>

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
    typedef struct _RedfishSwitch_V1_4_1_Actions_CS {
        RedfishSwitch_V1_4_1_Reset_CS *Switch_Reset;
        RedfishSwitch_V1_4_1_OemActions_CS *Oem;
    } RedfishSwitch_V1_4_1_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Switch_Reset**|RedfishSwitch_V1_4_1_Reset_CS| Structure points to **#Switch.Reset** property.| No| No
|**Oem**|RedfishSwitch_V1_4_1_OemActions_CS| Structure points to **Oem** property.| No| No


## Links
    typedef struct _RedfishSwitch_V1_4_1_Links_CS {
        RedfishCS_Link Chassis;
        RedfishCS_Link Endpoints;
        RedfishCS_int64 *Endpointsodata_count;
        RedfishCS_Link ManagedBy;
        RedfishCS_int64 *ManagedByodata_count;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_Link PCIeDevice;
    } RedfishSwitch_V1_4_1_Links_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Chassis**|RedfishCS_Link| Structure link list to **Chassis** property.| No| Yes
|**Endpoints**|RedfishCS_Link| Structure link list to **Endpoints** property.| No| Yes
|**Endpointsodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **Endpoints@odata.count** property.| No| No
|**ManagedBy**|RedfishCS_Link| Structure link list to **ManagedBy** property.| No| Yes
|**ManagedByodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **ManagedBy@odata.count** property.| No| No
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**PCIeDevice**|RedfishCS_Link| Structure link list to **PCIeDevice** property.| No| Yes


## OemActions
    typedef struct _RedfishSwitch_V1_4_1_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishSwitch_V1_4_1_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## Reset
    typedef struct _RedfishSwitch_V1_4_1_Reset_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishSwitch_V1_4_1_Reset_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**target**|RedfishCS_char| String pointer to **target** property.| No| No
|**title**|RedfishCS_char| String pointer to **title** property.| No| No


## idRef
    typedef struct _Redfishodatav4_idRef_CS {
        RedfishCS_char *odata_id;
    } Redfishodatav4_idRef_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No


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



## Switch
    typedef struct _RedfishSwitch_V1_4_1_Switch_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishSwitch_V1_4_1_Actions_CS *Actions;
        RedfishCS_char *AssetTag;
        RedfishCS_int64 *CurrentBandwidthGbps;
        RedfishCS_char *Description;
        RedfishCS_int64 *DomainID;
        RedfishCS_char *FirmwareVersion;
        RedfishCS_char *Id;
        RedfishCS_char *IndicatorLED;
        RedfishCS_bool *IsManaged;
        RedfishSwitch_V1_4_1_Links_CS *Links;
        RedfishCS_Link Location;
        RedfishCS_bool *LocationIndicatorActive;
        RedfishCS_Link LogServices;
        RedfishCS_char *Manufacturer;
        RedfishCS_int64 *MaxBandwidthGbps;
        RedfishCS_char *Model;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_char *PartNumber;
        RedfishCS_Link Ports;
        RedfishCS_char *PowerState;
        RedfishCS_Link Redundancy;
        RedfishCS_int64 *Redundancyodata_count;
        RedfishCS_char *SKU;
        RedfishCS_char *SerialNumber;
        RedfishResource_Status_CS *Status;
        RedfishCS_char *SupportedProtocols;
        RedfishCS_char *SwitchType;
        RedfishCS_int64 *TotalSwitchWidth;
        RedfishCS_char *UUID;
    } RedfishSwitch_V1_4_1_Switch_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishSwitch_V1_4_1_Actions_CS| Structure points to **Actions** property.| No| No
|**AssetTag**|RedfishCS_char| String pointer to **AssetTag** property.| No| No
|**CurrentBandwidthGbps**|RedfishCS_int64| 64-bit long long interger pointer to **CurrentBandwidthGbps** property.| No| Yes
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**DomainID**|RedfishCS_int64| 64-bit long long interger pointer to **DomainID** property.| No| Yes
|**FirmwareVersion**|RedfishCS_char| String pointer to **FirmwareVersion** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**IndicatorLED**|RedfishCS_char| String pointer to **IndicatorLED** property.| No| No
|**IsManaged**|RedfishCS_bool| Boolean pointer to **IsManaged** property.| No| No
|**Links**|RedfishSwitch_V1_4_1_Links_CS| Structure points to **Links** property.| No| No
|**Location**|RedfishCS_Link| Structure link list to **Location** property.| No| No
|**LocationIndicatorActive**|RedfishCS_bool| Boolean pointer to **LocationIndicatorActive** property.| No| No
|**LogServices**|RedfishCS_Link| Structure link list to **LogServices** property.| No| Yes
|**Manufacturer**|RedfishCS_char| String pointer to **Manufacturer** property.| No| Yes
|**MaxBandwidthGbps**|RedfishCS_int64| 64-bit long long interger pointer to **MaxBandwidthGbps** property.| No| Yes
|**Model**|RedfishCS_char| String pointer to **Model** property.| No| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**PartNumber**|RedfishCS_char| String pointer to **PartNumber** property.| No| Yes
|**Ports**|RedfishCS_Link| Structure link list to **Ports** property.| No| Yes
|**PowerState**|RedfishCS_char| String pointer to **PowerState** property.| No| Yes
|**Redundancy**|RedfishCS_Link| Structure link list to **Redundancy** property.| No| No
|**Redundancyodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **Redundancy@odata.count** property.| No| No
|**SKU**|RedfishCS_char| String pointer to **SKU** property.| No| Yes
|**SerialNumber**|RedfishCS_char| String pointer to **SerialNumber** property.| No| Yes
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
|**SupportedProtocols**|RedfishCS_char| String pointer to **SupportedProtocols** property.| No| Yes
|**SwitchType**|RedfishCS_char| String pointer to **SwitchType** property.| No| Yes
|**TotalSwitchWidth**|RedfishCS_int64| 64-bit long long interger pointer to **TotalSwitchWidth** property.| No| Yes
|**UUID**|RedfishCS_char| String pointer to **UUID** property.| No| Yes
## Redfish Switch V1_4_1 to C Structure Function
    RedfishCS_status
    Json_Switch_V1_4_1_To_CS (RedfishCS_char *JsonRawText, RedfishSwitch_V1_4_1_Switch_CS **ReturnedCS);

## C Structure to Redfish Switch V1_4_1 JSON Function
    RedfishCS_status
    CS_To_Switch_V1_4_1_JSON (RedfishSwitch_V1_4_1_Switch_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish Switch V1_4_1 C Structure Function
    RedfishCS_status
    DestroySwitch_V1_4_1_CS (RedfishSwitch_V1_4_1_Switch_CS *CSPtr);

