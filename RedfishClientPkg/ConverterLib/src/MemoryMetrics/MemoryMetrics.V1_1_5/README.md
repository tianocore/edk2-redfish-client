# Definition of MemoryMetrics.V1_1_5 and functions<br><br>

## Actions
    typedef struct _RedfishMemoryMetrics_V1_1_5_Actions_CS {
        RedfishMemoryMetrics_V1_1_5_ClearCurrentPeriod_CS *MemoryMetrics_ClearCurrentPeriod;
        RedfishMemoryMetrics_V1_1_5_OemActions_CS *Oem;
    } RedfishMemoryMetrics_V1_1_5_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**MemoryMetrics_ClearCurrentPeriod**|RedfishMemoryMetrics_V1_1_5_ClearCurrentPeriod_CS| Structure points to **#MemoryMetrics.ClearCurrentPeriod** property.| No| No
|**Oem**|RedfishMemoryMetrics_V1_1_5_OemActions_CS| Structure points to **Oem** property.| No| No


## AlarmTrips
    typedef struct _RedfishMemoryMetrics_V1_1_5_AlarmTrips_CS {
        RedfishCS_bool *AddressParityError;
        RedfishCS_bool *CorrectableECCError;
        RedfishCS_bool *SpareBlock;
        RedfishCS_bool *Temperature;
        RedfishCS_bool *UncorrectableECCError;
    } RedfishMemoryMetrics_V1_1_5_AlarmTrips_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**AddressParityError**|RedfishCS_bool| Boolean pointer to **AddressParityError** property.| No| Yes
|**CorrectableECCError**|RedfishCS_bool| Boolean pointer to **CorrectableECCError** property.| No| Yes
|**SpareBlock**|RedfishCS_bool| Boolean pointer to **SpareBlock** property.| No| Yes
|**Temperature**|RedfishCS_bool| Boolean pointer to **Temperature** property.| No| Yes
|**UncorrectableECCError**|RedfishCS_bool| Boolean pointer to **UncorrectableECCError** property.| No| Yes


## ClearCurrentPeriod
    typedef struct _RedfishMemoryMetrics_V1_1_5_ClearCurrentPeriod_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishMemoryMetrics_V1_1_5_ClearCurrentPeriod_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**target**|RedfishCS_char| String pointer to **target** property.| No| No
|**title**|RedfishCS_char| String pointer to **title** property.| No| No


## CurrentPeriod
    typedef struct _RedfishMemoryMetrics_V1_1_5_CurrentPeriod_CS {
        RedfishCS_int64 *BlocksRead;
        RedfishCS_int64 *BlocksWritten;
    } RedfishMemoryMetrics_V1_1_5_CurrentPeriod_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**BlocksRead**|RedfishCS_int64| 64-bit long long interger pointer to **BlocksRead** property.| No| Yes
|**BlocksWritten**|RedfishCS_int64| 64-bit long long interger pointer to **BlocksWritten** property.| No| Yes


## HealthData
    typedef struct _RedfishMemoryMetrics_V1_1_5_HealthData_CS {
        RedfishMemoryMetrics_V1_1_5_AlarmTrips_CS *AlarmTrips;
        RedfishCS_bool *DataLossDetected;
        RedfishCS_bool *LastShutdownSuccess;
        RedfishCS_bool *PerformanceDegraded;
        RedfishCS_int64 *PredictedMediaLifeLeftPercent;
        RedfishCS_int64 *RemainingSpareBlockPercentage;
    } RedfishMemoryMetrics_V1_1_5_HealthData_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**AlarmTrips**|RedfishMemoryMetrics_V1_1_5_AlarmTrips_CS| Structure points to **AlarmTrips** property.| No| No
|**DataLossDetected**|RedfishCS_bool| Boolean pointer to **DataLossDetected** property.| No| Yes
|**LastShutdownSuccess**|RedfishCS_bool| Boolean pointer to **LastShutdownSuccess** property.| No| Yes
|**PerformanceDegraded**|RedfishCS_bool| Boolean pointer to **PerformanceDegraded** property.| No| Yes
|**PredictedMediaLifeLeftPercent**|RedfishCS_int64| 64-bit long long interger pointer to **PredictedMediaLifeLeftPercent** property.| No| Yes
|**RemainingSpareBlockPercentage**|RedfishCS_int64| 64-bit long long interger pointer to **RemainingSpareBlockPercentage** property.| No| Yes


## LifeTime
    typedef struct _RedfishMemoryMetrics_V1_1_5_LifeTime_CS {
        RedfishCS_int64 *BlocksRead;
        RedfishCS_int64 *BlocksWritten;
    } RedfishMemoryMetrics_V1_1_5_LifeTime_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**BlocksRead**|RedfishCS_int64| 64-bit long long interger pointer to **BlocksRead** property.| No| Yes
|**BlocksWritten**|RedfishCS_int64| 64-bit long long interger pointer to **BlocksWritten** property.| No| Yes


## OemActions
    typedef struct _RedfishMemoryMetrics_V1_1_5_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishMemoryMetrics_V1_1_5_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## Oem
    typedef struct _RedfishResource_Oem_CS {
        RedfishCS_Link Prop;
    } RedfishResource_Oem_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## MemoryMetrics
    typedef struct _RedfishMemoryMetrics_V1_1_5_MemoryMetrics_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishMemoryMetrics_V1_1_5_Actions_CS *Actions;
        RedfishCS_int64 *BlockSizeBytes;
        RedfishMemoryMetrics_V1_1_5_CurrentPeriod_CS *CurrentPeriod;
        RedfishCS_char *Description;
        RedfishMemoryMetrics_V1_1_5_HealthData_CS *HealthData;
        RedfishCS_char *Id;
        RedfishMemoryMetrics_V1_1_5_LifeTime_CS *LifeTime;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
    } RedfishMemoryMetrics_V1_1_5_MemoryMetrics_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishMemoryMetrics_V1_1_5_Actions_CS| Structure points to **Actions** property.| No| No
|**BlockSizeBytes**|RedfishCS_int64| 64-bit long long interger pointer to **BlockSizeBytes** property.| No| Yes
|**CurrentPeriod**|RedfishMemoryMetrics_V1_1_5_CurrentPeriod_CS| Structure points to **CurrentPeriod** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**HealthData**|RedfishMemoryMetrics_V1_1_5_HealthData_CS| Structure points to **HealthData** property.| No| No
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**LifeTime**|RedfishMemoryMetrics_V1_1_5_LifeTime_CS| Structure points to **LifeTime** property.| No| No
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
## Redfish MemoryMetrics V1_1_5 to C Structure Function
    RedfishCS_status
    Json_MemoryMetrics_V1_1_5_To_CS (RedfishCS_char *JsonRawText, RedfishMemoryMetrics_V1_1_5_MemoryMetrics_CS **ReturnedCS);

## C Structure to Redfish MemoryMetrics V1_1_5 JSON Function
    RedfishCS_status
    CS_To_MemoryMetrics_V1_1_5_JSON (RedfishMemoryMetrics_V1_1_5_MemoryMetrics_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish MemoryMetrics V1_1_5 C Structure Function
    RedfishCS_status
    DestroyMemoryMetrics_V1_1_5_CS (RedfishMemoryMetrics_V1_1_5_MemoryMetrics_CS *CSPtr);

