# Definition of PCIeFunction.V1_0_0 and functions<br><br>

## PCIeFunction_Links
    typedef struct _RedfishPCIeFunction_V1_0_0_PCIeFunction_Links_CS {
        RedfishCS_Link Drives;
        RedfishCS_int64 *Drivesodata_count;
        RedfishCS_char *Drivesodata_navigationLink;
        RedfishCS_Link EthernetInterfaces;
        RedfishCS_int64 *EthernetInterfacesodata_count;
        RedfishCS_char *EthernetInterfacesodata_navigationLink;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_Link PCIeDevice;
        RedfishCS_Link StorageControllers;
        RedfishCS_int64 *StorageControllersodata_count;
        RedfishCS_char *StorageControllersodata_navigationLink;
    } RedfishPCIeFunction_V1_0_0_PCIeFunction_Links_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Drives**|RedfishCS_Link| Structure link list to **Drives** property.| No| Yes
|**Drivesodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **Drives@odata.count** property.| No| No
|**Drivesodata_navigationLink**|RedfishCS_char| String pointer to **Drives@odata.navigationLink** property.| No| No
|**EthernetInterfaces**|RedfishCS_Link| Structure link list to **EthernetInterfaces** property.| No| Yes
|**EthernetInterfacesodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **EthernetInterfaces@odata.count** property.| No| No
|**EthernetInterfacesodata_navigationLink**|RedfishCS_char| String pointer to **EthernetInterfaces@odata.navigationLink** property.| No| No
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**PCIeDevice**|RedfishCS_Link| Structure link list to **PCIeDevice** property.| No| Yes
|**StorageControllers**|RedfishCS_Link| Structure link list to **StorageControllers** property.| No| Yes
|**StorageControllersodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **StorageControllers@odata.count** property.| No| No
|**StorageControllersodata_navigationLink**|RedfishCS_char| String pointer to **StorageControllers@odata.navigationLink** property.| No| No


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
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| No| No


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



## PCIeFunction
    typedef struct _RedfishPCIeFunction_V1_0_0_PCIeFunction_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishCS_char *ClassCode;
        RedfishCS_char *Description;
        RedfishCS_char *DeviceClass;
        RedfishCS_char *DeviceId;
        RedfishCS_int64 *FunctionId;
        RedfishCS_char *FunctionType;
        RedfishCS_char *Id;
        RedfishPCIeFunction_V1_0_0_PCIeFunction_Links_CS *Links;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_char *RevisionId;
        RedfishResource_Status_CS *Status;
        RedfishCS_char *SubsystemId;
        RedfishCS_char *SubsystemVendorId;
        RedfishCS_char *VendorId;
    } RedfishPCIeFunction_V1_0_0_PCIeFunction_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| No| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| No| No
|**ClassCode**|RedfishCS_char| String pointer to **ClassCode** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| No
|**DeviceClass**|RedfishCS_char| String pointer to **DeviceClass** property.| No| Yes
|**DeviceId**|RedfishCS_char| String pointer to **DeviceId** property.| No| No
|**FunctionId**|RedfishCS_int64| 64-bit long long interger pointer to **FunctionId** property.| No| Yes
|**FunctionType**|RedfishCS_char| String pointer to **FunctionType** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| No
|**Links**|RedfishPCIeFunction_V1_0_0_PCIeFunction_Links_CS| Structure points to **Links** property.| No| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| No
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**RevisionId**|RedfishCS_char| String pointer to **RevisionId** property.| No| No
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
|**SubsystemId**|RedfishCS_char| String pointer to **SubsystemId** property.| No| No
|**SubsystemVendorId**|RedfishCS_char| String pointer to **SubsystemVendorId** property.| No| No
|**VendorId**|RedfishCS_char| String pointer to **VendorId** property.| No| No
## Redfish PCIeFunction V1_0_0 to C Structure Function
    RedfishCS_status
    Json_PCIeFunction_V1_0_0_To_CS (RedfishCS_char *JsonRawText, RedfishPCIeFunction_V1_0_0_PCIeFunction_CS **ReturnedCS);

## C Structure to Redfish PCIeFunction V1_0_0 JSON Function
    RedfishCS_status
    CS_To_PCIeFunction_V1_0_0_JSON (RedfishPCIeFunction_V1_0_0_PCIeFunction_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish PCIeFunction V1_0_0 C Structure Function
    RedfishCS_status
    DestroyPCIeFunction_V1_0_0_CS (RedfishPCIeFunction_V1_0_0_PCIeFunction_CS *CSPtr);

