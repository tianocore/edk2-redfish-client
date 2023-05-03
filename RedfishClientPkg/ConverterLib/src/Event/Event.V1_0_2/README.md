# Definition of Event.V1_0_2 and functions<br><br>

## EventRecord
    typedef struct _RedfishEvent_V1_0_2_EventRecord_CS {
        RedfishCS_char *Context;
        RedfishCS_char *EventId;
        RedfishCS_char *EventTimestamp;
        RedfishCS_char *EventType;
        RedfishCS_char *MemberId;
        RedfishCS_char *Message;
        RedfishCS_char_Array *MessageArgs;
        RedfishCS_char *MessageId;
        RedfishResource_Oem_CS *Oem;
        Redfishodata_V4_0_0_idRef_CS *OriginOfCondition;
        RedfishCS_char *Severity;
    } RedfishEvent_V1_0_2_EventRecord_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Context**|RedfishCS_char| String pointer to **Context** property.| No| Yes
|**EventId**|RedfishCS_char| String pointer to **EventId** property.| No| Yes
|**EventTimestamp**|RedfishCS_char| String pointer to **EventTimestamp** property.| No| Yes
|**EventType**|RedfishCS_char| String pointer to **EventType** property.| No| Yes
|**MemberId**|RedfishCS_char| String pointer to **MemberId** property.| No| No
|**Message**|RedfishCS_char| String pointer to **Message** property.| No| Yes
|**MessageArgs**|RedfishCS_char_Array| Structure array points to one or more than one **RedfishCS_char *** for property **MessageArgs**.| No| Yes
|**MessageId**|RedfishCS_char| String pointer to **MessageId** property.| No| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**OriginOfCondition**|Redfishodata_V4_0_0_idRef_CS| Structure points to **OriginOfCondition** property.| No| Yes
|**Severity**|RedfishCS_char| String pointer to **Severity** property.| No| Yes


## Oem
    typedef struct _RedfishResource_Oem_CS {
        RedfishCS_Link Prop;
    } RedfishResource_Oem_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## idRef
    typedef struct _Redfishodata_V4_0_0_idRef_CS {
        RedfishCS_char *odata_id;
    } Redfishodata_V4_0_0_idRef_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| No| No


## RedfishCS_char_Array
    typedef struct _RedfishCS_char_Array  {
        RedfishCS_Link *Next;
        RedfishCS_char *ArrayValue;
    } RedfishCS_char_Array;



## Event
    typedef struct _RedfishEvent_V1_0_2_Event_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishCS_char *Description;
        RedfishEvent_V1_0_2_EventRecord_CS *Events;
        RedfishCS_int64 *Eventsodata_count;
        RedfishCS_char *Eventsodata_navigationLink;
        RedfishCS_char *Id;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
    } RedfishEvent_V1_0_2_Event_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| No| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| No
|**Events**|RedfishEvent_V1_0_2_EventRecord_CS| Structure points to **Events** property.| Yes| No
|**Eventsodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **Events@odata.count** property.| No| No
|**Eventsodata_navigationLink**|RedfishCS_char| String pointer to **Events@odata.navigationLink** property.| No| No
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| No
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| No
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
## Redfish Event V1_0_2 to C Structure Function
    RedfishCS_status
    Json_Event_V1_0_2_To_CS (RedfishCS_char *JsonRawText, RedfishEvent_V1_0_2_Event_CS **ReturnedCS);

## C Structure to Redfish Event V1_0_2 JSON Function
    RedfishCS_status
    CS_To_Event_V1_0_2_JSON (RedfishEvent_V1_0_2_Event_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish Event V1_0_2 C Structure Function
    RedfishCS_status
    DestroyEvent_V1_0_2_CS (RedfishEvent_V1_0_2_Event_CS *CSPtr);

