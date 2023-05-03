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

#ifndef RedfishEnvironmentmetrics_V1_0_0_CSTRUCT_H_
#define RedfishEnvironmentmetrics_V1_0_0_CSTRUCT_H_

#include "RedfishCsCommon.h"

typedef struct _RedfishEnvironmentMetrics_V1_0_0_Actions_CS RedfishEnvironmentMetrics_V1_0_0_Actions_CS;
typedef struct _RedfishEnvironmentMetrics_V1_0_0_EnvironmentMetrics_CS RedfishEnvironmentMetrics_V1_0_0_EnvironmentMetrics_CS;
typedef struct _RedfishEnvironmentMetrics_V1_0_0_OemActions_CS RedfishEnvironmentMetrics_V1_0_0_OemActions_CS;
typedef struct _RedfishEnvironmentMetrics_V1_0_0_ResetMetrics_CS RedfishEnvironmentMetrics_V1_0_0_ResetMetrics_CS;
#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

//
// The available actions for this resource.
//
typedef struct _RedfishEnvironmentMetrics_V1_0_0_Actions_CS {
    RedfishEnvironmentMetrics_V1_0_0_ResetMetrics_CS    *EnvironmentMetrics_ResetMetrics;
    RedfishEnvironmentMetrics_V1_0_0_OemActions_CS      *Oem;                               // The available OEM-specific
                                                                                            // actions for this resource.
} RedfishEnvironmentMetrics_V1_0_0_Actions_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishEnvironmentMetrics_V1_0_0_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishEnvironmentMetrics_V1_0_0_OemActions_CS;

//
// This action resets the summary metrics related to this equipment.
//
typedef struct _RedfishEnvironmentMetrics_V1_0_0_ResetMetrics_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishEnvironmentMetrics_V1_0_0_ResetMetrics_CS;

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
// The EnvironmentMetrics schema represents the environmental metrics of a device.
//
typedef struct _RedfishEnvironmentMetrics_V1_0_0_EnvironmentMetrics_CS {
    RedfishCS_Header                               Header;
    RedfishCS_char                                 *odata_context;             
    RedfishCS_char                                 *odata_etag;                
    RedfishCS_char                                 *odata_id;                  
    RedfishCS_char                                 *odata_type;                
    RedfishEnvironmentMetrics_V1_0_0_Actions_CS    *Actions;                       // The available actions for this
                                                                                   // resource.
    RedfishCS_char                                 *Description;               
    RedfishCS_Link                                 EnergykWh;                      // Energy consumption (kWh).
    RedfishCS_Link                                 FanSpeedsPercent;               // Fan speeds (percent).
    RedfishCS_int64                                *FanSpeedsPercentodata_count;
    RedfishCS_Link                                 HumidityPercent;                // Humidity (percent).
    RedfishCS_char                                 *Id;                        
    RedfishCS_char                                 *Name;                      
    RedfishResource_Oem_CS                         *Oem;                           // The OEM extension property.
    RedfishCS_Link                                 PowerWatts;                     // Power consumption (Watts).
    RedfishCS_Link                                 TemperatureCelsius;             // Temperature (Celsius).
} RedfishEnvironmentMetrics_V1_0_0_EnvironmentMetrics_CS;

RedfishCS_status
Json_EnvironmentMetrics_V1_0_0_To_CS (char *JsonRawText, RedfishEnvironmentMetrics_V1_0_0_EnvironmentMetrics_CS **ReturnedCS);

RedfishCS_status
CS_To_EnvironmentMetrics_V1_0_0_JSON (RedfishEnvironmentMetrics_V1_0_0_EnvironmentMetrics_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyEnvironmentMetrics_V1_0_0_CS (RedfishEnvironmentMetrics_V1_0_0_EnvironmentMetrics_CS *CSPtr);

RedfishCS_status
DestroyEnvironmentMetrics_V1_0_0_Json (RedfishCS_char *JsonText);

#endif
