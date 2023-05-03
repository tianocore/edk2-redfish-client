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

#ifndef RedfishVirtualmedia_V1_2_1_CSTRUCT_H_
#define RedfishVirtualmedia_V1_2_1_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

typedef struct _RedfishVirtualMedia_V1_2_1_Actions_CS RedfishVirtualMedia_V1_2_1_Actions_CS;
typedef struct _RedfishVirtualMedia_V1_2_1_EjectMedia_CS RedfishVirtualMedia_V1_2_1_EjectMedia_CS;
typedef struct _RedfishVirtualMedia_V1_2_1_InsertMedia_CS RedfishVirtualMedia_V1_2_1_InsertMedia_CS;
typedef struct _RedfishVirtualMedia_V1_2_1_OemActions_CS RedfishVirtualMedia_V1_2_1_OemActions_CS;
typedef struct _RedfishVirtualMedia_V1_2_1_VirtualMedia_CS RedfishVirtualMedia_V1_2_1_VirtualMedia_CS;
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
typedef struct _RedfishVirtualMedia_V1_2_1_Actions_CS {
    RedfishVirtualMedia_V1_2_1_EjectMedia_CS     *VirtualMedia_EjectMedia;
    RedfishVirtualMedia_V1_2_1_InsertMedia_CS    *VirtualMedia_InsertMedia;
    RedfishVirtualMedia_V1_2_1_OemActions_CS     *Oem;                        // This property contains the
                                                                              // available OEM specific actions
                                                                              // for this resource.
} RedfishVirtualMedia_V1_2_1_Actions_CS;

//
// This action is used to detach remote media from virtual media.
//
typedef struct _RedfishVirtualMedia_V1_2_1_EjectMedia_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishVirtualMedia_V1_2_1_EjectMedia_CS;

//
// This action is used to attach remote media to virtual media.
//
typedef struct _RedfishVirtualMedia_V1_2_1_InsertMedia_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishVirtualMedia_V1_2_1_InsertMedia_CS;

//
// The available OEM specific actions for this resource.
//
typedef struct _RedfishVirtualMedia_V1_2_1_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishVirtualMedia_V1_2_1_OemActions_CS;

//
// The VirtualMedia schema contains properties related to monitoring and control
// of an instance of virtual media such as a remote CD, DVD, or USB device.
// Virtual media functionality is provided by a Manager for a system or device.
//
typedef struct _RedfishVirtualMedia_V1_2_1_VirtualMedia_CS {
    RedfishCS_Header                         Header;
    RedfishCS_char                           *odata_context;
    RedfishCS_char                           *odata_etag;   
    RedfishCS_char                           *odata_id;     
    RedfishCS_char                           *odata_type;   
    RedfishVirtualMedia_V1_2_1_Actions_CS    *Actions;          // The available actions for this
                                                                // resource.
    RedfishCS_char                           *ConnectedVia;     // Current virtual media
                                                                // connection methods.
    RedfishCS_char                           *Description;  
    RedfishCS_char                           *Id;           
    RedfishCS_char                           *Image;            // A URI providing the location
                                                                // of the selected image.
    RedfishCS_char                           *ImageName;        // The current image name.
    RedfishCS_bool                           *Inserted;         // Indicates if virtual media is
                                                                // inserted in the virtual
                                                                // device.
    RedfishCS_char                           *MediaTypes;       // This is the media types
                                                                // supported as virtual media.
    RedfishCS_char                           *Name;         
    RedfishResource_Oem_CS                   *Oem;              // This is the
                                                                // manufacturer/provider specific
                                                                // extension moniker used to
                                                                // divide the Oem object into
                                                                // sections.
    RedfishCS_bool                           *WriteProtected;    // Indicates the media is write
                                                                // protected.
} RedfishVirtualMedia_V1_2_1_VirtualMedia_CS;

RedfishCS_status
Json_VirtualMedia_V1_2_1_To_CS (char *JsonRawText, RedfishVirtualMedia_V1_2_1_VirtualMedia_CS **ReturnedCS);

RedfishCS_status
CS_To_VirtualMedia_V1_2_1_JSON (RedfishVirtualMedia_V1_2_1_VirtualMedia_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyVirtualMedia_V1_2_1_CS (RedfishVirtualMedia_V1_2_1_VirtualMedia_CS *CSPtr);

RedfishCS_status
DestroyVirtualMedia_V1_2_1_Json (RedfishCS_char *JsonText);

#endif
