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

#ifndef RedfishEthernetinterface_V1_4_5_CSTRUCT_H_
#define RedfishEthernetinterface_V1_4_5_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishEthernetInterface_V1_4_5_IPv6AddressPolicyEntry_Array_CS RedfishEthernetInterface_V1_4_5_IPv6AddressPolicyEntry_Array_CS;
typedef struct _RedfishEthernetInterface_V1_4_5_Actions_CS RedfishEthernetInterface_V1_4_5_Actions_CS;
typedef struct _RedfishEthernetInterface_V1_4_5_DHCPv4Configuration_CS RedfishEthernetInterface_V1_4_5_DHCPv4Configuration_CS;
typedef struct _RedfishEthernetInterface_V1_4_5_DHCPv6Configuration_CS RedfishEthernetInterface_V1_4_5_DHCPv6Configuration_CS;
typedef struct _RedfishEthernetInterface_V1_4_5_EthernetInterface_CS RedfishEthernetInterface_V1_4_5_EthernetInterface_CS;
typedef struct _RedfishEthernetInterface_V1_4_5_IPv6AddressPolicyEntry_CS RedfishEthernetInterface_V1_4_5_IPv6AddressPolicyEntry_CS;
typedef struct _RedfishEthernetInterface_V1_4_5_Links_CS RedfishEthernetInterface_V1_4_5_Links_CS;
typedef struct _RedfishEthernetInterface_V1_4_5_OemActions_CS RedfishEthernetInterface_V1_4_5_OemActions_CS;
typedef struct _RedfishEthernetInterface_V1_4_5_StatelessAddressAutoConfiguration_CS RedfishEthernetInterface_V1_4_5_StatelessAddressAutoConfiguration_CS;
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
// The available actions for this resource.
//
typedef struct _RedfishEthernetInterface_V1_4_5_Actions_CS {
    RedfishEthernetInterface_V1_4_5_OemActions_CS    *Oem;    // The available OEM-specific
                                                             // actions for this resource.
} RedfishEthernetInterface_V1_4_5_Actions_CS;

//
// DHCPv4 configuration for this interface.
//
typedef struct _RedfishEthernetInterface_V1_4_5_DHCPv4Configuration_CS {
    RedfishCS_bool    *DHCPEnabled;       // An indication of whether DHCP
                                          // v4 is enabled on this Ethernet
                                          // interface.
    RedfishCS_bool    *UseDNSServers;     // An indication of whether this
                                          // interface uses DHCP
                                          // v4-supplied DNS servers.
    RedfishCS_bool    *UseDomainName;     // An indication of whether this
                                          // interface uses a DHCP
                                          // v4-supplied domain name.
    RedfishCS_bool    *UseGateway;        // An indication of whether this
                                          // interface uses a DHCP
                                          // v4-supplied gateway.
    RedfishCS_bool    *UseNTPServers;     // An indication of whether the
                                          // interface uses DHCP
                                          // v4-supplied NTP servers.
    RedfishCS_bool    *UseStaticRoutes;    // An indication of whether the
                                          // interface uses DHCP
                                          // v4-supplied static routes.
} RedfishEthernetInterface_V1_4_5_DHCPv4Configuration_CS;

//
// DHCPv6 configuration for this interface.
//
typedef struct _RedfishEthernetInterface_V1_4_5_DHCPv6Configuration_CS {
    RedfishCS_char    *OperatingMode;    // Determines the DHCPv6
                                         // operating mode for this
                                         // interface.
    RedfishCS_bool    *UseDNSServers;    // An indication of whether the
                                         // interface uses DHCP
                                         // v6-supplied DNS servers.
    RedfishCS_bool    *UseDomainName;    // An indication of whether the
                                         // interface uses a domain name
                                         // supplied through DHCP v6
                                         // stateless mode.
    RedfishCS_bool    *UseNTPServers;    // An indication of whether the
                                         // interface uses DHCP
                                         // v6-supplied NTP servers.
    RedfishCS_bool    *UseRapidCommit;    // An indication of whether the
                                         // interface uses DHCP v6 rapid
                                         // commit mode for stateful mode
                                         // address assignments.  Do not
                                         // enable this option in networks
                                         // where more than one DHCP v6
                                         // server is configured to
                                         // provide address assignments.
} RedfishEthernetInterface_V1_4_5_DHCPv6Configuration_CS;

//
// The entry in the RFC6724-defined address selection policy table.
//
typedef struct _RedfishEthernetInterface_V1_4_5_IPv6AddressPolicyEntry_CS {
    RedfishCS_int64    *Label;        // The IPv6 label, as defined in
                                      // RFC6724, section 2.1.
    RedfishCS_int64    *Precedence;    // The IPv6 precedence, as
                                      // defined in RFC6724, section
                                      // 2.1.
    RedfishCS_char     *Prefix;       // The IPv6 address prefix, as
                                      // defined in RFC6724, section
                                      // 2.1.
} RedfishEthernetInterface_V1_4_5_IPv6AddressPolicyEntry_CS;

//
// The links to other resources that are related to this resource.
//
typedef struct _RedfishEthernetInterface_V1_4_5_Links_CS {
    RedfishCS_Link            Chassis;                 // The link to the chassis that
                                                       // contains this Ethernet
                                                       // interface.
    RedfishCS_Link            Endpoints;               // An array of links to the
                                                       // endpoints that connect to this
                                                       // Ethernet interface.
    RedfishCS_int64           *Endpointsodata_count;
    RedfishCS_Link            HostInterface;           // The link to a Host Interface
                                                       // that is associated with this
                                                       // Ethernet interface.
    RedfishResource_Oem_CS    *Oem;                    // The OEM extension property.
} RedfishEthernetInterface_V1_4_5_Links_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishEthernetInterface_V1_4_5_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishEthernetInterface_V1_4_5_OemActions_CS;

//
// Stateless address autoconfiguration (SLAAC) parameters for this interface.
//
typedef struct _RedfishEthernetInterface_V1_4_5_StatelessAddressAutoConfiguration_CS {
    RedfishCS_bool    *IPv4AutoConfigEnabled;    // An indication of whether IPv4
                                                // stateless address
                                                // autoconfiguration (SLAAC) is
                                                // enabled for this interface.
    RedfishCS_bool    *IPv6AutoConfigEnabled;    // An indication of whether IPv6
                                                // stateless address
                                                // autoconfiguration (SLAAC) is
                                                // enabled for this interface.
} RedfishEthernetInterface_V1_4_5_StatelessAddressAutoConfiguration_CS;

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
// The EthernetInterface schema represents a single, logical Ethernet interface or
// network interface controller (NIC).
//
typedef struct _RedfishEthernetInterface_V1_4_5_EthernetInterface_CS {
    RedfishCS_Header                                                        Header;
    RedfishCS_char                                                          *odata_context;            
    RedfishCS_char                                                          *odata_etag;               
    RedfishCS_char                                                          *odata_id;                 
    RedfishCS_char                                                          *odata_type;               
    RedfishEthernetInterface_V1_4_5_Actions_CS                              *Actions;                      // The available actions for this
                                                                                                           // resource.
    RedfishCS_bool                                                          *AutoNeg;                      // An indication of whether the
                                                                                                           // speed and duplex are
                                                                                                           // automatically negotiated and
                                                                                                           // configured on this interface.
    RedfishEthernetInterface_V1_4_5_DHCPv4Configuration_CS                  *DHCPv4;                       // DHCPv4 configuration for this
                                                                                                           // interface.
    RedfishEthernetInterface_V1_4_5_DHCPv6Configuration_CS                  *DHCPv6;                       // DHCPv6 configuration for this
                                                                                                           // interface.
    RedfishCS_char                                                          *Description;              
    RedfishCS_char                                                          *FQDN;                         // The complete, fully qualified
                                                                                                           // domain name that DNS obtains
                                                                                                           // for this interface.
    RedfishCS_bool                                                          *FullDuplex;                   // An indication of whether full-
                                                                                                           // duplex mode is enabled on the
                                                                                                           // Ethernet connection for this
                                                                                                           // interface.
    RedfishCS_char                                                          *HostName;                     // The DNS host name, without any
                                                                                                           // domain information.
    RedfishCS_Link                                                          IPv4Addresses;                 // The IPv4 addresses currently
                                                                                                           // assigned to this interface.
    RedfishCS_Link                                                          IPv4StaticAddresses;           // The IPv4 static addresses
                                                                                                           // assigned to this interface.
    RedfishEthernetInterface_V1_4_5_IPv6AddressPolicyEntry_Array_CS         *IPv6AddressPolicyTable;       // An array that represents the
                                                                                                           // RFC6724-defined address
                                                                                                           // selection policy table.
    RedfishCS_Link                                                          IPv6Addresses;                 // An array of the currently
                                                                                                           // assigned IPv6 addresses on
                                                                                                           // this interface.
    RedfishCS_char                                                          *IPv6DefaultGateway;           // The IPv6 default gateway
                                                                                                           // address in use on this
                                                                                                           // interface.
    RedfishCS_Link                                                          IPv6StaticAddresses;           // An array of the IPv6 static
                                                                                                           // addresses to assign on this
                                                                                                           // interface.
    RedfishCS_Link                                                          IPv6StaticDefaultGateways;     // The IPv6 static default
                                                                                                           // gateways for this interface.
    RedfishCS_char                                                          *Id;                       
    RedfishCS_bool                                                          *InterfaceEnabled;             // An indication of whether this
                                                                                                           // interface is enabled.
    RedfishCS_char                                                          *LinkStatus;                   // The link status of this
                                                                                                           // interface, or port.
    RedfishEthernetInterface_V1_4_5_Links_CS                                *Links;                        // The links to other resources
                                                                                                           // that are related to this
                                                                                                           // resource.
    RedfishCS_char                                                          *MACAddress;                   // The currently configured MAC
                                                                                                           // address of the interface, or
                                                                                                           // logical port.
    RedfishCS_int64                                                         *MTUSize;                      // The currently configured
                                                                                                           // maximum transmission unit
                                                                                                           // (MTU), in bytes, on this
                                                                                                           // interface.
    RedfishCS_int64                                                         *MaxIPv6StaticAddresses;       // The maximum number of static
                                                                                                           // IPv6 addresses that can be
                                                                                                           // configured on this interface.
    RedfishCS_char                                                          *Name;                     
    RedfishCS_char_Array                                                    *NameServers;                  // The DNS servers in use on this
                                                                                                           // interface.
    RedfishResource_Oem_CS                                                  *Oem;                          // The OEM extension property.
    RedfishCS_char                                                          *PermanentMACAddress;          // The permanent MAC address
                                                                                                           // assigned to this interface, or
                                                                                                           // port.
    RedfishCS_int64                                                         *SpeedMbps;                    // The current speed, in Mbit/s,
                                                                                                           // of this interface.
    RedfishEthernetInterface_V1_4_5_StatelessAddressAutoConfiguration_CS    *StatelessAddressAutoConfig;    // Stateless address
                                                                                                           // autoconfiguration (SLAAC)
                                                                                                           // parameters for this interface.
    RedfishCS_char_Array                                                    *StaticNameServers;            // The statically-defined set of
                                                                                                           // DNS server IPv4 and IPv6
                                                                                                           // addresses.
    RedfishResource_Status_CS                                               *Status;                       // The status and health of the
                                                                                                           // resource and its subordinate
                                                                                                           // or dependent resources.
    RedfishCS_char                                                          *UefiDevicePath;               // The UEFI device path for this
                                                                                                           // interface.
    RedfishCS_Link                                                          VLAN;                          // If this network interface
                                                                                                           // supports more than one VLAN,
                                                                                                           // this property is absent.  VLAN
                                                                                                           // collections appear in the
                                                                                                           // Links property of this
                                                                                                           // resource.
    RedfishCS_Link                                                          VLANs;                         // The link to a collection of
                                                                                                           // VLANs, which applies only if
                                                                                                           // the interface supports more
                                                                                                           // than one VLAN.  If this
                                                                                                           // property applies, the
                                                                                                           // VLANEnabled and VLANId
                                                                                                           // properties do not apply.
} RedfishEthernetInterface_V1_4_5_EthernetInterface_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

typedef struct _RedfishEthernetInterface_V1_4_5_IPv6AddressPolicyEntry_Array_CS  {
    RedfishEthernetInterface_V1_4_5_IPv6AddressPolicyEntry_Array_CS    *Next;
    RedfishEthernetInterface_V1_4_5_IPv6AddressPolicyEntry_CS    *ArrayValue;
} RedfishEthernetInterface_V1_4_5_IPv6AddressPolicyEntry_Array_CS;

RedfishCS_status
Json_EthernetInterface_V1_4_5_To_CS (char *JsonRawText, RedfishEthernetInterface_V1_4_5_EthernetInterface_CS **ReturnedCS);

RedfishCS_status
CS_To_EthernetInterface_V1_4_5_JSON (RedfishEthernetInterface_V1_4_5_EthernetInterface_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyEthernetInterface_V1_4_5_CS (RedfishEthernetInterface_V1_4_5_EthernetInterface_CS *CSPtr);

RedfishCS_status
DestroyEthernetInterface_V1_4_5_Json (RedfishCS_char *JsonText);

#endif
