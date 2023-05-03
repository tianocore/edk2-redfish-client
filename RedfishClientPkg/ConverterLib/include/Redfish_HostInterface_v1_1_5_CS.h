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

#ifndef RedfishHostinterface_V1_1_5_CSTRUCT_H_
#define RedfishHostinterface_V1_1_5_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishHostInterface_V1_1_5_Actions_CS RedfishHostInterface_V1_1_5_Actions_CS;
typedef struct _RedfishHostInterface_V1_1_5_HostInterface_CS RedfishHostInterface_V1_1_5_HostInterface_CS;
typedef struct _RedfishHostInterface_V1_1_5_Links_CS RedfishHostInterface_V1_1_5_Links_CS;
typedef struct _RedfishHostInterface_V1_1_5_OemActions_CS RedfishHostInterface_V1_1_5_OemActions_CS;
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
typedef struct _RedfishHostInterface_V1_1_5_Actions_CS {
    RedfishHostInterface_V1_1_5_OemActions_CS    *Oem;    // The available OEM-specific
                                                         // actions for this Resource.
} RedfishHostInterface_V1_1_5_Actions_CS;

//
// References to other Resources related to this Resource.
//
typedef struct _RedfishHostInterface_V1_1_5_Links_CS {
    RedfishCS_Link            ComputerSystems;               // An array of links to the
                                                             // computer systems connected to
                                                             // this Host Interface.
    RedfishCS_int64           *ComputerSystemsodata_count;
    RedfishCS_Link            FirmwareAuthRole;              // The link to the Redfish Role
                                                             // that has firmware
                                                             // authentication privileges on
                                                             // this Host Interface.
    RedfishCS_Link            KernelAuthRole;                // The link to the Redfish Role
                                                             // defining privileges for this
                                                             // Host Interface when using
                                                             // kernel authentication.
    RedfishResource_Oem_CS    *Oem;                          // The OEM extension property.
} RedfishHostInterface_V1_1_5_Links_CS;

//
// The available OEM-specific actions for this Resource.
//
typedef struct _RedfishHostInterface_V1_1_5_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishHostInterface_V1_1_5_OemActions_CS;

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
// The properties associated with a Host Interface.  A Host Interface is a
// connection between host software and a Redfish Service.
//
typedef struct _RedfishHostInterface_V1_1_5_HostInterface_CS {
    RedfishCS_Header                          Header;
    RedfishCS_char                            *odata_context;         
    RedfishCS_char                            *odata_etag;            
    RedfishCS_char                            *odata_id;              
    RedfishCS_char                            *odata_type;            
    RedfishHostInterface_V1_1_5_Actions_CS    *Actions;                   // The available actions for this
                                                                          // Resource.
    RedfishCS_char_Array                      *AuthenticationModes;       // The authentication modes
                                                                          // available on this interface.
    RedfishCS_char                            *Description;           
    RedfishCS_bool                            *ExternallyAccessible;      // An indication of whether
                                                                          // external entities can access
                                                                          // this interface.  External
                                                                          // entities are non-host
                                                                          // entities.  For example, if the
                                                                          // host and manager are connected
                                                                          // through a switch and the
                                                                          // switch also exposes an
                                                                          // external port on the system,
                                                                          // external clients can also use
                                                                          // the interface, and this
                                                                          // property value is `true`.
    RedfishCS_bool                            *FirmwareAuthEnabled;       // An indication of whether this
                                                                          // firmware authentication is
                                                                          // enabled for this interface.
    RedfishCS_char                            *FirmwareAuthRoleId;        // The Role used for firmware
                                                                          // authentication on this
                                                                          // interface.
    RedfishCS_Link                            HostEthernetInterfaces;     // A link to the collection of
                                                                          // network interface controllers
                                                                          // or cards (NICs) that a
                                                                          // computer system uses to
                                                                          // communicate with this Host
                                                                          // Interface.
    RedfishCS_char                            *HostInterfaceType;         // The Host Interface type for
                                                                          // this interface.
    RedfishCS_char                            *Id;                    
    RedfishCS_bool                            *InterfaceEnabled;          // An indication of whether this
                                                                          // interface is enabled.
    RedfishCS_bool                            *KernelAuthEnabled;         // An indication of whether this
                                                                          // kernel authentication is
                                                                          // enabled for this interface.
    RedfishCS_char                            *KernelAuthRoleId;          // The Role used for kernel
                                                                          // authentication on this
                                                                          // interface.
    RedfishHostInterface_V1_1_5_Links_CS      *Links;                     // The links to other Resources
                                                                          // that are related to this
                                                                          // Resource.
    RedfishCS_Link                            ManagerEthernetInterface;    // A link to a single network
                                                                          // interface controllers or cards
                                                                          // (NIC) that this manager uses
                                                                          // for network communication with
                                                                          // this Host Interface.
    RedfishCS_char                            *Name;                  
    RedfishCS_Link                            NetworkProtocol;            // A link to the network services
                                                                          // and their settings that the
                                                                          // manager controls.  In this
                                                                          // property, clients find
                                                                          // configuration options for the
                                                                          // network and network services.
    RedfishResource_Oem_CS                    *Oem;                       // The OEM extension property.
    RedfishResource_Status_CS                 *Status;                    // The status and health of the
                                                                          // Resource and its subordinate
                                                                          // or dependent Resources.
} RedfishHostInterface_V1_1_5_HostInterface_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

RedfishCS_status
Json_HostInterface_V1_1_5_To_CS (char *JsonRawText, RedfishHostInterface_V1_1_5_HostInterface_CS **ReturnedCS);

RedfishCS_status
CS_To_HostInterface_V1_1_5_JSON (RedfishHostInterface_V1_1_5_HostInterface_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyHostInterface_V1_1_5_CS (RedfishHostInterface_V1_1_5_HostInterface_CS *CSPtr);

RedfishCS_status
DestroyHostInterface_V1_1_5_Json (RedfishCS_char *JsonText);

#endif
