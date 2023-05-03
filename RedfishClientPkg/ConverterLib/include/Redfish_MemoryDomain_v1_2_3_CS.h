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

#ifndef RedfishMemorydomain_V1_2_3_CSTRUCT_H_
#define RedfishMemorydomain_V1_2_3_CSTRUCT_H_

#include "RedfishCsCommon.h"

typedef struct _RedfishMemoryDomain_V1_2_3_MemorySet_Array_CS RedfishMemoryDomain_V1_2_3_MemorySet_Array_CS;
typedef struct _RedfishMemoryDomain_V1_2_3_Actions_CS RedfishMemoryDomain_V1_2_3_Actions_CS;
typedef struct _RedfishMemoryDomain_V1_2_3_MemoryDomain_CS RedfishMemoryDomain_V1_2_3_MemoryDomain_CS;
typedef struct _RedfishMemoryDomain_V1_2_3_MemorySet_CS RedfishMemoryDomain_V1_2_3_MemorySet_CS;
typedef struct _RedfishMemoryDomain_V1_2_3_OemActions_CS RedfishMemoryDomain_V1_2_3_OemActions_CS;
#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

//
// The available actions for this Resource.
//
typedef struct _RedfishMemoryDomain_V1_2_3_Actions_CS {
    RedfishMemoryDomain_V1_2_3_OemActions_CS    *Oem;    // The available OEM-specific
                                                        // actions for this Resource.
} RedfishMemoryDomain_V1_2_3_Actions_CS;

//
// The interleave sets for a memory chunk.
//
typedef struct _RedfishMemoryDomain_V1_2_3_MemorySet_CS {
    RedfishCS_Link     MemorySet;               // The set of memory for a
                                                // particular interleave set.
    RedfishCS_int64    *MemorySetodata_count;
} RedfishMemoryDomain_V1_2_3_MemorySet_CS;

//
// The available OEM-specific actions for this Resource.
//
typedef struct _RedfishMemoryDomain_V1_2_3_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishMemoryDomain_V1_2_3_OemActions_CS;

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
// The MemoryDomain schema describes a memory domain and its configuration.
// Memory domains indicate to the client which memory, or DIMMs, can be grouped
// together in memory chunks to represent addressable memory.
//
typedef struct _RedfishMemoryDomain_V1_2_3_MemoryDomain_CS {
    RedfishCS_Header                                 Header;
    RedfishCS_char                                   *odata_context;           
    RedfishCS_char                                   *odata_etag;              
    RedfishCS_char                                   *odata_id;                
    RedfishCS_char                                   *odata_type;              
    RedfishMemoryDomain_V1_2_3_Actions_CS            *Actions;                     // The available actions for this
                                                                                   // Resource.
    RedfishCS_bool                                   *AllowsBlockProvisioning;     // An indication of whether this
                                                                                   // memory domain supports the
                                                                                   // provisioning of blocks of
                                                                                   // memory.
    RedfishCS_bool                                   *AllowsMemoryChunkCreation;    // An indication of whether this
                                                                                   // memory domain supports the
                                                                                   // creation of memory chunks.
    RedfishCS_bool                                   *AllowsMirroring;             // An indication of whether this
                                                                                   // memory domain supports the
                                                                                   // creation of memory chunks with
                                                                                   // mirroring enabled.
    RedfishCS_bool                                   *AllowsSparing;               // An indication of whether this
                                                                                   // memory domain supports the
                                                                                   // creation of memory chunks with
                                                                                   // sparing enabled.
    RedfishCS_char                                   *Description;             
    RedfishCS_char                                   *Id;                      
    RedfishMemoryDomain_V1_2_3_MemorySet_Array_CS    *InterleavableMemorySets;     // The interleave sets for the
                                                                                   // memory chunk.
    RedfishCS_Link                                   MemoryChunks;                 // The link to the collection of
                                                                                   // memory chunks associated with
                                                                                   // this memory domain.
    RedfishCS_char                                   *Name;                    
    RedfishResource_Oem_CS                           *Oem;                         // The OEM extension property.
} RedfishMemoryDomain_V1_2_3_MemoryDomain_CS;

typedef struct _RedfishMemoryDomain_V1_2_3_MemorySet_Array_CS  {
    RedfishMemoryDomain_V1_2_3_MemorySet_Array_CS    *Next;
    RedfishMemoryDomain_V1_2_3_MemorySet_CS    *ArrayValue;
} RedfishMemoryDomain_V1_2_3_MemorySet_Array_CS;

RedfishCS_status
Json_MemoryDomain_V1_2_3_To_CS (char *JsonRawText, RedfishMemoryDomain_V1_2_3_MemoryDomain_CS **ReturnedCS);

RedfishCS_status
CS_To_MemoryDomain_V1_2_3_JSON (RedfishMemoryDomain_V1_2_3_MemoryDomain_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyMemoryDomain_V1_2_3_CS (RedfishMemoryDomain_V1_2_3_MemoryDomain_CS *CSPtr);

RedfishCS_status
DestroyMemoryDomain_V1_2_3_Json (RedfishCS_char *JsonText);

#endif
