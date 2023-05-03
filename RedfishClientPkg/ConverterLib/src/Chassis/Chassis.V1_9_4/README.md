# Definition of Chassis.V1_9_4 and functions<br><br>

## Actions
    typedef struct _RedfishChassis_V1_9_4_Actions_CS {
        RedfishChassis_V1_9_4_Reset_CS *Chassis_Reset;
        RedfishChassis_V1_9_4_OemActions_CS *Oem;
    } RedfishChassis_V1_9_4_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Chassis_Reset**|RedfishChassis_V1_9_4_Reset_CS| Structure points to **#Chassis.Reset** property.| No| No
|**Oem**|RedfishChassis_V1_9_4_OemActions_CS| Structure points to **Oem** property.| No| No


## Links
    typedef struct _RedfishChassis_V1_9_4_Links_CS {
        RedfishCS_Link ComputerSystems;
        RedfishCS_int64 *ComputerSystemsodata_count;
        RedfishCS_Link ContainedBy;
        RedfishCS_Link Contains;
        RedfishCS_int64 *Containsodata_count;
        Redfishodatav4_idRef_Array_CS *CooledBy;
        RedfishCS_int64 *CooledByodata_count;
        RedfishCS_Link Drives;
        RedfishCS_int64 *Drivesodata_count;
        RedfishCS_Link ManagedBy;
        RedfishCS_int64 *ManagedByodata_count;
        RedfishCS_Link ManagersInChassis;
        RedfishCS_int64 *ManagersInChassisodata_count;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_Link PCIeDevices;
        RedfishCS_int64 *PCIeDevicesodata_count;
        Redfishodatav4_idRef_Array_CS *PoweredBy;
        RedfishCS_int64 *PoweredByodata_count;
        RedfishCS_Link Processors;
        RedfishCS_int64 *Processorsodata_count;
        RedfishCS_Link ResourceBlocks;
        RedfishCS_int64 *ResourceBlocksodata_count;
        RedfishCS_Link Storage;
        RedfishCS_int64 *Storageodata_count;
        RedfishCS_Link Switches;
        RedfishCS_int64 *Switchesodata_count;
    } RedfishChassis_V1_9_4_Links_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**ComputerSystems**|RedfishCS_Link| Structure link list to **ComputerSystems** property.| No| Yes
|**ComputerSystemsodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **ComputerSystems@odata.count** property.| No| No
|**ContainedBy**|RedfishCS_Link| Structure link list to **ContainedBy** property.| No| No
|**Contains**|RedfishCS_Link| Structure link list to **Contains** property.| No| No
|**Containsodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **Contains@odata.count** property.| No| No
|**CooledBy**|Redfishodatav4_idRef_Array_CS| Structure array points to one or more than one **Redfishodatav4_idRef_Array_CS** structures for property **CooledBy**.| No| Yes
|**CooledByodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **CooledBy@odata.count** property.| No| No
|**Drives**|RedfishCS_Link| Structure link list to **Drives** property.| No| Yes
|**Drivesodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **Drives@odata.count** property.| No| No
|**ManagedBy**|RedfishCS_Link| Structure link list to **ManagedBy** property.| No| Yes
|**ManagedByodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **ManagedBy@odata.count** property.| No| No
|**ManagersInChassis**|RedfishCS_Link| Structure link list to **ManagersInChassis** property.| No| Yes
|**ManagersInChassisodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **ManagersInChassis@odata.count** property.| No| No
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**PCIeDevices**|RedfishCS_Link| Structure link list to **PCIeDevices** property.| No| Yes
|**PCIeDevicesodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **PCIeDevices@odata.count** property.| No| No
|**PoweredBy**|Redfishodatav4_idRef_Array_CS| Structure array points to one or more than one **Redfishodatav4_idRef_Array_CS** structures for property **PoweredBy**.| No| Yes
|**PoweredByodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **PoweredBy@odata.count** property.| No| No
|**Processors**|RedfishCS_Link| Structure link list to **Processors** property.| No| Yes
|**Processorsodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **Processors@odata.count** property.| No| No
|**ResourceBlocks**|RedfishCS_Link| Structure link list to **ResourceBlocks** property.| No| Yes
|**ResourceBlocksodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **ResourceBlocks@odata.count** property.| No| No
|**Storage**|RedfishCS_Link| Structure link list to **Storage** property.| No| Yes
|**Storageodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **Storage@odata.count** property.| No| No
|**Switches**|RedfishCS_Link| Structure link list to **Switches** property.| No| Yes
|**Switchesodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **Switches@odata.count** property.| No| No


## OemActions
    typedef struct _RedfishChassis_V1_9_4_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishChassis_V1_9_4_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## PhysicalSecurity
    typedef struct _RedfishChassis_V1_9_4_PhysicalSecurity_CS {
        RedfishCS_char *IntrusionSensor;
        RedfishCS_int64 *IntrusionSensorNumber;
        RedfishCS_char *IntrusionSensorReArm;
    } RedfishChassis_V1_9_4_PhysicalSecurity_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**IntrusionSensor**|RedfishCS_char| String pointer to **IntrusionSensor** property.| No| No
|**IntrusionSensorNumber**|RedfishCS_int64| 64-bit long long interger pointer to **IntrusionSensorNumber** property.| No| Yes
|**IntrusionSensorReArm**|RedfishCS_char| String pointer to **IntrusionSensorReArm** property.| No| Yes


## Reset
    typedef struct _RedfishChassis_V1_9_4_Reset_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishChassis_V1_9_4_Reset_CS;

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


## Redfishodatav4_idRef_Array_CS
    typedef struct _Redfishodatav4_idRef_Array_CS  {
        RedfishCS_Link *Next;
        Redfishodatav4_idRef_CS *ArrayValue;
    } Redfishodatav4_idRef_Array_CS;



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



## Chassis
    typedef struct _RedfishChassis_V1_9_4_Chassis_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishChassis_V1_9_4_Actions_CS *Actions;
        RedfishCS_Link Assembly;
        RedfishCS_char *AssetTag;
        RedfishCS_char *ChassisType;
        RedfishCS_int64 *DepthMm;
        RedfishCS_char *Description;
        RedfishCS_char *EnvironmentalClass;
        RedfishCS_int64 *HeightMm;
        RedfishCS_char *Id;
        RedfishCS_char *IndicatorLED;
        RedfishChassis_V1_9_4_Links_CS *Links;
        RedfishCS_Link Location;
        RedfishCS_Link LogServices;
        RedfishCS_char *Manufacturer;
        RedfishCS_char *Model;
        RedfishCS_char *Name;
        RedfishCS_Link NetworkAdapters;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_Link PCIeSlots;
        RedfishCS_char *PartNumber;
        RedfishChassis_V1_9_4_PhysicalSecurity_CS *PhysicalSecurity;
        RedfishCS_Link Power;
        RedfishCS_char *PowerState;
        RedfishCS_char *SKU;
        RedfishCS_Link Sensors;
        RedfishCS_char *SerialNumber;
        RedfishResource_Status_CS *Status;
        RedfishCS_Link Thermal;
        RedfishCS_char *UUID;
        RedfishCS_int64 *WeightKg;
        RedfishCS_int64 *WidthMm;
    } RedfishChassis_V1_9_4_Chassis_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishChassis_V1_9_4_Actions_CS| Structure points to **Actions** property.| No| No
|**Assembly**|RedfishCS_Link| Structure link list to **Assembly** property.| No| Yes
|**AssetTag**|RedfishCS_char| String pointer to **AssetTag** property.| No| No
|**ChassisType**|RedfishCS_char| String pointer to **ChassisType** property.| Yes| Yes
|**DepthMm**|RedfishCS_int64| 64-bit long long interger pointer to **DepthMm** property.| No| Yes
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**EnvironmentalClass**|RedfishCS_char| String pointer to **EnvironmentalClass** property.| No| Yes
|**HeightMm**|RedfishCS_int64| 64-bit long long interger pointer to **HeightMm** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**IndicatorLED**|RedfishCS_char| String pointer to **IndicatorLED** property.| No| No
|**Links**|RedfishChassis_V1_9_4_Links_CS| Structure points to **Links** property.| No| No
|**Location**|RedfishCS_Link| Structure link list to **Location** property.| No| No
|**LogServices**|RedfishCS_Link| Structure link list to **LogServices** property.| No| Yes
|**Manufacturer**|RedfishCS_char| String pointer to **Manufacturer** property.| No| Yes
|**Model**|RedfishCS_char| String pointer to **Model** property.| No| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**NetworkAdapters**|RedfishCS_Link| Structure link list to **NetworkAdapters** property.| No| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**PCIeSlots**|RedfishCS_Link| Structure link list to **PCIeSlots** property.| No| Yes
|**PartNumber**|RedfishCS_char| String pointer to **PartNumber** property.| No| Yes
|**PhysicalSecurity**|RedfishChassis_V1_9_4_PhysicalSecurity_CS| Structure points to **PhysicalSecurity** property.| No| No
|**Power**|RedfishCS_Link| Structure link list to **Power** property.| No| Yes
|**PowerState**|RedfishCS_char| String pointer to **PowerState** property.| No| Yes
|**SKU**|RedfishCS_char| String pointer to **SKU** property.| No| Yes
|**Sensors**|RedfishCS_Link| Structure link list to **Sensors** property.| No| Yes
|**SerialNumber**|RedfishCS_char| String pointer to **SerialNumber** property.| No| Yes
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
|**Thermal**|RedfishCS_Link| Structure link list to **Thermal** property.| No| Yes
|**UUID**|RedfishCS_char| String pointer to **UUID** property.| No| Yes
|**WeightKg**|RedfishCS_int64| 64-bit long long interger pointer to **WeightKg** property.| No| Yes
|**WidthMm**|RedfishCS_int64| 64-bit long long interger pointer to **WidthMm** property.| No| Yes
## Redfish Chassis V1_9_4 to C Structure Function
    RedfishCS_status
    Json_Chassis_V1_9_4_To_CS (RedfishCS_char *JsonRawText, RedfishChassis_V1_9_4_Chassis_CS **ReturnedCS);

## C Structure to Redfish Chassis V1_9_4 JSON Function
    RedfishCS_status
    CS_To_Chassis_V1_9_4_JSON (RedfishChassis_V1_9_4_Chassis_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish Chassis V1_9_4 C Structure Function
    RedfishCS_status
    DestroyChassis_V1_9_4_CS (RedfishChassis_V1_9_4_Chassis_CS *CSPtr);

