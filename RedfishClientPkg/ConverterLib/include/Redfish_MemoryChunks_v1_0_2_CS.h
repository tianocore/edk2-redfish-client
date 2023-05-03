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

#ifndef RedfishMemorychunks_V1_0_2_CSTRUCT_H_
#define RedfishMemorychunks_V1_0_2_CSTRUCT_H_

#include "RedfishCsCommon.h"

typedef struct _RedfishMemoryChunks_V1_0_2_InterleaveSet_Array_CS RedfishMemoryChunks_V1_0_2_InterleaveSet_Array_CS;
typedef struct _RedfishMemoryChunks_V1_0_2_InterleaveSet_CS RedfishMemoryChunks_V1_0_2_InterleaveSet_CS;
typedef struct _RedfishMemoryChunks_V1_0_2_MemoryChunks_CS RedfishMemoryChunks_V1_0_2_MemoryChunks_CS;
#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

#ifndef Redfishodata_V4_0_0_idRef_CS_
typedef struct _Redfishodata_V4_0_0_idRef_CS Redfishodata_V4_0_0_idRef_CS;
#endif

//
// This an interleave set for a memory chunk.
//
typedef struct _RedfishMemoryChunks_V1_0_2_InterleaveSet_CS {
    Redfishodata_V4_0_0_idRef_CS    *Memory;        // Describes a memory device of
                                                    // the interleave set.
    RedfishCS_int64                 *MemoryLevel;    // Level of the interleave set
                                                    // for multi-level tiered memory.
    RedfishCS_int64                 *OffsetMiB;     // Offset within the DIMM that
                                                    // corresponds to the start of
                                                    // this memory region, with units
                                                    // in MiB.
    RedfishCS_char                  *RegionId;      // DIMM region identifier.
    RedfishCS_int64                 *SizeMiB;       // Size of this memory region in
                                                    // MiB.
} RedfishMemoryChunks_V1_0_2_InterleaveSet_CS;

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
// A reference to a resource.
//
#ifndef Redfishodata_V4_0_0_idRef_CS_
#define Redfishodata_V4_0_0_idRef_CS_
typedef struct _Redfishodata_V4_0_0_idRef_CS {
    RedfishCS_char    *odata_id;
} Redfishodata_V4_0_0_idRef_CS;
#endif

//
// This is the schema definition of a Memory Chunk and its configuration.
//
typedef struct _RedfishMemoryChunks_V1_0_2_MemoryChunks_CS {
    RedfishCS_Header                                     Header;
    RedfishCS_char                                       *odata_context;    
    RedfishCS_char                                       *odata_id;         
    RedfishCS_char                                       *odata_type;       
    RedfishCS_char                                       *AddressRangeType;     // Memory type of this memory
                                                                                // chunk.
    RedfishCS_char                                       *Description;      
    RedfishCS_char                                       *Id;               
    RedfishMemoryChunks_V1_0_2_InterleaveSet_Array_CS    *InterleaveSets;       // This is the interleave sets
                                                                                // for the memory chunk.
    RedfishCS_bool                                       *IsMirrorEnabled;      // Mirror Enabled status.
    RedfishCS_bool                                       *IsSpare;              // Spare enabled status.
    RedfishCS_int64                                      *MemoryChunkSizeMiB;    // Size of the memory chunk in
                                                                                // MiB.
    RedfishCS_char                                       *Name;             
    RedfishResource_Oem_CS                               *Oem;                  // This is the
                                                                                // manufacturer/provider specific
                                                                                // extension moniker used to
                                                                                // divide the Oem object into
                                                                                // sections.
} RedfishMemoryChunks_V1_0_2_MemoryChunks_CS;

typedef struct _RedfishMemoryChunks_V1_0_2_InterleaveSet_Array_CS  {
    RedfishMemoryChunks_V1_0_2_InterleaveSet_Array_CS    *Next;
    RedfishMemoryChunks_V1_0_2_InterleaveSet_CS    *ArrayValue;
} RedfishMemoryChunks_V1_0_2_InterleaveSet_Array_CS;

RedfishCS_status
Json_MemoryChunks_V1_0_2_To_CS (char *JsonRawText, RedfishMemoryChunks_V1_0_2_MemoryChunks_CS **ReturnedCS);

RedfishCS_status
CS_To_MemoryChunks_V1_0_2_JSON (RedfishMemoryChunks_V1_0_2_MemoryChunks_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyMemoryChunks_V1_0_2_CS (RedfishMemoryChunks_V1_0_2_MemoryChunks_CS *CSPtr);

RedfishCS_status
DestroyMemoryChunks_V1_0_2_Json (RedfishCS_char *JsonText);

#endif
