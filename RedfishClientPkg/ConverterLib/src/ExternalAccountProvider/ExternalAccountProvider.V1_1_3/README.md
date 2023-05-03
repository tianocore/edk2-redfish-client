# Definition of ExternalAccountProvider.V1_1_3 and functions<br><br>

## Actions
    typedef struct _RedfishExternalAccountProvider_V1_1_3_Actions_CS {
        RedfishExternalAccountProvider_V1_1_3_OemActions_CS *Oem;
    } RedfishExternalAccountProvider_V1_1_3_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishExternalAccountProvider_V1_1_3_OemActions_CS| Structure points to **Oem** property.| No| No


## Authentication
    typedef struct _RedfishExternalAccountProvider_V1_1_3_Authentication_CS {
        RedfishCS_char *AuthenticationType;
        RedfishCS_char *KerberosKeytab;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_char *Password;
        RedfishCS_char *Token;
        RedfishCS_char *Username;
    } RedfishExternalAccountProvider_V1_1_3_Authentication_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**AuthenticationType**|RedfishCS_char| String pointer to **AuthenticationType** property.| No| No
|**KerberosKeytab**|RedfishCS_char| String pointer to **KerberosKeytab** property.| No| No
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**Password**|RedfishCS_char| String pointer to **Password** property.| No| No
|**Token**|RedfishCS_char| String pointer to **Token** property.| No| No
|**Username**|RedfishCS_char| String pointer to **Username** property.| No| No


## LDAPSearchSettings
    typedef struct _RedfishExternalAccountProvider_V1_1_3_LDAPSearchSettings_CS {
        RedfishCS_char_Array *BaseDistinguishedNames;
        RedfishCS_char *GroupNameAttribute;
        RedfishCS_char *GroupsAttribute;
        RedfishCS_char *UsernameAttribute;
    } RedfishExternalAccountProvider_V1_1_3_LDAPSearchSettings_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**BaseDistinguishedNames**|RedfishCS_char_Array| Structure array points to one or more than one **RedfishCS_char *** for property **BaseDistinguishedNames**.| No| No
|**GroupNameAttribute**|RedfishCS_char| String pointer to **GroupNameAttribute** property.| No| No
|**GroupsAttribute**|RedfishCS_char| String pointer to **GroupsAttribute** property.| No| No
|**UsernameAttribute**|RedfishCS_char| String pointer to **UsernameAttribute** property.| No| No


## LDAPService
    typedef struct _RedfishExternalAccountProvider_V1_1_3_LDAPService_CS {
        RedfishResource_Oem_CS *Oem;
        RedfishExternalAccountProvider_V1_1_3_LDAPSearchSettings_CS *SearchSettings;
    } RedfishExternalAccountProvider_V1_1_3_LDAPService_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**SearchSettings**|RedfishExternalAccountProvider_V1_1_3_LDAPSearchSettings_CS| Structure points to **SearchSettings** property.| No| No


## Links
    typedef struct _RedfishExternalAccountProvider_V1_1_3_Links_CS {
        RedfishResource_Oem_CS *Oem;
    } RedfishExternalAccountProvider_V1_1_3_Links_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No


## OemActions
    typedef struct _RedfishExternalAccountProvider_V1_1_3_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishExternalAccountProvider_V1_1_3_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## RoleMapping
    typedef struct _RedfishExternalAccountProvider_V1_1_3_RoleMapping_CS {
        RedfishCS_char *LocalRole;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_char *RemoteGroup;
        RedfishCS_char *RemoteUser;
    } RedfishExternalAccountProvider_V1_1_3_RoleMapping_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**LocalRole**|RedfishCS_char| String pointer to **LocalRole** property.| No| No
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**RemoteGroup**|RedfishCS_char| String pointer to **RemoteGroup** property.| No| No
|**RemoteUser**|RedfishCS_char| String pointer to **RemoteUser** property.| No| No


## Oem
    typedef struct _RedfishResource_Oem_CS {
        RedfishCS_Link Prop;
    } RedfishResource_Oem_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## RedfishCS_char_Array
    typedef struct _RedfishCS_char_Array  {
        RedfishCS_Link *Next;
        RedfishCS_char *ArrayValue;
    } RedfishCS_char_Array;



## ExternalAccountProvider
    typedef struct _RedfishExternalAccountProvider_V1_1_3_ExternalAccountProvider_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishCS_char *AccountProviderType;
        RedfishExternalAccountProvider_V1_1_3_Actions_CS *Actions;
        RedfishExternalAccountProvider_V1_1_3_Authentication_CS *Authentication;
        RedfishCS_Link Certificates;
        RedfishCS_char *Description;
        RedfishCS_char *Id;
        RedfishExternalAccountProvider_V1_1_3_LDAPService_CS *LDAPService;
        RedfishExternalAccountProvider_V1_1_3_Links_CS *Links;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishExternalAccountProvider_V1_1_3_RoleMapping_CS *RemoteRoleMapping;
        RedfishCS_char *ServiceAddresses;
        RedfishCS_bool *ServiceEnabled;
    } RedfishExternalAccountProvider_V1_1_3_ExternalAccountProvider_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**AccountProviderType**|RedfishCS_char| String pointer to **AccountProviderType** property.| No| Yes
|**Actions**|RedfishExternalAccountProvider_V1_1_3_Actions_CS| Structure points to **Actions** property.| No| No
|**Authentication**|RedfishExternalAccountProvider_V1_1_3_Authentication_CS| Structure points to **Authentication** property.| No| No
|**Certificates**|RedfishCS_Link| Structure link list to **Certificates** property.| No| Yes
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**LDAPService**|RedfishExternalAccountProvider_V1_1_3_LDAPService_CS| Structure points to **LDAPService** property.| No| No
|**Links**|RedfishExternalAccountProvider_V1_1_3_Links_CS| Structure points to **Links** property.| No| No
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**RemoteRoleMapping**|RedfishExternalAccountProvider_V1_1_3_RoleMapping_CS| Structure points to **RemoteRoleMapping** property.| No| No
|**ServiceAddresses**|RedfishCS_char| String pointer to **ServiceAddresses** property.| No| No
|**ServiceEnabled**|RedfishCS_bool| Boolean pointer to **ServiceEnabled** property.| No| No
## Redfish ExternalAccountProvider V1_1_3 to C Structure Function
    RedfishCS_status
    Json_ExternalAccountProvider_V1_1_3_To_CS (RedfishCS_char *JsonRawText, RedfishExternalAccountProvider_V1_1_3_ExternalAccountProvider_CS **ReturnedCS);

## C Structure to Redfish ExternalAccountProvider V1_1_3 JSON Function
    RedfishCS_status
    CS_To_ExternalAccountProvider_V1_1_3_JSON (RedfishExternalAccountProvider_V1_1_3_ExternalAccountProvider_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish ExternalAccountProvider V1_1_3 C Structure Function
    RedfishCS_status
    DestroyExternalAccountProvider_V1_1_3_CS (RedfishExternalAccountProvider_V1_1_3_ExternalAccountProvider_CS *CSPtr);

