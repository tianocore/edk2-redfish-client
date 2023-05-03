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

#ifndef RedfishNetworkinterface_V1_1_4_CSTRUCT_H_
#define RedfishNetworkinterface_V1_1_4_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishNetworkInterface_V1_1_4_Actions_CS RedfishNetworkInterface_V1_1_4_Actions_CS;
typedef struct _RedfishNetworkInterface_V1_1_4_Links_CS RedfishNetworkInterface_V1_1_4_Links_CS;
typedef struct _RedfishNetworkInterface_V1_1_4_NetworkInterface_CS RedfishNetworkInterface_V1_1_4_NetworkInterface_CS;
typedef struct _RedfishNetworkInterface_V1_1_4_OemActions_CS RedfishNetworkInterface_V1_1_4_OemActions_CS;
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
typedef struct _RedfishNetworkInterface_V1_1_4_Actions_CS {
    RedfishNetworkInterface_V1_1_4_OemActions_CS    *Oem;    // The available OEM-specific
                                                            // actions for this resource.
} RedfishNetworkInterface_V1_1_4_Actions_CS;

//
// The links to other resources that are related to this resource.
//
typedef struct _RedfishNetworkInterface_V1_1_4_Links_CS {
    RedfishCS_Link            NetworkAdapter;    // The link to the network
                                                // adapter that contains this
                                                // network interface.
    RedfishResource_Oem_CS    *Oem;             // The OEM extension property.
} RedfishNetworkInterface_V1_1_4_Links_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishNetworkInterface_V1_1_4_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishNetworkInterface_V1_1_4_OemActions_CS;

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
// The NetworkInterface schema describes links to the network adapters, network
// ports, and network device functions, and represents the functionality available
// to the containing system.
//
typedef struct _RedfishNetworkInterface_V1_1_4_NetworkInterface_CS {
    RedfishCS_Header                             Header;
    RedfishCS_char                               *odata_context;       
    RedfishCS_char                               *odata_etag;          
    RedfishCS_char                               *odata_id;            
    RedfishCS_char                               *odata_type;          
    RedfishNetworkInterface_V1_1_4_Actions_CS    *Actions;                 // The available actions for this
                                                                           // resource.
    RedfishCS_char                               *Description;         
    RedfishCS_char                               *Id;                  
    RedfishNetworkInterface_V1_1_4_Links_CS      *Links;                   // The links to other resources
                                                                           // that are related to this
                                                                           // resource.
    RedfishCS_char                               *Name;                
    RedfishCS_Link                               NetworkDeviceFunctions;    // The link to the network device
                                                                           // functions associated with this
                                                                           // network interface.
    RedfishCS_Link                               NetworkPorts;             // The link to the network ports
                                                                           // associated with this network
                                                                           // interface.
    RedfishResource_Oem_CS                       *Oem;                     // The OEM extension property.
    RedfishResource_Status_CS                    *Status;                  // The status and health of the
                                                                           // resource and its subordinate
                                                                           // or dependent resources.
} RedfishNetworkInterface_V1_1_4_NetworkInterface_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

RedfishCS_status
Json_NetworkInterface_V1_1_4_To_CS (char *JsonRawText, RedfishNetworkInterface_V1_1_4_NetworkInterface_CS **ReturnedCS);

RedfishCS_status
CS_To_NetworkInterface_V1_1_4_JSON (RedfishNetworkInterface_V1_1_4_NetworkInterface_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyNetworkInterface_V1_1_4_CS (RedfishNetworkInterface_V1_1_4_NetworkInterface_CS *CSPtr);

RedfishCS_status
DestroyNetworkInterface_V1_1_4_Json (RedfishCS_char *JsonText);

#endif
