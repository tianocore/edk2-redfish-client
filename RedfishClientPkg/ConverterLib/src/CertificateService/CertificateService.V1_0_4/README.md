# Definition of CertificateService.V1_0_4 and functions<br><br>

## Actions
    typedef struct _RedfishCertificateService_V1_0_4_Actions_CS {
        RedfishCertificateService_V1_0_4_GenerateCSR_CS *CertificateService_GenerateCSR;
        RedfishCertificateService_V1_0_4_ReplaceCertificate_CS *CertificateService_ReplaceCertificate;
        RedfishCertificateService_V1_0_4_OemActions_CS *Oem;
    } RedfishCertificateService_V1_0_4_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**CertificateService_GenerateCSR**|RedfishCertificateService_V1_0_4_GenerateCSR_CS| Structure points to **#CertificateService.GenerateCSR** property.| No| No
|**CertificateService_ReplaceCertificate**|RedfishCertificateService_V1_0_4_ReplaceCertificate_CS| Structure points to **#CertificateService.ReplaceCertificate** property.| No| No
|**Oem**|RedfishCertificateService_V1_0_4_OemActions_CS| Structure points to **Oem** property.| No| No


## GenerateCSR
    typedef struct _RedfishCertificateService_V1_0_4_GenerateCSR_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishCertificateService_V1_0_4_GenerateCSR_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**target**|RedfishCS_char| String pointer to **target** property.| No| No
|**title**|RedfishCS_char| String pointer to **title** property.| No| No


## GenerateCSRResponse
    typedef struct _RedfishCertificateService_V1_0_4_GenerateCSRResponse_CS {
        RedfishCS_char *CSRString;
        RedfishCS_Link CertificateCollection;
    } RedfishCertificateService_V1_0_4_GenerateCSRResponse_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**CSRString**|RedfishCS_char| String pointer to **CSRString** property.| No| Yes
|**CertificateCollection**|RedfishCS_Link| Structure link list to **CertificateCollection** property.| No| Yes


## OemActions
    typedef struct _RedfishCertificateService_V1_0_4_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishCertificateService_V1_0_4_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## ReplaceCertificate
    typedef struct _RedfishCertificateService_V1_0_4_ReplaceCertificate_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishCertificateService_V1_0_4_ReplaceCertificate_CS;

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


## CertificateService
    typedef struct _RedfishCertificateService_V1_0_4_CertificateService_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishCertificateService_V1_0_4_Actions_CS *Actions;
        RedfishCS_Link CertificateLocations;
        RedfishCS_char *Description;
        RedfishCS_char *Id;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
    } RedfishCertificateService_V1_0_4_CertificateService_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishCertificateService_V1_0_4_Actions_CS| Structure points to **Actions** property.| No| No
|**CertificateLocations**|RedfishCS_Link| Structure link list to **CertificateLocations** property.| No| Yes
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
## Redfish CertificateService V1_0_4 to C Structure Function
    RedfishCS_status
    Json_CertificateService_V1_0_4_To_CS (RedfishCS_char *JsonRawText, RedfishCertificateService_V1_0_4_CertificateService_CS **ReturnedCS);

## C Structure to Redfish CertificateService V1_0_4 JSON Function
    RedfishCS_status
    CS_To_CertificateService_V1_0_4_JSON (RedfishCertificateService_V1_0_4_CertificateService_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish CertificateService V1_0_4 C Structure Function
    RedfishCS_status
    DestroyCertificateService_V1_0_4_CS (RedfishCertificateService_V1_0_4_CertificateService_CS *CSPtr);

