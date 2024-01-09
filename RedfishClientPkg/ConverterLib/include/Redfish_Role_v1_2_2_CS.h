//
// Auto-generated file by Redfish Schema C Structure Generator.
// https://github.com/DMTF/Redfish-Schema-C-Struct-Generator.
//
//  (C) Copyright 2019-2022 Hewlett Packard Enterprise Development LP<BR>
//  Copyright (c) 2023-2024, NVIDIA CORPORATION & AFFILIATES. All rights reserved.
//  Copyright (C) 2024 Advanced Micro Devices, Inc. All rights reserved.<BR>
//
// Copyright Notice:
// Copyright 2019-2024 Distributed Management Task Force, Inc. All rights reserved.
// License: BSD 3-Clause License. For full text see link: https://github.com/DMTF/Redfish-JSON-C-Struct-Converter/blob/master/LICENSE.md
//

#ifndef RedfishRole_V1_2_2_CSTRUCT_H_
#define RedfishRole_V1_2_2_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

typedef struct _RedfishRole_V1_2_2_Actions_CS RedfishRole_V1_2_2_Actions_CS;
typedef struct _RedfishRole_V1_2_2_OemActions_CS RedfishRole_V1_2_2_OemActions_CS;
typedef struct _RedfishRole_V1_2_2_Role_CS RedfishRole_V1_2_2_Role_CS;
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
typedef struct _RedfishRole_V1_2_2_Actions_CS {
    RedfishRole_V1_2_2_OemActions_CS    *Oem;    // This property contains the
                                                // available OEM specific actions
                                                // for this resource.
} RedfishRole_V1_2_2_Actions_CS;

//
// The available OEM specific actions for this resource.
//
typedef struct _RedfishRole_V1_2_2_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishRole_V1_2_2_OemActions_CS;

//
// This resource defines a user role to be used in conjunction with a Manager
// Account.
//
typedef struct _RedfishRole_V1_2_2_Role_CS {
    RedfishCS_Header                 Header;
    RedfishCS_char                   *odata_context;    
    RedfishCS_char                   *odata_etag;       
    RedfishCS_char                   *odata_id;         
    RedfishCS_char                   *odata_type;       
    RedfishRole_V1_2_2_Actions_CS    *Actions;              // The available actions for this
                                                            // resource.
    RedfishCS_char_Array             *AssignedPrivileges;    // The redfish privileges that
                                                            // this role includes.
    RedfishCS_char                   *Description;      
    RedfishCS_char                   *Id;               
    RedfishCS_bool                   *IsPredefined;         // This property is used to
                                                            // indicate if the Role is one of
                                                            // the Redfish Predefined Roles
                                                            // vs a Custom role.
    RedfishCS_char                   *Name;             
    RedfishResource_Oem_CS           *Oem;                  // This is the
                                                            // manufacturer/provider specific
                                                            // extension moniker used to
                                                            // divide the Oem object into
                                                            // sections.
    RedfishCS_char_Array             *OemPrivileges;        // The OEM privileges that this
                                                            // role includes.
    RedfishCS_char                   *RoleId;               // This property contains the
                                                            // name of the Role.
} RedfishRole_V1_2_2_Role_CS;

RedfishCS_status
Json_Role_V1_2_2_To_CS (char *JsonRawText, RedfishRole_V1_2_2_Role_CS **ReturnedCS);

RedfishCS_status
CS_To_Role_V1_2_2_JSON (RedfishRole_V1_2_2_Role_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyRole_V1_2_2_CS (RedfishRole_V1_2_2_Role_CS *CSPtr);

RedfishCS_status
DestroyRole_V1_2_2_Json (RedfishCS_char *JsonText);

#endif
