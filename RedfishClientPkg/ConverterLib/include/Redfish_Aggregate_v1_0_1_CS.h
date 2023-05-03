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

#ifndef RedfishAggregate_V1_0_1_CSTRUCT_H_
#define RedfishAggregate_V1_0_1_CSTRUCT_H_

#include "RedfishCsCommon.h"

typedef struct _RedfishAggregate_V1_0_1_Actions_CS RedfishAggregate_V1_0_1_Actions_CS;
typedef struct _RedfishAggregate_V1_0_1_AddElements_CS RedfishAggregate_V1_0_1_AddElements_CS;
typedef struct _RedfishAggregate_V1_0_1_Aggregate_CS RedfishAggregate_V1_0_1_Aggregate_CS;
typedef struct _RedfishAggregate_V1_0_1_OemActions_CS RedfishAggregate_V1_0_1_OemActions_CS;
typedef struct _RedfishAggregate_V1_0_1_RemoveElements_CS RedfishAggregate_V1_0_1_RemoveElements_CS;
typedef struct _RedfishAggregate_V1_0_1_Reset_CS RedfishAggregate_V1_0_1_Reset_CS;
typedef struct _RedfishAggregate_V1_0_1_SetDefaultBootOrder_CS RedfishAggregate_V1_0_1_SetDefaultBootOrder_CS;
#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

//
// The available actions for this resource.
//
typedef struct _RedfishAggregate_V1_0_1_Actions_CS {
    RedfishAggregate_V1_0_1_AddElements_CS            *Aggregate_AddElements;       
    RedfishAggregate_V1_0_1_RemoveElements_CS         *Aggregate_RemoveElements;    
    RedfishAggregate_V1_0_1_Reset_CS                  *Aggregate_Reset;             
    RedfishAggregate_V1_0_1_SetDefaultBootOrder_CS    *Aggregate_SetDefaultBootOrder;
    RedfishAggregate_V1_0_1_OemActions_CS             *Oem;                             // The available OEM-specific
                                                                                        // actions for this resource.
} RedfishAggregate_V1_0_1_Actions_CS;

//
// This action is used to add one or more resources to the aggregate.
//
typedef struct _RedfishAggregate_V1_0_1_AddElements_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishAggregate_V1_0_1_AddElements_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishAggregate_V1_0_1_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishAggregate_V1_0_1_OemActions_CS;

//
// This action is used to remove one or more resources from the aggregate.
//
typedef struct _RedfishAggregate_V1_0_1_RemoveElements_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishAggregate_V1_0_1_RemoveElements_CS;

//
// This action is used to reset a collection of resources.  For example, this
// could be an aggregate or a list of computer systems.
//
typedef struct _RedfishAggregate_V1_0_1_Reset_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishAggregate_V1_0_1_Reset_CS;

//
// This action is used to restore the boot order to the default state for the
// computer systems that are members of this aggregate.
//
typedef struct _RedfishAggregate_V1_0_1_SetDefaultBootOrder_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishAggregate_V1_0_1_SetDefaultBootOrder_CS;

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
// The Aggregate schema describes a grouping method for an aggregation service.
// Aggregates are formal groups of resources that are more persistent than ad hoc
// groupings.
//
typedef struct _RedfishAggregate_V1_0_1_Aggregate_CS {
    RedfishCS_Header                      Header;
    RedfishCS_char                        *odata_context;     
    RedfishCS_char                        *odata_etag;        
    RedfishCS_char                        *odata_id;          
    RedfishCS_char                        *odata_type;        
    RedfishAggregate_V1_0_1_Actions_CS    *Actions;               // The available actions for this
                                                                  // resource.
    RedfishCS_char                        *Description;       
    RedfishCS_Link                        Elements;               // The elements of this
                                                                  // aggregate.
    RedfishCS_int64                       *Elementsodata_count;
    RedfishCS_int64                       *ElementsCount;         // The number of entries in the
                                                                  // Elements array.
    RedfishCS_char                        *Id;                
    RedfishCS_char                        *Name;              
    RedfishResource_Oem_CS                *Oem;                   // The OEM extension property.
} RedfishAggregate_V1_0_1_Aggregate_CS;

RedfishCS_status
Json_Aggregate_V1_0_1_To_CS (char *JsonRawText, RedfishAggregate_V1_0_1_Aggregate_CS **ReturnedCS);

RedfishCS_status
CS_To_Aggregate_V1_0_1_JSON (RedfishAggregate_V1_0_1_Aggregate_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyAggregate_V1_0_1_CS (RedfishAggregate_V1_0_1_Aggregate_CS *CSPtr);

RedfishCS_status
DestroyAggregate_V1_0_1_Json (RedfishCS_char *JsonText);

#endif
