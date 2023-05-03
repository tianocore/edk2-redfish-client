# Definition of ManagerNetworkProtocol.V1_2_1 and functions<br><br>

## Actions
    typedef struct _RedfishManagerNetworkProtocol_V1_2_1_Actions_CS {
        RedfishManagerNetworkProtocol_V1_2_1_OemActions_CS *Oem;
    } RedfishManagerNetworkProtocol_V1_2_1_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishManagerNetworkProtocol_V1_2_1_OemActions_CS| Structure points to **Oem** property.| No| No


## NTPProtocol
    typedef struct _RedfishManagerNetworkProtocol_V1_2_1_NTPProtocol_CS {
        RedfishCS_char_Array *NTPServers;
        RedfishCS_int64 *Port;
        RedfishCS_bool *ProtocolEnabled;
    } RedfishManagerNetworkProtocol_V1_2_1_NTPProtocol_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**NTPServers**|RedfishCS_char_Array| Structure array points to one or more than one **RedfishCS_char *** for property **NTPServers**.| No| No
|**Port**|RedfishCS_int64| 64-bit long long interger pointer to **Port** property.| No| No
|**ProtocolEnabled**|RedfishCS_bool| Boolean pointer to **ProtocolEnabled** property.| No| No


## OemActions
    typedef struct _RedfishManagerNetworkProtocol_V1_2_1_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishManagerNetworkProtocol_V1_2_1_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## Protocol
    typedef struct _RedfishManagerNetworkProtocol_V1_2_1_Protocol_CS {
        RedfishCS_int64 *Port;
        RedfishCS_bool *ProtocolEnabled;
    } RedfishManagerNetworkProtocol_V1_2_1_Protocol_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Port**|RedfishCS_int64| 64-bit long long interger pointer to **Port** property.| No| No
|**ProtocolEnabled**|RedfishCS_bool| Boolean pointer to **ProtocolEnabled** property.| No| No


## SSDProtocol
    typedef struct _RedfishManagerNetworkProtocol_V1_2_1_SSDProtocol_CS {
        RedfishCS_char *NotifyIPv6Scope;
        RedfishCS_int64 *NotifyMulticastIntervalSeconds;
        RedfishCS_int64 *NotifyTTL;
        RedfishCS_int64 *Port;
        RedfishCS_bool *ProtocolEnabled;
    } RedfishManagerNetworkProtocol_V1_2_1_SSDProtocol_CS;

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



## RedfishResource_Condition_Array_CS
    typedef struct _RedfishResource_Condition_Array_CS  {
        RedfishCS_Link *Next;
        RedfishResource_Condition_CS *ArrayValue;
    } RedfishResource_Condition_Array_CS;



## ManagerNetworkProtocol
    typedef struct _RedfishManagerNetworkProtocol_V1_2_1_ManagerNetworkProtocol_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishManagerNetworkProtocol_V1_2_1_Actions_CS *Actions;
        RedfishManagerNetworkProtocol_V1_2_1_Protocol_CS *DHCP;
        RedfishCS_char *Description;
        RedfishCS_char *FQDN;
        RedfishManagerNetworkProtocol_V1_2_1_Protocol_CS *HTTP;
        RedfishManagerNetworkProtocol_V1_2_1_Protocol_CS *HTTPS;
        RedfishCS_char *HostName;
        RedfishManagerNetworkProtocol_V1_2_1_Protocol_CS *IPMI;
        RedfishCS_char *Id;
        RedfishManagerNetworkProtocol_V1_2_1_Protocol_CS *KVMIP;
        RedfishManagerNetworkProtocol_V1_2_1_NTPProtocol_CS *NTP;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishManagerNetworkProtocol_V1_2_1_Protocol_CS *SNMP;
        RedfishManagerNetworkProtocol_V1_2_1_SSDProtocol_CS *SSDP;
        RedfishManagerNetworkProtocol_V1_2_1_Protocol_CS *SSH;
        RedfishResource_Status_CS *Status;
        RedfishManagerNetworkProtocol_V1_2_1_Protocol_CS *Telnet;
        RedfishManagerNetworkProtocol_V1_2_1_Protocol_CS *VirtualMedia;
    } RedfishManagerNetworkProtocol_V1_2_1_ManagerNetworkProtocol_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishManagerNetworkProtocol_V1_2_1_Actions_CS| Structure points to **Actions** property.| No| No
|**DHCP**|RedfishManagerNetworkProtocol_V1_2_1_Protocol_CS| Structure points to **DHCP** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**FQDN**|RedfishCS_char| String pointer to **FQDN** property.| No| Yes
|**HTTP**|RedfishManagerNetworkProtocol_V1_2_1_Protocol_CS| Structure points to **HTTP** property.| No| No
|**HTTPS**|RedfishManagerNetworkProtocol_V1_2_1_Protocol_CS| Structure points to **HTTPS** property.| No| No
|**HostName**|RedfishCS_char| String pointer to **HostName** property.| No| Yes
|**IPMI**|RedfishManagerNetworkProtocol_V1_2_1_Protocol_CS| Structure points to **IPMI** property.| No| No
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**KVMIP**|RedfishManagerNetworkProtocol_V1_2_1_Protocol_CS| Structure points to **KVMIP** property.| No| No
|**NTP**|RedfishManagerNetworkProtocol_V1_2_1_NTPProtocol_CS| Structure points to **NTP** property.| No| No
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**SNMP**|RedfishManagerNetworkProtocol_V1_2_1_Protocol_CS| Structure points to **SNMP** property.| No| No
|**SSDP**|RedfishManagerNetworkProtocol_V1_2_1_SSDProtocol_CS| Structure points to **SSDP** property.| No| No
|**SSH**|RedfishManagerNetworkProtocol_V1_2_1_Protocol_CS| Structure points to **SSH** property.| No| No
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
|**Telnet**|RedfishManagerNetworkProtocol_V1_2_1_Protocol_CS| Structure points to **Telnet** property.| No| No
|**VirtualMedia**|RedfishManagerNetworkProtocol_V1_2_1_Protocol_CS| Structure points to **VirtualMedia** property.| No| No
## Redfish ManagerNetworkProtocol V1_2_1 to C Structure Function
    RedfishCS_status
    Json_ManagerNetworkProtocol_V1_2_1_To_CS (RedfishCS_char *JsonRawText, RedfishManagerNetworkProtocol_V1_2_1_ManagerNetworkProtocol_CS **ReturnedCS);

## C Structure to Redfish ManagerNetworkProtocol V1_2_1 JSON Function
    RedfishCS_status
    CS_To_ManagerNetworkProtocol_V1_2_1_JSON (RedfishManagerNetworkProtocol_V1_2_1_ManagerNetworkProtocol_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish ManagerNetworkProtocol V1_2_1 C Structure Function
    RedfishCS_status
    DestroyManagerNetworkProtocol_V1_2_1_CS (RedfishManagerNetworkProtocol_V1_2_1_ManagerNetworkProtocol_CS *CSPtr);

