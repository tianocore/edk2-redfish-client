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

#ifndef RedfishAccountservice_V1_0_0_CSTRUCT_H_
#define RedfishAccountservice_V1_0_0_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishAccountService_V1_0_0_AccountService_CS RedfishAccountService_V1_0_0_AccountService_CS;
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
// Account Service contains properties common to all user accounts, such as
// password requirements, and control features such as account lockout.  It also
// contains links to the collections of Manager Accounts and Roles.
//
typedef struct _RedfishAccountService_V1_0_0_AccountService_CS {
    RedfishCS_Header             Header;
    RedfishCS_char               *odata_context;                 
    RedfishCS_char               *odata_id;                      
    RedfishCS_char               *odata_type;                    
    RedfishCS_int64              *AccountLockoutCounterResetAfter;    // The interval of time in
                                                                     // seconds since the last failed
                                                                     // login attempt at which point
                                                                     // the lockout threshold counter
                                                                     // for the account is reset to
                                                                     // zero. Must be less than or
                                                                     // equal to
                                                                     // AccountLockoutDuration
    RedfishCS_int64              *AccountLockoutDuration;            // The time in seconds an account
                                                                     // is locked after the account
                                                                     // lockout threshold is met. Must
                                                                     // be >=
                                                                     // AccountLockoutResetAfter. If
                                                                     // set to 0, no lockout will
                                                                     // occur.
    RedfishCS_int64              *AccountLockoutThreshold;           // The number of failed login
                                                                     // attempts before a user account
                                                                     // is locked for a specified
                                                                     // duration. (0=never locked)
    RedfishCS_Link               Accounts;                           // Link to a collection of
                                                                     // Manager Accounts
    RedfishCS_int64              *AuthFailureLoggingThreshold;       // This is the number of
                                                                     // authorization failures that
                                                                     // need to occur before the
                                                                     // failure attempt is logged to
                                                                     // the manager log.
    RedfishCS_char               *Description;                   
    RedfishCS_char               *Id;                            
    RedfishCS_int64              *MaxPasswordLength;                 // This is the maximum password
                                                                     // length for this service.
    RedfishCS_int64              *MinPasswordLength;                 // This is the minimum password
                                                                     // length for this service.
    RedfishCS_char               *Name;                          
    RedfishResource_Oem_CS       *Oem;                               // This is the
                                                                     // manufacturer/provider specific
                                                                     // extension moniker used to
                                                                     // divide the Oem object into
                                                                     // sections.
    RedfishCS_Link               Roles;                              // Link to a collection of Roles
    RedfishCS_bool               *ServiceEnabled;                    // This indicates whether this
                                                                     // service is enabled.
    RedfishResource_Status_CS    *Status;                        
} RedfishAccountService_V1_0_0_AccountService_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

RedfishCS_status
Json_AccountService_V1_0_0_To_CS (char *JsonRawText, RedfishAccountService_V1_0_0_AccountService_CS **ReturnedCS);

RedfishCS_status
CS_To_AccountService_V1_0_0_JSON (RedfishAccountService_V1_0_0_AccountService_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyAccountService_V1_0_0_CS (RedfishAccountService_V1_0_0_AccountService_CS *CSPtr);

RedfishCS_status
DestroyAccountService_V1_0_0_Json (RedfishCS_char *JsonText);

#endif
