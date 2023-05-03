# Definition of PowerDistributionMetrics.V1_0_0 and functions<br><br>

## Actions
    typedef struct _RedfishPowerDistributionMetrics_V1_0_0_Actions_CS {
        RedfishPowerDistributionMetrics_V1_0_0_ResetMetrics_CS *PowerDistributionMetrics_ResetMetrics;
        RedfishPowerDistributionMetrics_V1_0_0_OemActions_CS *Oem;
    } RedfishPowerDistributionMetrics_V1_0_0_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**PowerDistributionMetrics_ResetMetrics**|RedfishPowerDistributionMetrics_V1_0_0_ResetMetrics_CS| Structure points to **#PowerDistributionMetrics.ResetMetrics** property.| No| No
|**Oem**|RedfishPowerDistributionMetrics_V1_0_0_OemActions_CS| Structure points to **Oem** property.| No| No


## OemActions
    typedef struct _RedfishPowerDistributionMetrics_V1_0_0_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishPowerDistributionMetrics_V1_0_0_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## ResetMetrics
    typedef struct _RedfishPowerDistributionMetrics_V1_0_0_ResetMetrics_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishPowerDistributionMetrics_V1_0_0_ResetMetrics_CS;

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


## PowerDistributionMetrics
    typedef struct _RedfishPowerDistributionMetrics_V1_0_0_PowerDistributionMetrics_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishPowerDistributionMetrics_V1_0_0_Actions_CS *Actions;
        RedfishCS_char *Description;
        RedfishCS_Link EnergykWh;
        RedfishCS_char *Id;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_Link PowerWatts;
    } RedfishPowerDistributionMetrics_V1_0_0_PowerDistributionMetrics_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishPowerDistributionMetrics_V1_0_0_Actions_CS| Structure points to **Actions** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**EnergykWh**|RedfishCS_Link| Structure link list to **EnergykWh** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**PowerWatts**|RedfishCS_Link| Structure link list to **PowerWatts** property.| No| Yes
## Redfish PowerDistributionMetrics V1_0_0 to C Structure Function
    RedfishCS_status
    Json_PowerDistributionMetrics_V1_0_0_To_CS (RedfishCS_char *JsonRawText, RedfishPowerDistributionMetrics_V1_0_0_PowerDistributionMetrics_CS **ReturnedCS);

## C Structure to Redfish PowerDistributionMetrics V1_0_0 JSON Function
    RedfishCS_status
    CS_To_PowerDistributionMetrics_V1_0_0_JSON (RedfishPowerDistributionMetrics_V1_0_0_PowerDistributionMetrics_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish PowerDistributionMetrics V1_0_0 C Structure Function
    RedfishCS_status
    DestroyPowerDistributionMetrics_V1_0_0_CS (RedfishPowerDistributionMetrics_V1_0_0_PowerDistributionMetrics_CS *CSPtr);

