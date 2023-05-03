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

#ifndef RedfishFabric_V1_0_1_CSTRUCT_H_
#define RedfishFabric_V1_0_1_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishFabric_V1_0_1_Fabric_CS RedfishFabric_V1_0_1_Fabric_CS;
typedef struct _RedfishFabric_V1_0_1_Fabric_Actions_CS RedfishFabric_V1_0_1_Fabric_Actions_CS;
typedef struct _RedfishFabric_V1_0_1_Fabric_Actions_Oem_CS RedfishFabric_V1_0_1_Fabric_Actions_Oem_CS;
typedef struct _RedfishFabric_V1_0_1_Fabric_Links_CS RedfishFabric_V1_0_1_Fabric_Links_CS;
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
typedef struct _RedfishFabric_V1_0_1_Fabric_Actions_CS {
    RedfishFabric_V1_0_1_Fabric_Actions_Oem_CS    *Oem;
} RedfishFabric_V1_0_1_Fabric_Actions_CS;

typedef struct _RedfishFabric_V1_0_1_Fabric_Actions_Oem_CS {
    RedfishCS_Link    Prop;
} RedfishFabric_V1_0_1_Fabric_Actions_Oem_CS;

//
// Contains references to other resources that are related to this resource.
//
typedef struct _RedfishFabric_V1_0_1_Fabric_Links_CS {
    RedfishResource_Oem_CS    *Oem;    // Oem extension object.
} RedfishFabric_V1_0_1_Fabric_Links_CS;

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
// Fabric contains properties describing a simple fabric consisting of one or more
// switches, zero or more endpoints, and zero or more zones.
//
typedef struct _RedfishFabric_V1_0_1_Fabric_CS {
    RedfishCS_Header                          Header;
    RedfishCS_char                            *odata_context;
    RedfishCS_char                            *odata_id;    
    RedfishCS_char                            *odata_type;  
    RedfishFabric_V1_0_1_Fabric_Actions_CS    *Actions;         // The available actions for this
                                                                // resource.
    RedfishCS_char                            *Description; 
    RedfishCS_Link                            Endpoints;        // A collection of references to
                                                                // the endpoints contained in
                                                                // this fabric.
    RedfishCS_char                            *FabricType;      // The protocol being sent over
                                                                // this fabric.
    RedfishCS_char                            *Id;          
    RedfishFabric_V1_0_1_Fabric_Links_CS      *Links;           // Contains references to other
                                                                // resources that are related to
                                                                // this resource.
    RedfishCS_int64                           *MaxZones;        // The value of this property
                                                                // shall contain the maximum
                                                                // number of zones the switch can
                                                                // currently configure.
    RedfishCS_char                            *Name;        
    RedfishResource_Oem_CS                    *Oem;             // This is the
                                                                // manufacturer/provider specific
                                                                // extension moniker used to
                                                                // divide the Oem object into
                                                                // sections.
    RedfishResource_Status_CS                 *Status;      
    RedfishCS_Link                            Switches;         // A collection of references to
                                                                // the switches contained in this
                                                                // fabric.
    RedfishCS_Link                            Zones;            // A collection of references to
                                                                // the zones contained in this
                                                                // fabric.
} RedfishFabric_V1_0_1_Fabric_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

RedfishCS_status
Json_Fabric_V1_0_1_To_CS (char *JsonRawText, RedfishFabric_V1_0_1_Fabric_CS **ReturnedCS);

RedfishCS_status
CS_To_Fabric_V1_0_1_JSON (RedfishFabric_V1_0_1_Fabric_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyFabric_V1_0_1_CS (RedfishFabric_V1_0_1_Fabric_CS *CSPtr);

RedfishCS_status
DestroyFabric_V1_0_1_Json (RedfishCS_char *JsonText);

#endif
