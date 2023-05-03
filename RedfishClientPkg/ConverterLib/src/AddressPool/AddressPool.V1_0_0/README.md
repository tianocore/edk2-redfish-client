# Definition of AddressPool.V1_0_0 and functions<br><br>

## Actions
    typedef struct _RedfishAddressPool_V1_0_0_Actions_CS {
        RedfishAddressPool_V1_0_0_OemActions_CS *Oem;
    } RedfishAddressPool_V1_0_0_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishAddressPool_V1_0_0_OemActions_CS| Structure points to **Oem** property.| No| No


## GenZ
    typedef struct _RedfishAddressPool_V1_0_0_GenZ_CS {
        RedfishCS_char *AccessKey;
        RedfishCS_int64 *MaxCID;
        RedfishCS_int64 *MaxSID;
        RedfishCS_int64 *MinCID;
        RedfishCS_int64 *MinSID;
    } RedfishAddressPool_V1_0_0_GenZ_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**AccessKey**|RedfishCS_char| String pointer to **AccessKey** property.| No| No
|**MaxCID**|RedfishCS_int64| 64-bit long long interger pointer to **MaxCID** property.| No| No
|**MaxSID**|RedfishCS_int64| 64-bit long long interger pointer to **MaxSID** property.| No| No
|**MinCID**|RedfishCS_int64| 64-bit long long interger pointer to **MinCID** property.| No| No
|**MinSID**|RedfishCS_int64| 64-bit long long interger pointer to **MinSID** property.| No| No


## Links
    typedef struct _RedfishAddressPool_V1_0_0_Links_CS {
        RedfishCS_Link Endpoints;
        RedfishCS_int64 *Endpointsodata_count;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_Link Zones;
        RedfishCS_int64 *Zonesodata_count;
    } RedfishAddressPool_V1_0_0_Links_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Endpoints**|RedfishCS_Link| Structure link list to **Endpoints** property.| No| Yes
|**Endpointsodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **Endpoints@odata.count** property.| No| No
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**Zones**|RedfishCS_Link| Structure link list to **Zones** property.| No| Yes
|**Zonesodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **Zones@odata.count** property.| No| No


## OemActions
    typedef struct _RedfishAddressPool_V1_0_0_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishAddressPool_V1_0_0_OemActions_CS;

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



## AddressPool
    typedef struct _RedfishAddressPool_V1_0_0_AddressPool_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishAddressPool_V1_0_0_Actions_CS *Actions;
        RedfishCS_char *Description;
        RedfishAddressPool_V1_0_0_GenZ_CS *GenZ;
        RedfishCS_char *Id;
        RedfishAddressPool_V1_0_0_Links_CS *Links;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishResource_Status_CS *Status;
    } RedfishAddressPool_V1_0_0_AddressPool_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishAddressPool_V1_0_0_Actions_CS| Structure points to **Actions** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**GenZ**|RedfishAddressPool_V1_0_0_GenZ_CS| Structure points to **GenZ** property.| No| No
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**Links**|RedfishAddressPool_V1_0_0_Links_CS| Structure points to **Links** property.| No| No
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
## Redfish AddressPool V1_0_0 to C Structure Function
    RedfishCS_status
    Json_AddressPool_V1_0_0_To_CS (RedfishCS_char *JsonRawText, RedfishAddressPool_V1_0_0_AddressPool_CS **ReturnedCS);

## C Structure to Redfish AddressPool V1_0_0 JSON Function
    RedfishCS_status
    CS_To_AddressPool_V1_0_0_JSON (RedfishAddressPool_V1_0_0_AddressPool_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish AddressPool V1_0_0 C Structure Function
    RedfishCS_status
    DestroyAddressPool_V1_0_0_CS (RedfishAddressPool_V1_0_0_AddressPool_CS *CSPtr);

