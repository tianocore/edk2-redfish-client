# Definition of ManagerNetworkProtocol.V1_7_0 and functions<br><br>

## Actions
    typedef struct _RedfishManagerNetworkProtocol_V1_7_0_Actions_CS {
        RedfishManagerNetworkProtocol_V1_7_0_OemActions_CS *Oem;
    } RedfishManagerNetworkProtocol_V1_7_0_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishManagerNetworkProtocol_V1_7_0_OemActions_CS| Structure points to **Oem** property.| No| No


## EngineId
    typedef struct _RedfishManagerNetworkProtocol_V1_7_0_EngineId_CS {
        RedfishCS_char *ArchitectureId;
        RedfishCS_char *EnterpriseSpecificMethod;
        RedfishCS_char *PrivateEnterpriseId;
    } RedfishManagerNetworkProtocol_V1_7_0_EngineId_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**ArchitectureId**|RedfishCS_char| String pointer to **ArchitectureId** property.| No| Yes
|**EnterpriseSpecificMethod**|RedfishCS_char| String pointer to **EnterpriseSpecificMethod** property.| No| Yes
|**PrivateEnterpriseId**|RedfishCS_char| String pointer to **PrivateEnterpriseId** property.| No| Yes


## HTTPSProtocol
    typedef struct _RedfishManagerNetworkProtocol_V1_7_0_HTTPSProtocol_CS {
        RedfishCS_Link Certificates;
        RedfishCS_int64 *Port;
        RedfishCS_bool *ProtocolEnabled;
    } RedfishManagerNetworkProtocol_V1_7_0_HTTPSProtocol_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Certificates**|RedfishCS_Link| Structure link list to **Certificates** property.| No| Yes
|**Port**|RedfishCS_int64| 64-bit long long interger pointer to **Port** property.| No| No
|**ProtocolEnabled**|RedfishCS_bool| Boolean pointer to **ProtocolEnabled** property.| No| No


## NTPProtocol
    typedef struct _RedfishManagerNetworkProtocol_V1_7_0_NTPProtocol_CS {
        RedfishCS_char_Array *NTPServers;
        RedfishCS_int64 *Port;
        RedfishCS_bool *ProtocolEnabled;
    } RedfishManagerNetworkProtocol_V1_7_0_NTPProtocol_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**NTPServers**|RedfishCS_char_Array| Structure array points to one or more than one **RedfishCS_char *** for property **NTPServers**.| No| No
|**Port**|RedfishCS_int64| 64-bit long long interger pointer to **Port** property.| No| No
|**ProtocolEnabled**|RedfishCS_bool| Boolean pointer to **ProtocolEnabled** property.| No| No


## OemActions
    typedef struct _RedfishManagerNetworkProtocol_V1_7_0_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishManagerNetworkProtocol_V1_7_0_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## Protocol
    typedef struct _RedfishManagerNetworkProtocol_V1_7_0_Protocol_CS {
        RedfishCS_int64 *Port;
        RedfishCS_bool *ProtocolEnabled;
    } RedfishManagerNetworkProtocol_V1_7_0_Protocol_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Port**|RedfishCS_int64| 64-bit long long interger pointer to **Port** property.| No| No
|**ProtocolEnabled**|RedfishCS_bool| Boolean pointer to **ProtocolEnabled** property.| No| No


## SNMPCommunity
    typedef struct _RedfishManagerNetworkProtocol_V1_7_0_SNMPCommunity_CS {
        RedfishCS_char *AccessMode;
        RedfishCS_char *CommunityString;
        RedfishCS_char *Name;
    } RedfishManagerNetworkProtocol_V1_7_0_SNMPCommunity_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**AccessMode**|RedfishCS_char| String pointer to **AccessMode** property.| No| No
|**CommunityString**|RedfishCS_char| String pointer to **CommunityString** property.| No| No
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| No


## SNMPProtocol
    typedef struct _RedfishManagerNetworkProtocol_V1_7_0_SNMPProtocol_CS {
        RedfishCS_char *AuthenticationProtocol;
        RedfishCS_char *CommunityAccessMode;
        RedfishManagerNetworkProtocol_V1_7_0_SNMPCommunity_Array_CS *CommunityStrings;
        RedfishCS_bool *EnableSNMPv1;
        RedfishCS_bool *EnableSNMPv2c;
        RedfishCS_bool *EnableSNMPv3;
        RedfishCS_char *EncryptionProtocol;
        RedfishManagerNetworkProtocol_V1_7_0_EngineId_CS *EngineId;
        RedfishCS_bool *HideCommunityStrings;
        RedfishCS_int64 *Port;
        RedfishCS_bool *ProtocolEnabled;
    } RedfishManagerNetworkProtocol_V1_7_0_SNMPProtocol_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**AuthenticationProtocol**|RedfishCS_char| String pointer to **AuthenticationProtocol** property.| No| No
|**CommunityAccessMode**|RedfishCS_char| String pointer to **CommunityAccessMode** property.| No| No
|**CommunityStrings**|RedfishManagerNetworkProtocol_V1_7_0_SNMPCommunity_Array_CS| Structure array points to one or more than one **RedfishManagerNetworkProtocol_V1_7_0_SNMPCommunity_Array_CS** structures for property **CommunityStrings**.| No| No
|**EnableSNMPv1**|RedfishCS_bool| Boolean pointer to **EnableSNMPv1** property.| No| No
|**EnableSNMPv2c**|RedfishCS_bool| Boolean pointer to **EnableSNMPv2c** property.| No| No
|**EnableSNMPv3**|RedfishCS_bool| Boolean pointer to **EnableSNMPv3** property.| No| No
|**EncryptionProtocol**|RedfishCS_char| String pointer to **EncryptionProtocol** property.| No| No
|**EngineId**|RedfishManagerNetworkProtocol_V1_7_0_EngineId_CS| Structure points to **EngineId** property.| No| No
|**HideCommunityStrings**|RedfishCS_bool| Boolean pointer to **HideCommunityStrings** property.| No| No
|**Port**|RedfishCS_int64| 64-bit long long interger pointer to **Port** property.| No| No
|**ProtocolEnabled**|RedfishCS_bool| Boolean pointer to **ProtocolEnabled** property.| No| No


## SSDProtocol
    typedef struct _RedfishManagerNetworkProtocol_V1_7_0_SSDProtocol_CS {
        RedfishCS_char *NotifyIPv6Scope;
        RedfishCS_int64 *NotifyMulticastIntervalSeconds;
        RedfishCS_int64 *NotifyTTL;
        RedfishCS_int64 *Port;
        RedfishCS_bool *ProtocolEnabled;
    } RedfishManagerNetworkProtocol_V1_7_0_SSDProtocol_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**NotifyIPv6Scope**|RedfishCS_char| String pointer to **NotifyIPv6Scope** property.| No| No
|**NotifyMulticastIntervalSeconds**|RedfishCS_int64| 64-bit long long interger pointer to **NotifyMulticastIntervalSeconds** property.| No| No
|**NotifyTTL**|RedfishCS_int64| 64-bit long long interger pointer to **NotifyTTL** property.| No| No
|**Port**|RedfishCS_int64| 64-bit long long interger pointer to **Port** property.| No| No
|**ProtocolEnabled**|RedfishCS_bool| Boolean pointer to **ProtocolEnabled** property.| No| No


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



## RedfishManagerNetworkProtocol_V1_7_0_SNMPCommunity_Array_CS
    typedef struct _RedfishManagerNetworkProtocol_V1_7_0_SNMPCommunity_Array_CS  {
        RedfishCS_Link *Next;
        RedfishManagerNetworkProtocol_V1_7_0_SNMPCommunity_CS *ArrayValue;
    } RedfishManagerNetworkProtocol_V1_7_0_SNMPCommunity_Array_CS;



## RedfishResource_Condition_Array_CS
    typedef struct _RedfishResource_Condition_Array_CS  {
        RedfishCS_Link *Next;
        RedfishResource_Condition_CS *ArrayValue;
    } RedfishResource_Condition_Array_CS;



## ManagerNetworkProtocol
    typedef struct _RedfishManagerNetworkProtocol_V1_7_0_ManagerNetworkProtocol_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishManagerNetworkProtocol_V1_7_0_Actions_CS *Actions;
        RedfishManagerNetworkProtocol_V1_7_0_Protocol_CS *DHCP;
        RedfishManagerNetworkProtocol_V1_7_0_Protocol_CS *DHCPv6;
        RedfishCS_char *Description;
        RedfishCS_char *FQDN;
        RedfishManagerNetworkProtocol_V1_7_0_Protocol_CS *HTTP;
        RedfishManagerNetworkProtocol_V1_7_0_HTTPSProtocol_CS *HTTPS;
        RedfishCS_char *HostName;
        RedfishManagerNetworkProtocol_V1_7_0_Protocol_CS *IPMI;
        RedfishCS_char *Id;
        RedfishManagerNetworkProtocol_V1_7_0_Protocol_CS *KVMIP;
        RedfishManagerNetworkProtocol_V1_7_0_NTPProtocol_CS *NTP;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishManagerNetworkProtocol_V1_7_0_Protocol_CS *RDP;
        RedfishManagerNetworkProtocol_V1_7_0_Protocol_CS *RFB;
        RedfishManagerNetworkProtocol_V1_7_0_SNMPProtocol_CS *SNMP;
        RedfishManagerNetworkProtocol_V1_7_0_SSDProtocol_CS *SSDP;
        RedfishManagerNetworkProtocol_V1_7_0_Protocol_CS *SSH;
        RedfishResource_Status_CS *Status;
        RedfishManagerNetworkProtocol_V1_7_0_Protocol_CS *Telnet;
        RedfishManagerNetworkProtocol_V1_7_0_Protocol_CS *VirtualMedia;
    } RedfishManagerNetworkProtocol_V1_7_0_ManagerNetworkProtocol_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishManagerNetworkProtocol_V1_7_0_Actions_CS| Structure points to **Actions** property.| No| No
|**DHCP**|RedfishManagerNetworkProtocol_V1_7_0_Protocol_CS| Structure points to **DHCP** property.| No| No
|**DHCPv6**|RedfishManagerNetworkProtocol_V1_7_0_Protocol_CS| Structure points to **DHCPv6** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**FQDN**|RedfishCS_char| String pointer to **FQDN** property.| No| Yes
|**HTTP**|RedfishManagerNetworkProtocol_V1_7_0_Protocol_CS| Structure points to **HTTP** property.| No| No
|**HTTPS**|RedfishManagerNetworkProtocol_V1_7_0_HTTPSProtocol_CS| Structure points to **HTTPS** property.| No| No
|**HostName**|RedfishCS_char| String pointer to **HostName** property.| No| Yes
|**IPMI**|RedfishManagerNetworkProtocol_V1_7_0_Protocol_CS| Structure points to **IPMI** property.| No| No
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**KVMIP**|RedfishManagerNetworkProtocol_V1_7_0_Protocol_CS| Structure points to **KVMIP** property.| No| No
|**NTP**|RedfishManagerNetworkProtocol_V1_7_0_NTPProtocol_CS| Structure points to **NTP** property.| No| No
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**RDP**|RedfishManagerNetworkProtocol_V1_7_0_Protocol_CS| Structure points to **RDP** property.| No| No
|**RFB**|RedfishManagerNetworkProtocol_V1_7_0_Protocol_CS| Structure points to **RFB** property.| No| No
|**SNMP**|RedfishManagerNetworkProtocol_V1_7_0_SNMPProtocol_CS| Structure points to **SNMP** property.| No| No
|**SSDP**|RedfishManagerNetworkProtocol_V1_7_0_SSDProtocol_CS| Structure points to **SSDP** property.| No| No
|**SSH**|RedfishManagerNetworkProtocol_V1_7_0_Protocol_CS| Structure points to **SSH** property.| No| No
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
|**Telnet**|RedfishManagerNetworkProtocol_V1_7_0_Protocol_CS| Structure points to **Telnet** property.| No| No
|**VirtualMedia**|RedfishManagerNetworkProtocol_V1_7_0_Protocol_CS| Structure points to **VirtualMedia** property.| No| No
## Redfish ManagerNetworkProtocol V1_7_0 to C Structure Function
    RedfishCS_status
    Json_ManagerNetworkProtocol_V1_7_0_To_CS (RedfishCS_char *JsonRawText, RedfishManagerNetworkProtocol_V1_7_0_ManagerNetworkProtocol_CS **ReturnedCS);

## C Structure to Redfish ManagerNetworkProtocol V1_7_0 JSON Function
    RedfishCS_status
    CS_To_ManagerNetworkProtocol_V1_7_0_JSON (RedfishManagerNetworkProtocol_V1_7_0_ManagerNetworkProtocol_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish ManagerNetworkProtocol V1_7_0 C Structure Function
    RedfishCS_status
    DestroyManagerNetworkProtocol_V1_7_0_CS (RedfishManagerNetworkProtocol_V1_7_0_ManagerNetworkProtocol_CS *CSPtr);

