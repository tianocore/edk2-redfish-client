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

#ifndef RedfishEndpointgroup_V1_3_1_CSTRUCT_H_
#define RedfishEndpointgroup_V1_3_1_CSTRUCT_H_

#include "RedfishCsCommon.h"

typedef struct _RedfishEndpointGroup_V1_3_1_Actions_CS RedfishEndpointGroup_V1_3_1_Actions_CS;
typedef struct _RedfishEndpointGroup_V1_3_1_EndpointGroup_CS RedfishEndpointGroup_V1_3_1_EndpointGroup_CS;
typedef struct _RedfishEndpointGroup_V1_3_1_Links_CS RedfishEndpointGroup_V1_3_1_Links_CS;
typedef struct _RedfishEndpointGroup_V1_3_1_OemActions_CS RedfishEndpointGroup_V1_3_1_OemActions_CS;
#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

//
// The available actions for this resource.
//
typedef struct _RedfishEndpointGroup_V1_3_1_Actions_CS {
    RedfishEndpointGroup_V1_3_1_OemActions_CS    *Oem;    // The available OEM-specific
                                                         // actions for this resource.
} RedfishEndpointGroup_V1_3_1_Actions_CS;

//
// The links to other resources that are related to this resource.
//
typedef struct _RedfishEndpointGroup_V1_3_1_Links_CS {
    RedfishCS_Link            Connections;               // The connections to which this
                                                         // endpoint group belongs.
    RedfishCS_int64           *Connectionsodata_count;
    RedfishCS_Link            Endpoints;                 // The endpoints in this endpoint
                                                         // group.
    RedfishCS_int64           *Endpointsodata_count; 
    RedfishResource_Oem_CS    *Oem;                      // The OEM extension property.
} RedfishEndpointGroup_V1_3_1_Links_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishEndpointGroup_V1_3_1_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishEndpointGroup_V1_3_1_OemActions_CS;

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
// The EndpointGroup schema describes group of endpoints that are managed as a
// unit.
//
typedef struct _RedfishEndpointGroup_V1_3_1_EndpointGroup_CS {
    RedfishCS_Header                          Header;
    RedfishCS_char                            *odata_context;               
    RedfishCS_char                            *odata_etag;                  
    RedfishCS_char                            *odata_id;                    
    RedfishCS_char                            *odata_type;                  
    RedfishCS_char                            *AccessState;                     // The access state for this
                                                                                // group.
    RedfishEndpointGroup_V1_3_1_Actions_CS    *Actions;                         // The available actions for this
                                                                                // resource.
    RedfishCS_char                            *Description;                 
    RedfishCS_Link                            Endpoints;                        // The endpoints in this endpoint
                                                                                // group.
    RedfishCS_int64                           *Endpointsodata_count;        
    RedfishCS_char                            *GroupType;                       // The endpoint group type.
    RedfishCS_char                            *Id;                          
    RedfishCS_Link                            Identifier;                       // The durable name for the
                                                                                // endpoint group.
    RedfishEndpointGroup_V1_3_1_Links_CS      *Links;                           // The links to other resources
                                                                                // that are related to this
                                                                                // resource.
    RedfishCS_char                            *Name;                        
    RedfishResource_Oem_CS                    *Oem;                             // The OEM extension property.
    RedfishCS_bool                            *Preferred;                       // An indication if access to the
                                                                                // resources through the endpoint
                                                                                // group is preferred.
    RedfishCS_int64                           *TargetEndpointGroupIdentifier;    // The SCSI-defined identifier
                                                                                // for this group.
} RedfishEndpointGroup_V1_3_1_EndpointGroup_CS;

RedfishCS_status
Json_EndpointGroup_V1_3_1_To_CS (char *JsonRawText, RedfishEndpointGroup_V1_3_1_EndpointGroup_CS **ReturnedCS);

RedfishCS_status
CS_To_EndpointGroup_V1_3_1_JSON (RedfishEndpointGroup_V1_3_1_EndpointGroup_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyEndpointGroup_V1_3_1_CS (RedfishEndpointGroup_V1_3_1_EndpointGroup_CS *CSPtr);

RedfishCS_status
DestroyEndpointGroup_V1_3_1_Json (RedfishCS_char *JsonText);

#endif
