# Definition of StorageController.V1_0_0 and functions<br><br>

## Condition
    typedef struct _RedfishResource_Condition_CS {
        RedfishCS_Link LogEntry;
        RedfishCS_char *Message;
        RedfishCS_char_Array *MessageArgs;
        RedfishCS_char *MessageId;
        Redfishodatav4_idRef_CS *OriginOfCondition;
        RedfishCS_char *Severity;
        RedfishCS_char *Timestamp;
    } RedfishResource_Condition_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**LogEntry**|RedfishCS_Link| Structure link list to **LogEntry** property.| No| Yes
|**Message**|RedfishCS_char| String pointer to **Message** property.| No| Yes
|**MessageArgs**|RedfishCS_char_Array| Structure array points to one or more than one **RedfishCS_char *** for property **MessageArgs**.| No| Yes
|**MessageId**|RedfishCS_char| String pointer to **MessageId** property.| No| Yes
|**OriginOfCondition**|Redfishodatav4_idRef_CS| Structure points to **OriginOfCondition** property.| No| Yes
|**Severity**|RedfishCS_char| String pointer to **Severity** property.| No| Yes
|**Timestamp**|RedfishCS_char| String pointer to **Timestamp** property.| No| Yes


## Oem
    typedef struct _RedfishResource_Oem_CS {
        RedfishCS_Link Prop;
    } RedfishResource_Oem_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## Status
    typedef struct _RedfishResource_Status_CS {
        RedfishResource_Condition_Array_CS *Conditions;
        RedfishCS_char *Health;
        RedfishCS_char *HealthRollup;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_char *State;
    } RedfishResource_Status_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Conditions**|RedfishResource_Condition_Array_CS| Structure array points to one or more than one **RedfishResource_Condition_Array_CS** structures for property **Conditions**.| No| No
|**Health**|RedfishCS_char| String pointer to **Health** property.| No| Yes
|**HealthRollup**|RedfishCS_char| String pointer to **HealthRollup** property.| No| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**State**|RedfishCS_char| String pointer to **State** property.| No| Yes


## ANACharacteristics
    typedef struct _RedfishStorageController_V1_0_0_ANACharacteristics_CS {
        RedfishCS_char *AccessState;
        RedfishCS_Link Volume;
    } RedfishStorageController_V1_0_0_ANACharacteristics_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**AccessState**|RedfishCS_char| String pointer to **AccessState** property.| No| Yes
|**Volume**|RedfishCS_Link| Structure link list to **Volume** property.| No| Yes


## Actions
    typedef struct _RedfishStorageController_V1_0_0_Actions_CS {
        RedfishStorageController_V1_0_0_OemActions_CS *Oem;
    } RedfishStorageController_V1_0_0_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishStorageController_V1_0_0_OemActions_CS| Structure points to **Oem** property.| No| No


## CacheSummary
    typedef struct _RedfishStorageController_V1_0_0_CacheSummary_CS {
        RedfishCS_int64 *PersistentCacheSizeMiB;
        RedfishResource_Status_CS *Status;
        RedfishCS_int64 *TotalCacheSizeMiB;
    } RedfishStorageController_V1_0_0_CacheSummary_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**PersistentCacheSizeMiB**|RedfishCS_int64| 64-bit long long interger pointer to **PersistentCacheSizeMiB** property.| No| Yes
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
|**TotalCacheSizeMiB**|RedfishCS_int64| 64-bit long long interger pointer to **TotalCacheSizeMiB** property.| No| Yes


## Links
    typedef struct _RedfishStorageController_V1_0_0_Links_CS {
        RedfishCS_Link AttachedVolumes;
        RedfishCS_int64 *AttachedVolumesodata_count;
        RedfishCS_Link Endpoints;
        RedfishCS_int64 *Endpointsodata_count;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_Link PCIeFunctions;
        RedfishCS_int64 *PCIeFunctionsodata_count;
    } RedfishStorageController_V1_0_0_Links_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**AttachedVolumes**|RedfishCS_Link| Structure link list to **AttachedVolumes** property.| No| Yes
|**AttachedVolumesodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **AttachedVolumes@odata.count** property.| No| No
|**Endpoints**|RedfishCS_Link| Structure link list to **Endpoints** property.| No| Yes
|**Endpointsodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **Endpoints@odata.count** property.| No| No
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**PCIeFunctions**|RedfishCS_Link| Structure link list to **PCIeFunctions** property.| No| Yes
|**PCIeFunctionsodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **PCIeFunctions@odata.count** property.| No| No


## NVMeControllerAttributes
    typedef struct _RedfishStorageController_V1_0_0_NVMeControllerAttributes_CS {
        RedfishCS_bool *ReportsNamespaceGranularity;
        RedfishCS_bool *ReportsUUIDList;
        RedfishCS_bool *Supports128BitHostId;
        RedfishCS_bool *SupportsEnduranceGroups;
        RedfishCS_bool *SupportsExceedingPowerOfNonOperationalState;
        RedfishCS_bool *SupportsNVMSets;
        RedfishCS_bool *SupportsPredictableLatencyMode;
        RedfishCS_bool *SupportsReadRecoveryLevels;
        RedfishCS_bool *SupportsSQAssociations;
        RedfishCS_bool *SupportsTrafficBasedKeepAlive;
    } RedfishStorageController_V1_0_0_NVMeControllerAttributes_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**ReportsNamespaceGranularity**|RedfishCS_bool| Boolean pointer to **ReportsNamespaceGranularity** property.| No| Yes
|**ReportsUUIDList**|RedfishCS_bool| Boolean pointer to **ReportsUUIDList** property.| No| Yes
|**Supports128BitHostId**|RedfishCS_bool| Boolean pointer to **Supports128BitHostId** property.| No| Yes
|**SupportsEnduranceGroups**|RedfishCS_bool| Boolean pointer to **SupportsEnduranceGroups** property.| No| Yes
|**SupportsExceedingPowerOfNonOperationalState**|RedfishCS_bool| Boolean pointer to **SupportsExceedingPowerOfNonOperationalState** property.| No| Yes
|**SupportsNVMSets**|RedfishCS_bool| Boolean pointer to **SupportsNVMSets** property.| No| Yes
|**SupportsPredictableLatencyMode**|RedfishCS_bool| Boolean pointer to **SupportsPredictableLatencyMode** property.| No| Yes
|**SupportsReadRecoveryLevels**|RedfishCS_bool| Boolean pointer to **SupportsReadRecoveryLevels** property.| No| Yes
|**SupportsSQAssociations**|RedfishCS_bool| Boolean pointer to **SupportsSQAssociations** property.| No| Yes
|**SupportsTrafficBasedKeepAlive**|RedfishCS_bool| Boolean pointer to **SupportsTrafficBasedKeepAlive** property.| No| Yes


## NVMeControllerProperties
    typedef struct _RedfishStorageController_V1_0_0_NVMeControllerProperties_CS {
        RedfishStorageController_V1_0_0_ANACharacteristics_Array_CS *ANACharacteristics;
        RedfishCS_char *ControllerType;
        RedfishCS_int64 *MaxQueueSize;
        RedfishStorageController_V1_0_0_NVMeControllerAttributes_CS *NVMeControllerAttributes;
        RedfishStorageController_V1_0_0_NVMeSMARTCriticalWarnings_CS *NVMeSMARTCriticalWarnings;
        RedfishCS_char *NVMeVersion;
    } RedfishStorageController_V1_0_0_NVMeControllerProperties_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**ANACharacteristics**|RedfishStorageController_V1_0_0_ANACharacteristics_Array_CS| Structure array points to one or more than one **RedfishStorageController_V1_0_0_ANACharacteristics_Array_CS** structures for property **ANACharacteristics**.| No| No
|**ControllerType**|RedfishCS_char| String pointer to **ControllerType** property.| No| Yes
|**MaxQueueSize**|RedfishCS_int64| 64-bit long long interger pointer to **MaxQueueSize** property.| No| Yes
|**NVMeControllerAttributes**|RedfishStorageController_V1_0_0_NVMeControllerAttributes_CS| Structure points to **NVMeControllerAttributes** property.| No| No
|**NVMeSMARTCriticalWarnings**|RedfishStorageController_V1_0_0_NVMeSMARTCriticalWarnings_CS| Structure points to **NVMeSMARTCriticalWarnings** property.| No| No
|**NVMeVersion**|RedfishCS_char| String pointer to **NVMeVersion** property.| No| Yes


## NVMeSMARTCriticalWarnings
    typedef struct _RedfishStorageController_V1_0_0_NVMeSMARTCriticalWarnings_CS {
        RedfishCS_bool *MediaInReadOnly;
        RedfishCS_bool *OverallSubsystemDegraded;
        RedfishCS_bool *PMRUnreliable;
        RedfishCS_bool *PowerBackupFailed;
        RedfishCS_bool *SpareCapacityWornOut;
    } RedfishStorageController_V1_0_0_NVMeSMARTCriticalWarnings_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**MediaInReadOnly**|RedfishCS_bool| Boolean pointer to **MediaInReadOnly** property.| No| Yes
|**OverallSubsystemDegraded**|RedfishCS_bool| Boolean pointer to **OverallSubsystemDegraded** property.| No| Yes
|**PMRUnreliable**|RedfishCS_bool| Boolean pointer to **PMRUnreliable** property.| No| Yes
|**PowerBackupFailed**|RedfishCS_bool| Boolean pointer to **PowerBackupFailed** property.| No| Yes
|**SpareCapacityWornOut**|RedfishCS_bool| Boolean pointer to **SpareCapacityWornOut** property.| No| Yes


## OemActions
    typedef struct _RedfishStorageController_V1_0_0_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishStorageController_V1_0_0_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## Rates
    typedef struct _RedfishStorageController_V1_0_0_Rates_CS {
        RedfishCS_int64 *ConsistencyCheckRatePercent;
        RedfishCS_int64 *RebuildRatePercent;
        RedfishCS_int64 *TransformationRatePercent;
    } RedfishStorageController_V1_0_0_Rates_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**ConsistencyCheckRatePercent**|RedfishCS_int64| 64-bit long long interger pointer to **ConsistencyCheckRatePercent** property.| No| No
|**RebuildRatePercent**|RedfishCS_int64| 64-bit long long interger pointer to **RebuildRatePercent** property.| No| No
|**TransformationRatePercent**|RedfishCS_int64| 64-bit long long interger pointer to **TransformationRatePercent** property.| No| No


## idRef
    typedef struct _Redfishodatav4_idRef_CS {
        RedfishCS_char *odata_id;
    } Redfishodatav4_idRef_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No


## RedfishCS_char_Array
    typedef struct _RedfishCS_char_Array  {
        RedfishCS_Link *Next;
        RedfishCS_char *ArrayValue;
    } RedfishCS_char_Array;



## RedfishResource_Condition_Array_CS
    typedef struct _RedfishResource_Condition_Array_CS  {
        RedfishCS_Link *Next;
        RedfishResource_Condition_CS *ArrayValue;
    } RedfishResource_Condition_Array_CS;



## RedfishStorageController_V1_0_0_ANACharacteristics_Array_CS
    typedef struct _RedfishStorageController_V1_0_0_ANACharacteristics_Array_CS  {
        RedfishCS_Link *Next;
        RedfishStorageController_V1_0_0_ANACharacteristics_CS *ArrayValue;
    } RedfishStorageController_V1_0_0_ANACharacteristics_Array_CS;



## StorageController
    typedef struct _RedfishStorageController_V1_0_0_StorageController_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishStorageController_V1_0_0_Actions_CS *Actions;
        RedfishCS_Link Assembly;
        RedfishCS_char *AssetTag;
        RedfishStorageController_V1_0_0_CacheSummary_CS *CacheSummary;
        RedfishStorageController_V1_0_0_Rates_CS *ControllerRates;
        RedfishCS_char *Description;
        RedfishCS_char *FirmwareVersion;
        RedfishCS_char *Id;
        RedfishCS_Link Identifiers;
        RedfishStorageController_V1_0_0_Links_CS *Links;
        RedfishCS_Link Location;
        RedfishCS_char *Manufacturer;
        RedfishCS_char *Model;
        RedfishStorageController_V1_0_0_NVMeControllerProperties_CS *NVMeControllerProperties;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_Link PCIeInterface;
        RedfishCS_char *PartNumber;
        RedfishCS_Link Ports;
        RedfishCS_char *SKU;
        RedfishCS_char *SerialNumber;
        RedfishCS_int64 *SpeedGbps;
        RedfishResource_Status_CS *Status;
        RedfishCS_char *SupportedControllerProtocols;
        RedfishCS_char *SupportedDeviceProtocols;
        RedfishCS_char *SupportedRAIDTypes;
    } RedfishStorageController_V1_0_0_StorageController_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishStorageController_V1_0_0_Actions_CS| Structure points to **Actions** property.| No| No
|**Assembly**|RedfishCS_Link| Structure link list to **Assembly** property.| No| Yes
|**AssetTag**|RedfishCS_char| String pointer to **AssetTag** property.| No| No
|**CacheSummary**|RedfishStorageController_V1_0_0_CacheSummary_CS| Structure points to **CacheSummary** property.| No| No
|**ControllerRates**|RedfishStorageController_V1_0_0_Rates_CS| Structure points to **ControllerRates** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**FirmwareVersion**|RedfishCS_char| String pointer to **FirmwareVersion** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**Identifiers**|RedfishCS_Link| Structure link list to **Identifiers** property.| No| No
|**Links**|RedfishStorageController_V1_0_0_Links_CS| Structure points to **Links** property.| No| No
|**Location**|RedfishCS_Link| Structure link list to **Location** property.| No| No
|**Manufacturer**|RedfishCS_char| String pointer to **Manufacturer** property.| No| Yes
|**Model**|RedfishCS_char| String pointer to **Model** property.| No| Yes
|**NVMeControllerProperties**|RedfishStorageController_V1_0_0_NVMeControllerProperties_CS| Structure points to **NVMeControllerProperties** property.| No| No
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**PCIeInterface**|RedfishCS_Link| Structure link list to **PCIeInterface** property.| No| No
|**PartNumber**|RedfishCS_char| String pointer to **PartNumber** property.| No| Yes
|**Ports**|RedfishCS_Link| Structure link list to **Ports** property.| No| Yes
|**SKU**|RedfishCS_char| String pointer to **SKU** property.| No| Yes
|**SerialNumber**|RedfishCS_char| String pointer to **SerialNumber** property.| No| Yes
|**SpeedGbps**|RedfishCS_int64| 64-bit long long interger pointer to **SpeedGbps** property.| No| Yes
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
|**SupportedControllerProtocols**|RedfishCS_char| String pointer to **SupportedControllerProtocols** property.| No| Yes
|**SupportedDeviceProtocols**|RedfishCS_char| String pointer to **SupportedDeviceProtocols** property.| No| Yes
|**SupportedRAIDTypes**|RedfishCS_char| String pointer to **SupportedRAIDTypes** property.| No| Yes
## Redfish StorageController V1_0_0 to C Structure Function
    RedfishCS_status
    Json_StorageController_V1_0_0_To_CS (RedfishCS_char *JsonRawText, RedfishStorageController_V1_0_0_StorageController_CS **ReturnedCS);

## C Structure to Redfish StorageController V1_0_0 JSON Function
    RedfishCS_status
    CS_To_StorageController_V1_0_0_JSON (RedfishStorageController_V1_0_0_StorageController_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish StorageController V1_0_0 C Structure Function
    RedfishCS_status
    DestroyStorageController_V1_0_0_CS (RedfishStorageController_V1_0_0_StorageController_CS *CSPtr);

