# Definition of EnvironmentMetrics.V1_0_0 and functions<br><br>

## Actions
    typedef struct _RedfishEnvironmentMetrics_V1_0_0_Actions_CS {
        RedfishEnvironmentMetrics_V1_0_0_ResetMetrics_CS *EnvironmentMetrics_ResetMetrics;
        RedfishEnvironmentMetrics_V1_0_0_OemActions_CS *Oem;
    } RedfishEnvironmentMetrics_V1_0_0_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**EnvironmentMetrics_ResetMetrics**|RedfishEnvironmentMetrics_V1_0_0_ResetMetrics_CS| Structure points to **#EnvironmentMetrics.ResetMetrics** property.| No| No
|**Oem**|RedfishEnvironmentMetrics_V1_0_0_OemActions_CS| Structure points to **Oem** property.| No| No


## OemActions
    typedef struct _RedfishEnvironmentMetrics_V1_0_0_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishEnvironmentMetrics_V1_0_0_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## ResetMetrics
    typedef struct _RedfishEnvironmentMetrics_V1_0_0_ResetMetrics_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishEnvironmentMetrics_V1_0_0_ResetMetrics_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**target**|RedfishCS_char| String pointer to **target** property.| No| No
|**title**|RedfishCS_char| String pointer to **title** property.| No| No


## Oem
    typedef struct _RedfishResource_Oem_CS {
        RedfishCS_Link Prop;
    } RedfishResource_Oem_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## EnvironmentMetrics
    typedef struct _RedfishEnvironmentMetrics_V1_0_0_EnvironmentMetrics_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishEnvironmentMetrics_V1_0_0_Actions_CS *Actions;
        RedfishCS_char *Description;
        RedfishCS_Link EnergykWh;
        RedfishCS_Link FanSpeedsPercent;
        RedfishCS_int64 *FanSpeedsPercentodata_count;
        RedfishCS_Link HumidityPercent;
        RedfishCS_char *Id;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_Link PowerWatts;
        RedfishCS_Link TemperatureCelsius;
    } RedfishEnvironmentMetrics_V1_0_0_EnvironmentMetrics_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishEnvironmentMetrics_V1_0_0_Actions_CS| Structure points to **Actions** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**EnergykWh**|RedfishCS_Link| Structure link list to **EnergykWh** property.| No| Yes
|**FanSpeedsPercent**|RedfishCS_Link| Structure link list to **FanSpeedsPercent** property.| No| Yes
|**FanSpeedsPercentodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **FanSpeedsPercent@odata.count** property.| No| No
|**HumidityPercent**|RedfishCS_Link| Structure link list to **HumidityPercent** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**PowerWatts**|RedfishCS_Link| Structure link list to **PowerWatts** property.| No| Yes
|**TemperatureCelsius**|RedfishCS_Link| Structure link list to **TemperatureCelsius** property.| No| Yes
## Redfish EnvironmentMetrics V1_0_0 to C Structure Function
    RedfishCS_status
    Json_EnvironmentMetrics_V1_0_0_To_CS (RedfishCS_char *JsonRawText, RedfishEnvironmentMetrics_V1_0_0_EnvironmentMetrics_CS **ReturnedCS);

## C Structure to Redfish EnvironmentMetrics V1_0_0 JSON Function
    RedfishCS_status
    CS_To_EnvironmentMetrics_V1_0_0_JSON (RedfishEnvironmentMetrics_V1_0_0_EnvironmentMetrics_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish EnvironmentMetrics V1_0_0 C Structure Function
    RedfishCS_status
    DestroyEnvironmentMetrics_V1_0_0_CS (RedfishEnvironmentMetrics_V1_0_0_EnvironmentMetrics_CS *CSPtr);

