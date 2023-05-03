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

#ifndef RedfishEventservice_V1_1_4_CSTRUCT_H_
#define RedfishEventservice_V1_1_4_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishEventService_V1_1_4_Actions_CS RedfishEventService_V1_1_4_Actions_CS;
typedef struct _RedfishEventService_V1_1_4_EventService_CS RedfishEventService_V1_1_4_EventService_CS;
typedef struct _RedfishEventService_V1_1_4_OemActions_CS RedfishEventService_V1_1_4_OemActions_CS;
typedef struct _RedfishEventService_V1_1_4_SubmitTestEvent_CS RedfishEventService_V1_1_4_SubmitTestEvent_CS;
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
typedef struct _RedfishEventService_V1_1_4_Actions_CS {
    RedfishEventService_V1_1_4_SubmitTestEvent_CS    *EventService_SubmitTestEvent;
    RedfishEventService_V1_1_4_OemActions_CS         *Oem;                            // The available OEM-specific
                                                                                      // actions for this resource.
} RedfishEventService_V1_1_4_Actions_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishEventService_V1_1_4_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishEventService_V1_1_4_OemActions_CS;

//
// This action generates a test event.
//
typedef struct _RedfishEventService_V1_1_4_SubmitTestEvent_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishEventService_V1_1_4_SubmitTestEvent_CS;

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
// The EventService schema contains properties for managing event subscriptions
// and generates the events sent to subscribers.  The resource has links to the
// actual collection of subscriptions, which are called event destinations.
//
typedef struct _RedfishEventService_V1_1_4_EventService_CS {
    RedfishCS_Header                         Header;
    RedfishCS_char                           *odata_context;              
    RedfishCS_char                           *odata_etag;                 
    RedfishCS_char                           *odata_id;                   
    RedfishCS_char                           *odata_type;                 
    RedfishEventService_V1_1_4_Actions_CS    *Actions;                        // The available actions for this
                                                                              // resource.
    RedfishCS_int64                          *DeliveryRetryAttempts;          // The number of times that the
                                                                              // POST of an event is retried
                                                                              // before the subscription
                                                                              // terminates.  This retry occurs
                                                                              // at the service level, which
                                                                              // means that the HTTP POST to
                                                                              // the event destination fails
                                                                              // with an HTTP `4XX` or `5XX`
                                                                              // status code or an HTTP timeout
                                                                              // occurs this many times before
                                                                              // the event destination
                                                                              // subscription terminates.
    RedfishCS_int64                          *DeliveryRetryIntervalSeconds;    // The interval, in seconds,
                                                                              // between retry attempts for
                                                                              // sending any event.
    RedfishCS_char                           *Description;                
    RedfishCS_char_Array                     *EventTypesForSubscription;      // The types of events to which a
                                                                              // client can subscribe.
    RedfishCS_char                           *Id;                         
    RedfishCS_char                           *Name;                       
    RedfishResource_Oem_CS                   *Oem;                            // The OEM extension property.
    RedfishCS_char                           *ServerSentEventUri;             // The link to a URI for
                                                                              // receiving Server-Sent Event
                                                                              // representations for the events
                                                                              // that this service generates.
    RedfishCS_bool                           *ServiceEnabled;                 // An indication of whether this
                                                                              // service is enabled.
    RedfishResource_Status_CS                *Status;                         // The status and health of the
                                                                              // resource and its subordinate
                                                                              // or dependent resources.
    RedfishCS_Link                           Subscriptions;                   // The link to a collection of
                                                                              // event destinations.
} RedfishEventService_V1_1_4_EventService_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

RedfishCS_status
Json_EventService_V1_1_4_To_CS (char *JsonRawText, RedfishEventService_V1_1_4_EventService_CS **ReturnedCS);

RedfishCS_status
CS_To_EventService_V1_1_4_JSON (RedfishEventService_V1_1_4_EventService_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyEventService_V1_1_4_CS (RedfishEventService_V1_1_4_EventService_CS *CSPtr);

RedfishCS_status
DestroyEventService_V1_1_4_Json (RedfishCS_char *JsonText);

#endif
