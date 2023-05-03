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

#ifndef RedfishEndpoint_V1_4_2_CSTRUCT_H_
#define RedfishEndpoint_V1_4_2_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishEndpoint_V1_4_2_ConnectedEntity_Array_CS RedfishEndpoint_V1_4_2_ConnectedEntity_Array_CS;
typedef struct _RedfishEndpoint_V1_4_2_IPTransportDetails_Array_CS RedfishEndpoint_V1_4_2_IPTransportDetails_Array_CS;
typedef struct _RedfishEndpoint_V1_4_2_Actions_CS RedfishEndpoint_V1_4_2_Actions_CS;
typedef struct _RedfishEndpoint_V1_4_2_ConnectedEntity_CS RedfishEndpoint_V1_4_2_ConnectedEntity_CS;
typedef struct _RedfishEndpoint_V1_4_2_Endpoint_CS RedfishEndpoint_V1_4_2_Endpoint_CS;
typedef struct _RedfishEndpoint_V1_4_2_GCID_CS RedfishEndpoint_V1_4_2_GCID_CS;
typedef struct _RedfishEndpoint_V1_4_2_GenZ_CS RedfishEndpoint_V1_4_2_GenZ_CS;
typedef struct _RedfishEndpoint_V1_4_2_IPTransportDetails_CS RedfishEndpoint_V1_4_2_IPTransportDetails_CS;
typedef struct _RedfishEndpoint_V1_4_2_Links_CS RedfishEndpoint_V1_4_2_Links_CS;
typedef struct _RedfishEndpoint_V1_4_2_OemActions_CS RedfishEndpoint_V1_4_2_OemActions_CS;
typedef struct _RedfishEndpoint_V1_4_2_PciId_CS RedfishEndpoint_V1_4_2_PciId_CS;
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
typedef struct _RedfishEndpoint_V1_4_2_Actions_CS {
    RedfishEndpoint_V1_4_2_OemActions_CS    *Oem;    // The available OEM-specific
                                                    // actions for this resource.
} RedfishEndpoint_V1_4_2_Actions_CS;

//
// Represents a remote resource that is connected to the network accessible to
// this endpoint.
//
typedef struct _RedfishEndpoint_V1_4_2_ConnectedEntity_CS {
    RedfishCS_Link                     EntityLink;           // The link to the associated
                                                             // entity.
    RedfishEndpoint_V1_4_2_PciId_CS    *EntityPciId;         // The PCI ID of the connected
                                                             // entity.
    RedfishCS_char                     *EntityRole;          // The role of the connected
                                                             // entity.
    RedfishCS_char                     *EntityType;          // The type of the connected
                                                             // entity.
    RedfishEndpoint_V1_4_2_GenZ_CS     *GenZ;                // The Gen-Z related properties
                                                             // for the entity.
    RedfishCS_Link                     Identifiers;          // Identifiers for the remote
                                                             // entity.
    RedfishResource_Oem_CS             *Oem;                 // The OEM extension property.
    RedfishCS_char                     *PciClassCode;        // The Class Code, Subclass, and
                                                             // Programming Interface code of
                                                             // this PCIe function.
    RedfishCS_int64                    *PciFunctionNumber;    // The PCI ID of the connected
                                                             // entity.
} RedfishEndpoint_V1_4_2_ConnectedEntity_CS;

//
// The Global Component ID (GCID).
//
typedef struct _RedfishEndpoint_V1_4_2_GCID_CS {
    RedfishCS_char    *CID;    // The component identifier
                              // portion of the GCID for the
                              // entity.
    RedfishCS_char    *SID;    // The subnet identifier portion
                              // of the GCID for the entity.
} RedfishEndpoint_V1_4_2_GCID_CS;

//
// The Gen-Z related properties for an entity.
//
typedef struct _RedfishEndpoint_V1_4_2_GenZ_CS {
    RedfishCS_char                    *AccessKey;    // The Access Key for the entity.
    RedfishEndpoint_V1_4_2_GCID_CS    *GCID;        // The Global Component ID (GCID)
                                                    // for the entity.
    RedfishCS_char                    *RegionKey;    // The Region Key for the entity.
} RedfishEndpoint_V1_4_2_GenZ_CS;

//
// This type specifies the details of the transport supported by the endpoint.
// The properties that are present are dependent on the type of transport
// supported by the endpoint.
//
typedef struct _RedfishEndpoint_V1_4_2_IPTransportDetails_CS {
    RedfishCS_Link     IPv4Address;          // The IPv4 addresses assigned to
                                             // the endpoint.
    RedfishCS_Link     IPv6Address;          // The IPv6 addresses assigned to
                                             // the endpoint.
    RedfishCS_int64    *Port;                // The UDP or TCP port number
                                             // used by the endpoint.
    RedfishCS_char     *TransportProtocol;    // The protocol used by the
                                             // connection entity.
} RedfishEndpoint_V1_4_2_IPTransportDetails_CS;

//
// The links to other resources that are related to this resource.
//
typedef struct _RedfishEndpoint_V1_4_2_Links_CS {
    RedfishCS_Link            AddressPools;                             // An array of links to the
                                                                        // address pools associated with
                                                                        // this endpoint.
    RedfishCS_int64           *AddressPoolsodata_count;             
    RedfishCS_Link            ConnectedPorts;                           // An array of links to the ports
                                                                        // that connect to this endpoint.
    RedfishCS_int64           *ConnectedPortsodata_count;           
    RedfishCS_Link            MutuallyExclusiveEndpoints;               // An array of links to the
                                                                        // endpoints that cannot be used
                                                                        // in zones if this endpoint is
                                                                        // in a zone.
    RedfishCS_int64           *MutuallyExclusiveEndpointsodata_count;
    RedfishCS_Link            NetworkDeviceFunction;                    // When NetworkDeviceFunction
                                                                        // resources are present, this
                                                                        // array contains links to the
                                                                        // network device functions that
                                                                        // connect to this endpoint.
    RedfishCS_int64           *NetworkDeviceFunctionodata_count;    
    RedfishResource_Oem_CS    *Oem;                                     // The OEM extension property.
    RedfishCS_Link            Ports;                                    // An array of links to the
                                                                        // physical ports associated with
                                                                        // this endpoint.
    RedfishCS_int64           *Portsodata_count;                    
} RedfishEndpoint_V1_4_2_Links_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishEndpoint_V1_4_2_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishEndpoint_V1_4_2_OemActions_CS;

//
// A PCI ID.
//
typedef struct _RedfishEndpoint_V1_4_2_PciId_CS {
    RedfishCS_char     *ClassCode;           // The Class Code, Subclass, and
                                             // Programming Interface code of
                                             // this PCIe function.
    RedfishCS_char     *DeviceId;            // The Device ID of this PCIe
                                             // function.
    RedfishCS_int64    *FunctionNumber;      // The PCI ID of the connected
                                             // entity.
    RedfishCS_char     *SubsystemId;         // The Subsystem ID of this PCIe
                                             // function.
    RedfishCS_char     *SubsystemVendorId;    // The Subsystem Vendor ID of
                                             // this PCIe function.
    RedfishCS_char     *VendorId;            // The Vendor ID of this PCIe
                                             // function.
} RedfishEndpoint_V1_4_2_PciId_CS;

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
// The Endpoint schema contains the properties of an endpoint resource that
// represents the properties of an entity that sends or receives protocol-defined
// messages over a transport.
//
typedef struct _RedfishEndpoint_V1_4_2_Endpoint_CS {
    RedfishCS_Header                                      Header;
    RedfishCS_char                                        *odata_context;            
    RedfishCS_char                                        *odata_etag;               
    RedfishCS_char                                        *odata_id;                 
    RedfishCS_char                                        *odata_type;               
    RedfishEndpoint_V1_4_2_Actions_CS                     *Actions;                      // The available actions for this
                                                                                         // resource.
    RedfishEndpoint_V1_4_2_ConnectedEntity_Array_CS       *ConnectedEntities;            // All the entities connected to
                                                                                         // this endpoint.
    RedfishCS_char                                        *Description;              
    RedfishCS_char                                        *EndpointProtocol;             // The protocol supported by this
                                                                                         // endpoint.
    RedfishCS_int64                                       *HostReservationMemoryBytes;    // The amount of memory in bytes
                                                                                         // that the host should allocate
                                                                                         // to connect to this endpoint.
    RedfishEndpoint_V1_4_2_IPTransportDetails_Array_CS    *IPTransportDetails;           // An array of details for each
                                                                                         // IP transport supported by this
                                                                                         // endpoint.  The array structure
                                                                                         // can model multiple IP
                                                                                         // addresses for this endpoint.
    RedfishCS_char                                        *Id;                       
    RedfishCS_Link                                        Identifiers;                   // Identifiers for this endpoint.
    RedfishEndpoint_V1_4_2_Links_CS                       *Links;                        // The links to other resources
                                                                                         // that are related to this
                                                                                         // resource.
    RedfishCS_char                                        *Name;                     
    RedfishResource_Oem_CS                                *Oem;                          // The OEM extension property.
    RedfishEndpoint_V1_4_2_PciId_CS                       *PciId;                        // The PCI ID of the endpoint.
    RedfishCS_Link                                        Redundancy;                    // Redundancy information for the
                                                                                         // lower-level endpoints
                                                                                         // supporting this endpoint.
    RedfishCS_int64                                       *Redundancyodata_count;    
    RedfishResource_Status_CS                             *Status;                       // The status and health of the
                                                                                         // resource and its subordinate
                                                                                         // or dependent resources.
} RedfishEndpoint_V1_4_2_Endpoint_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

typedef struct _RedfishEndpoint_V1_4_2_ConnectedEntity_Array_CS  {
    RedfishEndpoint_V1_4_2_ConnectedEntity_Array_CS    *Next;
    RedfishEndpoint_V1_4_2_ConnectedEntity_CS    *ArrayValue;
} RedfishEndpoint_V1_4_2_ConnectedEntity_Array_CS;

typedef struct _RedfishEndpoint_V1_4_2_IPTransportDetails_Array_CS  {
    RedfishEndpoint_V1_4_2_IPTransportDetails_Array_CS    *Next;
    RedfishEndpoint_V1_4_2_IPTransportDetails_CS    *ArrayValue;
} RedfishEndpoint_V1_4_2_IPTransportDetails_Array_CS;

RedfishCS_status
Json_Endpoint_V1_4_2_To_CS (char *JsonRawText, RedfishEndpoint_V1_4_2_Endpoint_CS **ReturnedCS);

RedfishCS_status
CS_To_Endpoint_V1_4_2_JSON (RedfishEndpoint_V1_4_2_Endpoint_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyEndpoint_V1_4_2_CS (RedfishEndpoint_V1_4_2_Endpoint_CS *CSPtr);

RedfishCS_status
DestroyEndpoint_V1_4_2_Json (RedfishCS_char *JsonText);

#endif
