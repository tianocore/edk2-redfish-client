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

#ifndef RedfishSession_V1_0_6_CSTRUCT_H_
#define RedfishSession_V1_0_6_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

typedef struct _RedfishSession_V1_0_6_Session_CS RedfishSession_V1_0_6_Session_CS;
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
// The Session Resource describes a single connection (session) between a client
// and a Redfish Service instance.
//
typedef struct _RedfishSession_V1_0_6_Session_CS {
    RedfishCS_Header          Header;
    RedfishCS_char            *odata_context;
    RedfishCS_char            *odata_etag;  
    RedfishCS_char            *odata_id;    
    RedfishCS_char            *odata_type;  
    RedfishCS_char            *Description; 
    RedfishCS_char            *Id;          
    RedfishCS_char            *Name;        
    RedfishResource_Oem_CS    *Oem;             // The OEM extension property.
    RedfishCS_char            *Password;        // The password for this session.
                                                // The value is `null` in
                                                // responses.
    RedfishCS_char            *UserName;        // The UserName for the account
                                                // for this session.
} RedfishSession_V1_0_6_Session_CS;

RedfishCS_status
Json_Session_V1_0_6_To_CS (char *JsonRawText, RedfishSession_V1_0_6_Session_CS **ReturnedCS);

RedfishCS_status
CS_To_Session_V1_0_6_JSON (RedfishSession_V1_0_6_Session_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroySession_V1_0_6_CS (RedfishSession_V1_0_6_Session_CS *CSPtr);

RedfishCS_status
DestroySession_V1_0_6_Json (RedfishCS_char *JsonText);

#endif
