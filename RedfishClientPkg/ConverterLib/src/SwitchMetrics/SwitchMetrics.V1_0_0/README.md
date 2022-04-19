# Definition of SwitchMetrics.V1_0_0 and functions<br><br>

## Oem
    typedef struct _RedfishResource_Oem_CS {
        RedfishCS_Link Prop;
    } RedfishResource_Oem_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## Actions
    typedef struct _RedfishSwitchMetrics_V1_0_0_Actions_CS {
        RedfishSwitchMetrics_V1_0_0_ClearCurrentPeriod_CS *SwitchMetrics_ClearCurrentPeriod;
        RedfishSwitchMetrics_V1_0_0_OemActions_CS *Oem;
    } RedfishSwitchMetrics_V1_0_0_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**SwitchMetrics_ClearCurrentPeriod**|RedfishSwitchMetrics_V1_0_0_ClearCurrentPeriod_CS| Structure points to **#SwitchMetrics.ClearCurrentPeriod** property.| No| No
|**Oem**|RedfishSwitchMetrics_V1_0_0_OemActions_CS| Structure points to **Oem** property.| No| No


## ClearCurrentPeriod
    typedef struct _RedfishSwitchMetrics_V1_0_0_ClearCurrentPeriod_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishSwitchMetrics_V1_0_0_ClearCurrentPeriod_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**target**|RedfishCS_char| String pointer to **target** property.| No| No
|**title**|RedfishCS_char| String pointer to **title** property.| No| No


## CurrentPeriod
    typedef struct _RedfishSwitchMetrics_V1_0_0_CurrentPeriod_CS {
        RedfishCS_int64 *CorrectableECCErrorCount;
        RedfishCS_int64 *UncorrectableECCErrorCount;
    } RedfishSwitchMetrics_V1_0_0_CurrentPeriod_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**CorrectableECCErrorCount**|RedfishCS_int64| 64-bit long long interger pointer to **CorrectableECCErrorCount** property.| No| Yes
|**UncorrectableECCErrorCount**|RedfishCS_int64| 64-bit long long interger pointer to **UncorrectableECCErrorCount** property.| No| Yes


## InternalMemoryMetrics
    typedef struct _RedfishSwitchMetrics_V1_0_0_InternalMemoryMetrics_CS {
        RedfishSwitchMetrics_V1_0_0_CurrentPeriod_CS *CurrentPeriod;
        RedfishSwitchMetrics_V1_0_0_LifeTime_CS *LifeTime;
    } RedfishSwitchMetrics_V1_0_0_InternalMemoryMetrics_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**CurrentPeriod**|RedfishSwitchMetrics_V1_0_0_CurrentPeriod_CS| Structure points to **CurrentPeriod** property.| No| No
|**LifeTime**|RedfishSwitchMetrics_V1_0_0_LifeTime_CS| Structure points to **LifeTime** property.| No| No


## LifeTime
    typedef struct _RedfishSwitchMetrics_V1_0_0_LifeTime_CS {
        RedfishCS_int64 *CorrectableECCErrorCount;
        RedfishCS_int64 *UncorrectableECCErrorCount;
    } RedfishSwitchMetrics_V1_0_0_LifeTime_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**CorrectableECCErrorCount**|RedfishCS_int64| 64-bit long long interger pointer to **CorrectableECCErrorCount** property.| No| Yes
|**UncorrectableECCErrorCount**|RedfishCS_int64| 64-bit long long interger pointer to **UncorrectableECCErrorCount** property.| No| Yes


## OemActions
    typedef struct _RedfishSwitchMetrics_V1_0_0_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishSwitchMetrics_V1_0_0_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## SwitchMetrics
    typedef struct _RedfishSwitchMetrics_V1_0_0_SwitchMetrics_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishSwitchMetrics_V1_0_0_Actions_CS *Actions;
        RedfishCS_char *Description;
        RedfishCS_char *Id;
        RedfishSwitchMetrics_V1_0_0_InternalMemoryMetrics_CS *InternalMemoryMetrics;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_Link PCIeErrors;
    } RedfishSwitchMetrics_V1_0_0_SwitchMetrics_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishSwitchMetrics_V1_0_0_Actions_CS| Structure points to **Actions** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**InternalMemoryMetrics**|RedfishSwitchMetrics_V1_0_0_InternalMemoryMetrics_CS| Structure points to **InternalMemoryMetrics** property.| No| No
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**PCIeErrors**|RedfishCS_Link| Structure link list to **PCIeErrors** property.| No| No
## Redfish SwitchMetrics V1_0_0 to C Structure Function
    RedfishCS_status
    Json_SwitchMetrics_V1_0_0_To_CS (RedfishCS_char *JsonRawText, RedfishSwitchMetrics_V1_0_0_SwitchMetrics_CS **ReturnedCS);

## C Structure to Redfish SwitchMetrics V1_0_0 JSON Function
    RedfishCS_status
    CS_To_SwitchMetrics_V1_0_0_JSON (RedfishSwitchMetrics_V1_0_0_SwitchMetrics_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish SwitchMetrics V1_0_0 C Structure Function
    RedfishCS_status
    DestroySwitchMetrics_V1_0_0_CS (RedfishSwitchMetrics_V1_0_0_SwitchMetrics_CS *CSPtr);

