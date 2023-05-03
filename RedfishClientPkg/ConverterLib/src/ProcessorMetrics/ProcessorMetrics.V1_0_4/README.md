# Definition of ProcessorMetrics.V1_0_4 and functions<br><br>

## Actions
    typedef struct _RedfishProcessorMetrics_V1_0_4_Actions_CS {
        RedfishProcessorMetrics_V1_0_4_OemActions_CS *Oem;
    } RedfishProcessorMetrics_V1_0_4_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishProcessorMetrics_V1_0_4_OemActions_CS| Structure points to **Oem** property.| No| No


## CStateResidency
    typedef struct _RedfishProcessorMetrics_V1_0_4_CStateResidency_CS {
        RedfishCS_Link Prop;
    } RedfishProcessorMetrics_V1_0_4_CStateResidency_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## CacheMetrics
    typedef struct _RedfishProcessorMetrics_V1_0_4_CacheMetrics_CS {
        RedfishCS_int64 *CacheMiss;
        RedfishCS_int64 *CacheMissesPerInstruction;
        RedfishCS_int64 *HitRatio;
        RedfishCS_char *Level;
        RedfishCS_int64 *OccupancyBytes;
        RedfishCS_int64 *OccupancyPercent;
    } RedfishProcessorMetrics_V1_0_4_CacheMetrics_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**CacheMiss**|RedfishCS_int64| 64-bit long long interger pointer to **CacheMiss** property.| No| Yes
|**CacheMissesPerInstruction**|RedfishCS_int64| 64-bit long long interger pointer to **CacheMissesPerInstruction** property.| No| Yes
|**HitRatio**|RedfishCS_int64| 64-bit long long interger pointer to **HitRatio** property.| No| Yes
|**Level**|RedfishCS_char| String pointer to **Level** property.| No| Yes
|**OccupancyBytes**|RedfishCS_int64| 64-bit long long interger pointer to **OccupancyBytes** property.| No| Yes
|**OccupancyPercent**|RedfishCS_int64| 64-bit long long interger pointer to **OccupancyPercent** property.| No| Yes


## CoreMetrics
    typedef struct _RedfishProcessorMetrics_V1_0_4_CoreMetrics_CS {
        RedfishProcessorMetrics_V1_0_4tateResidency_Array_CS *CStateResidency;
        RedfishProcessorMetrics_V1_0_4_CacheMetrics_Array_CS *CoreCache;
        RedfishCS_char *CoreId;
        RedfishCS_int64 *IOStallCount;
        RedfishCS_int64 *InstructionsPerCycle;
        RedfishCS_int64 *MemoryStallCount;
        RedfishCS_int64 *UnhaltedCycles;
    } RedfishProcessorMetrics_V1_0_4_CoreMetrics_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**CStateResidency**|RedfishProcessorMetrics_V1_0_4tateResidency_Array_CS| Structure array points to one or more than one **RedfishProcessorMetrics_V1_0_4tateResidency_Array_CS** structures for property **CStateResidency**.| No| No
|**CoreCache**|RedfishProcessorMetrics_V1_0_4_CacheMetrics_Array_CS| Structure array points to one or more than one **RedfishProcessorMetrics_V1_0_4_CacheMetrics_Array_CS** structures for property **CoreCache**.| No| No
|**CoreId**|RedfishCS_char| String pointer to **CoreId** property.| No| Yes
|**IOStallCount**|RedfishCS_int64| 64-bit long long interger pointer to **IOStallCount** property.| No| Yes
|**InstructionsPerCycle**|RedfishCS_int64| 64-bit long long interger pointer to **InstructionsPerCycle** property.| No| Yes
|**MemoryStallCount**|RedfishCS_int64| 64-bit long long interger pointer to **MemoryStallCount** property.| No| Yes
|**UnhaltedCycles**|RedfishCS_int64| 64-bit long long interger pointer to **UnhaltedCycles** property.| No| Yes


## OemActions
    typedef struct _RedfishProcessorMetrics_V1_0_4_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishProcessorMetrics_V1_0_4_OemActions_CS;

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


## RedfishProcessorMetrics_V1_0_4tateResidency_Array_CS
    typedef struct _RedfishProcessorMetrics_V1_0_4tateResidency_Array_CS  {
        RedfishCS_Link *Next;
        RedfishProcessorMetrics_V1_0_4_CStateResidency_CS *ArrayValue;
    } RedfishProcessorMetrics_V1_0_4tateResidency_Array_CS;



## RedfishProcessorMetrics_V1_0_4_CacheMetrics_Array_CS
    typedef struct _RedfishProcessorMetrics_V1_0_4_CacheMetrics_Array_CS  {
        RedfishCS_Link *Next;
        RedfishProcessorMetrics_V1_0_4_CacheMetrics_CS *ArrayValue;
    } RedfishProcessorMetrics_V1_0_4_CacheMetrics_Array_CS;



## ProcessorMetrics
    typedef struct _RedfishProcessorMetrics_V1_0_4_ProcessorMetrics_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishProcessorMetrics_V1_0_4_Actions_CS *Actions;
        RedfishCS_int64 *AverageFrequencyMHz;
        RedfishCS_int64 *BandwidthPercent;
        RedfishProcessorMetrics_V1_0_4_CacheMetrics_CS *Cache;
        RedfishCS_int64 *ConsumedPowerWatt;
        RedfishProcessorMetrics_V1_0_4_CoreMetrics_CS *CoreMetrics;
        RedfishCS_char *Description;
        RedfishCS_int64 *FrequencyRatio;
        RedfishCS_char *Id;
        RedfishCS_int64 *KernelPercent;
        RedfishCS_int64 *LocalMemoryBandwidthBytes;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_int64 *RemoteMemoryBandwidthBytes;
        RedfishCS_int64 *TemperatureCelsius;
        RedfishCS_int64 *ThrottlingCelsius;
        RedfishCS_int64 *UserPercent;
    } RedfishProcessorMetrics_V1_0_4_ProcessorMetrics_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishProcessorMetrics_V1_0_4_Actions_CS| Structure points to **Actions** property.| No| No
|**AverageFrequencyMHz**|RedfishCS_int64| 64-bit long long interger pointer to **AverageFrequencyMHz** property.| No| Yes
|**BandwidthPercent**|RedfishCS_int64| 64-bit long long interger pointer to **BandwidthPercent** property.| No| Yes
|**Cache**|RedfishProcessorMetrics_V1_0_4_CacheMetrics_CS| Structure points to **Cache** property.| No| No
|**ConsumedPowerWatt**|RedfishCS_int64| 64-bit long long interger pointer to **ConsumedPowerWatt** property.| No| Yes
|**CoreMetrics**|RedfishProcessorMetrics_V1_0_4_CoreMetrics_CS| Structure points to **CoreMetrics** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**FrequencyRatio**|RedfishCS_int64| 64-bit long long interger pointer to **FrequencyRatio** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**KernelPercent**|RedfishCS_int64| 64-bit long long interger pointer to **KernelPercent** property.| No| Yes
|**LocalMemoryBandwidthBytes**|RedfishCS_int64| 64-bit long long interger pointer to **LocalMemoryBandwidthBytes** property.| No| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**RemoteMemoryBandwidthBytes**|RedfishCS_int64| 64-bit long long interger pointer to **RemoteMemoryBandwidthBytes** property.| No| Yes
|**TemperatureCelsius**|RedfishCS_int64| 64-bit long long interger pointer to **TemperatureCelsius** property.| No| Yes
|**ThrottlingCelsius**|RedfishCS_int64| 64-bit long long interger pointer to **ThrottlingCelsius** property.| No| Yes
|**UserPercent**|RedfishCS_int64| 64-bit long long interger pointer to **UserPercent** property.| No| Yes
## Redfish ProcessorMetrics V1_0_4 to C Structure Function
    RedfishCS_status
    Json_ProcessorMetrics_V1_0_4_To_CS (RedfishCS_char *JsonRawText, RedfishProcessorMetrics_V1_0_4_ProcessorMetrics_CS **ReturnedCS);

## C Structure to Redfish ProcessorMetrics V1_0_4 JSON Function
    RedfishCS_status
    CS_To_ProcessorMetrics_V1_0_4_JSON (RedfishProcessorMetrics_V1_0_4_ProcessorMetrics_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish ProcessorMetrics V1_0_4 C Structure Function
    RedfishCS_status
    DestroyProcessorMetrics_V1_0_4_CS (RedfishProcessorMetrics_V1_0_4_ProcessorMetrics_CS *CSPtr);

