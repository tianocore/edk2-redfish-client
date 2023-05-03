# Definition of CertificateLocations.V1_0_2 and functions<br><br>

## Actions
    typedef struct _RedfishCertificateLocations_V1_0_2_Actions_CS {
        RedfishCertificateLocations_V1_0_2_OemActions_CS *Oem;
    } RedfishCertificateLocations_V1_0_2_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishCertificateLocations_V1_0_2_OemActions_CS| Structure points to **Oem** property.| No| No


## Links
    typedef struct _RedfishCertificateLocations_V1_0_2_Links_CS {
        RedfishCS_Link Certificates;
        RedfishCS_int64 *Certificatesodata_count;
        RedfishResource_Oem_CS *Oem;
    } RedfishCertificateLocations_V1_0_2_Links_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Certificates**|RedfishCS_Link| Structure link list to **Certificates** property.| No| Yes
|**Certificatesodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **Certificates@odata.count** property.| No| No
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No


## OemActions
    typedef struct _RedfishCertificateLocations_V1_0_2_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishCertificateLocations_V1_0_2_OemActions_CS;

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


## CertificateLocations
    typedef struct _RedfishCertificateLocations_V1_0_2_CertificateLocations_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishCertificateLocations_V1_0_2_Actions_CS *Actions;
        RedfishCS_char *Description;
        RedfishCS_char *Id;
        RedfishCertificateLocations_V1_0_2_Links_CS *Links;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
    } RedfishCertificateLocations_V1_0_2_CertificateLocations_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishCertificateLocations_V1_0_2_Actions_CS| Structure points to **Actions** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**Links**|RedfishCertificateLocations_V1_0_2_Links_CS| Structure points to **Links** property.| No| No
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
## Redfish CertificateLocations V1_0_2 to C Structure Function
    RedfishCS_status
    Json_CertificateLocations_V1_0_2_To_CS (RedfishCS_char *JsonRawText, RedfishCertificateLocations_V1_0_2_CertificateLocations_CS **ReturnedCS);

## C Structure to Redfish CertificateLocations V1_0_2 JSON Function
    RedfishCS_status
    CS_To_CertificateLocations_V1_0_2_JSON (RedfishCertificateLocations_V1_0_2_CertificateLocations_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish CertificateLocations V1_0_2 C Structure Function
    RedfishCS_status
    DestroyCertificateLocations_V1_0_2_CS (RedfishCertificateLocations_V1_0_2_CertificateLocations_CS *CSPtr);

