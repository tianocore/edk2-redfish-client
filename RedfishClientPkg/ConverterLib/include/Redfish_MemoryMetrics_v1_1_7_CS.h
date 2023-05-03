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

#ifndef RedfishMemorymetrics_V1_1_7_CSTRUCT_H_
#define RedfishMemorymetrics_V1_1_7_CSTRUCT_H_

#include "RedfishCsCommon.h"

typedef struct _RedfishMemoryMetrics_V1_1_7_Actions_CS RedfishMemoryMetrics_V1_1_7_Actions_CS;
typedef struct _RedfishMemoryMetrics_V1_1_7_AlarmTrips_CS RedfishMemoryMetrics_V1_1_7_AlarmTrips_CS;
typedef struct _RedfishMemoryMetrics_V1_1_7_ClearCurrentPeriod_CS RedfishMemoryMetrics_V1_1_7_ClearCurrentPeriod_CS;
typedef struct _RedfishMemoryMetrics_V1_1_7_CurrentPeriod_CS RedfishMemoryMetrics_V1_1_7_CurrentPeriod_CS;
typedef struct _RedfishMemoryMetrics_V1_1_7_HealthData_CS RedfishMemoryMetrics_V1_1_7_HealthData_CS;
typedef struct _RedfishMemoryMetrics_V1_1_7_LifeTime_CS RedfishMemoryMetrics_V1_1_7_LifeTime_CS;
typedef struct _RedfishMemoryMetrics_V1_1_7_MemoryMetrics_CS RedfishMemoryMetrics_V1_1_7_MemoryMetrics_CS;
typedef struct _RedfishMemoryMetrics_V1_1_7_OemActions_CS RedfishMemoryMetrics_V1_1_7_OemActions_CS;
#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

//
// The available actions for this resource.
//
typedef struct _RedfishMemoryMetrics_V1_1_7_Actions_CS {
    RedfishMemoryMetrics_V1_1_7_ClearCurrentPeriod_CS    *MemoryMetrics_ClearCurrentPeriod;
    RedfishMemoryMetrics_V1_1_7_OemActions_CS            *Oem;                                // The available OEM-specific
                                                                                              // actions for this resource.
} RedfishMemoryMetrics_V1_1_7_Actions_CS;

//
// The alarm trip information about the memory.  These alarms are reset when the
// system resets.  Note that if they are re-discovered they can be reasserted.
//
typedef struct _RedfishMemoryMetrics_V1_1_7_AlarmTrips_CS {
    RedfishCS_bool    *AddressParityError;      // An indication of whether an
                                                // address parity error was
                                                // detected that a retry could
                                                // not correct.
    RedfishCS_bool    *CorrectableECCError;     // An indication of whether the
                                                // correctable error threshold
                                                // crossing alarm trip was
                                                // detected.
    RedfishCS_bool    *SpareBlock;              // An indication of whether the
                                                // spare block capacity crossing
                                                // alarm trip was detected.
    RedfishCS_bool    *Temperature;             // An indication of whether a
                                                // temperature threshold alarm
                                                // trip was detected.
    RedfishCS_bool    *UncorrectableECCError;    // An indication of whether the
                                                // uncorrectable error threshold
                                                // alarm trip was detected.
} RedfishMemoryMetrics_V1_1_7_AlarmTrips_CS;

//
// This action sets the CurrentPeriod property's values to 0.
//
typedef struct _RedfishMemoryMetrics_V1_1_7_ClearCurrentPeriod_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishMemoryMetrics_V1_1_7_ClearCurrentPeriod_CS;

//
// The memory metrics since the last system reset or ClearCurrentPeriod action.
//
typedef struct _RedfishMemoryMetrics_V1_1_7_CurrentPeriod_CS {
    RedfishCS_int64    *BlocksRead;      // The number of blocks read
                                         // since reset.
    RedfishCS_int64    *BlocksWritten;    // The number of blocks written
                                         // since reset.
} RedfishMemoryMetrics_V1_1_7_CurrentPeriod_CS;

//
// The health information of the memory.
//
typedef struct _RedfishMemoryMetrics_V1_1_7_HealthData_CS {
    RedfishMemoryMetrics_V1_1_7_AlarmTrips_CS    *AlarmTrips;                      // Alarm trip information about
                                                                                   // the memory.
    RedfishCS_bool                               *DataLossDetected;                // An indication of whether data
                                                                                   // loss was detected.
    RedfishCS_bool                               *LastShutdownSuccess;             // An indication of whether the
                                                                                   // last shutdown succeeded.
    RedfishCS_bool                               *PerformanceDegraded;             // An indication of whether
                                                                                   // performance has degraded.
    RedfishCS_int64                              *PredictedMediaLifeLeftPercent;    // The percentage of reads and
                                                                                   // writes that are predicted to
                                                                                   // still be available for the
                                                                                   // media.
    RedfishCS_int64                              *RemainingSpareBlockPercentage;    // The remaining spare blocks, as
                                                                                   // a percentage.
} RedfishMemoryMetrics_V1_1_7_HealthData_CS;

//
// The memory metrics for the lifetime of the memory.
//
typedef struct _RedfishMemoryMetrics_V1_1_7_LifeTime_CS {
    RedfishCS_int64    *BlocksRead;      // The number of blocks read for
                                         // the lifetime of the memory.
    RedfishCS_int64    *BlocksWritten;    // The number of blocks written
                                         // for the lifetime of the
                                         // memory.
} RedfishMemoryMetrics_V1_1_7_LifeTime_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishMemoryMetrics_V1_1_7_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishMemoryMetrics_V1_1_7_OemActions_CS;

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
// The usage and health statistics for a memory device or system memory summary.
//
typedef struct _RedfishMemoryMetrics_V1_1_7_MemoryMetrics_CS {
    RedfishCS_Header                                Header;
    RedfishCS_char                                  *odata_context;
    RedfishCS_char                                  *odata_etag;   
    RedfishCS_char                                  *odata_id;     
    RedfishCS_char                                  *odata_type;   
    RedfishMemoryMetrics_V1_1_7_Actions_CS          *Actions;          // The available actions for this
                                                                       // resource.
    RedfishCS_int64                                 *BlockSizeBytes;    // The block size, in bytes.
    RedfishMemoryMetrics_V1_1_7_CurrentPeriod_CS    *CurrentPeriod;    // The memory metrics since the
                                                                       // last reset or
                                                                       // ClearCurrentPeriod action.
    RedfishCS_char                                  *Description;  
    RedfishMemoryMetrics_V1_1_7_HealthData_CS       *HealthData;       // The health information of the
                                                                       // memory.
    RedfishCS_char                                  *Id;           
    RedfishMemoryMetrics_V1_1_7_LifeTime_CS         *LifeTime;         // The memory metrics for the
                                                                       // lifetime of the memory.
    RedfishCS_char                                  *Name;         
    RedfishResource_Oem_CS                          *Oem;              // The OEM extension property.
} RedfishMemoryMetrics_V1_1_7_MemoryMetrics_CS;

RedfishCS_status
Json_MemoryMetrics_V1_1_7_To_CS (char *JsonRawText, RedfishMemoryMetrics_V1_1_7_MemoryMetrics_CS **ReturnedCS);

RedfishCS_status
CS_To_MemoryMetrics_V1_1_7_JSON (RedfishMemoryMetrics_V1_1_7_MemoryMetrics_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyMemoryMetrics_V1_1_7_CS (RedfishMemoryMetrics_V1_1_7_MemoryMetrics_CS *CSPtr);

RedfishCS_status
DestroyMemoryMetrics_V1_1_7_Json (RedfishCS_char *JsonText);

#endif
