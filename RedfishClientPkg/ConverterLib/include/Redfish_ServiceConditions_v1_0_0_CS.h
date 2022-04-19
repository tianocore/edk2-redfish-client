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

#ifndef RedfishServiceconditions_V1_0_0_CSTRUCT_H_
#define RedfishServiceconditions_V1_0_0_CSTRUCT_H_

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

typedef struct _RedfishServiceConditions_V1_0_0_Actions_CS RedfishServiceConditions_V1_0_0_Actions_CS;
typedef struct _RedfishServiceConditions_V1_0_0_OemActions_CS RedfishServiceConditions_V1_0_0_OemActions_CS;
typedef struct _RedfishServiceConditions_V1_0_0_ServiceConditions_CS RedfishServiceConditions_V1_0_0_ServiceConditions_CS;
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
    RedfishCS_char             *Resolution;          // Suggestions on how to resolve
                                                     // the condition.
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
// The available actions for this resource.
//
typedef struct _RedfishServiceConditions_V1_0_0_Actions_CS {
    RedfishServiceConditions_V1_0_0_OemActions_CS    *Oem;    // The available OEM-specific
                                                             // actions for this resource.
} RedfishServiceConditions_V1_0_0_Actions_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishServiceConditions_V1_0_0_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishServiceConditions_V1_0_0_OemActions_CS;

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
// The ServiceConditions schema contains definitions for reporting the conditions
// present in the service that require attention.
//
typedef struct _RedfishServiceConditions_V1_0_0_ServiceConditions_CS {
    RedfishCS_Header                              Header;
    RedfishCS_char                                *odata_context;
    RedfishCS_char                                *odata_etag;  
    RedfishCS_char                                *odata_id;    
    RedfishCS_char                                *odata_type;  
    RedfishServiceConditions_V1_0_0_Actions_CS    *Actions;         // The available actions for this
                                                                    // resource.
    RedfishResource_Condition_Array_CS            *Conditions;      // Conditions reported by this
                                                                    // service that require
                                                                    // attention.
    RedfishCS_char                                *Description; 
    RedfishCS_char                                *HealthRollup;    // The health roll-up for all
                                                                    // resources.
    RedfishCS_char                                *Id;          
    RedfishCS_char                                *Name;        
    RedfishResource_Oem_CS                        *Oem;             // The OEM extension property.
} RedfishServiceConditions_V1_0_0_ServiceConditions_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

RedfishCS_status
Json_ServiceConditions_V1_0_0_To_CS (char *JsonRawText, RedfishServiceConditions_V1_0_0_ServiceConditions_CS **ReturnedCS);

RedfishCS_status
CS_To_ServiceConditions_V1_0_0_JSON (RedfishServiceConditions_V1_0_0_ServiceConditions_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyServiceConditions_V1_0_0_CS (RedfishServiceConditions_V1_0_0_ServiceConditions_CS *CSPtr);

RedfishCS_status
DestroyServiceConditions_V1_0_0_Json (RedfishCS_char *JsonText);

#endif
