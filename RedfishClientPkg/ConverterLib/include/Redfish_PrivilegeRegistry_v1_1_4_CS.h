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

#ifndef RedfishPrivilegeregistry_V1_1_4_CSTRUCT_H_
#define RedfishPrivilegeregistry_V1_1_4_CSTRUCT_H_

#include "RedfishCsCommon.h"

typedef struct _RedfishPrivilegeRegistry_V1_1_4_Target_PrivilegeMap_Array_CS RedfishPrivilegeRegistry_V1_1_4_Target_PrivilegeMap_Array_CS;
typedef struct _RedfishPrivilegeRegistry_V1_1_4_OperationPrivilege_Array_CS RedfishPrivilegeRegistry_V1_1_4_OperationPrivilege_Array_CS;
typedef struct _RedfishPrivilegeRegistry_V1_1_4_Mapping_Array_CS RedfishPrivilegeRegistry_V1_1_4_Mapping_Array_CS;
typedef struct _RedfishPrivilegeRegistry_V1_1_4_Actions_CS RedfishPrivilegeRegistry_V1_1_4_Actions_CS;
typedef struct _RedfishPrivilegeRegistry_V1_1_4_Mapping_CS RedfishPrivilegeRegistry_V1_1_4_Mapping_CS;
typedef struct _RedfishPrivilegeRegistry_V1_1_4_OemActions_CS RedfishPrivilegeRegistry_V1_1_4_OemActions_CS;
typedef struct _RedfishPrivilegeRegistry_V1_1_4_OperationMap_CS RedfishPrivilegeRegistry_V1_1_4_OperationMap_CS;
typedef struct _RedfishPrivilegeRegistry_V1_1_4_OperationPrivilege_CS RedfishPrivilegeRegistry_V1_1_4_OperationPrivilege_CS;
typedef struct _RedfishPrivilegeRegistry_V1_1_4_PrivilegeRegistry_CS RedfishPrivilegeRegistry_V1_1_4_PrivilegeRegistry_CS;
typedef struct _RedfishPrivilegeRegistry_V1_1_4_Target_PrivilegeMap_CS RedfishPrivilegeRegistry_V1_1_4_Target_PrivilegeMap_CS;
#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

//
// The available actions for this Resource.
//
typedef struct _RedfishPrivilegeRegistry_V1_1_4_Actions_CS {
    RedfishPrivilegeRegistry_V1_1_4_OemActions_CS    *Oem;    // The available OEM-specific
                                                             // actions for this Resource.
} RedfishPrivilegeRegistry_V1_1_4_Actions_CS;

//
// The mapping between a Resource type and the relevant privileges that accesses
// the Resource.
//
typedef struct _RedfishPrivilegeRegistry_V1_1_4_Mapping_CS {
    RedfishCS_char                                                  *Entity;                 // The Resource name, such as
                                                                                             // `Manager`.
    RedfishPrivilegeRegistry_V1_1_4_OperationMap_CS                 *OperationMap;           // List mapping between HTTP
                                                                                             // methods and privilege required
                                                                                             // for the Resource.
    RedfishPrivilegeRegistry_V1_1_4_Target_PrivilegeMap_Array_CS    *PropertyOverrides;      // The privilege overrides of
                                                                                             // properties within a Resource.
    RedfishPrivilegeRegistry_V1_1_4_Target_PrivilegeMap_Array_CS    *ResourceURIOverrides;    // The privilege overrides of
                                                                                             // Resource URIs.
    RedfishPrivilegeRegistry_V1_1_4_Target_PrivilegeMap_Array_CS    *SubordinateOverrides;    // The privilege overrides of the
                                                                                             // subordinate Resource.
} RedfishPrivilegeRegistry_V1_1_4_Mapping_CS;

//
// The available OEM-specific actions for this Resource.
//
typedef struct _RedfishPrivilegeRegistry_V1_1_4_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishPrivilegeRegistry_V1_1_4_OemActions_CS;

//
// The specific privileges required to complete a set of HTTP operations.
//
typedef struct _RedfishPrivilegeRegistry_V1_1_4_OperationMap_CS {
    RedfishPrivilegeRegistry_V1_1_4_OperationPrivilege_Array_CS    *DELETE;    // The privilege required to
                                                                              // complete an HTTP DELETE
                                                                              // operation.
    RedfishPrivilegeRegistry_V1_1_4_OperationPrivilege_Array_CS    *GET;      // The privilege required to
                                                                              // complete an HTTP GET
                                                                              // operation.
    RedfishPrivilegeRegistry_V1_1_4_OperationPrivilege_Array_CS    *HEAD;     // The privilege required to
                                                                              // complete an HTTP HEAD
                                                                              // operation.
    RedfishPrivilegeRegistry_V1_1_4_OperationPrivilege_Array_CS    *PATCH;    // The privilege required to
                                                                              // complete an HTTP PATCH
                                                                              // operation.
    RedfishPrivilegeRegistry_V1_1_4_OperationPrivilege_Array_CS    *POST;     // The privilege required to
                                                                              // complete an HTTP POST
                                                                              // operation.
    RedfishPrivilegeRegistry_V1_1_4_OperationPrivilege_Array_CS    *PUT;      // The privilege required to
                                                                              // complete an HTTP PUT
                                                                              // operation.
} RedfishPrivilegeRegistry_V1_1_4_OperationMap_CS;

//
// The privileges for a specific HTTP operation.
//
typedef struct _RedfishPrivilegeRegistry_V1_1_4_OperationPrivilege_CS {
    RedfishCS_char_Array    *Privilege;    // An array of privileges that
                                          // are required to complete a
                                          // specific HTTP operation on a
                                          // Resource.
} RedfishPrivilegeRegistry_V1_1_4_OperationPrivilege_CS;

//
// This type describes a mapping between one or more targets and the HTTP
// operations associated with them.
//
typedef struct _RedfishPrivilegeRegistry_V1_1_4_Target_PrivilegeMap_CS {
    RedfishPrivilegeRegistry_V1_1_4_OperationMap_CS    *OperationMap;    // The mapping between the HTTP
                                                                        // operation and the privilege
                                                                        // required to complete the
                                                                        // operation.
    RedfishCS_char_Array                               *Targets;        // The set of URIs, Resource
                                                                        // types, or properties.
} RedfishPrivilegeRegistry_V1_1_4_Target_PrivilegeMap_CS;

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
// The PrivilegeRegistry schema describes the operation-to-privilege mappings.
//
typedef struct _RedfishPrivilegeRegistry_V1_1_4_PrivilegeRegistry_CS {
    RedfishCS_Header                                    Header;
    RedfishCS_char                                      *odata_type;      
    RedfishPrivilegeRegistry_V1_1_4_Actions_CS          *Actions;             // The available actions for this
                                                                              // Resource.
    RedfishCS_char                                      *Description;     
    RedfishCS_char                                      *Id;              
    RedfishPrivilegeRegistry_V1_1_4_Mapping_Array_CS    *Mappings;            // The mappings between entities
                                                                              // and the relevant privileges
                                                                              // that access those entities.
    RedfishCS_char                                      *Name;            
    RedfishCS_char_Array                                *OEMPrivilegesUsed;    // The set of OEM privileges used
                                                                              // in this mapping.
    RedfishResource_Oem_CS                              *Oem;                 // The OEM extension property.
    RedfishCS_char_Array                                *PrivilegesUsed;      // The set of Redfish standard
                                                                              // privileges used in this
                                                                              // mapping.
} RedfishPrivilegeRegistry_V1_1_4_PrivilegeRegistry_CS;

typedef struct _RedfishPrivilegeRegistry_V1_1_4_Target_PrivilegeMap_Array_CS  {
    RedfishPrivilegeRegistry_V1_1_4_Target_PrivilegeMap_Array_CS    *Next;
    RedfishPrivilegeRegistry_V1_1_4_Target_PrivilegeMap_CS    *ArrayValue;
} RedfishPrivilegeRegistry_V1_1_4_Target_PrivilegeMap_Array_CS;

typedef struct _RedfishPrivilegeRegistry_V1_1_4_OperationPrivilege_Array_CS  {
    RedfishPrivilegeRegistry_V1_1_4_OperationPrivilege_Array_CS    *Next;
    RedfishPrivilegeRegistry_V1_1_4_OperationPrivilege_CS    *ArrayValue;
} RedfishPrivilegeRegistry_V1_1_4_OperationPrivilege_Array_CS;

typedef struct _RedfishPrivilegeRegistry_V1_1_4_Mapping_Array_CS  {
    RedfishPrivilegeRegistry_V1_1_4_Mapping_Array_CS    *Next;
    RedfishPrivilegeRegistry_V1_1_4_Mapping_CS    *ArrayValue;
} RedfishPrivilegeRegistry_V1_1_4_Mapping_Array_CS;

RedfishCS_status
Json_PrivilegeRegistry_V1_1_4_To_CS (char *JsonRawText, RedfishPrivilegeRegistry_V1_1_4_PrivilegeRegistry_CS **ReturnedCS);

RedfishCS_status
CS_To_PrivilegeRegistry_V1_1_4_JSON (RedfishPrivilegeRegistry_V1_1_4_PrivilegeRegistry_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyPrivilegeRegistry_V1_1_4_CS (RedfishPrivilegeRegistry_V1_1_4_PrivilegeRegistry_CS *CSPtr);

RedfishCS_status
DestroyPrivilegeRegistry_V1_1_4_Json (RedfishCS_char *JsonText);

#endif
