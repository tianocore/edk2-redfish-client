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

#ifndef RedfishThermalmetrics_V1_0_0_CSTRUCT_H_
#define RedfishThermalmetrics_V1_0_0_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

typedef struct _RedfishThermalMetrics_V1_0_0_Actions_CS RedfishThermalMetrics_V1_0_0_Actions_CS;
typedef struct _RedfishThermalMetrics_V1_0_0_OemActions_CS RedfishThermalMetrics_V1_0_0_OemActions_CS;
typedef struct _RedfishThermalMetrics_V1_0_0_ResetMetrics_CS RedfishThermalMetrics_V1_0_0_ResetMetrics_CS;
typedef struct _RedfishThermalMetrics_V1_0_0_TemperatureSummary_CS RedfishThermalMetrics_V1_0_0_TemperatureSummary_CS;
typedef struct _RedfishThermalMetrics_V1_0_0_ThermalMetrics_CS RedfishThermalMetrics_V1_0_0_ThermalMetrics_CS;
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
typedef struct _RedfishThermalMetrics_V1_0_0_Actions_CS {
    RedfishThermalMetrics_V1_0_0_ResetMetrics_CS    *ThermalMetrics_ResetMetrics;
    RedfishThermalMetrics_V1_0_0_OemActions_CS      *Oem;                           // The available OEM-specific
                                                                                    // actions for this resource.
} RedfishThermalMetrics_V1_0_0_Actions_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishThermalMetrics_V1_0_0_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishThermalMetrics_V1_0_0_OemActions_CS;

//
// This action resets the summary metrics related to this equipment.
//
typedef struct _RedfishThermalMetrics_V1_0_0_ResetMetrics_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishThermalMetrics_V1_0_0_ResetMetrics_CS;

//
// The temperature sensors for a subsystem.
//
typedef struct _RedfishThermalMetrics_V1_0_0_TemperatureSummary_CS {
    RedfishCS_Link    Ambient;    // The ambient temperature of
                                  // this subsystem.
    RedfishCS_Link    Exhaust;    // The exhaust temperature of
                                  // this subsystem.
    RedfishCS_Link    Intake;     // The intake temperature of this
                                  // subsystem.
    RedfishCS_Link    Internal;    // The internal temperature of
                                  // this subsystem.
} RedfishThermalMetrics_V1_0_0_TemperatureSummary_CS;

//
// The ThermalMetrics schema represents the thermal metrics of a chassis.
//
typedef struct _RedfishThermalMetrics_V1_0_0_ThermalMetrics_CS {
    RedfishCS_Header                                      Header;
    RedfishCS_char                                        *odata_context;                       
    RedfishCS_char                                        *odata_etag;                          
    RedfishCS_char                                        *odata_id;                            
    RedfishCS_char                                        *odata_type;                          
    RedfishThermalMetrics_V1_0_0_Actions_CS               *Actions;                                 // The available actions for this
                                                                                                    // resource.
    RedfishCS_char                                        *Description;                         
    RedfishCS_char                                        *Id;                                  
    RedfishCS_char                                        *Name;                                
    RedfishResource_Oem_CS                                *Oem;                                     // The OEM extension property.
    RedfishCS_Link                                        TemperatureReadingsCelsius;               // The temperature readings from
                                                                                                    // all related sensors for this
                                                                                                    // device.
    RedfishCS_int64                                       *TemperatureReadingsCelsiusodata_count;
    RedfishThermalMetrics_V1_0_0_TemperatureSummary_CS    *TemperatureSummaryCelsius;               // The summary temperature
                                                                                                    // readings for this chassis.
} RedfishThermalMetrics_V1_0_0_ThermalMetrics_CS;

RedfishCS_status
Json_ThermalMetrics_V1_0_0_To_CS (char *JsonRawText, RedfishThermalMetrics_V1_0_0_ThermalMetrics_CS **ReturnedCS);

RedfishCS_status
CS_To_ThermalMetrics_V1_0_0_JSON (RedfishThermalMetrics_V1_0_0_ThermalMetrics_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyThermalMetrics_V1_0_0_CS (RedfishThermalMetrics_V1_0_0_ThermalMetrics_CS *CSPtr);

RedfishCS_status
DestroyThermalMetrics_V1_0_0_Json (RedfishCS_char *JsonText);

#endif
