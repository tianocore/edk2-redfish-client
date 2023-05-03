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

#ifndef RedfishEthernetinterface_V1_0_5_CSTRUCT_H_
#define RedfishEthernetinterface_V1_0_5_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishEthernetInterface_V1_0_5_IPv6AddressPolicyEntry_Array_CS RedfishEthernetInterface_V1_0_5_IPv6AddressPolicyEntry_Array_CS;
typedef struct _RedfishEthernetInterface_V1_0_5_EthernetInterface_CS RedfishEthernetInterface_V1_0_5_EthernetInterface_CS;
typedef struct _RedfishEthernetInterface_V1_0_5_IPv6AddressPolicyEntry_CS RedfishEthernetInterface_V1_0_5_IPv6AddressPolicyEntry_CS;
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
// A entry in the RFC 6724 Address Selection Policy Table.
//
typedef struct _RedfishEthernetInterface_V1_0_5_IPv6AddressPolicyEntry_CS {
    RedfishCS_int64    *Label;        // The IPv6 Label (as defined in
                                      // RFC 6724 section 2.1).
    RedfishCS_int64    *Precedence;    // The IPv6 Precedence (as
                                      // defined in RFC 6724 section
                                      // 2.1.
    RedfishCS_char     *Prefix;       // The IPv6 Address Prefix (as
                                      // defined in RFC 6724 section
                                      // 2.1).
} RedfishEthernetInterface_V1_0_5_IPv6AddressPolicyEntry_CS;

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
// The EthernetInterface schema represents a single, logical ethernet interface or
// network interface controller (NIC).
//
typedef struct _RedfishEthernetInterface_V1_0_5_EthernetInterface_CS {
    RedfishCS_Header                                                   Header;
    RedfishCS_char                                                     *odata_context;        
    RedfishCS_char                                                     *odata_id;             
    RedfishCS_char                                                     *odata_type;           
    RedfishCS_bool                                                     *AutoNeg;                  // This indicates if the speed
                                                                                                  // and duplex are automatically
                                                                                                  // negotiated and configured on
                                                                                                  // this interface.
    RedfishCS_char                                                     *Description;          
    RedfishCS_char                                                     *FQDN;                     // This is the complete, fully
                                                                                                  // qualified domain name obtained
                                                                                                  // by DNS for this interface.
    RedfishCS_bool                                                     *FullDuplex;               // This indicates if the
                                                                                                  // interface is in Full Duplex
                                                                                                  // mode or not.
    RedfishCS_char                                                     *HostName;                 // The DNS Host Name, without any
                                                                                                  // domain information.
    RedfishCS_Link                                                     IPv4Addresses;             // The IPv4 addresses currently
                                                                                                  // assigned to this interface.
    RedfishEthernetInterface_V1_0_5_IPv6AddressPolicyEntry_Array_CS    *IPv6AddressPolicyTable;    // An array representing the RFC
                                                                                                  // 6724 Address Selection Policy
                                                                                                  // Table.
    RedfishCS_Link                                                     IPv6Addresses;             // Enumerates in an array all of
                                                                                                  // the currently assigned IPv6
                                                                                                  // addresses on this interface.
    RedfishCS_char                                                     *IPv6DefaultGateway;       // This is the IPv6 default
                                                                                                  // gateway address that is
                                                                                                  // currently in use on this
                                                                                                  // interface.
    RedfishCS_Link                                                     IPv6StaticAddresses;       // Represents in an array all of
                                                                                                  // the IPv6 static addresses to
                                                                                                  // be assigned on this interface.
    RedfishCS_char                                                     *Id;                   
    RedfishCS_bool                                                     *InterfaceEnabled;         // This indicates whether this
                                                                                                  // interface is enabled.
    RedfishCS_char                                                     *MACAddress;               // This is the currently
                                                                                                  // configured MAC address of the
                                                                                                  // (logical port) interface.
    RedfishCS_int64                                                    *MTUSize;                  // This is the currently
                                                                                                  // configured Maximum
                                                                                                  // Transmission Unit (MTU) in
                                                                                                  // bytes on this interface.
    RedfishCS_int64                                                    *MaxIPv6StaticAddresses;    // This indicates the maximum
                                                                                                  // number of Static IPv6
                                                                                                  // addresses that can be
                                                                                                  // configured on this interface.
    RedfishCS_char                                                     *Name;                 
    RedfishCS_char_Array                                               *NameServers;              // This represents DNS name
                                                                                                  // servers that are currently in
                                                                                                  // use on this interface.
    RedfishResource_Oem_CS                                             *Oem;                      // This is the
                                                                                                  // manufacturer/provider specific
                                                                                                  // extension moniker used to
                                                                                                  // divide the Oem object into
                                                                                                  // sections.
    RedfishCS_char                                                     *PermanentMACAddress;      // This is the permanent MAC
                                                                                                  // address assigned to this
                                                                                                  // interface (port).
    RedfishCS_int64                                                    *SpeedMbps;                // This is the current speed in
                                                                                                  // Mbps of this interface.
    RedfishResource_Status_CS                                          *Status;               
    RedfishCS_char                                                     *UefiDevicePath;           // The UEFI device path for this
                                                                                                  // interface.
    RedfishCS_Link                                                     VLAN;                      // If this Network Interface
                                                                                                  // supports more than one VLAN,
                                                                                                  // this property is not present.
                                                                                                  // VLANs collections appear in
                                                                                                  // the Link section of this
                                                                                                  // resource.
    RedfishCS_Link                                                     VLANs;                     // This is a reference to a
                                                                                                  // collection of VLANs and is
                                                                                                  // only used if the interface
                                                                                                  // supports more than one VLANs.
} RedfishEthernetInterface_V1_0_5_EthernetInterface_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

typedef struct _RedfishEthernetInterface_V1_0_5_IPv6AddressPolicyEntry_Array_CS  {
    RedfishEthernetInterface_V1_0_5_IPv6AddressPolicyEntry_Array_CS    *Next;
    RedfishEthernetInterface_V1_0_5_IPv6AddressPolicyEntry_CS    *ArrayValue;
} RedfishEthernetInterface_V1_0_5_IPv6AddressPolicyEntry_Array_CS;

RedfishCS_status
Json_EthernetInterface_V1_0_5_To_CS (char *JsonRawText, RedfishEthernetInterface_V1_0_5_EthernetInterface_CS **ReturnedCS);

RedfishCS_status
CS_To_EthernetInterface_V1_0_5_JSON (RedfishEthernetInterface_V1_0_5_EthernetInterface_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyEthernetInterface_V1_0_5_CS (RedfishEthernetInterface_V1_0_5_EthernetInterface_CS *CSPtr);

RedfishCS_status
DestroyEthernetInterface_V1_0_5_Json (RedfishCS_char *JsonText);

#endif
