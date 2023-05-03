# Definition of EventDestination.V1_0_8 and functions<br><br>

## Actions
    typedef struct _RedfishEventDestination_V1_0_8_Actions_CS {
        RedfishEventDestination_V1_0_8_ResumeSubscription_CS *EventDestination_ResumeSubscription;
    } RedfishEventDestination_V1_0_8_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**EventDestination_ResumeSubscription**|RedfishEventDestination_V1_0_8_ResumeSubscription_CS| Structure points to **#EventDestination.ResumeSubscription** property.| No| No


## HttpHeaderProperty
    typedef struct _RedfishEventDestination_V1_0_8_HttpHeaderProperty_CS {
        RedfishCS_Link Prop;
    } RedfishEventDestination_V1_0_8_HttpHeaderProperty_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## ResumeSubscription
    typedef struct _RedfishEventDestination_V1_0_8_ResumeSubscription_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishEventDestination_V1_0_8_ResumeSubscription_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**target**|RedfishCS_char| String pointer to **target** property.| No| No
|**title**|RedfishCS_char| String pointer to **title** property.| No| No


## Oem
    typedef struct _RedfishResource_Oem_CS {
        RedfishCS_Link Prop;
    } RedfishResource_Oem_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## EventDestination
    typedef struct _RedfishEventDestination_V1_0_8_EventDestination_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishCS_char *Context;
        RedfishCS_char *Description;
        RedfishCS_char *Destination;
        RedfishCS_char *EventTypes;
        RedfishEventDestination_V1_0_8_HttpHeaderProperty_CS *HttpHeaders;
        RedfishCS_char *Id;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_char *Protocol;
    } RedfishEventDestination_V1_0_8_EventDestination_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Context**|RedfishCS_char| String pointer to **Context** property.| Yes| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**Destination**|RedfishCS_char| String pointer to **Destination** property.| No| Yes
|**EventTypes**|RedfishCS_char| String pointer to **EventTypes** property.| No| Yes
|**HttpHeaders**|RedfishEventDestination_V1_0_8_HttpHeaderProperty_CS| Structure points to **HttpHeaders** property.| No| No
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**Protocol**|RedfishCS_char| String pointer to **Protocol** property.| No| Yes
## Redfish EventDestination V1_0_8 to C Structure Function
    RedfishCS_status
    Json_EventDestination_V1_0_8_To_CS (RedfishCS_char *JsonRawText, RedfishEventDestination_V1_0_8_EventDestination_CS **ReturnedCS);

## C Structure to Redfish EventDestination V1_0_8 JSON Function
    RedfishCS_status
    CS_To_EventDestination_V1_0_8_JSON (RedfishEventDestination_V1_0_8_EventDestination_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish EventDestination V1_0_8 C Structure Function
    RedfishCS_status
    DestroyEventDestination_V1_0_8_CS (RedfishEventDestination_V1_0_8_EventDestination_CS *CSPtr);

