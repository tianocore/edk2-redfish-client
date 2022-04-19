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

#ifndef RedfishKeyservice_V1_0_0_CSTRUCT_H_
#define RedfishKeyservice_V1_0_0_CSTRUCT_H_

#include "RedfishCsCommon.h"

typedef struct _RedfishKeyService_V1_0_0_Actions_CS RedfishKeyService_V1_0_0_Actions_CS;
typedef struct _RedfishKeyService_V1_0_0_KeyService_CS RedfishKeyService_V1_0_0_KeyService_CS;
typedef struct _RedfishKeyService_V1_0_0_OemActions_CS RedfishKeyService_V1_0_0_OemActions_CS;
#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

//
// The available actions for this resource.
//
typedef struct _RedfishKeyService_V1_0_0_Actions_CS {
    RedfishKeyService_V1_0_0_OemActions_CS    *Oem;    // The available OEM-specific
                                                      // actions for this resource.
} RedfishKeyService_V1_0_0_Actions_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishKeyService_V1_0_0_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishKeyService_V1_0_0_OemActions_CS;

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
// The KeyService schema describes a key service that represents the actions
// available to manage keys.
//
typedef struct _RedfishKeyService_V1_0_0_KeyService_CS {
    RedfishCS_Header                       Header;
    RedfishCS_char                         *odata_context;  
    RedfishCS_char                         *odata_etag;     
    RedfishCS_char                         *odata_id;       
    RedfishCS_char                         *odata_type;     
    RedfishKeyService_V1_0_0_Actions_CS    *Actions;            // The available actions for this
                                                                // resource.
    RedfishCS_char                         *Description;    
    RedfishCS_char                         *Id;             
    RedfishCS_Link                         NVMeoFKeyPolicies;    // The NVMe-oF key policies
                                                                // maintained by this service.
    RedfishCS_Link                         NVMeoFSecrets;       // The NVMe-oF keys maintained by
                                                                // this service.
    RedfishCS_char                         *Name;           
    RedfishResource_Oem_CS                 *Oem;                // The OEM extension property.
} RedfishKeyService_V1_0_0_KeyService_CS;

RedfishCS_status
Json_KeyService_V1_0_0_To_CS (char *JsonRawText, RedfishKeyService_V1_0_0_KeyService_CS **ReturnedCS);

RedfishCS_status
CS_To_KeyService_V1_0_0_JSON (RedfishKeyService_V1_0_0_KeyService_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyKeyService_V1_0_0_CS (RedfishKeyService_V1_0_0_KeyService_CS *CSPtr);

RedfishCS_status
DestroyKeyService_V1_0_0_Json (RedfishCS_char *JsonText);

#endif
