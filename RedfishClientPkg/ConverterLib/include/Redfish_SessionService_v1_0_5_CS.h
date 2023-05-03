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

#ifndef RedfishSessionservice_V1_0_5_CSTRUCT_H_
#define RedfishSessionservice_V1_0_5_CSTRUCT_H_

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

typedef struct _RedfishSessionService_V1_0_5_SessionService_CS RedfishSessionService_V1_0_5_SessionService_CS;
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
// This is the schema definition for the Session Service.  It represents the
// properties for the service itself and has links to the actual list of sessions.
//
typedef struct _RedfishSessionService_V1_0_5_SessionService_CS {
    RedfishCS_Header             Header;
    RedfishCS_char               *odata_context;
    RedfishCS_char               *odata_etag;   
    RedfishCS_char               *odata_id;     
    RedfishCS_char               *odata_type;   
    RedfishCS_char               *Description;  
    RedfishCS_char               *Id;           
    RedfishCS_char               *Name;         
    RedfishResource_Oem_CS       *Oem;              // This is the
                                                    // manufacturer/provider specific
                                                    // extension moniker used to
                                                    // divide the Oem object into
                                                    // sections.
    RedfishCS_bool               *ServiceEnabled;    // This indicates whether this
                                                    // service is enabled.  If set to
                                                    // false, the Session Service is
                                                    // disabled, and new sessions
                                                    // cannot be created, old
                                                    // sessions cannot be deleted,
                                                    // and established sessions may
                                                    // continue operating.
    RedfishCS_int64              *SessionTimeout;    // This is the number of seconds
                                                    // of inactivity that a session
                                                    // may have before the session
                                                    // service closes the session due
                                                    // to inactivity.
    RedfishCS_Link               Sessions;          // Link to a collection of
                                                    // Sessions.
    RedfishResource_Status_CS    *Status;           // This property describes the
                                                    // status and health of the
                                                    // resource and its children.
} RedfishSessionService_V1_0_5_SessionService_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

RedfishCS_status
Json_SessionService_V1_0_5_To_CS (char *JsonRawText, RedfishSessionService_V1_0_5_SessionService_CS **ReturnedCS);

RedfishCS_status
CS_To_SessionService_V1_0_5_JSON (RedfishSessionService_V1_0_5_SessionService_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroySessionService_V1_0_5_CS (RedfishSessionService_V1_0_5_SessionService_CS *CSPtr);

RedfishCS_status
DestroySessionService_V1_0_5_Json (RedfishCS_char *JsonText);

#endif
