# Definition of PortMetrics.V1_2_0 and functions<br><br>

## Actions
    typedef struct _RedfishPortMetrics_V1_2_0_Actions_CS {
        RedfishPortMetrics_V1_2_0_OemActions_CS *Oem;
    } RedfishPortMetrics_V1_2_0_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishPortMetrics_V1_2_0_OemActions_CS| Structure points to **Oem** property.| No| No


## FibreChannel
    typedef struct _RedfishPortMetrics_V1_2_0_FibreChannel_CS {
        RedfishCS_int64 *CorrectableFECErrors;
        RedfishCS_int64 *InvalidCRCs;
        RedfishCS_int64 *InvalidTXWords;
        RedfishCS_int64 *LinkFailures;
        RedfishCS_int64 *LossesOfSignal;
        RedfishCS_int64 *LossesOfSync;
        RedfishCS_int64 *RXBBCreditZero;
        RedfishCS_int64 *RXExchanges;
        RedfishCS_int64 *RXSequences;
        RedfishCS_int64 *TXBBCreditZero;
        RedfishCS_int64 *TXBBCreditZeroDurationMilliseconds;
        RedfishCS_int64 *TXBBCredits;
        RedfishCS_int64 *TXExchanges;
        RedfishCS_int64 *TXSequences;
        RedfishCS_int64 *UncorrectableFECErrors;
    } RedfishPortMetrics_V1_2_0_FibreChannel_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**CorrectableFECErrors**|RedfishCS_int64| 64-bit long long interger pointer to **CorrectableFECErrors** property.| No| Yes
|**InvalidCRCs**|RedfishCS_int64| 64-bit long long interger pointer to **InvalidCRCs** property.| No| Yes
|**InvalidTXWords**|RedfishCS_int64| 64-bit long long interger pointer to **InvalidTXWords** property.| No| Yes
|**LinkFailures**|RedfishCS_int64| 64-bit long long interger pointer to **LinkFailures** property.| No| Yes
|**LossesOfSignal**|RedfishCS_int64| 64-bit long long interger pointer to **LossesOfSignal** property.| No| Yes
|**LossesOfSync**|RedfishCS_int64| 64-bit long long interger pointer to **LossesOfSync** property.| No| Yes
|**RXBBCreditZero**|RedfishCS_int64| 64-bit long long interger pointer to **RXBBCreditZero** property.| No| Yes
|**RXExchanges**|RedfishCS_int64| 64-bit long long interger pointer to **RXExchanges** property.| No| Yes
|**RXSequences**|RedfishCS_int64| 64-bit long long interger pointer to **RXSequences** property.| No| Yes
|**TXBBCreditZero**|RedfishCS_int64| 64-bit long long interger pointer to **TXBBCreditZero** property.| No| Yes
|**TXBBCreditZeroDurationMilliseconds**|RedfishCS_int64| 64-bit long long interger pointer to **TXBBCreditZeroDurationMilliseconds** property.| No| Yes
|**TXBBCredits**|RedfishCS_int64| 64-bit long long interger pointer to **TXBBCredits** property.| No| Yes
|**TXExchanges**|RedfishCS_int64| 64-bit long long interger pointer to **TXExchanges** property.| No| Yes
|**TXSequences**|RedfishCS_int64| 64-bit long long interger pointer to **TXSequences** property.| No| Yes
|**UncorrectableFECErrors**|RedfishCS_int64| 64-bit long long interger pointer to **UncorrectableFECErrors** property.| No| Yes


## GenZ
    typedef struct _RedfishPortMetrics_V1_2_0_GenZ_CS {
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
    } RedfishPortMetrics_V1_2_0_GenZ_CS;

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


## Networking
    typedef struct _RedfishPortMetrics_V1_2_0_Networking_CS {
        RedfishCS_int64 *RDMAProtectionErrors;
        RedfishCS_int64 *RDMAProtocolErrors;
        RedfishCS_int64 *RDMARXBytes;
        RedfishCS_int64 *RDMARXRequests;
        RedfishCS_int64 *RDMATXBytes;
        RedfishCS_int64 *RDMATXReadRequests;
        RedfishCS_int64 *RDMATXRequests;
        RedfishCS_int64 *RDMATXSendRequests;
        RedfishCS_int64 *RDMATXWriteRequests;
        RedfishCS_int64 *RXBroadcastFrames;
        RedfishCS_int64 *RXDiscards;
        RedfishCS_int64 *RXFCSErrors;
        RedfishCS_int64 *RXFalseCarrierErrors;
        RedfishCS_int64 *RXFrameAlignmentErrors;
        RedfishCS_int64 *RXFrames;
        RedfishCS_int64 *RXMulticastFrames;
        RedfishCS_int64 *RXOversizeFrames;
        RedfishCS_int64 *RXPFCFrames;
        RedfishCS_int64 *RXPauseXOFFFrames;
        RedfishCS_int64 *RXPauseXONFrames;
        RedfishCS_int64 *RXUndersizeFrames;
        RedfishCS_int64 *RXUnicastFrames;
        RedfishCS_int64 *TXBroadcastFrames;
        RedfishCS_int64 *TXDiscards;
        RedfishCS_int64 *TXExcessiveCollisions;
        RedfishCS_int64 *TXFrames;
        RedfishCS_int64 *TXLateCollisions;
        RedfishCS_int64 *TXMulticastFrames;
        RedfishCS_int64 *TXMultipleCollisions;
        RedfishCS_int64 *TXPFCFrames;
        RedfishCS_int64 *TXPauseXOFFFrames;
        RedfishCS_int64 *TXPauseXONFrames;
        RedfishCS_int64 *TXSingleCollisions;
        RedfishCS_int64 *TXUnicastFrames;
    } RedfishPortMetrics_V1_2_0_Networking_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**RDMAProtectionErrors**|RedfishCS_int64| 64-bit long long interger pointer to **RDMAProtectionErrors** property.| No| Yes
|**RDMAProtocolErrors**|RedfishCS_int64| 64-bit long long interger pointer to **RDMAProtocolErrors** property.| No| Yes
|**RDMARXBytes**|RedfishCS_int64| 64-bit long long interger pointer to **RDMARXBytes** property.| No| Yes
|**RDMARXRequests**|RedfishCS_int64| 64-bit long long interger pointer to **RDMARXRequests** property.| No| Yes
|**RDMATXBytes**|RedfishCS_int64| 64-bit long long interger pointer to **RDMATXBytes** property.| No| Yes
|**RDMATXReadRequests**|RedfishCS_int64| 64-bit long long interger pointer to **RDMATXReadRequests** property.| No| Yes
|**RDMATXRequests**|RedfishCS_int64| 64-bit long long interger pointer to **RDMATXRequests** property.| No| Yes
|**RDMATXSendRequests**|RedfishCS_int64| 64-bit long long interger pointer to **RDMATXSendRequests** property.| No| Yes
|**RDMATXWriteRequests**|RedfishCS_int64| 64-bit long long interger pointer to **RDMATXWriteRequests** property.| No| Yes
|**RXBroadcastFrames**|RedfishCS_int64| 64-bit long long interger pointer to **RXBroadcastFrames** property.| No| Yes
|**RXDiscards**|RedfishCS_int64| 64-bit long long interger pointer to **RXDiscards** property.| No| Yes
|**RXFCSErrors**|RedfishCS_int64| 64-bit long long interger pointer to **RXFCSErrors** property.| No| Yes
|**RXFalseCarrierErrors**|RedfishCS_int64| 64-bit long long interger pointer to **RXFalseCarrierErrors** property.| No| Yes
|**RXFrameAlignmentErrors**|RedfishCS_int64| 64-bit long long interger pointer to **RXFrameAlignmentErrors** property.| No| Yes
|**RXFrames**|RedfishCS_int64| 64-bit long long interger pointer to **RXFrames** property.| No| Yes
|**RXMulticastFrames**|RedfishCS_int64| 64-bit long long interger pointer to **RXMulticastFrames** property.| No| Yes
|**RXOversizeFrames**|RedfishCS_int64| 64-bit long long interger pointer to **RXOversizeFrames** property.| No| Yes
|**RXPFCFrames**|RedfishCS_int64| 64-bit long long interger pointer to **RXPFCFrames** property.| No| Yes
|**RXPauseXOFFFrames**|RedfishCS_int64| 64-bit long long interger pointer to **RXPauseXOFFFrames** property.| No| Yes
|**RXPauseXONFrames**|RedfishCS_int64| 64-bit long long interger pointer to **RXPauseXONFrames** property.| No| Yes
|**RXUndersizeFrames**|RedfishCS_int64| 64-bit long long interger pointer to **RXUndersizeFrames** property.| No| Yes
|**RXUnicastFrames**|RedfishCS_int64| 64-bit long long interger pointer to **RXUnicastFrames** property.| No| Yes
|**TXBroadcastFrames**|RedfishCS_int64| 64-bit long long interger pointer to **TXBroadcastFrames** property.| No| Yes
|**TXDiscards**|RedfishCS_int64| 64-bit long long interger pointer to **TXDiscards** property.| No| Yes
|**TXExcessiveCollisions**|RedfishCS_int64| 64-bit long long interger pointer to **TXExcessiveCollisions** property.| No| Yes
|**TXFrames**|RedfishCS_int64| 64-bit long long interger pointer to **TXFrames** property.| No| Yes
|**TXLateCollisions**|RedfishCS_int64| 64-bit long long interger pointer to **TXLateCollisions** property.| No| Yes
|**TXMulticastFrames**|RedfishCS_int64| 64-bit long long interger pointer to **TXMulticastFrames** property.| No| Yes
|**TXMultipleCollisions**|RedfishCS_int64| 64-bit long long interger pointer to **TXMultipleCollisions** property.| No| Yes
|**TXPFCFrames**|RedfishCS_int64| 64-bit long long interger pointer to **TXPFCFrames** property.| No| Yes
|**TXPauseXOFFFrames**|RedfishCS_int64| 64-bit long long interger pointer to **TXPauseXOFFFrames** property.| No| Yes
|**TXPauseXONFrames**|RedfishCS_int64| 64-bit long long interger pointer to **TXPauseXONFrames** property.| No| Yes
|**TXSingleCollisions**|RedfishCS_int64| 64-bit long long interger pointer to **TXSingleCollisions** property.| No| Yes
|**TXUnicastFrames**|RedfishCS_int64| 64-bit long long interger pointer to **TXUnicastFrames** property.| No| Yes


## OemActions
    typedef struct _RedfishPortMetrics_V1_2_0_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishPortMetrics_V1_2_0_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## SAS
    typedef struct _RedfishPortMetrics_V1_2_0_SAS_CS {
        RedfishCS_int64 *InvalidDwordCount;
        RedfishCS_int64 *LossOfDwordSynchronizationCount;
        RedfishCS_int64 *RunningDisparityErrorCount;
    } RedfishPortMetrics_V1_2_0_SAS_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**InvalidDwordCount**|RedfishCS_int64| 64-bit long long interger pointer to **InvalidDwordCount** property.| No| Yes
|**LossOfDwordSynchronizationCount**|RedfishCS_int64| 64-bit long long interger pointer to **LossOfDwordSynchronizationCount** property.| No| Yes
|**RunningDisparityErrorCount**|RedfishCS_int64| 64-bit long long interger pointer to **RunningDisparityErrorCount** property.| No| Yes


## Transceiver
    typedef struct _RedfishPortMetrics_V1_2_0_Transceiver_CS {
        RedfishCS_int64 *RXInputPowerMilliWatts;
        RedfishCS_int64 *SupplyVoltage;
        RedfishCS_int64 *TXBiasCurrentMilliAmps;
        RedfishCS_int64 *TXOutputPowerMilliWatts;
    } RedfishPortMetrics_V1_2_0_Transceiver_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**RXInputPowerMilliWatts**|RedfishCS_int64| 64-bit long long interger pointer to **RXInputPowerMilliWatts** property.| No| Yes
|**SupplyVoltage**|RedfishCS_int64| 64-bit long long interger pointer to **SupplyVoltage** property.| No| Yes
|**TXBiasCurrentMilliAmps**|RedfishCS_int64| 64-bit long long interger pointer to **TXBiasCurrentMilliAmps** property.| No| Yes
|**TXOutputPowerMilliWatts**|RedfishCS_int64| 64-bit long long interger pointer to **TXOutputPowerMilliWatts** property.| No| Yes


## Oem
    typedef struct _RedfishResource_Oem_CS {
        RedfishCS_Link Prop;
    } RedfishResource_Oem_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## PortMetrics
    typedef struct _RedfishPortMetrics_V1_2_0_PortMetrics_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishPortMetrics_V1_2_0_Actions_CS *Actions;
        RedfishCS_char *Description;
        RedfishPortMetrics_V1_2_0_FibreChannel_CS *FibreChannel;
        RedfishPortMetrics_V1_2_0_GenZ_CS *GenZ;
        RedfishCS_char *Id;
        RedfishCS_char *Name;
        RedfishPortMetrics_V1_2_0_Networking_CS *Networking;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_int64 *RXBytes;
        RedfishCS_int64 *RXErrors;
        RedfishPortMetrics_V1_2_0_SAS_CS *SAS;
        RedfishCS_int64 *TXBytes;
        RedfishCS_int64 *TXErrors;
        RedfishPortMetrics_V1_2_0_Transceiver_CS *Transceivers;
    } RedfishPortMetrics_V1_2_0_PortMetrics_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishPortMetrics_V1_2_0_Actions_CS| Structure points to **Actions** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**FibreChannel**|RedfishPortMetrics_V1_2_0_FibreChannel_CS| Structure points to **FibreChannel** property.| No| No
|**GenZ**|RedfishPortMetrics_V1_2_0_GenZ_CS| Structure points to **GenZ** property.| No| No
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Networking**|RedfishPortMetrics_V1_2_0_Networking_CS| Structure points to **Networking** property.| No| No
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**RXBytes**|RedfishCS_int64| 64-bit long long interger pointer to **RXBytes** property.| No| Yes
|**RXErrors**|RedfishCS_int64| 64-bit long long interger pointer to **RXErrors** property.| No| Yes
|**SAS**|RedfishPortMetrics_V1_2_0_SAS_CS| Structure points to **SAS** property.| No| No
|**TXBytes**|RedfishCS_int64| 64-bit long long interger pointer to **TXBytes** property.| No| Yes
|**TXErrors**|RedfishCS_int64| 64-bit long long interger pointer to **TXErrors** property.| No| Yes
|**Transceivers**|RedfishPortMetrics_V1_2_0_Transceiver_CS| Structure points to **Transceivers** property.| No| No
## Redfish PortMetrics V1_2_0 to C Structure Function
    RedfishCS_status
    Json_PortMetrics_V1_2_0_To_CS (RedfishCS_char *JsonRawText, RedfishPortMetrics_V1_2_0_PortMetrics_CS **ReturnedCS);

## C Structure to Redfish PortMetrics V1_2_0 JSON Function
    RedfishCS_status
    CS_To_PortMetrics_V1_2_0_JSON (RedfishPortMetrics_V1_2_0_PortMetrics_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish PortMetrics V1_2_0 C Structure Function
    RedfishCS_status
    DestroyPortMetrics_V1_2_0_CS (RedfishPortMetrics_V1_2_0_PortMetrics_CS *CSPtr);

