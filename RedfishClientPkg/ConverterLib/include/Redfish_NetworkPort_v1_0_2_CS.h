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

#ifndef RedfishNetworkport_V1_0_2_CSTRUCT_H_
#define RedfishNetworkport_V1_0_2_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishNetworkPort_V1_0_2_NetDevFuncMaxBWAlloc_Array_CS RedfishNetworkPort_V1_0_2_NetDevFuncMaxBWAlloc_Array_CS;
typedef struct _RedfishNetworkPort_V1_0_2_NetDevFuncMinBWAlloc_Array_CS RedfishNetworkPort_V1_0_2_NetDevFuncMinBWAlloc_Array_CS;
typedef struct _RedfishNetworkPort_V1_0_2_SupportedLinkCapabilities_Array_CS RedfishNetworkPort_V1_0_2_SupportedLinkCapabilities_Array_CS;
typedef struct _RedfishNetworkPort_V1_0_2_NetDevFuncMaxBWAlloc_CS RedfishNetworkPort_V1_0_2_NetDevFuncMaxBWAlloc_CS;
typedef struct _RedfishNetworkPort_V1_0_2_NetDevFuncMinBWAlloc_CS RedfishNetworkPort_V1_0_2_NetDevFuncMinBWAlloc_CS;
typedef struct _RedfishNetworkPort_V1_0_2_NetworkPort_CS RedfishNetworkPort_V1_0_2_NetworkPort_CS;
typedef struct _RedfishNetworkPort_V1_0_2_SupportedLinkCapabilities_CS RedfishNetworkPort_V1_0_2_SupportedLinkCapabilities_CS;
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
// A maximum bandwidth allocation percentage for a Network Device Functions
// associated a port.
//
typedef struct _RedfishNetworkPort_V1_0_2_NetDevFuncMaxBWAlloc_CS {
    RedfishCS_int64    *MaxBWAllocPercent;      // The maximum bandwidth
                                                // allocation percentage
                                                // allocated to the corresponding
                                                // network device function
                                                // instance.
    RedfishCS_Link     NetworkDeviceFunction;    // A reference to the
                                                // NetworkDeviceFunction
                                                // associated with this bandwidth
                                                // setting of this Network Port.
} RedfishNetworkPort_V1_0_2_NetDevFuncMaxBWAlloc_CS;

//
// A minimum bandwidth allocation percentage for a Network Device Functions
// associated a port.
//
typedef struct _RedfishNetworkPort_V1_0_2_NetDevFuncMinBWAlloc_CS {
    RedfishCS_int64    *MinBWAllocPercent;      // The minimum bandwidth
                                                // allocation percentage
                                                // allocated to the corresponding
                                                // network device function
                                                // instance.
    RedfishCS_Link     NetworkDeviceFunction;    // A reference to the
                                                // NetworkDeviceFunction
                                                // associated with this bandwidth
                                                // setting of this Network Port.
} RedfishNetworkPort_V1_0_2_NetDevFuncMinBWAlloc_CS;

//
// The self-described link capabilities of an assocaited port.
//
typedef struct _RedfishNetworkPort_V1_0_2_SupportedLinkCapabilities_CS {
    RedfishCS_char     *LinkNetworkTechnology;    // The self-described link
                                                 // network technology
                                                 // capabilities of this port.
    RedfishCS_int64    *LinkSpeedMbps;           // The speed of the link in Mbps
                                                 // when this link network
                                                 // technology is active.
} RedfishNetworkPort_V1_0_2_SupportedLinkCapabilities_CS;

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
// A Network Port represents a discrete physical port capable of connecting to a
// network.
//
typedef struct _RedfishNetworkPort_V1_0_2_NetworkPort_CS {
    RedfishCS_Header                                                Header;
    RedfishCS_char                                                  *odata_context;               
    RedfishCS_char                                                  *odata_etag;                  
    RedfishCS_char                                                  *odata_id;                    
    RedfishCS_char                                                  *odata_type;                  
    RedfishCS_char                                                  *ActiveLinkTechnology;            // Network Port Active Link
                                                                                                      // Technology.
    RedfishCS_char_Array                                            *AssociatedNetworkAddresses;      // The array of configured
                                                                                                      // network addresses (MAC or WWN)
                                                                                                      // that are associated with this
                                                                                                      // Network Port, including the
                                                                                                      // programmed address of the
                                                                                                      // lowest numbered Network Device
                                                                                                      // Function, the configured but
                                                                                                      // not active address if
                                                                                                      // applicable, the address for
                                                                                                      // hardware port teaming, or
                                                                                                      // other network addresses.
    RedfishCS_char                                                  *Description;                 
    RedfishCS_bool                                                  *EEEEnabled;                      // Whether IEEE 802.3az Energy
                                                                                                      // Efficient Ethernet (EEE) is
                                                                                                      // enabled for this network port.
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
    RedfishNetworkPort_V1_0_2_NetDevFuncMaxBWAlloc_Array_CS         *NetDevFuncMaxBWAlloc;            // The array of maximum bandwidth
                                                                                                      // allocation percentages for the
                                                                                                      // Network Device Functions
                                                                                                      // associated with this port.
    RedfishNetworkPort_V1_0_2_NetDevFuncMinBWAlloc_Array_CS         *NetDevFuncMinBWAlloc;            // The array of minimum bandwidth
                                                                                                      // allocation percentages for the
                                                                                                      // Network Device Functions
                                                                                                      // associated with this port.
    RedfishResource_Oem_CS                                          *Oem;                             // This is the
                                                                                                      // manufacturer/provider specific
                                                                                                      // extension moniker used to
                                                                                                      // divide the Oem object into
                                                                                                      // sections.
    RedfishCS_char                                                  *PhysicalPortNumber;              // The physical port number label
                                                                                                      // for this port.
    RedfishCS_int64                                                 *PortMaximumMTU;                  // The largest maximum
                                                                                                      // transmission unit (MTU) that
                                                                                                      // can be configured for this
                                                                                                      // network port.
    RedfishCS_bool                                                  *SignalDetected;                  // Whether or not the port has
                                                                                                      // detected enough signal on
                                                                                                      // enough lanes to establish
                                                                                                      // link.
    RedfishResource_Status_CS                                       *Status;                          // This property describes the
                                                                                                      // status and health of the
                                                                                                      // resource and its children.
    RedfishCS_char_Array                                            *SupportedEthernetCapabilities;    // The set of Ethernet
                                                                                                      // capabilities that this port
                                                                                                      // supports.
    RedfishNetworkPort_V1_0_2_SupportedLinkCapabilities_Array_CS    *SupportedLinkCapabilities;       // The self-described link
                                                                                                      // capabilities of this port.
    RedfishCS_bool                                                  *WakeOnLANEnabled;                // Whether Wake on LAN (WoL) is
                                                                                                      // enabled for this network port.
} RedfishNetworkPort_V1_0_2_NetworkPort_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

typedef struct _RedfishNetworkPort_V1_0_2_NetDevFuncMaxBWAlloc_Array_CS  {
    RedfishNetworkPort_V1_0_2_NetDevFuncMaxBWAlloc_Array_CS    *Next;
    RedfishNetworkPort_V1_0_2_NetDevFuncMaxBWAlloc_CS    *ArrayValue;
} RedfishNetworkPort_V1_0_2_NetDevFuncMaxBWAlloc_Array_CS;

typedef struct _RedfishNetworkPort_V1_0_2_NetDevFuncMinBWAlloc_Array_CS  {
    RedfishNetworkPort_V1_0_2_NetDevFuncMinBWAlloc_Array_CS    *Next;
    RedfishNetworkPort_V1_0_2_NetDevFuncMinBWAlloc_CS    *ArrayValue;
} RedfishNetworkPort_V1_0_2_NetDevFuncMinBWAlloc_Array_CS;

typedef struct _RedfishNetworkPort_V1_0_2_SupportedLinkCapabilities_Array_CS  {
    RedfishNetworkPort_V1_0_2_SupportedLinkCapabilities_Array_CS    *Next;
    RedfishNetworkPort_V1_0_2_SupportedLinkCapabilities_CS    *ArrayValue;
} RedfishNetworkPort_V1_0_2_SupportedLinkCapabilities_Array_CS;

RedfishCS_status
Json_NetworkPort_V1_0_2_To_CS (char *JsonRawText, RedfishNetworkPort_V1_0_2_NetworkPort_CS **ReturnedCS);

RedfishCS_status
CS_To_NetworkPort_V1_0_2_JSON (RedfishNetworkPort_V1_0_2_NetworkPort_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyNetworkPort_V1_0_2_CS (RedfishNetworkPort_V1_0_2_NetworkPort_CS *CSPtr);

RedfishCS_status
DestroyNetworkPort_V1_0_2_Json (RedfishCS_char *JsonText);

#endif
