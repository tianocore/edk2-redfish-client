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

#ifndef RedfishNetworkdevicefunctionmetrics_V1_0_0_CSTRUCT_H_
#define RedfishNetworkdevicefunctionmetrics_V1_0_0_CSTRUCT_H_

#include "RedfishCsCommon.h"

typedef struct _RedfishNetworkDeviceFunctionMetrics_V1_0_0_Actions_CS RedfishNetworkDeviceFunctionMetrics_V1_0_0_Actions_CS;
typedef struct _RedfishNetworkDeviceFunctionMetrics_V1_0_0_Ethernet_CS RedfishNetworkDeviceFunctionMetrics_V1_0_0_Ethernet_CS;
typedef struct _RedfishNetworkDeviceFunctionMetrics_V1_0_0_NetworkDeviceFunctionMetrics_CS RedfishNetworkDeviceFunctionMetrics_V1_0_0_NetworkDeviceFunctionMetrics_CS;
typedef struct _RedfishNetworkDeviceFunctionMetrics_V1_0_0_OemActions_CS RedfishNetworkDeviceFunctionMetrics_V1_0_0_OemActions_CS;
#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

//
// The available actions for this resource.
//
typedef struct _RedfishNetworkDeviceFunctionMetrics_V1_0_0_Actions_CS {
    RedfishNetworkDeviceFunctionMetrics_V1_0_0_OemActions_CS    *Oem;    // The available OEM-specific
                                                                        // actions for this resource.
} RedfishNetworkDeviceFunctionMetrics_V1_0_0_Actions_CS;

//
// The network function metrics for an Ethernet interface.
//
typedef struct _RedfishNetworkDeviceFunctionMetrics_V1_0_0_Ethernet_CS {
    RedfishCS_int64    *NumOffloadedIPv4Conns;    // The total number of offloaded
                                                 // TCP/IPv4 connections.
    RedfishCS_int64    *NumOffloadedIPv6Conns;    // The total number of offloaded
                                                 // TCP/IPv6 connections.
} RedfishNetworkDeviceFunctionMetrics_V1_0_0_Ethernet_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishNetworkDeviceFunctionMetrics_V1_0_0_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishNetworkDeviceFunctionMetrics_V1_0_0_OemActions_CS;

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
// The NetworkDeviceFunctionMetrics schema contains usage and health statistics
// for a network function of a network adapter.
//
typedef struct _RedfishNetworkDeviceFunctionMetrics_V1_0_0_NetworkDeviceFunctionMetrics_CS {
    RedfishCS_Header                                          Header;
    RedfishCS_char                                            *odata_context;        
    RedfishCS_char                                            *odata_etag;           
    RedfishCS_char                                            *odata_id;             
    RedfishCS_char                                            *odata_type;           
    RedfishNetworkDeviceFunctionMetrics_V1_0_0_Actions_CS     *Actions;                  // The available actions for this
                                                                                         // resource.
    RedfishCS_char                                            *Description;          
    RedfishNetworkDeviceFunctionMetrics_V1_0_0_Ethernet_CS    *Ethernet;                 // The network function metrics
                                                                                         // specific to Ethernet adapters.
    RedfishCS_char                                            *Id;                   
    RedfishCS_char                                            *Name;                 
    RedfishResource_Oem_CS                                    *Oem;                      // The OEM extension property.
    RedfishCS_int64                                           *RXAvgQueueDepthPercent;    // The average RX queue depth as
                                                                                         // the percentage.
    RedfishCS_int64                                           *RXBytes;                  // The total number of bytes
                                                                                         // received on a network
                                                                                         // function.
    RedfishCS_int64                                           *RXFrames;                 // The total number of frames
                                                                                         // received on a network
                                                                                         // function.
    RedfishCS_int64                                           *RXMulticastFrames;        // The total number of good
                                                                                         // multicast frames received on a
                                                                                         // network function since reset.
    RedfishCS_bool                                            *RXQueuesEmpty;            // Whether nothing is in a
                                                                                         // network function's RX queues
                                                                                         // to DMA.
    RedfishCS_int64                                           *RXQueuesFull;             // The number of RX queues that
                                                                                         // are full.
    RedfishCS_int64                                           *RXUnicastFrames;          // The total number of good
                                                                                         // unicast frames received on a
                                                                                         // network function since reset.
    RedfishCS_int64                                           *TXAvgQueueDepthPercent;    // The average TX queue depth as
                                                                                         // the percentage.
    RedfishCS_int64                                           *TXBytes;                  // The total number of bytes sent
                                                                                         // on a network function.
    RedfishCS_int64                                           *TXFrames;                 // The total number of frames
                                                                                         // sent on a network function.
    RedfishCS_int64                                           *TXMulticastFrames;        // The total number of good
                                                                                         // multicast frames transmitted
                                                                                         // on a network function since
                                                                                         // reset.
    RedfishCS_bool                                            *TXQueuesEmpty;            // Whether all TX queues for a
                                                                                         // network function are empty.
    RedfishCS_int64                                           *TXQueuesFull;             // The number of TX queues that
                                                                                         // are full.
    RedfishCS_int64                                           *TXUnicastFrames;          // The total number of good
                                                                                         // unicast frames transmitted on
                                                                                         // a network function since
                                                                                         // reset.
} RedfishNetworkDeviceFunctionMetrics_V1_0_0_NetworkDeviceFunctionMetrics_CS;

RedfishCS_status
Json_NetworkDeviceFunctionMetrics_V1_0_0_To_CS (char *JsonRawText, RedfishNetworkDeviceFunctionMetrics_V1_0_0_NetworkDeviceFunctionMetrics_CS **ReturnedCS);

RedfishCS_status
CS_To_NetworkDeviceFunctionMetrics_V1_0_0_JSON (RedfishNetworkDeviceFunctionMetrics_V1_0_0_NetworkDeviceFunctionMetrics_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyNetworkDeviceFunctionMetrics_V1_0_0_CS (RedfishNetworkDeviceFunctionMetrics_V1_0_0_NetworkDeviceFunctionMetrics_CS *CSPtr);

RedfishCS_status
DestroyNetworkDeviceFunctionMetrics_V1_0_0_Json (RedfishCS_char *JsonText);

#endif
