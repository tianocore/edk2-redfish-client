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

#ifndef RedfishNetworkadaptermetrics_V1_0_0_CSTRUCT_H_
#define RedfishNetworkadaptermetrics_V1_0_0_CSTRUCT_H_

#include "RedfishCsCommon.h"

typedef struct _RedfishNetworkAdapterMetrics_V1_0_0_Actions_CS RedfishNetworkAdapterMetrics_V1_0_0_Actions_CS;
typedef struct _RedfishNetworkAdapterMetrics_V1_0_0_NetworkAdapterMetrics_CS RedfishNetworkAdapterMetrics_V1_0_0_NetworkAdapterMetrics_CS;
typedef struct _RedfishNetworkAdapterMetrics_V1_0_0_OemActions_CS RedfishNetworkAdapterMetrics_V1_0_0_OemActions_CS;
#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

//
// The available actions for this resource.
//
typedef struct _RedfishNetworkAdapterMetrics_V1_0_0_Actions_CS {
    RedfishNetworkAdapterMetrics_V1_0_0_OemActions_CS    *Oem;    // The available OEM-specific
                                                                 // actions for this resource.
} RedfishNetworkAdapterMetrics_V1_0_0_Actions_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishNetworkAdapterMetrics_V1_0_0_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishNetworkAdapterMetrics_V1_0_0_OemActions_CS;

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
// The NetworkAdapterMetrics schema contains usage and health statistics for a
// network adapter.
//
typedef struct _RedfishNetworkAdapterMetrics_V1_0_0_NetworkAdapterMetrics_CS {
    RedfishCS_Header                                  Header;
    RedfishCS_char                                    *odata_context;   
    RedfishCS_char                                    *odata_etag;      
    RedfishCS_char                                    *odata_id;        
    RedfishCS_char                                    *odata_type;      
    RedfishNetworkAdapterMetrics_V1_0_0_Actions_CS    *Actions;             // The available actions for this
                                                                            // resource.
    RedfishCS_int64                                   *CPUCorePercent;      // The device CPU core
                                                                            // utilization as a percentage.
    RedfishCS_char                                    *Description;     
    RedfishCS_int64                                   *HostBusRXPercent;    // The host bus, such as PCIe, RX
                                                                            // utilization as a percentage.
    RedfishCS_int64                                   *HostBusTXPercent;    // The host bus, such as PCIe, TX
                                                                            // utilization as a percentage.
    RedfishCS_char                                    *Id;              
    RedfishCS_int64                                   *NCSIRXBytes;         // The total number of NC-SI
                                                                            // bytes received since reset.
    RedfishCS_int64                                   *NCSIRXFrames;        // The total number of NC-SI
                                                                            // frames received since reset.
    RedfishCS_int64                                   *NCSITXBytes;         // The total number of NC-SI
                                                                            // bytes sent since reset.
    RedfishCS_int64                                   *NCSITXFrames;        // The total number of NC-SI
                                                                            // frames sent since reset.
    RedfishCS_char                                    *Name;            
    RedfishResource_Oem_CS                            *Oem;                 // The OEM extension property.
    RedfishCS_int64                                   *RXBytes;             // The total number of bytes
                                                                            // received since reset.
    RedfishCS_int64                                   *RXMulticastFrames;    // The total number of good
                                                                            // multicast frames received
                                                                            // since reset.
    RedfishCS_int64                                   *RXUnicastFrames;     // The total number of good
                                                                            // unicast frames received since
                                                                            // reset.
    RedfishCS_int64                                   *TXBytes;             // The total number of bytes
                                                                            // transmitted since reset.
    RedfishCS_int64                                   *TXMulticastFrames;    // The total number of good
                                                                            // multicast frames transmitted
                                                                            // since reset.
    RedfishCS_int64                                   *TXUnicastFrames;     // The total number of good
                                                                            // unicast frames transmitted
                                                                            // since reset.
} RedfishNetworkAdapterMetrics_V1_0_0_NetworkAdapterMetrics_CS;

RedfishCS_status
Json_NetworkAdapterMetrics_V1_0_0_To_CS (char *JsonRawText, RedfishNetworkAdapterMetrics_V1_0_0_NetworkAdapterMetrics_CS **ReturnedCS);

RedfishCS_status
CS_To_NetworkAdapterMetrics_V1_0_0_JSON (RedfishNetworkAdapterMetrics_V1_0_0_NetworkAdapterMetrics_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyNetworkAdapterMetrics_V1_0_0_CS (RedfishNetworkAdapterMetrics_V1_0_0_NetworkAdapterMetrics_CS *CSPtr);

RedfishCS_status
DestroyNetworkAdapterMetrics_V1_0_0_Json (RedfishCS_char *JsonText);

#endif
