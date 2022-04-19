# Definition of CompositionReservation.V1_0_0 and functions<br><br>

## Actions
    typedef struct _RedfishCompositionReservation_V1_0_0_Actions_CS {
        RedfishCompositionReservation_V1_0_0_OemActions_CS *Oem;
    } RedfishCompositionReservation_V1_0_0_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishCompositionReservation_V1_0_0_OemActions_CS| Structure points to **Oem** property.| No| No


## OemActions
    typedef struct _RedfishCompositionReservation_V1_0_0_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishCompositionReservation_V1_0_0_OemActions_CS;

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


## CompositionReservation
    typedef struct _RedfishCompositionReservation_V1_0_0_CompositionReservation_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishCompositionReservation_V1_0_0_Actions_CS *Actions;
        RedfishCS_char *Client;
        RedfishCS_char *Description;
        RedfishCS_char *Id;
        RedfishCS_Link Manifest;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_char *ReservationTime;
        RedfishCS_Link ReservedResourceBlocks;
        RedfishCS_int64 *ReservedResourceBlocksodata_count;
    } RedfishCompositionReservation_V1_0_0_CompositionReservation_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishCompositionReservation_V1_0_0_Actions_CS| Structure points to **Actions** property.| No| No
|**Client**|RedfishCS_char| String pointer to **Client** property.| No| Yes
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**Manifest**|RedfishCS_Link| Structure link list to **Manifest** property.| No| No
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**ReservationTime**|RedfishCS_char| String pointer to **ReservationTime** property.| No| Yes
|**ReservedResourceBlocks**|RedfishCS_Link| Structure link list to **ReservedResourceBlocks** property.| No| Yes
|**ReservedResourceBlocksodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **ReservedResourceBlocks@odata.count** property.| No| No
## Redfish CompositionReservation V1_0_0 to C Structure Function
    RedfishCS_status
    Json_CompositionReservation_V1_0_0_To_CS (RedfishCS_char *JsonRawText, RedfishCompositionReservation_V1_0_0_CompositionReservation_CS **ReturnedCS);

## C Structure to Redfish CompositionReservation V1_0_0 JSON Function
    RedfishCS_status
    CS_To_CompositionReservation_V1_0_0_JSON (RedfishCompositionReservation_V1_0_0_CompositionReservation_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish CompositionReservation V1_0_0 C Structure Function
    RedfishCS_status
    DestroyCompositionReservation_V1_0_0_CS (RedfishCompositionReservation_V1_0_0_CompositionReservation_CS *CSPtr);

