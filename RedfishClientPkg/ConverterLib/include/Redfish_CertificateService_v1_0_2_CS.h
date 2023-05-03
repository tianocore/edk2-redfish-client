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

#ifndef RedfishCertificateservice_V1_0_2_CSTRUCT_H_
#define RedfishCertificateservice_V1_0_2_CSTRUCT_H_

#include "RedfishCsCommon.h"

typedef struct _RedfishCertificateService_V1_0_2_Actions_CS RedfishCertificateService_V1_0_2_Actions_CS;
typedef struct _RedfishCertificateService_V1_0_2_CertificateService_CS RedfishCertificateService_V1_0_2_CertificateService_CS;
typedef struct _RedfishCertificateService_V1_0_2_GenerateCSR_CS RedfishCertificateService_V1_0_2_GenerateCSR_CS;
typedef struct _RedfishCertificateService_V1_0_2_GenerateCSRResponse_CS RedfishCertificateService_V1_0_2_GenerateCSRResponse_CS;
typedef struct _RedfishCertificateService_V1_0_2_OemActions_CS RedfishCertificateService_V1_0_2_OemActions_CS;
typedef struct _RedfishCertificateService_V1_0_2_ReplaceCertificate_CS RedfishCertificateService_V1_0_2_ReplaceCertificate_CS;
#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

//
// The available actions for this Resource.
//
typedef struct _RedfishCertificateService_V1_0_2_Actions_CS {
    RedfishCertificateService_V1_0_2_GenerateCSR_CS           *CertificateService_GenerateCSR;      
    RedfishCertificateService_V1_0_2_ReplaceCertificate_CS    *CertificateService_ReplaceCertificate;
    RedfishCertificateService_V1_0_2_OemActions_CS            *Oem;                                     // The available OEM-specific
                                                                                                        // actions for this Resource.
} RedfishCertificateService_V1_0_2_Actions_CS;

//
// This action makes a certificate signing request.
//
typedef struct _RedfishCertificateService_V1_0_2_GenerateCSR_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishCertificateService_V1_0_2_GenerateCSR_CS;

//
// The response body for the GenerateCSR action.
//
typedef struct _RedfishCertificateService_V1_0_2_GenerateCSRResponse_CS {
    RedfishCS_char    *CSRString;              // The string for the certificate
                                               // signing request.
    RedfishCS_Link    CertificateCollection;    // The link to the Certificate
                                               // Resource Collection where the
                                               // certificate is installed.
} RedfishCertificateService_V1_0_2_GenerateCSRResponse_CS;

//
// The available OEM-specific actions for this Resource.
//
typedef struct _RedfishCertificateService_V1_0_2_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishCertificateService_V1_0_2_OemActions_CS;

//
// This action replaces a certificate.
//
typedef struct _RedfishCertificateService_V1_0_2_ReplaceCertificate_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishCertificateService_V1_0_2_ReplaceCertificate_CS;

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
// The CertificateService schema describes a Certificate Service that represents
// the actions available to manage certificates and links to the certificates.
//
typedef struct _RedfishCertificateService_V1_0_2_CertificateService_CS {
    RedfishCS_Header                               Header;
    RedfishCS_char                                 *odata_context;     
    RedfishCS_char                                 *odata_etag;        
    RedfishCS_char                                 *odata_id;          
    RedfishCS_char                                 *odata_type;        
    RedfishCertificateService_V1_0_2_Actions_CS    *Actions;               // The available actions for this
                                                                           // Resource.
    RedfishCS_Link                                 CertificateLocations;    // The information about the
                                                                           // location of certificates.
    RedfishCS_char                                 *Description;       
    RedfishCS_char                                 *Id;                
    RedfishCS_char                                 *Name;              
    RedfishResource_Oem_CS                         *Oem;                   // The OEM extension property.
} RedfishCertificateService_V1_0_2_CertificateService_CS;

RedfishCS_status
Json_CertificateService_V1_0_2_To_CS (char *JsonRawText, RedfishCertificateService_V1_0_2_CertificateService_CS **ReturnedCS);

RedfishCS_status
CS_To_CertificateService_V1_0_2_JSON (RedfishCertificateService_V1_0_2_CertificateService_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyCertificateService_V1_0_2_CS (RedfishCertificateService_V1_0_2_CertificateService_CS *CSPtr);

RedfishCS_status
DestroyCertificateService_V1_0_2_Json (RedfishCS_char *JsonText);

#endif
