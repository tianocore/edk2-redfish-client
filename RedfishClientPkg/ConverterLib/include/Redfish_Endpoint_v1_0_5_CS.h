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

#ifndef RedfishEndpoint_V1_0_5_CSTRUCT_H_
#define RedfishEndpoint_V1_0_5_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishEndpoint_V1_0_5_ConnectedEntity_Array_CS RedfishEndpoint_V1_0_5_ConnectedEntity_Array_CS;
typedef struct _RedfishEndpoint_V1_0_5_Actions_CS RedfishEndpoint_V1_0_5_Actions_CS;
typedef struct _RedfishEndpoint_V1_0_5_ConnectedEntity_CS RedfishEndpoint_V1_0_5_ConnectedEntity_CS;
typedef struct _RedfishEndpoint_V1_0_5_Endpoint_CS RedfishEndpoint_V1_0_5_Endpoint_CS;
typedef struct _RedfishEndpoint_V1_0_5_Links_CS RedfishEndpoint_V1_0_5_Links_CS;
typedef struct _RedfishEndpoint_V1_0_5_OemActions_CS RedfishEndpoint_V1_0_5_OemActions_CS;
typedef struct _RedfishEndpoint_V1_0_5_PciId_CS RedfishEndpoint_V1_0_5_PciId_CS;
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
typedef struct _RedfishEndpoint_V1_0_5_Actions_CS {
    RedfishEndpoint_V1_0_5_OemActions_CS    *Oem;    // This property contains the
                                                    // available OEM specific actions
                                                    // for this resource.
} RedfishEndpoint_V1_0_5_Actions_CS;

//
// Represents a remote resource that is connected to the network accessible to
// this endpoint.
//
typedef struct _RedfishEndpoint_V1_0_5_ConnectedEntity_CS {
    RedfishCS_Link                     EntityLink;           // A link to the associated
                                                             // entity.
    RedfishEndpoint_V1_0_5_PciId_CS    *EntityPciId;         // The PCI ID of the connected
                                                             // entity.
    RedfishCS_char                     *EntityRole;          // The role of the connected
                                                             // entity.
    RedfishCS_char                     *EntityType;          // The type of the connected
                                                             // entity.
    RedfishCS_Link                     Identifiers;          // Identifiers for the remote
                                                             // entity.
    RedfishResource_Oem_CS             *Oem;                 // Oem extension object.
    RedfishCS_char                     *PciClassCode;        // The Class Code, Subclass code,
                                                             // and Programming Interface code
                                                             // of this PCIe function.
    RedfishCS_int64                    *PciFunctionNumber;    // The PCI ID of the connected
                                                             // entity.
} RedfishEndpoint_V1_0_5_ConnectedEntity_CS;

//
// Contains references to other resources that are related to this resource.
//
typedef struct _RedfishEndpoint_V1_0_5_Links_CS {
    RedfishCS_Link            MutuallyExclusiveEndpoints;               // An array of references to the
                                                                        // endpoints that may not be used
                                                                        // in zones if this endpoint is
                                                                        // used in a zone.
    RedfishCS_int64           *MutuallyExclusiveEndpointsodata_count;
    RedfishResource_Oem_CS    *Oem;                                     // Oem extension object.
    RedfishCS_Link            Ports;                                    // An array of references to the
                                                                        // the physical ports associated
                                                                        // with this endpoint.
    RedfishCS_int64           *Portsodata_count;                    
} RedfishEndpoint_V1_0_5_Links_CS;

//
// The available OEM specific actions for this resource.
//
typedef struct _RedfishEndpoint_V1_0_5_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishEndpoint_V1_0_5_OemActions_CS;

//
// A PCI ID.
//
typedef struct _RedfishEndpoint_V1_0_5_PciId_CS {
    RedfishCS_char    *DeviceId;            // The Device ID of this PCIe
                                            // function.
    RedfishCS_char    *SubsystemId;         // The Subsystem ID of this PCIe
                                            // function.
    RedfishCS_char    *SubsystemVendorId;    // The Subsystem Vendor ID of
                                            // this PCIe function.
    RedfishCS_char    *VendorId;            // The Vendor ID of this PCIe
                                            // function.
} RedfishEndpoint_V1_0_5_PciId_CS;

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
// This is the schema definition for the Endpoint resource. It represents the
// properties of an entity that sends or receives protocol defined messages over a
// transport.
//
typedef struct _RedfishEndpoint_V1_0_5_Endpoint_CS {
    RedfishCS_Header                                   Header;
    RedfishCS_char                                     *odata_context;            
    RedfishCS_char                                     *odata_etag;               
    RedfishCS_char                                     *odata_id;                 
    RedfishCS_char                                     *odata_type;               
    RedfishEndpoint_V1_0_5_Actions_CS                  *Actions;                      // The available actions for this
                                                                                      // resource.
    RedfishEndpoint_V1_0_5_ConnectedEntity_Array_CS    *ConnectedEntities;            // All the entities connected to
                                                                                      // this endpoint.
    RedfishCS_char                                     *Description;              
    RedfishCS_char                                     *EndpointProtocol;             // The protocol supported by this
                                                                                      // endpoint.
    RedfishCS_int64                                    *HostReservationMemoryBytes;    // The amount of memory in Bytes
                                                                                      // that the Host should allocate
                                                                                      // to connect to this endpoint.
    RedfishCS_char                                     *Id;                       
    RedfishCS_Link                                     Identifiers;                   // Identifiers for this endpoint.
    RedfishEndpoint_V1_0_5_Links_CS                    *Links;                        // The links object contains the
                                                                                      // links to other resources that
                                                                                      // are related to this resource.
    RedfishCS_char                                     *Name;                     
    RedfishResource_Oem_CS                             *Oem;                          // This is the
                                                                                      // manufacturer/provider specific
                                                                                      // extension moniker used to
                                                                                      // divide the Oem object into
                                                                                      // sections.
    RedfishEndpoint_V1_0_5_PciId_CS                    *PciId;                        // The PCI ID of the endpoint.
    RedfishCS_Link                                     Redundancy;                    // Redundancy information for the
                                                                                      // lower level endpoints
                                                                                      // supporting this endpoint.
    RedfishCS_int64                                    *Redundancyodata_count;    
    RedfishResource_Status_CS                          *Status;                       // This property describes the
                                                                                      // status and health of the
                                                                                      // resource and its children.
} RedfishEndpoint_V1_0_5_Endpoint_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

typedef struct _RedfishEndpoint_V1_0_5_ConnectedEntity_Array_CS  {
    RedfishEndpoint_V1_0_5_ConnectedEntity_Array_CS    *Next;
    RedfishEndpoint_V1_0_5_ConnectedEntity_CS    *ArrayValue;
} RedfishEndpoint_V1_0_5_ConnectedEntity_Array_CS;

RedfishCS_status
Json_Endpoint_V1_0_5_To_CS (char *JsonRawText, RedfishEndpoint_V1_0_5_Endpoint_CS **ReturnedCS);

RedfishCS_status
CS_To_Endpoint_V1_0_5_JSON (RedfishEndpoint_V1_0_5_Endpoint_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyEndpoint_V1_0_5_CS (RedfishEndpoint_V1_0_5_Endpoint_CS *CSPtr);

RedfishCS_status
DestroyEndpoint_V1_0_5_Json (RedfishCS_char *JsonText);

#endif
