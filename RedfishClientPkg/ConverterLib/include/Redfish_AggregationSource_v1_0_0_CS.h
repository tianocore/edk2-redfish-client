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

#ifndef RedfishAggregationsource_V1_0_0_CSTRUCT_H_
#define RedfishAggregationsource_V1_0_0_CSTRUCT_H_

#include "RedfishCsCommon.h"

typedef struct _RedfishAggregationSource_V1_0_0_Actions_CS RedfishAggregationSource_V1_0_0_Actions_CS;
typedef struct _RedfishAggregationSource_V1_0_0_AggregationSource_CS RedfishAggregationSource_V1_0_0_AggregationSource_CS;
typedef struct _RedfishAggregationSource_V1_0_0_Links_CS RedfishAggregationSource_V1_0_0_Links_CS;
typedef struct _RedfishAggregationSource_V1_0_0_OemActions_CS RedfishAggregationSource_V1_0_0_OemActions_CS;
#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

//
// The available actions for this resource.
//
typedef struct _RedfishAggregationSource_V1_0_0_Actions_CS {
    RedfishAggregationSource_V1_0_0_OemActions_CS    *Oem;    // The available OEM-specific
                                                             // actions for this resource.
} RedfishAggregationSource_V1_0_0_Actions_CS;

//
// The links to other resources that are related to this resource.
//
typedef struct _RedfishAggregationSource_V1_0_0_Links_CS {
    RedfishCS_Link            ConnectionMethod;                // An array of links to the
                                                               // connection methods used to
                                                               // contact this aggregation
                                                               // source.
    RedfishResource_Oem_CS    *Oem;                            // The OEM extension property.
    RedfishCS_Link            ResourcesAccessed;               // An array links to the
                                                               // resources added to the service
                                                               // through this aggregation
                                                               // source.  It is recommended
                                                               // that this be the minimal
                                                               // number of properties needed to
                                                               // find the resources that would
                                                               // be lost when the aggregation
                                                               // source is deleted.
    RedfishCS_int64           *ResourcesAccessedodata_count;
} RedfishAggregationSource_V1_0_0_Links_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishAggregationSource_V1_0_0_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishAggregationSource_V1_0_0_OemActions_CS;

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
// The AggregationSource schema is used to represent the source of information for
// a subset of the resources provided by a Redfish service.  It can be thought of
// as a provider of information.  As such, most such interfaces have requirements
// to support the gathering of information like address and account used to access
// the information.
//
typedef struct _RedfishAggregationSource_V1_0_0_AggregationSource_CS {
    RedfishCS_Header                              Header;
    RedfishCS_char                                *odata_context;
    RedfishCS_char                                *odata_etag;  
    RedfishCS_char                                *odata_id;    
    RedfishCS_char                                *odata_type;  
    RedfishAggregationSource_V1_0_0_Actions_CS    *Actions;         // The available actions for this
                                                                    // resource.
    RedfishCS_char                                *Description; 
    RedfishCS_char                                *HostName;        // The URI of the system to be
                                                                    // accessed.
    RedfishCS_char                                *Id;          
    RedfishAggregationSource_V1_0_0_Links_CS      *Links;           // The links to other resources
                                                                    // that are related to this
                                                                    // resource.
    RedfishCS_char                                *Name;        
    RedfishResource_Oem_CS                        *Oem;             // The OEM extension property.
    RedfishCS_char                                *Password;        // The password for accessing the
                                                                    // aggregation source.  The value
                                                                    // is `null` in responses.
    RedfishCS_char                                *UserName;        // The user name for accessing
                                                                    // the aggregation source.
} RedfishAggregationSource_V1_0_0_AggregationSource_CS;

RedfishCS_status
Json_AggregationSource_V1_0_0_To_CS (char *JsonRawText, RedfishAggregationSource_V1_0_0_AggregationSource_CS **ReturnedCS);

RedfishCS_status
CS_To_AggregationSource_V1_0_0_JSON (RedfishAggregationSource_V1_0_0_AggregationSource_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyAggregationSource_V1_0_0_CS (RedfishAggregationSource_V1_0_0_AggregationSource_CS *CSPtr);

RedfishCS_status
DestroyAggregationSource_V1_0_0_Json (RedfishCS_char *JsonText);

#endif
