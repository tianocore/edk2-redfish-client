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

#ifndef RedfishConnectionmethod_V1_0_0_CSTRUCT_H_
#define RedfishConnectionmethod_V1_0_0_CSTRUCT_H_

#include "RedfishCsCommon.h"

typedef struct _RedfishConnectionMethod_V1_0_0_Actions_CS RedfishConnectionMethod_V1_0_0_Actions_CS;
typedef struct _RedfishConnectionMethod_V1_0_0_ConnectionMethod_CS RedfishConnectionMethod_V1_0_0_ConnectionMethod_CS;
typedef struct _RedfishConnectionMethod_V1_0_0_Links_CS RedfishConnectionMethod_V1_0_0_Links_CS;
typedef struct _RedfishConnectionMethod_V1_0_0_OemActions_CS RedfishConnectionMethod_V1_0_0_OemActions_CS;
#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

//
// The available actions for this resource.
//
typedef struct _RedfishConnectionMethod_V1_0_0_Actions_CS {
    RedfishConnectionMethod_V1_0_0_OemActions_CS    *Oem;    // The available OEM-specific
                                                            // actions for this resource.
} RedfishConnectionMethod_V1_0_0_Actions_CS;

//
// The links to other resources that are related to this resource.
//
typedef struct _RedfishConnectionMethod_V1_0_0_Links_CS {
    RedfishCS_Link            AggregationSources;               // An array of links to the
                                                                // access points using this
                                                                // connection method.
    RedfishCS_int64           *AggregationSourcesodata_count;
    RedfishResource_Oem_CS    *Oem;                             // The OEM extension property.
} RedfishConnectionMethod_V1_0_0_Links_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishConnectionMethod_V1_0_0_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishConnectionMethod_V1_0_0_OemActions_CS;

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
// The ConnectionMethod schema describes the protocol, provider, or other method
// used to communicate to a given access point for a Redfish aggregation service.
//
typedef struct _RedfishConnectionMethod_V1_0_0_ConnectionMethod_CS {
    RedfishCS_Header                             Header;
    RedfishCS_char                               *odata_context;         
    RedfishCS_char                               *odata_etag;            
    RedfishCS_char                               *odata_id;              
    RedfishCS_char                               *odata_type;            
    RedfishConnectionMethod_V1_0_0_Actions_CS    *Actions;                   // The available actions for this
                                                                             // resource.
    RedfishCS_char                               *ConnectionMethodType;      // The type of connection method.
    RedfishCS_char                               *ConnectionMethodVariant;    // The variant of connection
                                                                             // method.
    RedfishCS_char                               *Description;           
    RedfishCS_char                               *Id;                    
    RedfishConnectionMethod_V1_0_0_Links_CS      *Links;                     // The links to other resources
                                                                             // that are related to this
                                                                             // resource.
    RedfishCS_char                               *Name;                  
    RedfishResource_Oem_CS                       *Oem;                       // The OEM extension property.
} RedfishConnectionMethod_V1_0_0_ConnectionMethod_CS;

RedfishCS_status
Json_ConnectionMethod_V1_0_0_To_CS (char *JsonRawText, RedfishConnectionMethod_V1_0_0_ConnectionMethod_CS **ReturnedCS);

RedfishCS_status
CS_To_ConnectionMethod_V1_0_0_JSON (RedfishConnectionMethod_V1_0_0_ConnectionMethod_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyConnectionMethod_V1_0_0_CS (RedfishConnectionMethod_V1_0_0_ConnectionMethod_CS *CSPtr);

RedfishCS_status
DestroyConnectionMethod_V1_0_0_Json (RedfishCS_char *JsonText);

#endif
