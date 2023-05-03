# Definition of Thermal.V1_4_3 and functions<br><br>

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


## Fan
    typedef struct _RedfishThermal_V1_4_3_Fan_CS {
        RedfishCS_char *odata_id;
        RedfishThermal_V1_4_3_FanActions_CS *Actions;
        RedfishCS_Link Assembly;
        RedfishCS_char *FanName;
        RedfishCS_bool *HotPluggable;
        RedfishCS_char *IndicatorLED;
        RedfishCS_Link Location;
        RedfishCS_int64 *LowerThresholdCritical;
        RedfishCS_int64 *LowerThresholdFatal;
        RedfishCS_int64 *LowerThresholdNonCritical;
        RedfishCS_char *Manufacturer;
        RedfishCS_int64 *MaxReadingRange;
        RedfishCS_char *MemberId;
        RedfishCS_int64 *MinReadingRange;
        RedfishCS_char *Model;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_char *PartNumber;
        RedfishCS_char *PhysicalContext;
        RedfishCS_int64 *Reading;
        RedfishCS_char *ReadingUnits;
        RedfishCS_Link Redundancy;
        RedfishCS_int64 *Redundancyodata_count;
        Redfishodatav4_idRef_Array_CS *RelatedItem;
        RedfishCS_int64 *RelatedItemodata_count;
        RedfishCS_char *SerialNumber;
        RedfishCS_char *SparePartNumber;
        RedfishResource_Status_CS *Status;
        RedfishCS_int64 *UpperThresholdCritical;
        RedfishCS_int64 *UpperThresholdFatal;
        RedfishCS_int64 *UpperThresholdNonCritical;
    } RedfishThermal_V1_4_3_Fan_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**Actions**|RedfishThermal_V1_4_3_FanActions_CS| Structure points to **Actions** property.| No| No
|**Assembly**|RedfishCS_Link| Structure link list to **Assembly** property.| No| Yes
|**FanName**|RedfishCS_char| String pointer to **FanName** property.| No| Yes
|**HotPluggable**|RedfishCS_bool| Boolean pointer to **HotPluggable** property.| No| Yes
|**IndicatorLED**|RedfishCS_char| String pointer to **IndicatorLED** property.| No| No
|**Location**|RedfishCS_Link| Structure link list to **Location** property.| No| No
|**LowerThresholdCritical**|RedfishCS_int64| 64-bit long long interger pointer to **LowerThresholdCritical** property.| No| Yes
|**LowerThresholdFatal**|RedfishCS_int64| 64-bit long long interger pointer to **LowerThresholdFatal** property.| No| Yes
|**LowerThresholdNonCritical**|RedfishCS_int64| 64-bit long long interger pointer to **LowerThresholdNonCritical** property.| No| Yes
|**Manufacturer**|RedfishCS_char| String pointer to **Manufacturer** property.| No| Yes
|**MaxReadingRange**|RedfishCS_int64| 64-bit long long interger pointer to **MaxReadingRange** property.| No| Yes
|**MemberId**|RedfishCS_char| String pointer to **MemberId** property.| No| Yes
|**MinReadingRange**|RedfishCS_int64| 64-bit long long interger pointer to **MinReadingRange** property.| No| Yes
|**Model**|RedfishCS_char| String pointer to **Model** property.| No| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**PartNumber**|RedfishCS_char| String pointer to **PartNumber** property.| No| Yes
|**PhysicalContext**|RedfishCS_char| String pointer to **PhysicalContext** property.| No| Yes
|**Reading**|RedfishCS_int64| 64-bit long long interger pointer to **Reading** property.| No| Yes
|**ReadingUnits**|RedfishCS_char| String pointer to **ReadingUnits** property.| No| Yes
|**Redundancy**|RedfishCS_Link| Structure link list to **Redundancy** property.| No| No
|**Redundancyodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **Redundancy@odata.count** property.| No| No
|**RelatedItem**|Redfishodatav4_idRef_Array_CS| Structure array points to one or more than one **Redfishodatav4_idRef_Array_CS** structures for property **RelatedItem**.| No| Yes
|**RelatedItemodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **RelatedItem@odata.count** property.| No| No
|**SerialNumber**|RedfishCS_char| String pointer to **SerialNumber** property.| No| Yes
|**SparePartNumber**|RedfishCS_char| String pointer to **SparePartNumber** property.| No| Yes
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
|**UpperThresholdCritical**|RedfishCS_int64| 64-bit long long interger pointer to **UpperThresholdCritical** property.| No| Yes
|**UpperThresholdFatal**|RedfishCS_int64| 64-bit long long interger pointer to **UpperThresholdFatal** property.| No| Yes
|**UpperThresholdNonCritical**|RedfishCS_int64| 64-bit long long interger pointer to **UpperThresholdNonCritical** property.| No| Yes


## FanActions
    typedef struct _RedfishThermal_V1_4_3_FanActions_CS {
        RedfishThermal_V1_4_3_FanOemActions_CS *Oem;
    } RedfishThermal_V1_4_3_FanActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishThermal_V1_4_3_FanOemActions_CS| Structure points to **Oem** property.| No| No


## FanOemActions
    typedef struct _RedfishThermal_V1_4_3_FanOemActions_CS {
        RedfishCS_Link Prop;
    } RedfishThermal_V1_4_3_FanOemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## Temperature
    typedef struct _RedfishThermal_V1_4_3_Temperature_CS {
        RedfishCS_char *odata_id;
        RedfishThermal_V1_4_3_TemperatureActions_CS *Actions;
        RedfishCS_int64 *AdjustedMaxAllowableOperatingValue;
        RedfishCS_int64 *AdjustedMinAllowableOperatingValue;
        RedfishCS_char *DeltaPhysicalContext;
        RedfishCS_int64 *DeltaReadingCelsius;
        RedfishCS_int64 *LowerThresholdCritical;
        RedfishCS_int64 *LowerThresholdFatal;
        RedfishCS_int64 *LowerThresholdNonCritical;
        RedfishCS_int64 *MaxAllowableOperatingValue;
        RedfishCS_int64 *MaxReadingRangeTemp;
        RedfishCS_char *MemberId;
        RedfishCS_int64 *MinAllowableOperatingValue;
        RedfishCS_int64 *MinReadingRangeTemp;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_char *PhysicalContext;
        RedfishCS_int64 *ReadingCelsius;
        Redfishodatav4_idRef_Array_CS *RelatedItem;
        RedfishCS_int64 *RelatedItemodata_count;
        RedfishCS_int64 *SensorNumber;
        RedfishResource_Status_CS *Status;
        RedfishCS_int64 *UpperThresholdCritical;
        RedfishCS_int64 *UpperThresholdFatal;
        RedfishCS_int64 *UpperThresholdNonCritical;
    } RedfishThermal_V1_4_3_Temperature_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**Actions**|RedfishThermal_V1_4_3_TemperatureActions_CS| Structure points to **Actions** property.| No| No
|**AdjustedMaxAllowableOperatingValue**|RedfishCS_int64| 64-bit long long interger pointer to **AdjustedMaxAllowableOperatingValue** property.| No| Yes
|**AdjustedMinAllowableOperatingValue**|RedfishCS_int64| 64-bit long long interger pointer to **AdjustedMinAllowableOperatingValue** property.| No| Yes
|**DeltaPhysicalContext**|RedfishCS_char| String pointer to **DeltaPhysicalContext** property.| No| Yes
|**DeltaReadingCelsius**|RedfishCS_int64| 64-bit long long interger pointer to **DeltaReadingCelsius** property.| No| Yes
|**LowerThresholdCritical**|RedfishCS_int64| 64-bit long long interger pointer to **LowerThresholdCritical** property.| No| Yes
|**LowerThresholdFatal**|RedfishCS_int64| 64-bit long long interger pointer to **LowerThresholdFatal** property.| No| Yes
|**LowerThresholdNonCritical**|RedfishCS_int64| 64-bit long long interger pointer to **LowerThresholdNonCritical** property.| No| Yes
|**MaxAllowableOperatingValue**|RedfishCS_int64| 64-bit long long interger pointer to **MaxAllowableOperatingValue** property.| No| Yes
|**MaxReadingRangeTemp**|RedfishCS_int64| 64-bit long long interger pointer to **MaxReadingRangeTemp** property.| No| Yes
|**MemberId**|RedfishCS_char| String pointer to **MemberId** property.| No| Yes
|**MinAllowableOperatingValue**|RedfishCS_int64| 64-bit long long interger pointer to **MinAllowableOperatingValue** property.| No| Yes
|**MinReadingRangeTemp**|RedfishCS_int64| 64-bit long long interger pointer to **MinReadingRangeTemp** property.| No| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**PhysicalContext**|RedfishCS_char| String pointer to **PhysicalContext** property.| No| Yes
|**ReadingCelsius**|RedfishCS_int64| 64-bit long long interger pointer to **ReadingCelsius** property.| No| Yes
|**RelatedItem**|Redfishodatav4_idRef_Array_CS| Structure array points to one or more than one **Redfishodatav4_idRef_Array_CS** structures for property **RelatedItem**.| No| Yes
|**RelatedItemodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **RelatedItem@odata.count** property.| No| No
|**SensorNumber**|RedfishCS_int64| 64-bit long long interger pointer to **SensorNumber** property.| No| Yes
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
|**UpperThresholdCritical**|RedfishCS_int64| 64-bit long long interger pointer to **UpperThresholdCritical** property.| No| Yes
|**UpperThresholdFatal**|RedfishCS_int64| 64-bit long long interger pointer to **UpperThresholdFatal** property.| No| Yes
|**UpperThresholdNonCritical**|RedfishCS_int64| 64-bit long long interger pointer to **UpperThresholdNonCritical** property.| No| Yes


## TemperatureActions
    typedef struct _RedfishThermal_V1_4_3_TemperatureActions_CS {
        RedfishThermal_V1_4_3_TemperatureOemActions_CS *Oem;
    } RedfishThermal_V1_4_3_TemperatureActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishThermal_V1_4_3_TemperatureOemActions_CS| Structure points to **Oem** property.| No| No


## TemperatureOemActions
    typedef struct _RedfishThermal_V1_4_3_TemperatureOemActions_CS {
        RedfishCS_Link Prop;
    } RedfishThermal_V1_4_3_TemperatureOemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## ThermalActions
    typedef struct _RedfishThermal_V1_4_3_ThermalActions_CS {
        RedfishThermal_V1_4_3_ThermalOemActions_CS *Oem;
    } RedfishThermal_V1_4_3_ThermalActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishThermal_V1_4_3_ThermalOemActions_CS| Structure points to **Oem** property.| No| No


## ThermalOemActions
    typedef struct _RedfishThermal_V1_4_3_ThermalOemActions_CS {
        RedfishCS_Link Prop;
    } RedfishThermal_V1_4_3_ThermalOemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


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



## Redfishodatav4_idRef_Array_CS
    typedef struct _Redfishodatav4_idRef_Array_CS  {
        RedfishCS_Link *Next;
        Redfishodatav4_idRef_CS *ArrayValue;
    } Redfishodatav4_idRef_Array_CS;



## Thermal
    typedef struct _RedfishThermal_V1_4_3_Thermal_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishThermal_V1_4_3_ThermalActions_CS *Actions;
        RedfishCS_char *Description;
        RedfishThermal_V1_4_3_Fan_CS *Fans;
        RedfishCS_int64 *Fansodata_count;
        RedfishCS_char *Id;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_Link Redundancy;
        RedfishCS_int64 *Redundancyodata_count;
        RedfishResource_Status_CS *Status;
        RedfishThermal_V1_4_3_Temperature_CS *Temperatures;
        RedfishCS_int64 *Temperaturesodata_count;
    } RedfishThermal_V1_4_3_Thermal_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishThermal_V1_4_3_ThermalActions_CS| Structure points to **Actions** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**Fans**|RedfishThermal_V1_4_3_Fan_CS| Structure points to **Fans** property.| No| No
|**Fansodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **Fans@odata.count** property.| No| No
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**Redundancy**|RedfishCS_Link| Structure link list to **Redundancy** property.| No| No
|**Redundancyodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **Redundancy@odata.count** property.| No| No
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
|**Temperatures**|RedfishThermal_V1_4_3_Temperature_CS| Structure points to **Temperatures** property.| No| No
|**Temperaturesodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **Temperatures@odata.count** property.| No| No
## Redfish Thermal V1_4_3 to C Structure Function
    RedfishCS_status
    Json_Thermal_V1_4_3_To_CS (RedfishCS_char *JsonRawText, RedfishThermal_V1_4_3_Thermal_CS **ReturnedCS);

## C Structure to Redfish Thermal V1_4_3 JSON Function
    RedfishCS_status
    CS_To_Thermal_V1_4_3_JSON (RedfishThermal_V1_4_3_Thermal_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish Thermal V1_4_3 C Structure Function
    RedfishCS_status
    DestroyThermal_V1_4_3_CS (RedfishThermal_V1_4_3_Thermal_CS *CSPtr);

