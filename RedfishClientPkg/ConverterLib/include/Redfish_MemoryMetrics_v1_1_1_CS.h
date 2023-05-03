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

#ifndef RedfishMemorymetrics_V1_1_1_CSTRUCT_H_
#define RedfishMemorymetrics_V1_1_1_CSTRUCT_H_

#include "RedfishCsCommon.h"

typedef struct _RedfishMemoryMetrics_V1_1_1_AlarmTrips_CS RedfishMemoryMetrics_V1_1_1_AlarmTrips_CS;
typedef struct _RedfishMemoryMetrics_V1_1_1_ClearCurrentPeriod_CS RedfishMemoryMetrics_V1_1_1_ClearCurrentPeriod_CS;
typedef struct _RedfishMemoryMetrics_V1_1_1_CurrentPeriod_CS RedfishMemoryMetrics_V1_1_1_CurrentPeriod_CS;
typedef struct _RedfishMemoryMetrics_V1_1_1_HealthData_CS RedfishMemoryMetrics_V1_1_1_HealthData_CS;
typedef struct _RedfishMemoryMetrics_V1_1_1_LifeTime_CS RedfishMemoryMetrics_V1_1_1_LifeTime_CS;
typedef struct _RedfishMemoryMetrics_V1_1_1_MemoryMetrics_CS RedfishMemoryMetrics_V1_1_1_MemoryMetrics_CS;
typedef struct _RedfishMemoryMetrics_V1_1_1_MemoryMetrics_Actions_CS RedfishMemoryMetrics_V1_1_1_MemoryMetrics_Actions_CS;
typedef struct _RedfishMemoryMetrics_V1_1_1_MemoryMetrics_Actions_Oem_CS RedfishMemoryMetrics_V1_1_1_MemoryMetrics_Actions_Oem_CS;
#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

typedef struct _RedfishMemoryMetrics_V1_1_1_AlarmTrips_CS {
    RedfishCS_bool    *AddressParityError;      // Address parity error detected
                                                // status.
    RedfishCS_bool    *CorrectableECCError;     // Correctable data error
                                                // threshold crossing alarm trip
                                                // detected status.
    RedfishCS_bool    *SpareBlock;              // Spare block capacity crossing
                                                // alarm trip detected status.
    RedfishCS_bool    *Temperature;             // Temperature threshold crossing
                                                // alarm trip detected status.
    RedfishCS_bool    *UncorrectableECCError;    // Uncorrectable data error
                                                // threshold crossing alarm trip
                                                // detected status.
} RedfishMemoryMetrics_V1_1_1_AlarmTrips_CS;

//
// This sets the CurrentPeriod object values to zero.
//
typedef struct _RedfishMemoryMetrics_V1_1_1_ClearCurrentPeriod_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishMemoryMetrics_V1_1_1_ClearCurrentPeriod_CS;

//
// This object contains the Memory metrics since last reset or ClearCurrentPeriod
// action.
//
typedef struct _RedfishMemoryMetrics_V1_1_1_CurrentPeriod_CS {
    RedfishCS_int64    *BlocksRead;      // Number of blocks read since
                                         // reset.
    RedfishCS_char     *BlocksWritten;    // Number of blocks written since
                                         // reset.
} RedfishMemoryMetrics_V1_1_1_CurrentPeriod_CS;

typedef struct _RedfishMemoryMetrics_V1_1_1_HealthData_CS {
    RedfishMemoryMetrics_V1_1_1_AlarmTrips_CS    *AlarmTrips;                      // Alarm trip information about
                                                                                   // the memory.
    RedfishCS_bool                               *DataLossDetected;                // Data loss detection status.
    RedfishCS_bool                               *LastShutdownSuccess;             // Status of last shutdown.
    RedfishCS_bool                               *PerformanceDegraded;             // Performance degraded mode
                                                                                   // status.
    RedfishCS_int64                              *PredictedMediaLifeLeftPercent;    // The percentage of reads and
                                                                                   // writes that are predicted to
                                                                                   // still be available for the
                                                                                   // media.
    RedfishCS_int64                              *RemainingSpareBlockPercentage;    // Remaining spare blocks in
                                                                                   // percentage.
} RedfishMemoryMetrics_V1_1_1_HealthData_CS;

//
// This objects contains the Memory metrics for the lifetime of the Memory.
//
typedef struct _RedfishMemoryMetrics_V1_1_1_LifeTime_CS {
    RedfishCS_int64    *BlocksRead;      // Number of blocks read for the
                                         // lifetime of the Memory.
    RedfishCS_char     *BlocksWritten;    // Number of blocks written for
                                         // the lifetime of the Memory.
} RedfishMemoryMetrics_V1_1_1_LifeTime_CS;

//
// The available actions for this resource.
//
typedef struct _RedfishMemoryMetrics_V1_1_1_MemoryMetrics_Actions_CS {
    RedfishMemoryMetrics_V1_1_1_ClearCurrentPeriod_CS           *MemoryMetrics_ClearCurrentPeriod;
    RedfishMemoryMetrics_V1_1_1_MemoryMetrics_Actions_Oem_CS    *Oem;                            
} RedfishMemoryMetrics_V1_1_1_MemoryMetrics_Actions_CS;

typedef struct _RedfishMemoryMetrics_V1_1_1_MemoryMetrics_Actions_Oem_CS {
    RedfishCS_Link    Prop;
} RedfishMemoryMetrics_V1_1_1_MemoryMetrics_Actions_Oem_CS;

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
// MemoryMetrics contains usage and health statistics for a single Memory module
// or device instance.
//
typedef struct _RedfishMemoryMetrics_V1_1_1_MemoryMetrics_CS {
    RedfishCS_Header                                        Header;
    RedfishCS_char                                          *odata_context;
    RedfishCS_char                                          *odata_id;     
    RedfishCS_char                                          *odata_type;   
    RedfishMemoryMetrics_V1_1_1_MemoryMetrics_Actions_CS    *Actions;          // The available actions for this
                                                                               // resource.
    RedfishCS_int64                                         *BlockSizeBytes;    // Block size in bytes.
    RedfishMemoryMetrics_V1_1_1_CurrentPeriod_CS            *CurrentPeriod;    // This object describes the
                                                                               // central memory of the system
                                                                               // in general detail.
    RedfishCS_char                                          *Description;  
    RedfishMemoryMetrics_V1_1_1_HealthData_CS               *HealthData;       // This object describes the
                                                                               // central memory of the system
                                                                               // in general detail.
    RedfishCS_char                                          *Id;           
    RedfishMemoryMetrics_V1_1_1_LifeTime_CS                 *LifeTime;         // This object describes the
                                                                               // central memory of the system
                                                                               // in general detail.
    RedfishCS_char                                          *Name;         
    RedfishResource_Oem_CS                                  *Oem;              // This is the
                                                                               // manufacturer/provider specific
                                                                               // extension moniker used to
                                                                               // divide the Oem object into
                                                                               // sections.
} RedfishMemoryMetrics_V1_1_1_MemoryMetrics_CS;

RedfishCS_status
Json_MemoryMetrics_V1_1_1_To_CS (char *JsonRawText, RedfishMemoryMetrics_V1_1_1_MemoryMetrics_CS **ReturnedCS);

RedfishCS_status
CS_To_MemoryMetrics_V1_1_1_JSON (RedfishMemoryMetrics_V1_1_1_MemoryMetrics_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyMemoryMetrics_V1_1_1_CS (RedfishMemoryMetrics_V1_1_1_MemoryMetrics_CS *CSPtr);

RedfishCS_status
DestroyMemoryMetrics_V1_1_1_Json (RedfishCS_char *JsonText);

#endif
