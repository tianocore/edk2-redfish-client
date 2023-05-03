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

#ifndef RedfishExternalaccountprovider_V1_0_1_CSTRUCT_H_
#define RedfishExternalaccountprovider_V1_0_1_CSTRUCT_H_

#include "RedfishCsCommon.h"

typedef struct _RedfishExternalAccountProvider_V1_0_1_RoleMapping_Array_CS RedfishExternalAccountProvider_V1_0_1_RoleMapping_Array_CS;
typedef struct _RedfishExternalAccountProvider_V1_0_1_Actions_CS RedfishExternalAccountProvider_V1_0_1_Actions_CS;
typedef struct _RedfishExternalAccountProvider_V1_0_1_Authentication_CS RedfishExternalAccountProvider_V1_0_1_Authentication_CS;
typedef struct _RedfishExternalAccountProvider_V1_0_1_ExternalAccountProvider_CS RedfishExternalAccountProvider_V1_0_1_ExternalAccountProvider_CS;
typedef struct _RedfishExternalAccountProvider_V1_0_1_LDAPSearchSettings_CS RedfishExternalAccountProvider_V1_0_1_LDAPSearchSettings_CS;
typedef struct _RedfishExternalAccountProvider_V1_0_1_LDAPService_CS RedfishExternalAccountProvider_V1_0_1_LDAPService_CS;
typedef struct _RedfishExternalAccountProvider_V1_0_1_Links_CS RedfishExternalAccountProvider_V1_0_1_Links_CS;
typedef struct _RedfishExternalAccountProvider_V1_0_1_OemActions_CS RedfishExternalAccountProvider_V1_0_1_OemActions_CS;
typedef struct _RedfishExternalAccountProvider_V1_0_1_RoleMapping_CS RedfishExternalAccountProvider_V1_0_1_RoleMapping_CS;
#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

//
// The available actions for this resource.
//
typedef struct _RedfishExternalAccountProvider_V1_0_1_Actions_CS {
    RedfishExternalAccountProvider_V1_0_1_OemActions_CS    *Oem;    // This property contains the
                                                                   // available OEM specific actions
                                                                   // for this resource.
} RedfishExternalAccountProvider_V1_0_1_Actions_CS;

//
// Contains the authentication information for the external service.
//
typedef struct _RedfishExternalAccountProvider_V1_0_1_Authentication_CS {
    RedfishCS_char            *AuthenticationType;    // This property contains the
                                                     // type of authentication used to
                                                     // connect to the external
                                                     // account provider.
    RedfishCS_char            *KerberosKeytab;       // This property is used with a
                                                     // PATCH or PUT to write a base64
                                                     // encoded version of the
                                                     // kerberos keytab for the
                                                     // account.  This property is
                                                     // null on a GET.
    RedfishResource_Oem_CS    *Oem;                  // Oem extension object.
    RedfishCS_char            *Password;             // This property is used with a
                                                     // PATCH or PUT to write the
                                                     // password for the account
                                                     // service.  This property is
                                                     // null on a GET.
    RedfishCS_char            *Token;                // This property is used with a
                                                     // PATCH or PUT to write the
                                                     // token for the account.  This
                                                     // property is null on a GET.
    RedfishCS_char            *Username;             // This property contains the
                                                     // user name for the account
                                                     // service.
} RedfishExternalAccountProvider_V1_0_1_Authentication_CS;

//
// Contains settings for searching a generic LDAP service.
//
typedef struct _RedfishExternalAccountProvider_V1_0_1_LDAPSearchSettings_CS {
    RedfishCS_char_Array    *BaseDistinguishedNames;    // The base distinguished names
                                                       // to use when searching the LDAP
                                                       // service.
    RedfishCS_char          *GroupNameAttribute;       // The attribute name that
                                                       // contains the name of the
                                                       // Group.
    RedfishCS_char          *GroupsAttribute;          // The attribute name that
                                                       // contains the Groups for a
                                                       // user.
    RedfishCS_char          *UsernameAttribute;        // The attribute name that
                                                       // contains the Username.
} RedfishExternalAccountProvider_V1_0_1_LDAPSearchSettings_CS;

//
// Contains settings for parsing a generic LDAP service.
//
typedef struct _RedfishExternalAccountProvider_V1_0_1_LDAPService_CS {
    RedfishResource_Oem_CS                                         *Oem;              // Oem extension object.
    RedfishExternalAccountProvider_V1_0_1_LDAPSearchSettings_CS    *SearchSettings;    // This property contains the
                                                                                      // settings needed to search an
                                                                                      // external LDAP service.
} RedfishExternalAccountProvider_V1_0_1_LDAPService_CS;

//
// Contains references to other resources that are related to this resource.
//
typedef struct _RedfishExternalAccountProvider_V1_0_1_Links_CS {
    RedfishResource_Oem_CS    *Oem;    // Oem extension object.
} RedfishExternalAccountProvider_V1_0_1_Links_CS;

//
// The available OEM specific actions for this resource.
//
typedef struct _RedfishExternalAccountProvider_V1_0_1_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishExternalAccountProvider_V1_0_1_OemActions_CS;

//
// Contains mapping rules to convert the external account providers account
// information to the local Redfish Role.
//
typedef struct _RedfishExternalAccountProvider_V1_0_1_RoleMapping_CS {
    RedfishCS_char            *LocalRole;     // The name of the local role in
                                              // which to map the remote user
                                              // or group.
    RedfishResource_Oem_CS    *Oem;           // Oem extension object.
    RedfishCS_char            *RemoteGroup;    // This property is the name of
                                              // the remote group (or in the
                                              // case of a Redfish Service,
                                              // remote role) that will be
                                              // mapped to the local role
                                              // referenced by this entity.
    RedfishCS_char            *RemoteUser;    // This property is the name of
                                              // the remote user that will be
                                              // mapped to the local role
                                              // referenced by this entity.
} RedfishExternalAccountProvider_V1_0_1_RoleMapping_CS;

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
// A remote service that can provide accounts for this manager to utilize for
// authentication.
//
typedef struct _RedfishExternalAccountProvider_V1_0_1_ExternalAccountProvider_CS {
    RedfishCS_Header                                              Header;
    RedfishCS_char                                                *odata_context;     
    RedfishCS_char                                                *odata_etag;        
    RedfishCS_char                                                *odata_id;          
    RedfishCS_char                                                *odata_type;        
    RedfishCS_char                                                *AccountProviderType;    // This property contains the
                                                                                          // type of external account
                                                                                          // provider this resource
                                                                                          // references.
    RedfishExternalAccountProvider_V1_0_1_Actions_CS              *Actions;               // The available actions for this
                                                                                          // resource.
    RedfishExternalAccountProvider_V1_0_1_Authentication_CS       *Authentication;        // This property contains the
                                                                                          // authentication information for
                                                                                          // the external account provider.
    RedfishCS_char                                                *Description;       
    RedfishCS_char                                                *Id;                
    RedfishExternalAccountProvider_V1_0_1_LDAPService_CS          *LDAPService;           // This property contains
                                                                                          // additional mapping information
                                                                                          // needed to parse a generic LDAP
                                                                                          // service.
    RedfishExternalAccountProvider_V1_0_1_Links_CS                *Links;                 // Contains references to other
                                                                                          // resources that are related to
                                                                                          // this resource.
    RedfishCS_char                                                *Name;              
    RedfishResource_Oem_CS                                        *Oem;                   // This is the
                                                                                          // manufacturer/provider specific
                                                                                          // extension moniker used to
                                                                                          // divide the Oem object into
                                                                                          // sections.
    RedfishExternalAccountProvider_V1_0_1_RoleMapping_Array_CS    *RemoteRoleMapping;     // This property contains a
                                                                                          // collection of the mapping
                                                                                          // rules to convert the external
                                                                                          // account providers account
                                                                                          // information to the local
                                                                                          // Redfish Role.
    RedfishCS_char_Array                                          *ServiceAddresses;      // This property contains the
                                                                                          // addresses of the user account
                                                                                          // providers this resource
                                                                                          // references. The format of this
                                                                                          // field depends on the Type.
    RedfishCS_bool                                                *ServiceEnabled;        // This indicates whether this
                                                                                          // service is enabled.
} RedfishExternalAccountProvider_V1_0_1_ExternalAccountProvider_CS;

typedef struct _RedfishExternalAccountProvider_V1_0_1_RoleMapping_Array_CS  {
    RedfishExternalAccountProvider_V1_0_1_RoleMapping_Array_CS    *Next;
    RedfishExternalAccountProvider_V1_0_1_RoleMapping_CS    *ArrayValue;
} RedfishExternalAccountProvider_V1_0_1_RoleMapping_Array_CS;

RedfishCS_status
Json_ExternalAccountProvider_V1_0_1_To_CS (char *JsonRawText, RedfishExternalAccountProvider_V1_0_1_ExternalAccountProvider_CS **ReturnedCS);

RedfishCS_status
CS_To_ExternalAccountProvider_V1_0_1_JSON (RedfishExternalAccountProvider_V1_0_1_ExternalAccountProvider_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyExternalAccountProvider_V1_0_1_CS (RedfishExternalAccountProvider_V1_0_1_ExternalAccountProvider_CS *CSPtr);

RedfishCS_status
DestroyExternalAccountProvider_V1_0_1_Json (RedfishCS_char *JsonText);

#endif
