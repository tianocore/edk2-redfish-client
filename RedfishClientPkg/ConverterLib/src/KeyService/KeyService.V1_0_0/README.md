# Definition of KeyService.V1_0_0 and functions<br><br>

## Actions
    typedef struct _RedfishKeyService_V1_0_0_Actions_CS {
        RedfishKeyService_V1_0_0_OemActions_CS *Oem;
    } RedfishKeyService_V1_0_0_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishKeyService_V1_0_0_OemActions_CS| Structure points to **Oem** property.| No| No


## OemActions
    typedef struct _RedfishKeyService_V1_0_0_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishKeyService_V1_0_0_OemActions_CS;

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


## KeyService
    typedef struct _RedfishKeyService_V1_0_0_KeyService_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishKeyService_V1_0_0_Actions_CS *Actions;
        RedfishCS_char *Description;
        RedfishCS_char *Id;
        RedfishCS_Link NVMeoFKeyPolicies;
        RedfishCS_Link NVMeoFSecrets;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
    } RedfishKeyService_V1_0_0_KeyService_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishKeyService_V1_0_0_Actions_CS| Structure points to **Actions** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**NVMeoFKeyPolicies**|RedfishCS_Link| Structure link list to **NVMeoFKeyPolicies** property.| No| Yes
|**NVMeoFSecrets**|RedfishCS_Link| Structure link list to **NVMeoFSecrets** property.| No| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
## Redfish KeyService V1_0_0 to C Structure Function
    RedfishCS_status
    Json_KeyService_V1_0_0_To_CS (RedfishCS_char *JsonRawText, RedfishKeyService_V1_0_0_KeyService_CS **ReturnedCS);

## C Structure to Redfish KeyService V1_0_0 JSON Function
    RedfishCS_status
    CS_To_KeyService_V1_0_0_JSON (RedfishKeyService_V1_0_0_KeyService_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish KeyService V1_0_0 C Structure Function
    RedfishCS_status
    DestroyKeyService_V1_0_0_CS (RedfishKeyService_V1_0_0_KeyService_CS *CSPtr);

