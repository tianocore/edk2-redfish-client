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

#ifndef RedfishManagerdiagnosticdata_V1_0_0_CSTRUCT_H_
#define RedfishManagerdiagnosticdata_V1_0_0_CSTRUCT_H_

#include "RedfishCsCommon.h"

typedef struct _RedfishManagerDiagnosticData_V1_0_0_I2CBusStatistics_Array_CS RedfishManagerDiagnosticData_V1_0_0_I2CBusStatistics_Array_CS;
typedef struct _RedfishManagerDiagnosticData_V1_0_0_ProcessStatistics_Array_CS RedfishManagerDiagnosticData_V1_0_0_ProcessStatistics_Array_CS;
typedef struct _RedfishManagerDiagnosticData_V1_0_0_Actions_CS RedfishManagerDiagnosticData_V1_0_0_Actions_CS;
typedef struct _RedfishManagerDiagnosticData_V1_0_0_BootTimeStatistics_CS RedfishManagerDiagnosticData_V1_0_0_BootTimeStatistics_CS;
typedef struct _RedfishManagerDiagnosticData_V1_0_0_I2CBusStatistics_CS RedfishManagerDiagnosticData_V1_0_0_I2CBusStatistics_CS;
typedef struct _RedfishManagerDiagnosticData_V1_0_0_ManagerDiagnosticData_CS RedfishManagerDiagnosticData_V1_0_0_ManagerDiagnosticData_CS;
typedef struct _RedfishManagerDiagnosticData_V1_0_0_MemoryECCStatistics_CS RedfishManagerDiagnosticData_V1_0_0_MemoryECCStatistics_CS;
typedef struct _RedfishManagerDiagnosticData_V1_0_0_MemoryStatistics_CS RedfishManagerDiagnosticData_V1_0_0_MemoryStatistics_CS;
typedef struct _RedfishManagerDiagnosticData_V1_0_0_OemActions_CS RedfishManagerDiagnosticData_V1_0_0_OemActions_CS;
typedef struct _RedfishManagerDiagnosticData_V1_0_0_ProcessStatistics_CS RedfishManagerDiagnosticData_V1_0_0_ProcessStatistics_CS;
typedef struct _RedfishManagerDiagnosticData_V1_0_0_ProcessorStatistics_CS RedfishManagerDiagnosticData_V1_0_0_ProcessorStatistics_CS;
typedef struct _RedfishManagerDiagnosticData_V1_0_0_ResetMetrics_CS RedfishManagerDiagnosticData_V1_0_0_ResetMetrics_CS;
#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

//
// The available actions for this resource.
//
typedef struct _RedfishManagerDiagnosticData_V1_0_0_Actions_CS {
    RedfishManagerDiagnosticData_V1_0_0_ResetMetrics_CS    *ManagerDiagnosticData_ResetMetrics;
    RedfishManagerDiagnosticData_V1_0_0_OemActions_CS      *Oem;                                  // The available OEM-specific
                                                                                                  // actions for this resource.
} RedfishManagerDiagnosticData_V1_0_0_Actions_CS;

//
// The boot time statistics of a manager.
//
typedef struct _RedfishManagerDiagnosticData_V1_0_0_BootTimeStatistics_CS {
    RedfishCS_int64    *FirmwareTimeSeconds;    // The number of seconds the
                                                // manager spent in the firmware
                                                // stage.
    RedfishCS_int64    *InitrdTimeSeconds;      // The number of seconds the
                                                // manager spent in the initrd
                                                // boot stage.
    RedfishCS_int64    *KernelTimeSeconds;      // The number of seconds the
                                                // manager spent in the kernel
                                                // stage.
    RedfishCS_int64    *LoaderTimeSeconds;      // The number of seconds the
                                                // manager spent in the loader
                                                // stage.
    RedfishCS_int64    *UserSpaceTimeSeconds;    // The number of seconds the
                                                // manager spent in the user
                                                // space boot stage.
} RedfishManagerDiagnosticData_V1_0_0_BootTimeStatistics_CS;

//
// The statistics of an I2C bus.
//
typedef struct _RedfishManagerDiagnosticData_V1_0_0_I2CBusStatistics_CS {
    RedfishCS_int64    *BusErrorCount;           // The number of bus errors on
                                                 // this I2C bus.
    RedfishCS_char     *I2CBusName;              // The name of the I2C bus.
    RedfishCS_int64    *NACKCount;               // The number of NACKs on this
                                                 // I2C bus.
    RedfishCS_int64    *TotalTransactionCount;    // The total number of
                                                 // transactions on this I2C bus.
} RedfishManagerDiagnosticData_V1_0_0_I2CBusStatistics_CS;

//
// The memory ECC statistics of a manager.
//
typedef struct _RedfishManagerDiagnosticData_V1_0_0_MemoryECCStatistics_CS {
    RedfishCS_int64    *CorrectableECCErrorCount;     // The number of the correctable
                                                      // errors since reset.
    RedfishCS_int64    *UncorrectableECCErrorCount;    // The number of the
                                                      // uncorrectable errors since
                                                      // reset.
} RedfishManagerDiagnosticData_V1_0_0_MemoryECCStatistics_CS;

//
// The memory statistics of a manager.
//
typedef struct _RedfishManagerDiagnosticData_V1_0_0_MemoryStatistics_CS {
    RedfishCS_int64    *AvailableBytes;         // The amount of memory available
                                                // in bytes for starting new
                                                // processes without swapping.
    RedfishCS_int64    *BuffersAndCacheBytes;    // The amount of memory used in
                                                // bytes by kernel buffers, page
                                                // caches, and slabs.
    RedfishCS_int64    *FreeBytes;              // The amount of free memory in
                                                // bytes.
    RedfishCS_int64    *SharedBytes;            // The amount of shared memory in
                                                // bytes.
    RedfishCS_int64    *TotalBytes;             // The total amount of memory in
                                                // bytes.
    RedfishCS_int64    *UsedBytes;              // The amount of used memory in
                                                // bytes.
} RedfishManagerDiagnosticData_V1_0_0_MemoryStatistics_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishManagerDiagnosticData_V1_0_0_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishManagerDiagnosticData_V1_0_0_OemActions_CS;

//
// The statistics of a process running on a manager.
//
typedef struct _RedfishManagerDiagnosticData_V1_0_0_ProcessStatistics_CS {
    RedfishCS_char     *CommandLine;            // The command line of this
                                                // process.
    RedfishCS_int64    *KernelTimeSeconds;      // The number of seconds this
                                                // process executed in kernel
                                                // space.
    RedfishCS_int64    *ResidentSetSizeBytes;    // The resident set size of this
                                                // process in bytes.
    RedfishCS_int64    *UserTimeSeconds;        // The number of seconds this
                                                // process executed in user
                                                // space.
} RedfishManagerDiagnosticData_V1_0_0_ProcessStatistics_CS;

//
// The processor statistics of a manager.
//
typedef struct _RedfishManagerDiagnosticData_V1_0_0_ProcessorStatistics_CS {
    RedfishCS_int64    *KernelPercent;    // The percentage of CPU time
                                         // spent in kernel mode.
    RedfishCS_int64    *UserPercent;     // The percentage of CPU time
                                         // spent in user mode.
} RedfishManagerDiagnosticData_V1_0_0_ProcessorStatistics_CS;

//
// Resets time intervals or counted values of the diagnostic data for this
// manager.
//
typedef struct _RedfishManagerDiagnosticData_V1_0_0_ResetMetrics_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishManagerDiagnosticData_V1_0_0_ResetMetrics_CS;

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
// The ManagerDiagnosticData schema defines internal diagnostic data for a
// manager.  It contains information that might be used by vendors to collect
// debug information about the manager.  Clients should not make decisions for
// raising alerts, creating service events, or other actions based on information
// in this resource.
//
typedef struct _RedfishManagerDiagnosticData_V1_0_0_ManagerDiagnosticData_CS {
    RedfishCS_Header                                                  Header;
    RedfishCS_char                                                    *odata_context;     
    RedfishCS_char                                                    *odata_etag;        
    RedfishCS_char                                                    *odata_id;          
    RedfishCS_char                                                    *odata_type;        
    RedfishManagerDiagnosticData_V1_0_0_Actions_CS                    *Actions;               // The available actions for this
                                                                                              // resource.
    RedfishManagerDiagnosticData_V1_0_0_BootTimeStatistics_CS         *BootTimeStatistics;    // The boot time statistics of
                                                                                              // the manager.
    RedfishCS_char                                                    *Description;       
    RedfishCS_int64                                                   *FreeStorageSpaceKiB;    // The available storage space on
                                                                                              // this manager in kibibytes
                                                                                              // (KiB).
    RedfishManagerDiagnosticData_V1_0_0_I2CBusStatistics_Array_CS     *I2CBuses;              // The statistics of the I2C
                                                                                              // buses.
    RedfishCS_char                                                    *Id;                
    RedfishManagerDiagnosticData_V1_0_0_MemoryECCStatistics_CS        *MemoryECCStatistics;    // The memory ECC statistics of
                                                                                              // the manager.
    RedfishManagerDiagnosticData_V1_0_0_MemoryStatistics_CS           *MemoryStatistics;      // The memory statistics of the
                                                                                              // manager.
    RedfishCS_char                                                    *Name;              
    RedfishResource_Oem_CS                                            *Oem;                   // The OEM extension property.
    RedfishManagerDiagnosticData_V1_0_0_ProcessorStatistics_CS        *ProcessorStatistics;    // The processor statistics of
                                                                                              // the manager.
    RedfishManagerDiagnosticData_V1_0_0_ProcessStatistics_Array_CS    *TopProcesses;          // The statistics of the top
                                                                                              // processes of this manager.
} RedfishManagerDiagnosticData_V1_0_0_ManagerDiagnosticData_CS;

typedef struct _RedfishManagerDiagnosticData_V1_0_0_I2CBusStatistics_Array_CS  {
    RedfishManagerDiagnosticData_V1_0_0_I2CBusStatistics_Array_CS    *Next;
    RedfishManagerDiagnosticData_V1_0_0_I2CBusStatistics_CS    *ArrayValue;
} RedfishManagerDiagnosticData_V1_0_0_I2CBusStatistics_Array_CS;

typedef struct _RedfishManagerDiagnosticData_V1_0_0_ProcessStatistics_Array_CS  {
    RedfishManagerDiagnosticData_V1_0_0_ProcessStatistics_Array_CS    *Next;
    RedfishManagerDiagnosticData_V1_0_0_ProcessStatistics_CS    *ArrayValue;
} RedfishManagerDiagnosticData_V1_0_0_ProcessStatistics_Array_CS;

RedfishCS_status
Json_ManagerDiagnosticData_V1_0_0_To_CS (char *JsonRawText, RedfishManagerDiagnosticData_V1_0_0_ManagerDiagnosticData_CS **ReturnedCS);

RedfishCS_status
CS_To_ManagerDiagnosticData_V1_0_0_JSON (RedfishManagerDiagnosticData_V1_0_0_ManagerDiagnosticData_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyManagerDiagnosticData_V1_0_0_CS (RedfishManagerDiagnosticData_V1_0_0_ManagerDiagnosticData_CS *CSPtr);

RedfishCS_status
DestroyManagerDiagnosticData_V1_0_0_Json (RedfishCS_char *JsonText);

#endif
