# Definition of Sensor.V1_0_2 and functions<br><br>

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
    typedef struct _RedfishSensor_V1_0_2_Actions_CS {
        RedfishSensor_V1_0_2_ResetStatistics_CS *Sensor_ResetStatistics;
        RedfishSensor_V1_0_2_OemActions_CS *Oem;
    } RedfishSensor_V1_0_2_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Sensor_ResetStatistics**|RedfishSensor_V1_0_2_ResetStatistics_CS| Structure points to **#Sensor.ResetStatistics** property.| No| No
|**Oem**|RedfishSensor_V1_0_2_OemActions_CS| Structure points to **Oem** property.| No| No


## OemActions
    typedef struct _RedfishSensor_V1_0_2_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishSensor_V1_0_2_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## ResetStatistics
    typedef struct _RedfishSensor_V1_0_2_ResetStatistics_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishSensor_V1_0_2_ResetStatistics_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**target**|RedfishCS_char| String pointer to **target** property.| No| No
|**title**|RedfishCS_char| String pointer to **title** property.| No| No


## SensorExcerpt
    typedef struct _RedfishSensor_V1_0_2_SensorExcerpt_CS {
        RedfishCS_char *DataSourceUri;
        RedfishCS_char *Name;
        RedfishCS_int64 *PeakReading;
        RedfishCS_char *PhysicalContext;
        RedfishCS_char *PhysicalSubContext;
        RedfishCS_int64 *Reading;
        RedfishCS_char *ReadingUnits;
        RedfishResource_Status_CS *Status;
    } RedfishSensor_V1_0_2_SensorExcerpt_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**DataSourceUri**|RedfishCS_char| String pointer to **DataSourceUri** property.| No| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**PeakReading**|RedfishCS_int64| 64-bit long long interger pointer to **PeakReading** property.| No| Yes
|**PhysicalContext**|RedfishCS_char| String pointer to **PhysicalContext** property.| No| Yes
|**PhysicalSubContext**|RedfishCS_char| String pointer to **PhysicalSubContext** property.| No| Yes
|**Reading**|RedfishCS_int64| 64-bit long long interger pointer to **Reading** property.| No| Yes
|**ReadingUnits**|RedfishCS_char| String pointer to **ReadingUnits** property.| No| Yes
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No


## SensorPowerExcerpt
    typedef struct _RedfishSensor_V1_0_2_SensorPowerExcerpt_CS {
        RedfishCS_int64 *ApparentVA;
        RedfishCS_char *DataSourceUri;
        RedfishCS_int64 *LoadPercent;
        RedfishCS_char *Name;
        RedfishCS_int64 *PeakReading;
        RedfishCS_char *PhysicalContext;
        RedfishCS_char *PhysicalSubContext;
        RedfishCS_int64 *PowerFactor;
        RedfishCS_int64 *ReactiveVAR;
        RedfishCS_int64 *Reading;
        RedfishCS_char *ReadingUnits;
        RedfishResource_Status_CS *Status;
    } RedfishSensor_V1_0_2_SensorPowerExcerpt_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**ApparentVA**|RedfishCS_int64| 64-bit long long interger pointer to **ApparentVA** property.| No| Yes
|**DataSourceUri**|RedfishCS_char| String pointer to **DataSourceUri** property.| No| Yes
|**LoadPercent**|RedfishCS_int64| 64-bit long long interger pointer to **LoadPercent** property.| No| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**PeakReading**|RedfishCS_int64| 64-bit long long interger pointer to **PeakReading** property.| No| Yes
|**PhysicalContext**|RedfishCS_char| String pointer to **PhysicalContext** property.| No| Yes
|**PhysicalSubContext**|RedfishCS_char| String pointer to **PhysicalSubContext** property.| No| Yes
|**PowerFactor**|RedfishCS_int64| 64-bit long long interger pointer to **PowerFactor** property.| No| Yes
|**ReactiveVAR**|RedfishCS_int64| 64-bit long long interger pointer to **ReactiveVAR** property.| No| Yes
|**Reading**|RedfishCS_int64| 64-bit long long interger pointer to **Reading** property.| No| Yes
|**ReadingUnits**|RedfishCS_char| String pointer to **ReadingUnits** property.| No| Yes
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No


## Threshold
    typedef struct _RedfishSensor_V1_0_2_Threshold_CS {
        RedfishCS_char *Activation;
        RedfishCS_char *DwellTime;
        RedfishCS_int64 *Reading;
    } RedfishSensor_V1_0_2_Threshold_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Activation**|RedfishCS_char| String pointer to **Activation** property.| No| No
|**DwellTime**|RedfishCS_char| String pointer to **DwellTime** property.| No| No
|**Reading**|RedfishCS_int64| 64-bit long long interger pointer to **Reading** property.| No| No


## Thresholds
    typedef struct _RedfishSensor_V1_0_2_Thresholds_CS {
        RedfishSensor_V1_0_2_Threshold_CS *LowerCaution;
        RedfishSensor_V1_0_2_Threshold_CS *LowerCritical;
        RedfishSensor_V1_0_2_Threshold_CS *LowerFatal;
        RedfishSensor_V1_0_2_Threshold_CS *UpperCaution;
        RedfishSensor_V1_0_2_Threshold_CS *UpperCritical;
        RedfishSensor_V1_0_2_Threshold_CS *UpperFatal;
    } RedfishSensor_V1_0_2_Thresholds_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**LowerCaution**|RedfishSensor_V1_0_2_Threshold_CS| Structure points to **LowerCaution** property.| No| No
|**LowerCritical**|RedfishSensor_V1_0_2_Threshold_CS| Structure points to **LowerCritical** property.| No| No
|**LowerFatal**|RedfishSensor_V1_0_2_Threshold_CS| Structure points to **LowerFatal** property.| No| No
|**UpperCaution**|RedfishSensor_V1_0_2_Threshold_CS| Structure points to **UpperCaution** property.| No| No
|**UpperCritical**|RedfishSensor_V1_0_2_Threshold_CS| Structure points to **UpperCritical** property.| No| No
|**UpperFatal**|RedfishSensor_V1_0_2_Threshold_CS| Structure points to **UpperFatal** property.| No| No


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



## Sensor
    typedef struct _RedfishSensor_V1_0_2_Sensor_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishCS_int64 *Accuracy;
        RedfishSensor_V1_0_2_Actions_CS *Actions;
        RedfishCS_int64 *AdjustedMaxAllowableOperatingValue;
        RedfishCS_int64 *AdjustedMinAllowableOperatingValue;
        RedfishCS_int64 *ApparentVA;
        RedfishCS_char *Description;
        RedfishCS_char *ElectricalContext;
        RedfishCS_char *Id;
        RedfishCS_int64 *LoadPercent;
        RedfishCS_Link Location;
        RedfishCS_int64 *MaxAllowableOperatingValue;
        RedfishCS_int64 *MinAllowableOperatingValue;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_int64 *PeakReading;
        RedfishCS_char *PeakReadingTime;
        RedfishCS_char *PhysicalContext;
        RedfishCS_char *PhysicalSubContext;
        RedfishCS_int64 *PowerFactor;
        RedfishCS_int64 *Precision;
        RedfishCS_int64 *ReactiveVAR;
        RedfishCS_int64 *Reading;
        RedfishCS_int64 *ReadingRangeMax;
        RedfishCS_int64 *ReadingRangeMin;
        RedfishCS_char *ReadingType;
        RedfishCS_char *ReadingUnits;
        RedfishCS_int64 *SensingFrequency;
        RedfishCS_char *SensorResetTime;
        RedfishResource_Status_CS *Status;
        RedfishSensor_V1_0_2_Thresholds_CS *Thresholds;
        RedfishCS_char *VoltageType;
    } RedfishSensor_V1_0_2_Sensor_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Accuracy**|RedfishCS_int64| 64-bit long long interger pointer to **Accuracy** property.| No| Yes
|**Actions**|RedfishSensor_V1_0_2_Actions_CS| Structure points to **Actions** property.| No| No
|**AdjustedMaxAllowableOperatingValue**|RedfishCS_int64| 64-bit long long interger pointer to **AdjustedMaxAllowableOperatingValue** property.| No| Yes
|**AdjustedMinAllowableOperatingValue**|RedfishCS_int64| 64-bit long long interger pointer to **AdjustedMinAllowableOperatingValue** property.| No| Yes
|**ApparentVA**|RedfishCS_int64| 64-bit long long interger pointer to **ApparentVA** property.| No| Yes
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**ElectricalContext**|RedfishCS_char| String pointer to **ElectricalContext** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**LoadPercent**|RedfishCS_int64| 64-bit long long interger pointer to **LoadPercent** property.| No| Yes
|**Location**|RedfishCS_Link| Structure link list to **Location** property.| No| No
|**MaxAllowableOperatingValue**|RedfishCS_int64| 64-bit long long interger pointer to **MaxAllowableOperatingValue** property.| No| Yes
|**MinAllowableOperatingValue**|RedfishCS_int64| 64-bit long long interger pointer to **MinAllowableOperatingValue** property.| No| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**PeakReading**|RedfishCS_int64| 64-bit long long interger pointer to **PeakReading** property.| No| Yes
|**PeakReadingTime**|RedfishCS_char| String pointer to **PeakReadingTime** property.| No| Yes
|**PhysicalContext**|RedfishCS_char| String pointer to **PhysicalContext** property.| No| Yes
|**PhysicalSubContext**|RedfishCS_char| String pointer to **PhysicalSubContext** property.| No| Yes
|**PowerFactor**|RedfishCS_int64| 64-bit long long interger pointer to **PowerFactor** property.| No| Yes
|**Precision**|RedfishCS_int64| 64-bit long long interger pointer to **Precision** property.| No| Yes
|**ReactiveVAR**|RedfishCS_int64| 64-bit long long interger pointer to **ReactiveVAR** property.| No| Yes
|**Reading**|RedfishCS_int64| 64-bit long long interger pointer to **Reading** property.| No| Yes
|**ReadingRangeMax**|RedfishCS_int64| 64-bit long long interger pointer to **ReadingRangeMax** property.| No| Yes
|**ReadingRangeMin**|RedfishCS_int64| 64-bit long long interger pointer to **ReadingRangeMin** property.| No| Yes
|**ReadingType**|RedfishCS_char| String pointer to **ReadingType** property.| No| Yes
|**ReadingUnits**|RedfishCS_char| String pointer to **ReadingUnits** property.| No| Yes
|**SensingFrequency**|RedfishCS_int64| 64-bit long long interger pointer to **SensingFrequency** property.| No| Yes
|**SensorResetTime**|RedfishCS_char| String pointer to **SensorResetTime** property.| No| Yes
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
|**Thresholds**|RedfishSensor_V1_0_2_Thresholds_CS| Structure points to **Thresholds** property.| No| No
|**VoltageType**|RedfishCS_char| String pointer to **VoltageType** property.| No| Yes
## Redfish Sensor V1_0_2 to C Structure Function
    RedfishCS_status
    Json_Sensor_V1_0_2_To_CS (RedfishCS_char *JsonRawText, RedfishSensor_V1_0_2_Sensor_CS **ReturnedCS);

## C Structure to Redfish Sensor V1_0_2 JSON Function
    RedfishCS_status
    CS_To_Sensor_V1_0_2_JSON (RedfishSensor_V1_0_2_Sensor_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish Sensor V1_0_2 C Structure Function
    RedfishCS_status
    DestroySensor_V1_0_2_CS (RedfishSensor_V1_0_2_Sensor_CS *CSPtr);

