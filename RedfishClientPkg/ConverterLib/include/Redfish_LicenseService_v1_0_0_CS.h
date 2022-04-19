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

#ifndef RedfishLicenseservice_V1_0_0_CSTRUCT_H_
#define RedfishLicenseservice_V1_0_0_CSTRUCT_H_

#include "RedfishCsCommon.h"

typedef struct _RedfishLicenseService_V1_0_0_Actions_CS RedfishLicenseService_V1_0_0_Actions_CS;
typedef struct _RedfishLicenseService_V1_0_0_Install_CS RedfishLicenseService_V1_0_0_Install_CS;
typedef struct _RedfishLicenseService_V1_0_0_LicenseService_CS RedfishLicenseService_V1_0_0_LicenseService_CS;
typedef struct _RedfishLicenseService_V1_0_0_OemActions_CS RedfishLicenseService_V1_0_0_OemActions_CS;
#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

//
// The available actions for this resource.
//
typedef struct _RedfishLicenseService_V1_0_0_Actions_CS {
    RedfishLicenseService_V1_0_0_Install_CS       *LicenseService_Install;
    RedfishLicenseService_V1_0_0_OemActions_CS    *Oem;                      // The available OEM-specific
                                                                             // actions for this resource.
} RedfishLicenseService_V1_0_0_Actions_CS;

//
// This action installs one or more licenses from a remote file.
//
typedef struct _RedfishLicenseService_V1_0_0_Install_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishLicenseService_V1_0_0_Install_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishLicenseService_V1_0_0_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishLicenseService_V1_0_0_OemActions_CS;

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
// The LicenseService schema describes the license service and the properties for
// the service itself with a link to the collection of licenses.  The license
// service also provides methods for installing licenses in a Redfish service.
//
typedef struct _RedfishLicenseService_V1_0_0_LicenseService_CS {
    RedfishCS_Header                           Header;
    RedfishCS_char                             *odata_context;              
    RedfishCS_char                             *odata_etag;                 
    RedfishCS_char                             *odata_id;                   
    RedfishCS_char                             *odata_type;                 
    RedfishLicenseService_V1_0_0_Actions_CS    *Actions;                        // The available actions for this
                                                                                // resource.
    RedfishCS_char                             *Description;                
    RedfishCS_char                             *Id;                         
    RedfishCS_int64                            *LicenseExpirationWarningDays;    // The number of days prior to a
                                                                                // license expiration that a
                                                                                // warning message is sent.  A
                                                                                // value of zero indicates no
                                                                                // warning message is sent.
    RedfishCS_Link                             Licenses;                        // The link to the collection of
                                                                                // licenses.
    RedfishCS_char                             *Name;                       
    RedfishResource_Oem_CS                     *Oem;                            // The OEM extension property.
    RedfishCS_bool                             *ServiceEnabled;                 // An indication of whether this
                                                                                // service is enabled.
} RedfishLicenseService_V1_0_0_LicenseService_CS;

RedfishCS_status
Json_LicenseService_V1_0_0_To_CS (char *JsonRawText, RedfishLicenseService_V1_0_0_LicenseService_CS **ReturnedCS);

RedfishCS_status
CS_To_LicenseService_V1_0_0_JSON (RedfishLicenseService_V1_0_0_LicenseService_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyLicenseService_V1_0_0_CS (RedfishLicenseService_V1_0_0_LicenseService_CS *CSPtr);

RedfishCS_status
DestroyLicenseService_V1_0_0_Json (RedfishCS_char *JsonText);

#endif
