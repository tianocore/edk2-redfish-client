# Definition of PowerSupply.V1_0_0 and functions<br><br>

## Actions
    typedef struct _RedfishPowerSupply_V1_0_0_Actions_CS {
        RedfishPowerSupply_V1_0_0_Reset_CS *PowerSupply_Reset;
        RedfishPowerSupply_V1_0_0_OemActions_CS *Oem;
    } RedfishPowerSupply_V1_0_0_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**PowerSupply_Reset**|RedfishPowerSupply_V1_0_0_Reset_CS| Structure points to **#PowerSupply.Reset** property.| No| No
|**Oem**|RedfishPowerSupply_V1_0_0_OemActions_CS| Structure points to **Oem** property.| No| No


## EfficiencyRating
    typedef struct _RedfishPowerSupply_V1_0_0_EfficiencyRating_CS {
        RedfishCS_int64 *EfficiencyPercent;
        RedfishCS_int64 *LoadPercent;
    } RedfishPowerSupply_V1_0_0_EfficiencyRating_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**EfficiencyPercent**|RedfishCS_int64| 64-bit long long interger pointer to **EfficiencyPercent** property.| No| Yes
|**LoadPercent**|RedfishCS_int64| 64-bit long long interger pointer to **LoadPercent** property.| No| Yes


## InputRange
    typedef struct _RedfishPowerSupply_V1_0_0_InputRange_CS {
        RedfishCS_int64 *CapacityWatts;
        RedfishCS_char *NominalVoltageType;
    } RedfishPowerSupply_V1_0_0_InputRange_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**CapacityWatts**|RedfishCS_int64| 64-bit long long interger pointer to **CapacityWatts** property.| No| Yes
|**NominalVoltageType**|RedfishCS_char| String pointer to **NominalVoltageType** property.| No| Yes


## Links
    typedef struct _RedfishPowerSupply_V1_0_0_Links_CS {
        RedfishResource_Oem_CS *Oem;
        RedfishCS_Link Outlet;
    } RedfishPowerSupply_V1_0_0_Links_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**Outlet**|RedfishCS_Link| Structure link list to **Outlet** property.| No| No


## OemActions
    typedef struct _RedfishPowerSupply_V1_0_0_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishPowerSupply_V1_0_0_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## OutputRail
    typedef struct _RedfishPowerSupply_V1_0_0_OutputRail_CS {
        RedfishCS_int64 *NominalVoltage;
        RedfishCS_char *PhysicalContext;
    } RedfishPowerSupply_V1_0_0_OutputRail_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**NominalVoltage**|RedfishCS_int64| 64-bit long long interger pointer to **NominalVoltage** property.| No| Yes
|**PhysicalContext**|RedfishCS_char| String pointer to **PhysicalContext** property.| No| Yes


## Reset
    typedef struct _RedfishPowerSupply_V1_0_0_Reset_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishPowerSupply_V1_0_0_Reset_CS;

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



## PowerSupply
    typedef struct _RedfishPowerSupply_V1_0_0_PowerSupply_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishPowerSupply_V1_0_0_Actions_CS *Actions;
        RedfishCS_Link Assembly;
        RedfishCS_char *Description;
        RedfishPowerSupply_V1_0_0_EfficiencyRating_CS *EfficiencyRatings;
        RedfishCS_char *FirmwareVersion;
        RedfishCS_bool *HotPluggable;
        RedfishCS_char *Id;
        RedfishCS_char *InputNominalVoltageType;
        RedfishPowerSupply_V1_0_0_InputRange_CS *InputRanges;
        RedfishPowerSupply_V1_0_0_Links_CS *Links;
        RedfishCS_Link Location;
        RedfishCS_bool *LocationIndicatorActive;
        RedfishCS_char *Manufacturer;
        RedfishCS_Link Metrics;
        RedfishCS_char *Model;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishPowerSupply_V1_0_0_OutputRail_CS *OutputRails;
        RedfishCS_char *PartNumber;
        RedfishCS_char *PhaseWiringType;
        RedfishCS_char *PlugType;
        RedfishCS_int64 *PowerCapacityWatts;
        RedfishCS_char *PowerSupplyType;
        RedfishCS_char *SerialNumber;
        RedfishCS_char *SparePartNumber;
        RedfishResource_Status_CS *Status;
    } RedfishPowerSupply_V1_0_0_PowerSupply_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishPowerSupply_V1_0_0_Actions_CS| Structure points to **Actions** property.| No| No
|**Assembly**|RedfishCS_Link| Structure link list to **Assembly** property.| No| Yes
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**EfficiencyRatings**|RedfishPowerSupply_V1_0_0_EfficiencyRating_CS| Structure points to **EfficiencyRatings** property.| No| No
|**FirmwareVersion**|RedfishCS_char| String pointer to **FirmwareVersion** property.| No| Yes
|**HotPluggable**|RedfishCS_bool| Boolean pointer to **HotPluggable** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**InputNominalVoltageType**|RedfishCS_char| String pointer to **InputNominalVoltageType** property.| No| Yes
|**InputRanges**|RedfishPowerSupply_V1_0_0_InputRange_CS| Structure points to **InputRanges** property.| No| No
|**Links**|RedfishPowerSupply_V1_0_0_Links_CS| Structure points to **Links** property.| No| No
|**Location**|RedfishCS_Link| Structure link list to **Location** property.| No| No
|**LocationIndicatorActive**|RedfishCS_bool| Boolean pointer to **LocationIndicatorActive** property.| No| No
|**Manufacturer**|RedfishCS_char| String pointer to **Manufacturer** property.| No| Yes
|**Metrics**|RedfishCS_Link| Structure link list to **Metrics** property.| No| Yes
|**Model**|RedfishCS_char| String pointer to **Model** property.| No| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**OutputRails**|RedfishPowerSupply_V1_0_0_OutputRail_CS| Structure points to **OutputRails** property.| No| No
|**PartNumber**|RedfishCS_char| String pointer to **PartNumber** property.| No| Yes
|**PhaseWiringType**|RedfishCS_char| String pointer to **PhaseWiringType** property.| No| Yes
|**PlugType**|RedfishCS_char| String pointer to **PlugType** property.| No| Yes
|**PowerCapacityWatts**|RedfishCS_int64| 64-bit long long interger pointer to **PowerCapacityWatts** property.| No| Yes
|**PowerSupplyType**|RedfishCS_char| String pointer to **PowerSupplyType** property.| No| Yes
|**SerialNumber**|RedfishCS_char| String pointer to **SerialNumber** property.| No| Yes
|**SparePartNumber**|RedfishCS_char| String pointer to **SparePartNumber** property.| No| Yes
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
## Redfish PowerSupply V1_0_0 to C Structure Function
    RedfishCS_status
    Json_PowerSupply_V1_0_0_To_CS (RedfishCS_char *JsonRawText, RedfishPowerSupply_V1_0_0_PowerSupply_CS **ReturnedCS);

## C Structure to Redfish PowerSupply V1_0_0 JSON Function
    RedfishCS_status
    CS_To_PowerSupply_V1_0_0_JSON (RedfishPowerSupply_V1_0_0_PowerSupply_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish PowerSupply V1_0_0 C Structure Function
    RedfishCS_status
    DestroyPowerSupply_V1_0_0_CS (RedfishPowerSupply_V1_0_0_PowerSupply_CS *CSPtr);

