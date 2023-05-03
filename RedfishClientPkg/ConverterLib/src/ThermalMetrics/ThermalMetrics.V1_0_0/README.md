# Definition of ThermalMetrics.V1_0_0 and functions<br><br>

## Oem
    typedef struct _RedfishResource_Oem_CS {
        RedfishCS_Link Prop;
    } RedfishResource_Oem_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## Actions
    typedef struct _RedfishThermalMetrics_V1_0_0_Actions_CS {
        RedfishThermalMetrics_V1_0_0_ResetMetrics_CS *ThermalMetrics_ResetMetrics;
        RedfishThermalMetrics_V1_0_0_OemActions_CS *Oem;
    } RedfishThermalMetrics_V1_0_0_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**ThermalMetrics_ResetMetrics**|RedfishThermalMetrics_V1_0_0_ResetMetrics_CS| Structure points to **#ThermalMetrics.ResetMetrics** property.| No| No
|**Oem**|RedfishThermalMetrics_V1_0_0_OemActions_CS| Structure points to **Oem** property.| No| No


## OemActions
    typedef struct _RedfishThermalMetrics_V1_0_0_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishThermalMetrics_V1_0_0_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## ResetMetrics
    typedef struct _RedfishThermalMetrics_V1_0_0_ResetMetrics_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishThermalMetrics_V1_0_0_ResetMetrics_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**target**|RedfishCS_char| String pointer to **target** property.| No| No
|**title**|RedfishCS_char| String pointer to **title** property.| No| No


## TemperatureSummary
    typedef struct _RedfishThermalMetrics_V1_0_0_TemperatureSummary_CS {
        RedfishCS_Link Ambient;
        RedfishCS_Link Exhaust;
        RedfishCS_Link Intake;
        RedfishCS_Link Internal;
    } RedfishThermalMetrics_V1_0_0_TemperatureSummary_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Ambient**|RedfishCS_Link| Structure link list to **Ambient** property.| No| Yes
|**Exhaust**|RedfishCS_Link| Structure link list to **Exhaust** property.| No| Yes
|**Intake**|RedfishCS_Link| Structure link list to **Intake** property.| No| Yes
|**Internal**|RedfishCS_Link| Structure link list to **Internal** property.| No| Yes


## ThermalMetrics
    typedef struct _RedfishThermalMetrics_V1_0_0_ThermalMetrics_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishThermalMetrics_V1_0_0_Actions_CS *Actions;
        RedfishCS_char *Description;
        RedfishCS_char *Id;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_Link TemperatureReadingsCelsius;
        RedfishCS_int64 *TemperatureReadingsCelsiusodata_count;
        RedfishThermalMetrics_V1_0_0_TemperatureSummary_CS *TemperatureSummaryCelsius;
    } RedfishThermalMetrics_V1_0_0_ThermalMetrics_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishThermalMetrics_V1_0_0_Actions_CS| Structure points to **Actions** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**TemperatureReadingsCelsius**|RedfishCS_Link| Structure link list to **TemperatureReadingsCelsius** property.| No| Yes
|**TemperatureReadingsCelsiusodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **TemperatureReadingsCelsius@odata.count** property.| No| No
|**TemperatureSummaryCelsius**|RedfishThermalMetrics_V1_0_0_TemperatureSummary_CS| Structure points to **TemperatureSummaryCelsius** property.| No| No
## Redfish ThermalMetrics V1_0_0 to C Structure Function
    RedfishCS_status
    Json_ThermalMetrics_V1_0_0_To_CS (RedfishCS_char *JsonRawText, RedfishThermalMetrics_V1_0_0_ThermalMetrics_CS **ReturnedCS);

## C Structure to Redfish ThermalMetrics V1_0_0 JSON Function
    RedfishCS_status
    CS_To_ThermalMetrics_V1_0_0_JSON (RedfishThermalMetrics_V1_0_0_ThermalMetrics_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish ThermalMetrics V1_0_0 C Structure Function
    RedfishCS_status
    DestroyThermalMetrics_V1_0_0_CS (RedfishThermalMetrics_V1_0_0_ThermalMetrics_CS *CSPtr);

