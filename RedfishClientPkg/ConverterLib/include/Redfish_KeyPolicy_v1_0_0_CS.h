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

#ifndef RedfishKeypolicy_V1_0_0_CSTRUCT_H_
#define RedfishKeypolicy_V1_0_0_CSTRUCT_H_

#include "RedfishCsCommon.h"

typedef struct _RedfishKeyPolicy_V1_0_0_Actions_CS RedfishKeyPolicy_V1_0_0_Actions_CS;
typedef struct _RedfishKeyPolicy_V1_0_0_KeyPolicy_CS RedfishKeyPolicy_V1_0_0_KeyPolicy_CS;
typedef struct _RedfishKeyPolicy_V1_0_0_NVMeoF_CS RedfishKeyPolicy_V1_0_0_NVMeoF_CS;
typedef struct _RedfishKeyPolicy_V1_0_0_OemActions_CS RedfishKeyPolicy_V1_0_0_OemActions_CS;
#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

//
// The available actions for this resource.
//
typedef struct _RedfishKeyPolicy_V1_0_0_Actions_CS {
    RedfishKeyPolicy_V1_0_0_OemActions_CS    *Oem;    // The available OEM-specific
                                                     // actions for this resource.
} RedfishKeyPolicy_V1_0_0_Actions_CS;

//
// NVMe-oF specific properties.
//
typedef struct _RedfishKeyPolicy_V1_0_0_NVMeoF_CS {
    RedfishCS_char_Array    *CipherSuiteAllowList;           // The cipher suites that this
                                                             // key policy allows.
    RedfishCS_char_Array    *DHGroupAllowList;               // The Diffie-Hellman (DH) groups
                                                             // that this key policy allows.
    RedfishCS_char_Array    *OEMSecurityProtocolAllowList;    // The OEM security protocols
                                                             // that this key policy allows.
    RedfishCS_char_Array    *SecureHashAllowList;            // The secure hash algorithms
                                                             // that this key policy allows.
    RedfishCS_char_Array    *SecurityProtocolAllowList;      // The security protocols that
                                                             // this key policy allows.
    RedfishCS_char_Array    *SecurityTransportAllowList;     // The security transports that
                                                             // this key policy allows.
} RedfishKeyPolicy_V1_0_0_NVMeoF_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishKeyPolicy_V1_0_0_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishKeyPolicy_V1_0_0_OemActions_CS;

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
// The KeyPolicy schema describes settings for how keys are allowed to be used for
// accessing devices or services.
//
typedef struct _RedfishKeyPolicy_V1_0_0_KeyPolicy_CS {
    RedfishCS_Header                      Header;
    RedfishCS_char                        *odata_context;
    RedfishCS_char                        *odata_etag;  
    RedfishCS_char                        *odata_id;    
    RedfishCS_char                        *odata_type;  
    RedfishKeyPolicy_V1_0_0_Actions_CS    *Actions;         // The available actions for this
                                                            // resource.
    RedfishCS_char                        *Description; 
    RedfishCS_char                        *Id;          
    RedfishCS_bool                        *IsDefault;       // Indicates if this is the
                                                            // default key policy.
    RedfishCS_char                        *KeyPolicyType;    // The type of key policy.
    RedfishKeyPolicy_V1_0_0_NVMeoF_CS     *NVMeoF;          // NVMe-oF specific properties.
    RedfishCS_char                        *Name;        
    RedfishResource_Oem_CS                *Oem;             // The OEM extension property.
} RedfishKeyPolicy_V1_0_0_KeyPolicy_CS;

RedfishCS_status
Json_KeyPolicy_V1_0_0_To_CS (char *JsonRawText, RedfishKeyPolicy_V1_0_0_KeyPolicy_CS **ReturnedCS);

RedfishCS_status
CS_To_KeyPolicy_V1_0_0_JSON (RedfishKeyPolicy_V1_0_0_KeyPolicy_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyKeyPolicy_V1_0_0_CS (RedfishKeyPolicy_V1_0_0_KeyPolicy_CS *CSPtr);

RedfishCS_status
DestroyKeyPolicy_V1_0_0_Json (RedfishCS_char *JsonText);

#endif
