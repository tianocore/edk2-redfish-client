# Definition of AccountService.V1_2_7 and functions<br><br>

## Actions
    typedef struct _RedfishAccountService_V1_2_7_Actions_CS {
        RedfishAccountService_V1_2_7_OemActions_CS *Oem;
    } RedfishAccountService_V1_2_7_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishAccountService_V1_2_7_OemActions_CS| Structure points to **Oem** property.| No| No


## OemActions
    typedef struct _RedfishAccountService_V1_2_7_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishAccountService_V1_2_7_OemActions_CS;

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



## AccountService
    typedef struct _RedfishAccountService_V1_2_7_AccountService_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishCS_int64 *AccountLockoutCounterResetAfter;
        RedfishCS_int64 *AccountLockoutDuration;
        RedfishCS_int64 *AccountLockoutThreshold;
        RedfishCS_Link Accounts;
        RedfishAccountService_V1_2_7_Actions_CS *Actions;
        RedfishCS_int64 *AuthFailureLoggingThreshold;
        RedfishCS_char *Description;
        RedfishCS_char *Id;
        RedfishCS_int64 *MaxPasswordLength;
        RedfishCS_int64 *MinPasswordLength;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_Link PrivilegeMap;
        RedfishCS_Link Roles;
        RedfishCS_bool *ServiceEnabled;
        RedfishResource_Status_CS *Status;
    } RedfishAccountService_V1_2_7_AccountService_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**AccountLockoutCounterResetAfter**|RedfishCS_int64| 64-bit long long interger pointer to **AccountLockoutCounterResetAfter** property.| No| No
|**AccountLockoutDuration**|RedfishCS_int64| 64-bit long long interger pointer to **AccountLockoutDuration** property.| No| No
|**AccountLockoutThreshold**|RedfishCS_int64| 64-bit long long interger pointer to **AccountLockoutThreshold** property.| No| No
|**Accounts**|RedfishCS_Link| Structure link list to **Accounts** property.| No| Yes
|**Actions**|RedfishAccountService_V1_2_7_Actions_CS| Structure points to **Actions** property.| No| No
|**AuthFailureLoggingThreshold**|RedfishCS_int64| 64-bit long long interger pointer to **AuthFailureLoggingThreshold** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**MaxPasswordLength**|RedfishCS_int64| 64-bit long long interger pointer to **MaxPasswordLength** property.| No| No
|**MinPasswordLength**|RedfishCS_int64| 64-bit long long interger pointer to **MinPasswordLength** property.| No| No
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**PrivilegeMap**|RedfishCS_Link| Structure link list to **PrivilegeMap** property.| No| Yes
|**Roles**|RedfishCS_Link| Structure link list to **Roles** property.| No| Yes
|**ServiceEnabled**|RedfishCS_bool| Boolean pointer to **ServiceEnabled** property.| No| No
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
## Redfish AccountService V1_2_7 to C Structure Function
    RedfishCS_status
    Json_AccountService_V1_2_7_To_CS (RedfishCS_char *JsonRawText, RedfishAccountService_V1_2_7_AccountService_CS **ReturnedCS);

## C Structure to Redfish AccountService V1_2_7 JSON Function
    RedfishCS_status
    CS_To_AccountService_V1_2_7_JSON (RedfishAccountService_V1_2_7_AccountService_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish AccountService V1_2_7 C Structure Function
    RedfishCS_status
    DestroyAccountService_V1_2_7_CS (RedfishAccountService_V1_2_7_AccountService_CS *CSPtr);

