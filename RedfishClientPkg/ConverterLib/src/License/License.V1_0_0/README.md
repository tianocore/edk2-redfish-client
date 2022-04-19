# Definition of License.V1_0_0 and functions<br><br>

## Actions
    typedef struct _RedfishLicense_V1_0_0_Actions_CS {
        RedfishLicense_V1_0_0_OemActions_CS *Oem;
    } RedfishLicense_V1_0_0_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishLicense_V1_0_0_OemActions_CS| Structure points to **Oem** property.| No| No


## ContactInfo
    typedef struct _RedfishLicense_V1_0_0_ContactInfo_CS {
        RedfishCS_char *ContactName;
        RedfishCS_char *EmailAddress;
        RedfishCS_char *PhoneNumber;
    } RedfishLicense_V1_0_0_ContactInfo_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**ContactName**|RedfishCS_char| String pointer to **ContactName** property.| No| Yes
|**EmailAddress**|RedfishCS_char| String pointer to **EmailAddress** property.| No| Yes
|**PhoneNumber**|RedfishCS_char| String pointer to **PhoneNumber** property.| No| Yes


## Links
    typedef struct _RedfishLicense_V1_0_0_Links_CS {
        Redfishodatav4_idRef_Array_CS *AuthorizedDevices;
        RedfishCS_int64 *AuthorizedDevicesodata_count;
        RedfishResource_Oem_CS *Oem;
    } RedfishLicense_V1_0_0_Links_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**AuthorizedDevices**|Redfishodatav4_idRef_Array_CS| Structure array points to one or more than one **Redfishodatav4_idRef_Array_CS** structures for property **AuthorizedDevices**.| No| Yes
|**AuthorizedDevicesodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **AuthorizedDevices@odata.count** property.| No| No
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No


## OemActions
    typedef struct _RedfishLicense_V1_0_0_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishLicense_V1_0_0_OemActions_CS;

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


## Redfishodatav4_idRef_Array_CS
    typedef struct _Redfishodatav4_idRef_Array_CS  {
        RedfishCS_Link *Next;
        Redfishodatav4_idRef_CS *ArrayValue;
    } Redfishodatav4_idRef_Array_CS;



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



## License
    typedef struct _RedfishLicense_V1_0_0_License_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishLicense_V1_0_0_Actions_CS *Actions;
        RedfishCS_char *AuthorizationScope;
        RedfishLicense_V1_0_0_ContactInfo_CS *Contact;
        RedfishCS_char *Description;
        RedfishCS_char *DownloadURI;
        RedfishCS_char *EntitlementId;
        RedfishCS_char *ExpirationDate;
        RedfishCS_int64 *GracePeriodDays;
        RedfishCS_char *Id;
        RedfishCS_char *InstallDate;
        RedfishCS_char *LicenseInfoURI;
        RedfishCS_char *LicenseOrigin;
        RedfishCS_char *LicenseString;
        RedfishCS_char *LicenseType;
        RedfishLicense_V1_0_0_Links_CS *Links;
        RedfishCS_char *Manufacturer;
        RedfishCS_int64 *MaxAuthorizedDevices;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_char *PartNumber;
        RedfishCS_char *RemainingDuration;
        RedfishCS_int64 *RemainingUseCount;
        RedfishCS_bool *Removable;
        RedfishCS_char *SKU;
        RedfishCS_char *SerialNumber;
        RedfishResource_Status_CS *Status;
    } RedfishLicense_V1_0_0_License_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishLicense_V1_0_0_Actions_CS| Structure points to **Actions** property.| No| No
|**AuthorizationScope**|RedfishCS_char| String pointer to **AuthorizationScope** property.| No| Yes
|**Contact**|RedfishLicense_V1_0_0_ContactInfo_CS| Structure points to **Contact** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**DownloadURI**|RedfishCS_char| String pointer to **DownloadURI** property.| No| Yes
|**EntitlementId**|RedfishCS_char| String pointer to **EntitlementId** property.| No| Yes
|**ExpirationDate**|RedfishCS_char| String pointer to **ExpirationDate** property.| No| Yes
|**GracePeriodDays**|RedfishCS_int64| 64-bit long long interger pointer to **GracePeriodDays** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**InstallDate**|RedfishCS_char| String pointer to **InstallDate** property.| No| Yes
|**LicenseInfoURI**|RedfishCS_char| String pointer to **LicenseInfoURI** property.| No| Yes
|**LicenseOrigin**|RedfishCS_char| String pointer to **LicenseOrigin** property.| No| Yes
|**LicenseString**|RedfishCS_char| String pointer to **LicenseString** property.| No| Yes
|**LicenseType**|RedfishCS_char| String pointer to **LicenseType** property.| No| Yes
|**Links**|RedfishLicense_V1_0_0_Links_CS| Structure points to **Links** property.| No| No
|**Manufacturer**|RedfishCS_char| String pointer to **Manufacturer** property.| No| Yes
|**MaxAuthorizedDevices**|RedfishCS_int64| 64-bit long long interger pointer to **MaxAuthorizedDevices** property.| No| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**PartNumber**|RedfishCS_char| String pointer to **PartNumber** property.| No| Yes
|**RemainingDuration**|RedfishCS_char| String pointer to **RemainingDuration** property.| No| Yes
|**RemainingUseCount**|RedfishCS_int64| 64-bit long long interger pointer to **RemainingUseCount** property.| No| Yes
|**Removable**|RedfishCS_bool| Boolean pointer to **Removable** property.| No| Yes
|**SKU**|RedfishCS_char| String pointer to **SKU** property.| No| Yes
|**SerialNumber**|RedfishCS_char| String pointer to **SerialNumber** property.| No| Yes
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
## Redfish License V1_0_0 to C Structure Function
    RedfishCS_status
    Json_License_V1_0_0_To_CS (RedfishCS_char *JsonRawText, RedfishLicense_V1_0_0_License_CS **ReturnedCS);

## C Structure to Redfish License V1_0_0 JSON Function
    RedfishCS_status
    CS_To_License_V1_0_0_JSON (RedfishLicense_V1_0_0_License_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish License V1_0_0 C Structure Function
    RedfishCS_status
    DestroyLicense_V1_0_0_CS (RedfishLicense_V1_0_0_License_CS *CSPtr);

