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

#ifndef RedfishManageraccount_V1_0_3_CSTRUCT_H_
#define RedfishManageraccount_V1_0_3_CSTRUCT_H_

#include "RedfishCsCommon.h"

typedef struct _RedfishManagerAccount_V1_0_3_ManagerAccount_CS RedfishManagerAccount_V1_0_3_ManagerAccount_CS;
typedef struct _RedfishManagerAccount_V1_0_3_ManagerAccount_Links_CS RedfishManagerAccount_V1_0_3_ManagerAccount_Links_CS;
#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

//
// Contains references to other resources that are related to this resource.
//
typedef struct _RedfishManagerAccount_V1_0_3_ManagerAccount_Links_CS {
    RedfishResource_Oem_CS    *Oem;    // Oem extension object.
    RedfishCS_Link            Role;    // A reference to the Role object
                                      // defining Privileges for this
                                      // account--returned when the
                                      // resource is read. The ID of
                                      // the role is the same as
                                      // property RoleId.
} RedfishManagerAccount_V1_0_3_ManagerAccount_Links_CS;

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
// The user accounts, owned by a Manager, are defined in this resource.  Changes
// to a Manager Account may affect the current Redfish service connection if this
// manager is responsible for the Redfish service.
//
typedef struct _RedfishManagerAccount_V1_0_3_ManagerAccount_CS {
    RedfishCS_Header                                        Header;
    RedfishCS_char                                          *odata_context;
    RedfishCS_char                                          *odata_id;    
    RedfishCS_char                                          *odata_type;  
    RedfishCS_char                                          *Description; 
    RedfishCS_bool                                          *Enabled;         // This property is used by a
                                                                              // User Administrator to disable
                                                                              // an account w/o having to delet
                                                                              // the user information.  When
                                                                              // set to true, the user can
                                                                              // login.  When set to false, the
                                                                              // account is administratively
                                                                              // disabled and the user cannot
                                                                              // login.
    RedfishCS_char                                          *Id;          
    RedfishManagerAccount_V1_0_3_ManagerAccount_Links_CS    *Links;           // Contains references to other
                                                                              // resources that are related to
                                                                              // this resource.
    RedfishCS_bool                                          *Locked;          // This property indicates that
                                                                              // the account has been auto-
                                                                              // locked by the account service
                                                                              // because the lockout threshold
                                                                              // has been exceeded.  When set
                                                                              // to true, the account is
                                                                              // locked. A user admin can write
                                                                              // the property to false to
                                                                              // manually unlock, or the
                                                                              // account service will unlock it
                                                                              // once the lockout duration
                                                                              // period has passed.
    RedfishCS_char                                          *Name;        
    RedfishResource_Oem_CS                                  *Oem;             // This is the
                                                                              // manufacturer/provider specific
                                                                              // extension moniker used to
                                                                              // divide the Oem object into
                                                                              // sections.
    RedfishCS_char                                          *Password;        // This property is used with a
                                                                              // PATCH or PUT to write the
                                                                              // password for the account.
                                                                              // This property is null on a
                                                                              // GET.
    RedfishCS_char                                          *RoleId;          // This property contains the
                                                                              // Role for this account.
    RedfishCS_char                                          *UserName;        // This property contains the
                                                                              // user name for the account.
} RedfishManagerAccount_V1_0_3_ManagerAccount_CS;

RedfishCS_status
Json_ManagerAccount_V1_0_3_To_CS (char *JsonRawText, RedfishManagerAccount_V1_0_3_ManagerAccount_CS **ReturnedCS);

RedfishCS_status
CS_To_ManagerAccount_V1_0_3_JSON (RedfishManagerAccount_V1_0_3_ManagerAccount_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyManagerAccount_V1_0_3_CS (RedfishManagerAccount_V1_0_3_ManagerAccount_CS *CSPtr);

RedfishCS_status
DestroyManagerAccount_V1_0_3_Json (RedfishCS_char *JsonText);

#endif
