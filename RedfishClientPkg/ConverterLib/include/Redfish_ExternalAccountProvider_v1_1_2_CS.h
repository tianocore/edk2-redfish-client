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

#ifndef RedfishExternalaccountprovider_V1_1_2_CSTRUCT_H_
#define RedfishExternalaccountprovider_V1_1_2_CSTRUCT_H_

#include "RedfishCsCommon.h"

typedef struct _RedfishExternalAccountProvider_V1_1_2_RoleMapping_Array_CS RedfishExternalAccountProvider_V1_1_2_RoleMapping_Array_CS;
typedef struct _RedfishExternalAccountProvider_V1_1_2_Actions_CS RedfishExternalAccountProvider_V1_1_2_Actions_CS;
typedef struct _RedfishExternalAccountProvider_V1_1_2_Authentication_CS RedfishExternalAccountProvider_V1_1_2_Authentication_CS;
typedef struct _RedfishExternalAccountProvider_V1_1_2_ExternalAccountProvider_CS RedfishExternalAccountProvider_V1_1_2_ExternalAccountProvider_CS;
typedef struct _RedfishExternalAccountProvider_V1_1_2_LDAPSearchSettings_CS RedfishExternalAccountProvider_V1_1_2_LDAPSearchSettings_CS;
typedef struct _RedfishExternalAccountProvider_V1_1_2_LDAPService_CS RedfishExternalAccountProvider_V1_1_2_LDAPService_CS;
typedef struct _RedfishExternalAccountProvider_V1_1_2_Links_CS RedfishExternalAccountProvider_V1_1_2_Links_CS;
typedef struct _RedfishExternalAccountProvider_V1_1_2_OemActions_CS RedfishExternalAccountProvider_V1_1_2_OemActions_CS;
typedef struct _RedfishExternalAccountProvider_V1_1_2_RoleMapping_CS RedfishExternalAccountProvider_V1_1_2_RoleMapping_CS;
#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

//
// The available actions for this Resource.
//
typedef struct _RedfishExternalAccountProvider_V1_1_2_Actions_CS {
    RedfishExternalAccountProvider_V1_1_2_OemActions_CS    *Oem;    // The available OEM-specific
                                                                   // actions for this Resource.
} RedfishExternalAccountProvider_V1_1_2_Actions_CS;

//
// The information required to authenticate to the external service.
//
typedef struct _RedfishExternalAccountProvider_V1_1_2_Authentication_CS {
    RedfishCS_char            *AuthenticationType;    // The type of authentication
                                                     // used to connect to the
                                                     // external account provider.
    RedfishCS_char            *KerberosKeytab;       // The Base64-encoded version of
                                                     // the Kerberos keytab for this
                                                     // Service.  A PATCH or PUT
                                                     // operation writes the keytab.
                                                     // This property is `null` in
                                                     // responses.
    RedfishResource_Oem_CS    *Oem;                  // The OEM extension property.
    RedfishCS_char            *Password;             // The password for this Service.
                                                     // A PATCH or PUT request writes
                                                     // the password.  This property
                                                     // is `null` in responses.
    RedfishCS_char            *Token;                // The token for this Service.  A
                                                     // PATCH or PUT operation writes
                                                     // the token.  This property is
                                                     // `null` in responses.
    RedfishCS_char            *Username;             // The user name for the Service.
} RedfishExternalAccountProvider_V1_1_2_Authentication_CS;

//
// The settings to search a generic LDAP service.
//
typedef struct _RedfishExternalAccountProvider_V1_1_2_LDAPSearchSettings_CS {
    RedfishCS_char_Array    *BaseDistinguishedNames;    // The base distinguished names
                                                       // to search an external LDAP
                                                       // service.
    RedfishCS_char          *GroupNameAttribute;       // The attribute name that
                                                       // contains the LDAP group name
                                                       // entry.
    RedfishCS_char          *GroupsAttribute;          // The attribute name that
                                                       // contains the groups for a user
                                                       // on the LDAP user entry.
    RedfishCS_char          *UsernameAttribute;        // The attribute name that
                                                       // contains the LDAP user name
                                                       // entry.
} RedfishExternalAccountProvider_V1_1_2_LDAPSearchSettings_CS;

//
// The settings required to parse a generic LDAP service.
//
typedef struct _RedfishExternalAccountProvider_V1_1_2_LDAPService_CS {
    RedfishResource_Oem_CS                                         *Oem;              // The OEM extension property.
    RedfishExternalAccountProvider_V1_1_2_LDAPSearchSettings_CS    *SearchSettings;    // The required settings to
                                                                                      // search an external LDAP
                                                                                      // service.
} RedfishExternalAccountProvider_V1_1_2_LDAPService_CS;

//
// The links to other Resources that are related to this Resource.
//
typedef struct _RedfishExternalAccountProvider_V1_1_2_Links_CS {
    RedfishResource_Oem_CS    *Oem;    // The OEM extension property.
} RedfishExternalAccountProvider_V1_1_2_Links_CS;

//
// The available OEM-specific actions for this Resource.
//
typedef struct _RedfishExternalAccountProvider_V1_1_2_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishExternalAccountProvider_V1_1_2_OemActions_CS;

//
// The mapping rules to convert the external account providers account information
// to the local Redfish Role.
//
typedef struct _RedfishExternalAccountProvider_V1_1_2_RoleMapping_CS {
    RedfishCS_char            *LocalRole;     // The name of the local Redfish
                                              // Role to which to map the
                                              // remote user or group.
    RedfishResource_Oem_CS    *Oem;           // The OEM extension property.
    RedfishCS_char            *RemoteGroup;    // The name of the remote group,
                                              // or the remote role in the case
                                              // of a Redfish Service, that
                                              // maps to the local Redfish Role
                                              // to which this entity links.
    RedfishCS_char            *RemoteUser;    // The name of the remote user
                                              // that maps to the local Redfish
                                              // Role to which this entity
                                              // links.
} RedfishExternalAccountProvider_V1_1_2_RoleMapping_CS;

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
// The remote service that provides accounts for this manager to use for
// authentication.
//
typedef struct _RedfishExternalAccountProvider_V1_1_2_ExternalAccountProvider_CS {
    RedfishCS_Header                                              Header;
    RedfishCS_char                                                *odata_context;     
    RedfishCS_char                                                *odata_etag;        
    RedfishCS_char                                                *odata_id;          
    RedfishCS_char                                                *odata_type;        
    RedfishCS_char                                                *AccountProviderType;    // The type of external account
                                                                                          // provider to which this Service
                                                                                          // connects.
    RedfishExternalAccountProvider_V1_1_2_Actions_CS              *Actions;               // The available actions for this
                                                                                          // Resource.
    RedfishExternalAccountProvider_V1_1_2_Authentication_CS       *Authentication;        // The authentication information
                                                                                          // for the external account
                                                                                          // provider.
    RedfishCS_Link                                                Certificates;           // The link to a collection of
                                                                                          // certificates that the external
                                                                                          // account provider uses.
    RedfishCS_char                                                *Description;       
    RedfishCS_char                                                *Id;                
    RedfishExternalAccountProvider_V1_1_2_LDAPService_CS          *LDAPService;           // The additional mapping
                                                                                          // information needed to parse a
                                                                                          // generic LDAP service.
    RedfishExternalAccountProvider_V1_1_2_Links_CS                *Links;                 // The links to other Resources
                                                                                          // that are related to this
                                                                                          // Resource.
    RedfishCS_char                                                *Name;              
    RedfishResource_Oem_CS                                        *Oem;                   // The OEM extension property.
    RedfishExternalAccountProvider_V1_1_2_RoleMapping_Array_CS    *RemoteRoleMapping;     // The mapping rules to convert
                                                                                          // the external account providers
                                                                                          // account information to the
                                                                                          // local Redfish Role.
    RedfishCS_char_Array                                          *ServiceAddresses;      // The addresses of the user
                                                                                          // account providers to which
                                                                                          // this external account provider
                                                                                          // links.  The format of this
                                                                                          // field depends on the type of
                                                                                          // external account provider.
    RedfishCS_bool                                                *ServiceEnabled;        // An indication of whether this
                                                                                          // service is enabled.
} RedfishExternalAccountProvider_V1_1_2_ExternalAccountProvider_CS;

typedef struct _RedfishExternalAccountProvider_V1_1_2_RoleMapping_Array_CS  {
    RedfishExternalAccountProvider_V1_1_2_RoleMapping_Array_CS    *Next;
    RedfishExternalAccountProvider_V1_1_2_RoleMapping_CS    *ArrayValue;
} RedfishExternalAccountProvider_V1_1_2_RoleMapping_Array_CS;

RedfishCS_status
Json_ExternalAccountProvider_V1_1_2_To_CS (char *JsonRawText, RedfishExternalAccountProvider_V1_1_2_ExternalAccountProvider_CS **ReturnedCS);

RedfishCS_status
CS_To_ExternalAccountProvider_V1_1_2_JSON (RedfishExternalAccountProvider_V1_1_2_ExternalAccountProvider_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyExternalAccountProvider_V1_1_2_CS (RedfishExternalAccountProvider_V1_1_2_ExternalAccountProvider_CS *CSPtr);

RedfishCS_status
DestroyExternalAccountProvider_V1_1_2_Json (RedfishCS_char *JsonText);

#endif
