# Definition of PCIeSlots.V1_1_1 and functions<br><br>

## Actions
    typedef struct _RedfishPCIeSlots_V1_1_1_Actions_CS {
        RedfishPCIeSlots_V1_1_1_OemActions_CS *Oem;
    } RedfishPCIeSlots_V1_1_1_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishPCIeSlots_V1_1_1_OemActions_CS| Structure points to **Oem** property.| No| No


## OemActions
    typedef struct _RedfishPCIeSlots_V1_1_1_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishPCIeSlots_V1_1_1_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## PCIeLinks
    typedef struct _RedfishPCIeSlots_V1_1_1_PCIeLinks_CS {
        RedfishResource_Oem_CS *Oem;
        RedfishCS_Link PCIeDevice;
        RedfishCS_int64 *PCIeDeviceodata_count;
    } RedfishPCIeSlots_V1_1_1_PCIeLinks_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**PCIeDevice**|RedfishCS_Link| Structure link list to **PCIeDevice** property.| No| Yes
|**PCIeDeviceodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **PCIeDevice@odata.count** property.| No| No


## PCIeSlot
    typedef struct _RedfishPCIeSlots_V1_1_1_PCIeSlot_CS {
        RedfishCS_bool *HotPluggable;
        RedfishCS_int64 *Lanes;
        RedfishPCIeSlots_V1_1_1_PCIeLinks_CS *Links;
        RedfishCS_Link Location;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_char *PCIeType;
        RedfishCS_char *SlotType;
        RedfishResource_Status_CS *Status;
    } RedfishPCIeSlots_V1_1_1_PCIeSlot_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**HotPluggable**|RedfishCS_bool| Boolean pointer to **HotPluggable** property.| No| Yes
|**Lanes**|RedfishCS_int64| 64-bit long long interger pointer to **Lanes** property.| No| Yes
|**Links**|RedfishPCIeSlots_V1_1_1_PCIeLinks_CS| Structure points to **Links** property.| No| No
|**Location**|RedfishCS_Link| Structure link list to **Location** property.| No| No
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**PCIeType**|RedfishCS_char| String pointer to **PCIeType** property.| No| Yes
|**SlotType**|RedfishCS_char| String pointer to **SlotType** property.| No| Yes
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No


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



## PCIeSlots
    typedef struct _RedfishPCIeSlots_V1_1_1_PCIeSlots_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishPCIeSlots_V1_1_1_Actions_CS *Actions;
        RedfishCS_char *Description;
        RedfishCS_char *Id;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishPCIeSlots_V1_1_1_PCIeSlot_CS *Slots;
    } RedfishPCIeSlots_V1_1_1_PCIeSlots_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishPCIeSlots_V1_1_1_Actions_CS| Structure points to **Actions** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**Slots**|RedfishPCIeSlots_V1_1_1_PCIeSlot_CS| Structure points to **Slots** property.| No| No
## Redfish PCIeSlots V1_1_1 to C Structure Function
    RedfishCS_status
    Json_PCIeSlots_V1_1_1_To_CS (RedfishCS_char *JsonRawText, RedfishPCIeSlots_V1_1_1_PCIeSlots_CS **ReturnedCS);

## C Structure to Redfish PCIeSlots V1_1_1 JSON Function
    RedfishCS_status
    CS_To_PCIeSlots_V1_1_1_JSON (RedfishPCIeSlots_V1_1_1_PCIeSlots_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish PCIeSlots V1_1_1 C Structure Function
    RedfishCS_status
    DestroyPCIeSlots_V1_1_1_CS (RedfishPCIeSlots_V1_1_1_PCIeSlots_CS *CSPtr);

