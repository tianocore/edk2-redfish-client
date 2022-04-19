# Definition of Key.V1_0_0 and functions<br><br>

## Actions
    typedef struct _RedfishKey_V1_0_0_Actions_CS {
        RedfishKey_V1_0_0_OemActions_CS *Oem;
    } RedfishKey_V1_0_0_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishKey_V1_0_0_OemActions_CS| Structure points to **Oem** property.| No| No


## NVMeoF
    typedef struct _RedfishKey_V1_0_0_NVMeoF_CS {
        RedfishCS_char *HostKeyId;
        RedfishCS_char *NQN;
        RedfishCS_char *OEMSecurityProtocolType;
        RedfishCS_char_Array *SecureHashAllowList;
        RedfishCS_char *SecurityProtocolType;
    } RedfishKey_V1_0_0_NVMeoF_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**HostKeyId**|RedfishCS_char| String pointer to **HostKeyId** property.| No| No
|**NQN**|RedfishCS_char| String pointer to **NQN** property.| No| Yes
|**OEMSecurityProtocolType**|RedfishCS_char| String pointer to **OEMSecurityProtocolType** property.| No| Yes
|**SecureHashAllowList**|RedfishCS_char_Array| Structure array points to one or more than one **RedfishCS_char *** for property **SecureHashAllowList**.| No| Yes
|**SecurityProtocolType**|RedfishCS_char| String pointer to **SecurityProtocolType** property.| No| Yes


## OemActions
    typedef struct _RedfishKey_V1_0_0_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishKey_V1_0_0_OemActions_CS;

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



## Key
    typedef struct _RedfishKey_V1_0_0_Key_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishKey_V1_0_0_Actions_CS *Actions;
        RedfishCS_char *Description;
        RedfishCS_char *Id;
        RedfishCS_char *KeyString;
        RedfishCS_char *KeyType;
        RedfishKey_V1_0_0_NVMeoF_CS *NVMeoF;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
    } RedfishKey_V1_0_0_Key_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishKey_V1_0_0_Actions_CS| Structure points to **Actions** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**KeyString**|RedfishCS_char| String pointer to **KeyString** property.| No| Yes
|**KeyType**|RedfishCS_char| String pointer to **KeyType** property.| No| Yes
|**NVMeoF**|RedfishKey_V1_0_0_NVMeoF_CS| Structure points to **NVMeoF** property.| No| No
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
## Redfish Key V1_0_0 to C Structure Function
    RedfishCS_status
    Json_Key_V1_0_0_To_CS (RedfishCS_char *JsonRawText, RedfishKey_V1_0_0_Key_CS **ReturnedCS);

## C Structure to Redfish Key V1_0_0 JSON Function
    RedfishCS_status
    CS_To_Key_V1_0_0_JSON (RedfishKey_V1_0_0_Key_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish Key V1_0_0 C Structure Function
    RedfishCS_status
    DestroyKey_V1_0_0_CS (RedfishKey_V1_0_0_Key_CS *CSPtr);

