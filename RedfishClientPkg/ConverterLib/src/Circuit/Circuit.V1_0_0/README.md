# Definition of Circuit.V1_0_0 and functions<br><br>

## Actions
    typedef struct _RedfishCircuit_V1_0_0_Actions_CS {
        RedfishCircuit_V1_0_0_BreakerControl_CS *Circuit_BreakerControl;
        RedfishCircuit_V1_0_0_PowerControl_CS *Circuit_PowerControl;
        RedfishCircuit_V1_0_0_ResetMetrics_CS *Circuit_ResetMetrics;
        RedfishCircuit_V1_0_0_OemActions_CS *Oem;
    } RedfishCircuit_V1_0_0_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Circuit_BreakerControl**|RedfishCircuit_V1_0_0_BreakerControl_CS| Structure points to **#Circuit.BreakerControl** property.| No| No
|**Circuit_PowerControl**|RedfishCircuit_V1_0_0_PowerControl_CS| Structure points to **#Circuit.PowerControl** property.| No| No
|**Circuit_ResetMetrics**|RedfishCircuit_V1_0_0_ResetMetrics_CS| Structure points to **#Circuit.ResetMetrics** property.| No| No
|**Oem**|RedfishCircuit_V1_0_0_OemActions_CS| Structure points to **Oem** property.| No| No


## BreakerControl
    typedef struct _RedfishCircuit_V1_0_0_BreakerControl_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishCircuit_V1_0_0_BreakerControl_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**target**|RedfishCS_char| String pointer to **target** property.| No| No
|**title**|RedfishCS_char| String pointer to **title** property.| No| No


## CurrentSensors
    typedef struct _RedfishCircuit_V1_0_0_CurrentSensors_CS {
        RedfishCS_Link Line1;
        RedfishCS_Link Line2;
        RedfishCS_Link Line3;
        RedfishCS_Link Neutral;
    } RedfishCircuit_V1_0_0_CurrentSensors_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Line1**|RedfishCS_Link| Structure link list to **Line1** property.| No| Yes
|**Line2**|RedfishCS_Link| Structure link list to **Line2** property.| No| Yes
|**Line3**|RedfishCS_Link| Structure link list to **Line3** property.| No| Yes
|**Neutral**|RedfishCS_Link| Structure link list to **Neutral** property.| No| Yes


## EnergySensors
    typedef struct _RedfishCircuit_V1_0_0_EnergySensors_CS {
        RedfishCS_Link Line1ToLine2;
        RedfishCS_Link Line1ToNeutral;
        RedfishCS_Link Line2ToLine3;
        RedfishCS_Link Line2ToNeutral;
        RedfishCS_Link Line3ToLine1;
        RedfishCS_Link Line3ToNeutral;
    } RedfishCircuit_V1_0_0_EnergySensors_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Line1ToLine2**|RedfishCS_Link| Structure link list to **Line1ToLine2** property.| No| Yes
|**Line1ToNeutral**|RedfishCS_Link| Structure link list to **Line1ToNeutral** property.| No| Yes
|**Line2ToLine3**|RedfishCS_Link| Structure link list to **Line2ToLine3** property.| No| Yes
|**Line2ToNeutral**|RedfishCS_Link| Structure link list to **Line2ToNeutral** property.| No| Yes
|**Line3ToLine1**|RedfishCS_Link| Structure link list to **Line3ToLine1** property.| No| Yes
|**Line3ToNeutral**|RedfishCS_Link| Structure link list to **Line3ToNeutral** property.| No| Yes


## Links
    typedef struct _RedfishCircuit_V1_0_0_Links_CS {
        RedfishCS_Link BranchCircuit;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_Link Outlets;
        RedfishCS_int64 *Outletsodata_count;
    } RedfishCircuit_V1_0_0_Links_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**BranchCircuit**|RedfishCS_Link| Structure link list to **BranchCircuit** property.| No| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**Outlets**|RedfishCS_Link| Structure link list to **Outlets** property.| No| Yes
|**Outletsodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **Outlets@odata.count** property.| No| No


## OemActions
    typedef struct _RedfishCircuit_V1_0_0_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishCircuit_V1_0_0_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## PowerControl
    typedef struct _RedfishCircuit_V1_0_0_PowerControl_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishCircuit_V1_0_0_PowerControl_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**target**|RedfishCS_char| String pointer to **target** property.| No| No
|**title**|RedfishCS_char| String pointer to **title** property.| No| No


## PowerSensors
    typedef struct _RedfishCircuit_V1_0_0_PowerSensors_CS {
        RedfishCS_Link Line1ToLine2;
        RedfishCS_Link Line1ToNeutral;
        RedfishCS_Link Line2ToLine3;
        RedfishCS_Link Line2ToNeutral;
        RedfishCS_Link Line3ToLine1;
        RedfishCS_Link Line3ToNeutral;
    } RedfishCircuit_V1_0_0_PowerSensors_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Line1ToLine2**|RedfishCS_Link| Structure link list to **Line1ToLine2** property.| No| Yes
|**Line1ToNeutral**|RedfishCS_Link| Structure link list to **Line1ToNeutral** property.| No| Yes
|**Line2ToLine3**|RedfishCS_Link| Structure link list to **Line2ToLine3** property.| No| Yes
|**Line2ToNeutral**|RedfishCS_Link| Structure link list to **Line2ToNeutral** property.| No| Yes
|**Line3ToLine1**|RedfishCS_Link| Structure link list to **Line3ToLine1** property.| No| Yes
|**Line3ToNeutral**|RedfishCS_Link| Structure link list to **Line3ToNeutral** property.| No| Yes


## ResetMetrics
    typedef struct _RedfishCircuit_V1_0_0_ResetMetrics_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishCircuit_V1_0_0_ResetMetrics_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**target**|RedfishCS_char| String pointer to **target** property.| No| No
|**title**|RedfishCS_char| String pointer to **title** property.| No| No


## VoltageSensors
    typedef struct _RedfishCircuit_V1_0_0_VoltageSensors_CS {
        RedfishCS_Link Line1ToLine2;
        RedfishCS_Link Line1ToNeutral;
        RedfishCS_Link Line2ToLine3;
        RedfishCS_Link Line2ToNeutral;
        RedfishCS_Link Line3ToLine1;
        RedfishCS_Link Line3ToNeutral;
    } RedfishCircuit_V1_0_0_VoltageSensors_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Line1ToLine2**|RedfishCS_Link| Structure link list to **Line1ToLine2** property.| No| Yes
|**Line1ToNeutral**|RedfishCS_Link| Structure link list to **Line1ToNeutral** property.| No| Yes
|**Line2ToLine3**|RedfishCS_Link| Structure link list to **Line2ToLine3** property.| No| Yes
|**Line2ToNeutral**|RedfishCS_Link| Structure link list to **Line2ToNeutral** property.| No| Yes
|**Line3ToLine1**|RedfishCS_Link| Structure link list to **Line3ToLine1** property.| No| Yes
|**Line3ToNeutral**|RedfishCS_Link| Structure link list to **Line3ToNeutral** property.| No| Yes


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



## Circuit
    typedef struct _RedfishCircuit_V1_0_0_Circuit_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishCircuit_V1_0_0_Actions_CS *Actions;
        RedfishCS_char *BreakerState;
        RedfishCS_char *CircuitType;
        RedfishCS_bool *CriticalCircuit;
        RedfishCS_Link CurrentAmps;
        RedfishCS_char *Description;
        RedfishCS_char *ElectricalContext;
        RedfishCS_Link EnergykWh;
        RedfishCS_Link FrequencyHz;
        RedfishCS_char *Id;
        RedfishCS_char *IndicatorLED;
        RedfishCircuit_V1_0_0_Links_CS *Links;
        RedfishCS_char *Name;
        RedfishCS_char *NominalVoltage;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_char *PhaseWiringType;
        RedfishCS_char *PlugType;
        RedfishCircuit_V1_0_0_CurrentSensors_CS *PolyPhaseCurrentAmps;
        RedfishCircuit_V1_0_0_EnergySensors_CS *PolyPhaseEnergykWh;
        RedfishCircuit_V1_0_0_PowerSensors_CS *PolyPhasePowerWatts;
        RedfishCircuit_V1_0_0_VoltageSensors_CS *PolyPhaseVoltage;
        RedfishCS_int64 *PowerCycleDelaySeconds;
        RedfishCS_bool *PowerEnabled;
        RedfishCS_int64 *PowerOffDelaySeconds;
        RedfishCS_int64 *PowerOnDelaySeconds;
        RedfishCS_int64 *PowerRestoreDelaySeconds;
        RedfishCS_char *PowerRestorePolicy;
        RedfishCS_char *PowerState;
        RedfishCS_Link PowerWatts;
        RedfishCS_int64 *RatedCurrentAmps;
        RedfishResource_Status_CS *Status;
        RedfishCS_Link Voltage;
        RedfishCS_char *VoltageType;
    } RedfishCircuit_V1_0_0_Circuit_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishCircuit_V1_0_0_Actions_CS| Structure points to **Actions** property.| No| No
|**BreakerState**|RedfishCS_char| String pointer to **BreakerState** property.| No| Yes
|**CircuitType**|RedfishCS_char| String pointer to **CircuitType** property.| No| Yes
|**CriticalCircuit**|RedfishCS_bool| Boolean pointer to **CriticalCircuit** property.| No| No
|**CurrentAmps**|RedfishCS_Link| Structure link list to **CurrentAmps** property.| No| Yes
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**ElectricalContext**|RedfishCS_char| String pointer to **ElectricalContext** property.| No| Yes
|**EnergykWh**|RedfishCS_Link| Structure link list to **EnergykWh** property.| No| Yes
|**FrequencyHz**|RedfishCS_Link| Structure link list to **FrequencyHz** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**IndicatorLED**|RedfishCS_char| String pointer to **IndicatorLED** property.| No| No
|**Links**|RedfishCircuit_V1_0_0_Links_CS| Structure points to **Links** property.| No| No
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**NominalVoltage**|RedfishCS_char| String pointer to **NominalVoltage** property.| No| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**PhaseWiringType**|RedfishCS_char| String pointer to **PhaseWiringType** property.| No| Yes
|**PlugType**|RedfishCS_char| String pointer to **PlugType** property.| No| Yes
|**PolyPhaseCurrentAmps**|RedfishCircuit_V1_0_0_CurrentSensors_CS| Structure points to **PolyPhaseCurrentAmps** property.| No| No
|**PolyPhaseEnergykWh**|RedfishCircuit_V1_0_0_EnergySensors_CS| Structure points to **PolyPhaseEnergykWh** property.| No| No
|**PolyPhasePowerWatts**|RedfishCircuit_V1_0_0_PowerSensors_CS| Structure points to **PolyPhasePowerWatts** property.| No| No
|**PolyPhaseVoltage**|RedfishCircuit_V1_0_0_VoltageSensors_CS| Structure points to **PolyPhaseVoltage** property.| No| No
|**PowerCycleDelaySeconds**|RedfishCS_int64| 64-bit long long interger pointer to **PowerCycleDelaySeconds** property.| No| No
|**PowerEnabled**|RedfishCS_bool| Boolean pointer to **PowerEnabled** property.| No| Yes
|**PowerOffDelaySeconds**|RedfishCS_int64| 64-bit long long interger pointer to **PowerOffDelaySeconds** property.| No| No
|**PowerOnDelaySeconds**|RedfishCS_int64| 64-bit long long interger pointer to **PowerOnDelaySeconds** property.| No| No
|**PowerRestoreDelaySeconds**|RedfishCS_int64| 64-bit long long interger pointer to **PowerRestoreDelaySeconds** property.| No| No
|**PowerRestorePolicy**|RedfishCS_char| String pointer to **PowerRestorePolicy** property.| No| No
|**PowerState**|RedfishCS_char| String pointer to **PowerState** property.| No| Yes
|**PowerWatts**|RedfishCS_Link| Structure link list to **PowerWatts** property.| No| Yes
|**RatedCurrentAmps**|RedfishCS_int64| 64-bit long long interger pointer to **RatedCurrentAmps** property.| No| Yes
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
|**Voltage**|RedfishCS_Link| Structure link list to **Voltage** property.| No| Yes
|**VoltageType**|RedfishCS_char| String pointer to **VoltageType** property.| No| Yes
## Redfish Circuit V1_0_0 to C Structure Function
    RedfishCS_status
    Json_Circuit_V1_0_0_To_CS (RedfishCS_char *JsonRawText, RedfishCircuit_V1_0_0_Circuit_CS **ReturnedCS);

## C Structure to Redfish Circuit V1_0_0 JSON Function
    RedfishCS_status
    CS_To_Circuit_V1_0_0_JSON (RedfishCircuit_V1_0_0_Circuit_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish Circuit V1_0_0 C Structure Function
    RedfishCS_status
    DestroyCircuit_V1_0_0_CS (RedfishCircuit_V1_0_0_Circuit_CS *CSPtr);

