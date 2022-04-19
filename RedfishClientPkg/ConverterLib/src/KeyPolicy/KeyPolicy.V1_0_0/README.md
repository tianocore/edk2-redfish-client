# Definition of KeyPolicy.V1_0_0 and functions<br><br>

## Actions
    typedef struct _RedfishKeyPolicy_V1_0_0_Actions_CS {
        RedfishKeyPolicy_V1_0_0_OemActions_CS *Oem;
    } RedfishKeyPolicy_V1_0_0_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishKeyPolicy_V1_0_0_OemActions_CS| Structure points to **Oem** property.| No| No


## NVMeoF
    typedef struct _RedfishKeyPolicy_V1_0_0_NVMeoF_CS {
        RedfishCS_char_Array *CipherSuiteAllowList;
        RedfishCS_char_Array *DHGroupAllowList;
        RedfishCS_char_Array *OEMSecurityProtocolAllowList;
        RedfishCS_char_Array *SecureHashAllowList;
        RedfishCS_char_Array *SecurityProtocolAllowList;
        RedfishCS_char_Array *SecurityTransportAllowList;
    } RedfishKeyPolicy_V1_0_0_NVMeoF_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**CipherSuiteAllowList**|RedfishCS_char_Array| Structure array points to one or more than one **RedfishCS_char *** for property **CipherSuiteAllowList**.| No| No
|**DHGroupAllowList**|RedfishCS_char_Array| Structure array points to one or more than one **RedfishCS_char *** for property **DHGroupAllowList**.| No| No
|**OEMSecurityProtocolAllowList**|RedfishCS_char_Array| Structure array points to one or more than one **RedfishCS_char *** for property **OEMSecurityProtocolAllowList**.| No| No
|**SecureHashAllowList**|RedfishCS_char_Array| Structure array points to one or more than one **RedfishCS_char *** for property **SecureHashAllowList**.| No| No
|**SecurityProtocolAllowList**|RedfishCS_char_Array| Structure array points to one or more than one **RedfishCS_char *** for property **SecurityProtocolAllowList**.| No| No
|**SecurityTransportAllowList**|RedfishCS_char_Array| Structure array points to one or more than one **RedfishCS_char *** for property **SecurityTransportAllowList**.| No| No


## OemActions
    typedef struct _RedfishKeyPolicy_V1_0_0_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishKeyPolicy_V1_0_0_OemActions_CS;

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


## RedfishCS_char_Array
    typedef struct _RedfishCS_char_Array  {
        RedfishCS_Link *Next;
        RedfishCS_char *ArrayValue;
    } RedfishCS_char_Array;



## KeyPolicy
    typedef struct _RedfishKeyPolicy_V1_0_0_KeyPolicy_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishKeyPolicy_V1_0_0_Actions_CS *Actions;
        RedfishCS_char *Description;
        RedfishCS_char *Id;
        RedfishCS_bool *IsDefault;
        RedfishCS_char *KeyPolicyType;
        RedfishKeyPolicy_V1_0_0_NVMeoF_CS *NVMeoF;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
    } RedfishKeyPolicy_V1_0_0_KeyPolicy_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishKeyPolicy_V1_0_0_Actions_CS| Structure points to **Actions** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**IsDefault**|RedfishCS_bool| Boolean pointer to **IsDefault** property.| No| No
|**KeyPolicyType**|RedfishCS_char| String pointer to **KeyPolicyType** property.| No| Yes
|**NVMeoF**|RedfishKeyPolicy_V1_0_0_NVMeoF_CS| Structure points to **NVMeoF** property.| No| No
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
## Redfish KeyPolicy V1_0_0 to C Structure Function
    RedfishCS_status
    Json_KeyPolicy_V1_0_0_To_CS (RedfishCS_char *JsonRawText, RedfishKeyPolicy_V1_0_0_KeyPolicy_CS **ReturnedCS);

## C Structure to Redfish KeyPolicy V1_0_0 JSON Function
    RedfishCS_status
    CS_To_KeyPolicy_V1_0_0_JSON (RedfishKeyPolicy_V1_0_0_KeyPolicy_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish KeyPolicy V1_0_0 C Structure Function
    RedfishCS_status
    DestroyKeyPolicy_V1_0_0_CS (RedfishKeyPolicy_V1_0_0_KeyPolicy_CS *CSPtr);

