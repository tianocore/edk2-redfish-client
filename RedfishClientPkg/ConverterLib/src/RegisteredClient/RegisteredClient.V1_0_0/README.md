# Definition of RegisteredClient.V1_0_0 and functions<br><br>

## Actions
    typedef struct _RedfishRegisteredClient_V1_0_0_Actions_CS {
        RedfishRegisteredClient_V1_0_0_OemActions_CS *Oem;
    } RedfishRegisteredClient_V1_0_0_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishRegisteredClient_V1_0_0_OemActions_CS| Structure points to **Oem** property.| No| No


## ManagedResource
    typedef struct _RedfishRegisteredClient_V1_0_0_ManagedResource_CS {
        RedfishCS_bool *IncludesSubordinates;
        RedfishCS_char *ManagedResourceURI;
        RedfishCS_bool *PreferExclusive;
    } RedfishRegisteredClient_V1_0_0_ManagedResource_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**IncludesSubordinates**|RedfishCS_bool| Boolean pointer to **IncludesSubordinates** property.| No| No
|**ManagedResourceURI**|RedfishCS_char| String pointer to **ManagedResourceURI** property.| No| No
|**PreferExclusive**|RedfishCS_bool| Boolean pointer to **PreferExclusive** property.| No| No


## OemActions
    typedef struct _RedfishRegisteredClient_V1_0_0_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishRegisteredClient_V1_0_0_OemActions_CS;

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


## RegisteredClient
    typedef struct _RedfishRegisteredClient_V1_0_0_RegisteredClient_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishRegisteredClient_V1_0_0_Actions_CS *Actions;
        RedfishCS_char *ClientType;
        RedfishCS_char *ClientURI;
        RedfishCS_char *CreatedDate;
        RedfishCS_char *Description;
        RedfishCS_char *ExpirationDate;
        RedfishCS_char *Id;
        RedfishRegisteredClient_V1_0_0_ManagedResource_CS *ManagedResources;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
    } RedfishRegisteredClient_V1_0_0_RegisteredClient_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishRegisteredClient_V1_0_0_Actions_CS| Structure points to **Actions** property.| No| No
|**ClientType**|RedfishCS_char| String pointer to **ClientType** property.| Yes| No
|**ClientURI**|RedfishCS_char| String pointer to **ClientURI** property.| No| No
|**CreatedDate**|RedfishCS_char| String pointer to **CreatedDate** property.| No| Yes
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**ExpirationDate**|RedfishCS_char| String pointer to **ExpirationDate** property.| No| No
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**ManagedResources**|RedfishRegisteredClient_V1_0_0_ManagedResource_CS| Structure points to **ManagedResources** property.| No| No
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
## Redfish RegisteredClient V1_0_0 to C Structure Function
    RedfishCS_status
    Json_RegisteredClient_V1_0_0_To_CS (RedfishCS_char *JsonRawText, RedfishRegisteredClient_V1_0_0_RegisteredClient_CS **ReturnedCS);

## C Structure to Redfish RegisteredClient V1_0_0 JSON Function
    RedfishCS_status
    CS_To_RegisteredClient_V1_0_0_JSON (RedfishRegisteredClient_V1_0_0_RegisteredClient_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish RegisteredClient V1_0_0 C Structure Function
    RedfishCS_status
    DestroyRegisteredClient_V1_0_0_CS (RedfishRegisteredClient_V1_0_0_RegisteredClient_CS *CSPtr);

