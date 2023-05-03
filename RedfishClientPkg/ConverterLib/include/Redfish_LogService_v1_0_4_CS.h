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

#ifndef RedfishLogservice_V1_0_4_CSTRUCT_H_
#define RedfishLogservice_V1_0_4_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishLogService_V1_0_4_ClearLog_CS RedfishLogService_V1_0_4_ClearLog_CS;
typedef struct _RedfishLogService_V1_0_4_LogService_CS RedfishLogService_V1_0_4_LogService_CS;
typedef struct _RedfishLogService_V1_0_4_LogService_Actions_CS RedfishLogService_V1_0_4_LogService_Actions_CS;
typedef struct _RedfishLogService_V1_0_4_LogService_Actions_Oem_CS RedfishLogService_V1_0_4_LogService_Actions_Oem_CS;
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

typedef struct _RedfishLogService_V1_0_4_ClearLog_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishLogService_V1_0_4_ClearLog_CS;

//
// The available actions for this resource.
//
typedef struct _RedfishLogService_V1_0_4_LogService_Actions_CS {
    RedfishLogService_V1_0_4_ClearLog_CS                  *LogService_ClearLog;
    RedfishLogService_V1_0_4_LogService_Actions_Oem_CS    *Oem;                   // The available OEM specific
                                                                                  // actions for this resource.
} RedfishLogService_V1_0_4_LogService_Actions_CS;

//
// The available OEM specific actions for this resource.
//
typedef struct _RedfishLogService_V1_0_4_LogService_Actions_Oem_CS {
    RedfishCS_Link    Prop;
} RedfishLogService_V1_0_4_LogService_Actions_Oem_CS;

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
// This resource represents the log service for the resource or service to which
// it is associated.
//
typedef struct _RedfishLogService_V1_0_4_LogService_CS {
    RedfishCS_Header                                  Header;
    RedfishCS_char                                    *odata_context;     
    RedfishCS_char                                    *odata_id;          
    RedfishCS_char                                    *odata_type;        
    RedfishLogService_V1_0_4_LogService_Actions_CS    *Actions;               // The available actions for this
                                                                              // resource.
    RedfishCS_char                                    *DateTime;              // The current DateTime (with
                                                                              // offset) for the log service,
                                                                              // used to set or read time.
    RedfishCS_char                                    *DateTimeLocalOffset;    // The time offset from UTC that
                                                                              // the DateTime property is set
                                                                              // to in format: +06:00 .
    RedfishCS_char                                    *Description;       
    RedfishCS_Link                                    Entries;                // References to the log entry
                                                                              // collection.
    RedfishCS_char                                    *Id;                
    RedfishCS_int64                                   *MaxNumberOfRecords;    // The maximum number of log
                                                                              // entries this service can have.
    RedfishCS_char                                    *Name;              
    RedfishResource_Oem_CS                            *Oem;                   // This is the
                                                                              // manufacturer/provider specific
                                                                              // extension moniker used to
                                                                              // divide the Oem object into
                                                                              // sections.
    RedfishCS_char                                    *OverWritePolicy;       // The overwrite policy for this
                                                                              // service that takes place when
                                                                              // the log is full.
    RedfishCS_bool                                    *ServiceEnabled;        // This indicates whether this
                                                                              // service is enabled.
    RedfishResource_Status_CS                         *Status;            
} RedfishLogService_V1_0_4_LogService_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

RedfishCS_status
Json_LogService_V1_0_4_To_CS (char *JsonRawText, RedfishLogService_V1_0_4_LogService_CS **ReturnedCS);

RedfishCS_status
CS_To_LogService_V1_0_4_JSON (RedfishLogService_V1_0_4_LogService_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyLogService_V1_0_4_CS (RedfishLogService_V1_0_4_LogService_CS *CSPtr);

RedfishCS_status
DestroyLogService_V1_0_4_Json (RedfishCS_char *JsonText);

#endif
