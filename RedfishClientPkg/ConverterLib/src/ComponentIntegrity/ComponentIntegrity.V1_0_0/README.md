# Definition of ComponentIntegrity.V1_0_0 and functions<br><br>

## Actions
    typedef struct _RedfishComponentIntegrity_V1_0_0_Actions_CS {
        RedfishComponentIntegrity_V1_0_0_SPDMGetSignedMeasurements_CS *ComponentIntegrity_SPDMGetSignedMeasurements;
        RedfishComponentIntegrity_V1_0_0_OemActions_CS *Oem;
    } RedfishComponentIntegrity_V1_0_0_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**ComponentIntegrity_SPDMGetSignedMeasurements**|RedfishComponentIntegrity_V1_0_0_SPDMGetSignedMeasurements_CS| Structure points to **#ComponentIntegrity.SPDMGetSignedMeasurements** property.| No| No
|**Oem**|RedfishComponentIntegrity_V1_0_0_OemActions_CS| Structure points to **Oem** property.| No| No


## CommonAuthInfo
    typedef struct _RedfishComponentIntegrity_V1_0_0_CommonAuthInfo_CS {
        RedfishCS_Link ComponentCertificate;
        RedfishCS_char *VerificationStatus;
    } RedfishComponentIntegrity_V1_0_0_CommonAuthInfo_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**ComponentCertificate**|RedfishCS_Link| Structure link list to **ComponentCertificate** property.| No| Yes
|**VerificationStatus**|RedfishCS_char| String pointer to **VerificationStatus** property.| No| Yes


## CommunicationInfo
    typedef struct _RedfishComponentIntegrity_V1_0_0_CommunicationInfo_CS {
        RedfishComponentIntegrity_V1_0_0_SingleSessionInfo_Array_CS *Sessions;
    } RedfishComponentIntegrity_V1_0_0_CommunicationInfo_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Sessions**|RedfishComponentIntegrity_V1_0_0_SingleSessionInfo_Array_CS| Structure array points to one or more than one **RedfishComponentIntegrity_V1_0_0_SingleSessionInfo_Array_CS** structures for property **Sessions**.| No| No


## Links
    typedef struct _RedfishComponentIntegrity_V1_0_0_Links_CS {
        Redfishodatav4_idRef_Array_CS *ComponentsProtected;
        RedfishCS_int64 *ComponentsProtectedodata_count;
        RedfishResource_Oem_CS *Oem;
    } RedfishComponentIntegrity_V1_0_0_Links_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**ComponentsProtected**|Redfishodatav4_idRef_Array_CS| Structure array points to one or more than one **Redfishodatav4_idRef_Array_CS** structures for property **ComponentsProtected**.| No| Yes
|**ComponentsProtectedodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **ComponentsProtected@odata.count** property.| No| No
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No


## OemActions
    typedef struct _RedfishComponentIntegrity_V1_0_0_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishComponentIntegrity_V1_0_0_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## SPDMGetSignedMeasurements
    typedef struct _RedfishComponentIntegrity_V1_0_0_SPDMGetSignedMeasurements_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishComponentIntegrity_V1_0_0_SPDMGetSignedMeasurements_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**target**|RedfishCS_char| String pointer to **target** property.| No| No
|**title**|RedfishCS_char| String pointer to **title** property.| No| No


## SPDMGetSignedMeasurementsResponse
    typedef struct _RedfishComponentIntegrity_V1_0_0_SPDMGetSignedMeasurementsResponse_CS {
        RedfishCS_Link Certificate;
        RedfishCS_char *HashingAlgorithm;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_char *PublicKey;
        RedfishCS_char *SignedMeasurements;
        RedfishCS_char *SigningAlgorithm;
        RedfishCS_char *Version;
    } RedfishComponentIntegrity_V1_0_0_SPDMGetSignedMeasurementsResponse_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Certificate**|RedfishCS_Link| Structure link list to **Certificate** property.| No| Yes
|**HashingAlgorithm**|RedfishCS_char| String pointer to **HashingAlgorithm** property.| No| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**PublicKey**|RedfishCS_char| String pointer to **PublicKey** property.| No| Yes
|**SignedMeasurements**|RedfishCS_char| String pointer to **SignedMeasurements** property.| No| Yes
|**SigningAlgorithm**|RedfishCS_char| String pointer to **SigningAlgorithm** property.| No| Yes
|**Version**|RedfishCS_char| String pointer to **Version** property.| No| Yes


## SPDMcommunication
    typedef struct _RedfishComponentIntegrity_V1_0_0_SPDMcommunication_CS {
        RedfishComponentIntegrity_V1_0_0_SingleSessionInfo_Array_CS *Sessions;
    } RedfishComponentIntegrity_V1_0_0_SPDMcommunication_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Sessions**|RedfishComponentIntegrity_V1_0_0_SingleSessionInfo_Array_CS| Structure array points to one or more than one **RedfishComponentIntegrity_V1_0_0_SingleSessionInfo_Array_CS** structures for property **Sessions**.| No| No


## SPDMidentity
    typedef struct _RedfishComponentIntegrity_V1_0_0_SPDMidentity_CS {
        RedfishComponentIntegrity_V1_0_0_SPDMrequesterAuth_CS *RequesterAuthentication;
        RedfishComponentIntegrity_V1_0_0_SPDMresponderAuth_CS *ResponderAuthentication;
    } RedfishComponentIntegrity_V1_0_0_SPDMidentity_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**RequesterAuthentication**|RedfishComponentIntegrity_V1_0_0_SPDMrequesterAuth_CS| Structure points to **RequesterAuthentication** property.| No| No
|**ResponderAuthentication**|RedfishComponentIntegrity_V1_0_0_SPDMresponderAuth_CS| Structure points to **ResponderAuthentication** property.| No| No


## SPDMinfo
    typedef struct _RedfishComponentIntegrity_V1_0_0_SPDMinfo_CS {
        RedfishComponentIntegrity_V1_0_0_SPDMcommunication_CS *ComponentCommunication;
        RedfishComponentIntegrity_V1_0_0_SPDMidentity_CS *IdentityAuthentication;
        RedfishComponentIntegrity_V1_0_0_SPDMmeasurementSet_CS *MeasurementSet;
        Redfishodatav4_idRef_CS *Requester;
    } RedfishComponentIntegrity_V1_0_0_SPDMinfo_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**ComponentCommunication**|RedfishComponentIntegrity_V1_0_0_SPDMcommunication_CS| Structure points to **ComponentCommunication** property.| No| No
|**IdentityAuthentication**|RedfishComponentIntegrity_V1_0_0_SPDMidentity_CS| Structure points to **IdentityAuthentication** property.| No| No
|**MeasurementSet**|RedfishComponentIntegrity_V1_0_0_SPDMmeasurementSet_CS| Structure points to **MeasurementSet** property.| No| No
|**Requester**|Redfishodatav4_idRef_CS| Structure points to **Requester** property.| No| Yes


## SPDMmeasurementSet
    typedef struct _RedfishComponentIntegrity_V1_0_0_SPDMmeasurementSet_CS {
        RedfishCS_char *MeasurementSpecification;
        RedfishCS_char *MeasurementSummary;
        RedfishCS_char *MeasurementSummaryHashAlgorithm;
        RedfishCS_char *MeasurementSummaryType;
        RedfishComponentIntegrity_V1_0_0_SPDMsingleMeasurement_Array_CS *Measurements;
        RedfishResource_Oem_CS *Oem;
    } RedfishComponentIntegrity_V1_0_0_SPDMmeasurementSet_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**MeasurementSpecification**|RedfishCS_char| String pointer to **MeasurementSpecification** property.| No| Yes
|**MeasurementSummary**|RedfishCS_char| String pointer to **MeasurementSummary** property.| No| Yes
|**MeasurementSummaryHashAlgorithm**|RedfishCS_char| String pointer to **MeasurementSummaryHashAlgorithm** property.| No| Yes
|**MeasurementSummaryType**|RedfishCS_char| String pointer to **MeasurementSummaryType** property.| No| Yes
|**Measurements**|RedfishComponentIntegrity_V1_0_0_SPDMsingleMeasurement_Array_CS| Structure array points to one or more than one **RedfishComponentIntegrity_V1_0_0_SPDMsingleMeasurement_Array_CS** structures for property **Measurements**.| No| No
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No


## SPDMrequesterAuth
    typedef struct _RedfishComponentIntegrity_V1_0_0_SPDMrequesterAuth_CS {
        RedfishCS_Link ProvidedCertificate;
    } RedfishComponentIntegrity_V1_0_0_SPDMrequesterAuth_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**ProvidedCertificate**|RedfishCS_Link| Structure link list to **ProvidedCertificate** property.| No| Yes


## SPDMresponderAuth
    typedef struct _RedfishComponentIntegrity_V1_0_0_SPDMresponderAuth_CS {
        RedfishCS_Link ComponentCertificate;
        RedfishCS_char *VerificationStatus;
    } RedfishComponentIntegrity_V1_0_0_SPDMresponderAuth_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**ComponentCertificate**|RedfishCS_Link| Structure link list to **ComponentCertificate** property.| No| Yes
|**VerificationStatus**|RedfishCS_char| String pointer to **VerificationStatus** property.| No| Yes


## SPDMsingleMeasurement
    typedef struct _RedfishComponentIntegrity_V1_0_0_SPDMsingleMeasurement_CS {
        RedfishCS_char *LastUpdated;
        RedfishCS_char *Measurement;
        RedfishCS_char *MeasurementHashAlgorithm;
        RedfishCS_int64 *MeasurementIndex;
        RedfishCS_char *MeasurementType;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_bool *PartofSummaryHash;
    } RedfishComponentIntegrity_V1_0_0_SPDMsingleMeasurement_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**LastUpdated**|RedfishCS_char| String pointer to **LastUpdated** property.| No| Yes
|**Measurement**|RedfishCS_char| String pointer to **Measurement** property.| No| Yes
|**MeasurementHashAlgorithm**|RedfishCS_char| String pointer to **MeasurementHashAlgorithm** property.| No| Yes
|**MeasurementIndex**|RedfishCS_int64| 64-bit long long interger pointer to **MeasurementIndex** property.| No| Yes
|**MeasurementType**|RedfishCS_char| String pointer to **MeasurementType** property.| No| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**PartofSummaryHash**|RedfishCS_bool| Boolean pointer to **PartofSummaryHash** property.| No| Yes


## SingleSessionInfo
    typedef struct _RedfishComponentIntegrity_V1_0_0_SingleSessionInfo_CS {
        RedfishCS_int64 *SessionId;
        RedfishCS_char *SessionType;
    } RedfishComponentIntegrity_V1_0_0_SingleSessionInfo_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**SessionId**|RedfishCS_int64| 64-bit long long interger pointer to **SessionId** property.| No| Yes
|**SessionType**|RedfishCS_char| String pointer to **SessionType** property.| No| Yes


## TPMauth
    typedef struct _RedfishComponentIntegrity_V1_0_0_TPMauth_CS {
        RedfishCS_Link ComponentCertificate;
        RedfishCS_char *VerificationStatus;
    } RedfishComponentIntegrity_V1_0_0_TPMauth_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**ComponentCertificate**|RedfishCS_Link| Structure link list to **ComponentCertificate** property.| No| Yes
|**VerificationStatus**|RedfishCS_char| String pointer to **VerificationStatus** property.| No| Yes


## TPMcommunication
    typedef struct _RedfishComponentIntegrity_V1_0_0_TPMcommunication_CS {
        RedfishComponentIntegrity_V1_0_0_SingleSessionInfo_Array_CS *Sessions;
    } RedfishComponentIntegrity_V1_0_0_TPMcommunication_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Sessions**|RedfishComponentIntegrity_V1_0_0_SingleSessionInfo_Array_CS| Structure array points to one or more than one **RedfishComponentIntegrity_V1_0_0_SingleSessionInfo_Array_CS** structures for property **Sessions**.| No| No


## TPMinfo
    typedef struct _RedfishComponentIntegrity_V1_0_0_TPMinfo_CS {
        RedfishComponentIntegrity_V1_0_0_TPMcommunication_CS *ComponentCommunication;
        RedfishComponentIntegrity_V1_0_0_TPMauth_CS *IdentityAuthentication;
        RedfishComponentIntegrity_V1_0_0_TPMmeasurementSet_CS *MeasurementSet;
    } RedfishComponentIntegrity_V1_0_0_TPMinfo_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**ComponentCommunication**|RedfishComponentIntegrity_V1_0_0_TPMcommunication_CS| Structure points to **ComponentCommunication** property.| No| No
|**IdentityAuthentication**|RedfishComponentIntegrity_V1_0_0_TPMauth_CS| Structure points to **IdentityAuthentication** property.| No| No
|**MeasurementSet**|RedfishComponentIntegrity_V1_0_0_TPMmeasurementSet_CS| Structure points to **MeasurementSet** property.| No| No


## TPMmeasurementSet
    typedef struct _RedfishComponentIntegrity_V1_0_0_TPMmeasurementSet_CS {
        RedfishComponentIntegrity_V1_0_0_TPMsingleMeasurement_Array_CS *Measurements;
    } RedfishComponentIntegrity_V1_0_0_TPMmeasurementSet_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Measurements**|RedfishComponentIntegrity_V1_0_0_TPMsingleMeasurement_Array_CS| Structure array points to one or more than one **RedfishComponentIntegrity_V1_0_0_TPMsingleMeasurement_Array_CS** structures for property **Measurements**.| No| No


## TPMsingleMeasurement
    typedef struct _RedfishComponentIntegrity_V1_0_0_TPMsingleMeasurement_CS {
        RedfishCS_char *LastUpdated;
        RedfishCS_char *Measurement;
        RedfishCS_char *MeasurementHashAlgorithm;
        RedfishCS_int64 *PCR;
    } RedfishComponentIntegrity_V1_0_0_TPMsingleMeasurement_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**LastUpdated**|RedfishCS_char| String pointer to **LastUpdated** property.| No| Yes
|**Measurement**|RedfishCS_char| String pointer to **Measurement** property.| No| Yes
|**MeasurementHashAlgorithm**|RedfishCS_char| String pointer to **MeasurementHashAlgorithm** property.| No| Yes
|**PCR**|RedfishCS_int64| 64-bit long long interger pointer to **PCR** property.| No| Yes


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


## RedfishComponentIntegrity_V1_0_0_SingleSessionInfo_Array_CS
    typedef struct _RedfishComponentIntegrity_V1_0_0_SingleSessionInfo_Array_CS  {
        RedfishCS_Link *Next;
        RedfishComponentIntegrity_V1_0_0_SingleSessionInfo_CS *ArrayValue;
    } RedfishComponentIntegrity_V1_0_0_SingleSessionInfo_Array_CS;



## Redfishodatav4_idRef_Array_CS
    typedef struct _Redfishodatav4_idRef_Array_CS  {
        RedfishCS_Link *Next;
        Redfishodatav4_idRef_CS *ArrayValue;
    } Redfishodatav4_idRef_Array_CS;



## RedfishComponentIntegrity_V1_0_0_SPDMsingleMeasurement_Array_CS
    typedef struct _RedfishComponentIntegrity_V1_0_0_SPDMsingleMeasurement_Array_CS  {
        RedfishCS_Link *Next;
        RedfishComponentIntegrity_V1_0_0_SPDMsingleMeasurement_CS *ArrayValue;
    } RedfishComponentIntegrity_V1_0_0_SPDMsingleMeasurement_Array_CS;



## RedfishComponentIntegrity_V1_0_0_TPMsingleMeasurement_Array_CS
    typedef struct _RedfishComponentIntegrity_V1_0_0_TPMsingleMeasurement_Array_CS  {
        RedfishCS_Link *Next;
        RedfishComponentIntegrity_V1_0_0_TPMsingleMeasurement_CS *ArrayValue;
    } RedfishComponentIntegrity_V1_0_0_TPMsingleMeasurement_Array_CS;



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



## ComponentIntegrity
    typedef struct _RedfishComponentIntegrity_V1_0_0_ComponentIntegrity_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishComponentIntegrity_V1_0_0_Actions_CS *Actions;
        RedfishCS_bool *ComponentIntegrityEnabled;
        RedfishCS_char *ComponentIntegrityType;
        RedfishCS_char *ComponentIntegrityTypeVersion;
        RedfishCS_char *Description;
        RedfishCS_char *Id;
        RedfishCS_char *LastUpdated;
        RedfishComponentIntegrity_V1_0_0_Links_CS *Links;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishComponentIntegrity_V1_0_0_SPDMinfo_CS *SPDM;
        RedfishResource_Status_CS *Status;
        RedfishComponentIntegrity_V1_0_0_TPMinfo_CS *TPM;
        RedfishCS_char *TargetComponentURI;
    } RedfishComponentIntegrity_V1_0_0_ComponentIntegrity_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishComponentIntegrity_V1_0_0_Actions_CS| Structure points to **Actions** property.| No| No
|**ComponentIntegrityEnabled**|RedfishCS_bool| Boolean pointer to **ComponentIntegrityEnabled** property.| No| No
|**ComponentIntegrityType**|RedfishCS_char| String pointer to **ComponentIntegrityType** property.| Yes| Yes
|**ComponentIntegrityTypeVersion**|RedfishCS_char| String pointer to **ComponentIntegrityTypeVersion** property.| Yes| Yes
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**LastUpdated**|RedfishCS_char| String pointer to **LastUpdated** property.| No| Yes
|**Links**|RedfishComponentIntegrity_V1_0_0_Links_CS| Structure points to **Links** property.| No| No
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**SPDM**|RedfishComponentIntegrity_V1_0_0_SPDMinfo_CS| Structure points to **SPDM** property.| No| No
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
|**TPM**|RedfishComponentIntegrity_V1_0_0_TPMinfo_CS| Structure points to **TPM** property.| No| No
|**TargetComponentURI**|RedfishCS_char| String pointer to **TargetComponentURI** property.| Yes| Yes
## Redfish ComponentIntegrity V1_0_0 to C Structure Function
    RedfishCS_status
    Json_ComponentIntegrity_V1_0_0_To_CS (RedfishCS_char *JsonRawText, RedfishComponentIntegrity_V1_0_0_ComponentIntegrity_CS **ReturnedCS);

## C Structure to Redfish ComponentIntegrity V1_0_0 JSON Function
    RedfishCS_status
    CS_To_ComponentIntegrity_V1_0_0_JSON (RedfishComponentIntegrity_V1_0_0_ComponentIntegrity_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish ComponentIntegrity V1_0_0 C Structure Function
    RedfishCS_status
    DestroyComponentIntegrity_V1_0_0_CS (RedfishComponentIntegrity_V1_0_0_ComponentIntegrity_CS *CSPtr);

