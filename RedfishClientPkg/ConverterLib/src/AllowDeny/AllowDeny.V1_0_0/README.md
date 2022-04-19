# Definition of AllowDeny.V1_0_0 and functions<br><br>

## Actions
    typedef struct _RedfishAllowDeny_V1_0_0_Actions_CS {
        RedfishAllowDeny_V1_0_0_OemActions_CS *Oem;
    } RedfishAllowDeny_V1_0_0_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishAllowDeny_V1_0_0_OemActions_CS| Structure points to **Oem** property.| No| No


## OemActions
    typedef struct _RedfishAllowDeny_V1_0_0_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishAllowDeny_V1_0_0_OemActions_CS;

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


## AllowDeny
    typedef struct _RedfishAllowDeny_V1_0_0_AllowDeny_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishAllowDeny_V1_0_0_Actions_CS *Actions;
        RedfishCS_char *AllowType;
        RedfishCS_char *Description;
        RedfishCS_int64 *DestinationPortLower;
        RedfishCS_int64 *DestinationPortUpper;
        RedfishCS_char *Direction;
        RedfishCS_int64 *IANAProtocolNumber;
        RedfishCS_char *IPAddressLower;
        RedfishCS_char *IPAddressType;
        RedfishCS_char *IPAddressUpper;
        RedfishCS_char *Id;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_int64 *SourcePortLower;
        RedfishCS_int64 *SourcePortUpper;
        RedfishCS_bool *StatefulSession;
    } RedfishAllowDeny_V1_0_0_AllowDeny_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishAllowDeny_V1_0_0_Actions_CS| Structure points to **Actions** property.| No| No
|**AllowType**|RedfishCS_char| String pointer to **AllowType** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**DestinationPortLower**|RedfishCS_int64| 64-bit long long interger pointer to **DestinationPortLower** property.| No| No
|**DestinationPortUpper**|RedfishCS_int64| 64-bit long long interger pointer to **DestinationPortUpper** property.| No| No
|**Direction**|RedfishCS_char| String pointer to **Direction** property.| No| No
|**IANAProtocolNumber**|RedfishCS_int64| 64-bit long long interger pointer to **IANAProtocolNumber** property.| No| No
|**IPAddressLower**|RedfishCS_char| String pointer to **IPAddressLower** property.| No| No
|**IPAddressType**|RedfishCS_char| String pointer to **IPAddressType** property.| No| No
|**IPAddressUpper**|RedfishCS_char| String pointer to **IPAddressUpper** property.| No| No
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**SourcePortLower**|RedfishCS_int64| 64-bit long long interger pointer to **SourcePortLower** property.| No| No
|**SourcePortUpper**|RedfishCS_int64| 64-bit long long interger pointer to **SourcePortUpper** property.| No| No
|**StatefulSession**|RedfishCS_bool| Boolean pointer to **StatefulSession** property.| No| No
## Redfish AllowDeny V1_0_0 to C Structure Function
    RedfishCS_status
    Json_AllowDeny_V1_0_0_To_CS (RedfishCS_char *JsonRawText, RedfishAllowDeny_V1_0_0_AllowDeny_CS **ReturnedCS);

## C Structure to Redfish AllowDeny V1_0_0 JSON Function
    RedfishCS_status
    CS_To_AllowDeny_V1_0_0_JSON (RedfishAllowDeny_V1_0_0_AllowDeny_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish AllowDeny V1_0_0 C Structure Function
    RedfishCS_status
    DestroyAllowDeny_V1_0_0_CS (RedfishAllowDeny_V1_0_0_AllowDeny_CS *CSPtr);

