# Definition of NetworkPort.V1_2_6 and functions<br><br>

## Actions
    typedef struct _RedfishNetworkPort_V1_2_6_Actions_CS {
        RedfishNetworkPort_V1_2_6_OemActions_CS *Oem;
    } RedfishNetworkPort_V1_2_6_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishNetworkPort_V1_2_6_OemActions_CS| Structure points to **Oem** property.| No| No


## NetDevFuncMaxBWAlloc
    typedef struct _RedfishNetworkPort_V1_2_6_NetDevFuncMaxBWAlloc_CS {
        RedfishCS_int64 *MaxBWAllocPercent;
        RedfishCS_Link NetworkDeviceFunction;
    } RedfishNetworkPort_V1_2_6_NetDevFuncMaxBWAlloc_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**MaxBWAllocPercent**|RedfishCS_int64| 64-bit long long interger pointer to **MaxBWAllocPercent** property.| No| No
|**NetworkDeviceFunction**|RedfishCS_Link| Structure link list to **NetworkDeviceFunction** property.| No| Yes


## NetDevFuncMinBWAlloc
    typedef struct _RedfishNetworkPort_V1_2_6_NetDevFuncMinBWAlloc_CS {
        RedfishCS_int64 *MinBWAllocPercent;
        RedfishCS_Link NetworkDeviceFunction;
    } RedfishNetworkPort_V1_2_6_NetDevFuncMinBWAlloc_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**MinBWAllocPercent**|RedfishCS_int64| 64-bit long long interger pointer to **MinBWAllocPercent** property.| No| No
|**NetworkDeviceFunction**|RedfishCS_Link| Structure link list to **NetworkDeviceFunction** property.| No| Yes


## OemActions
    typedef struct _RedfishNetworkPort_V1_2_6_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishNetworkPort_V1_2_6_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## SupportedLinkCapabilities
    typedef struct _RedfishNetworkPort_V1_2_6_SupportedLinkCapabilities_CS {
        RedfishCS_bool *AutoSpeedNegotiation;
        RedfishCS_int64_Array *CapableLinkSpeedMbps;
        RedfishCS_char *LinkNetworkTechnology;
        RedfishCS_int64 *LinkSpeedMbps;
    } RedfishNetworkPort_V1_2_6_SupportedLinkCapabilities_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**AutoSpeedNegotiation**|RedfishCS_bool| Boolean pointer to **AutoSpeedNegotiation** property.| No| Yes
|**CapableLinkSpeedMbps**|RedfishCS_int64_Array| Structure array points to one or more than one **RedfishCS_int64 *** for property **CapableLinkSpeedMbps**.| No| Yes
|**LinkNetworkTechnology**|RedfishCS_char| String pointer to **LinkNetworkTechnology** property.| No| Yes
|**LinkSpeedMbps**|RedfishCS_int64| 64-bit long long interger pointer to **LinkSpeedMbps** property.| No| Yes


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


## RedfishCS_int64_Array
    typedef struct _RedfishCS_int64_Array  {
        RedfishCS_Link *Next;
        RedfishCS_int64 *ArrayValue;
    } RedfishCS_int64_Array;



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



## NetworkPort
    typedef struct _RedfishNetworkPort_V1_2_6_NetworkPort_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishNetworkPort_V1_2_6_Actions_CS *Actions;
        RedfishCS_char *ActiveLinkTechnology;
        RedfishCS_char *AssociatedNetworkAddresses;
        RedfishCS_int64 *CurrentLinkSpeedMbps;
        RedfishCS_char *Description;
        RedfishCS_bool *EEEEnabled;
        RedfishCS_char *FCFabricName;
        RedfishCS_char *FCPortConnectionType;
        RedfishCS_char *FlowControlConfiguration;
        RedfishCS_char *FlowControlStatus;
        RedfishCS_char *Id;
        RedfishCS_char *LinkStatus;
        RedfishCS_int64 *MaxFrameSize;
        RedfishCS_char *Name;
        RedfishNetworkPort_V1_2_6_NetDevFuncMaxBWAlloc_CS *NetDevFuncMaxBWAlloc;
        RedfishNetworkPort_V1_2_6_NetDevFuncMinBWAlloc_CS *NetDevFuncMinBWAlloc;
        RedfishCS_int64 *NumberDiscoveredRemotePorts;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_char *PhysicalPortNumber;
        RedfishCS_int64 *PortMaximumMTU;
        RedfishCS_bool *SignalDetected;
        RedfishResource_Status_CS *Status;
        RedfishCS_char *SupportedEthernetCapabilities;
        RedfishNetworkPort_V1_2_6_SupportedLinkCapabilities_CS *SupportedLinkCapabilities;
        RedfishCS_char *VendorId;
        RedfishCS_bool *WakeOnLANEnabled;
    } RedfishNetworkPort_V1_2_6_NetworkPort_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishNetworkPort_V1_2_6_Actions_CS| Structure points to **Actions** property.| No| No
|**ActiveLinkTechnology**|RedfishCS_char| String pointer to **ActiveLinkTechnology** property.| No| No
|**AssociatedNetworkAddresses**|RedfishCS_char| String pointer to **AssociatedNetworkAddresses** property.| No| Yes
|**CurrentLinkSpeedMbps**|RedfishCS_int64| 64-bit long long interger pointer to **CurrentLinkSpeedMbps** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**EEEEnabled**|RedfishCS_bool| Boolean pointer to **EEEEnabled** property.| No| No
|**FCFabricName**|RedfishCS_char| String pointer to **FCFabricName** property.| No| Yes
|**FCPortConnectionType**|RedfishCS_char| String pointer to **FCPortConnectionType** property.| No| Yes
|**FlowControlConfiguration**|RedfishCS_char| String pointer to **FlowControlConfiguration** property.| No| No
|**FlowControlStatus**|RedfishCS_char| String pointer to **FlowControlStatus** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**LinkStatus**|RedfishCS_char| String pointer to **LinkStatus** property.| No| Yes
|**MaxFrameSize**|RedfishCS_int64| 64-bit long long interger pointer to **MaxFrameSize** property.| No| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**NetDevFuncMaxBWAlloc**|RedfishNetworkPort_V1_2_6_NetDevFuncMaxBWAlloc_CS| Structure points to **NetDevFuncMaxBWAlloc** property.| No| No
|**NetDevFuncMinBWAlloc**|RedfishNetworkPort_V1_2_6_NetDevFuncMinBWAlloc_CS| Structure points to **NetDevFuncMinBWAlloc** property.| No| No
|**NumberDiscoveredRemotePorts**|RedfishCS_int64| 64-bit long long interger pointer to **NumberDiscoveredRemotePorts** property.| No| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**PhysicalPortNumber**|RedfishCS_char| String pointer to **PhysicalPortNumber** property.| No| Yes
|**PortMaximumMTU**|RedfishCS_int64| 64-bit long long interger pointer to **PortMaximumMTU** property.| No| Yes
|**SignalDetected**|RedfishCS_bool| Boolean pointer to **SignalDetected** property.| No| Yes
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
|**SupportedEthernetCapabilities**|RedfishCS_char| String pointer to **SupportedEthernetCapabilities** property.| No| Yes
|**SupportedLinkCapabilities**|RedfishNetworkPort_V1_2_6_SupportedLinkCapabilities_CS| Structure points to **SupportedLinkCapabilities** property.| No| No
|**VendorId**|RedfishCS_char| String pointer to **VendorId** property.| No| Yes
|**WakeOnLANEnabled**|RedfishCS_bool| Boolean pointer to **WakeOnLANEnabled** property.| No| No
## Redfish NetworkPort V1_2_6 to C Structure Function
    RedfishCS_status
    Json_NetworkPort_V1_2_6_To_CS (RedfishCS_char *JsonRawText, RedfishNetworkPort_V1_2_6_NetworkPort_CS **ReturnedCS);

## C Structure to Redfish NetworkPort V1_2_6 JSON Function
    RedfishCS_status
    CS_To_NetworkPort_V1_2_6_JSON (RedfishNetworkPort_V1_2_6_NetworkPort_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish NetworkPort V1_2_6 C Structure Function
    RedfishCS_status
    DestroyNetworkPort_V1_2_6_CS (RedfishNetworkPort_V1_2_6_NetworkPort_CS *CSPtr);

