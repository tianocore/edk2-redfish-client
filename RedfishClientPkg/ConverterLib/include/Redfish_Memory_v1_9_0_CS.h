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

#ifndef RedfishMemory_V1_9_0_CSTRUCT_H_
#define RedfishMemory_V1_9_0_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishMemory_V1_9_0_RegionSet_Array_CS RedfishMemory_V1_9_0_RegionSet_Array_CS;
typedef struct _RedfishMemory_V1_9_0_Actions_CS RedfishMemory_V1_9_0_Actions_CS;
typedef struct _RedfishMemory_V1_9_0_DisablePassphrase_CS RedfishMemory_V1_9_0_DisablePassphrase_CS;
typedef struct _RedfishMemory_V1_9_0_Links_CS RedfishMemory_V1_9_0_Links_CS;
typedef struct _RedfishMemory_V1_9_0_Memory_CS RedfishMemory_V1_9_0_Memory_CS;
typedef struct _RedfishMemory_V1_9_0_MemoryLocation_CS RedfishMemory_V1_9_0_MemoryLocation_CS;
typedef struct _RedfishMemory_V1_9_0_OemActions_CS RedfishMemory_V1_9_0_OemActions_CS;
typedef struct _RedfishMemory_V1_9_0_OverwriteUnit_CS RedfishMemory_V1_9_0_OverwriteUnit_CS;
typedef struct _RedfishMemory_V1_9_0_PowerManagementPolicy_CS RedfishMemory_V1_9_0_PowerManagementPolicy_CS;
typedef struct _RedfishMemory_V1_9_0_RegionSet_CS RedfishMemory_V1_9_0_RegionSet_CS;
typedef struct _RedfishMemory_V1_9_0_Reset_CS RedfishMemory_V1_9_0_Reset_CS;
typedef struct _RedfishMemory_V1_9_0_SecureEraseUnit_CS RedfishMemory_V1_9_0_SecureEraseUnit_CS;
typedef struct _RedfishMemory_V1_9_0_SecurityCapabilities_CS RedfishMemory_V1_9_0_SecurityCapabilities_CS;
typedef struct _RedfishMemory_V1_9_0_SetPassphrase_CS RedfishMemory_V1_9_0_SetPassphrase_CS;
typedef struct _RedfishMemory_V1_9_0_UnlockUnit_CS RedfishMemory_V1_9_0_UnlockUnit_CS;
#ifndef RedfishResource_Condition_CS_
typedef struct _RedfishResource_Condition_CS RedfishResource_Condition_CS;
#endif

#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

#ifndef RedfishResource_Status_CS_
typedef struct _RedfishResource_Status_CS RedfishResource_Status_CS;
#endif

#ifndef Redfishodatav4_idRef_CS_
typedef struct _Redfishodatav4_idRef_CS Redfishodatav4_idRef_CS;
#endif

//
// The available actions for this Resource.
//
typedef struct _RedfishMemory_V1_9_0_Actions_CS {
    RedfishMemory_V1_9_0_DisablePassphrase_CS    *Memory_DisablePassphrase;
    RedfishMemory_V1_9_0_OverwriteUnit_CS        *Memory_OverwriteUnit;   
    RedfishMemory_V1_9_0_Reset_CS                *Memory_Reset;           
    RedfishMemory_V1_9_0_SecureEraseUnit_CS      *Memory_SecureEraseUnit; 
    RedfishMemory_V1_9_0_SetPassphrase_CS        *Memory_SetPassphrase;   
    RedfishMemory_V1_9_0_UnlockUnit_CS           *Memory_UnlockUnit;      
    RedfishMemory_V1_9_0_OemActions_CS           *Oem;                        // The available OEM-specific
                                                                              // actions for this Resource.
} RedfishMemory_V1_9_0_Actions_CS;

//
// Disable passphrase for given regions.
//
typedef struct _RedfishMemory_V1_9_0_DisablePassphrase_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishMemory_V1_9_0_DisablePassphrase_CS;

//
// The links to other Resources that are related to this Resource.
//
typedef struct _RedfishMemory_V1_9_0_Links_CS {
    RedfishCS_Link            Chassis;    // The link to the chassis that
                                         // contains this memory.
    RedfishResource_Oem_CS    *Oem;      // The OEM extension property.
} RedfishMemory_V1_9_0_Links_CS;

//
// Memory connection information to sockets and memory controllers.
//
typedef struct _RedfishMemory_V1_9_0_MemoryLocation_CS {
    RedfishCS_int64    *Channel;            // The channel number to which
                                            // the memory is connected.
    RedfishCS_int64    *MemoryController;    // The memory controller number
                                            // to which the memory is
                                            // connected.
    RedfishCS_int64    *Slot;               // The slot number to which the
                                            // memory is connected.
    RedfishCS_int64    *Socket;             // The socket number to which the
                                            // memory is connected.
} RedfishMemory_V1_9_0_MemoryLocation_CS;

//
// The available OEM-specific actions for this Resource.
//
typedef struct _RedfishMemory_V1_9_0_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishMemory_V1_9_0_OemActions_CS;

//
// This contains the action for securely erasing given regions using the NIST
// SP800-88 Purge: Overwrite.
//
typedef struct _RedfishMemory_V1_9_0_OverwriteUnit_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishMemory_V1_9_0_OverwriteUnit_CS;

//
// Power management policy information.
//
typedef struct _RedfishMemory_V1_9_0_PowerManagementPolicy_CS {
    RedfishCS_int64    *AveragePowerBudgetMilliWatts;    // Average power budget, in
                                                        // milliwatts.
    RedfishCS_int64    *MaxTDPMilliWatts;               // Maximum TDP in milliwatts.
    RedfishCS_int64    *PeakPowerBudgetMilliWatts;      // Peak power budget, in
                                                        // milliwatts.
    RedfishCS_bool     *PolicyEnabled;                  // An indication of whether the
                                                        // power management policy is
                                                        // enabled.
} RedfishMemory_V1_9_0_PowerManagementPolicy_CS;

//
// Memory region information within a memory device.
//
typedef struct _RedfishMemory_V1_9_0_RegionSet_CS {
    RedfishCS_char     *MemoryClassification;    // The classification of memory
                                                // that the memory region
                                                // occupies.
    RedfishCS_int64    *OffsetMiB;              // Offset within the memory that
                                                // corresponds to the start of
                                                // this memory region in
                                                // mebibytes (MiB).
    RedfishCS_bool     *PassphraseEnabled;      // An indication of whether the
                                                // passphrase is enabled for this
                                                // region.
    RedfishCS_bool     *PassphraseState;        // An indication of whether the
                                                // state of the passphrase for
                                                // this region is enabled.
    RedfishCS_char     *RegionId;               // Unique region ID representing
                                                // a specific region within the
                                                // memory.
    RedfishCS_int64    *SizeMiB;                // Size of this memory region in
                                                // mebibytes (MiB).
} RedfishMemory_V1_9_0_RegionSet_CS;

//
// This action resets this memory.
//
typedef struct _RedfishMemory_V1_9_0_Reset_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishMemory_V1_9_0_Reset_CS;

//
// This contains the action for securely erasing given regions using the NIST
// SP800-88 Purge: Cryptograhic Erase.
//
typedef struct _RedfishMemory_V1_9_0_SecureEraseUnit_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishMemory_V1_9_0_SecureEraseUnit_CS;

//
// This type contains security capabilities of a memory device.
//
typedef struct _RedfishMemory_V1_9_0_SecurityCapabilities_CS {
    RedfishCS_bool          *ConfigurationLockCapable;    // An indication of whether this
                                                         // memory supports the locking,
                                                         // or freezing, of the
                                                         // configuration.
    RedfishCS_bool          *DataLockCapable;            // An indication of whether this
                                                         // memory supports data locking.
    RedfishCS_int64         *MaxPassphraseCount;         // Maximum number of passphrases
                                                         // supported for this memory.
    RedfishCS_bool          *PassphraseCapable;          // An indication of whether the
                                                         // memory is passphrase capable.
    RedfishCS_int64         *PassphraseLockLimit;        // The maximum number of
                                                         // incorrect passphrase attempts
                                                         // allowed before memory is
                                                         // locked.
    RedfishCS_char_Array    *SecurityStates;             // Security states supported by
                                                         // the memory.
} RedfishMemory_V1_9_0_SecurityCapabilities_CS;

//
// Set passphrase for the given regions.
//
typedef struct _RedfishMemory_V1_9_0_SetPassphrase_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishMemory_V1_9_0_SetPassphrase_CS;

//
// This contains the action for unlocking given regions.
//
typedef struct _RedfishMemory_V1_9_0_UnlockUnit_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishMemory_V1_9_0_UnlockUnit_CS;

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
// A reference to a resource.
//
#ifndef Redfishodatav4_idRef_CS_
#define Redfishodatav4_idRef_CS_
typedef struct _Redfishodatav4_idRef_CS {
    RedfishCS_char    *odata_id;
} Redfishodatav4_idRef_CS;
#endif

//
// The schema for definition of a memory and its configuration.
//
typedef struct _RedfishMemory_V1_9_0_Memory_CS {
    RedfishCS_Header                                 Header;
    RedfishCS_char                                   *odata_context;                         
    RedfishCS_char                                   *odata_etag;                            
    RedfishCS_char                                   *odata_id;                              
    RedfishCS_char                                   *odata_type;                            
    RedfishMemory_V1_9_0_Actions_CS                  *Actions;                                   // The available actions for this
                                                                                                 // Resource.
    RedfishCS_int64                                  *AllocationAlignmentMiB;                    // The boundary that memory
                                                                                                 // regions are allocated on,
                                                                                                 // measured in mebibytes (MiB).
    RedfishCS_int64                                  *AllocationIncrementMiB;                    // The size of the smallest unit
                                                                                                 // of allocation for a memory
                                                                                                 // region in mebibytes (MiB).
    RedfishCS_int64_Array                            *AllowedSpeedsMHz;                          // Speeds supported by this
                                                                                                 // memory.
    RedfishCS_Link                                   Assembly;                                   // The link to the assembly
                                                                                                 // Resource associated with this
                                                                                                 // memory.
    RedfishCS_char                                   *BaseModuleType;                            // The base module type of the
                                                                                                 // memory.
    RedfishCS_int64                                  *BusWidthBits;                              // The bus width, in bits.
    RedfishCS_int64                                  *CacheSizeMiB;                              // Total size of the cache
                                                                                                 // portion memory in MiB.
    RedfishCS_int64                                  *CapacityMiB;                               // Memory capacity in mebibytes
                                                                                                 // (MiB).
    RedfishCS_bool                                   *ConfigurationLocked;                       // An indication of whether the
                                                                                                 // configuration of this memory
                                                                                                 // is locked and cannot be
                                                                                                 // altered.
    RedfishCS_int64                                  *DataWidthBits;                             // Data width in bits.
    RedfishCS_char                                   *Description;                           
    RedfishCS_char                                   *DeviceID;                                  // Device ID.
    RedfishCS_char                                   *DeviceLocator;                             // Location of the memory in the
                                                                                                 // platform.
    RedfishCS_char                                   *ErrorCorrection;                           // Error correction scheme
                                                                                                 // supported for this memory.
    RedfishCS_char                                   *FirmwareApiVersion;                        // Version of API supported by
                                                                                                 // the firmware.
    RedfishCS_char                                   *FirmwareRevision;                          // Revision of firmware on the
                                                                                                 // memory controller.
    RedfishCS_char_Array                             *FunctionClasses;                           // Function classes by the
                                                                                                 // memory.
    RedfishCS_char                                   *Id;                                    
    RedfishCS_bool                                   *IsRankSpareEnabled;                        // An indication of whether rank
                                                                                                 // spare is enabled for this
                                                                                                 // memory.
    RedfishCS_bool                                   *IsSpareDeviceEnabled;                      // An indication of whether a
                                                                                                 // spare device is enabled for
                                                                                                 // this memory.
    RedfishMemory_V1_9_0_Links_CS                    *Links;                                     // The links to other Resources
                                                                                                 // that are related to this
                                                                                                 // Resource.
    RedfishCS_Link                                   Location;                                   // The location of the memory.
    RedfishCS_int64                                  *LogicalSizeMiB;                            // Total size of the logical
                                                                                                 // memory in MiB.
    RedfishCS_char                                   *Manufacturer;                              // The memory manufacturer.
    RedfishCS_int64_Array                            *MaxTDPMilliWatts;                          // Set of maximum power budgets
                                                                                                 // supported by the memory in
                                                                                                 // milliwatts.
    RedfishCS_char                                   *MemoryDeviceType;                          // Type details of the memory.
    RedfishMemory_V1_9_0_MemoryLocation_CS           *MemoryLocation;                            // Memory connection information
                                                                                                 // to sockets and memory
                                                                                                 // controllers.
    RedfishCS_char_Array                             *MemoryMedia;                               // Media of this memory.
    RedfishCS_char                                   *MemorySubsystemControllerManufacturerID;    // The manufacturer ID of the
                                                                                                 // memory subsystem controller of
                                                                                                 // this memory module.
    RedfishCS_char                                   *MemorySubsystemControllerProductID;        // The product ID of the memory
                                                                                                 // subsystem controller of this
                                                                                                 // memory module.
    RedfishCS_char                                   *MemoryType;                                // The type of memory.
    RedfishCS_Link                                   Metrics;                                    // The link to the Metrics
                                                                                                 // associated with this memory.
    RedfishCS_char                                   *ModuleManufacturerID;                      // The manufacturer ID of this
                                                                                                 // memory module.
    RedfishCS_char                                   *ModuleProductID;                           // The product ID of this memory
                                                                                                 // module.
    RedfishCS_char                                   *Name;                                  
    RedfishCS_int64                                  *NonVolatileSizeMiB;                        // Total size of the non-volatile
                                                                                                 // portion memory in MiB.
    RedfishResource_Oem_CS                           *Oem;                                       // The OEM extension property.
    RedfishCS_char_Array                             *OperatingMemoryModes;                      // Memory modes supported by the
                                                                                                 // memory.
    RedfishCS_int64                                  *OperatingSpeedMhz;                         // Operating speed of memory in
                                                                                                 // MHz or MT/s as appropriate.
    RedfishCS_char                                   *PartNumber;                                // The product part number of
                                                                                                 // this device.
    RedfishCS_int64                                  *PersistentRegionNumberLimit;               // Total number of persistent
                                                                                                 // regions this memory can
                                                                                                 // support.
    RedfishCS_int64                                  *PersistentRegionSizeLimitMiB;              // Total size of persistent
                                                                                                 // regions in mebibytes (MiB).
    RedfishCS_int64                                  *PersistentRegionSizeMaxMiB;                // Maximum size of a single
                                                                                                 // persistent region in mebibytes
                                                                                                 // (MiB).
    RedfishMemory_V1_9_0_PowerManagementPolicy_CS    *PowerManagementPolicy;                     // Power management policy
                                                                                                 // information.
    RedfishCS_int64                                  *RankCount;                                 // Number of ranks available in
                                                                                                 // the memory.
    RedfishMemory_V1_9_0_RegionSet_Array_CS          *Regions;                                   // Memory regions information
                                                                                                 // within the memory.
    RedfishMemory_V1_9_0_SecurityCapabilities_CS     *SecurityCapabilities;                      // Security capabilities of the
                                                                                                 // memory.
    RedfishCS_char                                   *SecurityState;                             // The current security state of
                                                                                                 // this memory.
    RedfishCS_char                                   *SerialNumber;                              // The product serial number of
                                                                                                 // this device.
    RedfishCS_int64                                  *SpareDeviceCount;                          // Number of unused spare devices
                                                                                                 // available in the memory.
    RedfishResource_Status_CS                        *Status;                                    // The status and health of the
                                                                                                 // Resource and its subordinate
                                                                                                 // or dependent Resources.
    RedfishCS_char                                   *SubsystemDeviceID;                         // Subsystem device ID.
    RedfishCS_char                                   *SubsystemVendorID;                         // SubSystem vendor ID.
    RedfishCS_char                                   *VendorID;                                  // Vendor ID.
    RedfishCS_int64                                  *VolatileRegionNumberLimit;                 // Total number of volatile
                                                                                                 // regions this memory can
                                                                                                 // support.
    RedfishCS_int64                                  *VolatileRegionSizeLimitMiB;                // Total size of volatile regions
                                                                                                 // in mebibytes (MiB).
    RedfishCS_int64                                  *VolatileRegionSizeMaxMiB;                  // Maximum size of a single
                                                                                                 // volatile region in mebibytes
                                                                                                 // (MiB).
    RedfishCS_int64                                  *VolatileSizeMiB;                           // Total size of the volitile
                                                                                                 // portion memory in MiB.
} RedfishMemory_V1_9_0_Memory_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

typedef struct _RedfishMemory_V1_9_0_RegionSet_Array_CS  {
    RedfishMemory_V1_9_0_RegionSet_Array_CS    *Next;
    RedfishMemory_V1_9_0_RegionSet_CS    *ArrayValue;
} RedfishMemory_V1_9_0_RegionSet_Array_CS;

RedfishCS_status
Json_Memory_V1_9_0_To_CS (char *JsonRawText, RedfishMemory_V1_9_0_Memory_CS **ReturnedCS);

RedfishCS_status
CS_To_Memory_V1_9_0_JSON (RedfishMemory_V1_9_0_Memory_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyMemory_V1_9_0_CS (RedfishMemory_V1_9_0_Memory_CS *CSPtr);

RedfishCS_status
DestroyMemory_V1_9_0_Json (RedfishCS_char *JsonText);

#endif
