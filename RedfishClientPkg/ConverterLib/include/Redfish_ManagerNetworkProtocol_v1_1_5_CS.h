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

#ifndef RedfishManagernetworkprotocol_V1_1_5_CSTRUCT_H_
#define RedfishManagernetworkprotocol_V1_1_5_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishManagerNetworkProtocol_V1_1_5_HTTPSProtocol_CS RedfishManagerNetworkProtocol_V1_1_5_HTTPSProtocol_CS;
typedef struct _RedfishManagerNetworkProtocol_V1_1_5_ManagerNetworkProtocol_CS RedfishManagerNetworkProtocol_V1_1_5_ManagerNetworkProtocol_CS;
typedef struct _RedfishManagerNetworkProtocol_V1_1_5_Protocol_CS RedfishManagerNetworkProtocol_V1_1_5_Protocol_CS;
typedef struct _RedfishManagerNetworkProtocol_V1_1_5_SNMPProtocol_CS RedfishManagerNetworkProtocol_V1_1_5_SNMPProtocol_CS;
typedef struct _RedfishManagerNetworkProtocol_V1_1_5_SSDProtocol_CS RedfishManagerNetworkProtocol_V1_1_5_SSDProtocol_CS;
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
// The settings for a network protocol associated with a manager.
//
typedef struct _RedfishManagerNetworkProtocol_V1_1_5_HTTPSProtocol_CS {
    RedfishCS_int64    *Port;              // The protocol port.
    RedfishCS_bool     *ProtocolEnabled;    // An indication of whether the
                                           // protocol is enabled.
} RedfishManagerNetworkProtocol_V1_1_5_HTTPSProtocol_CS;

//
// The settings for a network protocol associated with a manager.
//
typedef struct _RedfishManagerNetworkProtocol_V1_1_5_Protocol_CS {
    RedfishCS_int64    *Port;              // The protocol port.
    RedfishCS_bool     *ProtocolEnabled;    // An indication of whether the
                                           // protocol is enabled.
} RedfishManagerNetworkProtocol_V1_1_5_Protocol_CS;

//
// The settings for a network protocol associated with a manager.
//
typedef struct _RedfishManagerNetworkProtocol_V1_1_5_SNMPProtocol_CS {
    RedfishCS_int64    *Port;              // The protocol port.
    RedfishCS_bool     *ProtocolEnabled;    // An indication of whether the
                                           // protocol is enabled.
} RedfishManagerNetworkProtocol_V1_1_5_SNMPProtocol_CS;

//
// The settings for a network protocol associated with a manager.
//
typedef struct _RedfishManagerNetworkProtocol_V1_1_5_SSDProtocol_CS {
    RedfishCS_char     *NotifyIPv6Scope;                  // The IPv6 scope for multicast
                                                          // NOTIFY messages for SSDP.
    RedfishCS_int64    *NotifyMulticastIntervalSeconds;    // The time interval, in seconds,
                                                          // between transmissions of the
                                                          // multicast NOTIFY ALIVE message
                                                          // from this service for SSDP.
    RedfishCS_int64    *NotifyTTL;                        // The time-to-live hop count for
                                                          // SSDP multicast NOTIFY
                                                          // messages.
    RedfishCS_int64    *Port;                             // The protocol port.
    RedfishCS_bool     *ProtocolEnabled;                  // An indication of whether the
                                                          // protocol is enabled.
} RedfishManagerNetworkProtocol_V1_1_5_SSDProtocol_CS;

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
// The network service settings for the manager.
//
typedef struct _RedfishManagerNetworkProtocol_V1_1_5_ManagerNetworkProtocol_CS {
    RedfishCS_Header                                         Header;
    RedfishCS_char                                           *odata_context;
    RedfishCS_char                                           *odata_etag;  
    RedfishCS_char                                           *odata_id;    
    RedfishCS_char                                           *odata_type;  
    RedfishManagerNetworkProtocol_V1_1_5_Protocol_CS         *DHCP;            // The settings for this
                                                                               // manager's DHCPv4 protocol
                                                                               // support.
    RedfishCS_char                                           *Description; 
    RedfishCS_char                                           *FQDN;            // The fully qualified domain
                                                                               // name for the manager obtained
                                                                               // by DNS including the host name
                                                                               // and top-level domain name.
    RedfishManagerNetworkProtocol_V1_1_5_Protocol_CS         *HTTP;            // The settings for this
                                                                               // manager's HTTP protocol
                                                                               // support.
    RedfishManagerNetworkProtocol_V1_1_5_HTTPSProtocol_CS    *HTTPS;           // The settings for this
                                                                               // manager's HTTPS protocol
                                                                               // support.
    RedfishCS_char                                           *HostName;        // The DNS host name of this
                                                                               // manager, without any domain
                                                                               // information.
    RedfishManagerNetworkProtocol_V1_1_5_Protocol_CS         *IPMI;            // The settings for this
                                                                               // manager's IPMI-over-LAN
                                                                               // protocol support.
    RedfishCS_char                                           *Id;          
    RedfishManagerNetworkProtocol_V1_1_5_Protocol_CS         *KVMIP;           // The settings for this
                                                                               // manager's KVM-IP protocol
                                                                               // support that apply to all
                                                                               // system instances controlled by
                                                                               // this manager.
    RedfishCS_char                                           *Name;        
    RedfishResource_Oem_CS                                   *Oem;             // The OEM extension property.
    RedfishManagerNetworkProtocol_V1_1_5_SNMPProtocol_CS     *SNMP;            // The settings for this
                                                                               // manager's SNMP support.
    RedfishManagerNetworkProtocol_V1_1_5_SSDProtocol_CS      *SSDP;            // The settings for this
                                                                               // manager's SSDP support.
    RedfishManagerNetworkProtocol_V1_1_5_Protocol_CS         *SSH;             // The settings for this
                                                                               // manager's Secure Shell (SSH)
                                                                               // protocol support.
    RedfishResource_Status_CS                                *Status;          // The status and health of the
                                                                               // Resource and its subordinate
                                                                               // or dependent Resources.
    RedfishManagerNetworkProtocol_V1_1_5_Protocol_CS         *Telnet;          // The settings for this
                                                                               // manager's Telnet protocol
                                                                               // support.
    RedfishManagerNetworkProtocol_V1_1_5_Protocol_CS         *VirtualMedia;    // The settings for this
                                                                               // manager's virtual media
                                                                               // support that apply to all
                                                                               // system instances controlled by
                                                                               // this manager.
} RedfishManagerNetworkProtocol_V1_1_5_ManagerNetworkProtocol_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

RedfishCS_status
Json_ManagerNetworkProtocol_V1_1_5_To_CS (char *JsonRawText, RedfishManagerNetworkProtocol_V1_1_5_ManagerNetworkProtocol_CS **ReturnedCS);

RedfishCS_status
CS_To_ManagerNetworkProtocol_V1_1_5_JSON (RedfishManagerNetworkProtocol_V1_1_5_ManagerNetworkProtocol_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyManagerNetworkProtocol_V1_1_5_CS (RedfishManagerNetworkProtocol_V1_1_5_ManagerNetworkProtocol_CS *CSPtr);

RedfishCS_status
DestroyManagerNetworkProtocol_V1_1_5_Json (RedfishCS_char *JsonText);

#endif
