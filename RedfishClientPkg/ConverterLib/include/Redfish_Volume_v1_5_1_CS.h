//
// Auto-generated file by Redfish Schema C Structure Generator.
// https://github.com/DMTF/Redfish-Schema-C-Struct-Generator.
//
//  (C) Copyright 2019-2021 Hewlett Packard Enterprise Development LP<BR>
//
// Copyright Notice:
// Copyright 2019-2021 Distributed Management Task Force, Inc. All rights reserved.
// License: BSD 3-Clause License. For full text see link: https://github.com/DMTF/Redfish-JSON-C-Struct-Converter/blob/master/LICENSE.md
//

#ifndef RedfishVolume_V1_5_1_CSTRUCT_H_
#define RedfishVolume_V1_5_1_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_CS_
#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishResource_Condition_CS RedfishResource_Condition_CS;
#endif

#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

#ifndef RedfishResource_Status_CS_
typedef struct _RedfishResource_Status_CS RedfishResource_Status_CS;
#endif

#ifndef RedfishStorageReplicaInfo_V1_3_0_ReplicaInfo_CS_
typedef struct _RedfishStorageReplicaInfo_V1_3_0_ReplicaInfo_CS RedfishStorageReplicaInfo_V1_3_0_ReplicaInfo_CS;
#endif

typedef struct _RedfishVolume_V1_5_1_Actions_CS RedfishVolume_V1_5_1_Actions_CS;
typedef struct _RedfishVolume_V1_5_1_AssignReplicaTarget_CS RedfishVolume_V1_5_1_AssignReplicaTarget_CS;
typedef struct _RedfishVolume_V1_5_1_ChangeRAIDLayout_CS RedfishVolume_V1_5_1_ChangeRAIDLayout_CS;
typedef struct _RedfishVolume_V1_5_1_CheckConsistency_CS RedfishVolume_V1_5_1_CheckConsistency_CS;
typedef struct _RedfishVolume_V1_5_1_CreateReplicaTarget_CS RedfishVolume_V1_5_1_CreateReplicaTarget_CS;
typedef struct _RedfishVolume_V1_5_1_ForceEnable_CS RedfishVolume_V1_5_1_ForceEnable_CS;
typedef struct _RedfishVolume_V1_5_1_Initialize_CS RedfishVolume_V1_5_1_Initialize_CS;
typedef struct _RedfishVolume_V1_5_1_Links_CS RedfishVolume_V1_5_1_Links_CS;
typedef struct _RedfishVolume_V1_5_1_NVMeNamespaceProperties_CS RedfishVolume_V1_5_1_NVMeNamespaceProperties_CS;
typedef struct _RedfishVolume_V1_5_1_NamespaceFeatures_CS RedfishVolume_V1_5_1_NamespaceFeatures_CS;
typedef struct _RedfishVolume_V1_5_1_OemActions_CS RedfishVolume_V1_5_1_OemActions_CS;
typedef struct _RedfishVolume_V1_5_1_Operation_CS RedfishVolume_V1_5_1_Operation_CS;
typedef struct _RedfishVolume_V1_5_1_RemoveReplicaRelationship_CS RedfishVolume_V1_5_1_RemoveReplicaRelationship_CS;
typedef struct _RedfishVolume_V1_5_1_ResumeReplication_CS RedfishVolume_V1_5_1_ResumeReplication_CS;
typedef struct _RedfishVolume_V1_5_1_ReverseReplicationRelationship_CS RedfishVolume_V1_5_1_ReverseReplicationRelationship_CS;
typedef struct _RedfishVolume_V1_5_1_SplitReplication_CS RedfishVolume_V1_5_1_SplitReplication_CS;
typedef struct _RedfishVolume_V1_5_1_SuspendReplication_CS RedfishVolume_V1_5_1_SuspendReplication_CS;
typedef struct _RedfishVolume_V1_5_1_Volume_CS RedfishVolume_V1_5_1_Volume_CS;
#ifndef Redfishodatav4_idRef_CS_
typedef struct _Redfishodatav4_idRef_CS Redfishodatav4_idRef_CS;
#endif

//
// A condition that requires attention.
//
#ifndef RedfishResource_Condition_CS_
#define RedfishResource_Condition_CS_
typedef struct _RedfishResource_Condition_CS {
    RedfishCS_Link             LogEntry;             // The link to the log entry
                                                     // created for this condition.
    RedfishCS_char             *Message;             // The human-readable message for
                                                     // this condition.
    RedfishCS_char_Array       *MessageArgs;         // An array of message arguments
                                                     // that are substituted for the
                                                     // arguments in the message when
                                                     // looked up in the message
                                                     // registry.
    RedfishCS_char             *MessageId;           // The identifier for the
                                                     // message.
    Redfishodatav4_idRef_CS    *OriginOfCondition;    // A link to the resource or
                                                     // object that originated the
                                                     // condition.
    RedfishCS_char             *Severity;            // The severity of the condition.
    RedfishCS_char             *Timestamp;           // The time the condition
                                                     // occurred.
} RedfishResource_Condition_CS;
#endif

//
// The OEM extension.
//
#ifndef RedfishResource_Oem_CS_
#define RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS {
    RedfishCS_Link    Prop;
} RedfishResource_Oem_CS;
#endif

//
// The status and health of a resource and its children.
//
#ifndef RedfishResource_Status_CS_
#define RedfishResource_Status_CS_
typedef struct _RedfishResource_Status_CS {
    RedfishResource_Condition_Array_CS    *Conditions;     // Conditions in this resource
                                                           // that require attention.
    RedfishCS_char                        *Health;         // The health state of this
                                                           // resource in the absence of its
                                                           // dependent resources.
    RedfishCS_char                        *HealthRollup;    // The overall health state from
                                                           // the view of this resource.
    RedfishResource_Oem_CS                *Oem;            // The OEM extension property.
    RedfishCS_char                        *State;          // The known state of the
                                                           // resource, such as, enabled.
} RedfishResource_Status_CS;
#endif

//
// Defines the characteristics of a replica.
//
#ifndef RedfishStorageReplicaInfo_V1_3_0_ReplicaInfo_CS_
#define RedfishStorageReplicaInfo_V1_3_0_ReplicaInfo_CS_
typedef struct _RedfishStorageReplicaInfo_V1_3_0_ReplicaInfo_CS {
    RedfishCS_bool             *ConsistencyEnabled;           // True if consistency is
                                                              // enabled.
    RedfishCS_char             *ConsistencyState;             // The current state of
                                                              // consistency.
    RedfishCS_char             *ConsistencyStatus;            // The current status of
                                                              // consistency.
    RedfishCS_char             *ConsistencyType;              // Indicates the consistency type
                                                              // used by the source and its
                                                              // associated target group.
    RedfishCS_Link             DataProtectionLineOfService;    // A pointer to the
                                                              // DataProtection line of service
                                                              // element that describes this
                                                              // replica.
    RedfishCS_bool             *FailedCopyStopsHostIO;        // If true, the storage array
                                                              // tells host to stop sending
                                                              // data to source element if
                                                              // copying to a remote element
                                                              // fails.
    RedfishCS_int64            *PercentSynced;                // Specifies the percent of the
                                                              // work completed to reach
                                                              // synchronization.
    Redfishodatav4_idRef_CS    *Replica;                      // Deprecated - Use Source
                                                              // Replica. The resource that is
                                                              // the source of this replica.
    RedfishCS_char             *ReplicaFaultDomain;           // ReplicaFaultDomain describes
                                                              // the fault domain (local or
                                                              // remote) of the replica
                                                              // relationship.
    RedfishCS_char             *ReplicaPriority;              // The priority of background
                                                              // copy engine I/O to be managed
                                                              // relative to host I/O
                                                              // operations during a sequential
                                                              // background copy operation.
    RedfishCS_char             *ReplicaProgressStatus;        // The status of the session with
                                                              // respect to Replication
                                                              // activity.
    RedfishCS_char             *ReplicaReadOnlyAccess;        // This property specifies
                                                              // whether the source, the
                                                              // target, or both elements are
                                                              // read only to the host.
    RedfishCS_char             *ReplicaRecoveryMode;          // Describes whether the copy
                                                              // operation continues after a
                                                              // broken link is restored.
    RedfishCS_char             *ReplicaRole;                  // The source or target role of
                                                              // this replica.
    RedfishCS_int64            *ReplicaSkewBytes;             // Applies to Adaptive mode and
                                                              // it describes maximum number of
                                                              // bytes the SyncedElement
                                                              // (target) can be out of sync.
    RedfishCS_char             *ReplicaState;                 // ReplicaState describes the
                                                              // state of the relationship with
                                                              // respect to Replication
                                                              // activity.
    RedfishCS_char             *ReplicaType;                  // ReplicaType describes the
                                                              // intended outcome of the
                                                              // replication.
    RedfishCS_char             *ReplicaUpdateMode;            // Describes whether the target
                                                              // elements will be updated
                                                              // synchronously or
                                                              // asynchronously.
    RedfishCS_char             *RequestedReplicaState;        // The last requested or desired
                                                              // state for the relationship.
    Redfishodatav4_idRef_CS    *SourceReplica;                // The resource that is the
                                                              // source of this replica.
    RedfishCS_bool             *SyncMaintained;               // Synchronization is maintained.
    RedfishCS_char             *UndiscoveredElement;          // This property specifies
                                                              // whether the source, the
                                                              // target, or both elements
                                                              // involved in a copy operation
                                                              // are undiscovered.
    RedfishCS_char             *WhenActivated;                // Specifies when point-in-time
                                                              // copy was taken or when the
                                                              // replication relationship is
                                                              // activated, reactivated,
                                                              // resumed or re-established.
    RedfishCS_char             *WhenDeactivated;              // Specifies when the replication
                                                              // relationship is deactivated.
    RedfishCS_char             *WhenEstablished;              // Specifies when the replication
                                                              // relationship is established.
    RedfishCS_char             *WhenSuspended;                // Specifies when the replication
                                                              // relationship is suspended.
    RedfishCS_char             *WhenSynced;                   // The point in time that the
                                                              // Elements were synchronized.
    RedfishCS_char             *WhenSynchronized;             // Specifies when the replication
                                                              // relationship is synchronized.
} RedfishStorageReplicaInfo_V1_3_0_ReplicaInfo_CS;
#endif

typedef struct _RedfishVolume_V1_5_1_Actions_CS {
    RedfishVolume_V1_5_1_AssignReplicaTarget_CS               *Volume_AssignReplicaTarget;          
    RedfishVolume_V1_5_1_ChangeRAIDLayout_CS                  *Volume_ChangeRAIDLayout;             
    RedfishVolume_V1_5_1_CheckConsistency_CS                  *Volume_CheckConsistency;             
    RedfishVolume_V1_5_1_CreateReplicaTarget_CS               *Volume_CreateReplicaTarget;          
    RedfishVolume_V1_5_1_ForceEnable_CS                       *Volume_ForceEnable;                  
    RedfishVolume_V1_5_1_Initialize_CS                        *Volume_Initialize;                   
    RedfishVolume_V1_5_1_RemoveReplicaRelationship_CS         *Volume_RemoveReplicaRelationship;    
    RedfishVolume_V1_5_1_ResumeReplication_CS                 *Volume_ResumeReplication;            
    RedfishVolume_V1_5_1_ReverseReplicationRelationship_CS    *Volume_ReverseReplicationRelationship;
    RedfishVolume_V1_5_1_SplitReplication_CS                  *Volume_SplitReplication;             
    RedfishVolume_V1_5_1_SuspendReplication_CS                *Volume_SuspendReplication;           
    RedfishVolume_V1_5_1_OemActions_CS                        *Oem;                                 
} RedfishVolume_V1_5_1_Actions_CS;

//
// This action is used to establish a replication relationship by assigning an
// existing volume to serve as a target replica for an existing source volume.
//
typedef struct _RedfishVolume_V1_5_1_AssignReplicaTarget_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishVolume_V1_5_1_AssignReplicaTarget_CS;

//
// Request system change the RAID layout of the volume.
//
typedef struct _RedfishVolume_V1_5_1_ChangeRAIDLayout_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishVolume_V1_5_1_ChangeRAIDLayout_CS;

//
// This action is used to force a check of the Volume's parity or redundant data
// to ensure it matches calculated values.
//
typedef struct _RedfishVolume_V1_5_1_CheckConsistency_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishVolume_V1_5_1_CheckConsistency_CS;

//
// This action is used to create a new volume resource to provide expanded data
// protection through a replica relationship with the specified source volume.
//
typedef struct _RedfishVolume_V1_5_1_CreateReplicaTarget_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishVolume_V1_5_1_CreateReplicaTarget_CS;

//
// Request system force the volume to an enabled state regardless of data loss.
//
typedef struct _RedfishVolume_V1_5_1_ForceEnable_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishVolume_V1_5_1_ForceEnable_CS;

//
// This action is used to prepare the contents of the volume for use by the
// system. If InitializeMethod is not specified in the request body, but the
// property InitializeMethod is specified, the property InitializeMethod value
// should be used. If neither is specified, the InitializeMethod should be
// Foreground.
//
typedef struct _RedfishVolume_V1_5_1_Initialize_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishVolume_V1_5_1_Initialize_CS;

//
// Add ability to manage spare capacity.
//
typedef struct _RedfishVolume_V1_5_1_Links_CS {
    RedfishCS_Link            ClassOfService;                     // The ClassOfService that this
                                                                  // storage volume conforms to.
    RedfishCS_Link            ClientEndpoints;                    // An array of references to the
                                                                  // client Endpoints associated
                                                                  // with this volume.
    RedfishCS_int64           *ClientEndpointsodata_count;    
    RedfishCS_Link            ConsistencyGroups;                  // An array of references to the
                                                                  // ConsistencyGroups associated
                                                                  // with this volume.
    RedfishCS_int64           *ConsistencyGroupsodata_count;  
    RedfishCS_Link            DedicatedSpareDrives;               // An array of references to the
                                                                  // drives which are dedicated
                                                                  // spares for this volume.
    RedfishCS_int64           *DedicatedSpareDrivesodata_count;
    RedfishCS_Link            Drives;                             // An array of references to the
                                                                  // drives which contain this
                                                                  // volume. This will reference
                                                                  // Drives that either wholly or
                                                                  // only partly contain this
                                                                  // volume.
    RedfishCS_int64           *Drivesodata_count;             
    RedfishCS_Link            JournalingMedia;                    // A pointer to the Resource that
                                                                  // serves as a journaling media
                                                                  // for this volume.
    RedfishResource_Oem_CS    *Oem;                               // The OEM extension property.
    RedfishCS_Link            OwningStorageResource;              // A pointer to the Storage
                                                                  // resource that owns or contains
                                                                  // this volume.
    RedfishCS_Link            OwningStorageService;               // A pointer to the
                                                                  // StorageService that owns or
                                                                  // contains this volume.
    RedfishCS_Link            ServerEndpoints;                    // An array of references to the
                                                                  // server Endpoints associated
                                                                  // with this volume.
    RedfishCS_int64           *ServerEndpointsodata_count;    
    RedfishCS_Link            SpareResourceSets;                  // An array of references to
                                                                  // SpareResourceSets.
    RedfishCS_int64           *SpareResourceSetsodata_count;  
    RedfishCS_Link            StorageGroups;                      // An array of references to the
                                                                  // StorageGroups associated with
                                                                  // this volume.
    RedfishCS_int64           *StorageGroupsodata_count;      
} RedfishVolume_V1_5_1_Links_CS;

//
// This contains properties to use when Volume is used to describe an NVMe
// Namespace.
//
typedef struct _RedfishVolume_V1_5_1_NVMeNamespaceProperties_CS {
    RedfishCS_char                               *FormattedLBASize;                    // The LBA data size and metadata
                                                                                       // size combination that the
                                                                                       // namespace has been formatted
                                                                                       // with.
    RedfishCS_bool                               *IsShareable;                         // Indicates the namespace is
                                                                                       // shareable.
    RedfishCS_bool                               *MetadataTransferredAtEndOfDataLBA;    // This property indicates
                                                                                       // whether or not the metadata is
                                                                                       // transferred at the end of the
                                                                                       // LBA creating an extended data
                                                                                       // LBA.
    RedfishCS_char                               *NVMeVersion;                         // The version of the NVMe Base
                                                                                       // Specification supported.
    RedfishVolume_V1_5_1_NamespaceFeatures_CS    *NamespaceFeatures;                   // This property contains a set
                                                                                       // of Namespace Features.
    RedfishCS_char                               *NamespaceId;                         // The NVMe Namespace Identifier
                                                                                       // for this namespace.
    RedfishCS_int64                              *NumberLBAFormats;                    // The number of LBA data size
                                                                                       // and metadata size combinations
                                                                                       // supported by this namespace.
                                                                                       // The value of this property is
                                                                                       // between 0 and 16.
} RedfishVolume_V1_5_1_NVMeNamespaceProperties_CS;

typedef struct _RedfishVolume_V1_5_1_NamespaceFeatures_CS {
    RedfishCS_bool    *SupportsAtomicTransactionSize;           // Indicates that the NVM fields
                                                                // for Namespace preferred write
                                                                // granularity (NPWG), write
                                                                // alignment (NPWA), deallocate
                                                                // granularity (NPDG), deallocate
                                                                // alignment (NPDA) and optimimal
                                                                // write size (NOWS)  are defined
                                                                // for this namespace and should
                                                                // be used by the host for I/O
                                                                // optimization.
    RedfishCS_bool    *SupportsDeallocatedOrUnwrittenLBError;    // This property indicates that
                                                                // the controller supports
                                                                // deallocated or unwritten
                                                                // logical block error for this
                                                                // namespace.
    RedfishCS_bool    *SupportsIOPerformanceHints;              // Indicates that the Namespace
                                                                // Atomic Write Unit Normal
                                                                // (NAWUN), Namespace Atomic
                                                                // Write Unit Power Fail
                                                                // (NAWUPF), and Namespace Atomic
                                                                // Compare and Write Unit (NACWU)
                                                                // fields are defined for this
                                                                // namespace and should be used
                                                                // by the host for this namespace
                                                                // instead of the controller-
                                                                // level properties AWUN, AWUPF,
                                                                // and ACWU.
    RedfishCS_bool    *SupportsNGUIDReuse;                      // This property indicates that
                                                                // the namespace supports the use
                                                                // of an NGUID (namespace
                                                                // globally unique identifier)
                                                                // value.
    RedfishCS_bool    *SupportsThinProvisioning;                // This property indicates
                                                                // whether or not the NVMe
                                                                // Namespace supports thin
                                                                // provisioning.
} RedfishVolume_V1_5_1_NamespaceFeatures_CS;

typedef struct _RedfishVolume_V1_5_1_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishVolume_V1_5_1_OemActions_CS;

typedef struct _RedfishVolume_V1_5_1_Operation_CS {
    RedfishCS_Link     AssociatedFeaturesRegistry;    // A reference to the task
                                                     // associated with the operation
                                                     // if any.
    RedfishCS_char     *OperationName;               // The name of the operation.
    RedfishCS_int64    *PercentageComplete;          // The percentage of the
                                                     // operation that has been
                                                     // completed.
} RedfishVolume_V1_5_1_Operation_CS;

//
// This action is used to disable data synchronization between a source and target
// volume, remove the replication relationship, and optionally delete the target
// volume.
//
typedef struct _RedfishVolume_V1_5_1_RemoveReplicaRelationship_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishVolume_V1_5_1_RemoveReplicaRelationship_CS;

//
// This action is used to resume the active data synchronization between a source
// and target volume, without otherwise altering the replication relationship.
//
typedef struct _RedfishVolume_V1_5_1_ResumeReplication_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishVolume_V1_5_1_ResumeReplication_CS;

//
// This action is used to reverse the replication relationship between a source
// and target volume.
//
typedef struct _RedfishVolume_V1_5_1_ReverseReplicationRelationship_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishVolume_V1_5_1_ReverseReplicationRelationship_CS;

//
// This action is used to split the replication relationship and suspend data
// synchronization between a source and target volume.
//
typedef struct _RedfishVolume_V1_5_1_SplitReplication_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishVolume_V1_5_1_SplitReplication_CS;

//
// This action is used to suspend active data synchronization between a source and
// target volume, without otherwise altering the replication relationship.
//
typedef struct _RedfishVolume_V1_5_1_SuspendReplication_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishVolume_V1_5_1_SuspendReplication_CS;

//
// A reference to a resource.
//
#ifndef Redfishodatav4_idRef_CS_
#define Redfishodatav4_idRef_CS_
typedef struct _Redfishodatav4_idRef_CS {
    RedfishCS_char    *odata_id;
} Redfishodatav4_idRef_CS;
#endif

//
// Volume contains properties used to describe a volume, virtual disk, LUN, or
// other logical storage entity for any system.
//
typedef struct _RedfishVolume_V1_5_1_Volume_CS {
    RedfishCS_Header                                   Header;
    RedfishCS_char                                     *odata_context;                  
    RedfishCS_char                                     *odata_etag;                     
    RedfishCS_char                                     *odata_id;                       
    RedfishCS_char                                     *odata_type;                     
    RedfishCS_char                                     *AccessCapabilities;                 // Supported IO access
                                                                                            // capabilities.
    RedfishVolume_V1_5_1_Actions_CS                    *Actions;                            // The available actions for this
                                                                                            // resource.
    RedfishCS_Link                                     AllocatedPools;                      // An array of references to
                                                                                            // StoragePools allocated from
                                                                                            // this Volume.
    RedfishCS_int64                                    *BlockSizeBytes;                     // The size of the smallest
                                                                                            // addressable unit (Block) of
                                                                                            // this volume in bytes.
    RedfishCS_Link                                     Capacity;                            // Capacity utilization.
    RedfishCS_int64                                    *CapacityBytes;                      // The size in bytes of this
                                                                                            // Volume.
    RedfishCS_Link                                     CapacitySources;                     // An array of space allocations
                                                                                            // to this volume.
    RedfishCS_int64                                    *CapacitySourcesodata_count;     
    RedfishCS_bool                                     *Compressed;                         // Indicator of whether or not
                                                                                            // the Volume has compression
                                                                                            // enabled.
    RedfishCS_bool                                     *Deduplicated;                       // Indicator of whether or not
                                                                                            // the Volume has deduplication
                                                                                            // enabled.
    RedfishCS_char                                     *Description;                    
    RedfishCS_char                                     *DisplayName;                        // A user-configurable string to
                                                                                            // name the volume.
    RedfishCS_bool                                     *Encrypted;                          // Is this Volume encrypted.
    RedfishCS_char                                     *EncryptionTypes;                    // The types of encryption used
                                                                                            // by this Volume.
    RedfishCS_bool                                     *IOPerfModeEnabled;                  // Indicates the IO performance
                                                                                            // mode setting for the volume.
    RedfishCS_Link                                     IOStatistics;                        // Statistics for this volume.
    RedfishCS_char                                     *Id;                             
    RedfishCS_Link                                     Identifiers;                         // The Durable names for the
                                                                                            // volume.
    RedfishVolume_V1_5_1_Links_CS                      *Links;                              // Contains references to other
                                                                                            // resources that are related to
                                                                                            // this resource.
    RedfishCS_int64                                    *LogicalUnitNumber;                  // Indicates the host-visible
                                                                                            // LogicalUnitNumber assigned to
                                                                                            // this Volume.
    RedfishCS_int64                                    *LowSpaceWarningThresholdPercents;    // Low space warning.
    RedfishCS_char                                     *Manufacturer;                       // The manufacturer or OEM of
                                                                                            // this storage volume.
    RedfishCS_int64                                    *MaxBlockSizeBytes;                  // Max Block size in bytes.
    RedfishCS_int64                                    *MediaSpanCount;                     // Indicates the number of media
                                                                                            // elements used per span in the
                                                                                            // secondary RAID for a
                                                                                            // hierarchical RAID type.
    RedfishCS_char                                     *Model;                              // The model number for this
                                                                                            // storage volume.
    RedfishVolume_V1_5_1_NVMeNamespaceProperties_CS    *NVMeNamespaceProperties;            // This property contains
                                                                                            // properties to use when Volume
                                                                                            // is used to describe an NVMe
                                                                                            // Namespace.
    RedfishCS_char                                     *Name;                           
    RedfishResource_Oem_CS                             *Oem;                                // The OEM extension property.
    RedfishVolume_V1_5_1_Operation_CS                  *Operations;                         // The operations currently
                                                                                            // running on the Volume.
    RedfishCS_int64                                    *OptimumIOSizeBytes;                 // The size in bytes of this
                                                                                            // Volume's optimum IO size.
    RedfishCS_char                                     *ProvisioningPolicy;                 // This property specifies the
                                                                                            // volume's storage allocation,
                                                                                            // or provisioning policy.
    RedfishCS_char                                     *RAIDType;                           // The RAID type of this volume.
    RedfishCS_char                                     *ReadCachePolicy;                    // Indicates the read cache
                                                                                            // policy setting for the Volume.
    RedfishCS_int64                                    *RecoverableCapacitySourceCount;     // Current number of capacity
                                                                                            // source resources that are
                                                                                            // available as replacements.
    RedfishCS_int64                                    *RemainingCapacityPercent;           // The percentage of the capacity
                                                                                            // remaining in the Volume.
    RedfishStorageReplicaInfo_V1_3_0_ReplicaInfo_CS    *ReplicaInfo;                        // Describes this storage volume
                                                                                            // in its role as a target
                                                                                            // replica.
    Redfishodatav4_idRef_CS                            *ReplicaTargets;                     // The resources that are target
                                                                                            // replicas of this source.
    RedfishCS_int64                                    *ReplicaTargetsodata_count;      
    RedfishResource_Status_CS                          *Status;                             // The property contains the
                                                                                            // status of the Volume.
    RedfishCS_Link                                     StorageGroups;                       // An array of references to
                                                                                            // Storage Groups that includes
                                                                                            // this volume.
    RedfishCS_int64                                    *StripSizeBytes;                     // The number of blocks (bytes)
                                                                                            // in a strip in a disk array
                                                                                            // that uses striped data
                                                                                            // mapping.
    RedfishCS_char                                     *VolumeType;                         // The type of this volume.
    RedfishCS_char                                     *VolumeUsage;                        // Indicates the Volume usage
                                                                                            // type setting for the Volume.
    RedfishCS_char                                     *WriteCachePolicy;                   // Indicates the write cache
                                                                                            // policy setting for the Volume.
    RedfishCS_char                                     *WriteCacheState;                    // Indicates the WriteCacheState
                                                                                            // policy setting for the Volume.
    RedfishCS_char                                     *WriteHoleProtectionPolicy;          // The policy that the RAID
                                                                                            // volume is using to address the
                                                                                            // write hole issue.
} RedfishVolume_V1_5_1_Volume_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

RedfishCS_status
Json_Volume_V1_5_1_To_CS (char *JsonRawText, RedfishVolume_V1_5_1_Volume_CS **ReturnedCS);

RedfishCS_status
CS_To_Volume_V1_5_1_JSON (RedfishVolume_V1_5_1_Volume_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyVolume_V1_5_1_CS (RedfishVolume_V1_5_1_Volume_CS *CSPtr);

RedfishCS_status
DestroyVolume_V1_5_1_Json (RedfishCS_char *JsonText);

#endif
