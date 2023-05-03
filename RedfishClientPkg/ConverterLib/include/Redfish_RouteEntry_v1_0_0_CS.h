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

#ifndef RedfishRouteentry_V1_0_0_CSTRUCT_H_
#define RedfishRouteentry_V1_0_0_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

typedef struct _RedfishRouteEntry_V1_0_0_Actions_CS RedfishRouteEntry_V1_0_0_Actions_CS;
typedef struct _RedfishRouteEntry_V1_0_0_OemActions_CS RedfishRouteEntry_V1_0_0_OemActions_CS;
typedef struct _RedfishRouteEntry_V1_0_0_RouteEntry_CS RedfishRouteEntry_V1_0_0_RouteEntry_CS;
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
typedef struct _RedfishRouteEntry_V1_0_0_Actions_CS {
    RedfishRouteEntry_V1_0_0_OemActions_CS    *Oem;    // The available OEM-specific
                                                      // actions for this Resource.
} RedfishRouteEntry_V1_0_0_Actions_CS;

//
// The available OEM-specific actions for this Resource.
//
typedef struct _RedfishRouteEntry_V1_0_0_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishRouteEntry_V1_0_0_OemActions_CS;

//
// The RouteEntry schema describes the content of route entry rows.  Each route
// entry contains route sets that list the possible routes for the route entry.
//
typedef struct _RedfishRouteEntry_V1_0_0_RouteEntry_CS {
    RedfishCS_Header                       Header;
    RedfishCS_char                         *odata_context; 
    RedfishCS_char                         *odata_etag;    
    RedfishCS_char                         *odata_id;      
    RedfishCS_char                         *odata_type;    
    RedfishRouteEntry_V1_0_0_Actions_CS    *Actions;           // The available actions for this
                                                               // Resource.
    RedfishCS_char                         *Description;   
    RedfishCS_char                         *Id;            
    RedfishCS_int64                        *MinimumHopCount;    // The minimum number of hops.
    RedfishCS_char                         *Name;          
    RedfishResource_Oem_CS                 *Oem;               // The OEM extension property.
    RedfishCS_char                         *RawEntryHex;       // The raw data of route entry
                                                               // rows.
    RedfishCS_Link                         RouteSet;           // The link to the collection of
                                                               // route set entries associated
                                                               // with this route.
} RedfishRouteEntry_V1_0_0_RouteEntry_CS;

RedfishCS_status
Json_RouteEntry_V1_0_0_To_CS (char *JsonRawText, RedfishRouteEntry_V1_0_0_RouteEntry_CS **ReturnedCS);

RedfishCS_status
CS_To_RouteEntry_V1_0_0_JSON (RedfishRouteEntry_V1_0_0_RouteEntry_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyRouteEntry_V1_0_0_CS (RedfishRouteEntry_V1_0_0_RouteEntry_CS *CSPtr);

RedfishCS_status
DestroyRouteEntry_V1_0_0_Json (RedfishCS_char *JsonText);

#endif
