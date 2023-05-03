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

#ifndef RedfishResourceblock_V1_0_5_CSTRUCT_H_
#define RedfishResourceblock_V1_0_5_CSTRUCT_H_

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

typedef struct _RedfishResourceBlock_V1_0_5_Actions_CS RedfishResourceBlock_V1_0_5_Actions_CS;
typedef struct _RedfishResourceBlock_V1_0_5_CompositionStatus_CS RedfishResourceBlock_V1_0_5_CompositionStatus_CS;
typedef struct _RedfishResourceBlock_V1_0_5_Links_CS RedfishResourceBlock_V1_0_5_Links_CS;
typedef struct _RedfishResourceBlock_V1_0_5_OemActions_CS RedfishResourceBlock_V1_0_5_OemActions_CS;
typedef struct _RedfishResourceBlock_V1_0_5_ResourceBlock_CS RedfishResourceBlock_V1_0_5_ResourceBlock_CS;
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
typedef struct _RedfishResourceBlock_V1_0_5_Actions_CS {
    RedfishResourceBlock_V1_0_5_OemActions_CS    *Oem;    // The available OEM-specific
                                                         // actions for this resource.
} RedfishResourceBlock_V1_0_5_Actions_CS;

//
// Composition status of the resource block.
//
typedef struct _RedfishResourceBlock_V1_0_5_CompositionStatus_CS {
    RedfishCS_char    *CompositionState;    // The current state of the
                                           // resource block from a
                                           // composition perspective.
    RedfishCS_bool    *Reserved;           // An indication of whether any
                                           // client has reserved the
                                           // resource block.
} RedfishResourceBlock_V1_0_5_CompositionStatus_CS;

//
// The links to other resources that are related to this resource.
//
typedef struct _RedfishResourceBlock_V1_0_5_Links_CS {
    RedfishCS_Link            Chassis;                       // An array of links to the
                                                             // chassis in which this resource
                                                             // block is contained.
    RedfishCS_int64           *Chassisodata_count;       
    RedfishCS_Link            ComputerSystems;               // An array of links to the
                                                             // computer systems that are
                                                             // composed from this resource
                                                             // block.
    RedfishCS_int64           *ComputerSystemsodata_count;
    RedfishResource_Oem_CS    *Oem;                          // The OEM extension property.
    RedfishCS_Link            Zones;                         // An array of links to the zones
                                                             // in which this resource block
                                                             // is bound.
    RedfishCS_int64           *Zonesodata_count;         
} RedfishResourceBlock_V1_0_5_Links_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishResourceBlock_V1_0_5_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishResourceBlock_V1_0_5_OemActions_CS;

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
// The ResourceBlock schema contains definitions resource blocks, its components,
// and affinity to composed devices.
//
typedef struct _RedfishResourceBlock_V1_0_5_ResourceBlock_CS {
    RedfishCS_Header                                    Header;
    RedfishCS_char                                      *odata_context;               
    RedfishCS_char                                      *odata_etag;                  
    RedfishCS_char                                      *odata_id;                    
    RedfishCS_char                                      *odata_type;                  
    RedfishResourceBlock_V1_0_5_Actions_CS              *Actions;                         // The available actions for this
                                                                                          // resource.
    RedfishResourceBlock_V1_0_5_CompositionStatus_CS    *CompositionStatus;               // The composition status details
                                                                                          // for this resource block.
    RedfishCS_Link                                      ComputerSystems;                  // An array of links to the
                                                                                          // computer systems available in
                                                                                          // this resource block.
    RedfishCS_int64                                     *ComputerSystemsodata_count;  
    RedfishCS_char                                      *Description;                 
    RedfishCS_Link                                      EthernetInterfaces;               // An array of links to the
                                                                                          // Ethernet interfaces available
                                                                                          // in this resource block.
    RedfishCS_int64                                     *EthernetInterfacesodata_count;
    RedfishCS_char                                      *Id;                          
    RedfishResourceBlock_V1_0_5_Links_CS                *Links;                           // The links to other resources
                                                                                          // that are related to this
                                                                                          // resource.
    RedfishCS_Link                                      Memory;                           // An array of links to the
                                                                                          // memory available in this
                                                                                          // resource block.
    RedfishCS_int64                                     *Memoryodata_count;           
    RedfishCS_char                                      *Name;                        
    RedfishCS_Link                                      NetworkInterfaces;                // An array of links to the
                                                                                          // Network Interfaces available
                                                                                          // in this resource block.
    RedfishCS_int64                                     *NetworkInterfacesodata_count;
    RedfishResource_Oem_CS                              *Oem;                             // The OEM extension property.
    RedfishCS_Link                                      Processors;                       // An array of links to the
                                                                                          // processors available in this
                                                                                          // resource block.
    RedfishCS_int64                                     *Processorsodata_count;       
    RedfishCS_char_Array                                *ResourceBlockType;               // The types of resources
                                                                                          // available on this resource
                                                                                          // block.
    RedfishCS_Link                                      SimpleStorage;                    // An array of links to the
                                                                                          // simple storage available in
                                                                                          // this resource block.
    RedfishCS_int64                                     *SimpleStorageodata_count;    
    RedfishResource_Status_CS                           *Status;                          // The status and health of the
                                                                                          // resource and its subordinate
                                                                                          // or dependent resources.
    RedfishCS_Link                                      Storage;                          // An array of links to the
                                                                                          // storage available in this
                                                                                          // resource block.
    RedfishCS_int64                                     *Storageodata_count;          
} RedfishResourceBlock_V1_0_5_ResourceBlock_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

RedfishCS_status
Json_ResourceBlock_V1_0_5_To_CS (char *JsonRawText, RedfishResourceBlock_V1_0_5_ResourceBlock_CS **ReturnedCS);

RedfishCS_status
CS_To_ResourceBlock_V1_0_5_JSON (RedfishResourceBlock_V1_0_5_ResourceBlock_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyResourceBlock_V1_0_5_CS (RedfishResourceBlock_V1_0_5_ResourceBlock_CS *CSPtr);

RedfishCS_status
DestroyResourceBlock_V1_0_5_Json (RedfishCS_char *JsonText);

#endif
