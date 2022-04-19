# Definition of NetworkAdapterMetrics.V1_0_0 and functions<br><br>

## Actions
    typedef struct _RedfishNetworkAdapterMetrics_V1_0_0_Actions_CS {
        RedfishNetworkAdapterMetrics_V1_0_0_OemActions_CS *Oem;
    } RedfishNetworkAdapterMetrics_V1_0_0_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishNetworkAdapterMetrics_V1_0_0_OemActions_CS| Structure points to **Oem** property.| No| No


## OemActions
    typedef struct _RedfishNetworkAdapterMetrics_V1_0_0_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishNetworkAdapterMetrics_V1_0_0_OemActions_CS;

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


## NetworkAdapterMetrics
    typedef struct _RedfishNetworkAdapterMetrics_V1_0_0_NetworkAdapterMetrics_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishNetworkAdapterMetrics_V1_0_0_Actions_CS *Actions;
        RedfishCS_int64 *CPUCorePercent;
        RedfishCS_char *Description;
        RedfishCS_int64 *HostBusRXPercent;
        RedfishCS_int64 *HostBusTXPercent;
        RedfishCS_char *Id;
        RedfishCS_int64 *NCSIRXBytes;
        RedfishCS_int64 *NCSIRXFrames;
        RedfishCS_int64 *NCSITXBytes;
        RedfishCS_int64 *NCSITXFrames;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_int64 *RXBytes;
        RedfishCS_int64 *RXMulticastFrames;
        RedfishCS_int64 *RXUnicastFrames;
        RedfishCS_int64 *TXBytes;
        RedfishCS_int64 *TXMulticastFrames;
        RedfishCS_int64 *TXUnicastFrames;
    } RedfishNetworkAdapterMetrics_V1_0_0_NetworkAdapterMetrics_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishNetworkAdapterMetrics_V1_0_0_Actions_CS| Structure points to **Actions** property.| No| No
|**CPUCorePercent**|RedfishCS_int64| 64-bit long long interger pointer to **CPUCorePercent** property.| No| Yes
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**HostBusRXPercent**|RedfishCS_int64| 64-bit long long interger pointer to **HostBusRXPercent** property.| No| Yes
|**HostBusTXPercent**|RedfishCS_int64| 64-bit long long interger pointer to **HostBusTXPercent** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**NCSIRXBytes**|RedfishCS_int64| 64-bit long long interger pointer to **NCSIRXBytes** property.| No| Yes
|**NCSIRXFrames**|RedfishCS_int64| 64-bit long long interger pointer to **NCSIRXFrames** property.| No| Yes
|**NCSITXBytes**|RedfishCS_int64| 64-bit long long interger pointer to **NCSITXBytes** property.| No| Yes
|**NCSITXFrames**|RedfishCS_int64| 64-bit long long interger pointer to **NCSITXFrames** property.| No| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**RXBytes**|RedfishCS_int64| 64-bit long long interger pointer to **RXBytes** property.| No| Yes
|**RXMulticastFrames**|RedfishCS_int64| 64-bit long long interger pointer to **RXMulticastFrames** property.| No| Yes
|**RXUnicastFrames**|RedfishCS_int64| 64-bit long long interger pointer to **RXUnicastFrames** property.| No| Yes
|**TXBytes**|RedfishCS_int64| 64-bit long long interger pointer to **TXBytes** property.| No| Yes
|**TXMulticastFrames**|RedfishCS_int64| 64-bit long long interger pointer to **TXMulticastFrames** property.| No| Yes
|**TXUnicastFrames**|RedfishCS_int64| 64-bit long long interger pointer to **TXUnicastFrames** property.| No| Yes
## Redfish NetworkAdapterMetrics V1_0_0 to C Structure Function
    RedfishCS_status
    Json_NetworkAdapterMetrics_V1_0_0_To_CS (RedfishCS_char *JsonRawText, RedfishNetworkAdapterMetrics_V1_0_0_NetworkAdapterMetrics_CS **ReturnedCS);

## C Structure to Redfish NetworkAdapterMetrics V1_0_0 JSON Function
    RedfishCS_status
    CS_To_NetworkAdapterMetrics_V1_0_0_JSON (RedfishNetworkAdapterMetrics_V1_0_0_NetworkAdapterMetrics_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish NetworkAdapterMetrics V1_0_0 C Structure Function
    RedfishCS_status
    DestroyNetworkAdapterMetrics_V1_0_0_CS (RedfishNetworkAdapterMetrics_V1_0_0_NetworkAdapterMetrics_CS *CSPtr);

