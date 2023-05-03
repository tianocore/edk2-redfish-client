# Definition of OperatingConfig.V1_0_2 and functions<br><br>

## Actions
    typedef struct _RedfishOperatingConfig_V1_0_2_Actions_CS {
        RedfishOperatingConfig_V1_0_2_OemActions_CS *Oem;
    } RedfishOperatingConfig_V1_0_2_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishOperatingConfig_V1_0_2_OemActions_CS| Structure points to **Oem** property.| No| No


## BaseSpeedPrioritySettings
    typedef struct _RedfishOperatingConfig_V1_0_2_BaseSpeedPrioritySettings_CS {
        RedfishCS_int64 *BaseSpeedMHz;
        RedfishCS_int64 *CoreCount;
        RedfishCS_int64_Array *CoreIDs;
    } RedfishOperatingConfig_V1_0_2_BaseSpeedPrioritySettings_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**BaseSpeedMHz**|RedfishCS_int64| 64-bit long long interger pointer to **BaseSpeedMHz** property.| No| Yes
|**CoreCount**|RedfishCS_int64| 64-bit long long interger pointer to **CoreCount** property.| No| Yes
|**CoreIDs**|RedfishCS_int64_Array| Structure array points to one or more than one **RedfishCS_int64 *** for property **CoreIDs**.| No| Yes


## OemActions
    typedef struct _RedfishOperatingConfig_V1_0_2_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishOperatingConfig_V1_0_2_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## TurboProfileDatapoint
    typedef struct _RedfishOperatingConfig_V1_0_2_TurboProfileDatapoint_CS {
        RedfishCS_int64 *ActiveCoreCount;
        RedfishCS_int64 *MaxSpeedMHz;
    } RedfishOperatingConfig_V1_0_2_TurboProfileDatapoint_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**ActiveCoreCount**|RedfishCS_int64| 64-bit long long interger pointer to **ActiveCoreCount** property.| No| Yes
|**MaxSpeedMHz**|RedfishCS_int64| 64-bit long long interger pointer to **MaxSpeedMHz** property.| No| Yes


## Oem
    typedef struct _RedfishResource_Oem_CS {
        RedfishCS_Link Prop;
    } RedfishResource_Oem_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## RedfishCS_int64_Array
    typedef struct _RedfishCS_int64_Array  {
        RedfishCS_Link *Next;
        RedfishCS_int64 *ArrayValue;
    } RedfishCS_int64_Array;



## OperatingConfig
    typedef struct _RedfishOperatingConfig_V1_0_2_OperatingConfig_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishOperatingConfig_V1_0_2_Actions_CS *Actions;
        RedfishCS_int64 *BaseSpeedMHz;
        RedfishOperatingConfig_V1_0_2_BaseSpeedPrioritySettings_CS *BaseSpeedPrioritySettings;
        RedfishCS_char *Description;
        RedfishCS_char *Id;
        RedfishCS_int64 *MaxJunctionTemperatureCelsius;
        RedfishCS_int64 *MaxSpeedMHz;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_int64 *TDPWatts;
        RedfishCS_int64 *TotalAvailableCoreCount;
        RedfishOperatingConfig_V1_0_2_TurboProfileDatapoint_CS *TurboProfile;
    } RedfishOperatingConfig_V1_0_2_OperatingConfig_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishOperatingConfig_V1_0_2_Actions_CS| Structure points to **Actions** property.| No| No
|**BaseSpeedMHz**|RedfishCS_int64| 64-bit long long interger pointer to **BaseSpeedMHz** property.| No| Yes
|**BaseSpeedPrioritySettings**|RedfishOperatingConfig_V1_0_2_BaseSpeedPrioritySettings_CS| Structure points to **BaseSpeedPrioritySettings** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**MaxJunctionTemperatureCelsius**|RedfishCS_int64| 64-bit long long interger pointer to **MaxJunctionTemperatureCelsius** property.| No| Yes
|**MaxSpeedMHz**|RedfishCS_int64| 64-bit long long interger pointer to **MaxSpeedMHz** property.| No| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**TDPWatts**|RedfishCS_int64| 64-bit long long interger pointer to **TDPWatts** property.| No| Yes
|**TotalAvailableCoreCount**|RedfishCS_int64| 64-bit long long interger pointer to **TotalAvailableCoreCount** property.| No| Yes
|**TurboProfile**|RedfishOperatingConfig_V1_0_2_TurboProfileDatapoint_CS| Structure points to **TurboProfile** property.| No| No
## Redfish OperatingConfig V1_0_2 to C Structure Function
    RedfishCS_status
    Json_OperatingConfig_V1_0_2_To_CS (RedfishCS_char *JsonRawText, RedfishOperatingConfig_V1_0_2_OperatingConfig_CS **ReturnedCS);

## C Structure to Redfish OperatingConfig V1_0_2 JSON Function
    RedfishCS_status
    CS_To_OperatingConfig_V1_0_2_JSON (RedfishOperatingConfig_V1_0_2_OperatingConfig_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish OperatingConfig V1_0_2 C Structure Function
    RedfishCS_status
    DestroyOperatingConfig_V1_0_2_CS (RedfishOperatingConfig_V1_0_2_OperatingConfig_CS *CSPtr);

