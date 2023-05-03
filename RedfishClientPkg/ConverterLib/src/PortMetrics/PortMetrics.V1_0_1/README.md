# Definition of PortMetrics.V1_0_1 and functions<br><br>

## Actions
    typedef struct _RedfishPortMetrics_V1_0_1_Actions_CS {
        RedfishPortMetrics_V1_0_1_OemActions_CS *Oem;
    } RedfishPortMetrics_V1_0_1_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishPortMetrics_V1_0_1_OemActions_CS| Structure points to **Oem** property.| No| No


## GenZ
    typedef struct _RedfishPortMetrics_V1_0_1_GenZ_CS {
        RedfishCS_int64 *AccessKeyViolations;
        RedfishCS_int64 *EndToEndCRCErrors;
        RedfishCS_int64 *LLRRecovery;
        RedfishCS_int64 *LinkNTE;
        RedfishCS_int64 *MarkedECN;
        RedfishCS_int64 *NonCRCTransientErrors;
        RedfishCS_int64 *PacketCRCErrors;
        RedfishCS_int64 *PacketDeadlineDiscards;
        RedfishCS_int64 *RXStompedECRC;
        RedfishCS_int64 *ReceivedECN;
        RedfishCS_int64 *TXStompedECRC;
    } RedfishPortMetrics_V1_0_1_GenZ_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**AccessKeyViolations**|RedfishCS_int64| 64-bit long long interger pointer to **AccessKeyViolations** property.| No| Yes
|**EndToEndCRCErrors**|RedfishCS_int64| 64-bit long long interger pointer to **EndToEndCRCErrors** property.| No| Yes
|**LLRRecovery**|RedfishCS_int64| 64-bit long long interger pointer to **LLRRecovery** property.| No| Yes
|**LinkNTE**|RedfishCS_int64| 64-bit long long interger pointer to **LinkNTE** property.| No| Yes
|**MarkedECN**|RedfishCS_int64| 64-bit long long interger pointer to **MarkedECN** property.| No| Yes
|**NonCRCTransientErrors**|RedfishCS_int64| 64-bit long long interger pointer to **NonCRCTransientErrors** property.| No| Yes
|**PacketCRCErrors**|RedfishCS_int64| 64-bit long long interger pointer to **PacketCRCErrors** property.| No| Yes
|**PacketDeadlineDiscards**|RedfishCS_int64| 64-bit long long interger pointer to **PacketDeadlineDiscards** property.| No| Yes
|**RXStompedECRC**|RedfishCS_int64| 64-bit long long interger pointer to **RXStompedECRC** property.| No| Yes
|**ReceivedECN**|RedfishCS_int64| 64-bit long long interger pointer to **ReceivedECN** property.| No| Yes
|**TXStompedECRC**|RedfishCS_int64| 64-bit long long interger pointer to **TXStompedECRC** property.| No| Yes


## OemActions
    typedef struct _RedfishPortMetrics_V1_0_1_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishPortMetrics_V1_0_1_OemActions_CS;

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


## PortMetrics
    typedef struct _RedfishPortMetrics_V1_0_1_PortMetrics_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishPortMetrics_V1_0_1_Actions_CS *Actions;
        RedfishCS_char *Description;
        RedfishPortMetrics_V1_0_1_GenZ_CS *GenZ;
        RedfishCS_char *Id;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
    } RedfishPortMetrics_V1_0_1_PortMetrics_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishPortMetrics_V1_0_1_Actions_CS| Structure points to **Actions** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**GenZ**|RedfishPortMetrics_V1_0_1_GenZ_CS| Structure points to **GenZ** property.| No| No
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
## Redfish PortMetrics V1_0_1 to C Structure Function
    RedfishCS_status
    Json_PortMetrics_V1_0_1_To_CS (RedfishCS_char *JsonRawText, RedfishPortMetrics_V1_0_1_PortMetrics_CS **ReturnedCS);

## C Structure to Redfish PortMetrics V1_0_1 JSON Function
    RedfishCS_status
    CS_To_PortMetrics_V1_0_1_JSON (RedfishPortMetrics_V1_0_1_PortMetrics_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish PortMetrics V1_0_1 C Structure Function
    RedfishCS_status
    DestroyPortMetrics_V1_0_1_CS (RedfishPortMetrics_V1_0_1_PortMetrics_CS *CSPtr);

