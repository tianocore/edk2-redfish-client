# Definition of Manager.V1_1_6 and functions<br><br>

## Actions
    typedef struct _RedfishManager_V1_1_6_Actions_CS {
        RedfishManager_V1_1_6_ForceFailover_CS *Manager_ForceFailover;
        RedfishManager_V1_1_6_ModifyRedundancySet_CS *Manager_ModifyRedundancySet;
        RedfishManager_V1_1_6_Reset_CS *Manager_Reset;
        RedfishManager_V1_1_6_OemActions_CS *Oem;
    } RedfishManager_V1_1_6_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Manager_ForceFailover**|RedfishManager_V1_1_6_ForceFailover_CS| Structure points to **#Manager.ForceFailover** property.| No| No
|**Manager_ModifyRedundancySet**|RedfishManager_V1_1_6_ModifyRedundancySet_CS| Structure points to **#Manager.ModifyRedundancySet** property.| No| No
|**Manager_Reset**|RedfishManager_V1_1_6_Reset_CS| Structure points to **#Manager.Reset** property.| No| No
|**Oem**|RedfishManager_V1_1_6_OemActions_CS| Structure points to **Oem** property.| No| No


## CommandShell
    typedef struct _RedfishManager_V1_1_6_CommandShell_CS {
        RedfishCS_char_Array *ConnectTypesSupported;
        RedfishCS_int64 *MaxConcurrentSessions;
        RedfishCS_bool *ServiceEnabled;
    } RedfishManager_V1_1_6_CommandShell_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**ConnectTypesSupported**|RedfishCS_char_Array| Structure array points to one or more than one **RedfishCS_char *** for property **ConnectTypesSupported**.| No| Yes
|**MaxConcurrentSessions**|RedfishCS_int64| 64-bit long long interger pointer to **MaxConcurrentSessions** property.| No| Yes
|**ServiceEnabled**|RedfishCS_bool| Boolean pointer to **ServiceEnabled** property.| No| No


## ForceFailover
    typedef struct _RedfishManager_V1_1_6_ForceFailover_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishManager_V1_1_6_ForceFailover_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**target**|RedfishCS_char| String pointer to **target** property.| No| No
|**title**|RedfishCS_char| String pointer to **title** property.| No| No


## GraphicalConsole
    typedef struct _RedfishManager_V1_1_6_GraphicalConsole_CS {
        RedfishCS_char_Array *ConnectTypesSupported;
        RedfishCS_int64 *MaxConcurrentSessions;
        RedfishCS_bool *ServiceEnabled;
    } RedfishManager_V1_1_6_GraphicalConsole_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**ConnectTypesSupported**|RedfishCS_char_Array| Structure array points to one or more than one **RedfishCS_char *** for property **ConnectTypesSupported**.| No| Yes
|**MaxConcurrentSessions**|RedfishCS_int64| 64-bit long long interger pointer to **MaxConcurrentSessions** property.| No| Yes
|**ServiceEnabled**|RedfishCS_bool| Boolean pointer to **ServiceEnabled** property.| No| No


## Links
    typedef struct _RedfishManager_V1_1_6_Links_CS {
        RedfishCS_Link ManagerForChassis;
        RedfishCS_int64 *ManagerForChassisodata_count;
        RedfishCS_Link ManagerForServers;
        RedfishCS_int64 *ManagerForServersodata_count;
        RedfishCS_Link ManagerInChassis;
        RedfishResource_Oem_CS *Oem;
    } RedfishManager_V1_1_6_Links_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**ManagerForChassis**|RedfishCS_Link| Structure link list to **ManagerForChassis** property.| No| Yes
|**ManagerForChassisodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **ManagerForChassis@odata.count** property.| No| No
|**ManagerForServers**|RedfishCS_Link| Structure link list to **ManagerForServers** property.| No| Yes
|**ManagerForServersodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **ManagerForServers@odata.count** property.| No| No
|**ManagerInChassis**|RedfishCS_Link| Structure link list to **ManagerInChassis** property.| No| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No


## ManagerService
    typedef struct _RedfishManager_V1_1_6_ManagerService_CS {
        RedfishCS_int64 *MaxConcurrentSessions;
        RedfishCS_bool *ServiceEnabled;
    } RedfishManager_V1_1_6_ManagerService_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**MaxConcurrentSessions**|RedfishCS_int64| 64-bit long long interger pointer to **MaxConcurrentSessions** property.| No| Yes
|**ServiceEnabled**|RedfishCS_bool| Boolean pointer to **ServiceEnabled** property.| No| No


## ModifyRedundancySet
    typedef struct _RedfishManager_V1_1_6_ModifyRedundancySet_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishManager_V1_1_6_ModifyRedundancySet_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**target**|RedfishCS_char| String pointer to **target** property.| No| No
|**title**|RedfishCS_char| String pointer to **title** property.| No| No


## OemActions
    typedef struct _RedfishManager_V1_1_6_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishManager_V1_1_6_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## Reset
    typedef struct _RedfishManager_V1_1_6_Reset_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishManager_V1_1_6_Reset_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**target**|RedfishCS_char| String pointer to **target** property.| No| No
|**title**|RedfishCS_char| String pointer to **title** property.| No| No


## SerialConsole
    typedef struct _RedfishManager_V1_1_6_SerialConsole_CS {
        RedfishCS_char_Array *ConnectTypesSupported;
        RedfishCS_int64 *MaxConcurrentSessions;
        RedfishCS_bool *ServiceEnabled;
    } RedfishManager_V1_1_6_SerialConsole_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**ConnectTypesSupported**|RedfishCS_char_Array| Structure array points to one or more than one **RedfishCS_char *** for property **ConnectTypesSupported**.| No| Yes
|**MaxConcurrentSessions**|RedfishCS_int64| 64-bit long long interger pointer to **MaxConcurrentSessions** property.| No| Yes
|**ServiceEnabled**|RedfishCS_bool| Boolean pointer to **ServiceEnabled** property.| No| No


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



## Manager
    typedef struct _RedfishManager_V1_1_6_Manager_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishManager_V1_1_6_Actions_CS *Actions;
        RedfishManager_V1_1_6_CommandShell_CS *CommandShell;
        RedfishCS_char *DateTime;
        RedfishCS_char *DateTimeLocalOffset;
        RedfishCS_char *Description;
        RedfishCS_Link EthernetInterfaces;
        RedfishCS_char *FirmwareVersion;
        RedfishManager_V1_1_6_GraphicalConsole_CS *GraphicalConsole;
        RedfishCS_char *Id;
        RedfishManager_V1_1_6_Links_CS *Links;
        RedfishCS_Link LogServices;
        RedfishCS_char *ManagerType;
        RedfishCS_char *Model;
        RedfishCS_char *Name;
        RedfishCS_Link NetworkProtocol;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_Link Redundancy;
        RedfishCS_int64 *Redundancyodata_count;
        RedfishManager_V1_1_6_SerialConsole_CS *SerialConsole;
        RedfishCS_Link SerialInterfaces;
        RedfishCS_char *ServiceEntryPointUUID;
        RedfishResource_Status_CS *Status;
        RedfishCS_char *UUID;
        RedfishCS_Link VirtualMedia;
    } RedfishManager_V1_1_6_Manager_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishManager_V1_1_6_Actions_CS| Structure points to **Actions** property.| No| No
|**CommandShell**|RedfishManager_V1_1_6_CommandShell_CS| Structure points to **CommandShell** property.| No| No
|**DateTime**|RedfishCS_char| String pointer to **DateTime** property.| No| No
|**DateTimeLocalOffset**|RedfishCS_char| String pointer to **DateTimeLocalOffset** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**EthernetInterfaces**|RedfishCS_Link| Structure link list to **EthernetInterfaces** property.| No| Yes
|**FirmwareVersion**|RedfishCS_char| String pointer to **FirmwareVersion** property.| No| Yes
|**GraphicalConsole**|RedfishManager_V1_1_6_GraphicalConsole_CS| Structure points to **GraphicalConsole** property.| No| No
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**Links**|RedfishManager_V1_1_6_Links_CS| Structure points to **Links** property.| No| No
|**LogServices**|RedfishCS_Link| Structure link list to **LogServices** property.| No| Yes
|**ManagerType**|RedfishCS_char| String pointer to **ManagerType** property.| No| Yes
|**Model**|RedfishCS_char| String pointer to **Model** property.| No| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**NetworkProtocol**|RedfishCS_Link| Structure link list to **NetworkProtocol** property.| No| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**Redundancy**|RedfishCS_Link| Structure link list to **Redundancy** property.| No| No
|**Redundancyodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **Redundancy@odata.count** property.| No| No
|**SerialConsole**|RedfishManager_V1_1_6_SerialConsole_CS| Structure points to **SerialConsole** property.| No| No
|**SerialInterfaces**|RedfishCS_Link| Structure link list to **SerialInterfaces** property.| No| Yes
|**ServiceEntryPointUUID**|RedfishCS_char| String pointer to **ServiceEntryPointUUID** property.| No| Yes
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
|**UUID**|RedfishCS_char| String pointer to **UUID** property.| No| Yes
|**VirtualMedia**|RedfishCS_Link| Structure link list to **VirtualMedia** property.| No| Yes
## Redfish Manager V1_1_6 to C Structure Function
    RedfishCS_status
    Json_Manager_V1_1_6_To_CS (RedfishCS_char *JsonRawText, RedfishManager_V1_1_6_Manager_CS **ReturnedCS);

## C Structure to Redfish Manager V1_1_6 JSON Function
    RedfishCS_status
    CS_To_Manager_V1_1_6_JSON (RedfishManager_V1_1_6_Manager_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish Manager V1_1_6 C Structure Function
    RedfishCS_status
    DestroyManager_V1_1_6_CS (RedfishManager_V1_1_6_Manager_CS *CSPtr);

