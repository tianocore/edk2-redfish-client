# Definition of ResourceBlock.V1_1_2 and functions<br><br>

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


## Actions
    typedef struct _RedfishResourceBlock_V1_1_2_Actions_CS {
        RedfishResourceBlock_V1_1_2_OemActions_CS *Oem;
    } RedfishResourceBlock_V1_1_2_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishResourceBlock_V1_1_2_OemActions_CS| Structure points to **Oem** property.| No| No


## CompositionStatus
    typedef struct _RedfishResourceBlock_V1_1_2_CompositionStatus_CS {
        RedfishCS_char *CompositionState;
        RedfishCS_int64 *MaxCompositions;
        RedfishCS_int64 *NumberOfCompositions;
        RedfishCS_bool *Reserved;
        RedfishCS_bool *SharingCapable;
        RedfishCS_bool *SharingEnabled;
    } RedfishResourceBlock_V1_1_2_CompositionStatus_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**CompositionState**|RedfishCS_char| String pointer to **CompositionState** property.| No| Yes
|**MaxCompositions**|RedfishCS_int64| 64-bit long long interger pointer to **MaxCompositions** property.| No| Yes
|**NumberOfCompositions**|RedfishCS_int64| 64-bit long long interger pointer to **NumberOfCompositions** property.| No| Yes
|**Reserved**|RedfishCS_bool| Boolean pointer to **Reserved** property.| No| No
|**SharingCapable**|RedfishCS_bool| Boolean pointer to **SharingCapable** property.| No| Yes
|**SharingEnabled**|RedfishCS_bool| Boolean pointer to **SharingEnabled** property.| No| No


## Links
    typedef struct _RedfishResourceBlock_V1_1_2_Links_CS {
        RedfishCS_Link Chassis;
        RedfishCS_int64 *Chassisodata_count;
        RedfishCS_Link ComputerSystems;
        RedfishCS_int64 *ComputerSystemsodata_count;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_Link Zones;
        RedfishCS_int64 *Zonesodata_count;
    } RedfishResourceBlock_V1_1_2_Links_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Chassis**|RedfishCS_Link| Structure link list to **Chassis** property.| No| Yes
|**Chassisodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **Chassis@odata.count** property.| No| No
|**ComputerSystems**|RedfishCS_Link| Structure link list to **ComputerSystems** property.| No| Yes
|**ComputerSystemsodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **ComputerSystems@odata.count** property.| No| No
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**Zones**|RedfishCS_Link| Structure link list to **Zones** property.| No| Yes
|**Zonesodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **Zones@odata.count** property.| No| No


## OemActions
    typedef struct _RedfishResourceBlock_V1_1_2_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishResourceBlock_V1_1_2_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


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



## ResourceBlock
    typedef struct _RedfishResourceBlock_V1_1_2_ResourceBlock_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishResourceBlock_V1_1_2_Actions_CS *Actions;
        RedfishResourceBlock_V1_1_2_CompositionStatus_CS *CompositionStatus;
        RedfishCS_Link ComputerSystems;
        RedfishCS_int64 *ComputerSystemsodata_count;
        RedfishCS_char *Description;
        RedfishCS_Link EthernetInterfaces;
        RedfishCS_int64 *EthernetInterfacesodata_count;
        RedfishCS_char *Id;
        RedfishResourceBlock_V1_1_2_Links_CS *Links;
        RedfishCS_Link Memory;
        RedfishCS_int64 *Memoryodata_count;
        RedfishCS_char *Name;
        RedfishCS_Link NetworkInterfaces;
        RedfishCS_int64 *NetworkInterfacesodata_count;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_Link Processors;
        RedfishCS_int64 *Processorsodata_count;
        RedfishCS_char *ResourceBlockType;
        RedfishCS_Link SimpleStorage;
        RedfishCS_int64 *SimpleStorageodata_count;
        RedfishResource_Status_CS *Status;
        RedfishCS_Link Storage;
        RedfishCS_int64 *Storageodata_count;
    } RedfishResourceBlock_V1_1_2_ResourceBlock_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishResourceBlock_V1_1_2_Actions_CS| Structure points to **Actions** property.| No| No
|**CompositionStatus**|RedfishResourceBlock_V1_1_2_CompositionStatus_CS| Structure points to **CompositionStatus** property.| Yes| No
|**ComputerSystems**|RedfishCS_Link| Structure link list to **ComputerSystems** property.| No| Yes
|**ComputerSystemsodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **ComputerSystems@odata.count** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**EthernetInterfaces**|RedfishCS_Link| Structure link list to **EthernetInterfaces** property.| No| Yes
|**EthernetInterfacesodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **EthernetInterfaces@odata.count** property.| No| No
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**Links**|RedfishResourceBlock_V1_1_2_Links_CS| Structure points to **Links** property.| No| No
|**Memory**|RedfishCS_Link| Structure link list to **Memory** property.| No| Yes
|**Memoryodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **Memory@odata.count** property.| No| No
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**NetworkInterfaces**|RedfishCS_Link| Structure link list to **NetworkInterfaces** property.| No| Yes
|**NetworkInterfacesodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **NetworkInterfaces@odata.count** property.| No| No
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**Processors**|RedfishCS_Link| Structure link list to **Processors** property.| No| Yes
|**Processorsodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **Processors@odata.count** property.| No| No
|**ResourceBlockType**|RedfishCS_char| String pointer to **ResourceBlockType** property.| Yes| Yes
|**SimpleStorage**|RedfishCS_Link| Structure link list to **SimpleStorage** property.| No| Yes
|**SimpleStorageodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **SimpleStorage@odata.count** property.| No| No
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
|**Storage**|RedfishCS_Link| Structure link list to **Storage** property.| No| Yes
|**Storageodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **Storage@odata.count** property.| No| No
## Redfish ResourceBlock V1_1_2 to C Structure Function
    RedfishCS_status
    Json_ResourceBlock_V1_1_2_To_CS (RedfishCS_char *JsonRawText, RedfishResourceBlock_V1_1_2_ResourceBlock_CS **ReturnedCS);

## C Structure to Redfish ResourceBlock V1_1_2 JSON Function
    RedfishCS_status
    CS_To_ResourceBlock_V1_1_2_JSON (RedfishResourceBlock_V1_1_2_ResourceBlock_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish ResourceBlock V1_1_2 C Structure Function
    RedfishCS_status
    DestroyResourceBlock_V1_1_2_CS (RedfishResourceBlock_V1_1_2_ResourceBlock_CS *CSPtr);

