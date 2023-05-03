# Definition of EndpointGroup.V1_1_2 and functions<br><br>

## Actions
    typedef struct _RedfishEndpointGroup_V1_1_2_Actions_CS {
        RedfishEndpointGroup_V1_1_2_OemActions_CS *Oem;
    } RedfishEndpointGroup_V1_1_2_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishEndpointGroup_V1_1_2_OemActions_CS| Structure points to **Oem** property.| No| No


## Links
    typedef struct _RedfishEndpointGroup_V1_1_2_Links_CS {
        RedfishResource_Oem_CS *Oem;
    } RedfishEndpointGroup_V1_1_2_Links_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No


## OemActions
    typedef struct _RedfishEndpointGroup_V1_1_2_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishEndpointGroup_V1_1_2_OemActions_CS;

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


## EndpointGroup
    typedef struct _RedfishEndpointGroup_V1_1_2_EndpointGroup_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishCS_char *AccessState;
        RedfishEndpointGroup_V1_1_2_Actions_CS *Actions;
        RedfishCS_char *Description;
        RedfishCS_Link Endpoints;
        RedfishCS_int64 *Endpointsodata_count;
        RedfishCS_char *GroupType;
        RedfishCS_char *Id;
        RedfishCS_Link Identifier;
        RedfishEndpointGroup_V1_1_2_Links_CS *Links;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_bool *Preferred;
        RedfishCS_int64 *TargetEndpointGroupIdentifier;
    } RedfishEndpointGroup_V1_1_2_EndpointGroup_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**AccessState**|RedfishCS_char| String pointer to **AccessState** property.| No| No
|**Actions**|RedfishEndpointGroup_V1_1_2_Actions_CS| Structure points to **Actions** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**Endpoints**|RedfishCS_Link| Structure link list to **Endpoints** property.| No| No
|**Endpointsodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **Endpoints@odata.count** property.| No| No
|**GroupType**|RedfishCS_char| String pointer to **GroupType** property.| No| No
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**Identifier**|RedfishCS_Link| Structure link list to **Identifier** property.| No| No
|**Links**|RedfishEndpointGroup_V1_1_2_Links_CS| Structure points to **Links** property.| No| No
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**Preferred**|RedfishCS_bool| Boolean pointer to **Preferred** property.| No| No
|**TargetEndpointGroupIdentifier**|RedfishCS_int64| 64-bit long long interger pointer to **TargetEndpointGroupIdentifier** property.| No| No
## Redfish EndpointGroup V1_1_2 to C Structure Function
    RedfishCS_status
    Json_EndpointGroup_V1_1_2_To_CS (RedfishCS_char *JsonRawText, RedfishEndpointGroup_V1_1_2_EndpointGroup_CS **ReturnedCS);

## C Structure to Redfish EndpointGroup V1_1_2 JSON Function
    RedfishCS_status
    CS_To_EndpointGroup_V1_1_2_JSON (RedfishEndpointGroup_V1_1_2_EndpointGroup_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish EndpointGroup V1_1_2 C Structure Function
    RedfishCS_status
    DestroyEndpointGroup_V1_1_2_CS (RedfishEndpointGroup_V1_1_2_EndpointGroup_CS *CSPtr);

