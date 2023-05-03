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

#ifndef RedfishAssembly_V1_0_3_CSTRUCT_H_
#define RedfishAssembly_V1_0_3_CSTRUCT_H_

#include "RedfishCsCommon.h"

typedef struct _RedfishAssembly_V1_0_3_AssemblyData_Array_CS RedfishAssembly_V1_0_3_AssemblyData_Array_CS;
typedef struct _RedfishAssembly_V1_0_3_Actions_CS RedfishAssembly_V1_0_3_Actions_CS;
typedef struct _RedfishAssembly_V1_0_3_Assembly_CS RedfishAssembly_V1_0_3_Assembly_CS;
typedef struct _RedfishAssembly_V1_0_3_AssemblyData_CS RedfishAssembly_V1_0_3_AssemblyData_CS;
typedef struct _RedfishAssembly_V1_0_3_AssemblyDataActions_CS RedfishAssembly_V1_0_3_AssemblyDataActions_CS;
typedef struct _RedfishAssembly_V1_0_3_AssemblyDataOemActions_CS RedfishAssembly_V1_0_3_AssemblyDataOemActions_CS;
typedef struct _RedfishAssembly_V1_0_3_OemActions_CS RedfishAssembly_V1_0_3_OemActions_CS;
#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

//
// The available actions for this Resource.
//
typedef struct _RedfishAssembly_V1_0_3_Actions_CS {
    RedfishAssembly_V1_0_3_OemActions_CS    *Oem;    // The available OEM-specific
                                                    // actions for this Resource.
} RedfishAssembly_V1_0_3_Actions_CS;

typedef struct _RedfishAssembly_V1_0_3_AssemblyData_CS {
    RedfishCS_char                                   *odata_id;             
    RedfishAssembly_V1_0_3_AssemblyDataActions_CS    *Actions;                  // The available actions for this
                                                                                // Resource.
    RedfishCS_char                                   *BinaryDataURI;            // The URI at which to access an
                                                                                // image of the assembly
                                                                                // information.
    RedfishCS_char                                   *Description;              // The description of the
                                                                                // assembly.
    RedfishCS_char                                   *EngineeringChangeLevel;    // The engineering change level
                                                                                // of the assembly.
    RedfishCS_char                                   *MemberId;                 // The identifier for the member
                                                                                // within the collection.
    RedfishCS_char                                   *Model;                    // The model number of the
                                                                                // assembly.
    RedfishCS_char                                   *Name;                     // The name of the assembly.
    RedfishResource_Oem_CS                           *Oem;                      // The OEM extension property.
    RedfishCS_char                                   *PartNumber;               // The part number of the
                                                                                // assembly.
    RedfishCS_char                                   *Producer;                 // The producer or manufacturer
                                                                                // of the assembly.
    RedfishCS_char                                   *ProductionDate;           // The production date of the
                                                                                // assembly.
    RedfishCS_char                                   *SKU;                      // The SKU of the assembly.
    RedfishCS_char                                   *SparePartNumber;          // The spare part number of the
                                                                                // assembly.
    RedfishCS_char                                   *Vendor;                   // The vendor of the assembly.
    RedfishCS_char                                   *Version;                  // The version of the assembly.
} RedfishAssembly_V1_0_3_AssemblyData_CS;

//
// The available actions for this Resource.
//
typedef struct _RedfishAssembly_V1_0_3_AssemblyDataActions_CS {
    RedfishAssembly_V1_0_3_AssemblyDataOemActions_CS    *Oem;    // The available OEM-specific
                                                                // actions for this Resource.
} RedfishAssembly_V1_0_3_AssemblyDataActions_CS;

//
// The available OEM-specific actions for this Resource.
//
typedef struct _RedfishAssembly_V1_0_3_AssemblyDataOemActions_CS {
    RedfishCS_Link    Prop;
} RedfishAssembly_V1_0_3_AssemblyDataOemActions_CS;

//
// The available OEM-specific actions for this Resource.
//
typedef struct _RedfishAssembly_V1_0_3_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishAssembly_V1_0_3_OemActions_CS;

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
// The Assembly schema defines an assembly.  Assembly information contains details
// about a device, such as part number, serial number, manufacturer, and
// production date.  It also provides access to the original data for the
// assembly.
//
typedef struct _RedfishAssembly_V1_0_3_Assembly_CS {
    RedfishCS_Header                                Header;
    RedfishCS_char                                  *odata_context;       
    RedfishCS_char                                  *odata_etag;          
    RedfishCS_char                                  *odata_id;            
    RedfishCS_char                                  *odata_type;          
    RedfishAssembly_V1_0_3_Actions_CS               *Actions;                 // The available actions for this
                                                                              // Resource.
    RedfishAssembly_V1_0_3_AssemblyData_Array_CS    *Assemblies;              // The assembly records.
    RedfishCS_int64                                 *Assembliesodata_count;
    RedfishCS_char                                  *Description;         
    RedfishCS_char                                  *Id;                  
    RedfishCS_char                                  *Name;                
    RedfishResource_Oem_CS                          *Oem;                     // The OEM extension property.
} RedfishAssembly_V1_0_3_Assembly_CS;

typedef struct _RedfishAssembly_V1_0_3_AssemblyData_Array_CS  {
    RedfishAssembly_V1_0_3_AssemblyData_Array_CS    *Next;
    RedfishAssembly_V1_0_3_AssemblyData_CS    *ArrayValue;
} RedfishAssembly_V1_0_3_AssemblyData_Array_CS;

RedfishCS_status
Json_Assembly_V1_0_3_To_CS (char *JsonRawText, RedfishAssembly_V1_0_3_Assembly_CS **ReturnedCS);

RedfishCS_status
CS_To_Assembly_V1_0_3_JSON (RedfishAssembly_V1_0_3_Assembly_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyAssembly_V1_0_3_CS (RedfishAssembly_V1_0_3_Assembly_CS *CSPtr);

RedfishCS_status
DestroyAssembly_V1_0_3_Json (RedfishCS_char *JsonText);

#endif
