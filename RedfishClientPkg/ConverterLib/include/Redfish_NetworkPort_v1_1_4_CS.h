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

#ifndef RedfishNetworkport_V1_1_4_CSTRUCT_H_
#define RedfishNetworkport_V1_1_4_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishNetworkPort_V1_1_4_NetDevFuncMaxBWAlloc_Array_CS RedfishNetworkPort_V1_1_4_NetDevFuncMaxBWAlloc_Array_CS;
typedef struct _RedfishNetworkPort_V1_1_4_NetDevFuncMinBWAlloc_Array_CS RedfishNetworkPort_V1_1_4_NetDevFuncMinBWAlloc_Array_CS;
typedef struct _RedfishNetworkPort_V1_1_4_SupportedLinkCapabilities_Array_CS RedfishNetworkPort_V1_1_4_SupportedLinkCapabilities_Array_CS;
typedef struct _RedfishNetworkPort_V1_1_4_Actions_CS RedfishNetworkPort_V1_1_4_Actions_CS;
typedef struct _RedfishNetworkPort_V1_1_4_NetDevFuncMaxBWAlloc_CS RedfishNetworkPort_V1_1_4_NetDevFuncMaxBWAlloc_CS;
typedef struct _RedfishNetworkPort_V1_1_4_NetDevFuncMinBWAlloc_CS RedfishNetworkPort_V1_1_4_NetDevFuncMinBWAlloc_CS;
typedef struct _RedfishNetworkPort_V1_1_4_NetworkPort_CS RedfishNetworkPort_V1_1_4_NetworkPort_CS;
typedef struct _RedfishNetworkPort_V1_1_4_OemActions_CS RedfishNetworkPort_V1_1_4_OemActions_CS;
typedef struct _RedfishNetworkPort_V1_1_4_SupportedLinkCapabilities_CS RedfishNetworkPort_V1_1_4_SupportedLinkCapabilities_CS;
#ifndef RedfishResource_Condition_CS_
typedef struct _RedfishResource_Condition_CS RedfishResource_Condition_CS;
#endif

#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

#ifndef RedfishResource_Status_CS_
typedef struct _RedfishResource_Status_CS RedfishResource_Status_CS;
#endif

#ifndef Redfishodatav4_idRef_CS_
typedef struct _Redfishodatav4_idRef_CS Redfishodatav4_idRef_CS;
#endif

//
// The available actions for this Resource.
//
typedef struct _RedfishNetworkPort_V1_1_4_Actions_CS {
    RedfishNetworkPort_V1_1_4_OemActions_CS    *Oem;    // The available OEM-specific
                                                       // actions for this Resource.
} RedfishNetworkPort_V1_1_4_Actions_CS;

//
// A maximum bandwidth allocation percentage for a network device functions
// associated a port.
//
typedef struct _RedfishNetworkPort_V1_1_4_NetDevFuncMaxBWAlloc_CS {
    RedfishCS_int64    *MaxBWAllocPercent;      // The maximum bandwidth
                                                // allocation percentage
                                                // allocated to the corresponding
                                                // network device function
                                                // instance.
    RedfishCS_Link     NetworkDeviceFunction;    // The link to the
                                                // NetworkDeviceFunction
                                                // associated with this bandwidth
                                                // setting of this network port.
} RedfishNetworkPort_V1_1_4_NetDevFuncMaxBWAlloc_CS;

//
// A minimum bandwidth allocation percentage for a network device functions
// associated a port.
//
typedef struct _RedfishNetworkPort_V1_1_4_NetDevFuncMinBWAlloc_CS {
    RedfishCS_int64    *MinBWAllocPercent;      // The minimum bandwidth
                                                // allocation percentage
                                                // allocated to the corresponding
                                                // network device function
                                                // instance.
    RedfishCS_Link     NetworkDeviceFunction;    // The link to the
                                                // NetworkDeviceFunction
                                                // associated with this bandwidth
                                                // setting of this network port.
} RedfishNetworkPort_V1_1_4_NetDevFuncMinBWAlloc_CS;

//
// The available OEM-specific actions for this Resource.
//
typedef struct _RedfishNetworkPort_V1_1_4_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishNetworkPort_V1_1_4_OemActions_CS;

//
// The link capabilities of an assocaited port.
//
typedef struct _RedfishNetworkPort_V1_1_4_SupportedLinkCapabilities_CS {
    RedfishCS_char     *LinkNetworkTechnology;    // The link network technology
                                                 // capabilities of this port.
    RedfishCS_int64    *LinkSpeedMbps;           // The speed of the link in Mbps
                                                 // when this link network
                                                 // technology is active.
} RedfishNetworkPort_V1_1_4_SupportedLinkCapabilities_CS;

//
// A condition that requires attention.
//
#ifndef RedfishResource_Condition_CS_
#define RedfishResource_Condition_CS_
typedef struct _RedfishResource_Condition_CS {
    RedfishCS_Link             LogEntry;             // The link to the log entry
                                                     // created for this condition.
    RedfishCS_char             *Message;             // The human-readable message for
                                                     // this condition.
    RedfishCS_char_Array       *MessageArgs;         // An array of message arguments
                                                     // that are substituted for the
                                                     // arguments in the message when
                                                     // looked up in the message
                                                     // registry.
    RedfishCS_char             *MessageId;           // The identifier for the
                                                     // message.
    Redfishodatav4_idRef_CS    *OriginOfCondition;    // A link to the resource or
                                                     // object that originated the
                                                     // condition.
    RedfishCS_char             *Severity;            // The severity of the condition.
    RedfishCS_char             *Timestamp;           // The time the condition
                                                     // occurred.
} RedfishResource_Condition_CS;
#endif

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
// The status and health of a resource and its children.
//
#ifndef RedfishResource_Status_CS_
#define RedfishResource_Status_CS_
typedef struct _RedfishResource_Status_CS {
    RedfishResource_Condition_Array_CS    *Conditions;     // Conditions in this resource
                                                           // that require attention.
    RedfishCS_char                        *Health;         // The health state of this
                                                           // resource in the absence of its
                                                           // dependent resources.
    RedfishCS_char                        *HealthRollup;    // The overall health state from
                                                           // the view of this resource.
    RedfishResource_Oem_CS                *Oem;            // The OEM extension property.
    RedfishCS_char                        *State;          // The known state of the
                                                           // resource, such as, enabled.
} RedfishResource_Status_CS;
#endif

//
// A reference to a resource.
//
#ifndef Redfishodatav4_idRef_CS_
#define Redfishodatav4_idRef_CS_
typedef struct _Redfishodatav4_idRef_CS {
    RedfishCS_char    *odata_id;
} Redfishodatav4_idRef_CS;
#endif

//
// A network port, which is a discrete physical port that can connect to a
// network.
//
typedef struct _RedfishNetworkPort_V1_1_4_NetworkPort_CS {
    RedfishCS_Header                                                Header;
    RedfishCS_char                                                  *odata_context;               
    RedfishCS_char                                                  *odata_etag;                  
    RedfishCS_char                                                  *odata_id;                    
    RedfishCS_char                                                  *odata_type;                  
    RedfishNetworkPort_V1_1_4_Actions_CS                            *Actions;                         // The available actions for this
                                                                                                      // Resource.
    RedfishCS_char                                                  *ActiveLinkTechnology;            // Network port active link
                                                                                                      // technology.
    RedfishCS_char_Array                                            *AssociatedNetworkAddresses;      // An array of configured MAC or
                                                                                                      // WWN network addresses that are
                                                                                                      // associated with this network
                                                                                                      // port, including the programmed
                                                                                                      // address of the lowest numbered
                                                                                                      // network device function, the
                                                                                                      // configured but not active
                                                                                                      // address, if applicable, the
                                                                                                      // address for hardware port
                                                                                                      // teaming, or other network
                                                                                                      // addresses.
    RedfishCS_char                                                  *Description;                 
    RedfishCS_bool                                                  *EEEEnabled;                      // An indication of whether IEEE
                                                                                                      // 802.3az Energy-Efficient
                                                                                                      // Ethernet (EEE) is enabled for
                                                                                                      // this network port.
    RedfishCS_char                                                  *FlowControlConfiguration;        // The locally configured 802.3x
                                                                                                      // flow control setting for this
                                                                                                      // network port.
    RedfishCS_char                                                  *FlowControlStatus;               // The 802.3x flow control
                                                                                                      // behavior negotiated with the
                                                                                                      // link partner for this network
                                                                                                      // port (Ethernet-only).
    RedfishCS_char                                                  *Id;                          
    RedfishCS_char                                                  *LinkStatus;                      // The status of the link between
                                                                                                      // this port and its link
                                                                                                      // partner.
    RedfishCS_char                                                  *Name;                        
    RedfishNetworkPort_V1_1_4_NetDevFuncMaxBWAlloc_Array_CS         *NetDevFuncMaxBWAlloc;            // An array of maximum bandwidth
                                                                                                      // allocation percentages for the
                                                                                                      // network device functions
                                                                                                      // associated with this port.
    RedfishNetworkPort_V1_1_4_NetDevFuncMinBWAlloc_Array_CS         *NetDevFuncMinBWAlloc;            // An array of minimum bandwidth
                                                                                                      // allocation percentages for the
                                                                                                      // network device functions
                                                                                                      // associated with this port.
    RedfishResource_Oem_CS                                          *Oem;                             // The OEM extension property.
    RedfishCS_char                                                  *PhysicalPortNumber;              // The physical port number label
                                                                                                      // for this port.
    RedfishCS_int64                                                 *PortMaximumMTU;                  // The largest maximum
                                                                                                      // transmission unit (MTU) that
                                                                                                      // can be configured for this
                                                                                                      // network port.
    RedfishCS_bool                                                  *SignalDetected;                  // An indication of whether the
                                                                                                      // port has detected enough
                                                                                                      // signal on enough lanes to
                                                                                                      // establish a link.
    RedfishResource_Status_CS                                       *Status;                          // The status and health of the
                                                                                                      // Resource and its subordinate
                                                                                                      // or dependent Resources.
    RedfishCS_char_Array                                            *SupportedEthernetCapabilities;    // The set of Ethernet
                                                                                                      // capabilities that this port
                                                                                                      // supports.
    RedfishNetworkPort_V1_1_4_SupportedLinkCapabilities_Array_CS    *SupportedLinkCapabilities;       // The link capabilities of this
                                                                                                      // port.
    RedfishCS_bool                                                  *WakeOnLANEnabled;                // An indication of whether Wake
                                                                                                      // on LAN (WoL) is enabled for
                                                                                                      // this network port.
} RedfishNetworkPort_V1_1_4_NetworkPort_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

typedef struct _RedfishNetworkPort_V1_1_4_NetDevFuncMaxBWAlloc_Array_CS  {
    RedfishNetworkPort_V1_1_4_NetDevFuncMaxBWAlloc_Array_CS    *Next;
    RedfishNetworkPort_V1_1_4_NetDevFuncMaxBWAlloc_CS    *ArrayValue;
} RedfishNetworkPort_V1_1_4_NetDevFuncMaxBWAlloc_Array_CS;

typedef struct _RedfishNetworkPort_V1_1_4_NetDevFuncMinBWAlloc_Array_CS  {
    RedfishNetworkPort_V1_1_4_NetDevFuncMinBWAlloc_Array_CS    *Next;
    RedfishNetworkPort_V1_1_4_NetDevFuncMinBWAlloc_CS    *ArrayValue;
} RedfishNetworkPort_V1_1_4_NetDevFuncMinBWAlloc_Array_CS;

typedef struct _RedfishNetworkPort_V1_1_4_SupportedLinkCapabilities_Array_CS  {
    RedfishNetworkPort_V1_1_4_SupportedLinkCapabilities_Array_CS    *Next;
    RedfishNetworkPort_V1_1_4_SupportedLinkCapabilities_CS    *ArrayValue;
} RedfishNetworkPort_V1_1_4_SupportedLinkCapabilities_Array_CS;

RedfishCS_status
Json_NetworkPort_V1_1_4_To_CS (char *JsonRawText, RedfishNetworkPort_V1_1_4_NetworkPort_CS **ReturnedCS);

RedfishCS_status
CS_To_NetworkPort_V1_1_4_JSON (RedfishNetworkPort_V1_1_4_NetworkPort_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyNetworkPort_V1_1_4_CS (RedfishNetworkPort_V1_1_4_NetworkPort_CS *CSPtr);

RedfishCS_status
DestroyNetworkPort_V1_1_4_Json (RedfishCS_char *JsonText);

#endif
