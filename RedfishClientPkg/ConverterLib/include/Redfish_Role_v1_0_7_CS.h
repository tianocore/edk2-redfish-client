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

#ifndef RedfishRole_V1_0_7_CSTRUCT_H_
#define RedfishRole_V1_0_7_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

typedef struct _RedfishRole_V1_0_7_Role_CS RedfishRole_V1_0_7_Role_CS;
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
// The Role schema contains a Redfish role to use in conjunction with a manager
// account.
//
typedef struct _RedfishRole_V1_0_7_Role_CS {
    RedfishCS_Header          Header;
    RedfishCS_char            *odata_context;    
    RedfishCS_char            *odata_etag;       
    RedfishCS_char            *odata_id;         
    RedfishCS_char            *odata_type;       
    RedfishCS_char_Array      *AssignedPrivileges;    // The Redfish privileges for
                                                     // this role.
    RedfishCS_char            *Description;      
    RedfishCS_char            *Id;               
    RedfishCS_bool            *IsPredefined;         // An indication of whether the
                                                     // role is a Redfish-predefined
                                                     // role rather than a custom
                                                     // Redfish role.
    RedfishCS_char            *Name;             
    RedfishResource_Oem_CS    *Oem;                  // The OEM extension property.
    RedfishCS_char_Array      *OemPrivileges;        // The OEM privileges for this
                                                     // role.
} RedfishRole_V1_0_7_Role_CS;

RedfishCS_status
Json_Role_V1_0_7_To_CS (char *JsonRawText, RedfishRole_V1_0_7_Role_CS **ReturnedCS);

RedfishCS_status
CS_To_Role_V1_0_7_JSON (RedfishRole_V1_0_7_Role_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyRole_V1_0_7_CS (RedfishRole_V1_0_7_Role_CS *CSPtr);

RedfishCS_status
DestroyRole_V1_0_7_Json (RedfishCS_char *JsonText);

#endif
