# Definition of EventDestination.V1_0_2 and functions<br><br>

## HttpHeaderProperty
    typedef struct _RedfishEventDestination_V1_0_2_HttpHeaderProperty_CS {
        RedfishCS_Link Prop;
    } RedfishEventDestination_V1_0_2_HttpHeaderProperty_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## Oem
    typedef struct _RedfishResource_Oem_CS {
        RedfishCS_Link Prop;
    } RedfishResource_Oem_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## EventDestination
    typedef struct _RedfishEventDestination_V1_0_2_EventDestination_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishCS_char *Context;
        RedfishCS_char *Description;
        RedfishCS_char *Destination;
        RedfishCS_char *EventTypes;
        RedfishEventDestination_V1_0_2_HttpHeaderProperty_CS *HttpHeaders;
        RedfishCS_char *Id;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_char *Protocol;
    } RedfishEventDestination_V1_0_2_EventDestination_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| No| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| No| No
|**Context**|RedfishCS_char| String pointer to **Context** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| No
|**Destination**|RedfishCS_char| String pointer to **Destination** property.| No| Yes
|**EventTypes**|RedfishCS_char| String pointer to **EventTypes** property.| No| Yes
|**HttpHeaders**|RedfishEventDestination_V1_0_2_HttpHeaderProperty_CS| Structure points to **HttpHeaders** property.| No| No
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| No
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| No
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**Protocol**|RedfishCS_char| String pointer to **Protocol** property.| No| Yes
## Redfish EventDestination V1_0_2 to C Structure Function
    RedfishCS_status
    Json_EventDestination_V1_0_2_To_CS (RedfishCS_char *JsonRawText, RedfishEventDestination_V1_0_2_EventDestination_CS **ReturnedCS);

## C Structure to Redfish EventDestination V1_0_2 JSON Function
    RedfishCS_status
    CS_To_EventDestination_V1_0_2_JSON (RedfishEventDestination_V1_0_2_EventDestination_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish EventDestination V1_0_2 C Structure Function
    RedfishCS_status
    DestroyEventDestination_V1_0_2_CS (RedfishEventDestination_V1_0_2_EventDestination_CS *CSPtr);

