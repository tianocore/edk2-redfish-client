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

#ifndef RedfishCertificatelocations_V1_0_2_CSTRUCT_H_
#define RedfishCertificatelocations_V1_0_2_CSTRUCT_H_

#include "RedfishCsCommon.h"

typedef struct _RedfishCertificateLocations_V1_0_2_Actions_CS RedfishCertificateLocations_V1_0_2_Actions_CS;
typedef struct _RedfishCertificateLocations_V1_0_2_CertificateLocations_CS RedfishCertificateLocations_V1_0_2_CertificateLocations_CS;
typedef struct _RedfishCertificateLocations_V1_0_2_Links_CS RedfishCertificateLocations_V1_0_2_Links_CS;
typedef struct _RedfishCertificateLocations_V1_0_2_OemActions_CS RedfishCertificateLocations_V1_0_2_OemActions_CS;
#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

//
// The available actions for this Resource.
//
typedef struct _RedfishCertificateLocations_V1_0_2_Actions_CS {
    RedfishCertificateLocations_V1_0_2_OemActions_CS    *Oem;    // The available OEM-specific
                                                                // actions for this Resource.
} RedfishCertificateLocations_V1_0_2_Actions_CS;

//
// The links to other Resources that are related to this Resource.
//
typedef struct _RedfishCertificateLocations_V1_0_2_Links_CS {
    RedfishCS_Link            Certificates;               // An array of links to the
                                                          // certificates installed on this
                                                          // service.
    RedfishCS_int64           *Certificatesodata_count;
    RedfishResource_Oem_CS    *Oem;                       // The OEM extension property.
} RedfishCertificateLocations_V1_0_2_Links_CS;

//
// The available OEM-specific actions for this Resource.
//
typedef struct _RedfishCertificateLocations_V1_0_2_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishCertificateLocations_V1_0_2_OemActions_CS;

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
// The CertificateLocations schema describes a Resource that an administrator can
// use in order to locate all certificates installed on a given service.
//
typedef struct _RedfishCertificateLocations_V1_0_2_CertificateLocations_CS {
    RedfishCS_Header                                 Header;
    RedfishCS_char                                   *odata_context;
    RedfishCS_char                                   *odata_etag;  
    RedfishCS_char                                   *odata_id;    
    RedfishCS_char                                   *odata_type;  
    RedfishCertificateLocations_V1_0_2_Actions_CS    *Actions;         // The available actions for this
                                                                       // Resource.
    RedfishCS_char                                   *Description; 
    RedfishCS_char                                   *Id;          
    RedfishCertificateLocations_V1_0_2_Links_CS      *Links;           // The links to other Resources
                                                                       // that are related to this
                                                                       // Resource.
    RedfishCS_char                                   *Name;        
    RedfishResource_Oem_CS                           *Oem;             // The OEM extension property.
} RedfishCertificateLocations_V1_0_2_CertificateLocations_CS;

RedfishCS_status
Json_CertificateLocations_V1_0_2_To_CS (char *JsonRawText, RedfishCertificateLocations_V1_0_2_CertificateLocations_CS **ReturnedCS);

RedfishCS_status
CS_To_CertificateLocations_V1_0_2_JSON (RedfishCertificateLocations_V1_0_2_CertificateLocations_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyCertificateLocations_V1_0_2_CS (RedfishCertificateLocations_V1_0_2_CertificateLocations_CS *CSPtr);

RedfishCS_status
DestroyCertificateLocations_V1_0_2_Json (RedfishCS_char *JsonText);

#endif
