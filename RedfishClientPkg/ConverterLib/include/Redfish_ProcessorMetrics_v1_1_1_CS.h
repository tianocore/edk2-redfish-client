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

#ifndef RedfishProcessormetrics_V1_1_1_CSTRUCT_H_
#define RedfishProcessormetrics_V1_1_1_CSTRUCT_H_

#include "RedfishCsCommon.h"

typedef struct _RedfishProcessorMetrics_V1_1_1_CStateResidency_Array_CS RedfishProcessorMetrics_V1_1_1_CStateResidency_Array_CS;
typedef struct _RedfishProcessorMetrics_V1_1_1_CacheMetrics_Array_CS RedfishProcessorMetrics_V1_1_1_CacheMetrics_Array_CS;
typedef struct _RedfishProcessorMetrics_V1_1_1_CoreMetrics_Array_CS RedfishProcessorMetrics_V1_1_1_CoreMetrics_Array_CS;
typedef struct _RedfishProcessorMetrics_V1_1_1_Actions_CS RedfishProcessorMetrics_V1_1_1_Actions_CS;
typedef struct _RedfishProcessorMetrics_V1_1_1_CStateResidency_CS RedfishProcessorMetrics_V1_1_1_CStateResidency_CS;
typedef struct _RedfishProcessorMetrics_V1_1_1_CacheMetrics_CS RedfishProcessorMetrics_V1_1_1_CacheMetrics_CS;
typedef struct _RedfishProcessorMetrics_V1_1_1_CoreMetrics_CS RedfishProcessorMetrics_V1_1_1_CoreMetrics_CS;
typedef struct _RedfishProcessorMetrics_V1_1_1_OemActions_CS RedfishProcessorMetrics_V1_1_1_OemActions_CS;
typedef struct _RedfishProcessorMetrics_V1_1_1_ProcessorMetrics_CS RedfishProcessorMetrics_V1_1_1_ProcessorMetrics_CS;
#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

//
// The available actions for this resource.
//
typedef struct _RedfishProcessorMetrics_V1_1_1_Actions_CS {
    RedfishProcessorMetrics_V1_1_1_OemActions_CS    *Oem;    // The available OEM-specific
                                                            // actions for this resource.
} RedfishProcessorMetrics_V1_1_1_Actions_CS;

//
// The C-state residency of the processor.
//
typedef struct _RedfishProcessorMetrics_V1_1_1_CStateResidency_CS {
    RedfishCS_char     *Level;              // The C-state level, such as C0,
                                            // C1, or C2.
    RedfishCS_int64    *ResidencyPercent;    // The percentage of time that
                                            // the processor or core has
                                            // spent in this particular level
                                            // of C-state.
} RedfishProcessorMetrics_V1_1_1_CStateResidency_CS;

//
// The processor core metrics.
//
typedef struct _RedfishProcessorMetrics_V1_1_1_CacheMetrics_CS {
    RedfishCS_int64    *CacheMiss;                   // The number of cache line
                                                     // misses in millions.
    RedfishCS_int64    *CacheMissesPerInstruction;    // The number of cache misses per
                                                     // instruction.
    RedfishCS_int64    *HitRatio;                    // The cache line hit ratio.
    RedfishCS_char     *Level;                       // The cache level.
    RedfishCS_int64    *OccupancyBytes;              // The total cache level
                                                     // occupancy in bytes.
    RedfishCS_int64    *OccupancyPercent;            // The total cache occupancy
                                                     // percentage.
} RedfishProcessorMetrics_V1_1_1_CacheMetrics_CS;

//
// The processor core metrics.
//
typedef struct _RedfishProcessorMetrics_V1_1_1_CoreMetrics_CS {
    RedfishProcessorMetrics_V1_1_1_CStateResidency_Array_CS    *CStateResidency;        // The C-state residency of this
                                                                                        // core in the processor.
    RedfishProcessorMetrics_V1_1_1_CacheMetrics_Array_CS       *CoreCache;              // The cache metrics of this core
                                                                                        // in the processor.
    RedfishCS_char                                             *CoreId;                 // The processor core identifier.
    RedfishCS_int64                                            *IOStallCount;           // The number of stalled cycles
                                                                                        // due to I/O operations.
    RedfishCS_int64                                            *InstructionsPerCycle;    // The number of instructions per
                                                                                        // clock cycle of this core.
    RedfishCS_int64                                            *MemoryStallCount;       // The number of stalled cycles
                                                                                        // due to memory operations.
    RedfishCS_int64                                            *UnhaltedCycles;         // The unhalted cycles count of
                                                                                        // this core.
} RedfishProcessorMetrics_V1_1_1_CoreMetrics_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishProcessorMetrics_V1_1_1_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishProcessorMetrics_V1_1_1_OemActions_CS;

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
// The ProcessorMetrics schema contains usage and health statistics for a
// processor.
//
typedef struct _RedfishProcessorMetrics_V1_1_1_ProcessorMetrics_CS {
    RedfishCS_Header                                        Header;
    RedfishCS_char                                          *odata_context;            
    RedfishCS_char                                          *odata_etag;               
    RedfishCS_char                                          *odata_id;                 
    RedfishCS_char                                          *odata_type;               
    RedfishProcessorMetrics_V1_1_1_Actions_CS               *Actions;                      // The available actions for this
                                                                                           // resource.
    RedfishCS_int64                                         *AverageFrequencyMHz;          // The average frequency of the
                                                                                           // processor.
    RedfishCS_int64                                         *BandwidthPercent;             // The CPU bandwidth as a
                                                                                           // percentage.
    RedfishProcessorMetrics_V1_1_1_CacheMetrics_Array_CS    *Cache;                        // The processor cache metrics.
    RedfishCS_int64                                         *ConsumedPowerWatt;            // The power, in watts, that the
                                                                                           // processor has consumed.
    RedfishProcessorMetrics_V1_1_1_CoreMetrics_Array_CS     *CoreMetrics;                  // The processor core metrics.
    RedfishCS_char                                          *Description;              
    RedfishCS_int64                                         *FrequencyRatio;               // The frequency relative to the
                                                                                           // nominal processor frequency
                                                                                           // ratio.
    RedfishCS_char                                          *Id;                       
    RedfishCS_int64                                         *KernelPercent;                // The percentage of time spent
                                                                                           // in kernel mode.
    RedfishCS_int64                                         *LocalMemoryBandwidthBytes;    // The local memory bandwidth
                                                                                           // usage in bytes.
    RedfishCS_char                                          *Name;                     
    RedfishResource_Oem_CS                                  *Oem;                          // The OEM extension property.
    RedfishCS_int64                                         *OperatingSpeedMHz;            // Operating speed of the
                                                                                           // processor in MHz.
    RedfishCS_int64                                         *RemoteMemoryBandwidthBytes;    // The remote memory bandwidth
                                                                                           // usage in bytes.
    RedfishCS_int64                                         *TemperatureCelsius;           // The temperature of the
                                                                                           // processor.
    RedfishCS_int64                                         *ThrottlingCelsius;            // The CPU margin to throttle
                                                                                           // (temperature offset in degree
                                                                                           // Celsius).
    RedfishCS_int64                                         *UserPercent;                  // The percentage of time spent
                                                                                           // in user mode.
} RedfishProcessorMetrics_V1_1_1_ProcessorMetrics_CS;

typedef struct _RedfishProcessorMetrics_V1_1_1_CStateResidency_Array_CS  {
    RedfishProcessorMetrics_V1_1_1_CStateResidency_Array_CS    *Next;
    RedfishProcessorMetrics_V1_1_1_CStateResidency_CS    *ArrayValue;
} RedfishProcessorMetrics_V1_1_1_CStateResidency_Array_CS;

typedef struct _RedfishProcessorMetrics_V1_1_1_CacheMetrics_Array_CS  {
    RedfishProcessorMetrics_V1_1_1_CacheMetrics_Array_CS    *Next;
    RedfishProcessorMetrics_V1_1_1_CacheMetrics_CS    *ArrayValue;
} RedfishProcessorMetrics_V1_1_1_CacheMetrics_Array_CS;

typedef struct _RedfishProcessorMetrics_V1_1_1_CoreMetrics_Array_CS  {
    RedfishProcessorMetrics_V1_1_1_CoreMetrics_Array_CS    *Next;
    RedfishProcessorMetrics_V1_1_1_CoreMetrics_CS    *ArrayValue;
} RedfishProcessorMetrics_V1_1_1_CoreMetrics_Array_CS;

RedfishCS_status
Json_ProcessorMetrics_V1_1_1_To_CS (char *JsonRawText, RedfishProcessorMetrics_V1_1_1_ProcessorMetrics_CS **ReturnedCS);

RedfishCS_status
CS_To_ProcessorMetrics_V1_1_1_JSON (RedfishProcessorMetrics_V1_1_1_ProcessorMetrics_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyProcessorMetrics_V1_1_1_CS (RedfishProcessorMetrics_V1_1_1_ProcessorMetrics_CS *CSPtr);

RedfishCS_status
DestroyProcessorMetrics_V1_1_1_Json (RedfishCS_char *JsonText);

#endif
