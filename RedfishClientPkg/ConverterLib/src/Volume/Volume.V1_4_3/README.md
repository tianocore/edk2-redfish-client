# Definition of Volume.V1_4_3 and functions<br><br>

## Condition
    typedef struct _RedfishResource_Condition_CS {
        RedfishCS_Link LogEntry;
        RedfishCS_char *Message;
        RedfishCS_char_Array *MessageArgs;
        RedfishCS_char *MessageId;
        Redfishodatav4_idRef_CS *OriginOfCondition;
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


## ReplicaInfo
    typedef struct _RedfishStorageReplicaInfo_V1_3_0_ReplicaInfo_CS {
        RedfishCS_bool *ConsistencyEnabled;
        RedfishCS_char *ConsistencyState;
        RedfishCS_char *ConsistencyStatus;
        RedfishCS_char *ConsistencyType;
        RedfishCS_Link DataProtectionLineOfService;
        RedfishCS_bool *FailedCopyStopsHostIO;
        RedfishCS_int64 *PercentSynced;
        Redfishodatav4_idRef_CS *Replica;
        RedfishCS_char *ReplicaFaultDomain;
        RedfishCS_char *ReplicaPriority;
        RedfishCS_char *ReplicaProgressStatus;
        RedfishCS_char *ReplicaReadOnlyAccess;
        RedfishCS_char *ReplicaRecoveryMode;
        RedfishCS_char *ReplicaRole;
        RedfishCS_int64 *ReplicaSkewBytes;
        RedfishCS_char *ReplicaState;
        RedfishCS_char *ReplicaType;
        RedfishCS_char *ReplicaUpdateMode;
        RedfishCS_char *RequestedReplicaState;
        Redfishodatav4_idRef_CS *SourceReplica;
        RedfishCS_bool *SyncMaintained;
        RedfishCS_char *UndiscoveredElement;
        RedfishCS_char *WhenActivated;
        RedfishCS_char *WhenDeactivated;
        RedfishCS_char *WhenEstablished;
        RedfishCS_char *WhenSuspended;
        RedfishCS_char *WhenSynced;
        RedfishCS_char *WhenSynchronized;
    } RedfishStorageReplicaInfo_V1_3_0_ReplicaInfo_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**ConsistencyEnabled**|RedfishCS_bool| Boolean pointer to **ConsistencyEnabled** property.| No| Yes
|**ConsistencyState**|RedfishCS_char| String pointer to **ConsistencyState** property.| No| Yes
|**ConsistencyStatus**|RedfishCS_char| String pointer to **ConsistencyStatus** property.| No| Yes
|**ConsistencyType**|RedfishCS_char| String pointer to **ConsistencyType** property.| No| Yes
|**DataProtectionLineOfService**|RedfishCS_Link| Structure link list to **DataProtectionLineOfService** property.| No| No
|**FailedCopyStopsHostIO**|RedfishCS_bool| Boolean pointer to **FailedCopyStopsHostIO** property.| No| Yes
|**PercentSynced**|RedfishCS_int64| 64-bit long long interger pointer to **PercentSynced** property.| No| Yes
|**Replica**|Redfishodatav4_idRef_CS| Structure points to **Replica** property.| No| Yes
|**ReplicaFaultDomain**|RedfishCS_char| String pointer to **ReplicaFaultDomain** property.| No| Yes
|**ReplicaPriority**|RedfishCS_char| String pointer to **ReplicaPriority** property.| No| Yes
|**ReplicaProgressStatus**|RedfishCS_char| String pointer to **ReplicaProgressStatus** property.| No| Yes
|**ReplicaReadOnlyAccess**|RedfishCS_char| String pointer to **ReplicaReadOnlyAccess** property.| No| Yes
|**ReplicaRecoveryMode**|RedfishCS_char| String pointer to **ReplicaRecoveryMode** property.| No| Yes
|**ReplicaRole**|RedfishCS_char| String pointer to **ReplicaRole** property.| No| Yes
|**ReplicaSkewBytes**|RedfishCS_int64| 64-bit long long interger pointer to **ReplicaSkewBytes** property.| No| Yes
|**ReplicaState**|RedfishCS_char| String pointer to **ReplicaState** property.| No| Yes
|**ReplicaType**|RedfishCS_char| String pointer to **ReplicaType** property.| No| Yes
|**ReplicaUpdateMode**|RedfishCS_char| String pointer to **ReplicaUpdateMode** property.| No| Yes
|**RequestedReplicaState**|RedfishCS_char| String pointer to **RequestedReplicaState** property.| No| Yes
|**SourceReplica**|Redfishodatav4_idRef_CS| Structure points to **SourceReplica** property.| No| Yes
|**SyncMaintained**|RedfishCS_bool| Boolean pointer to **SyncMaintained** property.| No| Yes
|**UndiscoveredElement**|RedfishCS_char| String pointer to **UndiscoveredElement** property.| No| Yes
|**WhenActivated**|RedfishCS_char| String pointer to **WhenActivated** property.| No| Yes
|**WhenDeactivated**|RedfishCS_char| String pointer to **WhenDeactivated** property.| No| Yes
|**WhenEstablished**|RedfishCS_char| String pointer to **WhenEstablished** property.| No| Yes
|**WhenSuspended**|RedfishCS_char| String pointer to **WhenSuspended** property.| No| Yes
|**WhenSynced**|RedfishCS_char| String pointer to **WhenSynced** property.| No| Yes
|**WhenSynchronized**|RedfishCS_char| String pointer to **WhenSynchronized** property.| No| Yes


## Actions
    typedef struct _RedfishVolume_V1_4_3_Actions_CS {
        RedfishVolume_V1_4_3_AssignReplicaTarget_CS *Volume_AssignReplicaTarget;
        RedfishVolume_V1_4_3_CheckConsistency_CS *Volume_CheckConsistency;
        RedfishVolume_V1_4_3_CreateReplicaTarget_CS *Volume_CreateReplicaTarget;
        RedfishVolume_V1_4_3_RemoveReplicaRelationship_CS *Volume_RemoveReplicaRelationship;
        RedfishVolume_V1_4_3_ResumeReplication_CS *Volume_ResumeReplication;
        RedfishVolume_V1_4_3_ReverseReplicationRelationship_CS *Volume_ReverseReplicationRelationship;
        RedfishVolume_V1_4_3_SplitReplication_CS *Volume_SplitReplication;
        RedfishVolume_V1_4_3_SuspendReplication_CS *Volume_SuspendReplication;
        RedfishVolume_V1_4_3_OemActions_CS *Oem;
    } RedfishVolume_V1_4_3_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Volume_AssignReplicaTarget**|RedfishVolume_V1_4_3_AssignReplicaTarget_CS| Structure points to **#Volume.AssignReplicaTarget** property.| No| No
|**Volume_CheckConsistency**|RedfishVolume_V1_4_3_CheckConsistency_CS| Structure points to **#Volume.CheckConsistency** property.| No| No
|**Volume_CreateReplicaTarget**|RedfishVolume_V1_4_3_CreateReplicaTarget_CS| Structure points to **#Volume.CreateReplicaTarget** property.| No| No
|**Volume_RemoveReplicaRelationship**|RedfishVolume_V1_4_3_RemoveReplicaRelationship_CS| Structure points to **#Volume.RemoveReplicaRelationship** property.| No| No
|**Volume_ResumeReplication**|RedfishVolume_V1_4_3_ResumeReplication_CS| Structure points to **#Volume.ResumeReplication** property.| No| No
|**Volume_ReverseReplicationRelationship**|RedfishVolume_V1_4_3_ReverseReplicationRelationship_CS| Structure points to **#Volume.ReverseReplicationRelationship** property.| No| No
|**Volume_SplitReplication**|RedfishVolume_V1_4_3_SplitReplication_CS| Structure points to **#Volume.SplitReplication** property.| No| No
|**Volume_SuspendReplication**|RedfishVolume_V1_4_3_SuspendReplication_CS| Structure points to **#Volume.SuspendReplication** property.| No| No
|**Oem**|RedfishVolume_V1_4_3_OemActions_CS| Structure points to **Oem** property.| No| No


## AssignReplicaTarget
    typedef struct _RedfishVolume_V1_4_3_AssignReplicaTarget_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishVolume_V1_4_3_AssignReplicaTarget_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**target**|RedfishCS_char| String pointer to **target** property.| No| No
|**title**|RedfishCS_char| String pointer to **title** property.| No| No


## CheckConsistency
    typedef struct _RedfishVolume_V1_4_3_CheckConsistency_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishVolume_V1_4_3_CheckConsistency_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**target**|RedfishCS_char| String pointer to **target** property.| No| No
|**title**|RedfishCS_char| String pointer to **title** property.| No| No


## CreateReplicaTarget
    typedef struct _RedfishVolume_V1_4_3_CreateReplicaTarget_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishVolume_V1_4_3_CreateReplicaTarget_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**target**|RedfishCS_char| String pointer to **target** property.| No| No
|**title**|RedfishCS_char| String pointer to **title** property.| No| No


## Links
    typedef struct _RedfishVolume_V1_4_3_Links_CS {
        RedfishCS_Link ClassOfService;
        RedfishCS_Link ClientEndpoints;
        RedfishCS_int64 *ClientEndpointsodata_count;
        RedfishCS_Link ConsistencyGroups;
        RedfishCS_int64 *ConsistencyGroupsodata_count;
        RedfishCS_Link DedicatedSpareDrives;
        RedfishCS_int64 *DedicatedSpareDrivesodata_count;
        RedfishCS_Link Drives;
        RedfishCS_int64 *Drivesodata_count;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_Link OwningStorageService;
        RedfishCS_Link ServerEndpoints;
        RedfishCS_int64 *ServerEndpointsodata_count;
        RedfishCS_Link SpareResourceSets;
        RedfishCS_int64 *SpareResourceSetsodata_count;
        RedfishCS_Link StorageGroups;
        RedfishCS_int64 *StorageGroupsodata_count;
    } RedfishVolume_V1_4_3_Links_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**ClassOfService**|RedfishCS_Link| Structure link list to **ClassOfService** property.| No| Yes
|**ClientEndpoints**|RedfishCS_Link| Structure link list to **ClientEndpoints** property.| No| Yes
|**ClientEndpointsodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **ClientEndpoints@odata.count** property.| No| No
|**ConsistencyGroups**|RedfishCS_Link| Structure link list to **ConsistencyGroups** property.| No| Yes
|**ConsistencyGroupsodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **ConsistencyGroups@odata.count** property.| No| No
|**DedicatedSpareDrives**|RedfishCS_Link| Structure link list to **DedicatedSpareDrives** property.| No| No
|**DedicatedSpareDrivesodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **DedicatedSpareDrives@odata.count** property.| No| No
|**Drives**|RedfishCS_Link| Structure link list to **Drives** property.| No| Yes
|**Drivesodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **Drives@odata.count** property.| No| No
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**OwningStorageService**|RedfishCS_Link| Structure link list to **OwningStorageService** property.| No| Yes
|**ServerEndpoints**|RedfishCS_Link| Structure link list to **ServerEndpoints** property.| No| Yes
|**ServerEndpointsodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **ServerEndpoints@odata.count** property.| No| No
|**SpareResourceSets**|RedfishCS_Link| Structure link list to **SpareResourceSets** property.| No| No
|**SpareResourceSetsodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **SpareResourceSets@odata.count** property.| No| No
|**StorageGroups**|RedfishCS_Link| Structure link list to **StorageGroups** property.| No| Yes
|**StorageGroupsodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **StorageGroups@odata.count** property.| No| No


## OemActions
    typedef struct _RedfishVolume_V1_4_3_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishVolume_V1_4_3_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## Operation
    typedef struct _RedfishVolume_V1_4_3_Operation_CS {
        RedfishCS_Link AssociatedFeaturesRegistry;
        RedfishCS_char *OperationName;
        RedfishCS_int64 *PercentageComplete;
    } RedfishVolume_V1_4_3_Operation_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**AssociatedFeaturesRegistry**|RedfishCS_Link| Structure link list to **AssociatedFeaturesRegistry** property.| No| Yes
|**OperationName**|RedfishCS_char| String pointer to **OperationName** property.| No| Yes
|**PercentageComplete**|RedfishCS_int64| 64-bit long long interger pointer to **PercentageComplete** property.| No| Yes


## RemoveReplicaRelationship
    typedef struct _RedfishVolume_V1_4_3_RemoveReplicaRelationship_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishVolume_V1_4_3_RemoveReplicaRelationship_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**target**|RedfishCS_char| String pointer to **target** property.| No| No
|**title**|RedfishCS_char| String pointer to **title** property.| No| No


## ResumeReplication
    typedef struct _RedfishVolume_V1_4_3_ResumeReplication_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishVolume_V1_4_3_ResumeReplication_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**target**|RedfishCS_char| String pointer to **target** property.| No| No
|**title**|RedfishCS_char| String pointer to **title** property.| No| No


## ReverseReplicationRelationship
    typedef struct _RedfishVolume_V1_4_3_ReverseReplicationRelationship_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishVolume_V1_4_3_ReverseReplicationRelationship_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**target**|RedfishCS_char| String pointer to **target** property.| No| No
|**title**|RedfishCS_char| String pointer to **title** property.| No| No


## SplitReplication
    typedef struct _RedfishVolume_V1_4_3_SplitReplication_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishVolume_V1_4_3_SplitReplication_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**target**|RedfishCS_char| String pointer to **target** property.| No| No
|**title**|RedfishCS_char| String pointer to **title** property.| No| No


## SuspendReplication
    typedef struct _RedfishVolume_V1_4_3_SuspendReplication_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishVolume_V1_4_3_SuspendReplication_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**target**|RedfishCS_char| String pointer to **target** property.| No| No
|**title**|RedfishCS_char| String pointer to **title** property.| No| No


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



## Volume
    typedef struct _RedfishVolume_V1_4_3_Volume_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishCS_char *AccessCapabilities;
        RedfishVolume_V1_4_3_Actions_CS *Actions;
        RedfishCS_Link AllocatedPools;
        RedfishCS_int64 *BlockSizeBytes;
        RedfishCS_Link Capacity;
        RedfishCS_int64 *CapacityBytes;
        RedfishCS_Link CapacitySources;
        RedfishCS_int64 *CapacitySourcesodata_count;
        RedfishCS_bool *Compressed;
        RedfishCS_bool *Deduplicated;
        RedfishCS_char *Description;
        RedfishCS_char *DisplayName;
        RedfishCS_bool *Encrypted;
        RedfishCS_char *EncryptionTypes;
        RedfishCS_Link IOStatistics;
        RedfishCS_char *Id;
        RedfishCS_Link Identifiers;
        RedfishVolume_V1_4_3_Links_CS *Links;
        RedfishCS_int64 *LogicalUnitNumber;
        RedfishCS_int64 *LowSpaceWarningThresholdPercents;
        RedfishCS_char *Manufacturer;
        RedfishCS_int64 *MaxBlockSizeBytes;
        RedfishCS_int64 *MediaSpanCount;
        RedfishCS_char *Model;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishVolume_V1_4_3_Operation_CS *Operations;
        RedfishCS_int64 *OptimumIOSizeBytes;
        RedfishCS_char *ProvisioningPolicy;
        RedfishCS_char *RAIDType;
        RedfishCS_char *ReadCachePolicy;
        RedfishCS_int64 *RecoverableCapacitySourceCount;
        RedfishCS_int64 *RemainingCapacityPercent;
        RedfishStorageReplicaInfo_V1_3_0_ReplicaInfo_CS *ReplicaInfo;
        Redfishodatav4_idRef_CS *ReplicaTargets;
        RedfishCS_int64 *ReplicaTargetsodata_count;
        RedfishResource_Status_CS *Status;
        RedfishCS_Link StorageGroups;
        RedfishCS_int64 *StripSizeBytes;
        RedfishCS_char *VolumeType;
        RedfishCS_char *VolumeUsage;
        RedfishCS_char *WriteCachePolicy;
        RedfishCS_char *WriteCacheState;
        RedfishCS_char *WriteHoleProtectionPolicy;
    } RedfishVolume_V1_4_3_Volume_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**AccessCapabilities**|RedfishCS_char| String pointer to **AccessCapabilities** property.| No| No
|**Actions**|RedfishVolume_V1_4_3_Actions_CS| Structure points to **Actions** property.| No| No
|**AllocatedPools**|RedfishCS_Link| Structure link list to **AllocatedPools** property.| No| Yes
|**BlockSizeBytes**|RedfishCS_int64| 64-bit long long interger pointer to **BlockSizeBytes** property.| No| Yes
|**Capacity**|RedfishCS_Link| Structure link list to **Capacity** property.| No| No
|**CapacityBytes**|RedfishCS_int64| 64-bit long long interger pointer to **CapacityBytes** property.| No| No
|**CapacitySources**|RedfishCS_Link| Structure link list to **CapacitySources** property.| No| No
|**CapacitySourcesodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **CapacitySources@odata.count** property.| No| No
|**Compressed**|RedfishCS_bool| Boolean pointer to **Compressed** property.| No| No
|**Deduplicated**|RedfishCS_bool| Boolean pointer to **Deduplicated** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**DisplayName**|RedfishCS_char| String pointer to **DisplayName** property.| No| No
|**Encrypted**|RedfishCS_bool| Boolean pointer to **Encrypted** property.| No| No
|**EncryptionTypes**|RedfishCS_char| String pointer to **EncryptionTypes** property.| No| No
|**IOStatistics**|RedfishCS_Link| Structure link list to **IOStatistics** property.| No| No
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**Identifiers**|RedfishCS_Link| Structure link list to **Identifiers** property.| No| No
|**Links**|RedfishVolume_V1_4_3_Links_CS| Structure points to **Links** property.| No| No
|**LogicalUnitNumber**|RedfishCS_int64| 64-bit long long interger pointer to **LogicalUnitNumber** property.| No| Yes
|**LowSpaceWarningThresholdPercents**|RedfishCS_int64| 64-bit long long interger pointer to **LowSpaceWarningThresholdPercents** property.| No| No
|**Manufacturer**|RedfishCS_char| String pointer to **Manufacturer** property.| No| Yes
|**MaxBlockSizeBytes**|RedfishCS_int64| 64-bit long long interger pointer to **MaxBlockSizeBytes** property.| No| Yes
|**MediaSpanCount**|RedfishCS_int64| 64-bit long long interger pointer to **MediaSpanCount** property.| No| Yes
|**Model**|RedfishCS_char| String pointer to **Model** property.| No| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**Operations**|RedfishVolume_V1_4_3_Operation_CS| Structure points to **Operations** property.| No| No
|**OptimumIOSizeBytes**|RedfishCS_int64| 64-bit long long interger pointer to **OptimumIOSizeBytes** property.| No| Yes
|**ProvisioningPolicy**|RedfishCS_char| String pointer to **ProvisioningPolicy** property.| No| No
|**RAIDType**|RedfishCS_char| String pointer to **RAIDType** property.| No| Yes
|**ReadCachePolicy**|RedfishCS_char| String pointer to **ReadCachePolicy** property.| No| No
|**RecoverableCapacitySourceCount**|RedfishCS_int64| 64-bit long long interger pointer to **RecoverableCapacitySourceCount** property.| No| No
|**RemainingCapacityPercent**|RedfishCS_int64| 64-bit long long interger pointer to **RemainingCapacityPercent** property.| No| Yes
|**ReplicaInfo**|RedfishStorageReplicaInfo_V1_3_0_ReplicaInfo_CS| Structure points to **ReplicaInfo** property.| No| No
|**ReplicaTargets**|Redfishodatav4_idRef_CS| Structure points to **ReplicaTargets** property.| No| Yes
|**ReplicaTargetsodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **ReplicaTargets@odata.count** property.| No| No
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
|**StorageGroups**|RedfishCS_Link| Structure link list to **StorageGroups** property.| No| Yes
|**StripSizeBytes**|RedfishCS_int64| 64-bit long long interger pointer to **StripSizeBytes** property.| No| No
|**VolumeType**|RedfishCS_char| String pointer to **VolumeType** property.| No| Yes
|**VolumeUsage**|RedfishCS_char| String pointer to **VolumeUsage** property.| No| Yes
|**WriteCachePolicy**|RedfishCS_char| String pointer to **WriteCachePolicy** property.| No| No
|**WriteCacheState**|RedfishCS_char| String pointer to **WriteCacheState** property.| No| Yes
|**WriteHoleProtectionPolicy**|RedfishCS_char| String pointer to **WriteHoleProtectionPolicy** property.| No| No
## Redfish Volume V1_4_3 to C Structure Function
    RedfishCS_status
    Json_Volume_V1_4_3_To_CS (RedfishCS_char *JsonRawText, RedfishVolume_V1_4_3_Volume_CS **ReturnedCS);

## C Structure to Redfish Volume V1_4_3 JSON Function
    RedfishCS_status
    CS_To_Volume_V1_4_3_JSON (RedfishVolume_V1_4_3_Volume_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish Volume V1_4_3 C Structure Function
    RedfishCS_status
    DestroyVolume_V1_4_3_CS (RedfishVolume_V1_4_3_Volume_CS *CSPtr);

