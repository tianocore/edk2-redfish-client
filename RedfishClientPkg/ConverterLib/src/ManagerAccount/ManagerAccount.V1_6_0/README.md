# Definition of ManagerAccount.V1_6_0 and functions<br><br>

## Actions
    typedef struct _RedfishManagerAccount_V1_6_0_Actions_CS {
        RedfishManagerAccount_V1_6_0_OemActions_CS *Oem;
    } RedfishManagerAccount_V1_6_0_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishManagerAccount_V1_6_0_OemActions_CS| Structure points to **Oem** property.| No| No


## Links
    typedef struct _RedfishManagerAccount_V1_6_0_Links_CS {
        RedfishResource_Oem_CS *Oem;
        RedfishCS_Link Role;
    } RedfishManagerAccount_V1_6_0_Links_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**Role**|RedfishCS_Link| Structure link list to **Role** property.| No| Yes


## OemActions
    typedef struct _RedfishManagerAccount_V1_6_0_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishManagerAccount_V1_6_0_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## SNMPUserInfo
    typedef struct _RedfishManagerAccount_V1_6_0_SNMPUserInfo_CS {
        RedfishCS_char *AuthenticationKey;
        RedfishCS_bool *AuthenticationKeySet;
        RedfishCS_char *AuthenticationProtocol;
        RedfishCS_char *EncryptionKey;
        RedfishCS_bool *EncryptionKeySet;
        RedfishCS_char *EncryptionProtocol;
    } RedfishManagerAccount_V1_6_0_SNMPUserInfo_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**AuthenticationKey**|RedfishCS_char| String pointer to **AuthenticationKey** property.| No| No
|**AuthenticationKeySet**|RedfishCS_bool| Boolean pointer to **AuthenticationKeySet** property.| No| Yes
|**AuthenticationProtocol**|RedfishCS_char| String pointer to **AuthenticationProtocol** property.| No| No
|**EncryptionKey**|RedfishCS_char| String pointer to **EncryptionKey** property.| No| No
|**EncryptionKeySet**|RedfishCS_bool| Boolean pointer to **EncryptionKeySet** property.| No| Yes
|**EncryptionProtocol**|RedfishCS_char| String pointer to **EncryptionProtocol** property.| No| No


## Oem
    typedef struct _RedfishResource_Oem_CS {
        RedfishCS_Link Prop;
    } RedfishResource_Oem_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## ManagerAccount
    typedef struct _RedfishManagerAccount_V1_6_0_ManagerAccount_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishCS_char *AccountTypes;
        RedfishManagerAccount_V1_6_0_Actions_CS *Actions;
        RedfishCS_Link Certificates;
        RedfishCS_char *Description;
        RedfishCS_bool *Enabled;
        RedfishCS_char *Id;
        RedfishManagerAccount_V1_6_0_Links_CS *Links;
        RedfishCS_bool *Locked;
        RedfishCS_char *Name;
        RedfishCS_char *OEMAccountTypes;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_char *Password;
        RedfishCS_bool *PasswordChangeRequired;
        RedfishCS_char *PasswordExpiration;
        RedfishCS_char *RoleId;
        RedfishManagerAccount_V1_6_0_SNMPUserInfo_CS *SNMP;
        RedfishCS_char *UserName;
    } RedfishManagerAccount_V1_6_0_ManagerAccount_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**AccountTypes**|RedfishCS_char| String pointer to **AccountTypes** property.| Yes| No
|**Actions**|RedfishManagerAccount_V1_6_0_Actions_CS| Structure points to **Actions** property.| No| No
|**Certificates**|RedfishCS_Link| Structure link list to **Certificates** property.| No| Yes
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**Enabled**|RedfishCS_bool| Boolean pointer to **Enabled** property.| No| No
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**Links**|RedfishManagerAccount_V1_6_0_Links_CS| Structure points to **Links** property.| No| No
|**Locked**|RedfishCS_bool| Boolean pointer to **Locked** property.| No| No
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**OEMAccountTypes**|RedfishCS_char| String pointer to **OEMAccountTypes** property.| No| No
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**Password**|RedfishCS_char| String pointer to **Password** property.| No| No
|**PasswordChangeRequired**|RedfishCS_bool| Boolean pointer to **PasswordChangeRequired** property.| No| No
|**PasswordExpiration**|RedfishCS_char| String pointer to **PasswordExpiration** property.| No| No
|**RoleId**|RedfishCS_char| String pointer to **RoleId** property.| No| No
|**SNMP**|RedfishManagerAccount_V1_6_0_SNMPUserInfo_CS| Structure points to **SNMP** property.| No| No
|**UserName**|RedfishCS_char| String pointer to **UserName** property.| No| No
## Redfish ManagerAccount V1_6_0 to C Structure Function
    RedfishCS_status
    Json_ManagerAccount_V1_6_0_To_CS (RedfishCS_char *JsonRawText, RedfishManagerAccount_V1_6_0_ManagerAccount_CS **ReturnedCS);

## C Structure to Redfish ManagerAccount V1_6_0 JSON Function
    RedfishCS_status
    CS_To_ManagerAccount_V1_6_0_JSON (RedfishManagerAccount_V1_6_0_ManagerAccount_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish ManagerAccount V1_6_0 C Structure Function
    RedfishCS_status
    DestroyManagerAccount_V1_6_0_CS (RedfishManagerAccount_V1_6_0_ManagerAccount_CS *CSPtr);

