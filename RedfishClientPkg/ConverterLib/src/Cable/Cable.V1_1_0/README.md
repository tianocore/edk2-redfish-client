# Definition of Cable.V1_1_0 and functions<br><br>

## Actions
    typedef struct _RedfishCable_V1_1_0_Actions_CS {
        RedfishCable_V1_1_0_OemActions_CS *Oem;
    } RedfishCable_V1_1_0_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishCable_V1_1_0_OemActions_CS| Structure points to **Oem** property.| No| No


## Links
    typedef struct _RedfishCable_V1_1_0_Links_CS {
        RedfishCS_Link DownstreamChassis;
        RedfishCS_int64 *DownstreamChassisodata_count;
        RedfishCS_Link DownstreamPorts;
        RedfishCS_int64 *DownstreamPortsodata_count;
        RedfishCS_Link DownstreamResources;
        RedfishCS_int64 *DownstreamResourcesodata_count;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_Link UpstreamChassis;
        RedfishCS_int64 *UpstreamChassisodata_count;
        RedfishCS_Link UpstreamPorts;
        RedfishCS_int64 *UpstreamPortsodata_count;
        RedfishCS_Link UpstreamResources;
        RedfishCS_int64 *UpstreamResourcesodata_count;
    } RedfishCable_V1_1_0_Links_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**DownstreamChassis**|RedfishCS_Link| Structure link list to **DownstreamChassis** property.| No| No
|**DownstreamChassisodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **DownstreamChassis@odata.count** property.| No| No
|**DownstreamPorts**|RedfishCS_Link| Structure link list to **DownstreamPorts** property.| No| No
|**DownstreamPortsodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **DownstreamPorts@odata.count** property.| No| No
|**DownstreamResources**|RedfishCS_Link| Structure link list to **DownstreamResources** property.| No| No
|**DownstreamResourcesodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **DownstreamResources@odata.count** property.| No| No
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**UpstreamChassis**|RedfishCS_Link| Structure link list to **UpstreamChassis** property.| No| No
|**UpstreamChassisodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **UpstreamChassis@odata.count** property.| No| No
|**UpstreamPorts**|RedfishCS_Link| Structure link list to **UpstreamPorts** property.| No| No
|**UpstreamPortsodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **UpstreamPorts@odata.count** property.| No| No
|**UpstreamResources**|RedfishCS_Link| Structure link list to **UpstreamResources** property.| No| No
|**UpstreamResourcesodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **UpstreamResources@odata.count** property.| No| No


## OemActions
    typedef struct _RedfishCable_V1_1_0_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishCable_V1_1_0_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## Condition
    typedef struct _RedfishResource_Condition_CS {
        RedfishCS_Link LogEntry;
        RedfishCS_char *Message;
        RedfishCS_char_Array *MessageArgs;
        RedfishCS_char *MessageId;
        Redfishodatav4_idRef_CS *OriginOfCondition;
        RedfishCS_char *Resolution;
        RedfishCS_char *Severity;
        RedfishCS_char *Timestamp;
    } RedfishResource_Condition_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**LogEntry**|RedfishCS_Link| Structure link list to **LogEntry** property.| No| Yes
|**Message**|RedfishCS_char| String pointer to **Message** property.| No| Yes
|**MessageArgs**|RedfishCS_char_Array| Structure array points to one or more than one **RedfishCS_char *** for property **MessageArgs**.| No| Yes
|**MessageId**|RedfishCS_char| String pointer to **MessageId** property.| No| Yes
|**OriginOfCondition**|Redfishodatav4_idRef_CS| Structure points to **OriginOfCondition** property.| No| Yes
|**Resolution**|RedfishCS_char| String pointer to **Resolution** property.| No| Yes
|**Severity**|RedfishCS_char| String pointer to **Severity** property.| No| Yes
|**Timestamp**|RedfishCS_char| String pointer to **Timestamp** property.| No| Yes


## Oem
    typedef struct _RedfishResource_Oem_CS {
        RedfishCS_Link Prop;
    } RedfishResource_Oem_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## Status
    typedef struct _RedfishResource_Status_CS {
        RedfishResource_Condition_Array_CS *Conditions;
        RedfishCS_char *Health;
        RedfishCS_char *HealthRollup;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_char *State;
    } RedfishResource_Status_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Conditions**|RedfishResource_Condition_Array_CS| Structure array points to one or more than one **RedfishResource_Condition_Array_CS** structures for property **Conditions**.| No| No
|**Health**|RedfishCS_char| String pointer to **Health** property.| No| Yes
|**HealthRollup**|RedfishCS_char| String pointer to **HealthRollup** property.| No| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**State**|RedfishCS_char| String pointer to **State** property.| No| Yes


## idRef
    typedef struct _Redfishodatav4_idRef_CS {
        RedfishCS_char *odata_id;
    } Redfishodatav4_idRef_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No


## RedfishCS_char_Array
    typedef struct _RedfishCS_char_Array  {
        RedfishCS_Link *Next;
        RedfishCS_char *ArrayValue;
    } RedfishCS_char_Array;



## RedfishResource_Condition_Array_CS
    typedef struct _RedfishResource_Condition_Array_CS  {
        RedfishCS_Link *Next;
        RedfishResource_Condition_CS *ArrayValue;
    } RedfishResource_Condition_Array_CS;



## Cable
    typedef struct _RedfishCable_V1_1_0_Cable_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishCable_V1_1_0_Actions_CS *Actions;
        RedfishCS_Link Assembly;
        RedfishCS_char *AssetTag;
        RedfishCS_char *CableClass;
        RedfishCS_char *CableStatus;
        RedfishCS_char *CableType;
        RedfishCS_char *Description;
        RedfishCS_char *DownstreamConnectorTypes;
        RedfishCS_char *DownstreamName;
        RedfishCS_char *Id;
        RedfishCS_int64 *LengthMeters;
        RedfishCable_V1_1_0_Links_CS *Links;
        RedfishCS_Link Location;
        RedfishCS_char *Manufacturer;
        RedfishCS_char *Model;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_char *PartNumber;
        RedfishCS_char *SKU;
        RedfishCS_char *SerialNumber;
        RedfishResource_Status_CS *Status;
        RedfishCS_char *UpstreamConnectorTypes;
        RedfishCS_char *UpstreamName;
        RedfishCS_char *UserDescription;
        RedfishCS_char *UserLabel;
        RedfishCS_char *Vendor;
    } RedfishCable_V1_1_0_Cable_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishCable_V1_1_0_Actions_CS| Structure points to **Actions** property.| No| No
|**Assembly**|RedfishCS_Link| Structure link list to **Assembly** property.| No| Yes
|**AssetTag**|RedfishCS_char| String pointer to **AssetTag** property.| No| No
|**CableClass**|RedfishCS_char| String pointer to **CableClass** property.| No| No
|**CableStatus**|RedfishCS_char| String pointer to **CableStatus** property.| No| No
|**CableType**|RedfishCS_char| String pointer to **CableType** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**DownstreamConnectorTypes**|RedfishCS_char| String pointer to **DownstreamConnectorTypes** property.| No| No
|**DownstreamName**|RedfishCS_char| String pointer to **DownstreamName** property.| No| No
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**LengthMeters**|RedfishCS_int64| 64-bit long long interger pointer to **LengthMeters** property.| No| No
|**Links**|RedfishCable_V1_1_0_Links_CS| Structure points to **Links** property.| No| No
|**Location**|RedfishCS_Link| Structure link list to **Location** property.| No| No
|**Manufacturer**|RedfishCS_char| String pointer to **Manufacturer** property.| No| No
|**Model**|RedfishCS_char| String pointer to **Model** property.| No| No
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**PartNumber**|RedfishCS_char| String pointer to **PartNumber** property.| No| No
|**SKU**|RedfishCS_char| String pointer to **SKU** property.| No| No
|**SerialNumber**|RedfishCS_char| String pointer to **SerialNumber** property.| No| No
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
|**UpstreamConnectorTypes**|RedfishCS_char| String pointer to **UpstreamConnectorTypes** property.| No| No
|**UpstreamName**|RedfishCS_char| String pointer to **UpstreamName** property.| No| No
|**UserDescription**|RedfishCS_char| String pointer to **UserDescription** property.| No| No
|**UserLabel**|RedfishCS_char| String pointer to **UserLabel** property.| No| No
|**Vendor**|RedfishCS_char| String pointer to **Vendor** property.| No| No
## Redfish Cable V1_1_0 to C Structure Function
    RedfishCS_status
    Json_Cable_V1_1_0_To_CS (RedfishCS_char *JsonRawText, RedfishCable_V1_1_0_Cable_CS **ReturnedCS);

## C Structure to Redfish Cable V1_1_0 JSON Function
    RedfishCS_status
    CS_To_Cable_V1_1_0_JSON (RedfishCable_V1_1_0_Cable_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish Cable V1_1_0 C Structure Function
    RedfishCS_status
    DestroyCable_V1_1_0_CS (RedfishCable_V1_1_0_Cable_CS *CSPtr);

