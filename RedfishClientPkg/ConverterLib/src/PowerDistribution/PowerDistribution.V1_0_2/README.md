# Definition of PowerDistribution.V1_0_2 and functions<br><br>

## Actions
    typedef struct _RedfishPowerDistribution_V1_0_2_Actions_CS {
        RedfishPowerDistribution_V1_0_2_TransferControl_CS *PowerDistribution_TransferControl;
        RedfishPowerDistribution_V1_0_2_OemActions_CS *Oem;
    } RedfishPowerDistribution_V1_0_2_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**PowerDistribution_TransferControl**|RedfishPowerDistribution_V1_0_2_TransferControl_CS| Structure points to **#PowerDistribution.TransferControl** property.| No| No
|**Oem**|RedfishPowerDistribution_V1_0_2_OemActions_CS| Structure points to **Oem** property.| No| No


## Links
    typedef struct _RedfishPowerDistribution_V1_0_2_Links_CS {
        RedfishCS_Link Chassis;
        RedfishCS_int64 *Chassisodata_count;
        RedfishCS_Link Facility;
        RedfishCS_Link ManagedBy;
        RedfishCS_int64 *ManagedByodata_count;
        RedfishResource_Oem_CS *Oem;
    } RedfishPowerDistribution_V1_0_2_Links_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Chassis**|RedfishCS_Link| Structure link list to **Chassis** property.| No| Yes
|**Chassisodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **Chassis@odata.count** property.| No| No
|**Facility**|RedfishCS_Link| Structure link list to **Facility** property.| No| Yes
|**ManagedBy**|RedfishCS_Link| Structure link list to **ManagedBy** property.| No| Yes
|**ManagedByodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **ManagedBy@odata.count** property.| No| No
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No


## OemActions
    typedef struct _RedfishPowerDistribution_V1_0_2_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishPowerDistribution_V1_0_2_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## TransferConfiguration
    typedef struct _RedfishPowerDistribution_V1_0_2_TransferConfiguration_CS {
        RedfishCS_char *ActiveMainsId;
        RedfishCS_bool *AutoTransferEnabled;
        RedfishCS_bool *ClosedTransitionAllowed;
        RedfishCS_int64 *ClosedTransitionTimeoutSeconds;
        RedfishCS_char *PreferredMainsId;
        RedfishCS_int64 *RetransferDelaySeconds;
        RedfishCS_bool *RetransferEnabled;
        RedfishCS_int64 *TransferDelaySeconds;
        RedfishCS_bool *TransferInhibit;
    } RedfishPowerDistribution_V1_0_2_TransferConfiguration_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**ActiveMainsId**|RedfishCS_char| String pointer to **ActiveMainsId** property.| No| No
|**AutoTransferEnabled**|RedfishCS_bool| Boolean pointer to **AutoTransferEnabled** property.| No| No
|**ClosedTransitionAllowed**|RedfishCS_bool| Boolean pointer to **ClosedTransitionAllowed** property.| No| No
|**ClosedTransitionTimeoutSeconds**|RedfishCS_int64| 64-bit long long interger pointer to **ClosedTransitionTimeoutSeconds** property.| No| No
|**PreferredMainsId**|RedfishCS_char| String pointer to **PreferredMainsId** property.| No| No
|**RetransferDelaySeconds**|RedfishCS_int64| 64-bit long long interger pointer to **RetransferDelaySeconds** property.| No| No
|**RetransferEnabled**|RedfishCS_bool| Boolean pointer to **RetransferEnabled** property.| No| No
|**TransferDelaySeconds**|RedfishCS_int64| 64-bit long long interger pointer to **TransferDelaySeconds** property.| No| No
|**TransferInhibit**|RedfishCS_bool| Boolean pointer to **TransferInhibit** property.| No| No


## TransferControl
    typedef struct _RedfishPowerDistribution_V1_0_2_TransferControl_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishPowerDistribution_V1_0_2_TransferControl_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**target**|RedfishCS_char| String pointer to **target** property.| No| No
|**title**|RedfishCS_char| String pointer to **title** property.| No| No


## TransferCriteria
    typedef struct _RedfishPowerDistribution_V1_0_2_TransferCriteria_CS {
        RedfishCS_int64 *OverNominalFrequencyHz;
        RedfishCS_int64 *OverVoltageRMSPercentage;
        RedfishCS_char *TransferSensitivity;
        RedfishCS_int64 *UnderNominalFrequencyHz;
        RedfishCS_int64 *UnderVoltageRMSPercentage;
    } RedfishPowerDistribution_V1_0_2_TransferCriteria_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**OverNominalFrequencyHz**|RedfishCS_int64| 64-bit long long interger pointer to **OverNominalFrequencyHz** property.| No| No
|**OverVoltageRMSPercentage**|RedfishCS_int64| 64-bit long long interger pointer to **OverVoltageRMSPercentage** property.| No| No
|**TransferSensitivity**|RedfishCS_char| String pointer to **TransferSensitivity** property.| No| No
|**UnderNominalFrequencyHz**|RedfishCS_int64| 64-bit long long interger pointer to **UnderNominalFrequencyHz** property.| No| No
|**UnderVoltageRMSPercentage**|RedfishCS_int64| 64-bit long long interger pointer to **UnderVoltageRMSPercentage** property.| No| No


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



## PowerDistribution
    typedef struct _RedfishPowerDistribution_V1_0_2_PowerDistribution_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishPowerDistribution_V1_0_2_Actions_CS *Actions;
        RedfishCS_char *AssetTag;
        RedfishCS_Link Branches;
        RedfishCS_char *Description;
        RedfishCS_char *EquipmentType;
        RedfishCS_Link Feeders;
        RedfishCS_char *FirmwareVersion;
        RedfishCS_char *Id;
        RedfishPowerDistribution_V1_0_2_Links_CS *Links;
        RedfishCS_Link Location;
        RedfishCS_Link Mains;
        RedfishCS_char *Manufacturer;
        RedfishCS_Link Metrics;
        RedfishCS_char *Model;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_Link OutletGroups;
        RedfishCS_Link Outlets;
        RedfishCS_char *PartNumber;
        RedfishCS_char *ProductionDate;
        RedfishCS_Link Sensors;
        RedfishCS_char *SerialNumber;
        RedfishResource_Status_CS *Status;
        RedfishCS_Link Subfeeds;
        RedfishPowerDistribution_V1_0_2_TransferConfiguration_CS *TransferConfiguration;
        RedfishPowerDistribution_V1_0_2_TransferCriteria_CS *TransferCriteria;
        RedfishCS_char *UUID;
        RedfishCS_char *Version;
    } RedfishPowerDistribution_V1_0_2_PowerDistribution_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishPowerDistribution_V1_0_2_Actions_CS| Structure points to **Actions** property.| No| No
|**AssetTag**|RedfishCS_char| String pointer to **AssetTag** property.| No| No
|**Branches**|RedfishCS_Link| Structure link list to **Branches** property.| No| Yes
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**EquipmentType**|RedfishCS_char| String pointer to **EquipmentType** property.| Yes| Yes
|**Feeders**|RedfishCS_Link| Structure link list to **Feeders** property.| No| Yes
|**FirmwareVersion**|RedfishCS_char| String pointer to **FirmwareVersion** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**Links**|RedfishPowerDistribution_V1_0_2_Links_CS| Structure points to **Links** property.| No| No
|**Location**|RedfishCS_Link| Structure link list to **Location** property.| No| No
|**Mains**|RedfishCS_Link| Structure link list to **Mains** property.| No| Yes
|**Manufacturer**|RedfishCS_char| String pointer to **Manufacturer** property.| No| Yes
|**Metrics**|RedfishCS_Link| Structure link list to **Metrics** property.| No| Yes
|**Model**|RedfishCS_char| String pointer to **Model** property.| No| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**OutletGroups**|RedfishCS_Link| Structure link list to **OutletGroups** property.| No| Yes
|**Outlets**|RedfishCS_Link| Structure link list to **Outlets** property.| No| Yes
|**PartNumber**|RedfishCS_char| String pointer to **PartNumber** property.| No| Yes
|**ProductionDate**|RedfishCS_char| String pointer to **ProductionDate** property.| No| Yes
|**Sensors**|RedfishCS_Link| Structure link list to **Sensors** property.| No| Yes
|**SerialNumber**|RedfishCS_char| String pointer to **SerialNumber** property.| No| Yes
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
|**Subfeeds**|RedfishCS_Link| Structure link list to **Subfeeds** property.| No| Yes
|**TransferConfiguration**|RedfishPowerDistribution_V1_0_2_TransferConfiguration_CS| Structure points to **TransferConfiguration** property.| No| No
|**TransferCriteria**|RedfishPowerDistribution_V1_0_2_TransferCriteria_CS| Structure points to **TransferCriteria** property.| No| No
|**UUID**|RedfishCS_char| String pointer to **UUID** property.| No| Yes
|**Version**|RedfishCS_char| String pointer to **Version** property.| No| Yes
## Redfish PowerDistribution V1_0_2 to C Structure Function
    RedfishCS_status
    Json_PowerDistribution_V1_0_2_To_CS (RedfishCS_char *JsonRawText, RedfishPowerDistribution_V1_0_2_PowerDistribution_CS **ReturnedCS);

## C Structure to Redfish PowerDistribution V1_0_2 JSON Function
    RedfishCS_status
    CS_To_PowerDistribution_V1_0_2_JSON (RedfishPowerDistribution_V1_0_2_PowerDistribution_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish PowerDistribution V1_0_2 C Structure Function
    RedfishCS_status
    DestroyPowerDistribution_V1_0_2_CS (RedfishPowerDistribution_V1_0_2_PowerDistribution_CS *CSPtr);

