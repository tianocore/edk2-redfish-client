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

#ifndef RedfishMemorychunks_V1_4_0_CSTRUCT_H_
#define RedfishMemorychunks_V1_4_0_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishMemoryChunks_V1_4_0_InterleaveSet_Array_CS RedfishMemoryChunks_V1_4_0_InterleaveSet_Array_CS;
typedef struct _RedfishMemoryChunks_V1_4_0_Actions_CS RedfishMemoryChunks_V1_4_0_Actions_CS;
typedef struct _RedfishMemoryChunks_V1_4_0_InterleaveSet_CS RedfishMemoryChunks_V1_4_0_InterleaveSet_CS;
typedef struct _RedfishMemoryChunks_V1_4_0_Links_CS RedfishMemoryChunks_V1_4_0_Links_CS;
typedef struct _RedfishMemoryChunks_V1_4_0_MemoryChunks_CS RedfishMemoryChunks_V1_4_0_MemoryChunks_CS;
typedef struct _RedfishMemoryChunks_V1_4_0_OemActions_CS RedfishMemoryChunks_V1_4_0_OemActions_CS;
#ifndef RedfishResource_Condition_CS_
typedef struct _RedfishResource_Condition_CS RedfishResource_Condition_CS;
#endif

#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

#ifndef RedfishResource_Status_CS_
typedef struct _RedfishResource_Status_CS RedfishResource_Status_CS;
#endif

#ifndef Redfishodatav4_idRef_CS_
typedef struct _Redfishodatav4_idRef_CS Redfishodatav4_idRef_CS;
#endif

//
// The available actions for this resource.
//
typedef struct _RedfishMemoryChunks_V1_4_0_Actions_CS {
    RedfishMemoryChunks_V1_4_0_OemActions_CS    *Oem;    // The available OEM-specific
                                                        // actions for this resource.
} RedfishMemoryChunks_V1_4_0_Actions_CS;

//
// This an interleave set for a memory chunk.
//
typedef struct _RedfishMemoryChunks_V1_4_0_InterleaveSet_CS {
    Redfishodatav4_idRef_CS    *Memory;        // Describes a memory device of
                                               // the interleave set.
    RedfishCS_int64            *MemoryLevel;    // Level of the interleave set
                                               // for multi-level tiered memory.
    RedfishCS_int64            *OffsetMiB;     // Offset within the DIMM that
                                               // corresponds to the start of
                                               // this memory region, measured
                                               // in mebibytes (MiB).
    RedfishCS_char             *RegionId;      // DIMM region identifier.
    RedfishCS_int64            *SizeMiB;       // Size of this memory region
                                               // measured in mebibytes (MiB).
} RedfishMemoryChunks_V1_4_0_InterleaveSet_CS;

//
// The links to other resources that are related to this resource.
//
typedef struct _RedfishMemoryChunks_V1_4_0_Links_CS {
    RedfishCS_Link            Endpoints;               // An array of links to the
                                                       // endpoints that connect to this
                                                       // memory chunk.
    RedfishCS_int64           *Endpointsodata_count;
    RedfishResource_Oem_CS    *Oem;                    // The OEM extension property.
} RedfishMemoryChunks_V1_4_0_Links_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishMemoryChunks_V1_4_0_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishMemoryChunks_V1_4_0_OemActions_CS;

//
// A condition that requires attention.
//
#ifndef RedfishResource_Condition_CS_
#define RedfishResource_Condition_CS_
typedef struct _RedfishResource_Condition_CS {
    RedfishCS_Link             LogEntry;             // The link to the log entry
                                                     // created for this condition.
    RedfishCS_char             *Message;             // The human-readable message for
                                                     // this condition.
    RedfishCS_char_Array       *MessageArgs;         // An array of message arguments
                                                     // that are substituted for the
                                                     // arguments in the message when
                                                     // looked up in the message
                                                     // registry.
    RedfishCS_char             *MessageId;           // The identifier for the
                                                     // message.
    Redfishodatav4_idRef_CS    *OriginOfCondition;    // A link to the resource or
                                                     // object that originated the
                                                     // condition.
    RedfishCS_char             *Severity;            // The severity of the condition.
    RedfishCS_char             *Timestamp;           // The time the condition
                                                     // occurred.
} RedfishResource_Condition_CS;
#endif

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
// The status and health of a resource and its children.
//
#ifndef RedfishResource_Status_CS_
#define RedfishResource_Status_CS_
typedef struct _RedfishResource_Status_CS {
    RedfishResource_Condition_Array_CS    *Conditions;     // Conditions in this resource
                                                           // that require attention.
    RedfishCS_char                        *Health;         // The health state of this
                                                           // resource in the absence of its
                                                           // dependent resources.
    RedfishCS_char                        *HealthRollup;    // The overall health state from
                                                           // the view of this resource.
    RedfishResource_Oem_CS                *Oem;            // The OEM extension property.
    RedfishCS_char                        *State;          // The known state of the
                                                           // resource, such as, enabled.
} RedfishResource_Status_CS;
#endif

//
// A reference to a resource.
//
#ifndef Redfishodatav4_idRef_CS_
#define Redfishodatav4_idRef_CS_
typedef struct _Redfishodatav4_idRef_CS {
    RedfishCS_char    *odata_id;
} Redfishodatav4_idRef_CS;
#endif

//
// The schema definition of a memory chunk and its configuration.
//
typedef struct _RedfishMemoryChunks_V1_4_0_MemoryChunks_CS {
    RedfishCS_Header                                     Header;
    RedfishCS_char                                       *odata_context;       
    RedfishCS_char                                       *odata_etag;          
    RedfishCS_char                                       *odata_id;            
    RedfishCS_char                                       *odata_type;          
    RedfishMemoryChunks_V1_4_0_Actions_CS                *Actions;                 // The available actions for this
                                                                                   // resource.
    RedfishCS_int64                                      *AddressRangeOffsetMiB;    // Offset of the memory chunk in
                                                                                   // the address range in MiB.
    RedfishCS_char                                       *AddressRangeType;        // Memory type of this memory
                                                                                   // chunk.
    RedfishCS_char                                       *Description;         
    RedfishCS_char                                       *DisplayName;             // A user-configurable string to
                                                                                   // name the memory chunk.
    RedfishCS_char                                       *Id;                  
    RedfishMemoryChunks_V1_4_0_InterleaveSet_Array_CS    *InterleaveSets;          // The interleave sets for the
                                                                                   // memory chunk.
    RedfishCS_bool                                       *IsMirrorEnabled;         // An indication of whether
                                                                                   // memory mirroring is enabled
                                                                                   // for this memory chunk.
    RedfishCS_bool                                       *IsSpare;                 // An indication of whether
                                                                                   // sparing is enabled for this
                                                                                   // memory chunk.
    RedfishMemoryChunks_V1_4_0_Links_CS                  *Links;                   // The links to other resources
                                                                                   // that are related to this
                                                                                   // resource.
    RedfishCS_int64                                      *MemoryChunkSizeMiB;      // Size of the memory chunk
                                                                                   // measured in mebibytes (MiB).
    RedfishCS_char                                       *Name;                
    RedfishResource_Oem_CS                               *Oem;                     // The OEM extension property.
    RedfishResource_Status_CS                            *Status;                  // The status and health of the
                                                                                   // resource and its subordinate
                                                                                   // or dependent resources.
} RedfishMemoryChunks_V1_4_0_MemoryChunks_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

typedef struct _RedfishMemoryChunks_V1_4_0_InterleaveSet_Array_CS  {
    RedfishMemoryChunks_V1_4_0_InterleaveSet_Array_CS    *Next;
    RedfishMemoryChunks_V1_4_0_InterleaveSet_CS    *ArrayValue;
} RedfishMemoryChunks_V1_4_0_InterleaveSet_Array_CS;

RedfishCS_status
Json_MemoryChunks_V1_4_0_To_CS (char *JsonRawText, RedfishMemoryChunks_V1_4_0_MemoryChunks_CS **ReturnedCS);

RedfishCS_status
CS_To_MemoryChunks_V1_4_0_JSON (RedfishMemoryChunks_V1_4_0_MemoryChunks_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyMemoryChunks_V1_4_0_CS (RedfishMemoryChunks_V1_4_0_MemoryChunks_CS *CSPtr);

RedfishCS_status
DestroyMemoryChunks_V1_4_0_Json (RedfishCS_char *JsonText);

#endif
