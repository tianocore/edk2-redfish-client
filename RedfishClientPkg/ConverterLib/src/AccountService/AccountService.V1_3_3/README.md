# Definition of AccountService.V1_3_3 and functions<br><br>

## Actions
    typedef struct _RedfishAccountService_V1_3_3_Actions_CS {
        RedfishAccountService_V1_3_3_OemActions_CS *Oem;
    } RedfishAccountService_V1_3_3_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishAccountService_V1_3_3_OemActions_CS| Structure points to **Oem** property.| No| No


## Authentication
    typedef struct _RedfishAccountService_V1_3_3_Authentication_CS {
        RedfishCS_char *AuthenticationType;
        RedfishCS_char *KerberosKeytab;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_char *Password;
        RedfishCS_char *Token;
        RedfishCS_char *Username;
    } RedfishAccountService_V1_3_3_Authentication_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**AuthenticationType**|RedfishCS_char| String pointer to **AuthenticationType** property.| No| No
|**KerberosKeytab**|RedfishCS_char| String pointer to **KerberosKeytab** property.| No| No
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**Password**|RedfishCS_char| String pointer to **Password** property.| No| No
|**Token**|RedfishCS_char| String pointer to **Token** property.| No| No
|**Username**|RedfishCS_char| String pointer to **Username** property.| No| No


## ExternalAccountProvider
    typedef struct _RedfishAccountService_V1_3_3_ExternalAccountProvider_CS {
        RedfishCS_char *AccountProviderType;
        RedfishAccountService_V1_3_3_Authentication_CS *Authentication;
        RedfishAccountService_V1_3_3_LDAPService_CS *LDAPService;
        RedfishAccountService_V1_3_3_RoleMapping_Array_CS *RemoteRoleMapping;
        RedfishCS_char_Array *ServiceAddresses;
        RedfishCS_bool *ServiceEnabled;
    } RedfishAccountService_V1_3_3_ExternalAccountProvider_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**AccountProviderType**|RedfishCS_char| String pointer to **AccountProviderType** property.| No| Yes
|**Authentication**|RedfishAccountService_V1_3_3_Authentication_CS| Structure points to **Authentication** property.| No| No
|**LDAPService**|RedfishAccountService_V1_3_3_LDAPService_CS| Structure points to **LDAPService** property.| No| No
|**RemoteRoleMapping**|RedfishAccountService_V1_3_3_RoleMapping_Array_CS| Structure array points to one or more than one **RedfishAccountService_V1_3_3_RoleMapping_Array_CS** structures for property **RemoteRoleMapping**.| No| No
|**ServiceAddresses**|RedfishCS_char_Array| Structure array points to one or more than one **RedfishCS_char *** for property **ServiceAddresses**.| No| No
|**ServiceEnabled**|RedfishCS_bool| Boolean pointer to **ServiceEnabled** property.| No| No


## LDAPSearchSettings
    typedef struct _RedfishAccountService_V1_3_3_LDAPSearchSettings_CS {
        RedfishCS_char_Array *BaseDistinguishedNames;
        RedfishCS_char *GroupNameAttribute;
        RedfishCS_char *GroupsAttribute;
        RedfishCS_char *UsernameAttribute;
    } RedfishAccountService_V1_3_3_LDAPSearchSettings_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**BaseDistinguishedNames**|RedfishCS_char_Array| Structure array points to one or more than one **RedfishCS_char *** for property **BaseDistinguishedNames**.| No| No
|**GroupNameAttribute**|RedfishCS_char| String pointer to **GroupNameAttribute** property.| No| No
|**GroupsAttribute**|RedfishCS_char| String pointer to **GroupsAttribute** property.| No| No
|**UsernameAttribute**|RedfishCS_char| String pointer to **UsernameAttribute** property.| No| No


## LDAPService
    typedef struct _RedfishAccountService_V1_3_3_LDAPService_CS {
        RedfishResource_Oem_CS *Oem;
        RedfishAccountService_V1_3_3_LDAPSearchSettings_CS *SearchSettings;
    } RedfishAccountService_V1_3_3_LDAPService_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**SearchSettings**|RedfishAccountService_V1_3_3_LDAPSearchSettings_CS| Structure points to **SearchSettings** property.| No| No


## OemActions
    typedef struct _RedfishAccountService_V1_3_3_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishAccountService_V1_3_3_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## RoleMapping
    typedef struct _RedfishAccountService_V1_3_3_RoleMapping_CS {
        RedfishCS_char *LocalRole;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_char *RemoteGroup;
        RedfishCS_char *RemoteUser;
    } RedfishAccountService_V1_3_3_RoleMapping_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**LocalRole**|RedfishCS_char| String pointer to **LocalRole** property.| No| No
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**RemoteGroup**|RedfishCS_char| String pointer to **RemoteGroup** property.| No| No
|**RemoteUser**|RedfishCS_char| String pointer to **RemoteUser** property.| No| No


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


## RedfishAccountService_V1_3_3_RoleMapping_Array_CS
    typedef struct _RedfishAccountService_V1_3_3_RoleMapping_Array_CS  {
        RedfishCS_Link *Next;
        RedfishAccountService_V1_3_3_RoleMapping_CS *ArrayValue;
    } RedfishAccountService_V1_3_3_RoleMapping_Array_CS;



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
    typedef struct _RedfishAccountService_V1_3_3_AccountService_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishCS_int64 *AccountLockoutCounterResetAfter;
        RedfishCS_int64 *AccountLockoutDuration;
        RedfishCS_int64 *AccountLockoutThreshold;
        RedfishCS_Link Accounts;
        RedfishAccountService_V1_3_3_Actions_CS *Actions;
        RedfishAccountService_V1_3_3_ExternalAccountProvider_CS *ActiveDirectory;
        RedfishCS_Link AdditionalExternalAccountProviders;
        RedfishCS_int64 *AuthFailureLoggingThreshold;
        RedfishCS_char *Description;
        RedfishCS_char *Id;
        RedfishAccountService_V1_3_3_ExternalAccountProvider_CS *LDAP;
        RedfishCS_char *LocalAccountAuth;
        RedfishCS_int64 *MaxPasswordLength;
        RedfishCS_int64 *MinPasswordLength;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_Link PrivilegeMap;
        RedfishCS_Link Roles;
        RedfishCS_bool *ServiceEnabled;
        RedfishResource_Status_CS *Status;
    } RedfishAccountService_V1_3_3_AccountService_CS;

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
|**Actions**|RedfishAccountService_V1_3_3_Actions_CS| Structure points to **Actions** property.| No| No
|**ActiveDirectory**|RedfishAccountService_V1_3_3_ExternalAccountProvider_CS| Structure points to **ActiveDirectory** property.| No| No
|**AdditionalExternalAccountProviders**|RedfishCS_Link| Structure link list to **AdditionalExternalAccountProviders** property.| No| Yes
|**AuthFailureLoggingThreshold**|RedfishCS_int64| 64-bit long long interger pointer to **AuthFailureLoggingThreshold** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**LDAP**|RedfishAccountService_V1_3_3_ExternalAccountProvider_CS| Structure points to **LDAP** property.| No| No
|**LocalAccountAuth**|RedfishCS_char| String pointer to **LocalAccountAuth** property.| No| No
|**MaxPasswordLength**|RedfishCS_int64| 64-bit long long interger pointer to **MaxPasswordLength** property.| No| Yes
|**MinPasswordLength**|RedfishCS_int64| 64-bit long long interger pointer to **MinPasswordLength** property.| No| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**PrivilegeMap**|RedfishCS_Link| Structure link list to **PrivilegeMap** property.| No| Yes
|**Roles**|RedfishCS_Link| Structure link list to **Roles** property.| No| Yes
|**ServiceEnabled**|RedfishCS_bool| Boolean pointer to **ServiceEnabled** property.| No| No
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
## Redfish AccountService V1_3_3 to C Structure Function
    RedfishCS_status
    Json_AccountService_V1_3_3_To_CS (RedfishCS_char *JsonRawText, RedfishAccountService_V1_3_3_AccountService_CS **ReturnedCS);

## C Structure to Redfish AccountService V1_3_3 JSON Function
    RedfishCS_status
    CS_To_AccountService_V1_3_3_JSON (RedfishAccountService_V1_3_3_AccountService_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish AccountService V1_3_3 C Structure Function
    RedfishCS_status
    DestroyAccountService_V1_3_3_CS (RedfishAccountService_V1_3_3_AccountService_CS *CSPtr);

