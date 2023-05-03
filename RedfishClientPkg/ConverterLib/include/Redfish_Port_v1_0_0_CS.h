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

#ifndef RedfishPort_V1_0_0_CSTRUCT_H_
#define RedfishPort_V1_0_0_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishPort_V1_0_0_Port_CS RedfishPort_V1_0_0_Port_CS;
typedef struct _RedfishPort_V1_0_0_Port_Actions_CS RedfishPort_V1_0_0_Port_Actions_CS;
typedef struct _RedfishPort_V1_0_0_Port_Actions_Oem_CS RedfishPort_V1_0_0_Port_Actions_Oem_CS;
typedef struct _RedfishPort_V1_0_0_Port_Links_CS RedfishPort_V1_0_0_Port_Links_CS;
typedef struct _RedfishPort_V1_0_0_Reset_CS RedfishPort_V1_0_0_Reset_CS;
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
typedef struct _RedfishPort_V1_0_0_Port_Actions_CS {
    RedfishPort_V1_0_0_Reset_CS               *Port_Reset;
    RedfishPort_V1_0_0_Port_Actions_Oem_CS    *Oem;      
} RedfishPort_V1_0_0_Port_Actions_CS;

typedef struct _RedfishPort_V1_0_0_Port_Actions_Oem_CS {
    RedfishCS_Link    Prop;
} RedfishPort_V1_0_0_Port_Actions_Oem_CS;

//
// Contains references to other resources that are related to this resource.
//
typedef struct _RedfishPort_V1_0_0_Port_Links_CS {
    RedfishCS_Link            AssociatedEndpoints;                         // An array of references to the
                                                                           // endpoints that connect to the
                                                                           // switch through this port.
    RedfishCS_int64           *AssociatedEndpointsodata_count;         
    RedfishCS_char            *AssociatedEndpointsodata_navigationLink;
    RedfishCS_Link            ConnectedSwitchPorts;                        // An array of references to the
                                                                           // ports that connect to the
                                                                           // switch through this port.
    RedfishCS_int64           *ConnectedSwitchPortsodata_count;        
    RedfishCS_char            *ConnectedSwitchPortsodata_navigationLink;
    RedfishCS_Link            ConnectedSwitches;                           // An array of references to the
                                                                           // switches that connect to the
                                                                           // switch through this port.
    RedfishCS_int64           *ConnectedSwitchesodata_count;           
    RedfishCS_char            *ConnectedSwitchesodata_navigationLink;  
    RedfishResource_Oem_CS    *Oem;                                        // Oem extension object.
} RedfishPort_V1_0_0_Port_Links_CS;

//
// This action is used to reset this switch.
//
typedef struct _RedfishPort_V1_0_0_Reset_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishPort_V1_0_0_Reset_CS;

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
// Port contains properties describing a port of a switch.
//
typedef struct _RedfishPort_V1_0_0_Port_CS {
    RedfishCS_Header                      Header;
    RedfishCS_char                        *odata_context;  
    RedfishCS_char                        *odata_id;       
    RedfishCS_char                        *odata_type;     
    RedfishPort_V1_0_0_Port_Actions_CS    *Actions;            // The available actions for this
                                                               // resource.
    RedfishCS_int64                       *CurrentSpeedGbps;    // The current speed of this
                                                               // port.
    RedfishCS_char                        *Description;    
    RedfishCS_char                        *Id;             
    RedfishPort_V1_0_0_Port_Links_CS      *Links;              // Contains references to other
                                                               // resources that are related to
                                                               // this resource.
    RedfishCS_int64                       *MaxSpeedGbps;       // The maximum speed of this port
                                                               // as currently configured.
    RedfishCS_char                        *Name;           
    RedfishResource_Oem_CS                *Oem;                // This is the
                                                               // manufacturer/provider specific
                                                               // extension moniker used to
                                                               // divide the Oem object into
                                                               // sections.
    RedfishCS_char                        *PortId;             // This is the label of this port
                                                               // on the physical switch
                                                               // package.
    RedfishCS_char                        *PortProtocol;       // The protocol being sent over
                                                               // this port.
    RedfishCS_char                        *PortType;           // This is the type of this port.
    RedfishResource_Status_CS             *Status;         
    RedfishCS_int64                       *Width;              // The number of lanes, phys, or
                                                               // other physical transport links
                                                               // that this port contains.
} RedfishPort_V1_0_0_Port_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

RedfishCS_status
Json_Port_V1_0_0_To_CS (char *JsonRawText, RedfishPort_V1_0_0_Port_CS **ReturnedCS);

RedfishCS_status
CS_To_Port_V1_0_0_JSON (RedfishPort_V1_0_0_Port_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyPort_V1_0_0_CS (RedfishPort_V1_0_0_Port_CS *CSPtr);

RedfishCS_status
DestroyPort_V1_0_0_Json (RedfishCS_char *JsonText);

#endif
