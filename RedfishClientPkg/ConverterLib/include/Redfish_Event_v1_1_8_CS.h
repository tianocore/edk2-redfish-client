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

#ifndef RedfishEvent_V1_1_8_CSTRUCT_H_
#define RedfishEvent_V1_1_8_CSTRUCT_H_

#include "RedfishCsCommon.h"

typedef struct _RedfishEvent_V1_1_8_EventRecord_Array_CS RedfishEvent_V1_1_8_EventRecord_Array_CS;
typedef struct _RedfishEvent_V1_1_8_Event_CS RedfishEvent_V1_1_8_Event_CS;
typedef struct _RedfishEvent_V1_1_8_EventRecord_CS RedfishEvent_V1_1_8_EventRecord_CS;
#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

#ifndef Redfishodatav4_idRef_CS_
typedef struct _Redfishodatav4_idRef_CS Redfishodatav4_idRef_CS;
#endif

typedef struct _RedfishEvent_V1_1_8_EventRecord_CS {
    RedfishCS_char             *Context;             // A context can be supplied at
                                                     // subscription time.  This
                                                     // property is the context value
                                                     // supplied by the subscriber.
    RedfishCS_char             *EventId;             // The unique instance identifier
                                                     // of an event.
    RedfishCS_char             *EventTimestamp;      // The time the event occurred.
    RedfishCS_char             *EventType;           // The type of event.
    RedfishCS_char             *MemberId;            // The identifier for the member
                                                     // within the collection.
    RedfishCS_char             *Message;             // The human-readable event
                                                     // message.
    RedfishCS_char_Array       *MessageArgs;         // An array of message arguments
                                                     // that are substituted for the
                                                     // arguments in the message when
                                                     // looked up in the Message
                                                     // Registry.
    RedfishCS_char             *MessageId;           // The key used to find the
                                                     // message in a Message Registry.
    RedfishResource_Oem_CS     *Oem;                 // The OEM extension property.
    Redfishodatav4_idRef_CS    *OriginOfCondition;    // The Resource that originated
                                                     // the condition that caused the
                                                     // event to be generated.
    RedfishCS_char             *Severity;            // The severity of the event.
} RedfishEvent_V1_1_8_EventRecord_CS;

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
// A reference to a resource.
//
#ifndef Redfishodatav4_idRef_CS_
#define Redfishodatav4_idRef_CS_
typedef struct _Redfishodatav4_idRef_CS {
    RedfishCS_char    *odata_id;
} Redfishodatav4_idRef_CS;
#endif

//
// The Event schema describes the JSON payload received by an Event Destination,
// which has subscribed to event notification, when events occur.  This Resource
// contains data about events, including descriptions, severity, and a MessageId
// link to a Message Registry that can be accessed for further information.
//
typedef struct _RedfishEvent_V1_1_8_Event_CS {
    RedfishCS_Header                            Header;
    RedfishCS_char                              *odata_context;   
    RedfishCS_char                              *odata_type;      
    RedfishCS_char                              *Context;             // A context can be supplied at
                                                                      // subscription time.  This
                                                                      // property is the context value
                                                                      // supplied by the subscriber.
    RedfishCS_char                              *Description;     
    RedfishEvent_V1_1_8_EventRecord_Array_CS    *Events;              // Each event in this array has a
                                                                      // set of properties that
                                                                      // describe the event.  Because
                                                                      // this is an array, more than
                                                                      // one event can be sent
                                                                      // simultaneously.
    RedfishCS_int64                             *Eventsodata_count;
    RedfishCS_char                              *Id;              
    RedfishCS_char                              *Name;            
    RedfishResource_Oem_CS                      *Oem;                 // The OEM extension property.
} RedfishEvent_V1_1_8_Event_CS;

typedef struct _RedfishEvent_V1_1_8_EventRecord_Array_CS  {
    RedfishEvent_V1_1_8_EventRecord_Array_CS    *Next;
    RedfishEvent_V1_1_8_EventRecord_CS    *ArrayValue;
} RedfishEvent_V1_1_8_EventRecord_Array_CS;

RedfishCS_status
Json_Event_V1_1_8_To_CS (char *JsonRawText, RedfishEvent_V1_1_8_Event_CS **ReturnedCS);

RedfishCS_status
CS_To_Event_V1_1_8_JSON (RedfishEvent_V1_1_8_Event_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyEvent_V1_1_8_CS (RedfishEvent_V1_1_8_Event_CS *CSPtr);

RedfishCS_status
DestroyEvent_V1_1_8_Json (RedfishCS_char *JsonText);

#endif
