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

#ifndef RedfishAddresspool_V1_1_1_CSTRUCT_H_
#define RedfishAddresspool_V1_1_1_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishAddressPool_V1_1_1_ASNumberRange_CS RedfishAddressPool_V1_1_1_ASNumberRange_CS;
typedef struct _RedfishAddressPool_V1_1_1_Actions_CS RedfishAddressPool_V1_1_1_Actions_CS;
typedef struct _RedfishAddressPool_V1_1_1_AddressPool_CS RedfishAddressPool_V1_1_1_AddressPool_CS;
typedef struct _RedfishAddressPool_V1_1_1_BFDSingleHopOnly_CS RedfishAddressPool_V1_1_1_BFDSingleHopOnly_CS;
typedef struct _RedfishAddressPool_V1_1_1_BGPEvpn_CS RedfishAddressPool_V1_1_1_BGPEvpn_CS;
typedef struct _RedfishAddressPool_V1_1_1_BGPNeighbor_CS RedfishAddressPool_V1_1_1_BGPNeighbor_CS;
typedef struct _RedfishAddressPool_V1_1_1_BGPRoute_CS RedfishAddressPool_V1_1_1_BGPRoute_CS;
typedef struct _RedfishAddressPool_V1_1_1_CommonBGPProperties_CS RedfishAddressPool_V1_1_1_CommonBGPProperties_CS;
typedef struct _RedfishAddressPool_V1_1_1_DHCP_CS RedfishAddressPool_V1_1_1_DHCP_CS;
typedef struct _RedfishAddressPool_V1_1_1_EBGP_CS RedfishAddressPool_V1_1_1_EBGP_CS;
typedef struct _RedfishAddressPool_V1_1_1_ESINumberRange_CS RedfishAddressPool_V1_1_1_ESINumberRange_CS;
typedef struct _RedfishAddressPool_V1_1_1_EVINumberRange_CS RedfishAddressPool_V1_1_1_EVINumberRange_CS;
typedef struct _RedfishAddressPool_V1_1_1_Ethernet_CS RedfishAddressPool_V1_1_1_Ethernet_CS;
typedef struct _RedfishAddressPool_V1_1_1_GenZ_CS RedfishAddressPool_V1_1_1_GenZ_CS;
typedef struct _RedfishAddressPool_V1_1_1_GracefulRestart_CS RedfishAddressPool_V1_1_1_GracefulRestart_CS;
typedef struct _RedfishAddressPool_V1_1_1_IPv4_CS RedfishAddressPool_V1_1_1_IPv4_CS;
typedef struct _RedfishAddressPool_V1_1_1_IPv4AddressRange_CS RedfishAddressPool_V1_1_1_IPv4AddressRange_CS;
typedef struct _RedfishAddressPool_V1_1_1_Links_CS RedfishAddressPool_V1_1_1_Links_CS;
typedef struct _RedfishAddressPool_V1_1_1_MaxPrefix_CS RedfishAddressPool_V1_1_1_MaxPrefix_CS;
typedef struct _RedfishAddressPool_V1_1_1_MultiplePaths_CS RedfishAddressPool_V1_1_1_MultiplePaths_CS;
typedef struct _RedfishAddressPool_V1_1_1_OemActions_CS RedfishAddressPool_V1_1_1_OemActions_CS;
typedef struct _RedfishAddressPool_V1_1_1_RouteDistinguisherRange_CS RedfishAddressPool_V1_1_1_RouteDistinguisherRange_CS;
typedef struct _RedfishAddressPool_V1_1_1_RouteTargetRange_CS RedfishAddressPool_V1_1_1_RouteTargetRange_CS;
typedef struct _RedfishAddressPool_V1_1_1_VLANIdentifierAddressRange_CS RedfishAddressPool_V1_1_1_VLANIdentifierAddressRange_CS;
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
// Autonomous System (AS) number range.
//
typedef struct _RedfishAddressPool_V1_1_1_ASNumberRange_CS {
    RedfishCS_int64    *Lower;    // Lower Autonomous System (AS)
                                 // number.
    RedfishCS_int64    *Upper;    // Upper Autonomous System (AS)
                                 // number.
} RedfishAddressPool_V1_1_1_ASNumberRange_CS;

//
// The available actions for this resource.
//
typedef struct _RedfishAddressPool_V1_1_1_Actions_CS {
    RedfishAddressPool_V1_1_1_OemActions_CS    *Oem;    // The available OEM-specific
                                                       // actions for this resource.
} RedfishAddressPool_V1_1_1_Actions_CS;

//
// Bidirectional Forwarding Detection (BFD) related properties for an Ethernet
// fabric.
//
typedef struct _RedfishAddressPool_V1_1_1_BFDSingleHopOnly_CS {
    RedfishCS_bool     *DemandModeEnabled;                   // Bidirectional Forwarding
                                                             // Detection (BFD) Demand Mode
                                                             // status.
    RedfishCS_int64    *DesiredMinTxIntervalMilliseconds;    // Desired Bidirectional
                                                             // Forwarding Detection (BFD)
                                                             // minimal transmit interval.
    RedfishCS_char     *KeyChain;                            // Bidirectional Forwarding
                                                             // Detection (BFD) Key Chain
                                                             // name.
    RedfishCS_int64    *LocalMultiplier;                     // Bidirectional Forwarding
                                                             // Detection (BFD) multiplier
                                                             // value.
    RedfishCS_bool     *MeticulousModeEnabled;               // Meticulous MD5 authentication
                                                             // of the Bidirectional
                                                             // Forwarding Detection (BFD)
                                                             // session.
    RedfishCS_int64    *RequiredMinRxIntervalMilliseconds;    // Bidirectional Forwarding
                                                             // Detection (BFD) receive value.
    RedfishCS_int64    *SourcePort;                          // Bidirectional Forwarding
                                                             // Detection (BFD) source port.
} RedfishAddressPool_V1_1_1_BFDSingleHopOnly_CS;

//
// BGP Ethernet Virtual Private Network (BGP EVPN) related properties for an
// Ethernet fabric.
//
typedef struct _RedfishAddressPool_V1_1_1_BGPEvpn_CS {
    RedfishCS_bool                                             *ARPProxyEnabled;                    // Address Resolution Protocol
                                                                                                    // (ARP) proxy status.
    RedfishCS_bool                                             *ARPSupressionEnabled;               // Address Resolution Protocol
                                                                                                    // (ARP) suppression status.
    RedfishCS_char                                             *AnycastGatewayIPAddress;            // The anycast gateway IPv4
                                                                                                    // address.
    RedfishCS_char                                             *AnycastGatewayMACAddress;           // The anycast gateway MAC
                                                                                                    // address.
    RedfishAddressPool_V1_1_1_ESINumberRange_CS                *ESINumberRange;                     // The Ethernet Segment
                                                                                                    // Identifier (ESI) number range
                                                                                                    // for the fabric.
    RedfishAddressPool_V1_1_1_EVINumberRange_CS                *EVINumberRange;                     // The Ethernet Virtual Private
                                                                                                    // Network (EVPN) Instance number
                                                                                                    // (EVI) number range for the
                                                                                                    // fabric.
    RedfishCS_char                                             *GatewayIPAddress;                   // The gateway IPv4 address.
    RedfishCS_bool                                             *NDPProxyEnabled;                    // Network Discovery Protocol
                                                                                                    // (NDP) proxy status.
    RedfishCS_bool                                             *NDPSupressionEnabled;               // Network Discovery Protocol
                                                                                                    // (NDP) suppression status.
    RedfishAddressPool_V1_1_1_RouteDistinguisherRange_CS       *RouteDistinguisherRange;            // The Route Distinguisher (RD)
                                                                                                    // number range for the fabric.
    RedfishAddressPool_V1_1_1_RouteTargetRange_CS              *RouteTargetRange;                   // The Route Target (RT) number
                                                                                                    // range for the fabric.
    RedfishCS_bool                                             *UnderlayMulticastEnabled;           // Underlay multicast status.
    RedfishCS_bool                                             *UnknownUnicastSuppressionEnabled;    // Suppression of unknown unicast
                                                                                                    // packets.
    RedfishAddressPool_V1_1_1_VLANIdentifierAddressRange_CS    *VLANIdentifierAddressRange;         // The VLAN tag range for the
                                                                                                    // fabric.
} RedfishAddressPool_V1_1_1_BGPEvpn_CS;

//
// Border Gateway Protocol (BGP) neighbor related properties.
//
typedef struct _RedfishAddressPool_V1_1_1_BGPNeighbor_CS {
    RedfishCS_char                            *Address;                               // Border Gateway Protocol (BGP)
                                                                                      // neighbor address.
    RedfishCS_bool                            *AllowOwnASEnabled;                     // Allow own Autonomous System
                                                                                      // (AS) status.
    RedfishCS_int64                           *ConnectRetrySeconds;                   // Border Gateway Protocol (BGP)
                                                                                      // retry timer in seconds.
    RedfishCS_int64                           *HoldTimeSeconds;                       // Border Gateway Protocol (BGP)
                                                                                      // hold timer in seconds.
    RedfishCS_int64                           *KeepaliveIntervalSeconds;              // Border Gateway Protocol (BGP)
                                                                                      // Keepalive timer in seconds.
    RedfishCS_int64                           *LocalAS;                               // Local Autonomous System (AS)
                                                                                      // number.
    RedfishCS_bool                            *LogStateChangesEnabled;                // Border Gateway Protocol (BGP)
                                                                                      // neighbor log state change
                                                                                      // status.
    RedfishAddressPool_V1_1_1_MaxPrefix_CS    *MaxPrefix;                             // Border Gateway Protocol (BGP)
                                                                                      // max prefix properties.
    RedfishCS_int64                           *MinimumAdvertisementIntervalSeconds;    // Minimum Border Gateway
                                                                                      // Protocol (BGP) advertisement
                                                                                      // interval in seconds.
    RedfishCS_bool                            *PassiveModeEnabled;                    // Border Gateway Protocol (BGP)
                                                                                      // passive mode status.
    RedfishCS_bool                            *PathMTUDiscoveryEnabled;               // Path MTU discovery status.
    RedfishCS_int64                           *PeerAS;                                // Peer Autonomous System (AS)
                                                                                      // number.
    RedfishCS_bool                            *ReplacePeerASEnabled;                  // Replace Border Gateway
                                                                                      // Protocol (BGP) peer Autonomous
                                                                                      // System (AS) status.
    RedfishCS_int64                           *TCPMaxSegmentSizeBytes;                // TCP max segment size in Bytes.
    RedfishCS_bool                            *TreatAsWithdrawEnabled;                // Border Gateway Protocol (BGP)
                                                                                      // treat as withdraw status.
} RedfishAddressPool_V1_1_1_BGPNeighbor_CS;

//
// Border Gateway Protocol (BGP) route properties.
//
typedef struct _RedfishAddressPool_V1_1_1_BGPRoute_CS {
    RedfishCS_bool     *AdvertiseInactiveRoutesEnabled;    // Advertise inactive route
                                                          // status.
    RedfishCS_int64    *DistanceExternal;                 // Route distance for external
                                                          // routes.
    RedfishCS_int64    *DistanceInternal;                 // Route distance for internal
                                                          // routes.
    RedfishCS_int64    *DistanceLocal;                    // Route distance for local
                                                          // routes.
    RedfishCS_bool     *ExternalCompareRouterIdEnabled;    // Compare router id status.
    RedfishCS_bool     *FlapDampingEnabled;               // Route flap dampening status.
    RedfishCS_bool     *SendDefaultRouteEnabled;          // Send default route status.
} RedfishAddressPool_V1_1_1_BGPRoute_CS;

//
// Common BGP properties.
//
typedef struct _RedfishAddressPool_V1_1_1_CommonBGPProperties_CS {
    RedfishAddressPool_V1_1_1_ASNumberRange_CS      *ASNumberRange;          // Autonomous System (AS) number
                                                                             // range.
    RedfishAddressPool_V1_1_1_BGPNeighbor_CS        *BGPNeighbor;            // Border Gateway Protocol (BGP)
                                                                             // neighbor related properties.
    RedfishAddressPool_V1_1_1_BGPRoute_CS           *BGPRoute;               // Border Gateway Protocol (BGP)
                                                                             // route related properties.
    RedfishAddressPool_V1_1_1_GracefulRestart_CS    *GracefulRestart;        // Graceful restart related
                                                                             // properties.
    RedfishAddressPool_V1_1_1_MultiplePaths_CS      *MultiplePaths;          // Multiple path related
                                                                             // properties.
    RedfishCS_bool                                  *SendCommunityEnabled;    // This property shall indicate
                                                                             // whether community attributes
                                                                             // are sent.
} RedfishAddressPool_V1_1_1_CommonBGPProperties_CS;

//
// DHCP related properties for an Ethernet fabric.
//
typedef struct _RedfishAddressPool_V1_1_1_DHCP_CS {
    RedfishCS_int64         *DHCPInterfaceMTUBytes;    // Dynamic Host Configuration
                                                      // Protocol (DHCP) interface
                                                      // Maximum Transmission Unit
                                                      // (MTU).
    RedfishCS_bool          *DHCPRelayEnabled;        // Dynamic Host Configuration
                                                      // Protocol (DHCP) relay status.
    RedfishCS_char_Array    *DHCPServer;              // The Dynamic Host Configuration
                                                      // Protocol (DHCP) IPv4 addresses
                                                      // for this Ethernet fabric.
} RedfishAddressPool_V1_1_1_DHCP_CS;

//
// External BGP (eBGP) related properties for an Ethernet fabric.
//
typedef struct _RedfishAddressPool_V1_1_1_EBGP_CS {
    RedfishAddressPool_V1_1_1_ASNumberRange_CS      *ASNumberRange;             // Autonomous System (AS) number
                                                                                // range.
    RedfishCS_bool                                  *AllowDuplicateASEnabled;    // Allow duplicate Autonomous
                                                                                // System (AS) path.
    RedfishCS_bool                                  *AllowOverrideASEnabled;    // Option to override an
                                                                                // Autonomous System (AS) number
                                                                                // with the AS number of the
                                                                                // sending peer .
    RedfishCS_bool                                  *AlwaysCompareMEDEnabled;    // Compare Multi Exit
                                                                                // Discriminator (MED) status.
    RedfishCS_int64                                 *BGPLocalPreference;        // Local preference value.
    RedfishAddressPool_V1_1_1_BGPNeighbor_CS        *BGPNeighbor;               // Border Gateway Protocol (BGP)
                                                                                // neighbor related properties.
    RedfishAddressPool_V1_1_1_BGPRoute_CS           *BGPRoute;                  // Border Gateway Protocol (BGP)
                                                                                // route related properties.
    RedfishCS_int64                                 *BGPWeight;                 // BGP weight attribute.
    RedfishAddressPool_V1_1_1_GracefulRestart_CS    *GracefulRestart;           // Graceful restart related
                                                                                // properties.
    RedfishCS_int64                                 *MED;                       // BGP Multi Exit Discriminator
                                                                                // (MED) value.
    RedfishCS_bool                                  *MultihopEnabled;           // External BGP (eBGP) multihop
                                                                                // status.
    RedfishCS_int64                                 *MultihopTTL;               // External BGP (eBGP) multihop
                                                                                // Time to Live (TTL) value.
    RedfishAddressPool_V1_1_1_MultiplePaths_CS      *MultiplePaths;             // Multiple path related
                                                                                // properties.
    RedfishCS_bool                                  *SendCommunityEnabled;      // This property shall indicate
                                                                                // whether community attributes
                                                                                // are sent.
} RedfishAddressPool_V1_1_1_EBGP_CS;

//
// The Ethernet Segment Identifier (ESI) number range for an Ethernet fabric.
//
typedef struct _RedfishAddressPool_V1_1_1_ESINumberRange_CS {
    RedfishCS_int64    *Lower;    // Lower Ethernet Segment
                                 // Identifier (ESI) number.
    RedfishCS_int64    *Upper;    // Upper Ethernet Segment
                                 // Identifier (ESI) number.
} RedfishAddressPool_V1_1_1_ESINumberRange_CS;

//
// The Ethernet Virtual Private Network (EVPN) Instance (EVI) number range for an
// Ethernet fabric.
//
typedef struct _RedfishAddressPool_V1_1_1_EVINumberRange_CS {
    RedfishCS_int64    *Lower;    // Lower Ethernet Virtual Private
                                 // Network (EVPN) Instance (EVI)
                                 // number.
    RedfishCS_int64    *Upper;    // Upper Ethernet Virtual Private
                                 // Network (EVPN) Instance (EVI)
                                 // number.
} RedfishAddressPool_V1_1_1_EVINumberRange_CS;

//
// Ethernet related properties for an address pool.
//
typedef struct _RedfishAddressPool_V1_1_1_Ethernet_CS {
    RedfishAddressPool_V1_1_1_BFDSingleHopOnly_CS       *BFDSingleHopOnly;    // Bidirectional Forwarding
                                                                              // Detection (BFD) related
                                                                              // properties for this Ethernet
                                                                              // fabric.
    RedfishAddressPool_V1_1_1_BGPEvpn_CS                *BGPEvpn;             // BGP Ethernet Virtual Private
                                                                              // Network (EVPN) related
                                                                              // properties for this Ethernet
                                                                              // fabric.
    RedfishAddressPool_V1_1_1_EBGP_CS                   *EBGP;                // External BGP (eBGP) related
                                                                              // properties for this Ethernet
                                                                              // fabric.
    RedfishAddressPool_V1_1_1_IPv4_CS                   *IPv4;                // IPv4 and Virtual LAN (VLAN)
                                                                              // related addressing for this
                                                                              // Ethernet fabric.
    RedfishAddressPool_V1_1_1_EBGP_CS                   *MultiProtocolEBGP;    // Multi Protocol eBGP (MP eBGP)
                                                                              // related properties for this
                                                                              // Ethernet fabric.
    RedfishAddressPool_V1_1_1_CommonBGPProperties_CS    *MultiProtocolIBGP;    // Multi Protocol iBGP (MP iBGP)
                                                                              // related properties for this
                                                                              // Ethernet fabric.
} RedfishAddressPool_V1_1_1_Ethernet_CS;

//
// Gen-Z related properties for an address pool.
//
typedef struct _RedfishAddressPool_V1_1_1_GenZ_CS {
    RedfishCS_char     *AccessKey;    // The Access Key required for
                                     // this address pool.
    RedfishCS_int64    *MaxCID;      // The maximum value for the
                                     // Component Identifier (CID).
    RedfishCS_int64    *MaxSID;      // The maximum value for the
                                     // Subnet Identifier (SID).
    RedfishCS_int64    *MinCID;      // The minimum value for the
                                     // Component Identifier (CID).
    RedfishCS_int64    *MinSID;      // The minimum value for the
                                     // Subnet Identifier (SID).
} RedfishAddressPool_V1_1_1_GenZ_CS;

//
// Border Gateway Protocol (BGP) graceful restart properties.
//
typedef struct _RedfishAddressPool_V1_1_1_GracefulRestart_CS {
    RedfishCS_bool     *GracefulRestartEnabled;    // Border Gateway Protocol (BGP)
                                                  // graceful restart status.
    RedfishCS_bool     *HelperModeEnabled;        // Graceful restart helper mode
                                                  // status.
    RedfishCS_int64    *StaleRoutesTimeSeconds;    // Stale route timer in seconds.
    RedfishCS_int64    *TimeSeconds;              // Graceful restart timer in
                                                  // seconds.
} RedfishAddressPool_V1_1_1_GracefulRestart_CS;

//
// IPv4 and Virtual LAN (VLAN) related addressing for an Ethernet fabric.
//
typedef struct _RedfishAddressPool_V1_1_1_IPv4_CS {
    RedfishCS_char                                             *AnycastGatewayIPAddress;         // The anycast gateway IPv4
                                                                                                 // address.
    RedfishCS_char                                             *AnycastGatewayMACAddress;        // The anycast gateway MAC
                                                                                                 // address.
    RedfishAddressPool_V1_1_1_DHCP_CS                          *DHCP;                            // The Dynamic Host Configuration
                                                                                                 // Protocol (DHCP) related
                                                                                                 // addressing for this Ethernet
                                                                                                 // fabric.
    RedfishCS_char                                             *DNSDomainName;                   // The Domain Name Service (DNS)
                                                                                                 // domain name for this Ethernet
                                                                                                 // fabric.
    RedfishCS_char_Array                                       *DNSServer;                       // The Domain Name Service (DNS)
                                                                                                 // servers for this Ethernet
                                                                                                 // fabric.
    RedfishCS_bool                                             *DistributeIntoUnderlayEnabled;    // Indicates if host subnets
                                                                                                 // should be distributed into the
                                                                                                 // fabric underlay.
    RedfishAddressPool_V1_1_1_IPv4AddressRange_CS              *EBGPAddressRange;                // External BGP (eBGP) related
                                                                                                 // addressing for this Ethernet
                                                                                                 // fabric.
    RedfishAddressPool_V1_1_1_IPv4AddressRange_CS              *FabricLinkAddressRange;          // Link related addressing for
                                                                                                 // this Ethernet fabric.
    RedfishCS_char                                             *GatewayIPAddress;                // The gateway IPv4 address.
    RedfishAddressPool_V1_1_1_IPv4AddressRange_CS              *HostAddressRange;                // IPv4 related end host subnet
                                                                                                 // addressing for this Ethernet
                                                                                                 // fabric.
    RedfishAddressPool_V1_1_1_IPv4AddressRange_CS              *IBGPAddressRange;                // Internal BGP (iBGP) related
                                                                                                 // addressing for this Ethernet
                                                                                                 // fabric.
    RedfishAddressPool_V1_1_1_IPv4AddressRange_CS              *LoopbackAddressRange;            // Loopback related addressing
                                                                                                 // for this Ethernet fabric.
    RedfishAddressPool_V1_1_1_IPv4AddressRange_CS              *ManagementAddressRange;          // Management related addressing
                                                                                                 // for this Ethernet fabric.
    RedfishCS_int64                                            *NTPOffsetHoursMinutes;           // The Network Time Protocol
                                                                                                 // (NTP) offset configuration.
    RedfishCS_char_Array                                       *NTPServer;                       // The Network Time Protocol
                                                                                                 // (NTP) servers for this
                                                                                                 // Ethernet fabric.
    RedfishCS_char                                             *NTPTimezone;                     // The Network Time Protocol
                                                                                                 // (NTP) timezone for this
                                                                                                 // Ethernet fabric.
    RedfishCS_int64                                            *NativeVLAN;                      // The native Virtual LAN (VLAN)
                                                                                                 // tag value.
    RedfishAddressPool_V1_1_1_VLANIdentifierAddressRange_CS    *VLANIdentifierAddressRange;      // Virtual LAN (VLAN) tag related
                                                                                                 // addressing for this Ethernet
                                                                                                 // fabric or for end host
                                                                                                 // networks.
} RedfishAddressPool_V1_1_1_IPv4_CS;

//
// IPv4 related address range for an Ethernet fabric.
//
typedef struct _RedfishAddressPool_V1_1_1_IPv4AddressRange_CS {
    RedfishCS_char    *Lower;    // Lower IPv4 network address.
    RedfishCS_char    *Upper;    // Upper IPv4 network address.
} RedfishAddressPool_V1_1_1_IPv4AddressRange_CS;

//
// The links to other resources that are related to this resource.
//
typedef struct _RedfishAddressPool_V1_1_1_Links_CS {
    RedfishCS_Link            Endpoints;               // An array of links to the
                                                       // endpoints that this address
                                                       // pool contains.
    RedfishCS_int64           *Endpointsodata_count;
    RedfishResource_Oem_CS    *Oem;                    // The OEM extension property.
    RedfishCS_Link            Zones;                   // An array of links to the zones
                                                       // that this address pool
                                                       // contains.
    RedfishCS_int64           *Zonesodata_count;   
} RedfishAddressPool_V1_1_1_Links_CS;

//
// Border Gateway Protocol (BGP) max prefix properties.
//
typedef struct _RedfishAddressPool_V1_1_1_MaxPrefix_CS {
    RedfishCS_int64    *MaxPrefixNumber;               // Maximum prefix number.
    RedfishCS_int64    *RestartTimerSeconds;           // Border Gateway Protocol (BGP)
                                                       // restart timer in seconds.
    RedfishCS_int64    *ShutdownThresholdPercentage;    // Shutdown threshold status.
    RedfishCS_bool     *ThresholdWarningOnlyEnabled;    // Threshold warning only status.
} RedfishAddressPool_V1_1_1_MaxPrefix_CS;

//
// Border Gateway Protocol (BGP) multiple path properties.
//
typedef struct _RedfishAddressPool_V1_1_1_MultiplePaths_CS {
    RedfishCS_int64    *MaximumPaths;              // Maximum paths number.
    RedfishCS_bool     *UseMultiplePathsEnabled;    // Border Gateway Protocol (BGP)
                                                   // multiple paths status.
} RedfishAddressPool_V1_1_1_MultiplePaths_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishAddressPool_V1_1_1_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishAddressPool_V1_1_1_OemActions_CS;

//
// The Route Distinguisher (RD) number range for an Ethernet fabric.
//
typedef struct _RedfishAddressPool_V1_1_1_RouteDistinguisherRange_CS {
    RedfishCS_int64    *Lower;    // Lower Route Distinguisher (RD)
                                 // number.
    RedfishCS_int64    *Upper;    // Upper Route Distinguisher (RD)
                                 // number.
} RedfishAddressPool_V1_1_1_RouteDistinguisherRange_CS;

//
// The Route Target (RT) number range for the fabric.
//
typedef struct _RedfishAddressPool_V1_1_1_RouteTargetRange_CS {
    RedfishCS_int64    *Lower;    // Lower Route Target (RT)
                                 // number.
    RedfishCS_int64    *Upper;    // Upper Route Target (RT)
                                 // number.
} RedfishAddressPool_V1_1_1_RouteTargetRange_CS;

//
// VLAN tag related addressing for an Ethernet fabric or for end host networks.
//
typedef struct _RedfishAddressPool_V1_1_1_VLANIdentifierAddressRange_CS {
    RedfishCS_int64    *Lower;    // Virtual LAN (VLAN) tag lower
                                 // value.
    RedfishCS_int64    *Upper;    // Virtual LAN (VLAN) tag upper
                                 // value.
} RedfishAddressPool_V1_1_1_VLANIdentifierAddressRange_CS;

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
// The schema definition of an address pool and its configuration.
//
typedef struct _RedfishAddressPool_V1_1_1_AddressPool_CS {
    RedfishCS_Header                         Header;
    RedfishCS_char                           *odata_context;
    RedfishCS_char                           *odata_etag;  
    RedfishCS_char                           *odata_id;    
    RedfishCS_char                           *odata_type;  
    RedfishAddressPool_V1_1_1_Actions_CS     *Actions;         // The available actions for this
                                                               // resource.
    RedfishCS_char                           *Description; 
    RedfishAddressPool_V1_1_1_Ethernet_CS    *Ethernet;        // The Ethernet related
                                                               // properties for this address
                                                               // pool.
    RedfishAddressPool_V1_1_1_GenZ_CS        *GenZ;            // The Gen-Z related properties
                                                               // for this address pool.
    RedfishCS_char                           *Id;          
    RedfishAddressPool_V1_1_1_Links_CS       *Links;           // The links to other resources
                                                               // that are related to this
                                                               // resource.
    RedfishCS_char                           *Name;        
    RedfishResource_Oem_CS                   *Oem;             // The OEM extension property.
    RedfishResource_Status_CS                *Status;          // The status and health of the
                                                               // resource and its subordinate
                                                               // or dependent resources.
} RedfishAddressPool_V1_1_1_AddressPool_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

RedfishCS_status
Json_AddressPool_V1_1_1_To_CS (char *JsonRawText, RedfishAddressPool_V1_1_1_AddressPool_CS **ReturnedCS);

RedfishCS_status
CS_To_AddressPool_V1_1_1_JSON (RedfishAddressPool_V1_1_1_AddressPool_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyAddressPool_V1_1_1_CS (RedfishAddressPool_V1_1_1_AddressPool_CS *CSPtr);

RedfishCS_status
DestroyAddressPool_V1_1_1_Json (RedfishCS_char *JsonText);

#endif
