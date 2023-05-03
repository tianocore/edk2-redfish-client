# Definition of NetworkAdapter.V1_3_3 and functions<br><br>

## Actions
    typedef struct _RedfishNetworkAdapter_V1_3_3_Actions_CS {
        RedfishNetworkAdapter_V1_3_3_ResetSettingsToDefault_CS *NetworkAdapter_ResetSettingsToDefault;
        RedfishNetworkAdapter_V1_3_3_OemActions_CS *Oem;
    } RedfishNetworkAdapter_V1_3_3_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**NetworkAdapter_ResetSettingsToDefault**|RedfishNetworkAdapter_V1_3_3_ResetSettingsToDefault_CS| Structure points to **#NetworkAdapter.ResetSettingsToDefault** property.| No| No
|**Oem**|RedfishNetworkAdapter_V1_3_3_OemActions_CS| Structure points to **Oem** property.| No| No


## ControllerCapabilities
    typedef struct _RedfishNetworkAdapter_V1_3_3_ControllerCapabilities_CS {
        RedfishNetworkAdapter_V1_3_3_DataCenterBridging_CS *DataCenterBridging;
        RedfishNetworkAdapter_V1_3_3_NicPartitioning_CS *NPAR;
        RedfishNetworkAdapter_V1_3_3_NPIV_CS *NPIV;
        RedfishCS_int64 *NetworkDeviceFunctionCount;
        RedfishCS_int64 *NetworkPortCount;
        RedfishNetworkAdapter_V1_3_3_VirtualizationOffload_CS *VirtualizationOffload;
    } RedfishNetworkAdapter_V1_3_3_ControllerCapabilities_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**DataCenterBridging**|RedfishNetworkAdapter_V1_3_3_DataCenterBridging_CS| Structure points to **DataCenterBridging** property.| No| No
|**NPAR**|RedfishNetworkAdapter_V1_3_3_NicPartitioning_CS| Structure points to **NPAR** property.| No| No
|**NPIV**|RedfishNetworkAdapter_V1_3_3_NPIV_CS| Structure points to **NPIV** property.| No| No
|**NetworkDeviceFunctionCount**|RedfishCS_int64| 64-bit long long interger pointer to **NetworkDeviceFunctionCount** property.| No| Yes
|**NetworkPortCount**|RedfishCS_int64| 64-bit long long interger pointer to **NetworkPortCount** property.| No| Yes
|**VirtualizationOffload**|RedfishNetworkAdapter_V1_3_3_VirtualizationOffload_CS| Structure points to **VirtualizationOffload** property.| No| No


## ControllerLinks
    typedef struct _RedfishNetworkAdapter_V1_3_3_ControllerLinks_CS {
        RedfishCS_Link NetworkDeviceFunctions;
        RedfishCS_int64 *NetworkDeviceFunctionsodata_count;
        RedfishCS_Link NetworkPorts;
        RedfishCS_int64 *NetworkPortsodata_count;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_Link PCIeDevices;
        RedfishCS_int64 *PCIeDevicesodata_count;
    } RedfishNetworkAdapter_V1_3_3_ControllerLinks_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**NetworkDeviceFunctions**|RedfishCS_Link| Structure link list to **NetworkDeviceFunctions** property.| No| Yes
|**NetworkDeviceFunctionsodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **NetworkDeviceFunctions@odata.count** property.| No| No
|**NetworkPorts**|RedfishCS_Link| Structure link list to **NetworkPorts** property.| No| Yes
|**NetworkPortsodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **NetworkPorts@odata.count** property.| No| No
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**PCIeDevices**|RedfishCS_Link| Structure link list to **PCIeDevices** property.| No| Yes
|**PCIeDevicesodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **PCIeDevices@odata.count** property.| No| No


## Controllers
    typedef struct _RedfishNetworkAdapter_V1_3_3_Controllers_CS {
        RedfishNetworkAdapter_V1_3_3_ControllerCapabilities_CS *ControllerCapabilities;
        RedfishCS_char *FirmwarePackageVersion;
        RedfishCS_Link Identifiers;
        RedfishNetworkAdapter_V1_3_3_ControllerLinks_CS *Links;
        RedfishCS_Link Location;
        RedfishCS_Link PCIeInterface;
    } RedfishNetworkAdapter_V1_3_3_Controllers_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**ControllerCapabilities**|RedfishNetworkAdapter_V1_3_3_ControllerCapabilities_CS| Structure points to **ControllerCapabilities** property.| No| No
|**FirmwarePackageVersion**|RedfishCS_char| String pointer to **FirmwarePackageVersion** property.| No| Yes
|**Identifiers**|RedfishCS_Link| Structure link list to **Identifiers** property.| No| No
|**Links**|RedfishNetworkAdapter_V1_3_3_ControllerLinks_CS| Structure points to **Links** property.| No| No
|**Location**|RedfishCS_Link| Structure link list to **Location** property.| No| No
|**PCIeInterface**|RedfishCS_Link| Structure link list to **PCIeInterface** property.| No| No


## DataCenterBridging
    typedef struct _RedfishNetworkAdapter_V1_3_3_DataCenterBridging_CS {
        RedfishCS_bool *Capable;
    } RedfishNetworkAdapter_V1_3_3_DataCenterBridging_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Capable**|RedfishCS_bool| Boolean pointer to **Capable** property.| No| Yes


## NPIV
    typedef struct _RedfishNetworkAdapter_V1_3_3_NPIV_CS {
        RedfishCS_int64 *MaxDeviceLogins;
        RedfishCS_int64 *MaxPortLogins;
    } RedfishNetworkAdapter_V1_3_3_NPIV_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**MaxDeviceLogins**|RedfishCS_int64| 64-bit long long interger pointer to **MaxDeviceLogins** property.| No| Yes
|**MaxPortLogins**|RedfishCS_int64| 64-bit long long interger pointer to **MaxPortLogins** property.| No| Yes


## NicPartitioning
    typedef struct _RedfishNetworkAdapter_V1_3_3_NicPartitioning_CS {
        RedfishCS_bool *NparCapable;
        RedfishCS_bool *NparEnabled;
    } RedfishNetworkAdapter_V1_3_3_NicPartitioning_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**NparCapable**|RedfishCS_bool| Boolean pointer to **NparCapable** property.| No| Yes
|**NparEnabled**|RedfishCS_bool| Boolean pointer to **NparEnabled** property.| No| No


## OemActions
    typedef struct _RedfishNetworkAdapter_V1_3_3_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishNetworkAdapter_V1_3_3_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## ResetSettingsToDefault
    typedef struct _RedfishNetworkAdapter_V1_3_3_ResetSettingsToDefault_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishNetworkAdapter_V1_3_3_ResetSettingsToDefault_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**target**|RedfishCS_char| String pointer to **target** property.| No| No
|**title**|RedfishCS_char| String pointer to **title** property.| No| No


## SRIOV
    typedef struct _RedfishNetworkAdapter_V1_3_3_SRIOV_CS {
        RedfishCS_bool *SRIOVVEPACapable;
    } RedfishNetworkAdapter_V1_3_3_SRIOV_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**SRIOVVEPACapable**|RedfishCS_bool| Boolean pointer to **SRIOVVEPACapable** property.| No| Yes


## VirtualFunction
    typedef struct _RedfishNetworkAdapter_V1_3_3_VirtualFunction_CS {
        RedfishCS_int64 *DeviceMaxCount;
        RedfishCS_int64 *MinAssignmentGroupSize;
        RedfishCS_int64 *NetworkPortMaxCount;
    } RedfishNetworkAdapter_V1_3_3_VirtualFunction_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**DeviceMaxCount**|RedfishCS_int64| 64-bit long long interger pointer to **DeviceMaxCount** property.| No| Yes
|**MinAssignmentGroupSize**|RedfishCS_int64| 64-bit long long interger pointer to **MinAssignmentGroupSize** property.| No| Yes
|**NetworkPortMaxCount**|RedfishCS_int64| 64-bit long long interger pointer to **NetworkPortMaxCount** property.| No| Yes


## VirtualizationOffload
    typedef struct _RedfishNetworkAdapter_V1_3_3_VirtualizationOffload_CS {
        RedfishNetworkAdapter_V1_3_3_SRIOV_CS *SRIOV;
        RedfishNetworkAdapter_V1_3_3_VirtualFunction_CS *VirtualFunction;
    } RedfishNetworkAdapter_V1_3_3_VirtualizationOffload_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**SRIOV**|RedfishNetworkAdapter_V1_3_3_SRIOV_CS| Structure points to **SRIOV** property.| No| No
|**VirtualFunction**|RedfishNetworkAdapter_V1_3_3_VirtualFunction_CS| Structure points to **VirtualFunction** property.| No| No


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



## NetworkAdapter
    typedef struct _RedfishNetworkAdapter_V1_3_3_NetworkAdapter_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishNetworkAdapter_V1_3_3_Actions_CS *Actions;
        RedfishCS_Link Assembly;
        RedfishNetworkAdapter_V1_3_3_Controllers_CS *Controllers;
        RedfishCS_char *Description;
        RedfishCS_char *Id;
        RedfishCS_char *Manufacturer;
        RedfishCS_char *Model;
        RedfishCS_char *Name;
        RedfishCS_Link NetworkDeviceFunctions;
        RedfishCS_Link NetworkPorts;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_char *PartNumber;
        RedfishCS_char *SKU;
        RedfishCS_char *SerialNumber;
        RedfishResource_Status_CS *Status;
    } RedfishNetworkAdapter_V1_3_3_NetworkAdapter_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishNetworkAdapter_V1_3_3_Actions_CS| Structure points to **Actions** property.| No| No
|**Assembly**|RedfishCS_Link| Structure link list to **Assembly** property.| No| Yes
|**Controllers**|RedfishNetworkAdapter_V1_3_3_Controllers_CS| Structure points to **Controllers** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**Manufacturer**|RedfishCS_char| String pointer to **Manufacturer** property.| No| Yes
|**Model**|RedfishCS_char| String pointer to **Model** property.| No| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**NetworkDeviceFunctions**|RedfishCS_Link| Structure link list to **NetworkDeviceFunctions** property.| No| Yes
|**NetworkPorts**|RedfishCS_Link| Structure link list to **NetworkPorts** property.| No| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**PartNumber**|RedfishCS_char| String pointer to **PartNumber** property.| No| Yes
|**SKU**|RedfishCS_char| String pointer to **SKU** property.| No| Yes
|**SerialNumber**|RedfishCS_char| String pointer to **SerialNumber** property.| No| Yes
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
## Redfish NetworkAdapter V1_3_3 to C Structure Function
    RedfishCS_status
    Json_NetworkAdapter_V1_3_3_To_CS (RedfishCS_char *JsonRawText, RedfishNetworkAdapter_V1_3_3_NetworkAdapter_CS **ReturnedCS);

## C Structure to Redfish NetworkAdapter V1_3_3 JSON Function
    RedfishCS_status
    CS_To_NetworkAdapter_V1_3_3_JSON (RedfishNetworkAdapter_V1_3_3_NetworkAdapter_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish NetworkAdapter V1_3_3 C Structure Function
    RedfishCS_status
    DestroyNetworkAdapter_V1_3_3_CS (RedfishNetworkAdapter_V1_3_3_NetworkAdapter_CS *CSPtr);

