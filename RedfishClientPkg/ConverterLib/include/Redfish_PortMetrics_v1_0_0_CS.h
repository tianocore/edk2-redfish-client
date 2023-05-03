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

#ifndef RedfishPortmetrics_V1_0_0_CSTRUCT_H_
#define RedfishPortmetrics_V1_0_0_CSTRUCT_H_

#include "RedfishCsCommon.h"

typedef struct _RedfishPortMetrics_V1_0_0_Actions_CS RedfishPortMetrics_V1_0_0_Actions_CS;
typedef struct _RedfishPortMetrics_V1_0_0_GenZ_CS RedfishPortMetrics_V1_0_0_GenZ_CS;
typedef struct _RedfishPortMetrics_V1_0_0_OemActions_CS RedfishPortMetrics_V1_0_0_OemActions_CS;
typedef struct _RedfishPortMetrics_V1_0_0_PortMetrics_CS RedfishPortMetrics_V1_0_0_PortMetrics_CS;
#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

//
// The available actions for this Resource.
//
typedef struct _RedfishPortMetrics_V1_0_0_Actions_CS {
    RedfishPortMetrics_V1_0_0_OemActions_CS    *Oem;    // The available OEM-specific
                                                       // actions for this Resource.
} RedfishPortMetrics_V1_0_0_Actions_CS;

//
// The port metrics for a Gen-Z interface.
//
typedef struct _RedfishPortMetrics_V1_0_0_GenZ_CS {
    RedfishCS_int64    *AccessKeyViolations;      // The total number of Access Key
                                                  // Violations detected.
    RedfishCS_int64    *EndToEndCRCErrors;        // The total number of ECRC
                                                  // transient errors detected.
    RedfishCS_int64    *LLRRecovery;              // The total number of times
                                                  // Link-Level Reliability (LLR)
                                                  // recovery has been initiated.
    RedfishCS_int64    *LinkNTE;                  // The total number of link-local
                                                  // non-transient errors detected.
    RedfishCS_int64    *MarkedECN;                // The number of packets with the
                                                  // Congestion ECN bit set.
    RedfishCS_int64    *NonCRCTransientErrors;    // The total number transient
                                                  // errors detected that are
                                                  // unrelated to CRC validation.
    RedfishCS_int64    *PacketCRCErrors;          // The total number of PCRC
                                                  // transient errors detected.
    RedfishCS_int64    *PacketDeadlineDiscards;    // The number of packets
                                                  // discarded due to the
                                                  // Congestion Deadline sub-field
                                                  // reaching zero.
    RedfishCS_int64    *RXStompedECRC;            // The total number of packets
                                                  // received with a stomped ECRC
                                                  // field.
    RedfishCS_int64    *ReceivedECN;              // The number of packets received
                                                  // on this interface with the
                                                  // Congestion ECN bit set.
    RedfishCS_int64    *TXStompedECRC;            // The total number of packets
                                                  // that this interface stomped
                                                  // the ECRC field.
} RedfishPortMetrics_V1_0_0_GenZ_CS;

//
// The available OEM-specific actions for this Resource.
//
typedef struct _RedfishPortMetrics_V1_0_0_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishPortMetrics_V1_0_0_OemActions_CS;

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
// The usage and health statistics for a switch device or component port summary.
//
typedef struct _RedfishPortMetrics_V1_0_0_PortMetrics_CS {
    RedfishCS_Header                        Header;
    RedfishCS_char                          *odata_context;
    RedfishCS_char                          *odata_etag;  
    RedfishCS_char                          *odata_id;    
    RedfishCS_char                          *odata_type;  
    RedfishPortMetrics_V1_0_0_Actions_CS    *Actions;         // The available actions for this
                                                              // Resource.
    RedfishCS_char                          *Description; 
    RedfishPortMetrics_V1_0_0_GenZ_CS       *GenZ;            // The port metrics specific to
                                                              // Gen-Z ports.
    RedfishCS_char                          *Id;          
    RedfishCS_char                          *Name;        
    RedfishResource_Oem_CS                  *Oem;             // The OEM extension property.
} RedfishPortMetrics_V1_0_0_PortMetrics_CS;

RedfishCS_status
Json_PortMetrics_V1_0_0_To_CS (char *JsonRawText, RedfishPortMetrics_V1_0_0_PortMetrics_CS **ReturnedCS);

RedfishCS_status
CS_To_PortMetrics_V1_0_0_JSON (RedfishPortMetrics_V1_0_0_PortMetrics_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyPortMetrics_V1_0_0_CS (RedfishPortMetrics_V1_0_0_PortMetrics_CS *CSPtr);

RedfishCS_status
DestroyPortMetrics_V1_0_0_Json (RedfishCS_char *JsonText);

#endif
