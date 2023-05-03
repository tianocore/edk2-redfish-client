# Definition of MetricDefinition.V1_0_0 and functions<br><br>

## Actions
    typedef struct _RedfishMetricDefinition_V1_0_0_Actions_CS {
        RedfishMetricDefinition_V1_0_0_OemActions_CS *Oem;
    } RedfishMetricDefinition_V1_0_0_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishMetricDefinition_V1_0_0_OemActions_CS| Structure points to **Oem** property.| No| No


## CalculationParamsType
    typedef struct _RedfishMetricDefinition_V1_0_0_CalculationParamsType_CS {
        RedfishCS_char *ResultMetric;
        RedfishCS_char *SourceMetric;
    } RedfishMetricDefinition_V1_0_0_CalculationParamsType_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**ResultMetric**|RedfishCS_char| String pointer to **ResultMetric** property.| No| Yes
|**SourceMetric**|RedfishCS_char| String pointer to **SourceMetric** property.| No| Yes


## OemActions
    typedef struct _RedfishMetricDefinition_V1_0_0_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishMetricDefinition_V1_0_0_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## Wildcard
    typedef struct _RedfishMetricDefinition_V1_0_0_Wildcard_CS {
        RedfishCS_char *Name;
        RedfishCS_char_Array *Values;
    } RedfishMetricDefinition_V1_0_0_Wildcard_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Values**|RedfishCS_char_Array| Structure array points to one or more than one **RedfishCS_char *** for property **Values**.| No| Yes


## Oem
    typedef struct _RedfishResource_Oem_CS {
        RedfishCS_Link Prop;
    } RedfishResource_Oem_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## RedfishCS_char_Array
    typedef struct _RedfishCS_char_Array  {
        RedfishCS_Link *Next;
        RedfishCS_char *ArrayValue;
    } RedfishCS_char_Array;



## MetricDefinition
    typedef struct _RedfishMetricDefinition_V1_0_0_MetricDefinition_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishCS_int64 *Accuracy;
        RedfishMetricDefinition_V1_0_0_Actions_CS *Actions;
        RedfishCS_char *Calculable;
        RedfishCS_char *CalculationAlgorithm;
        RedfishMetricDefinition_V1_0_0_CalculationParamsType_CS *CalculationParameters;
        RedfishCS_char *CalculationTimeInterval;
        RedfishCS_int64 *Calibration;
        RedfishCS_char *Description;
        RedfishCS_char *DiscreteValues;
        RedfishCS_char *Id;
        RedfishCS_char *Implementation;
        RedfishCS_bool *IsLinear;
        RedfishCS_int64 *MaxReadingRange;
        RedfishCS_char *MetricDataType;
        RedfishCS_char *MetricProperties;
        RedfishCS_char *MetricType;
        RedfishCS_int64 *MinReadingRange;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_char *PhysicalContext;
        RedfishCS_int64 *Precision;
        RedfishCS_char *SensingInterval;
        RedfishCS_char *TimestampAccuracy;
        RedfishCS_char *Units;
        RedfishMetricDefinition_V1_0_0_Wildcard_CS *Wildcards;
    } RedfishMetricDefinition_V1_0_0_MetricDefinition_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Accuracy**|RedfishCS_int64| 64-bit long long interger pointer to **Accuracy** property.| No| Yes
|**Actions**|RedfishMetricDefinition_V1_0_0_Actions_CS| Structure points to **Actions** property.| No| No
|**Calculable**|RedfishCS_char| String pointer to **Calculable** property.| No| No
|**CalculationAlgorithm**|RedfishCS_char| String pointer to **CalculationAlgorithm** property.| No| Yes
|**CalculationParameters**|RedfishMetricDefinition_V1_0_0_CalculationParamsType_CS| Structure points to **CalculationParameters** property.| No| No
|**CalculationTimeInterval**|RedfishCS_char| String pointer to **CalculationTimeInterval** property.| No| No
|**Calibration**|RedfishCS_int64| 64-bit long long interger pointer to **Calibration** property.| No| Yes
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**DiscreteValues**|RedfishCS_char| String pointer to **DiscreteValues** property.| No| No
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**Implementation**|RedfishCS_char| String pointer to **Implementation** property.| No| Yes
|**IsLinear**|RedfishCS_bool| Boolean pointer to **IsLinear** property.| No| No
|**MaxReadingRange**|RedfishCS_int64| 64-bit long long interger pointer to **MaxReadingRange** property.| No| Yes
|**MetricDataType**|RedfishCS_char| String pointer to **MetricDataType** property.| No| No
|**MetricProperties**|RedfishCS_char| String pointer to **MetricProperties** property.| No| No
|**MetricType**|RedfishCS_char| String pointer to **MetricType** property.| No| No
|**MinReadingRange**|RedfishCS_int64| 64-bit long long interger pointer to **MinReadingRange** property.| No| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**PhysicalContext**|RedfishCS_char| String pointer to **PhysicalContext** property.| No| Yes
|**Precision**|RedfishCS_int64| 64-bit long long interger pointer to **Precision** property.| No| Yes
|**SensingInterval**|RedfishCS_char| String pointer to **SensingInterval** property.| No| No
|**TimestampAccuracy**|RedfishCS_char| String pointer to **TimestampAccuracy** property.| No| Yes
|**Units**|RedfishCS_char| String pointer to **Units** property.| No| No
|**Wildcards**|RedfishMetricDefinition_V1_0_0_Wildcard_CS| Structure points to **Wildcards** property.| No| No
## Redfish MetricDefinition V1_0_0 to C Structure Function
    RedfishCS_status
    Json_MetricDefinition_V1_0_0_To_CS (RedfishCS_char *JsonRawText, RedfishMetricDefinition_V1_0_0_MetricDefinition_CS **ReturnedCS);

## C Structure to Redfish MetricDefinition V1_0_0 JSON Function
    RedfishCS_status
    CS_To_MetricDefinition_V1_0_0_JSON (RedfishMetricDefinition_V1_0_0_MetricDefinition_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish MetricDefinition V1_0_0 C Structure Function
    RedfishCS_status
    DestroyMetricDefinition_V1_0_0_CS (RedfishMetricDefinition_V1_0_0_MetricDefinition_CS *CSPtr);

