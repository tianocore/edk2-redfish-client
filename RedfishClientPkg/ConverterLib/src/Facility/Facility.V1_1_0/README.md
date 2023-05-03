# Definition of Facility.V1_1_0 and functions<br><br>

## Actions
    typedef struct _RedfishFacility_V1_1_0_Actions_CS {
        RedfishFacility_V1_1_0_OemActions_CS *Oem;
    } RedfishFacility_V1_1_0_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishFacility_V1_1_0_OemActions_CS| Structure points to **Oem** property.| No| No


## Links
    typedef struct _RedfishFacility_V1_1_0_Links_CS {
        RedfishCS_Link ContainedByFacility;
        RedfishCS_Link ContainsChassis;
        RedfishCS_int64 *ContainsChassisodata_count;
        RedfishCS_Link ContainsFacilities;
        RedfishCS_int64 *ContainsFacilitiesodata_count;
        RedfishCS_Link FloorPDUs;
        RedfishCS_int64 *FloorPDUsodata_count;
        RedfishCS_Link ManagedBy;
        RedfishCS_int64 *ManagedByodata_count;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_Link RackPDUs;
        RedfishCS_int64 *RackPDUsodata_count;
        RedfishCS_Link Switchgear;
        RedfishCS_int64 *Switchgearodata_count;
        RedfishCS_Link TransferSwitches;
        RedfishCS_int64 *TransferSwitchesodata_count;
    } RedfishFacility_V1_1_0_Links_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**ContainedByFacility**|RedfishCS_Link| Structure link list to **ContainedByFacility** property.| No| No
|**ContainsChassis**|RedfishCS_Link| Structure link list to **ContainsChassis** property.| No| No
|**ContainsChassisodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **ContainsChassis@odata.count** property.| No| No
|**ContainsFacilities**|RedfishCS_Link| Structure link list to **ContainsFacilities** property.| No| No
|**ContainsFacilitiesodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **ContainsFacilities@odata.count** property.| No| No
|**FloorPDUs**|RedfishCS_Link| Structure link list to **FloorPDUs** property.| No| No
|**FloorPDUsodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **FloorPDUs@odata.count** property.| No| No
|**ManagedBy**|RedfishCS_Link| Structure link list to **ManagedBy** property.| No| Yes
|**ManagedByodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **ManagedBy@odata.count** property.| No| No
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**RackPDUs**|RedfishCS_Link| Structure link list to **RackPDUs** property.| No| No
|**RackPDUsodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **RackPDUs@odata.count** property.| No| No
|**Switchgear**|RedfishCS_Link| Structure link list to **Switchgear** property.| No| No
|**Switchgearodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **Switchgear@odata.count** property.| No| No
|**TransferSwitches**|RedfishCS_Link| Structure link list to **TransferSwitches** property.| No| No
|**TransferSwitchesodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **TransferSwitches@odata.count** property.| No| No


## OemActions
    typedef struct _RedfishFacility_V1_1_0_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishFacility_V1_1_0_OemActions_CS;

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



## Facility
    typedef struct _RedfishFacility_V1_1_0_Facility_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishFacility_V1_1_0_Actions_CS *Actions;
        RedfishCS_Link AmbientMetrics;
        RedfishCS_char *Description;
        RedfishCS_Link EnvironmentMetrics;
        RedfishCS_char *FacilityType;
        RedfishCS_char *Id;
        RedfishFacility_V1_1_0_Links_CS *Links;
        RedfishCS_Link Location;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_Link PowerDomains;
        RedfishResource_Status_CS *Status;
    } RedfishFacility_V1_1_0_Facility_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishFacility_V1_1_0_Actions_CS| Structure points to **Actions** property.| No| No
|**AmbientMetrics**|RedfishCS_Link| Structure link list to **AmbientMetrics** property.| No| Yes
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**EnvironmentMetrics**|RedfishCS_Link| Structure link list to **EnvironmentMetrics** property.| No| Yes
|**FacilityType**|RedfishCS_char| String pointer to **FacilityType** property.| Yes| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**Links**|RedfishFacility_V1_1_0_Links_CS| Structure points to **Links** property.| No| No
|**Location**|RedfishCS_Link| Structure link list to **Location** property.| No| No
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**PowerDomains**|RedfishCS_Link| Structure link list to **PowerDomains** property.| No| Yes
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
## Redfish Facility V1_1_0 to C Structure Function
    RedfishCS_status
    Json_Facility_V1_1_0_To_CS (RedfishCS_char *JsonRawText, RedfishFacility_V1_1_0_Facility_CS **ReturnedCS);

## C Structure to Redfish Facility V1_1_0 JSON Function
    RedfishCS_status
    CS_To_Facility_V1_1_0_JSON (RedfishFacility_V1_1_0_Facility_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish Facility V1_1_0 C Structure Function
    RedfishCS_status
    DestroyFacility_V1_1_0_CS (RedfishFacility_V1_1_0_Facility_CS *CSPtr);

