# Definition of Processor.V1_7_1 and functions<br><br>

## Actions
    typedef struct _RedfishProcessor_V1_7_1_Actions_CS {
        RedfishProcessor_V1_7_1_Reset_CS *Processor_Reset;
        RedfishProcessor_V1_7_1_OemActions_CS *Oem;
    } RedfishProcessor_V1_7_1_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Processor_Reset**|RedfishProcessor_V1_7_1_Reset_CS| Structure points to **#Processor.Reset** property.| No| No
|**Oem**|RedfishProcessor_V1_7_1_OemActions_CS| Structure points to **Oem** property.| No| No


## EthernetInterface
    typedef struct _RedfishProcessor_V1_7_1_EthernetInterface_CS {
        RedfishCS_int64 *MaxLanes;
        RedfishCS_int64 *MaxSpeedMbps;
        RedfishResource_Oem_CS *Oem;
    } RedfishProcessor_V1_7_1_EthernetInterface_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**MaxLanes**|RedfishCS_int64| 64-bit long long interger pointer to **MaxLanes** property.| No| Yes
|**MaxSpeedMbps**|RedfishCS_int64| 64-bit long long interger pointer to **MaxSpeedMbps** property.| No| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No


## FPGA
    typedef struct _RedfishProcessor_V1_7_1_FPGA_CS {
        RedfishProcessor_V1_7_1_ProcessorInterface_Array_CS *ExternalInterfaces;
        RedfishCS_char *FirmwareId;
        RedfishCS_char *FirmwareManufacturer;
        RedfishCS_char *FirmwareVersion;
        RedfishCS_char *FpgaType;
        RedfishProcessor_V1_7_1_ProcessorInterface_CS *HostInterface;
        RedfishCS_char *Model;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_int64 *PCIeVirtualFunctions;
        RedfishCS_bool *ProgrammableFromHost;
        RedfishProcessor_V1_7_1_FpgaReconfigurationSlot_Array_CS *ReconfigurationSlots;
    } RedfishProcessor_V1_7_1_FPGA_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**ExternalInterfaces**|RedfishProcessor_V1_7_1_ProcessorInterface_Array_CS| Structure array points to one or more than one **RedfishProcessor_V1_7_1_ProcessorInterface_Array_CS** structures for property **ExternalInterfaces**.| No| No
|**FirmwareId**|RedfishCS_char| String pointer to **FirmwareId** property.| No| Yes
|**FirmwareManufacturer**|RedfishCS_char| String pointer to **FirmwareManufacturer** property.| No| Yes
|**FirmwareVersion**|RedfishCS_char| String pointer to **FirmwareVersion** property.| No| Yes
|**FpgaType**|RedfishCS_char| String pointer to **FpgaType** property.| No| Yes
|**HostInterface**|RedfishProcessor_V1_7_1_ProcessorInterface_CS| Structure points to **HostInterface** property.| No| No
|**Model**|RedfishCS_char| String pointer to **Model** property.| No| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**PCIeVirtualFunctions**|RedfishCS_int64| 64-bit long long interger pointer to **PCIeVirtualFunctions** property.| No| No
|**ProgrammableFromHost**|RedfishCS_bool| Boolean pointer to **ProgrammableFromHost** property.| No| No
|**ReconfigurationSlots**|RedfishProcessor_V1_7_1_FpgaReconfigurationSlot_Array_CS| Structure array points to one or more than one **RedfishProcessor_V1_7_1_FpgaReconfigurationSlot_Array_CS** structures for property **ReconfigurationSlots**.| No| No


## FpgaReconfigurationSlot
    typedef struct _RedfishProcessor_V1_7_1_FpgaReconfigurationSlot_CS {
        RedfishCS_Link AccelerationFunction;
        RedfishCS_bool *ProgrammableFromHost;
        RedfishCS_char *SlotId;
        RedfishCS_char *UUID;
    } RedfishProcessor_V1_7_1_FpgaReconfigurationSlot_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**AccelerationFunction**|RedfishCS_Link| Structure link list to **AccelerationFunction** property.| No| Yes
|**ProgrammableFromHost**|RedfishCS_bool| Boolean pointer to **ProgrammableFromHost** property.| No| No
|**SlotId**|RedfishCS_char| String pointer to **SlotId** property.| No| Yes
|**UUID**|RedfishCS_char| String pointer to **UUID** property.| No| Yes


## Links
    typedef struct _RedfishProcessor_V1_7_1_Links_CS {
        RedfishCS_Link Chassis;
        RedfishCS_Link ConnectedProcessors;
        RedfishCS_int64 *ConnectedProcessorsodata_count;
        RedfishCS_Link Endpoints;
        RedfishCS_int64 *Endpointsodata_count;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_Link PCIeDevice;
        RedfishCS_Link PCIeFunctions;
        RedfishCS_int64 *PCIeFunctionsodata_count;
    } RedfishProcessor_V1_7_1_Links_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Chassis**|RedfishCS_Link| Structure link list to **Chassis** property.| No| Yes
|**ConnectedProcessors**|RedfishCS_Link| Structure link list to **ConnectedProcessors** property.| No| Yes
|**ConnectedProcessorsodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **ConnectedProcessors@odata.count** property.| No| No
|**Endpoints**|RedfishCS_Link| Structure link list to **Endpoints** property.| No| Yes
|**Endpointsodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **Endpoints@odata.count** property.| No| No
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**PCIeDevice**|RedfishCS_Link| Structure link list to **PCIeDevice** property.| No| Yes
|**PCIeFunctions**|RedfishCS_Link| Structure link list to **PCIeFunctions** property.| No| Yes
|**PCIeFunctionsodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **PCIeFunctions@odata.count** property.| No| No


## OemActions
    typedef struct _RedfishProcessor_V1_7_1_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishProcessor_V1_7_1_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## ProcessorId
    typedef struct _RedfishProcessor_V1_7_1_ProcessorId_CS {
        RedfishCS_char *EffectiveFamily;
        RedfishCS_char *EffectiveModel;
        RedfishCS_char *IdentificationRegisters;
        RedfishCS_char *MicrocodeInfo;
        RedfishCS_char *Step;
        RedfishCS_char *VendorId;
    } RedfishProcessor_V1_7_1_ProcessorId_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**EffectiveFamily**|RedfishCS_char| String pointer to **EffectiveFamily** property.| No| Yes
|**EffectiveModel**|RedfishCS_char| String pointer to **EffectiveModel** property.| No| Yes
|**IdentificationRegisters**|RedfishCS_char| String pointer to **IdentificationRegisters** property.| No| Yes
|**MicrocodeInfo**|RedfishCS_char| String pointer to **MicrocodeInfo** property.| No| Yes
|**Step**|RedfishCS_char| String pointer to **Step** property.| No| Yes
|**VendorId**|RedfishCS_char| String pointer to **VendorId** property.| No| Yes


## ProcessorInterface
    typedef struct _RedfishProcessor_V1_7_1_ProcessorInterface_CS {
        RedfishProcessor_V1_7_1_EthernetInterface_CS *Ethernet;
        RedfishCS_char *InterfaceType;
        RedfishCS_Link PCIe;
    } RedfishProcessor_V1_7_1_ProcessorInterface_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Ethernet**|RedfishProcessor_V1_7_1_EthernetInterface_CS| Structure points to **Ethernet** property.| No| No
|**InterfaceType**|RedfishCS_char| String pointer to **InterfaceType** property.| No| Yes
|**PCIe**|RedfishCS_Link| Structure link list to **PCIe** property.| No| No


## ProcessorMemory
    typedef struct _RedfishProcessor_V1_7_1_ProcessorMemory_CS {
        RedfishCS_int64 *CapacityMiB;
        RedfishCS_bool *IntegratedMemory;
        RedfishCS_char *MemoryType;
        RedfishCS_int64 *SpeedMHz;
    } RedfishProcessor_V1_7_1_ProcessorMemory_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**CapacityMiB**|RedfishCS_int64| 64-bit long long interger pointer to **CapacityMiB** property.| No| Yes
|**IntegratedMemory**|RedfishCS_bool| Boolean pointer to **IntegratedMemory** property.| No| Yes
|**MemoryType**|RedfishCS_char| String pointer to **MemoryType** property.| No| Yes
|**SpeedMHz**|RedfishCS_int64| 64-bit long long interger pointer to **SpeedMHz** property.| No| Yes


## Reset
    typedef struct _RedfishProcessor_V1_7_1_Reset_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishProcessor_V1_7_1_Reset_CS;

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


## RedfishProcessor_V1_7_1_ProcessorInterface_Array_CS
    typedef struct _RedfishProcessor_V1_7_1_ProcessorInterface_Array_CS  {
        RedfishCS_Link *Next;
        RedfishProcessor_V1_7_1_ProcessorInterface_CS *ArrayValue;
    } RedfishProcessor_V1_7_1_ProcessorInterface_Array_CS;



## RedfishProcessor_V1_7_1_FpgaReconfigurationSlot_Array_CS
    typedef struct _RedfishProcessor_V1_7_1_FpgaReconfigurationSlot_Array_CS  {
        RedfishCS_Link *Next;
        RedfishProcessor_V1_7_1_FpgaReconfigurationSlot_CS *ArrayValue;
    } RedfishProcessor_V1_7_1_FpgaReconfigurationSlot_Array_CS;



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



## Processor
    typedef struct _RedfishProcessor_V1_7_1_Processor_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishCS_Link AccelerationFunctions;
        RedfishProcessor_V1_7_1_Actions_CS *Actions;
        RedfishCS_Link Assembly;
        RedfishCS_char *Description;
        RedfishProcessor_V1_7_1_FPGA_CS *FPGA;
        RedfishCS_char *FirmwareVersion;
        RedfishCS_char *Id;
        RedfishCS_char *InstructionSet;
        RedfishProcessor_V1_7_1_Links_CS *Links;
        RedfishCS_Link Location;
        RedfishCS_char *Manufacturer;
        RedfishCS_int64 *MaxSpeedMHz;
        RedfishCS_int64 *MaxTDPWatts;
        RedfishCS_Link Metrics;
        RedfishCS_char *Model;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_char *PartNumber;
        RedfishCS_char *ProcessorArchitecture;
        RedfishProcessor_V1_7_1_ProcessorId_CS *ProcessorId;
        RedfishProcessor_V1_7_1_ProcessorMemory_CS *ProcessorMemory;
        RedfishCS_char *ProcessorType;
        RedfishCS_char *SerialNumber;
        RedfishCS_char *Socket;
        RedfishResource_Status_CS *Status;
        RedfishCS_Link SubProcessors;
        RedfishCS_int64 *TDPWatts;
        RedfishCS_int64 *TotalCores;
        RedfishCS_int64 *TotalEnabledCores;
        RedfishCS_int64 *TotalThreads;
        RedfishCS_char *UUID;
        RedfishCS_char *Version;
    } RedfishProcessor_V1_7_1_Processor_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**AccelerationFunctions**|RedfishCS_Link| Structure link list to **AccelerationFunctions** property.| No| Yes
|**Actions**|RedfishProcessor_V1_7_1_Actions_CS| Structure points to **Actions** property.| No| No
|**Assembly**|RedfishCS_Link| Structure link list to **Assembly** property.| No| Yes
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**FPGA**|RedfishProcessor_V1_7_1_FPGA_CS| Structure points to **FPGA** property.| No| No
|**FirmwareVersion**|RedfishCS_char| String pointer to **FirmwareVersion** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**InstructionSet**|RedfishCS_char| String pointer to **InstructionSet** property.| No| Yes
|**Links**|RedfishProcessor_V1_7_1_Links_CS| Structure points to **Links** property.| No| No
|**Location**|RedfishCS_Link| Structure link list to **Location** property.| No| No
|**Manufacturer**|RedfishCS_char| String pointer to **Manufacturer** property.| No| Yes
|**MaxSpeedMHz**|RedfishCS_int64| 64-bit long long interger pointer to **MaxSpeedMHz** property.| No| Yes
|**MaxTDPWatts**|RedfishCS_int64| 64-bit long long interger pointer to **MaxTDPWatts** property.| No| Yes
|**Metrics**|RedfishCS_Link| Structure link list to **Metrics** property.| No| Yes
|**Model**|RedfishCS_char| String pointer to **Model** property.| No| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**PartNumber**|RedfishCS_char| String pointer to **PartNumber** property.| No| Yes
|**ProcessorArchitecture**|RedfishCS_char| String pointer to **ProcessorArchitecture** property.| No| Yes
|**ProcessorId**|RedfishProcessor_V1_7_1_ProcessorId_CS| Structure points to **ProcessorId** property.| No| No
|**ProcessorMemory**|RedfishProcessor_V1_7_1_ProcessorMemory_CS| Structure points to **ProcessorMemory** property.| No| No
|**ProcessorType**|RedfishCS_char| String pointer to **ProcessorType** property.| No| Yes
|**SerialNumber**|RedfishCS_char| String pointer to **SerialNumber** property.| No| Yes
|**Socket**|RedfishCS_char| String pointer to **Socket** property.| No| Yes
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
|**SubProcessors**|RedfishCS_Link| Structure link list to **SubProcessors** property.| No| Yes
|**TDPWatts**|RedfishCS_int64| 64-bit long long interger pointer to **TDPWatts** property.| No| Yes
|**TotalCores**|RedfishCS_int64| 64-bit long long interger pointer to **TotalCores** property.| No| Yes
|**TotalEnabledCores**|RedfishCS_int64| 64-bit long long interger pointer to **TotalEnabledCores** property.| No| Yes
|**TotalThreads**|RedfishCS_int64| 64-bit long long interger pointer to **TotalThreads** property.| No| Yes
|**UUID**|RedfishCS_char| String pointer to **UUID** property.| No| Yes
|**Version**|RedfishCS_char| String pointer to **Version** property.| No| Yes
## Redfish Processor V1_7_1 to C Structure Function
    RedfishCS_status
    Json_Processor_V1_7_1_To_CS (RedfishCS_char *JsonRawText, RedfishProcessor_V1_7_1_Processor_CS **ReturnedCS);

## C Structure to Redfish Processor V1_7_1 JSON Function
    RedfishCS_status
    CS_To_Processor_V1_7_1_JSON (RedfishProcessor_V1_7_1_Processor_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish Processor V1_7_1 C Structure Function
    RedfishCS_status
    DestroyProcessor_V1_7_1_CS (RedfishProcessor_V1_7_1_Processor_CS *CSPtr);

