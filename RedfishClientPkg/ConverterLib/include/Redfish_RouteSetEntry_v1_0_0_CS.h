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

#ifndef RedfishRoutesetentry_V1_0_0_CSTRUCT_H_
#define RedfishRoutesetentry_V1_0_0_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

typedef struct _RedfishRouteSetEntry_V1_0_0_Actions_CS RedfishRouteSetEntry_V1_0_0_Actions_CS;
typedef struct _RedfishRouteSetEntry_V1_0_0_OemActions_CS RedfishRouteSetEntry_V1_0_0_OemActions_CS;
typedef struct _RedfishRouteSetEntry_V1_0_0_RouteSetEntry_CS RedfishRouteSetEntry_V1_0_0_RouteSetEntry_CS;
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
// The available actions for this Resource.
//
typedef struct _RedfishRouteSetEntry_V1_0_0_Actions_CS {
    RedfishRouteSetEntry_V1_0_0_OemActions_CS    *Oem;    // The available OEM-specific
                                                         // actions for this Resource.
} RedfishRouteSetEntry_V1_0_0_Actions_CS;

//
// The available OEM-specific actions for this Resource.
//
typedef struct _RedfishRouteSetEntry_V1_0_0_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishRouteSetEntry_V1_0_0_OemActions_CS;

//
// The RouteSetEntry schema contains the information about a route.  It is part of
// a larger set that contains possible routes for a particular route entry.
//
typedef struct _RedfishRouteSetEntry_V1_0_0_RouteSetEntry_CS {
    RedfishCS_Header                          Header;
    RedfishCS_char                            *odata_context;  
    RedfishCS_char                            *odata_etag;     
    RedfishCS_char                            *odata_id;       
    RedfishCS_char                            *odata_type;     
    RedfishRouteSetEntry_V1_0_0_Actions_CS    *Actions;            // The available actions for this
                                                                   // Resource.
    RedfishCS_char                            *Description;    
    RedfishCS_int64                           *EgressIdentifier;    // The egress interface
                                                                   // identifier.
    RedfishCS_int64                           *HopCount;           // The number of hops.
    RedfishCS_char                            *Id;             
    RedfishCS_char                            *Name;           
    RedfishResource_Oem_CS                    *Oem;                // The OEM extension property.
    RedfishCS_int64                           *VCAction;           // The Virtual Channel Action
                                                                   // index.
    RedfishCS_bool                            *Valid;              // An indication of whether the
                                                                   // entry is valid.
} RedfishRouteSetEntry_V1_0_0_RouteSetEntry_CS;

RedfishCS_status
Json_RouteSetEntry_V1_0_0_To_CS (char *JsonRawText, RedfishRouteSetEntry_V1_0_0_RouteSetEntry_CS **ReturnedCS);

RedfishCS_status
CS_To_RouteSetEntry_V1_0_0_JSON (RedfishRouteSetEntry_V1_0_0_RouteSetEntry_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyRouteSetEntry_V1_0_0_CS (RedfishRouteSetEntry_V1_0_0_RouteSetEntry_CS *CSPtr);

RedfishCS_status
DestroyRouteSetEntry_V1_0_0_Json (RedfishCS_char *JsonText);

#endif
