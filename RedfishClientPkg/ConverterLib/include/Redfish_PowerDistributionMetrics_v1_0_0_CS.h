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

#ifndef RedfishPowerdistributionmetrics_V1_0_0_CSTRUCT_H_
#define RedfishPowerdistributionmetrics_V1_0_0_CSTRUCT_H_

#include "RedfishCsCommon.h"

typedef struct _RedfishPowerDistributionMetrics_V1_0_0_Actions_CS RedfishPowerDistributionMetrics_V1_0_0_Actions_CS;
typedef struct _RedfishPowerDistributionMetrics_V1_0_0_OemActions_CS RedfishPowerDistributionMetrics_V1_0_0_OemActions_CS;
typedef struct _RedfishPowerDistributionMetrics_V1_0_0_PowerDistributionMetrics_CS RedfishPowerDistributionMetrics_V1_0_0_PowerDistributionMetrics_CS;
typedef struct _RedfishPowerDistributionMetrics_V1_0_0_ResetMetrics_CS RedfishPowerDistributionMetrics_V1_0_0_ResetMetrics_CS;
#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

//
// The available actions for this resource.
//
typedef struct _RedfishPowerDistributionMetrics_V1_0_0_Actions_CS {
    RedfishPowerDistributionMetrics_V1_0_0_ResetMetrics_CS    *PowerDistributionMetrics_ResetMetrics;
    RedfishPowerDistributionMetrics_V1_0_0_OemActions_CS      *Oem;                                     // The available OEM-specific
                                                                                                        // actions for this resource.
} RedfishPowerDistributionMetrics_V1_0_0_Actions_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishPowerDistributionMetrics_V1_0_0_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishPowerDistributionMetrics_V1_0_0_OemActions_CS;

//
// This action resets the summary metrics related to this equipment.
//
typedef struct _RedfishPowerDistributionMetrics_V1_0_0_ResetMetrics_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishPowerDistributionMetrics_V1_0_0_ResetMetrics_CS;

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
// This is the schema definition for the metrics of a power distribution component
// or unit, such as a floor power distribution unit (PDU) or switchgear.
//
typedef struct _RedfishPowerDistributionMetrics_V1_0_0_PowerDistributionMetrics_CS {
    RedfishCS_Header                                     Header;
    RedfishCS_char                                       *odata_context;
    RedfishCS_char                                       *odata_etag;  
    RedfishCS_char                                       *odata_id;    
    RedfishCS_char                                       *odata_type;  
    RedfishPowerDistributionMetrics_V1_0_0_Actions_CS    *Actions;         // The available actions for this
                                                                           // resource.
    RedfishCS_char                                       *Description; 
    RedfishCS_Link                                       EnergykWh;        // The energy consumption of this
                                                                           // unit.
    RedfishCS_char                                       *Id;          
    RedfishCS_char                                       *Name;        
    RedfishResource_Oem_CS                               *Oem;             // The OEM extension property.
    RedfishCS_Link                                       PowerWatts;       // The total power reading for
                                                                           // this equipment.
} RedfishPowerDistributionMetrics_V1_0_0_PowerDistributionMetrics_CS;

RedfishCS_status
Json_PowerDistributionMetrics_V1_0_0_To_CS (char *JsonRawText, RedfishPowerDistributionMetrics_V1_0_0_PowerDistributionMetrics_CS **ReturnedCS);

RedfishCS_status
CS_To_PowerDistributionMetrics_V1_0_0_JSON (RedfishPowerDistributionMetrics_V1_0_0_PowerDistributionMetrics_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyPowerDistributionMetrics_V1_0_0_CS (RedfishPowerDistributionMetrics_V1_0_0_PowerDistributionMetrics_CS *CSPtr);

RedfishCS_status
DestroyPowerDistributionMetrics_V1_0_0_Json (RedfishCS_char *JsonText);

#endif
