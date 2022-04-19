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

#ifndef RedfishSwitchmetrics_V1_0_0_CSTRUCT_H_
#define RedfishSwitchmetrics_V1_0_0_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

typedef struct _RedfishSwitchMetrics_V1_0_0_Actions_CS RedfishSwitchMetrics_V1_0_0_Actions_CS;
typedef struct _RedfishSwitchMetrics_V1_0_0_ClearCurrentPeriod_CS RedfishSwitchMetrics_V1_0_0_ClearCurrentPeriod_CS;
typedef struct _RedfishSwitchMetrics_V1_0_0_CurrentPeriod_CS RedfishSwitchMetrics_V1_0_0_CurrentPeriod_CS;
typedef struct _RedfishSwitchMetrics_V1_0_0_InternalMemoryMetrics_CS RedfishSwitchMetrics_V1_0_0_InternalMemoryMetrics_CS;
typedef struct _RedfishSwitchMetrics_V1_0_0_LifeTime_CS RedfishSwitchMetrics_V1_0_0_LifeTime_CS;
typedef struct _RedfishSwitchMetrics_V1_0_0_OemActions_CS RedfishSwitchMetrics_V1_0_0_OemActions_CS;
typedef struct _RedfishSwitchMetrics_V1_0_0_SwitchMetrics_CS RedfishSwitchMetrics_V1_0_0_SwitchMetrics_CS;
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
// The available actions for this resource.
//
typedef struct _RedfishSwitchMetrics_V1_0_0_Actions_CS {
    RedfishSwitchMetrics_V1_0_0_ClearCurrentPeriod_CS    *SwitchMetrics_ClearCurrentPeriod;
    RedfishSwitchMetrics_V1_0_0_OemActions_CS            *Oem;                                // The available OEM-specific
                                                                                              // actions for this resource.
} RedfishSwitchMetrics_V1_0_0_Actions_CS;

//
// This action sets the CurrentPeriod property's values to 0.
//
typedef struct _RedfishSwitchMetrics_V1_0_0_ClearCurrentPeriod_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishSwitchMetrics_V1_0_0_ClearCurrentPeriod_CS;

//
// The memory metrics since the last switch reset or ClearCurrentPeriod action for
// a switch.
//
typedef struct _RedfishSwitchMetrics_V1_0_0_CurrentPeriod_CS {
    RedfishCS_int64    *CorrectableECCErrorCount;     // The number of the correctable
                                                      // errors of memory since reset.
    RedfishCS_int64    *UncorrectableECCErrorCount;    // The number of the
                                                      // uncorrectable errors of memory
                                                      // since reset.
} RedfishSwitchMetrics_V1_0_0_CurrentPeriod_CS;

//
// The memory metrics for a switch.
//
typedef struct _RedfishSwitchMetrics_V1_0_0_InternalMemoryMetrics_CS {
    RedfishSwitchMetrics_V1_0_0_CurrentPeriod_CS    *CurrentPeriod;    // The memory metrics since the
                                                                      // last reset for this switch.
    RedfishSwitchMetrics_V1_0_0_LifeTime_CS         *LifeTime;        // The memory metrics for the
                                                                      // lifetime of this switch.
} RedfishSwitchMetrics_V1_0_0_InternalMemoryMetrics_CS;

//
// The memory metrics for the lifetime for a switch.
//
typedef struct _RedfishSwitchMetrics_V1_0_0_LifeTime_CS {
    RedfishCS_int64    *CorrectableECCErrorCount;     // The number of the correctable
                                                      // errors for the lifetime of the
                                                      // memory.
    RedfishCS_int64    *UncorrectableECCErrorCount;    // The number of the
                                                      // uncorrectable errors for the
                                                      // lifetime of the memory.
} RedfishSwitchMetrics_V1_0_0_LifeTime_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishSwitchMetrics_V1_0_0_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishSwitchMetrics_V1_0_0_OemActions_CS;

//
// The SwitchMetrics schema contains usage and health statistics for a switch
// device.
//
typedef struct _RedfishSwitchMetrics_V1_0_0_SwitchMetrics_CS {
    RedfishCS_Header                                        Header;
    RedfishCS_char                                          *odata_context;       
    RedfishCS_char                                          *odata_etag;          
    RedfishCS_char                                          *odata_id;            
    RedfishCS_char                                          *odata_type;          
    RedfishSwitchMetrics_V1_0_0_Actions_CS                  *Actions;                 // The available actions for this
                                                                                      // resource.
    RedfishCS_char                                          *Description;         
    RedfishCS_char                                          *Id;                  
    RedfishSwitchMetrics_V1_0_0_InternalMemoryMetrics_CS    *InternalMemoryMetrics;    // The memory metrics for a
                                                                                      // switch.
    RedfishCS_char                                          *Name;                
    RedfishResource_Oem_CS                                  *Oem;                     // The OEM extension property.
    RedfishCS_Link                                          PCIeErrors;               // The PCIe errors associated
                                                                                      // with this switch.
} RedfishSwitchMetrics_V1_0_0_SwitchMetrics_CS;

RedfishCS_status
Json_SwitchMetrics_V1_0_0_To_CS (char *JsonRawText, RedfishSwitchMetrics_V1_0_0_SwitchMetrics_CS **ReturnedCS);

RedfishCS_status
CS_To_SwitchMetrics_V1_0_0_JSON (RedfishSwitchMetrics_V1_0_0_SwitchMetrics_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroySwitchMetrics_V1_0_0_CS (RedfishSwitchMetrics_V1_0_0_SwitchMetrics_CS *CSPtr);

RedfishCS_status
DestroySwitchMetrics_V1_0_0_Json (RedfishCS_char *JsonText);

#endif
