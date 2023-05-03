# Definition of EventDestination.V1_7_0 and functions<br><br>

## Actions
    typedef struct _RedfishEventDestination_V1_7_0_Actions_CS {
        RedfishEventDestination_V1_7_0_ResumeSubscription_CS *EventDestination_ResumeSubscription;
        RedfishEventDestination_V1_7_0_OemActions_CS *Oem;
    } RedfishEventDestination_V1_7_0_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**EventDestination_ResumeSubscription**|RedfishEventDestination_V1_7_0_ResumeSubscription_CS| Structure points to **#EventDestination.ResumeSubscription** property.| No| No
|**Oem**|RedfishEventDestination_V1_7_0_OemActions_CS| Structure points to **Oem** property.| No| No


## HttpHeaderProperty
    typedef struct _RedfishEventDestination_V1_7_0_HttpHeaderProperty_CS {
        RedfishCS_Link Prop;
    } RedfishEventDestination_V1_7_0_HttpHeaderProperty_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## OemActions
    typedef struct _RedfishEventDestination_V1_7_0_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishEventDestination_V1_7_0_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## ResumeSubscription
    typedef struct _RedfishEventDestination_V1_7_0_ResumeSubscription_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishEventDestination_V1_7_0_ResumeSubscription_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**target**|RedfishCS_char| String pointer to **target** property.| No| No
|**title**|RedfishCS_char| String pointer to **title** property.| No| No


## SNMPSettings
    typedef struct _RedfishEventDestination_V1_7_0_SNMPSettings_CS {
        RedfishCS_char *AuthenticationKey;
        RedfishCS_char *AuthenticationProtocol;
        RedfishCS_char *EncryptionKey;
        RedfishCS_char *EncryptionProtocol;
        RedfishCS_char *TrapCommunity;
    } RedfishEventDestination_V1_7_0_SNMPSettings_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**AuthenticationKey**|RedfishCS_char| String pointer to **AuthenticationKey** property.| No| No
|**AuthenticationProtocol**|RedfishCS_char| String pointer to **AuthenticationProtocol** property.| No| No
|**EncryptionKey**|RedfishCS_char| String pointer to **EncryptionKey** property.| No| No
|**EncryptionProtocol**|RedfishCS_char| String pointer to **EncryptionProtocol** property.| No| No
|**TrapCommunity**|RedfishCS_char| String pointer to **TrapCommunity** property.| No| No


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



## EventDestination
    typedef struct _RedfishEventDestination_V1_7_0_EventDestination_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishEventDestination_V1_7_0_Actions_CS *Actions;
        RedfishCS_char *Context;
        RedfishCS_char *DeliveryRetryPolicy;
        RedfishCS_char *Description;
        RedfishCS_char *Destination;
        RedfishCS_char *EventFormatType;
        RedfishCS_char *EventTypes;
        RedfishEventDestination_V1_7_0_HttpHeaderProperty_CS *HttpHeaders;
        RedfishCS_char *Id;
        RedfishCS_char *MessageIds;
        RedfishCS_Link MetricReportDefinitions;
        RedfishCS_int64 *MetricReportDefinitionsodata_count;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        Redfishodatav4_idRef_CS *OriginResources;
        RedfishCS_int64 *OriginResourcesodata_count;
        RedfishCS_char *Protocol;
        RedfishCS_char *RegistryPrefixes;
        RedfishCS_char *ResourceTypes;
        RedfishEventDestination_V1_7_0_SNMPSettings_CS *SNMP;
        RedfishResource_Status_CS *Status;
        RedfishCS_bool *SubordinateResources;
        RedfishCS_char *SubscriptionType;
    } RedfishEventDestination_V1_7_0_EventDestination_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishEventDestination_V1_7_0_Actions_CS| Structure points to **Actions** property.| No| No
|**Context**|RedfishCS_char| String pointer to **Context** property.| Yes| No
|**DeliveryRetryPolicy**|RedfishCS_char| String pointer to **DeliveryRetryPolicy** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**Destination**|RedfishCS_char| String pointer to **Destination** property.| No| Yes
|**EventFormatType**|RedfishCS_char| String pointer to **EventFormatType** property.| No| Yes
|**EventTypes**|RedfishCS_char| String pointer to **EventTypes** property.| No| Yes
|**HttpHeaders**|RedfishEventDestination_V1_7_0_HttpHeaderProperty_CS| Structure points to **HttpHeaders** property.| No| No
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**MessageIds**|RedfishCS_char| String pointer to **MessageIds** property.| No| Yes
|**MetricReportDefinitions**|RedfishCS_Link| Structure link list to **MetricReportDefinitions** property.| No| Yes
|**MetricReportDefinitionsodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **MetricReportDefinitions@odata.count** property.| No| No
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**OriginResources**|Redfishodatav4_idRef_CS| Structure points to **OriginResources** property.| No| Yes
|**OriginResourcesodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **OriginResources@odata.count** property.| No| No
|**Protocol**|RedfishCS_char| String pointer to **Protocol** property.| No| Yes
|**RegistryPrefixes**|RedfishCS_char| String pointer to **RegistryPrefixes** property.| No| Yes
|**ResourceTypes**|RedfishCS_char| String pointer to **ResourceTypes** property.| No| Yes
|**SNMP**|RedfishEventDestination_V1_7_0_SNMPSettings_CS| Structure points to **SNMP** property.| No| No
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
|**SubordinateResources**|RedfishCS_bool| Boolean pointer to **SubordinateResources** property.| No| Yes
|**SubscriptionType**|RedfishCS_char| String pointer to **SubscriptionType** property.| Yes| Yes
## Redfish EventDestination V1_7_0 to C Structure Function
    RedfishCS_status
    Json_EventDestination_V1_7_0_To_CS (RedfishCS_char *JsonRawText, RedfishEventDestination_V1_7_0_EventDestination_CS **ReturnedCS);

## C Structure to Redfish EventDestination V1_7_0 JSON Function
    RedfishCS_status
    CS_To_EventDestination_V1_7_0_JSON (RedfishEventDestination_V1_7_0_EventDestination_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish EventDestination V1_7_0 C Structure Function
    RedfishCS_status
    DestroyEventDestination_V1_7_0_CS (RedfishEventDestination_V1_7_0_EventDestination_CS *CSPtr);

