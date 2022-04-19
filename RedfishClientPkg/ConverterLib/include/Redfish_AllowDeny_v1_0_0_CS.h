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

#ifndef RedfishAllowdeny_V1_0_0_CSTRUCT_H_
#define RedfishAllowdeny_V1_0_0_CSTRUCT_H_

#include "RedfishCsCommon.h"

typedef struct _RedfishAllowDeny_V1_0_0_Actions_CS RedfishAllowDeny_V1_0_0_Actions_CS;
typedef struct _RedfishAllowDeny_V1_0_0_AllowDeny_CS RedfishAllowDeny_V1_0_0_AllowDeny_CS;
typedef struct _RedfishAllowDeny_V1_0_0_OemActions_CS RedfishAllowDeny_V1_0_0_OemActions_CS;
#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

//
// The available actions for this resource.
//
typedef struct _RedfishAllowDeny_V1_0_0_Actions_CS {
    RedfishAllowDeny_V1_0_0_OemActions_CS    *Oem;    // The available OEM-specific
                                                     // actions for this resource.
} RedfishAllowDeny_V1_0_0_Actions_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishAllowDeny_V1_0_0_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishAllowDeny_V1_0_0_OemActions_CS;

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
// The AllowDeny schema represents a set of allow or deny configurations.
//
typedef struct _RedfishAllowDeny_V1_0_0_AllowDeny_CS {
    RedfishCS_Header                      Header;
    RedfishCS_char                        *odata_context;      
    RedfishCS_char                        *odata_etag;         
    RedfishCS_char                        *odata_id;           
    RedfishCS_char                        *odata_type;         
    RedfishAllowDeny_V1_0_0_Actions_CS    *Actions;                // The available actions for this
                                                                   // resource.
    RedfishCS_char                        *AllowType;              // Indicates the type of
                                                                   // permission.
    RedfishCS_char                        *Description;        
    RedfishCS_int64                       *DestinationPortLower;    // The TCP, UDP, or other
                                                                   // destination port to which this
                                                                   // rule begins to application,
                                                                   // inclusive.
    RedfishCS_int64                       *DestinationPortUpper;    // The TCP, UDP, or other
                                                                   // destination port to which this
                                                                   // rule ends application,
                                                                   // inclusive.
    RedfishCS_char                        *Direction;              // Indicates the direction of the
                                                                   // data to which this permission
                                                                   // applies.
    RedfishCS_int64                       *IANAProtocolNumber;     // The IANA protocol number to
                                                                   // which this permission applies.
                                                                   // For TCP, this is `6`.  For
                                                                   // UDP, this is `17`.
    RedfishCS_char                        *IPAddressLower;         // The lower IP address to which
                                                                   // this permission applies.
    RedfishCS_char                        *IPAddressType;          // The type of IP address
                                                                   // populated in the
                                                                   // IPAddressLower and
                                                                   // IPAddressUpper properties.
    RedfishCS_char                        *IPAddressUpper;         // The upper IP address to which
                                                                   // this permission applies.
    RedfishCS_char                        *Id;                 
    RedfishCS_char                        *Name;               
    RedfishResource_Oem_CS                *Oem;                    // The OEM extension property.
    RedfishCS_int64                       *SourcePortLower;        // The TCP, UDP, or other source
                                                                   // port to which this rule begins
                                                                   // application, inclusive.
    RedfishCS_int64                       *SourcePortUpper;        // The TCP, UDP or other source
                                                                   // port to which this rule ends
                                                                   // application, inclusive.
    RedfishCS_bool                        *StatefulSession;        // Indicates if this is a
                                                                   // permission that only applies
                                                                   // to stateful connection.
} RedfishAllowDeny_V1_0_0_AllowDeny_CS;

RedfishCS_status
Json_AllowDeny_V1_0_0_To_CS (char *JsonRawText, RedfishAllowDeny_V1_0_0_AllowDeny_CS **ReturnedCS);

RedfishCS_status
CS_To_AllowDeny_V1_0_0_JSON (RedfishAllowDeny_V1_0_0_AllowDeny_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyAllowDeny_V1_0_0_CS (RedfishAllowDeny_V1_0_0_AllowDeny_CS *CSPtr);

RedfishCS_status
DestroyAllowDeny_V1_0_0_Json (RedfishCS_char *JsonText);

#endif
