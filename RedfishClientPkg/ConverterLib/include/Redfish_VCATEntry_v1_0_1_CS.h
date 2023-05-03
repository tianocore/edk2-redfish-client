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

#ifndef RedfishVcatentry_V1_0_1_CSTRUCT_H_
#define RedfishVcatentry_V1_0_1_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

typedef struct _RedfishVCATEntry_V1_0_1_Actions_CS RedfishVCATEntry_V1_0_1_Actions_CS;
typedef struct _RedfishVCATEntry_V1_0_1_OemActions_CS RedfishVCATEntry_V1_0_1_OemActions_CS;
typedef struct _RedfishVCATEntry_V1_0_1_VCATEntry_CS RedfishVCATEntry_V1_0_1_VCATEntry_CS;
typedef struct _RedfishVCATEntry_V1_0_1_VCATableEntry_CS RedfishVCATEntry_V1_0_1_VCATableEntry_CS;
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
// The available actions for this resource.
//
typedef struct _RedfishVCATEntry_V1_0_1_Actions_CS {
    RedfishVCATEntry_V1_0_1_OemActions_CS    *Oem;    // The available OEM-specific
                                                     // actions for this resource.
} RedfishVCATEntry_V1_0_1_Actions_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishVCATEntry_V1_0_1_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishVCATEntry_V1_0_1_OemActions_CS;

//
// The Virtual Channel Action Table entry corresponding to a specific Virtual
// Channel.
//
typedef struct _RedfishVCATEntry_V1_0_1_VCATableEntry_CS {
    RedfishCS_char    *Threshold;    // The configured threshold.
    RedfishCS_char    *VCMask;      // The bits corresponding to the
                                    // supported Virtual Channel.
} RedfishVCATEntry_V1_0_1_VCATableEntry_CS;

//
// The VCATEntry schema defines an entry in a Virtual Channel Action Table.  A
// Virtual Channel is a mechanism used to create multiple, logical communication
// streams across a physical link.
//
typedef struct _RedfishVCATEntry_V1_0_1_VCATEntry_CS {
    RedfishCS_Header                            Header;
    RedfishCS_char                              *odata_context;
    RedfishCS_char                              *odata_etag;  
    RedfishCS_char                              *odata_id;    
    RedfishCS_char                              *odata_type;  
    RedfishVCATEntry_V1_0_1_Actions_CS          *Actions;         // The available actions for this
                                                                  // resource.
    RedfishCS_char                              *Description; 
    RedfishCS_char                              *Id;          
    RedfishCS_char                              *Name;        
    RedfishResource_Oem_CS                      *Oem;             // The OEM extension property.
    RedfishCS_char                              *RawEntryHex;     // The hexadecimal value of the
                                                                  // Virtual Channel Action Table
                                                                  // entries.
    RedfishVCATEntry_V1_0_1_VCATableEntry_CS    *VCEntries;       // An array of entries of the
                                                                  // Virtual Channel Action Table.
} RedfishVCATEntry_V1_0_1_VCATEntry_CS;

RedfishCS_status
Json_VCATEntry_V1_0_1_To_CS (char *JsonRawText, RedfishVCATEntry_V1_0_1_VCATEntry_CS **ReturnedCS);

RedfishCS_status
CS_To_VCATEntry_V1_0_1_JSON (RedfishVCATEntry_V1_0_1_VCATEntry_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyVCATEntry_V1_0_1_CS (RedfishVCATEntry_V1_0_1_VCATEntry_CS *CSPtr);

RedfishCS_status
DestroyVCATEntry_V1_0_1_Json (RedfishCS_char *JsonText);

#endif
