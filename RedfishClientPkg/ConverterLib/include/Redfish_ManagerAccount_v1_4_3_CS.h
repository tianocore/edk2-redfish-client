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

#ifndef RedfishManageraccount_V1_4_3_CSTRUCT_H_
#define RedfishManageraccount_V1_4_3_CSTRUCT_H_

#include "RedfishCsCommon.h"

typedef struct _RedfishManagerAccount_V1_4_3_Actions_CS RedfishManagerAccount_V1_4_3_Actions_CS;
typedef struct _RedfishManagerAccount_V1_4_3_Links_CS RedfishManagerAccount_V1_4_3_Links_CS;
typedef struct _RedfishManagerAccount_V1_4_3_ManagerAccount_CS RedfishManagerAccount_V1_4_3_ManagerAccount_CS;
typedef struct _RedfishManagerAccount_V1_4_3_OemActions_CS RedfishManagerAccount_V1_4_3_OemActions_CS;
typedef struct _RedfishManagerAccount_V1_4_3_SNMPUserInfo_CS RedfishManagerAccount_V1_4_3_SNMPUserInfo_CS;
#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

//
// The available actions for this resource.
//
typedef struct _RedfishManagerAccount_V1_4_3_Actions_CS {
    RedfishManagerAccount_V1_4_3_OemActions_CS    *Oem;    // The available OEM-specific
                                                          // actions for this resource.
} RedfishManagerAccount_V1_4_3_Actions_CS;

//
// The links to other resources that are related to this resource.
//
typedef struct _RedfishManagerAccount_V1_4_3_Links_CS {
    RedfishResource_Oem_CS    *Oem;    // The OEM extension property.
    RedfishCS_Link            Role;    // The link to the Redfish role
                                      // that defines the privileges
                                      // for this account.
} RedfishManagerAccount_V1_4_3_Links_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishManagerAccount_V1_4_3_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishManagerAccount_V1_4_3_OemActions_CS;

//
// The SNMP settings for an account.
//
typedef struct _RedfishManagerAccount_V1_4_3_SNMPUserInfo_CS {
    RedfishCS_char    *AuthenticationKey;        // The secret authentication key
                                                 // for SNMPv3.
    RedfishCS_char    *AuthenticationProtocol;    // The authentication protocol
                                                 // for SNMPv3.
    RedfishCS_char    *EncryptionKey;            // The secret authentication key
                                                 // used in SNMPv3.
    RedfishCS_char    *EncryptionProtocol;       // The encryption protocol for
                                                 // SNMPv3.
} RedfishManagerAccount_V1_4_3_SNMPUserInfo_CS;

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
// The ManagerAccount schema defines the user accounts that are owned by a
// manager.  Changes to a manager account might affect the current Redfish service
// connection if this manager is responsible for the Redfish service.
//
typedef struct _RedfishManagerAccount_V1_4_3_ManagerAccount_CS {
    RedfishCS_Header                                Header;
    RedfishCS_char                                  *odata_context;        
    RedfishCS_char                                  *odata_etag;           
    RedfishCS_char                                  *odata_id;             
    RedfishCS_char                                  *odata_type;           
    RedfishCS_char_Array                            *AccountTypes;             // The account types.
    RedfishManagerAccount_V1_4_3_Actions_CS         *Actions;                  // The available actions for this
                                                                               // resource.
    RedfishCS_Link                                  Certificates;              // The link to a collection of
                                                                               // certificates used for this
                                                                               // account.
    RedfishCS_char                                  *Description;          
    RedfishCS_bool                                  *Enabled;                  // An indication of whether an
                                                                               // account is enabled.  An
                                                                               // administrator can disable it
                                                                               // without deleting the user
                                                                               // information.  If `true`, the
                                                                               // account is enabled and the
                                                                               // user can log in.  If `false`,
                                                                               // the account is disabled and,
                                                                               // in the future, the user cannot
                                                                               // log in.
    RedfishCS_char                                  *Id;                   
    RedfishManagerAccount_V1_4_3_Links_CS           *Links;                    // The links to other resources
                                                                               // that are related to this
                                                                               // resource.
    RedfishCS_bool                                  *Locked;                   // An indication of whether the
                                                                               // account service automatically
                                                                               // locked the account because the
                                                                               // lockout threshold was
                                                                               // exceeded.  To manually unlock
                                                                               // the account before the lockout
                                                                               // duration period, an
                                                                               // administrator can change the
                                                                               // property to `false` to clear
                                                                               // the lockout condition.
    RedfishCS_char                                  *Name;                 
    RedfishCS_char_Array                            *OEMAccountTypes;          // The OEM account types.
    RedfishResource_Oem_CS                          *Oem;                      // The OEM extension property.
    RedfishCS_char                                  *Password;                 // The password.  Use this
                                                                               // property with a PATCH or PUT
                                                                               // to write the password for the
                                                                               // account.  This property is
                                                                               // `null` in responses.
    RedfishCS_bool                                  *PasswordChangeRequired;    // An indication of whether the
                                                                               // service requires that the
                                                                               // password for this account be
                                                                               // changed before further access
                                                                               // to the account is allowed.
    RedfishCS_char                                  *RoleId;                   // The role for this account.
    RedfishManagerAccount_V1_4_3_SNMPUserInfo_CS    *SNMP;                     // The SNMP settings for this
                                                                               // account.
    RedfishCS_char                                  *UserName;                 // The user name for the account.
} RedfishManagerAccount_V1_4_3_ManagerAccount_CS;

RedfishCS_status
Json_ManagerAccount_V1_4_3_To_CS (char *JsonRawText, RedfishManagerAccount_V1_4_3_ManagerAccount_CS **ReturnedCS);

RedfishCS_status
CS_To_ManagerAccount_V1_4_3_JSON (RedfishManagerAccount_V1_4_3_ManagerAccount_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyManagerAccount_V1_4_3_CS (RedfishManagerAccount_V1_4_3_ManagerAccount_CS *CSPtr);

RedfishCS_status
DestroyManagerAccount_V1_4_3_Json (RedfishCS_char *JsonText);

#endif
