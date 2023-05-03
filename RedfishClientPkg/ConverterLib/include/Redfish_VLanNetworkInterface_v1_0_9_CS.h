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

#ifndef RedfishVlannetworkinterface_V1_0_9_CSTRUCT_H_
#define RedfishVlannetworkinterface_V1_0_9_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

typedef struct _RedfishVLanNetworkInterface_V1_0_9_VLAN_CS RedfishVLanNetworkInterface_V1_0_9_VLAN_CS;
typedef struct _RedfishVLanNetworkInterface_V1_0_9_VLanNetworkInterface_CS RedfishVLanNetworkInterface_V1_0_9_VLanNetworkInterface_CS;
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
// The attributes of a VLAN.
//
typedef struct _RedfishVLanNetworkInterface_V1_0_9_VLAN_CS {
    RedfishCS_bool     *VLANEnable;    // An indication of whether this
                                      // VLAN is enabled for this VLAN
                                      // network interface.
    RedfishCS_int64    *VLANId;       // The ID for this VLAN.
} RedfishVLanNetworkInterface_V1_0_9_VLAN_CS;

//
// The VLanNetworkInterface schema describes a VLAN network instance that is
// available on a manager, system, or other device.
//
typedef struct _RedfishVLanNetworkInterface_V1_0_9_VLanNetworkInterface_CS {
    RedfishCS_Header          Header;
    RedfishCS_char            *odata_context;
    RedfishCS_char            *odata_etag;  
    RedfishCS_char            *odata_id;    
    RedfishCS_char            *odata_type;  
    RedfishCS_char            *Description; 
    RedfishCS_char            *Id;          
    RedfishCS_char            *Name;        
    RedfishResource_Oem_CS    *Oem;             // The OEM extension property.
    RedfishCS_bool            *VLANEnable;      // An indication of whether this
                                                // VLAN is enabled for this
                                                // interface.
    RedfishCS_int64           *VLANId;          // The ID for this VLAN.
} RedfishVLanNetworkInterface_V1_0_9_VLanNetworkInterface_CS;

RedfishCS_status
Json_VLanNetworkInterface_V1_0_9_To_CS (char *JsonRawText, RedfishVLanNetworkInterface_V1_0_9_VLanNetworkInterface_CS **ReturnedCS);

RedfishCS_status
CS_To_VLanNetworkInterface_V1_0_9_JSON (RedfishVLanNetworkInterface_V1_0_9_VLanNetworkInterface_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyVLanNetworkInterface_V1_0_9_CS (RedfishVLanNetworkInterface_V1_0_9_VLanNetworkInterface_CS *CSPtr);

RedfishCS_status
DestroyVLanNetworkInterface_V1_0_9_Json (RedfishCS_char *JsonText);

#endif
