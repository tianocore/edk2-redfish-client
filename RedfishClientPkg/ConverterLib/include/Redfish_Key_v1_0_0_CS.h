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

#ifndef RedfishKey_V1_0_0_CSTRUCT_H_
#define RedfishKey_V1_0_0_CSTRUCT_H_

#include "RedfishCsCommon.h"

typedef struct _RedfishKey_V1_0_0_Actions_CS RedfishKey_V1_0_0_Actions_CS;
typedef struct _RedfishKey_V1_0_0_Key_CS RedfishKey_V1_0_0_Key_CS;
typedef struct _RedfishKey_V1_0_0_NVMeoF_CS RedfishKey_V1_0_0_NVMeoF_CS;
typedef struct _RedfishKey_V1_0_0_OemActions_CS RedfishKey_V1_0_0_OemActions_CS;
#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

//
// The available actions for this resource.
//
typedef struct _RedfishKey_V1_0_0_Actions_CS {
    RedfishKey_V1_0_0_OemActions_CS    *Oem;    // The available OEM-specific
                                               // actions for this resource.
} RedfishKey_V1_0_0_Actions_CS;

//
// NVMe-oF specific properties.
//
typedef struct _RedfishKey_V1_0_0_NVMeoF_CS {
    RedfishCS_char          *HostKeyId;                 // The identifier of the host key
                                                        // paired with this target key.
    RedfishCS_char          *NQN;                       // The NVMe Qualified Name (NQN)
                                                        // of the host or target
                                                        // subsystem associated with this
                                                        // key.
    RedfishCS_char          *OEMSecurityProtocolType;    // The OEM security protocol that
                                                        // this key uses.
    RedfishCS_char_Array    *SecureHashAllowList;       // The secure hash algorithms
                                                        // allowed with the usage of this
                                                        // key.
    RedfishCS_char          *SecurityProtocolType;      // The security protocol that
                                                        // this key uses.
} RedfishKey_V1_0_0_NVMeoF_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishKey_V1_0_0_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishKey_V1_0_0_OemActions_CS;

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
// The Key schema describes sensitive data for accessing devices or services.
//
typedef struct _RedfishKey_V1_0_0_Key_CS {
    RedfishCS_Header                Header;
    RedfishCS_char                  *odata_context;
    RedfishCS_char                  *odata_etag;  
    RedfishCS_char                  *odata_id;    
    RedfishCS_char                  *odata_type;  
    RedfishKey_V1_0_0_Actions_CS    *Actions;         // The available actions for this
                                                      // resource.
    RedfishCS_char                  *Description; 
    RedfishCS_char                  *Id;          
    RedfishCS_char                  *KeyString;       // The string for the key.
    RedfishCS_char                  *KeyType;         // The format of the key.
    RedfishKey_V1_0_0_NVMeoF_CS     *NVMeoF;          // NVMe-oF specific properties.
    RedfishCS_char                  *Name;        
    RedfishResource_Oem_CS          *Oem;             // The OEM extension property.
} RedfishKey_V1_0_0_Key_CS;

RedfishCS_status
Json_Key_V1_0_0_To_CS (char *JsonRawText, RedfishKey_V1_0_0_Key_CS **ReturnedCS);

RedfishCS_status
CS_To_Key_V1_0_0_JSON (RedfishKey_V1_0_0_Key_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyKey_V1_0_0_CS (RedfishKey_V1_0_0_Key_CS *CSPtr);

RedfishCS_status
DestroyKey_V1_0_0_Json (RedfishCS_char *JsonText);

#endif
