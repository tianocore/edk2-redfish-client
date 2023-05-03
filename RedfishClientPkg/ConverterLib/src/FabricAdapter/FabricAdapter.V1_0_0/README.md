# Definition of FabricAdapter.V1_0_0 and functions<br><br>

## Actions
    typedef struct _RedfishFabricAdapter_V1_0_0_Actions_CS {
        RedfishFabricAdapter_V1_0_0_OemActions_CS *Oem;
    } RedfishFabricAdapter_V1_0_0_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishFabricAdapter_V1_0_0_OemActions_CS| Structure points to **Oem** property.| No| No


## GenZ
    typedef struct _RedfishFabricAdapter_V1_0_0_GenZ_CS {
        RedfishCS_Link MSDT;
        RedfishCS_char_Array *PIDT;
        RedfishCS_char_Array *RITable;
        RedfishCS_Link RequestorVCAT;
        RedfishCS_Link ResponderVCAT;
        RedfishCS_Link SSDT;
    } RedfishFabricAdapter_V1_0_0_GenZ_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**MSDT**|RedfishCS_Link| Structure link list to **MSDT** property.| No| Yes
|**PIDT**|RedfishCS_char_Array| Structure array points to one or more than one **RedfishCS_char *** for property **PIDT**.| No| No
|**RITable**|RedfishCS_char_Array| Structure array points to one or more than one **RedfishCS_char *** for property **RITable**.| No| No
|**RequestorVCAT**|RedfishCS_Link| Structure link list to **RequestorVCAT** property.| No| Yes
|**ResponderVCAT**|RedfishCS_Link| Structure link list to **ResponderVCAT** property.| No| Yes
|**SSDT**|RedfishCS_Link| Structure link list to **SSDT** property.| No| Yes


## Links
    typedef struct _RedfishFabricAdapter_V1_0_0_Links_CS {
        RedfishCS_Link Endpoints;
        RedfishCS_int64 *Endpointsodata_count;
        RedfishResource_Oem_CS *Oem;
    } RedfishFabricAdapter_V1_0_0_Links_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Endpoints**|RedfishCS_Link| Structure link list to **Endpoints** property.| No| Yes
|**Endpointsodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **Endpoints@odata.count** property.| No| No
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No


## OemActions
    typedef struct _RedfishFabricAdapter_V1_0_0_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishFabricAdapter_V1_0_0_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


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



## FabricAdapter
    typedef struct _RedfishFabricAdapter_V1_0_0_FabricAdapter_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishCS_char *ASICManufacturer;
        RedfishCS_char *ASICPartNumber;
        RedfishCS_char *ASICRevisionIdentifier;
        RedfishFabricAdapter_V1_0_0_Actions_CS *Actions;
        RedfishCS_char *Description;
        RedfishCS_char *FirmwareVersion;
        RedfishFabricAdapter_V1_0_0_GenZ_CS *GenZ;
        RedfishCS_char *Id;
        RedfishFabricAdapter_V1_0_0_Links_CS *Links;
        RedfishCS_char *Manufacturer;
        RedfishCS_char *Model;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_Link PCIeInterface;
        RedfishCS_char *PartNumber;
        RedfishCS_Link Ports;
        RedfishCS_char *SKU;
        RedfishCS_char *SerialNumber;
        RedfishCS_char *SparePartNumber;
        RedfishResource_Status_CS *Status;
        RedfishCS_char *UUID;
    } RedfishFabricAdapter_V1_0_0_FabricAdapter_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**ASICManufacturer**|RedfishCS_char| String pointer to **ASICManufacturer** property.| No| Yes
|**ASICPartNumber**|RedfishCS_char| String pointer to **ASICPartNumber** property.| No| Yes
|**ASICRevisionIdentifier**|RedfishCS_char| String pointer to **ASICRevisionIdentifier** property.| No| Yes
|**Actions**|RedfishFabricAdapter_V1_0_0_Actions_CS| Structure points to **Actions** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**FirmwareVersion**|RedfishCS_char| String pointer to **FirmwareVersion** property.| No| Yes
|**GenZ**|RedfishFabricAdapter_V1_0_0_GenZ_CS| Structure points to **GenZ** property.| No| No
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**Links**|RedfishFabricAdapter_V1_0_0_Links_CS| Structure points to **Links** property.| No| No
|**Manufacturer**|RedfishCS_char| String pointer to **Manufacturer** property.| No| Yes
|**Model**|RedfishCS_char| String pointer to **Model** property.| No| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**PCIeInterface**|RedfishCS_Link| Structure link list to **PCIeInterface** property.| No| No
|**PartNumber**|RedfishCS_char| String pointer to **PartNumber** property.| No| Yes
|**Ports**|RedfishCS_Link| Structure link list to **Ports** property.| No| Yes
|**SKU**|RedfishCS_char| String pointer to **SKU** property.| No| Yes
|**SerialNumber**|RedfishCS_char| String pointer to **SerialNumber** property.| No| Yes
|**SparePartNumber**|RedfishCS_char| String pointer to **SparePartNumber** property.| No| Yes
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
|**UUID**|RedfishCS_char| String pointer to **UUID** property.| No| Yes
## Redfish FabricAdapter V1_0_0 to C Structure Function
    RedfishCS_status
    Json_FabricAdapter_V1_0_0_To_CS (RedfishCS_char *JsonRawText, RedfishFabricAdapter_V1_0_0_FabricAdapter_CS **ReturnedCS);

## C Structure to Redfish FabricAdapter V1_0_0 JSON Function
    RedfishCS_status
    CS_To_FabricAdapter_V1_0_0_JSON (RedfishFabricAdapter_V1_0_0_FabricAdapter_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish FabricAdapter V1_0_0 C Structure Function
    RedfishCS_status
    DestroyFabricAdapter_V1_0_0_CS (RedfishFabricAdapter_V1_0_0_FabricAdapter_CS *CSPtr);

