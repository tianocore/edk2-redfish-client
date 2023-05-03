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

#ifndef RedfishMemory_V1_0_11_CSTRUCT_H_
#define RedfishMemory_V1_0_11_CSTRUCT_H_

#include "RedfishCsCommon.h"

typedef struct _RedfishMemory_V1_0_11_RegionSet_Array_CS RedfishMemory_V1_0_11_RegionSet_Array_CS;
typedef struct _RedfishMemory_V1_0_11_Actions_CS RedfishMemory_V1_0_11_Actions_CS;
typedef struct _RedfishMemory_V1_0_11_DisablePassphrase_CS RedfishMemory_V1_0_11_DisablePassphrase_CS;
typedef struct _RedfishMemory_V1_0_11_Memory_CS RedfishMemory_V1_0_11_Memory_CS;
typedef struct _RedfishMemory_V1_0_11_MemoryLocation_CS RedfishMemory_V1_0_11_MemoryLocation_CS;
typedef struct _RedfishMemory_V1_0_11_OemActions_CS RedfishMemory_V1_0_11_OemActions_CS;
typedef struct _RedfishMemory_V1_0_11_PowerManagementPolicy_CS RedfishMemory_V1_0_11_PowerManagementPolicy_CS;
typedef struct _RedfishMemory_V1_0_11_RegionSet_CS RedfishMemory_V1_0_11_RegionSet_CS;
typedef struct _RedfishMemory_V1_0_11_SecureEraseUnit_CS RedfishMemory_V1_0_11_SecureEraseUnit_CS;
typedef struct _RedfishMemory_V1_0_11_SecurityCapabilities_CS RedfishMemory_V1_0_11_SecurityCapabilities_CS;
typedef struct _RedfishMemory_V1_0_11_SetPassphrase_CS RedfishMemory_V1_0_11_SetPassphrase_CS;
typedef struct _RedfishMemory_V1_0_11_UnlockUnit_CS RedfishMemory_V1_0_11_UnlockUnit_CS;
#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

//
// The available actions for this resource.
//
typedef struct _RedfishMemory_V1_0_11_Actions_CS {
    RedfishMemory_V1_0_11_DisablePassphrase_CS    *Memory_DisablePassphrase;
    RedfishMemory_V1_0_11_SecureEraseUnit_CS      *Memory_SecureEraseUnit; 
    RedfishMemory_V1_0_11_SetPassphrase_CS        *Memory_SetPassphrase;   
    RedfishMemory_V1_0_11_UnlockUnit_CS           *Memory_UnlockUnit;      
    RedfishMemory_V1_0_11_OemActions_CS           *Oem;                        // The available OEM-specific
                                                                               // actions for this resource.
} RedfishMemory_V1_0_11_Actions_CS;

//
// Disable passphrase for given regions.
//
typedef struct _RedfishMemory_V1_0_11_DisablePassphrase_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishMemory_V1_0_11_DisablePassphrase_CS;

//
// Memory connection information to sockets and memory controllers.
//
typedef struct _RedfishMemory_V1_0_11_MemoryLocation_CS {
    RedfishCS_int64    *Channel;            // The channel number to which
                                            // the memory device is
                                            // connected.
    RedfishCS_int64    *MemoryController;    // The memory controller number
                                            // to which the memory device is
                                            // connected.
    RedfishCS_int64    *Slot;               // The slot number to which the
                                            // memory device is connected.
    RedfishCS_int64    *Socket;             // The socket number to which the
                                            // memory device is connected.
} RedfishMemory_V1_0_11_MemoryLocation_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishMemory_V1_0_11_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishMemory_V1_0_11_OemActions_CS;

//
// Power management policy information.
//
typedef struct _RedfishMemory_V1_0_11_PowerManagementPolicy_CS {
    RedfishCS_int64    *AveragePowerBudgetMilliWatts;    // Average power budget, in
                                                        // milliwatts.
    RedfishCS_int64    *MaxTDPMilliWatts;               // Maximum TDP in milliwatts.
    RedfishCS_int64    *PeakPowerBudgetMilliWatts;      // Peak power budget, in
                                                        // milliwatts.
    RedfishCS_bool     *PolicyEnabled;                  // An indication of whether the
                                                        // power management policy is
                                                        // enabled.
} RedfishMemory_V1_0_11_PowerManagementPolicy_CS;

//
// Memory region information within a memory device.
//
typedef struct _RedfishMemory_V1_0_11_RegionSet_CS {
    RedfishCS_char     *MemoryClassification;    // The classification of memory
                                                // that the memory region
                                                // occupies.
    RedfishCS_int64    *OffsetMiB;              // Offset within the memory that
                                                // corresponds to the start of
                                                // this memory region in
                                                // mebibytes (MiB).
    RedfishCS_bool     *PassphraseState;        // An indication of whether the
                                                // state of the passphrase for
                                                // this region is enabled.
    RedfishCS_char     *RegionId;               // Unique region ID representing
                                                // a specific region within the
                                                // memory device.
    RedfishCS_int64    *SizeMiB;                // Size of this memory region in
                                                // mebibytes (MiB).
} RedfishMemory_V1_0_11_RegionSet_CS;

//
// This contains the action for securely erasing given regions using the NIST
// SP800-88 Purge: Cryptographic Erase.
//
typedef struct _RedfishMemory_V1_0_11_SecureEraseUnit_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishMemory_V1_0_11_SecureEraseUnit_CS;

//
// This type contains security capabilities of a memory device.
//
typedef struct _RedfishMemory_V1_0_11_SecurityCapabilities_CS {
    RedfishCS_int64         *MaxPassphraseCount;    // Maximum number of passphrases
                                                   // supported for this memory
                                                   // device.
    RedfishCS_bool          *PassphraseCapable;    // An indication of whether the
                                                   // memory device is passphrase
                                                   // capable.
    RedfishCS_char_Array    *SecurityStates;       // Security states supported by
                                                   // the memory device.
} RedfishMemory_V1_0_11_SecurityCapabilities_CS;

//
// Set passphrase for the given regions.
//
typedef struct _RedfishMemory_V1_0_11_SetPassphrase_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishMemory_V1_0_11_SetPassphrase_CS;

//
// This contains the action for unlocking given regions.
//
typedef struct _RedfishMemory_V1_0_11_UnlockUnit_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishMemory_V1_0_11_UnlockUnit_CS;

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
// The Memory schema represents a memory device, such as a DIMM, and its
// configuration.
//
typedef struct _RedfishMemory_V1_0_11_Memory_CS {
    RedfishCS_Header                                  Header;
    RedfishCS_char                                    *odata_context;              
    RedfishCS_char                                    *odata_etag;                 
    RedfishCS_char                                    *odata_id;                   
    RedfishCS_char                                    *odata_type;                 
    RedfishMemory_V1_0_11_Actions_CS                  *Actions;                        // The available actions for this
                                                                                       // resource.
    RedfishCS_int64_Array                             *AllowedSpeedsMHz;               // Speeds supported by this
                                                                                       // memory device.
    RedfishCS_char                                    *BaseModuleType;                 // The base module type of the
                                                                                       // memory device.
    RedfishCS_int64                                   *BusWidthBits;                   // The bus width, in bits.
    RedfishCS_int64                                   *CapacityMiB;                    // Memory capacity in mebibytes
                                                                                       // (MiB).
    RedfishCS_int64                                   *DataWidthBits;                  // Data width in bits.
    RedfishCS_char                                    *Description;                
    RedfishCS_char                                    *DeviceID;                       // Device ID.
    RedfishCS_char                                    *DeviceLocator;                  // Location of the memory device
                                                                                       // in the platform.
    RedfishCS_char                                    *ErrorCorrection;                // Error correction scheme
                                                                                       // supported for this memory
                                                                                       // device.
    RedfishCS_char                                    *FirmwareApiVersion;             // Version of API supported by
                                                                                       // the firmware.
    RedfishCS_char                                    *FirmwareRevision;               // Revision of firmware on the
                                                                                       // memory controller.
    RedfishCS_char_Array                              *FunctionClasses;                // Function classes by the memory
                                                                                       // device.
    RedfishCS_char                                    *Id;                         
    RedfishCS_bool                                    *IsRankSpareEnabled;             // An indication of whether rank
                                                                                       // spare is enabled for this
                                                                                       // memory device.
    RedfishCS_bool                                    *IsSpareDeviceEnabled;           // An indication of whether a
                                                                                       // spare device is enabled for
                                                                                       // this memory device.
    RedfishCS_char                                    *Manufacturer;                   // The memory device
                                                                                       // manufacturer.
    RedfishCS_int64_Array                             *MaxTDPMilliWatts;               // Set of maximum power budgets
                                                                                       // supported by the memory device
                                                                                       // in milliwatts.
    RedfishCS_char                                    *MemoryDeviceType;               // Type details of the memory
                                                                                       // device.
    RedfishMemory_V1_0_11_MemoryLocation_CS           *MemoryLocation;                 // Memory connection information
                                                                                       // to sockets and memory
                                                                                       // controllers.
    RedfishCS_char_Array                              *MemoryMedia;                    // Media of this memory device.
    RedfishCS_char                                    *MemoryType;                     // The type of memory device.
    RedfishCS_Link                                    Metrics;                         // The link to the metrics
                                                                                       // associated with this memory
                                                                                       // device.
    RedfishCS_char                                    *Name;                       
    RedfishResource_Oem_CS                            *Oem;                            // The OEM extension property.
    RedfishCS_char_Array                              *OperatingMemoryModes;           // Memory modes supported by the
                                                                                       // memory device.
    RedfishCS_int64                                   *OperatingSpeedMhz;              // Operating speed of the memory
                                                                                       // device in MHz or MT/s as
                                                                                       // appropriate.
    RedfishCS_char                                    *PartNumber;                     // The product part number of
                                                                                       // this device.
    RedfishCS_int64                                   *PersistentRegionSizeLimitMiB;    // Total size of persistent
                                                                                       // regions in mebibytes (MiB).
    RedfishMemory_V1_0_11_PowerManagementPolicy_CS    *PowerManagementPolicy;          // Power management policy
                                                                                       // information.
    RedfishCS_int64                                   *RankCount;                      // Number of ranks available in
                                                                                       // the memory device.
    RedfishMemory_V1_0_11_RegionSet_Array_CS          *Regions;                        // Memory regions information
                                                                                       // within the memory device.
    RedfishMemory_V1_0_11_SecurityCapabilities_CS     *SecurityCapabilities;           // Security capabilities of the
                                                                                       // memory device.
    RedfishCS_char                                    *SerialNumber;                   // The product serial number of
                                                                                       // this device.
    RedfishCS_int64                                   *SpareDeviceCount;               // Number of unused spare devices
                                                                                       // available in the memory
                                                                                       // device.
    RedfishCS_char                                    *SubsystemDeviceID;              // Subsystem device ID.
    RedfishCS_char                                    *SubsystemVendorID;              // SubSystem vendor ID.
    RedfishCS_char                                    *VendorID;                       // Vendor ID.
    RedfishCS_int64                                   *VolatileRegionSizeLimitMiB;     // Total size of volatile regions
                                                                                       // in mebibytes (MiB).
} RedfishMemory_V1_0_11_Memory_CS;

typedef struct _RedfishMemory_V1_0_11_RegionSet_Array_CS  {
    RedfishMemory_V1_0_11_RegionSet_Array_CS    *Next;
    RedfishMemory_V1_0_11_RegionSet_CS    *ArrayValue;
} RedfishMemory_V1_0_11_RegionSet_Array_CS;

RedfishCS_status
Json_Memory_V1_0_11_To_CS (char *JsonRawText, RedfishMemory_V1_0_11_Memory_CS **ReturnedCS);

RedfishCS_status
CS_To_Memory_V1_0_11_JSON (RedfishMemory_V1_0_11_Memory_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyMemory_V1_0_11_CS (RedfishMemory_V1_0_11_Memory_CS *CSPtr);

RedfishCS_status
DestroyMemory_V1_0_11_Json (RedfishCS_char *JsonText);

#endif
