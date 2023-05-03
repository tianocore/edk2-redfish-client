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

#ifndef RedfishVirtualmedia_V1_1_5_CSTRUCT_H_
#define RedfishVirtualmedia_V1_1_5_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

typedef struct _RedfishVirtualMedia_V1_1_5_Actions_CS RedfishVirtualMedia_V1_1_5_Actions_CS;
typedef struct _RedfishVirtualMedia_V1_1_5_OemActions_CS RedfishVirtualMedia_V1_1_5_OemActions_CS;
typedef struct _RedfishVirtualMedia_V1_1_5_VirtualMedia_CS RedfishVirtualMedia_V1_1_5_VirtualMedia_CS;
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
// The available actions for this Resource.
//
typedef struct _RedfishVirtualMedia_V1_1_5_Actions_CS {
    RedfishVirtualMedia_V1_1_5_OemActions_CS    *Oem;    // The available OEM-specific
                                                        // actions for this Resource.
} RedfishVirtualMedia_V1_1_5_Actions_CS;

//
// The available OEM-specific actions for this Resource.
//
typedef struct _RedfishVirtualMedia_V1_1_5_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishVirtualMedia_V1_1_5_OemActions_CS;

//
// The VirtualMedia schema contains properties related to the monitor and control
// of an instance of virtual media, such as a remote CD, DVD, or USB device.  A
// manager for a system or device provides virtual media functionality.
//
typedef struct _RedfishVirtualMedia_V1_1_5_VirtualMedia_CS {
    RedfishCS_Header                         Header;
    RedfishCS_char                           *odata_context;
    RedfishCS_char                           *odata_etag;   
    RedfishCS_char                           *odata_id;     
    RedfishCS_char                           *odata_type;   
    RedfishVirtualMedia_V1_1_5_Actions_CS    *Actions;          // The available actions for this
                                                                // Resource.
    RedfishCS_char                           *ConnectedVia;     // The current virtual media
                                                                // connection method.
    RedfishCS_char                           *Description;  
    RedfishCS_char                           *Id;           
    RedfishCS_char                           *Image;            // The URI of the location of the
                                                                // selected image.
    RedfishCS_char                           *ImageName;        // The current image name.
    RedfishCS_bool                           *Inserted;         // An indication of whether
                                                                // virtual media is inserted into
                                                                // the virtual device.
    RedfishCS_char                           *MediaTypes;       // The media types supported as
                                                                // virtual media.
    RedfishCS_char                           *Name;         
    RedfishResource_Oem_CS                   *Oem;              // The OEM extension property.
    RedfishCS_bool                           *WriteProtected;    // An indication of whether the
                                                                // media is write-protected.
} RedfishVirtualMedia_V1_1_5_VirtualMedia_CS;

RedfishCS_status
Json_VirtualMedia_V1_1_5_To_CS (char *JsonRawText, RedfishVirtualMedia_V1_1_5_VirtualMedia_CS **ReturnedCS);

RedfishCS_status
CS_To_VirtualMedia_V1_1_5_JSON (RedfishVirtualMedia_V1_1_5_VirtualMedia_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyVirtualMedia_V1_1_5_CS (RedfishVirtualMedia_V1_1_5_VirtualMedia_CS *CSPtr);

RedfishCS_status
DestroyVirtualMedia_V1_1_5_Json (RedfishCS_char *JsonText);

#endif
