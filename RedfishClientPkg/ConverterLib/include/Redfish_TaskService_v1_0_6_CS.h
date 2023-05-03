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

#ifndef RedfishTaskservice_V1_0_6_CSTRUCT_H_
#define RedfishTaskservice_V1_0_6_CSTRUCT_H_

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

typedef struct _RedfishTaskService_V1_0_6_TaskService_CS RedfishTaskService_V1_0_6_TaskService_CS;
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
// A reference to a resource.
//
#ifndef Redfishodatav4_idRef_CS_
#define Redfishodatav4_idRef_CS_
typedef struct _Redfishodatav4_idRef_CS {
    RedfishCS_char    *odata_id;
} Redfishodatav4_idRef_CS;
#endif

//
// The Task Service of a Redfish service allows for the management of long-
// duration operations.  It represents the properties for the Task Service itself
// and has links to the actual collection of Task resources.
//
typedef struct _RedfishTaskService_V1_0_6_TaskService_CS {
    RedfishCS_Header             Header;
    RedfishCS_char               *odata_context;                 
    RedfishCS_char               *odata_etag;                    
    RedfishCS_char               *odata_id;                      
    RedfishCS_char               *odata_type;                    
    RedfishCS_char               *CompletedTaskOverWritePolicy;      // Overwrite policy of completed
                                                                     // tasks.
    RedfishCS_char               *DateTime;                          // The current DateTime (with
                                                                     // offset) setting that the task
                                                                     // service is using.
    RedfishCS_char               *Description;                   
    RedfishCS_char               *Id;                            
    RedfishCS_bool               *LifeCycleEventOnTaskStateChange;    // Send an Event upon Task State
                                                                     // Change.
    RedfishCS_char               *Name;                          
    RedfishResource_Oem_CS       *Oem;                               // This is the
                                                                     // manufacturer/provider specific
                                                                     // extension moniker used to
                                                                     // divide the Oem object into
                                                                     // sections.
    RedfishCS_bool               *ServiceEnabled;                    // This indicates whether this
                                                                     // service is enabled.
    RedfishResource_Status_CS    *Status;                            // This property describes the
                                                                     // status and health of the
                                                                     // resource and its children.
    RedfishCS_Link               Tasks;                              // References to the Tasks
                                                                     // collection.
} RedfishTaskService_V1_0_6_TaskService_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

RedfishCS_status
Json_TaskService_V1_0_6_To_CS (char *JsonRawText, RedfishTaskService_V1_0_6_TaskService_CS **ReturnedCS);

RedfishCS_status
CS_To_TaskService_V1_0_6_JSON (RedfishTaskService_V1_0_6_TaskService_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyTaskService_V1_0_6_CS (RedfishTaskService_V1_0_6_TaskService_CS *CSPtr);

RedfishCS_status
DestroyTaskService_V1_0_6_Json (RedfishCS_char *JsonText);

#endif
