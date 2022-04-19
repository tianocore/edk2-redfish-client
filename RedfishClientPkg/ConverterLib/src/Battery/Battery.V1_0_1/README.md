# Definition of Battery.V1_0_1 and functions<br><br>

## Actions
    typedef struct _RedfishBattery_V1_0_1_Actions_CS {
        RedfishBattery_V1_0_1_Calibrate_CS *Battery_Calibrate;
        RedfishBattery_V1_0_1_Reset_CS *Battery_Reset;
        RedfishBattery_V1_0_1_SelfTest_CS *Battery_SelfTest;
        RedfishBattery_V1_0_1_OemActions_CS *Oem;
    } RedfishBattery_V1_0_1_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Battery_Calibrate**|RedfishBattery_V1_0_1_Calibrate_CS| Structure points to **#Battery.Calibrate** property.| No| No
|**Battery_Reset**|RedfishBattery_V1_0_1_Reset_CS| Structure points to **#Battery.Reset** property.| No| No
|**Battery_SelfTest**|RedfishBattery_V1_0_1_SelfTest_CS| Structure points to **#Battery.SelfTest** property.| No| No
|**Oem**|RedfishBattery_V1_0_1_OemActions_CS| Structure points to **Oem** property.| No| No


## Calibrate
    typedef struct _RedfishBattery_V1_0_1_Calibrate_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishBattery_V1_0_1_Calibrate_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**target**|RedfishCS_char| String pointer to **target** property.| No| No
|**title**|RedfishCS_char| String pointer to **title** property.| No| No


## OemActions
    typedef struct _RedfishBattery_V1_0_1_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishBattery_V1_0_1_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## Reset
    typedef struct _RedfishBattery_V1_0_1_Reset_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishBattery_V1_0_1_Reset_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**target**|RedfishCS_char| String pointer to **target** property.| No| No
|**title**|RedfishCS_char| String pointer to **title** property.| No| No


## SelfTest
    typedef struct _RedfishBattery_V1_0_1_SelfTest_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishBattery_V1_0_1_SelfTest_CS;

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
        RedfishCS_char *Resolution;
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
|**Resolution**|RedfishCS_char| String pointer to **Resolution** property.| No| Yes
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



## Battery
    typedef struct _RedfishBattery_V1_0_1_Battery_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishBattery_V1_0_1_Actions_CS *Actions;
        RedfishCS_Link Assembly;
        RedfishCS_int64 *CapacityActualAmpHours;
        RedfishCS_int64 *CapacityActualWattHours;
        RedfishCS_int64 *CapacityRatedAmpHours;
        RedfishCS_int64 *CapacityRatedWattHours;
        RedfishCS_char *ChargeState;
        RedfishCS_char *Description;
        RedfishCS_char *FirmwareVersion;
        RedfishCS_bool *HotPluggable;
        RedfishCS_char *Id;
        RedfishCS_Link Location;
        RedfishCS_bool *LocationIndicatorActive;
        RedfishCS_char *Manufacturer;
        RedfishCS_int64 *MaxChargeRateAmps;
        RedfishCS_int64 *MaxChargeVoltage;
        RedfishCS_int64 *MaxDischargeRateAmps;
        RedfishCS_Link Metrics;
        RedfishCS_char *Model;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_char *PartNumber;
        RedfishCS_char *ProductionDate;
        RedfishCS_char *SerialNumber;
        RedfishCS_char *SparePartNumber;
        RedfishCS_Link StateOfHealthPercent;
        RedfishResource_Status_CS *Status;
        RedfishCS_char *Version;
    } RedfishBattery_V1_0_1_Battery_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishBattery_V1_0_1_Actions_CS| Structure points to **Actions** property.| No| No
|**Assembly**|RedfishCS_Link| Structure link list to **Assembly** property.| No| Yes
|**CapacityActualAmpHours**|RedfishCS_int64| 64-bit long long interger pointer to **CapacityActualAmpHours** property.| No| Yes
|**CapacityActualWattHours**|RedfishCS_int64| 64-bit long long interger pointer to **CapacityActualWattHours** property.| No| Yes
|**CapacityRatedAmpHours**|RedfishCS_int64| 64-bit long long interger pointer to **CapacityRatedAmpHours** property.| No| Yes
|**CapacityRatedWattHours**|RedfishCS_int64| 64-bit long long interger pointer to **CapacityRatedWattHours** property.| No| Yes
|**ChargeState**|RedfishCS_char| String pointer to **ChargeState** property.| No| Yes
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**FirmwareVersion**|RedfishCS_char| String pointer to **FirmwareVersion** property.| No| Yes
|**HotPluggable**|RedfishCS_bool| Boolean pointer to **HotPluggable** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**Location**|RedfishCS_Link| Structure link list to **Location** property.| No| No
|**LocationIndicatorActive**|RedfishCS_bool| Boolean pointer to **LocationIndicatorActive** property.| No| No
|**Manufacturer**|RedfishCS_char| String pointer to **Manufacturer** property.| No| Yes
|**MaxChargeRateAmps**|RedfishCS_int64| 64-bit long long interger pointer to **MaxChargeRateAmps** property.| No| Yes
|**MaxChargeVoltage**|RedfishCS_int64| 64-bit long long interger pointer to **MaxChargeVoltage** property.| No| Yes
|**MaxDischargeRateAmps**|RedfishCS_int64| 64-bit long long interger pointer to **MaxDischargeRateAmps** property.| No| Yes
|**Metrics**|RedfishCS_Link| Structure link list to **Metrics** property.| No| Yes
|**Model**|RedfishCS_char| String pointer to **Model** property.| No| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**PartNumber**|RedfishCS_char| String pointer to **PartNumber** property.| No| Yes
|**ProductionDate**|RedfishCS_char| String pointer to **ProductionDate** property.| No| Yes
|**SerialNumber**|RedfishCS_char| String pointer to **SerialNumber** property.| No| Yes
|**SparePartNumber**|RedfishCS_char| String pointer to **SparePartNumber** property.| No| Yes
|**StateOfHealthPercent**|RedfishCS_Link| Structure link list to **StateOfHealthPercent** property.| No| No
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
|**Version**|RedfishCS_char| String pointer to **Version** property.| No| Yes
## Redfish Battery V1_0_1 to C Structure Function
    RedfishCS_status
    Json_Battery_V1_0_1_To_CS (RedfishCS_char *JsonRawText, RedfishBattery_V1_0_1_Battery_CS **ReturnedCS);

## C Structure to Redfish Battery V1_0_1 JSON Function
    RedfishCS_status
    CS_To_Battery_V1_0_1_JSON (RedfishBattery_V1_0_1_Battery_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish Battery V1_0_1 C Structure Function
    RedfishCS_status
    DestroyBattery_V1_0_1_CS (RedfishBattery_V1_0_1_Battery_CS *CSPtr);

