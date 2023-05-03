# Definition of Chassis.V1_0_3 and functions<br><br>

## Chassis_Actions
    typedef struct _RedfishChassis_V1_0_3_Chassis_Actions_CS {
        RedfishChassis_V1_0_3_Reset_CS *Chassis_Reset;
        RedfishChassis_V1_0_3_Chassis_Actions_Oem_CS *Oem;
    } RedfishChassis_V1_0_3_Chassis_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Chassis_Reset**|RedfishChassis_V1_0_3_Reset_CS| Structure points to **#Chassis.Reset** property.| No| No
|**Oem**|RedfishChassis_V1_0_3_Chassis_Actions_Oem_CS| Structure points to **Oem** property.| No| No


## Chassis_Actions_Oem
    typedef struct _RedfishChassis_V1_0_3_Chassis_Actions_Oem_CS {
        RedfishCS_Link Prop;
    } RedfishChassis_V1_0_3_Chassis_Actions_Oem_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## Chassis_Links
    typedef struct _RedfishChassis_V1_0_3_Chassis_Links_CS {
        RedfishCS_Link ComputerSystems;
        RedfishCS_int64 *ComputerSystemsodata_count;
        RedfishCS_char *ComputerSystemsodata_navigationLink;
        RedfishCS_Link ContainedBy;
        RedfishCS_Link Contains;
        RedfishCS_int64 *Containsodata_count;
        RedfishCS_char *Containsodata_navigationLink;
        Redfishodata_V4_0_0_idRef_CS *CooledBy;
        RedfishCS_int64 *CooledByodata_count;
        RedfishCS_char *CooledByodata_navigationLink;
        RedfishCS_Link ManagedBy;
        RedfishCS_int64 *ManagedByodata_count;
        RedfishCS_char *ManagedByodata_navigationLink;
        RedfishResource_Oem_CS *Oem;
        Redfishodata_V4_0_0_idRef_CS *PoweredBy;
        RedfishCS_int64 *PoweredByodata_count;
        RedfishCS_char *PoweredByodata_navigationLink;
    } RedfishChassis_V1_0_3_Chassis_Links_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**ComputerSystems**|RedfishCS_Link| Structure link list to **ComputerSystems** property.| No| Yes
|**ComputerSystemsodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **ComputerSystems@odata.count** property.| No| No
|**ComputerSystemsodata_navigationLink**|RedfishCS_char| String pointer to **ComputerSystems@odata.navigationLink** property.| No| No
|**ContainedBy**|RedfishCS_Link| Structure link list to **ContainedBy** property.| No| Yes
|**Contains**|RedfishCS_Link| Structure link list to **Contains** property.| No| Yes
|**Containsodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **Contains@odata.count** property.| No| No
|**Containsodata_navigationLink**|RedfishCS_char| String pointer to **Contains@odata.navigationLink** property.| No| No
|**CooledBy**|Redfishodata_V4_0_0_idRef_CS| Structure points to **CooledBy** property.| No| Yes
|**CooledByodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **CooledBy@odata.count** property.| No| No
|**CooledByodata_navigationLink**|RedfishCS_char| String pointer to **CooledBy@odata.navigationLink** property.| No| No
|**ManagedBy**|RedfishCS_Link| Structure link list to **ManagedBy** property.| No| Yes
|**ManagedByodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **ManagedBy@odata.count** property.| No| No
|**ManagedByodata_navigationLink**|RedfishCS_char| String pointer to **ManagedBy@odata.navigationLink** property.| No| No
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**PoweredBy**|Redfishodata_V4_0_0_idRef_CS| Structure points to **PoweredBy** property.| No| Yes
|**PoweredByodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **PoweredBy@odata.count** property.| No| No
|**PoweredByodata_navigationLink**|RedfishCS_char| String pointer to **PoweredBy@odata.navigationLink** property.| No| No


## Reset
    typedef struct _RedfishChassis_V1_0_3_Reset_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishChassis_V1_0_3_Reset_CS;

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
    typedef struct _Redfishodata_V4_0_0_idRef_CS {
        RedfishCS_char *odata_id;
    } Redfishodata_V4_0_0_idRef_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| No| No


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



## Chassis
    typedef struct _RedfishChassis_V1_0_3_Chassis_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishChassis_V1_0_3_Chassis_Actions_CS *Actions;
        RedfishCS_char *AssetTag;
        RedfishCS_char *ChassisType;
        RedfishCS_char *Description;
        RedfishCS_char *Id;
        RedfishCS_char *IndicatorLED;
        RedfishChassis_V1_0_3_Chassis_Links_CS *Links;
        RedfishCS_Link LogServices;
        RedfishCS_char *Manufacturer;
        RedfishCS_char *Model;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_char *PartNumber;
        RedfishCS_Link Power;
        RedfishCS_char *PowerState;
        RedfishCS_char *SKU;
        RedfishCS_char *SerialNumber;
        RedfishResource_Status_CS *Status;
        RedfishCS_Link Thermal;
    } RedfishChassis_V1_0_3_Chassis_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| No| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| No| No
|**Actions**|RedfishChassis_V1_0_3_Chassis_Actions_CS| Structure points to **Actions** property.| No| No
|**AssetTag**|RedfishCS_char| String pointer to **AssetTag** property.| No| No
|**ChassisType**|RedfishCS_char| String pointer to **ChassisType** property.| Yes| Yes
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**IndicatorLED**|RedfishCS_char| String pointer to **IndicatorLED** property.| No| No
|**Links**|RedfishChassis_V1_0_3_Chassis_Links_CS| Structure points to **Links** property.| No| No
|**LogServices**|RedfishCS_Link| Structure link list to **LogServices** property.| No| Yes
|**Manufacturer**|RedfishCS_char| String pointer to **Manufacturer** property.| No| Yes
|**Model**|RedfishCS_char| String pointer to **Model** property.| No| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**PartNumber**|RedfishCS_char| String pointer to **PartNumber** property.| No| Yes
|**Power**|RedfishCS_Link| Structure link list to **Power** property.| No| Yes
|**PowerState**|RedfishCS_char| String pointer to **PowerState** property.| No| Yes
|**SKU**|RedfishCS_char| String pointer to **SKU** property.| No| Yes
|**SerialNumber**|RedfishCS_char| String pointer to **SerialNumber** property.| No| Yes
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
|**Thermal**|RedfishCS_Link| Structure link list to **Thermal** property.| No| Yes
## Redfish Chassis V1_0_3 to C Structure Function
    RedfishCS_status
    Json_Chassis_V1_0_3_To_CS (RedfishCS_char *JsonRawText, RedfishChassis_V1_0_3_Chassis_CS **ReturnedCS);

## C Structure to Redfish Chassis V1_0_3 JSON Function
    RedfishCS_status
    CS_To_Chassis_V1_0_3_JSON (RedfishChassis_V1_0_3_Chassis_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish Chassis V1_0_3 C Structure Function
    RedfishCS_status
    DestroyChassis_V1_0_3_CS (RedfishChassis_V1_0_3_Chassis_CS *CSPtr);

