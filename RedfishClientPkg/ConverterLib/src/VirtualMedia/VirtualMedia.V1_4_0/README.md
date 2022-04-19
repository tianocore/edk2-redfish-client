# Definition of VirtualMedia.V1_4_0 and functions<br><br>

## Condition
    typedef struct _RedfishResource_Condition_CS {
        RedfishCS_Link LogEntry;
        RedfishCS_char *Message;
        RedfishCS_char_Array *MessageArgs;
        RedfishCS_char *MessageId;
        Redfishodatav4_idRef_CS *OriginOfCondition;
        RedfishCS_char *Resolution;
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
|**Resolution**|RedfishCS_char| String pointer to **Resolution** property.| No| Yes
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


## Actions
    typedef struct _RedfishVirtualMedia_V1_4_0_Actions_CS {
        RedfishVirtualMedia_V1_4_0_EjectMedia_CS *VirtualMedia_EjectMedia;
        RedfishVirtualMedia_V1_4_0_InsertMedia_CS *VirtualMedia_InsertMedia;
        RedfishVirtualMedia_V1_4_0_OemActions_CS *Oem;
    } RedfishVirtualMedia_V1_4_0_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**VirtualMedia_EjectMedia**|RedfishVirtualMedia_V1_4_0_EjectMedia_CS| Structure points to **#VirtualMedia.EjectMedia** property.| No| No
|**VirtualMedia_InsertMedia**|RedfishVirtualMedia_V1_4_0_InsertMedia_CS| Structure points to **#VirtualMedia.InsertMedia** property.| No| No
|**Oem**|RedfishVirtualMedia_V1_4_0_OemActions_CS| Structure points to **Oem** property.| No| No


## EjectMedia
    typedef struct _RedfishVirtualMedia_V1_4_0_EjectMedia_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishVirtualMedia_V1_4_0_EjectMedia_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**target**|RedfishCS_char| String pointer to **target** property.| No| No
|**title**|RedfishCS_char| String pointer to **title** property.| No| No


## InsertMedia
    typedef struct _RedfishVirtualMedia_V1_4_0_InsertMedia_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishVirtualMedia_V1_4_0_InsertMedia_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**target**|RedfishCS_char| String pointer to **target** property.| No| No
|**title**|RedfishCS_char| String pointer to **title** property.| No| No


## OemActions
    typedef struct _RedfishVirtualMedia_V1_4_0_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishVirtualMedia_V1_4_0_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


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



## VirtualMedia
    typedef struct _RedfishVirtualMedia_V1_4_0_VirtualMedia_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishVirtualMedia_V1_4_0_Actions_CS *Actions;
        RedfishCS_Link Certificates;
        RedfishCS_char *ConnectedVia;
        RedfishCS_char *Description;
        RedfishCS_char *Id;
        RedfishCS_char *Image;
        RedfishCS_char *ImageName;
        RedfishCS_bool *Inserted;
        RedfishCS_char *MediaTypes;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_char *Password;
        RedfishResource_Status_CS *Status;
        RedfishCS_char *TransferMethod;
        RedfishCS_char *TransferProtocolType;
        RedfishCS_char *UserName;
        RedfishCS_bool *VerifyCertificate;
        RedfishCS_bool *WriteProtected;
    } RedfishVirtualMedia_V1_4_0_VirtualMedia_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishVirtualMedia_V1_4_0_Actions_CS| Structure points to **Actions** property.| No| No
|**Certificates**|RedfishCS_Link| Structure link list to **Certificates** property.| No| Yes
|**ConnectedVia**|RedfishCS_char| String pointer to **ConnectedVia** property.| No| Yes
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**Image**|RedfishCS_char| String pointer to **Image** property.| No| No
|**ImageName**|RedfishCS_char| String pointer to **ImageName** property.| No| Yes
|**Inserted**|RedfishCS_bool| Boolean pointer to **Inserted** property.| No| No
|**MediaTypes**|RedfishCS_char| String pointer to **MediaTypes** property.| No| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**Password**|RedfishCS_char| String pointer to **Password** property.| No| No
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
|**TransferMethod**|RedfishCS_char| String pointer to **TransferMethod** property.| No| No
|**TransferProtocolType**|RedfishCS_char| String pointer to **TransferProtocolType** property.| No| No
|**UserName**|RedfishCS_char| String pointer to **UserName** property.| No| No
|**VerifyCertificate**|RedfishCS_bool| Boolean pointer to **VerifyCertificate** property.| No| No
|**WriteProtected**|RedfishCS_bool| Boolean pointer to **WriteProtected** property.| No| No
## Redfish VirtualMedia V1_4_0 to C Structure Function
    RedfishCS_status
    Json_VirtualMedia_V1_4_0_To_CS (RedfishCS_char *JsonRawText, RedfishVirtualMedia_V1_4_0_VirtualMedia_CS **ReturnedCS);

## C Structure to Redfish VirtualMedia V1_4_0 JSON Function
    RedfishCS_status
    CS_To_VirtualMedia_V1_4_0_JSON (RedfishVirtualMedia_V1_4_0_VirtualMedia_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish VirtualMedia V1_4_0 C Structure Function
    RedfishCS_status
    DestroyVirtualMedia_V1_4_0_CS (RedfishVirtualMedia_V1_4_0_VirtualMedia_CS *CSPtr);

