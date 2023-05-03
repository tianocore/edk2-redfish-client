# Definition of MetricReport.V1_0_4 and functions<br><br>

## Actions
    typedef struct _RedfishMetricReport_V1_0_4_Actions_CS {
        RedfishMetricReport_V1_0_4_OemActions_CS *Oem;
    } RedfishMetricReport_V1_0_4_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishMetricReport_V1_0_4_OemActions_CS| Structure points to **Oem** property.| No| No


## MetricValue
    typedef struct _RedfishMetricReport_V1_0_4_MetricValue_CS {
        RedfishCS_Link MetricDefinition;
        RedfishCS_char *MetricId;
        RedfishCS_char *MetricProperty;
        RedfishCS_char *MetricValue;
        RedfishCS_char *Timestamp;
    } RedfishMetricReport_V1_0_4_MetricValue_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**MetricDefinition**|RedfishCS_Link| Structure link list to **MetricDefinition** property.| No| Yes
|**MetricId**|RedfishCS_char| String pointer to **MetricId** property.| No| Yes
|**MetricProperty**|RedfishCS_char| String pointer to **MetricProperty** property.| No| Yes
|**MetricValue**|RedfishCS_char| String pointer to **MetricValue** property.| No| Yes
|**Timestamp**|RedfishCS_char| String pointer to **Timestamp** property.| No| Yes


## OemActions
    typedef struct _RedfishMetricReport_V1_0_4_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishMetricReport_V1_0_4_OemActions_CS;

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


## MetricReport
    typedef struct _RedfishMetricReport_V1_0_4_MetricReport_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishMetricReport_V1_0_4_Actions_CS *Actions;
        RedfishCS_char *Description;
        RedfishCS_char *Id;
        RedfishCS_Link MetricReportDefinition;
        RedfishMetricReport_V1_0_4_MetricValue_CS *MetricValues;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_char *ReportSequence;
    } RedfishMetricReport_V1_0_4_MetricReport_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishMetricReport_V1_0_4_Actions_CS| Structure points to **Actions** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**MetricReportDefinition**|RedfishCS_Link| Structure link list to **MetricReportDefinition** property.| No| Yes
|**MetricValues**|RedfishMetricReport_V1_0_4_MetricValue_CS| Structure points to **MetricValues** property.| No| No
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**ReportSequence**|RedfishCS_char| String pointer to **ReportSequence** property.| No| Yes
## Redfish MetricReport V1_0_4 to C Structure Function
    RedfishCS_status
    Json_MetricReport_V1_0_4_To_CS (RedfishCS_char *JsonRawText, RedfishMetricReport_V1_0_4_MetricReport_CS **ReturnedCS);

## C Structure to Redfish MetricReport V1_0_4 JSON Function
    RedfishCS_status
    CS_To_MetricReport_V1_0_4_JSON (RedfishMetricReport_V1_0_4_MetricReport_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish MetricReport V1_0_4 C Structure Function
    RedfishCS_status
    DestroyMetricReport_V1_0_4_CS (RedfishMetricReport_V1_0_4_MetricReport_CS *CSPtr);

