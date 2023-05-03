# Definition of PrivilegeRegistry.V1_0_5 and functions<br><br>

## Mapping
    typedef struct _RedfishPrivilegeRegistry_V1_0_5_Mapping_CS {
        RedfishCS_char *Entity;
        RedfishPrivilegeRegistry_V1_0_5_OperationMap_CS *OperationMap;
        RedfishPrivilegeRegistry_V1_0_5_Target_PrivilegeMap_Array_CS *PropertyOverrides;
        RedfishPrivilegeRegistry_V1_0_5_Target_PrivilegeMap_Array_CS *ResourceURIOverrides;
        RedfishPrivilegeRegistry_V1_0_5_Target_PrivilegeMap_Array_CS *SubordinateOverrides;
    } RedfishPrivilegeRegistry_V1_0_5_Mapping_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Entity**|RedfishCS_char| String pointer to **Entity** property.| No| Yes
|**OperationMap**|RedfishPrivilegeRegistry_V1_0_5_OperationMap_CS| Structure points to **OperationMap** property.| No| No
|**PropertyOverrides**|RedfishPrivilegeRegistry_V1_0_5_Target_PrivilegeMap_Array_CS| Structure array points to one or more than one **RedfishPrivilegeRegistry_V1_0_5_Target_PrivilegeMap_Array_CS** structures for property **PropertyOverrides**.| No| No
|**ResourceURIOverrides**|RedfishPrivilegeRegistry_V1_0_5_Target_PrivilegeMap_Array_CS| Structure array points to one or more than one **RedfishPrivilegeRegistry_V1_0_5_Target_PrivilegeMap_Array_CS** structures for property **ResourceURIOverrides**.| No| No
|**SubordinateOverrides**|RedfishPrivilegeRegistry_V1_0_5_Target_PrivilegeMap_Array_CS| Structure array points to one or more than one **RedfishPrivilegeRegistry_V1_0_5_Target_PrivilegeMap_Array_CS** structures for property **SubordinateOverrides**.| No| No


## OperationMap
    typedef struct _RedfishPrivilegeRegistry_V1_0_5_OperationMap_CS {
        RedfishPrivilegeRegistry_V1_0_5_OperationPrivilege_Array_CS *DELETE;
        RedfishPrivilegeRegistry_V1_0_5_OperationPrivilege_Array_CS *GET;
        RedfishPrivilegeRegistry_V1_0_5_OperationPrivilege_Array_CS *HEAD;
        RedfishPrivilegeRegistry_V1_0_5_OperationPrivilege_Array_CS *PATCH;
        RedfishPrivilegeRegistry_V1_0_5_OperationPrivilege_Array_CS *POST;
        RedfishPrivilegeRegistry_V1_0_5_OperationPrivilege_Array_CS *PUT;
    } RedfishPrivilegeRegistry_V1_0_5_OperationMap_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**DELETE**|RedfishPrivilegeRegistry_V1_0_5_OperationPrivilege_Array_CS| Structure array points to one or more than one **RedfishPrivilegeRegistry_V1_0_5_OperationPrivilege_Array_CS** structures for property **DELETE**.| No| No
|**GET**|RedfishPrivilegeRegistry_V1_0_5_OperationPrivilege_Array_CS| Structure array points to one or more than one **RedfishPrivilegeRegistry_V1_0_5_OperationPrivilege_Array_CS** structures for property **GET**.| No| No
|**HEAD**|RedfishPrivilegeRegistry_V1_0_5_OperationPrivilege_Array_CS| Structure array points to one or more than one **RedfishPrivilegeRegistry_V1_0_5_OperationPrivilege_Array_CS** structures for property **HEAD**.| No| No
|**PATCH**|RedfishPrivilegeRegistry_V1_0_5_OperationPrivilege_Array_CS| Structure array points to one or more than one **RedfishPrivilegeRegistry_V1_0_5_OperationPrivilege_Array_CS** structures for property **PATCH**.| No| No
|**POST**|RedfishPrivilegeRegistry_V1_0_5_OperationPrivilege_Array_CS| Structure array points to one or more than one **RedfishPrivilegeRegistry_V1_0_5_OperationPrivilege_Array_CS** structures for property **POST**.| No| No
|**PUT**|RedfishPrivilegeRegistry_V1_0_5_OperationPrivilege_Array_CS| Structure array points to one or more than one **RedfishPrivilegeRegistry_V1_0_5_OperationPrivilege_Array_CS** structures for property **PUT**.| No| No


## OperationPrivilege
    typedef struct _RedfishPrivilegeRegistry_V1_0_5_OperationPrivilege_CS {
        RedfishCS_char_Array *Privilege;
    } RedfishPrivilegeRegistry_V1_0_5_OperationPrivilege_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Privilege**|RedfishCS_char_Array| Structure array points to one or more than one **RedfishCS_char *** for property **Privilege**.| No| Yes


## Target_PrivilegeMap
    typedef struct _RedfishPrivilegeRegistry_V1_0_5_Target_PrivilegeMap_CS {
        RedfishPrivilegeRegistry_V1_0_5_OperationMap_CS *OperationMap;
        RedfishCS_char_Array *Targets;
    } RedfishPrivilegeRegistry_V1_0_5_Target_PrivilegeMap_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**OperationMap**|RedfishPrivilegeRegistry_V1_0_5_OperationMap_CS| Structure points to **OperationMap** property.| No| No
|**Targets**|RedfishCS_char_Array| Structure array points to one or more than one **RedfishCS_char *** for property **Targets**.| No| Yes


## Oem
    typedef struct _RedfishResource_Oem_CS {
        RedfishCS_Link Prop;
    } RedfishResource_Oem_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## RedfishPrivilegeRegistry_V1_0_5_Target_PrivilegeMap_Array_CS
    typedef struct _RedfishPrivilegeRegistry_V1_0_5_Target_PrivilegeMap_Array_CS  {
        RedfishCS_Link *Next;
        RedfishPrivilegeRegistry_V1_0_5_Target_PrivilegeMap_CS *ArrayValue;
    } RedfishPrivilegeRegistry_V1_0_5_Target_PrivilegeMap_Array_CS;



## RedfishPrivilegeRegistry_V1_0_5_OperationPrivilege_Array_CS
    typedef struct _RedfishPrivilegeRegistry_V1_0_5_OperationPrivilege_Array_CS  {
        RedfishCS_Link *Next;
        RedfishPrivilegeRegistry_V1_0_5_OperationPrivilege_CS *ArrayValue;
    } RedfishPrivilegeRegistry_V1_0_5_OperationPrivilege_Array_CS;



## RedfishCS_char_Array
    typedef struct _RedfishCS_char_Array  {
        RedfishCS_Link *Next;
        RedfishCS_char *ArrayValue;
    } RedfishCS_char_Array;



## PrivilegeRegistry
    typedef struct _RedfishPrivilegeRegistry_V1_0_5_PrivilegeRegistry_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_type;
        RedfishCS_char *Description;
        RedfishCS_char *Id;
        RedfishPrivilegeRegistry_V1_0_5_Mapping_CS *Mappings;
        RedfishCS_char *Name;
        RedfishCS_char *OEMPrivilegesUsed;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_char *PrivilegesUsed;
    } RedfishPrivilegeRegistry_V1_0_5_PrivilegeRegistry_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**Mappings**|RedfishPrivilegeRegistry_V1_0_5_Mapping_CS| Structure points to **Mappings** property.| No| No
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**OEMPrivilegesUsed**|RedfishCS_char| String pointer to **OEMPrivilegesUsed** property.| No| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**PrivilegesUsed**|RedfishCS_char| String pointer to **PrivilegesUsed** property.| No| Yes
## Redfish PrivilegeRegistry V1_0_5 to C Structure Function
    RedfishCS_status
    Json_PrivilegeRegistry_V1_0_5_To_CS (RedfishCS_char *JsonRawText, RedfishPrivilegeRegistry_V1_0_5_PrivilegeRegistry_CS **ReturnedCS);

## C Structure to Redfish PrivilegeRegistry V1_0_5 JSON Function
    RedfishCS_status
    CS_To_PrivilegeRegistry_V1_0_5_JSON (RedfishPrivilegeRegistry_V1_0_5_PrivilegeRegistry_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish PrivilegeRegistry V1_0_5 C Structure Function
    RedfishCS_status
    DestroyPrivilegeRegistry_V1_0_5_CS (RedfishPrivilegeRegistry_V1_0_5_PrivilegeRegistry_CS *CSPtr);

