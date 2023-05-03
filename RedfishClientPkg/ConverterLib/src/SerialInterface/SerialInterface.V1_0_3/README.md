# Definition of SerialInterface.V1_0_3 and functions<br><br>

## Oem
    typedef struct _RedfishResource_Oem_CS {
        RedfishCS_Link Prop;
    } RedfishResource_Oem_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## SerialInterface
    typedef struct _RedfishSerialInterface_V1_0_3_SerialInterface_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishCS_char *BitRate;
        RedfishCS_char *ConnectorType;
        RedfishCS_char *DataBits;
        RedfishCS_char *Description;
        RedfishCS_char *FlowControl;
        RedfishCS_char *Id;
        RedfishCS_bool *InterfaceEnabled;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_char *Parity;
        RedfishCS_char *PinOut;
        RedfishCS_char *SignalType;
        RedfishCS_char *StopBits;
    } RedfishSerialInterface_V1_0_3_SerialInterface_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| No| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| No| No
|**BitRate**|RedfishCS_char| String pointer to **BitRate** property.| No| No
|**ConnectorType**|RedfishCS_char| String pointer to **ConnectorType** property.| No| Yes
|**DataBits**|RedfishCS_char| String pointer to **DataBits** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**FlowControl**|RedfishCS_char| String pointer to **FlowControl** property.| No| No
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**InterfaceEnabled**|RedfishCS_bool| Boolean pointer to **InterfaceEnabled** property.| No| No
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**Parity**|RedfishCS_char| String pointer to **Parity** property.| No| No
|**PinOut**|RedfishCS_char| String pointer to **PinOut** property.| No| Yes
|**SignalType**|RedfishCS_char| String pointer to **SignalType** property.| No| Yes
|**StopBits**|RedfishCS_char| String pointer to **StopBits** property.| No| No
## Redfish SerialInterface V1_0_3 to C Structure Function
    RedfishCS_status
    Json_SerialInterface_V1_0_3_To_CS (RedfishCS_char *JsonRawText, RedfishSerialInterface_V1_0_3_SerialInterface_CS **ReturnedCS);

## C Structure to Redfish SerialInterface V1_0_3 JSON Function
    RedfishCS_status
    CS_To_SerialInterface_V1_0_3_JSON (RedfishSerialInterface_V1_0_3_SerialInterface_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish SerialInterface V1_0_3 C Structure Function
    RedfishCS_status
    DestroySerialInterface_V1_0_3_CS (RedfishSerialInterface_V1_0_3_SerialInterface_CS *CSPtr);

