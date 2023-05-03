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

#ifndef RedfishResourceblock_V1_1_2_CSTRUCT_H_
#define RedfishResourceblock_V1_1_2_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_CS_
#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishResource_Condition_CS RedfishResource_Condition_CS;
#endif

#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

#ifndef RedfishResource_Status_CS_
typedef struct _RedfishResource_Status_CS RedfishResource_Status_CS;
#endif

typedef struct _RedfishResourceBlock_V1_1_2_Actions_CS RedfishResourceBlock_V1_1_2_Actions_CS;
typedef struct _RedfishResourceBlock_V1_1_2_CompositionStatus_CS RedfishResourceBlock_V1_1_2_CompositionStatus_CS;
typedef struct _RedfishResourceBlock_V1_1_2_Links_CS RedfishResourceBlock_V1_1_2_Links_CS;
typedef struct _RedfishResourceBlock_V1_1_2_OemActions_CS RedfishResourceBlock_V1_1_2_OemActions_CS;
typedef struct _RedfishResourceBlock_V1_1_2_ResourceBlock_CS RedfishResourceBlock_V1_1_2_ResourceBlock_CS;
#ifndef Redfishodatav4_idRef_CS_
typedef struct _Redfishodatav4_idRef_CS Redfishodatav4_idRef_CS;
#endif

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
// The available actions for this resource.
//
typedef struct _RedfishResourceBlock_V1_1_2_Actions_CS {
    RedfishResourceBlock_V1_1_2_OemActions_CS    *Oem;    // This property contains the
                                                         // available OEM specific actions
                                                         // for this resource.
} RedfishResourceBlock_V1_1_2_Actions_CS;

//
// Composition status of the Resource Block.
//
typedef struct _RedfishResourceBlock_V1_1_2_CompositionStatus_CS {
    RedfishCS_char     *CompositionState;       // This property represents the
                                                // current state of the Resource
                                                // Block from a composition
                                                // perspective.
    RedfishCS_int64    *MaxCompositions;        // The maximum number of
                                                // compositions in which this
                                                // Resource Block is capable of
                                                // participating simultaneously.
    RedfishCS_int64    *NumberOfCompositions;    // The number of compositions in
                                                // which this Resource Block is
                                                // currently participating.
    RedfishCS_bool     *Reserved;               // This represents if the
                                                // Resource Block is reserved by
                                                // any client.
    RedfishCS_bool     *SharingCapable;         // Indicates if this Resource
                                                // Block is capable of
                                                // participating in multiple
                                                // compositions simultaneously.
    RedfishCS_bool     *SharingEnabled;         // Indicates if this Resource
                                                // Block is allowed to
                                                // participate in multiple
                                                // compositions simultaneously.
} RedfishResourceBlock_V1_1_2_CompositionStatus_CS;

//
// Contains references to other resources that are related to this resource.
//
typedef struct _RedfishResourceBlock_V1_1_2_Links_CS {
    RedfishCS_Link            Chassis;                       // An array of references to the
                                                             // Chassis in which this Resource
                                                             // Block is contained.
    RedfishCS_int64           *Chassisodata_count;       
    RedfishCS_Link            ComputerSystems;               // An array of references to the
                                                             // Computer Systems that are
                                                             // composed from this Resource
                                                             // Block.
    RedfishCS_int64           *ComputerSystemsodata_count;
    RedfishResource_Oem_CS    *Oem;                          // Oem extension object.
    RedfishCS_Link            Zones;                         // An array of references to the
                                                             // Zones in which this Resource
                                                             // Block is bound.
    RedfishCS_int64           *Zonesodata_count;         
} RedfishResourceBlock_V1_1_2_Links_CS;

//
// The available OEM specific actions for this resource.
//
typedef struct _RedfishResourceBlock_V1_1_2_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishResourceBlock_V1_1_2_OemActions_CS;

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
// This schema defines a Resource Block resource.
//
typedef struct _RedfishResourceBlock_V1_1_2_ResourceBlock_CS {
    RedfishCS_Header                                    Header;
    RedfishCS_char                                      *odata_context;               
    RedfishCS_char                                      *odata_etag;                  
    RedfishCS_char                                      *odata_id;                    
    RedfishCS_char                                      *odata_type;                  
    RedfishResourceBlock_V1_1_2_Actions_CS              *Actions;                         // The available actions for this
                                                                                          // resource.
    RedfishResourceBlock_V1_1_2_CompositionStatus_CS    *CompositionStatus;               // This property describes the
                                                                                          // composition status details for
                                                                                          // this Resource Block.
    RedfishCS_Link                                      ComputerSystems;                  // An array of references to the
                                                                                          // Computer Systems available in
                                                                                          // this Resource Block.
    RedfishCS_int64                                     *ComputerSystemsodata_count;  
    RedfishCS_char                                      *Description;                 
    RedfishCS_Link                                      EthernetInterfaces;               // An array of references to the
                                                                                          // Ethernet Interfaces available
                                                                                          // in this Resource Block.
    RedfishCS_int64                                     *EthernetInterfacesodata_count;
    RedfishCS_char                                      *Id;                          
    RedfishResourceBlock_V1_1_2_Links_CS                *Links;                           // Contains references to other
                                                                                          // resources that are related to
                                                                                          // this resource.
    RedfishCS_Link                                      Memory;                           // An array of references to the
                                                                                          // Memory available in this
                                                                                          // Resource Block.
    RedfishCS_int64                                     *Memoryodata_count;           
    RedfishCS_char                                      *Name;                        
    RedfishCS_Link                                      NetworkInterfaces;                // An array of references to the
                                                                                          // Network Interfaces available
                                                                                          // in this Resource Block.
    RedfishCS_int64                                     *NetworkInterfacesodata_count;
    RedfishResource_Oem_CS                              *Oem;                             // This is the
                                                                                          // manufacturer/provider specific
                                                                                          // extension moniker used to
                                                                                          // divide the Oem object into
                                                                                          // sections.
    RedfishCS_Link                                      Processors;                       // An array of references to the
                                                                                          // Processors available in this
                                                                                          // Resource Block.
    RedfishCS_int64                                     *Processorsodata_count;       
    RedfishCS_char_Array                                *ResourceBlockType;               // This property represents the
                                                                                          // types of resources available
                                                                                          // on this Resource Block.
    RedfishCS_Link                                      SimpleStorage;                    // An array of references to the
                                                                                          // Simple Storage available in
                                                                                          // this Resource Block.
    RedfishCS_int64                                     *SimpleStorageodata_count;    
    RedfishResource_Status_CS                           *Status;                          // This property describes the
                                                                                          // status and health of the
                                                                                          // resource and its children.
    RedfishCS_Link                                      Storage;                          // An array of references to the
                                                                                          // Storage available in this
                                                                                          // Resource Block.
    RedfishCS_int64                                     *Storageodata_count;          
} RedfishResourceBlock_V1_1_2_ResourceBlock_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

RedfishCS_status
Json_ResourceBlock_V1_1_2_To_CS (char *JsonRawText, RedfishResourceBlock_V1_1_2_ResourceBlock_CS **ReturnedCS);

RedfishCS_status
CS_To_ResourceBlock_V1_1_2_JSON (RedfishResourceBlock_V1_1_2_ResourceBlock_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyResourceBlock_V1_1_2_CS (RedfishResourceBlock_V1_1_2_ResourceBlock_CS *CSPtr);

RedfishCS_status
DestroyResourceBlock_V1_1_2_Json (RedfishCS_char *JsonText);

#endif
