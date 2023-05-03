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

#ifndef RedfishAggregationservice_V1_0_1_CSTRUCT_H_
#define RedfishAggregationservice_V1_0_1_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishAggregationService_V1_0_1_Actions_CS RedfishAggregationService_V1_0_1_Actions_CS;
typedef struct _RedfishAggregationService_V1_0_1_AggregationService_CS RedfishAggregationService_V1_0_1_AggregationService_CS;
typedef struct _RedfishAggregationService_V1_0_1_OemActions_CS RedfishAggregationService_V1_0_1_OemActions_CS;
typedef struct _RedfishAggregationService_V1_0_1_Reset_CS RedfishAggregationService_V1_0_1_Reset_CS;
typedef struct _RedfishAggregationService_V1_0_1_SetDefaultBootOrder_CS RedfishAggregationService_V1_0_1_SetDefaultBootOrder_CS;
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
typedef struct _RedfishAggregationService_V1_0_1_Actions_CS {
    RedfishAggregationService_V1_0_1_Reset_CS                  *AggregationService_Reset;             
    RedfishAggregationService_V1_0_1_SetDefaultBootOrder_CS    *AggregationService_SetDefaultBootOrder;
    RedfishAggregationService_V1_0_1_OemActions_CS             *Oem;                                      // The available OEM-specific
                                                                                                          // actions for this resource.
} RedfishAggregationService_V1_0_1_Actions_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishAggregationService_V1_0_1_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishAggregationService_V1_0_1_OemActions_CS;

//
// This action is used to reset a set of resources. For example this could be a
// list of computer systems.
//
typedef struct _RedfishAggregationService_V1_0_1_Reset_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishAggregationService_V1_0_1_Reset_CS;

//
// This action is used to restore the boot order to the default state for the
// specified computer systems.
//
typedef struct _RedfishAggregationService_V1_0_1_SetDefaultBootOrder_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishAggregationService_V1_0_1_SetDefaultBootOrder_CS;

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
// The AggregationService schema contains properties for managing aggregation
// operations, either on ad hoc combinations of resources or on defined sets of
// resources called aggregates.  Access points define the properties needed to
// access the entity being aggregated and connection methods describe the protocol
// or other semantics of the connection.
//
typedef struct _RedfishAggregationService_V1_0_1_AggregationService_CS {
    RedfishCS_Header                               Header;
    RedfishCS_char                                 *odata_context;   
    RedfishCS_char                                 *odata_etag;      
    RedfishCS_char                                 *odata_id;        
    RedfishCS_char                                 *odata_type;      
    RedfishAggregationService_V1_0_1_Actions_CS    *Actions;             // The available actions for this
                                                                         // resource.
    RedfishCS_Link                                 Aggregates;           // The link to the collection of
                                                                         // aggregates associated with
                                                                         // this service.
    RedfishCS_Link                                 AggregationSources;    // The link to the collection of
                                                                         // aggregation sources associated
                                                                         // with this service.
    RedfishCS_Link                                 ConnectionMethods;    // The link to the collection of
                                                                         // connection methods associated
                                                                         // with this service.
    RedfishCS_char                                 *Description;     
    RedfishCS_char                                 *Id;              
    RedfishCS_char                                 *Name;            
    RedfishResource_Oem_CS                         *Oem;                 // The OEM extension property.
    RedfishCS_bool                                 *ServiceEnabled;      // An indication of whether the
                                                                         // aggregation service is
                                                                         // enabled.
    RedfishResource_Status_CS                      *Status;              // The status and health of the
                                                                         // resource and its subordinate
                                                                         // or dependent resources.
} RedfishAggregationService_V1_0_1_AggregationService_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

RedfishCS_status
Json_AggregationService_V1_0_1_To_CS (char *JsonRawText, RedfishAggregationService_V1_0_1_AggregationService_CS **ReturnedCS);

RedfishCS_status
CS_To_AggregationService_V1_0_1_JSON (RedfishAggregationService_V1_0_1_AggregationService_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyAggregationService_V1_0_1_CS (RedfishAggregationService_V1_0_1_AggregationService_CS *CSPtr);

RedfishCS_status
DestroyAggregationService_V1_0_1_Json (RedfishCS_char *JsonText);

#endif
