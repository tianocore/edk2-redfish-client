# Definition of Memory.V1_6_5 and functions<br><br>

## Actions
    typedef struct _RedfishMemory_V1_6_5_Actions_CS {
        RedfishMemory_V1_6_5_DisablePassphrase_CS *Memory_DisablePassphrase;
        RedfishMemory_V1_6_5_OverwriteUnit_CS *Memory_OverwriteUnit;
        RedfishMemory_V1_6_5_SecureEraseUnit_CS *Memory_SecureEraseUnit;
        RedfishMemory_V1_6_5_SetPassphrase_CS *Memory_SetPassphrase;
        RedfishMemory_V1_6_5_UnlockUnit_CS *Memory_UnlockUnit;
        RedfishMemory_V1_6_5_OemActions_CS *Oem;
    } RedfishMemory_V1_6_5_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Memory_DisablePassphrase**|RedfishMemory_V1_6_5_DisablePassphrase_CS| Structure points to **#Memory.DisablePassphrase** property.| No| No
|**Memory_OverwriteUnit**|RedfishMemory_V1_6_5_OverwriteUnit_CS| Structure points to **#Memory.OverwriteUnit** property.| No| No
|**Memory_SecureEraseUnit**|RedfishMemory_V1_6_5_SecureEraseUnit_CS| Structure points to **#Memory.SecureEraseUnit** property.| No| No
|**Memory_SetPassphrase**|RedfishMemory_V1_6_5_SetPassphrase_CS| Structure points to **#Memory.SetPassphrase** property.| No| No
|**Memory_UnlockUnit**|RedfishMemory_V1_6_5_UnlockUnit_CS| Structure points to **#Memory.UnlockUnit** property.| No| No
|**Oem**|RedfishMemory_V1_6_5_OemActions_CS| Structure points to **Oem** property.| No| No


## DisablePassphrase
    typedef struct _RedfishMemory_V1_6_5_DisablePassphrase_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishMemory_V1_6_5_DisablePassphrase_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**target**|RedfishCS_char| String pointer to **target** property.| No| No
|**title**|RedfishCS_char| String pointer to **title** property.| No| No


## Links
    typedef struct _RedfishMemory_V1_6_5_Links_CS {
        RedfishCS_Link Chassis;
        RedfishResource_Oem_CS *Oem;
    } RedfishMemory_V1_6_5_Links_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Chassis**|RedfishCS_Link| Structure link list to **Chassis** property.| No| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No


## MemoryLocation
    typedef struct _RedfishMemory_V1_6_5_MemoryLocation_CS {
        RedfishCS_int64 *Channel;
        RedfishCS_int64 *MemoryController;
        RedfishCS_int64 *Slot;
        RedfishCS_int64 *Socket;
    } RedfishMemory_V1_6_5_MemoryLocation_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Channel**|RedfishCS_int64| 64-bit long long interger pointer to **Channel** property.| No| Yes
|**MemoryController**|RedfishCS_int64| 64-bit long long interger pointer to **MemoryController** property.| No| Yes
|**Slot**|RedfishCS_int64| 64-bit long long interger pointer to **Slot** property.| No| Yes
|**Socket**|RedfishCS_int64| 64-bit long long interger pointer to **Socket** property.| No| Yes


## OemActions
    typedef struct _RedfishMemory_V1_6_5_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishMemory_V1_6_5_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## OverwriteUnit
    typedef struct _RedfishMemory_V1_6_5_OverwriteUnit_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishMemory_V1_6_5_OverwriteUnit_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**target**|RedfishCS_char| String pointer to **target** property.| No| No
|**title**|RedfishCS_char| String pointer to **title** property.| No| No


## PowerManagementPolicy
    typedef struct _RedfishMemory_V1_6_5_PowerManagementPolicy_CS {
        RedfishCS_int64 *AveragePowerBudgetMilliWatts;
        RedfishCS_int64 *MaxTDPMilliWatts;
        RedfishCS_int64 *PeakPowerBudgetMilliWatts;
        RedfishCS_bool *PolicyEnabled;
    } RedfishMemory_V1_6_5_PowerManagementPolicy_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**AveragePowerBudgetMilliWatts**|RedfishCS_int64| 64-bit long long interger pointer to **AveragePowerBudgetMilliWatts** property.| No| Yes
|**MaxTDPMilliWatts**|RedfishCS_int64| 64-bit long long interger pointer to **MaxTDPMilliWatts** property.| No| Yes
|**PeakPowerBudgetMilliWatts**|RedfishCS_int64| 64-bit long long interger pointer to **PeakPowerBudgetMilliWatts** property.| No| Yes
|**PolicyEnabled**|RedfishCS_bool| Boolean pointer to **PolicyEnabled** property.| No| Yes


## RegionSet
    typedef struct _RedfishMemory_V1_6_5_RegionSet_CS {
        RedfishCS_char *MemoryClassification;
        RedfishCS_int64 *OffsetMiB;
        RedfishCS_bool *PassphraseEnabled;
        RedfishCS_bool *PassphraseState;
        RedfishCS_char *RegionId;
        RedfishCS_int64 *SizeMiB;
    } RedfishMemory_V1_6_5_RegionSet_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**MemoryClassification**|RedfishCS_char| String pointer to **MemoryClassification** property.| No| Yes
|**OffsetMiB**|RedfishCS_int64| 64-bit long long interger pointer to **OffsetMiB** property.| No| Yes
|**PassphraseEnabled**|RedfishCS_bool| Boolean pointer to **PassphraseEnabled** property.| No| Yes
|**PassphraseState**|RedfishCS_bool| Boolean pointer to **PassphraseState** property.| No| Yes
|**RegionId**|RedfishCS_char| String pointer to **RegionId** property.| No| Yes
|**SizeMiB**|RedfishCS_int64| 64-bit long long interger pointer to **SizeMiB** property.| No| Yes


## SecureEraseUnit
    typedef struct _RedfishMemory_V1_6_5_SecureEraseUnit_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishMemory_V1_6_5_SecureEraseUnit_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**target**|RedfishCS_char| String pointer to **target** property.| No| No
|**title**|RedfishCS_char| String pointer to **title** property.| No| No


## SecurityCapabilities
    typedef struct _RedfishMemory_V1_6_5_SecurityCapabilities_CS {
        RedfishCS_int64 *MaxPassphraseCount;
        RedfishCS_bool *PassphraseCapable;
        RedfishCS_char_Array *SecurityStates;
    } RedfishMemory_V1_6_5_SecurityCapabilities_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**MaxPassphraseCount**|RedfishCS_int64| 64-bit long long interger pointer to **MaxPassphraseCount** property.| No| Yes
|**PassphraseCapable**|RedfishCS_bool| Boolean pointer to **PassphraseCapable** property.| No| Yes
|**SecurityStates**|RedfishCS_char_Array| Structure array points to one or more than one **RedfishCS_char *** for property **SecurityStates**.| No| Yes


## SetPassphrase
    typedef struct _RedfishMemory_V1_6_5_SetPassphrase_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishMemory_V1_6_5_SetPassphrase_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**target**|RedfishCS_char| String pointer to **target** property.| No| No
|**title**|RedfishCS_char| String pointer to **title** property.| No| No


## UnlockUnit
    typedef struct _RedfishMemory_V1_6_5_UnlockUnit_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishMemory_V1_6_5_UnlockUnit_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**target**|RedfishCS_char| String pointer to **target** property.| No| No
|**title**|RedfishCS_char| String pointer to **title** property.| No| No


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



## Memory
    typedef struct _RedfishMemory_V1_6_5_Memory_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishMemory_V1_6_5_Actions_CS *Actions;
        RedfishCS_int64 *AllocationAlignmentMiB;
        RedfishCS_int64 *AllocationIncrementMiB;
        RedfishCS_int64 *AllowedSpeedsMHz;
        RedfishCS_Link Assembly;
        RedfishCS_char *BaseModuleType;
        RedfishCS_int64 *BusWidthBits;
        RedfishCS_int64 *CacheSizeMiB;
        RedfishCS_int64 *CapacityMiB;
        RedfishCS_int64 *DataWidthBits;
        RedfishCS_char *Description;
        RedfishCS_char *DeviceID;
        RedfishCS_char *DeviceLocator;
        RedfishCS_char *ErrorCorrection;
        RedfishCS_char *FirmwareApiVersion;
        RedfishCS_char *FirmwareRevision;
        RedfishCS_char *FunctionClasses;
        RedfishCS_char *Id;
        RedfishCS_bool *IsRankSpareEnabled;
        RedfishCS_bool *IsSpareDeviceEnabled;
        RedfishMemory_V1_6_5_Links_CS *Links;
        RedfishCS_Link Location;
        RedfishCS_int64 *LogicalSizeMiB;
        RedfishCS_char *Manufacturer;
        RedfishCS_int64 *MaxTDPMilliWatts;
        RedfishCS_char *MemoryDeviceType;
        RedfishMemory_V1_6_5_MemoryLocation_CS *MemoryLocation;
        RedfishCS_char *MemoryMedia;
        RedfishCS_char *MemorySubsystemControllerManufacturerID;
        RedfishCS_char *MemorySubsystemControllerProductID;
        RedfishCS_char *MemoryType;
        RedfishCS_Link Metrics;
        RedfishCS_char *ModuleManufacturerID;
        RedfishCS_char *ModuleProductID;
        RedfishCS_char *Name;
        RedfishCS_int64 *NonVolatileSizeMiB;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_char *OperatingMemoryModes;
        RedfishCS_int64 *OperatingSpeedMhz;
        RedfishCS_char *PartNumber;
        RedfishCS_int64 *PersistentRegionNumberLimit;
        RedfishCS_int64 *PersistentRegionSizeLimitMiB;
        RedfishCS_int64 *PersistentRegionSizeMaxMiB;
        RedfishMemory_V1_6_5_PowerManagementPolicy_CS *PowerManagementPolicy;
        RedfishCS_int64 *RankCount;
        RedfishMemory_V1_6_5_RegionSet_CS *Regions;
        RedfishMemory_V1_6_5_SecurityCapabilities_CS *SecurityCapabilities;
        RedfishCS_char *SerialNumber;
        RedfishCS_int64 *SpareDeviceCount;
        RedfishResource_Status_CS *Status;
        RedfishCS_char *SubsystemDeviceID;
        RedfishCS_char *SubsystemVendorID;
        RedfishCS_char *VendorID;
        RedfishCS_int64 *VolatileRegionNumberLimit;
        RedfishCS_int64 *VolatileRegionSizeLimitMiB;
        RedfishCS_int64 *VolatileRegionSizeMaxMiB;
        RedfishCS_int64 *VolatileSizeMiB;
    } RedfishMemory_V1_6_5_Memory_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishMemory_V1_6_5_Actions_CS| Structure points to **Actions** property.| No| No
|**AllocationAlignmentMiB**|RedfishCS_int64| 64-bit long long interger pointer to **AllocationAlignmentMiB** property.| No| Yes
|**AllocationIncrementMiB**|RedfishCS_int64| 64-bit long long interger pointer to **AllocationIncrementMiB** property.| No| Yes
|**AllowedSpeedsMHz**|RedfishCS_int64| 64-bit long long interger pointer to **AllowedSpeedsMHz** property.| No| Yes
|**Assembly**|RedfishCS_Link| Structure link list to **Assembly** property.| No| Yes
|**BaseModuleType**|RedfishCS_char| String pointer to **BaseModuleType** property.| No| Yes
|**BusWidthBits**|RedfishCS_int64| 64-bit long long interger pointer to **BusWidthBits** property.| No| Yes
|**CacheSizeMiB**|RedfishCS_int64| 64-bit long long interger pointer to **CacheSizeMiB** property.| No| Yes
|**CapacityMiB**|RedfishCS_int64| 64-bit long long interger pointer to **CapacityMiB** property.| No| Yes
|**DataWidthBits**|RedfishCS_int64| 64-bit long long interger pointer to **DataWidthBits** property.| No| Yes
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**DeviceID**|RedfishCS_char| String pointer to **DeviceID** property.| No| Yes
|**DeviceLocator**|RedfishCS_char| String pointer to **DeviceLocator** property.| No| Yes
|**ErrorCorrection**|RedfishCS_char| String pointer to **ErrorCorrection** property.| No| Yes
|**FirmwareApiVersion**|RedfishCS_char| String pointer to **FirmwareApiVersion** property.| No| Yes
|**FirmwareRevision**|RedfishCS_char| String pointer to **FirmwareRevision** property.| No| Yes
|**FunctionClasses**|RedfishCS_char| String pointer to **FunctionClasses** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**IsRankSpareEnabled**|RedfishCS_bool| Boolean pointer to **IsRankSpareEnabled** property.| No| Yes
|**IsSpareDeviceEnabled**|RedfishCS_bool| Boolean pointer to **IsSpareDeviceEnabled** property.| No| Yes
|**Links**|RedfishMemory_V1_6_5_Links_CS| Structure points to **Links** property.| No| No
|**Location**|RedfishCS_Link| Structure link list to **Location** property.| No| No
|**LogicalSizeMiB**|RedfishCS_int64| 64-bit long long interger pointer to **LogicalSizeMiB** property.| No| Yes
|**Manufacturer**|RedfishCS_char| String pointer to **Manufacturer** property.| No| Yes
|**MaxTDPMilliWatts**|RedfishCS_int64| 64-bit long long interger pointer to **MaxTDPMilliWatts** property.| No| Yes
|**MemoryDeviceType**|RedfishCS_char| String pointer to **MemoryDeviceType** property.| No| Yes
|**MemoryLocation**|RedfishMemory_V1_6_5_MemoryLocation_CS| Structure points to **MemoryLocation** property.| No| No
|**MemoryMedia**|RedfishCS_char| String pointer to **MemoryMedia** property.| No| Yes
|**MemorySubsystemControllerManufacturerID**|RedfishCS_char| String pointer to **MemorySubsystemControllerManufacturerID** property.| No| Yes
|**MemorySubsystemControllerProductID**|RedfishCS_char| String pointer to **MemorySubsystemControllerProductID** property.| No| Yes
|**MemoryType**|RedfishCS_char| String pointer to **MemoryType** property.| No| Yes
|**Metrics**|RedfishCS_Link| Structure link list to **Metrics** property.| No| Yes
|**ModuleManufacturerID**|RedfishCS_char| String pointer to **ModuleManufacturerID** property.| No| Yes
|**ModuleProductID**|RedfishCS_char| String pointer to **ModuleProductID** property.| No| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**NonVolatileSizeMiB**|RedfishCS_int64| 64-bit long long interger pointer to **NonVolatileSizeMiB** property.| No| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**OperatingMemoryModes**|RedfishCS_char| String pointer to **OperatingMemoryModes** property.| No| Yes
|**OperatingSpeedMhz**|RedfishCS_int64| 64-bit long long interger pointer to **OperatingSpeedMhz** property.| No| Yes
|**PartNumber**|RedfishCS_char| String pointer to **PartNumber** property.| No| Yes
|**PersistentRegionNumberLimit**|RedfishCS_int64| 64-bit long long interger pointer to **PersistentRegionNumberLimit** property.| No| Yes
|**PersistentRegionSizeLimitMiB**|RedfishCS_int64| 64-bit long long interger pointer to **PersistentRegionSizeLimitMiB** property.| No| Yes
|**PersistentRegionSizeMaxMiB**|RedfishCS_int64| 64-bit long long interger pointer to **PersistentRegionSizeMaxMiB** property.| No| Yes
|**PowerManagementPolicy**|RedfishMemory_V1_6_5_PowerManagementPolicy_CS| Structure points to **PowerManagementPolicy** property.| No| No
|**RankCount**|RedfishCS_int64| 64-bit long long interger pointer to **RankCount** property.| No| Yes
|**Regions**|RedfishMemory_V1_6_5_RegionSet_CS| Structure points to **Regions** property.| No| No
|**SecurityCapabilities**|RedfishMemory_V1_6_5_SecurityCapabilities_CS| Structure points to **SecurityCapabilities** property.| No| No
|**SerialNumber**|RedfishCS_char| String pointer to **SerialNumber** property.| No| Yes
|**SpareDeviceCount**|RedfishCS_int64| 64-bit long long interger pointer to **SpareDeviceCount** property.| No| Yes
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
|**SubsystemDeviceID**|RedfishCS_char| String pointer to **SubsystemDeviceID** property.| No| Yes
|**SubsystemVendorID**|RedfishCS_char| String pointer to **SubsystemVendorID** property.| No| Yes
|**VendorID**|RedfishCS_char| String pointer to **VendorID** property.| No| Yes
|**VolatileRegionNumberLimit**|RedfishCS_int64| 64-bit long long interger pointer to **VolatileRegionNumberLimit** property.| No| Yes
|**VolatileRegionSizeLimitMiB**|RedfishCS_int64| 64-bit long long interger pointer to **VolatileRegionSizeLimitMiB** property.| No| Yes
|**VolatileRegionSizeMaxMiB**|RedfishCS_int64| 64-bit long long interger pointer to **VolatileRegionSizeMaxMiB** property.| No| Yes
|**VolatileSizeMiB**|RedfishCS_int64| 64-bit long long interger pointer to **VolatileSizeMiB** property.| No| Yes
## Redfish Memory V1_6_5 to C Structure Function
    RedfishCS_status
    Json_Memory_V1_6_5_To_CS (RedfishCS_char *JsonRawText, RedfishMemory_V1_6_5_Memory_CS **ReturnedCS);

## C Structure to Redfish Memory V1_6_5 JSON Function
    RedfishCS_status
    CS_To_Memory_V1_6_5_JSON (RedfishMemory_V1_6_5_Memory_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish Memory V1_6_5 C Structure Function
    RedfishCS_status
    DestroyMemory_V1_6_5_CS (RedfishMemory_V1_6_5_Memory_CS *CSPtr);

