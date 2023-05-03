# Definition of PowerSupplyMetrics.V1_0_0 and functions<br><br>

## Actions
    typedef struct _RedfishPowerSupplyMetrics_V1_0_0_Actions_CS {
        RedfishPowerSupplyMetrics_V1_0_0_ResetMetrics_CS *PowerSupplyMetrics_ResetMetrics;
        RedfishPowerSupplyMetrics_V1_0_0_OemActions_CS *Oem;
    } RedfishPowerSupplyMetrics_V1_0_0_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**PowerSupplyMetrics_ResetMetrics**|RedfishPowerSupplyMetrics_V1_0_0_ResetMetrics_CS| Structure points to **#PowerSupplyMetrics.ResetMetrics** property.| No| No
|**Oem**|RedfishPowerSupplyMetrics_V1_0_0_OemActions_CS| Structure points to **Oem** property.| No| No


## CurrentSensors
    typedef struct _RedfishPowerSupplyMetrics_V1_0_0_CurrentSensors_CS {
        RedfishCS_Link Input;
        RedfishCS_Link InputSecondary;
        RedfishCS_Link Output12Volt;
        RedfishCS_Link Output3Volt;
        RedfishCS_Link Output48Volt;
        RedfishCS_Link Output5Volt;
        RedfishCS_Link OutputAux;
    } RedfishPowerSupplyMetrics_V1_0_0_CurrentSensors_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Input**|RedfishCS_Link| Structure link list to **Input** property.| No| Yes
|**InputSecondary**|RedfishCS_Link| Structure link list to **InputSecondary** property.| No| Yes
|**Output12Volt**|RedfishCS_Link| Structure link list to **Output12Volt** property.| No| Yes
|**Output3Volt**|RedfishCS_Link| Structure link list to **Output3Volt** property.| No| Yes
|**Output48Volt**|RedfishCS_Link| Structure link list to **Output48Volt** property.| No| Yes
|**Output5Volt**|RedfishCS_Link| Structure link list to **Output5Volt** property.| No| Yes
|**OutputAux**|RedfishCS_Link| Structure link list to **OutputAux** property.| No| Yes


## OemActions
    typedef struct _RedfishPowerSupplyMetrics_V1_0_0_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishPowerSupplyMetrics_V1_0_0_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## PowerSensors
    typedef struct _RedfishPowerSupplyMetrics_V1_0_0_PowerSensors_CS {
        RedfishCS_Link Input;
        RedfishCS_Link InputSecondary;
        RedfishCS_Link Output;
    } RedfishPowerSupplyMetrics_V1_0_0_PowerSensors_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Input**|RedfishCS_Link| Structure link list to **Input** property.| No| Yes
|**InputSecondary**|RedfishCS_Link| Structure link list to **InputSecondary** property.| No| Yes
|**Output**|RedfishCS_Link| Structure link list to **Output** property.| No| Yes


## ResetMetrics
    typedef struct _RedfishPowerSupplyMetrics_V1_0_0_ResetMetrics_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishPowerSupplyMetrics_V1_0_0_ResetMetrics_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**target**|RedfishCS_char| String pointer to **target** property.| No| No
|**title**|RedfishCS_char| String pointer to **title** property.| No| No


## VoltageSensors
    typedef struct _RedfishPowerSupplyMetrics_V1_0_0_VoltageSensors_CS {
        RedfishCS_Link Input;
        RedfishCS_Link InputSecondary;
        RedfishCS_Link Output12Volt;
        RedfishCS_Link Output3Volt;
        RedfishCS_Link Output48Volt;
        RedfishCS_Link Output5Volt;
        RedfishCS_Link OutputAux;
    } RedfishPowerSupplyMetrics_V1_0_0_VoltageSensors_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Input**|RedfishCS_Link| Structure link list to **Input** property.| No| Yes
|**InputSecondary**|RedfishCS_Link| Structure link list to **InputSecondary** property.| No| Yes
|**Output12Volt**|RedfishCS_Link| Structure link list to **Output12Volt** property.| No| Yes
|**Output3Volt**|RedfishCS_Link| Structure link list to **Output3Volt** property.| No| Yes
|**Output48Volt**|RedfishCS_Link| Structure link list to **Output48Volt** property.| No| Yes
|**Output5Volt**|RedfishCS_Link| Structure link list to **Output5Volt** property.| No| Yes
|**OutputAux**|RedfishCS_Link| Structure link list to **OutputAux** property.| No| Yes


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



## PowerSupplyMetrics
    typedef struct _RedfishPowerSupplyMetrics_V1_0_0_PowerSupplyMetrics_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishPowerSupplyMetrics_V1_0_0_Actions_CS *Actions;
        RedfishCS_char *Description;
        RedfishCS_Link EnergykWh;
        RedfishCS_Link FanSpeedPercent;
        RedfishCS_Link FrequencyHz;
        RedfishCS_char *Id;
        RedfishCS_Link InputCurrentAmps;
        RedfishCS_Link InputPowerWatts;
        RedfishCS_Link InputVoltage;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_Link OutputPowerWatts;
        RedfishCS_Link RailCurrentAmps;
        RedfishCS_int64 *RailCurrentAmpsodata_count;
        RedfishCS_Link RailPowerWatts;
        RedfishCS_int64 *RailPowerWattsodata_count;
        RedfishCS_Link RailVoltage;
        RedfishCS_int64 *RailVoltageodata_count;
        RedfishResource_Status_CS *Status;
        RedfishCS_Link TemperatureCelsius;
    } RedfishPowerSupplyMetrics_V1_0_0_PowerSupplyMetrics_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishPowerSupplyMetrics_V1_0_0_Actions_CS| Structure points to **Actions** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**EnergykWh**|RedfishCS_Link| Structure link list to **EnergykWh** property.| No| Yes
|**FanSpeedPercent**|RedfishCS_Link| Structure link list to **FanSpeedPercent** property.| No| Yes
|**FrequencyHz**|RedfishCS_Link| Structure link list to **FrequencyHz** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**InputCurrentAmps**|RedfishCS_Link| Structure link list to **InputCurrentAmps** property.| No| Yes
|**InputPowerWatts**|RedfishCS_Link| Structure link list to **InputPowerWatts** property.| No| Yes
|**InputVoltage**|RedfishCS_Link| Structure link list to **InputVoltage** property.| No| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**OutputPowerWatts**|RedfishCS_Link| Structure link list to **OutputPowerWatts** property.| No| Yes
|**RailCurrentAmps**|RedfishCS_Link| Structure link list to **RailCurrentAmps** property.| No| Yes
|**RailCurrentAmpsodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **RailCurrentAmps@odata.count** property.| No| No
|**RailPowerWatts**|RedfishCS_Link| Structure link list to **RailPowerWatts** property.| No| Yes
|**RailPowerWattsodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **RailPowerWatts@odata.count** property.| No| No
|**RailVoltage**|RedfishCS_Link| Structure link list to **RailVoltage** property.| No| Yes
|**RailVoltageodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **RailVoltage@odata.count** property.| No| No
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
|**TemperatureCelsius**|RedfishCS_Link| Structure link list to **TemperatureCelsius** property.| No| Yes
## Redfish PowerSupplyMetrics V1_0_0 to C Structure Function
    RedfishCS_status
    Json_PowerSupplyMetrics_V1_0_0_To_CS (RedfishCS_char *JsonRawText, RedfishPowerSupplyMetrics_V1_0_0_PowerSupplyMetrics_CS **ReturnedCS);

## C Structure to Redfish PowerSupplyMetrics V1_0_0 JSON Function
    RedfishCS_status
    CS_To_PowerSupplyMetrics_V1_0_0_JSON (RedfishPowerSupplyMetrics_V1_0_0_PowerSupplyMetrics_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish PowerSupplyMetrics V1_0_0 C Structure Function
    RedfishCS_status
    DestroyPowerSupplyMetrics_V1_0_0_CS (RedfishPowerSupplyMetrics_V1_0_0_PowerSupplyMetrics_CS *CSPtr);

