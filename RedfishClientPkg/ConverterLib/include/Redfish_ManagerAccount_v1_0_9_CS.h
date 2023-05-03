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

#ifndef RedfishManageraccount_V1_0_9_CSTRUCT_H_
#define RedfishManageraccount_V1_0_9_CSTRUCT_H_

#include "RedfishCsCommon.h"

typedef struct _RedfishManagerAccount_V1_0_9_Links_CS RedfishManagerAccount_V1_0_9_Links_CS;
typedef struct _RedfishManagerAccount_V1_0_9_ManagerAccount_CS RedfishManagerAccount_V1_0_9_ManagerAccount_CS;
#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

//
// The links to other Resources that are related to this Resource.
//
typedef struct _RedfishManagerAccount_V1_0_9_Links_CS {
    RedfishResource_Oem_CS    *Oem;    // The OEM extension property.
    RedfishCS_Link            Role;    // The link to the Redfish Role
                                      // that defines the privileges
                                      // for this account.
} RedfishManagerAccount_V1_0_9_Links_CS;

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
// The user accounts, owned by a manager, are defined in this Resource.  Changes
// to a manager account may affect the current Redfish Service connection if this
// manager is responsible for the Redfish Service.
//
typedef struct _RedfishManagerAccount_V1_0_9_ManagerAccount_CS {
    RedfishCS_Header                         Header;
    RedfishCS_char                           *odata_context;
    RedfishCS_char                           *odata_etag;  
    RedfishCS_char                           *odata_id;    
    RedfishCS_char                           *odata_type;  
    RedfishCS_char                           *Description; 
    RedfishCS_bool                           *Enabled;         // An indication of whether an
                                                               // account is enabled.  An
                                                               // administrator can disable it
                                                               // without deleting the user
                                                               // information.  If `true`, the
                                                               // account is enabled and the
                                                               // user can log in.  If `false`,
                                                               // the account is disabled and,
                                                               // in the future, the user cannot
                                                               // log in.  This property
                                                               // overrides the Locked property.
    RedfishCS_char                           *Id;          
    RedfishManagerAccount_V1_0_9_Links_CS    *Links;           // The links to other Resources
                                                               // that are related to this
                                                               // Resource.
    RedfishCS_bool                           *Locked;          // An indication of whether the
                                                               // Account Service automatically
                                                               // locked the account because the
                                                               // lockout threshold was
                                                               // exceeded.  To manually unlock
                                                               // the account before the lockout
                                                               // duration period, an
                                                               // administrator can change the
                                                               // property to `false` to clear
                                                               // the lockout condition.
    RedfishCS_char                           *Name;        
    RedfishResource_Oem_CS                   *Oem;             // The OEM extension property.
    RedfishCS_char                           *Password;        // The password.  Use this
                                                               // property with a PATCH or PUT
                                                               // to write the password for the
                                                               // account.  This property is
                                                               // `null` in responses.
    RedfishCS_char                           *RoleId;          // The Role for this account.
    RedfishCS_char                           *UserName;        // The user name for the account.
} RedfishManagerAccount_V1_0_9_ManagerAccount_CS;

RedfishCS_status
Json_ManagerAccount_V1_0_9_To_CS (char *JsonRawText, RedfishManagerAccount_V1_0_9_ManagerAccount_CS **ReturnedCS);

RedfishCS_status
CS_To_ManagerAccount_V1_0_9_JSON (RedfishManagerAccount_V1_0_9_ManagerAccount_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyManagerAccount_V1_0_9_CS (RedfishManagerAccount_V1_0_9_ManagerAccount_CS *CSPtr);

RedfishCS_status
DestroyManagerAccount_V1_0_9_Json (RedfishCS_char *JsonText);

#endif
