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

#ifndef RedfishStoragecontroller_V1_0_1_CSTRUCT_H_
#define RedfishStoragecontroller_V1_0_1_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_CS_
#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishStorageController_V1_0_1_ANACharacteristics_Array_CS RedfishStorageController_V1_0_1_ANACharacteristics_Array_CS;
typedef struct _RedfishResource_Condition_CS RedfishResource_Condition_CS;
#endif

#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

#ifndef RedfishResource_Status_CS_
typedef struct _RedfishResource_Status_CS RedfishResource_Status_CS;
#endif

typedef struct _RedfishStorageController_V1_0_1_ANACharacteristics_CS RedfishStorageController_V1_0_1_ANACharacteristics_CS;
typedef struct _RedfishStorageController_V1_0_1_Actions_CS RedfishStorageController_V1_0_1_Actions_CS;
typedef struct _RedfishStorageController_V1_0_1_CacheSummary_CS RedfishStorageController_V1_0_1_CacheSummary_CS;
typedef struct _RedfishStorageController_V1_0_1_Links_CS RedfishStorageController_V1_0_1_Links_CS;
typedef struct _RedfishStorageController_V1_0_1_NVMeControllerAttributes_CS RedfishStorageController_V1_0_1_NVMeControllerAttributes_CS;
typedef struct _RedfishStorageController_V1_0_1_NVMeControllerProperties_CS RedfishStorageController_V1_0_1_NVMeControllerProperties_CS;
typedef struct _RedfishStorageController_V1_0_1_NVMeSMARTCriticalWarnings_CS RedfishStorageController_V1_0_1_NVMeSMARTCriticalWarnings_CS;
typedef struct _RedfishStorageController_V1_0_1_OemActions_CS RedfishStorageController_V1_0_1_OemActions_CS;
typedef struct _RedfishStorageController_V1_0_1_Rates_CS RedfishStorageController_V1_0_1_Rates_CS;
typedef struct _RedfishStorageController_V1_0_1_StorageController_CS RedfishStorageController_V1_0_1_StorageController_CS;
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
// The ANA characteristics and volume information for a storage controller.
//
typedef struct _RedfishStorageController_V1_0_1_ANACharacteristics_CS {
    RedfishCS_char    *AccessState;    // Reported ANA access state.
    RedfishCS_Link    Volume;         // The specified volume.
} RedfishStorageController_V1_0_1_ANACharacteristics_CS;

//
// The available actions for this resource.
//
typedef struct _RedfishStorageController_V1_0_1_Actions_CS {
    RedfishStorageController_V1_0_1_OemActions_CS    *Oem;    // The available OEM-specific
                                                             // actions for this resource.
} RedfishStorageController_V1_0_1_Actions_CS;

//
// This type describes the cache memory of the storage controller in general
// detail.
//
typedef struct _RedfishStorageController_V1_0_1_CacheSummary_CS {
    RedfishCS_int64              *PersistentCacheSizeMiB;    // The portion of the cache
                                                            // memory that is persistent,
                                                            // measured in MiB.
    RedfishResource_Status_CS    *Status;                   // The status and health of the
                                                            // resource and its subordinate
                                                            // or dependent resources.
    RedfishCS_int64              *TotalCacheSizeMiB;        // The total configured cache
                                                            // memory, measured in MiB.
} RedfishStorageController_V1_0_1_CacheSummary_CS;

//
// The links to other resources that are related to this resource.
//
typedef struct _RedfishStorageController_V1_0_1_Links_CS {
    RedfishCS_Link            AttachedVolumes;               // An array of links to volumes
                                                             // that are attached to this
                                                             // controller instance.
    RedfishCS_int64           *AttachedVolumesodata_count;
    RedfishCS_Link            Endpoints;                     // An array of links to the
                                                             // endpoints that connect to this
                                                             // controller.
    RedfishCS_int64           *Endpointsodata_count;     
    RedfishResource_Oem_CS    *Oem;                          // The OEM extension property.
    RedfishCS_Link            PCIeFunctions;                 // An array of links to the PCIe
                                                             // functions that the storage
                                                             // controller produces.
    RedfishCS_int64           *PCIeFunctionsodata_count; 
} RedfishStorageController_V1_0_1_Links_CS;

//
// The NVMe controller attributes for a storage controller.
//
typedef struct _RedfishStorageController_V1_0_1_NVMeControllerAttributes_CS {
    RedfishCS_bool    *ReportsNamespaceGranularity;                   // Indicates whether or not the
                                                                      // controller supports reporting
                                                                      // of Namespace Granularity.
    RedfishCS_bool    *ReportsUUIDList;                               // Indicates whether or not the
                                                                      // controller supports reporting
                                                                      // of a UUID list.
    RedfishCS_bool    *Supports128BitHostId;                          // Indicates whether or not the
                                                                      // controller supports a 128-bit
                                                                      // Host Identifier.
    RedfishCS_bool    *SupportsEnduranceGroups;                       // Indicates whether or not the
                                                                      // controller supports Endurance
                                                                      // Groups.
    RedfishCS_bool    *SupportsExceedingPowerOfNonOperationalState;    // Indicates whether or not the
                                                                      // controller supports exceeding
                                                                      // Power of Non-Operational State
                                                                      // in order to execute controller
                                                                      // initiated background
                                                                      // operations in a non-
                                                                      // operational power state.
    RedfishCS_bool    *SupportsNVMSets;                               // Indicates whether or not the
                                                                      // controller supports NVM Sets.
    RedfishCS_bool    *SupportsPredictableLatencyMode;                // Indicates whether or not the
                                                                      // controller supports
                                                                      // Predictable Latency Mode.
    RedfishCS_bool    *SupportsReadRecoveryLevels;                    // Indicates whether or not the
                                                                      // controller supports Read
                                                                      // Recovery Levels.
    RedfishCS_bool    *SupportsSQAssociations;                        // Indicates whether or not the
                                                                      // controller supports SQ
                                                                      // Associations.
    RedfishCS_bool    *SupportsTrafficBasedKeepAlive;                 // Indicates whether or not the
                                                                      // controller supports restarting
                                                                      // Keep Alive Timer if traffic is
                                                                      // processed from an admin
                                                                      // command or IO during a Keep
                                                                      // Alive Timeout interval.
} RedfishStorageController_V1_0_1_NVMeControllerAttributes_CS;

//
// NVMe related properties for a storage controller.
//
typedef struct _RedfishStorageController_V1_0_1_NVMeControllerProperties_CS {
    RedfishStorageController_V1_0_1_ANACharacteristics_Array_CS     *ANACharacteristics;          // The ANA characteristics and
                                                                                                  // volume information.
    RedfishCS_char                                                  *ControllerType;              // The type of NVMe controller.
    RedfishCS_int64                                                 *MaxQueueSize;                // The maximum individual queue
                                                                                                  // size that an NVMe IO
                                                                                                  // controller supports.
    RedfishStorageController_V1_0_1_NVMeControllerAttributes_CS     *NVMeControllerAttributes;    // The NVMe controller
                                                                                                  // attributes.
    RedfishStorageController_V1_0_1_NVMeSMARTCriticalWarnings_CS    *NVMeSMARTCriticalWarnings;    // The NVMe SMART Critical
                                                                                                  // Warnings for this storage
                                                                                                  // controller.  This property
                                                                                                  // contains possible triggers for
                                                                                                  // the predictive drive failure
                                                                                                  // warning for the corresponding
                                                                                                  // drive.
    RedfishCS_char                                                  *NVMeVersion;                 // The version of the NVMe Base
                                                                                                  // Specification supported.
} RedfishStorageController_V1_0_1_NVMeControllerProperties_CS;

//
// The NVMe SMART Critical Warnings for a storage controller.
//
typedef struct _RedfishStorageController_V1_0_1_NVMeSMARTCriticalWarnings_CS {
    RedfishCS_bool    *MediaInReadOnly;            // Indicates the media has been
                                                   // placed in read only mode.
    RedfishCS_bool    *OverallSubsystemDegraded;    // Indicates that the NVM
                                                   // subsystem reliability has been
                                                   // compromised.
    RedfishCS_bool    *PMRUnreliable;              // The Persistent Memory Region
                                                   // has become unreliable.
    RedfishCS_bool    *PowerBackupFailed;          // Indicates that the volatile
                                                   // memory backup device has
                                                   // failed.
    RedfishCS_bool    *SpareCapacityWornOut;       // Indicates that the available
                                                   // spare capacity has fallen
                                                   // below the threshold.
} RedfishStorageController_V1_0_1_NVMeSMARTCriticalWarnings_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishStorageController_V1_0_1_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishStorageController_V1_0_1_OemActions_CS;

//
// This type describes the various controller rates used for processes such as
// volume rebuild or consistency checks.
//
typedef struct _RedfishStorageController_V1_0_1_Rates_CS {
    RedfishCS_int64    *ConsistencyCheckRatePercent;    // The percentage of controller
                                                       // resources used for performing
                                                       // a data consistency check on
                                                       // volumes.
    RedfishCS_int64    *RebuildRatePercent;            // The percentage of controller
                                                       // resources used for
                                                       // rebuilding/repairing volumes.
    RedfishCS_int64    *TransformationRatePercent;     // The percentage of controller
                                                       // resources used for
                                                       // transforming volumes from one
                                                       // configuration to another.
} RedfishStorageController_V1_0_1_Rates_CS;

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
// The StorageController schema describes a storage controller and its properties.
// A storage controller represents a physical or virtual storage device that
// produces volumes.
//
typedef struct _RedfishStorageController_V1_0_1_StorageController_CS {
    RedfishCS_Header                                               Header;
    RedfishCS_char                                                 *odata_context;              
    RedfishCS_char                                                 *odata_etag;                 
    RedfishCS_char                                                 *odata_id;                   
    RedfishCS_char                                                 *odata_type;                 
    RedfishStorageController_V1_0_1_Actions_CS                     *Actions;                        // The available actions for this
                                                                                                    // resource.
    RedfishCS_Link                                                 Assembly;                        // The link to the assembly
                                                                                                    // associated with this storage
                                                                                                    // controller.
    RedfishCS_char                                                 *AssetTag;                       // The user-assigned asset tag
                                                                                                    // for this storage controller.
    RedfishStorageController_V1_0_1_CacheSummary_CS                *CacheSummary;                   // The cache memory of the
                                                                                                    // storage controller in general
                                                                                                    // detail.
    RedfishStorageController_V1_0_1_Rates_CS                       *ControllerRates;                // This property describes the
                                                                                                    // various controller rates used
                                                                                                    // for processes such as volume
                                                                                                    // rebuild or consistency checks.
    RedfishCS_char                                                 *Description;                
    RedfishCS_char                                                 *FirmwareVersion;                // The firmware version of this
                                                                                                    // storage controller.
    RedfishCS_char                                                 *Id;                         
    RedfishCS_Link                                                 Identifiers;                     // The durable names for the
                                                                                                    // storage controller.
    RedfishStorageController_V1_0_1_Links_CS                       *Links;                          // The links to other resources
                                                                                                    // that are related to this
                                                                                                    // resource.
    RedfishCS_Link                                                 Location;                        // The location of the storage
                                                                                                    // controller.
    RedfishCS_char                                                 *Manufacturer;                   // The manufacturer of this
                                                                                                    // storage controller.
    RedfishCS_char                                                 *Model;                          // The model number for the
                                                                                                    // storage controller.
    RedfishStorageController_V1_0_1_NVMeControllerProperties_CS    *NVMeControllerProperties;       // The NVMe related properties
                                                                                                    // for this storage controller.
    RedfishCS_char                                                 *Name;                       
    RedfishResource_Oem_CS                                         *Oem;                            // The OEM extension property.
    RedfishCS_Link                                                 PCIeInterface;                   // The PCIe interface details for
                                                                                                    // this controller.
    RedfishCS_char                                                 *PartNumber;                     // The part number for this
                                                                                                    // storage controller.
    RedfishCS_Link                                                 Ports;                           // The link to the collection of
                                                                                                    // ports that exist on the
                                                                                                    // storage controller.
    RedfishCS_char                                                 *SKU;                            // The SKU for this storage
                                                                                                    // controller.
    RedfishCS_char                                                 *SerialNumber;                   // The serial number for this
                                                                                                    // storage controller.
    RedfishCS_int64                                                *SpeedGbps;                      // The maximum speed of the
                                                                                                    // storage controller's device
                                                                                                    // interface.
    RedfishResource_Status_CS                                      *Status;                         // The status and health of the
                                                                                                    // resource and its subordinate
                                                                                                    // or dependent resources.
    RedfishCS_char_Array                                           *SupportedControllerProtocols;    // The supported set of protocols
                                                                                                    // for communicating to this
                                                                                                    // storage controller.
    RedfishCS_char_Array                                           *SupportedDeviceProtocols;       // The protocols that the storage
                                                                                                    // controller can use to
                                                                                                    // communicate with attached
                                                                                                    // devices.
    RedfishCS_char_Array                                           *SupportedRAIDTypes;             // The set of RAID types
                                                                                                    // supported by the storage
                                                                                                    // controller.
} RedfishStorageController_V1_0_1_StorageController_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

typedef struct _RedfishStorageController_V1_0_1_ANACharacteristics_Array_CS  {
    RedfishStorageController_V1_0_1_ANACharacteristics_Array_CS    *Next;
    RedfishStorageController_V1_0_1_ANACharacteristics_CS    *ArrayValue;
} RedfishStorageController_V1_0_1_ANACharacteristics_Array_CS;

RedfishCS_status
Json_StorageController_V1_0_1_To_CS (char *JsonRawText, RedfishStorageController_V1_0_1_StorageController_CS **ReturnedCS);

RedfishCS_status
CS_To_StorageController_V1_0_1_JSON (RedfishStorageController_V1_0_1_StorageController_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyStorageController_V1_0_1_CS (RedfishStorageController_V1_0_1_StorageController_CS *CSPtr);

RedfishCS_status
DestroyStorageController_V1_0_1_Json (RedfishCS_char *JsonText);

#endif
