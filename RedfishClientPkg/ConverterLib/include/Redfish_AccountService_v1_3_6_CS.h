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

#ifndef RedfishAccountservice_V1_3_6_CSTRUCT_H_
#define RedfishAccountservice_V1_3_6_CSTRUCT_H_

#include "RedfishCsCommon.h"

typedef struct _RedfishAccountService_V1_3_6_RoleMapping_Array_CS RedfishAccountService_V1_3_6_RoleMapping_Array_CS;
#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishAccountService_V1_3_6_AccountService_CS RedfishAccountService_V1_3_6_AccountService_CS;
typedef struct _RedfishAccountService_V1_3_6_Actions_CS RedfishAccountService_V1_3_6_Actions_CS;
typedef struct _RedfishAccountService_V1_3_6_Authentication_CS RedfishAccountService_V1_3_6_Authentication_CS;
typedef struct _RedfishAccountService_V1_3_6_ExternalAccountProvider_CS RedfishAccountService_V1_3_6_ExternalAccountProvider_CS;
typedef struct _RedfishAccountService_V1_3_6_LDAPSearchSettings_CS RedfishAccountService_V1_3_6_LDAPSearchSettings_CS;
typedef struct _RedfishAccountService_V1_3_6_LDAPService_CS RedfishAccountService_V1_3_6_LDAPService_CS;
typedef struct _RedfishAccountService_V1_3_6_OemActions_CS RedfishAccountService_V1_3_6_OemActions_CS;
typedef struct _RedfishAccountService_V1_3_6_RoleMapping_CS RedfishAccountService_V1_3_6_RoleMapping_CS;
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
typedef struct _RedfishAccountService_V1_3_6_Actions_CS {
    RedfishAccountService_V1_3_6_OemActions_CS    *Oem;    // The available OEM-specific
                                                          // actions for this resource.
} RedfishAccountService_V1_3_6_Actions_CS;

//
// The information required to authenticate to the external service.
//
typedef struct _RedfishAccountService_V1_3_6_Authentication_CS {
    RedfishCS_char            *AuthenticationType;    // The type of authentication
                                                     // used to connect to the
                                                     // external account provider.
    RedfishCS_char            *KerberosKeytab;       // The Base64-encoded version of
                                                     // the Kerberos keytab for this
                                                     // service.  A PATCH or PUT
                                                     // operation writes the keytab.
                                                     // This property is `null` in
                                                     // responses.
    RedfishResource_Oem_CS    *Oem;                  // The OEM extension property.
    RedfishCS_char            *Password;             // The password for this service.
                                                     // A PATCH or PUT request writes
                                                     // the password.  This property
                                                     // is `null` in responses.
    RedfishCS_char            *Token;                // The token for this service.  A
                                                     // PATCH or PUT operation writes
                                                     // the token.  This property is
                                                     // `null` in responses.
    RedfishCS_char            *Username;             // The user name for the service.
} RedfishAccountService_V1_3_6_Authentication_CS;

//
// The external account provider services that can provide accounts for this
// manager to use for authentication.
//
typedef struct _RedfishAccountService_V1_3_6_ExternalAccountProvider_CS {
    RedfishCS_char                                       *AccountProviderType;    // The type of external account
                                                                                 // provider to which this service
                                                                                 // connects.
    RedfishAccountService_V1_3_6_Authentication_CS       *Authentication;        // The authentication information
                                                                                 // for the external account
                                                                                 // provider.
    RedfishAccountService_V1_3_6_LDAPService_CS          *LDAPService;           // The additional mapping
                                                                                 // information needed to parse a
                                                                                 // generic LDAP service.
    RedfishAccountService_V1_3_6_RoleMapping_Array_CS    *RemoteRoleMapping;     // The mapping rules to convert
                                                                                 // the external account providers
                                                                                 // account information to the
                                                                                 // local Redfish role.
    RedfishCS_char_Array                                 *ServiceAddresses;      // The addresses of the user
                                                                                 // account providers to which
                                                                                 // this external account provider
                                                                                 // links.  The format of this
                                                                                 // field depends on the type of
                                                                                 // external account provider.
    RedfishCS_bool                                       *ServiceEnabled;        // An indication of whether this
                                                                                 // service is enabled.
} RedfishAccountService_V1_3_6_ExternalAccountProvider_CS;

//
// The settings to search a generic LDAP service.
//
typedef struct _RedfishAccountService_V1_3_6_LDAPSearchSettings_CS {
    RedfishCS_char_Array    *BaseDistinguishedNames;    // The base distinguished names
                                                       // to use to search an external
                                                       // LDAP service.
    RedfishCS_char          *GroupNameAttribute;       // The attribute name that
                                                       // contains the LDAP group name
                                                       // entry.
    RedfishCS_char          *GroupsAttribute;          // The attribute name that
                                                       // contains the groups for a user
                                                       // on the LDAP user entry.
    RedfishCS_char          *UsernameAttribute;        // The attribute name that
                                                       // contains the LDAP user name
                                                       // entry.
} RedfishAccountService_V1_3_6_LDAPSearchSettings_CS;

//
// The settings required to parse a generic LDAP service.
//
typedef struct _RedfishAccountService_V1_3_6_LDAPService_CS {
    RedfishResource_Oem_CS                                *Oem;              // The OEM extension property.
    RedfishAccountService_V1_3_6_LDAPSearchSettings_CS    *SearchSettings;    // The required settings to
                                                                             // search an external LDAP
                                                                             // service.
} RedfishAccountService_V1_3_6_LDAPService_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishAccountService_V1_3_6_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishAccountService_V1_3_6_OemActions_CS;

//
// The mapping rules that are used to convert the external account providers
// account information to the local Redfish role.
//
typedef struct _RedfishAccountService_V1_3_6_RoleMapping_CS {
    RedfishCS_char            *LocalRole;     // The name of the local Redfish
                                              // role to which to map the
                                              // remote user or group.
    RedfishResource_Oem_CS    *Oem;           // The OEM extension property.
    RedfishCS_char            *RemoteGroup;    // The name of the remote group,
                                              // or the remote role in the case
                                              // of a Redfish service, that
                                              // maps to the local Redfish role
                                              // to which this entity links.
    RedfishCS_char            *RemoteUser;    // The name of the remote user
                                              // that maps to the local Redfish
                                              // role to which this entity
                                              // links.
} RedfishAccountService_V1_3_6_RoleMapping_CS;

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
// The AccountService schema defines an account service.  The properties are
// common to, and enable management of, all user accounts.  The properties include
// the password requirements and control features, such as account lockout.  The
// schema also contains links to the manager accounts and roles.
//
typedef struct _RedfishAccountService_V1_3_6_AccountService_CS {
    RedfishCS_Header                                           Header;
    RedfishCS_char                                             *odata_context;                   
    RedfishCS_char                                             *odata_etag;                      
    RedfishCS_char                                             *odata_id;                        
    RedfishCS_char                                             *odata_type;                      
    RedfishCS_int64                                            *AccountLockoutCounterResetAfter;     // The period of time, in
                                                                                                     // seconds, between the last
                                                                                                     // failed login attempt and the
                                                                                                     // reset of the lockout threshold
                                                                                                     // counter.  This value must be
                                                                                                     // less than or equal to the
                                                                                                     // AccountLockoutDuration value.
                                                                                                     // A reset sets the counter to
                                                                                                     // `0`.
    RedfishCS_int64                                            *AccountLockoutDuration;              // The period of time, in
                                                                                                     // seconds, that an account is
                                                                                                     // locked after the number of
                                                                                                     // failed login attempts reaches
                                                                                                     // the account lockout threshold,
                                                                                                     // within the period between the
                                                                                                     // last failed login attempt and
                                                                                                     // the reset of the lockout
                                                                                                     // threshold counter.  If this
                                                                                                     // value is `0`, no lockout will
                                                                                                     // occur.  If the AccountLockoutC
                                                                                                     // ounterResetEnabled value is
                                                                                                     // `false`, this property is
                                                                                                     // ignored.
    RedfishCS_int64                                            *AccountLockoutThreshold;             // The number of allowed failed
                                                                                                     // login attempts before a user
                                                                                                     // account is locked for a
                                                                                                     // specified duration.  If `0`,
                                                                                                     // the account is never locked.
    RedfishCS_Link                                             Accounts;                             // The collection of manager
                                                                                                     // accounts.
    RedfishAccountService_V1_3_6_Actions_CS                    *Actions;                             // The available actions for this
                                                                                                     // resource.
    RedfishAccountService_V1_3_6_ExternalAccountProvider_CS    *ActiveDirectory;                     // The first Active Directory
                                                                                                     // external account provider that
                                                                                                     // this account service supports.
    RedfishCS_Link                                             AdditionalExternalAccountProviders;    // The additional external
                                                                                                     // account providers that this
                                                                                                     // account service uses.
    RedfishCS_int64                                            *AuthFailureLoggingThreshold;         // The number of authorization
                                                                                                     // failures per account that are
                                                                                                     // allowed before the failed
                                                                                                     // attempt is logged to the
                                                                                                     // manager log.
    RedfishCS_char                                             *Description;                     
    RedfishCS_char                                             *Id;                              
    RedfishAccountService_V1_3_6_ExternalAccountProvider_CS    *LDAP;                                // The first LDAP external
                                                                                                     // account provider that this
                                                                                                     // account service supports.
    RedfishCS_char                                             *LocalAccountAuth;                    // An indication of how the
                                                                                                     // service uses the accounts
                                                                                                     // collection within this account
                                                                                                     // service as part of
                                                                                                     // authentication.  The
                                                                                                     // enumerated values describe the
                                                                                                     // details for each mode.
    RedfishCS_int64                                            *MaxPasswordLength;                   // The maximum password length
                                                                                                     // for this account service.
    RedfishCS_int64                                            *MinPasswordLength;                   // The minimum password length
                                                                                                     // for this account service.
    RedfishCS_char                                             *Name;                            
    RedfishResource_Oem_CS                                     *Oem;                                 // The OEM extension property.
    RedfishCS_Link                                             PrivilegeMap;                         // The link to the mapping of the
                                                                                                     // privileges required to
                                                                                                     // complete a requested operation
                                                                                                     // on a URI associated with this
                                                                                                     // service.
    RedfishCS_Link                                             Roles;                                // The collection of Redfish
                                                                                                     // roles.
    RedfishCS_bool                                             *ServiceEnabled;                      // An indication of whether the
                                                                                                     // account service is enabled.
                                                                                                     // If `true`, it is enabled.  If
                                                                                                     // `false`, it is disabled and
                                                                                                     // users cannot be created,
                                                                                                     // deleted, or modified, and new
                                                                                                     // sessions cannot be started.
                                                                                                     // However, established sessions
                                                                                                     // might still continue to run.
                                                                                                     // Any service, such as the
                                                                                                     // session service, that attempts
                                                                                                     // to access the disabled account
                                                                                                     // service fails.  However, this
                                                                                                     // does not affect HTTP Basic
                                                                                                     // Authentication connections.
    RedfishResource_Status_CS                                  *Status;                              // The status and health of the
                                                                                                     // resource and its subordinate
                                                                                                     // or dependent resources.
} RedfishAccountService_V1_3_6_AccountService_CS;

typedef struct _RedfishAccountService_V1_3_6_RoleMapping_Array_CS  {
    RedfishAccountService_V1_3_6_RoleMapping_Array_CS    *Next;
    RedfishAccountService_V1_3_6_RoleMapping_CS    *ArrayValue;
} RedfishAccountService_V1_3_6_RoleMapping_Array_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

RedfishCS_status
Json_AccountService_V1_3_6_To_CS (char *JsonRawText, RedfishAccountService_V1_3_6_AccountService_CS **ReturnedCS);

RedfishCS_status
CS_To_AccountService_V1_3_6_JSON (RedfishAccountService_V1_3_6_AccountService_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyAccountService_V1_3_6_CS (RedfishAccountService_V1_3_6_AccountService_CS *CSPtr);

RedfishCS_status
DestroyAccountService_V1_3_6_Json (RedfishCS_char *JsonText);

#endif
