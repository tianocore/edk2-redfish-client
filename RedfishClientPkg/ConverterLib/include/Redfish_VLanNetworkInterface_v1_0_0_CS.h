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

#ifndef RedfishVlannetworkinterface_V1_0_0_CSTRUCT_H_
#define RedfishVlannetworkinterface_V1_0_0_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

typedef struct _RedfishVLanNetworkInterface_V1_0_0_VLAN_CS RedfishVLanNetworkInterface_V1_0_0_VLAN_CS;
typedef struct _RedfishVLanNetworkInterface_V1_0_0_VLanNetworkInterface_CS RedfishVLanNetworkInterface_V1_0_0_VLanNetworkInterface_CS;
//
// The OEM extension.
//
#ifndef RedfishResource_Oem_CS_
#define RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS {
    RedfishCS_Link    Prop;
} RedfishResource_Oem_CS;
#endif

typedef struct _RedfishVLanNetworkInterface_V1_0_0_VLAN_CS {
    RedfishCS_bool     *VLANEnable;    // This indicates if this VLAN is
                                      // enabled.
    RedfishCS_int64    *VLANId;       // This indicates the VLAN
                                      // identifier for this VLAN.
} RedfishVLanNetworkInterface_V1_0_0_VLAN_CS;

//
// This resource contains information for a Virtual LAN (VLAN) network instance
// available on a manager, system or other device.
//
typedef struct _RedfishVLanNetworkInterface_V1_0_0_VLanNetworkInterface_CS {
    RedfishCS_Header          Header;
    RedfishCS_char            *odata_context;
    RedfishCS_char            *odata_id;    
    RedfishCS_char            *odata_type;  
    RedfishCS_char            *Description; 
    RedfishCS_char            *Id;          
    RedfishCS_char            *Name;        
    RedfishResource_Oem_CS    *Oem;             // This is the
                                                // manufacturer/provider specific
                                                // extension moniker used to
                                                // divide the Oem object into
                                                // sections.
    RedfishCS_bool            *VLANEnable;      // This indicates if this VLAN is
                                                // enabled.
    RedfishCS_int64           *VLANId;          // This indicates the VLAN
                                                // identifier for this VLAN.
} RedfishVLanNetworkInterface_V1_0_0_VLanNetworkInterface_CS;

RedfishCS_status
Json_VLanNetworkInterface_V1_0_0_To_CS (char *JsonRawText, RedfishVLanNetworkInterface_V1_0_0_VLanNetworkInterface_CS **ReturnedCS);

RedfishCS_status
CS_To_VLanNetworkInterface_V1_0_0_JSON (RedfishVLanNetworkInterface_V1_0_0_VLanNetworkInterface_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyVLanNetworkInterface_V1_0_0_CS (RedfishVLanNetworkInterface_V1_0_0_VLanNetworkInterface_CS *CSPtr);

RedfishCS_status
DestroyVLanNetworkInterface_V1_0_0_Json (RedfishCS_char *JsonText);

#endif
