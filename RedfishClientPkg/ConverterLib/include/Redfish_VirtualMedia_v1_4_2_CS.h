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

#ifndef RedfishVirtualmedia_V1_4_2_CSTRUCT_H_
#define RedfishVirtualmedia_V1_4_2_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_CS_
#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishResource_Condition_CS RedfishResource_Condition_CS;
#endif

#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

#ifndef RedfishResource_Status_CS_
typedef struct _RedfishResource_Status_CS RedfishResource_Status_CS;
#endif

typedef struct _RedfishVirtualMedia_V1_4_2_Actions_CS RedfishVirtualMedia_V1_4_2_Actions_CS;
typedef struct _RedfishVirtualMedia_V1_4_2_EjectMedia_CS RedfishVirtualMedia_V1_4_2_EjectMedia_CS;
typedef struct _RedfishVirtualMedia_V1_4_2_InsertMedia_CS RedfishVirtualMedia_V1_4_2_InsertMedia_CS;
typedef struct _RedfishVirtualMedia_V1_4_2_OemActions_CS RedfishVirtualMedia_V1_4_2_OemActions_CS;
typedef struct _RedfishVirtualMedia_V1_4_2_VirtualMedia_CS RedfishVirtualMedia_V1_4_2_VirtualMedia_CS;
#ifndef Redfishodatav4_idRef_CS_
typedef struct _Redfishodatav4_idRef_CS Redfishodatav4_idRef_CS;
#endif

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
    RedfishCS_char             *Resolution;          // Suggestions on how to resolve
                                                     // the condition.
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
// The available actions for this resource.
//
typedef struct _RedfishVirtualMedia_V1_4_2_Actions_CS {
    RedfishVirtualMedia_V1_4_2_EjectMedia_CS     *VirtualMedia_EjectMedia;
    RedfishVirtualMedia_V1_4_2_InsertMedia_CS    *VirtualMedia_InsertMedia;
    RedfishVirtualMedia_V1_4_2_OemActions_CS     *Oem;                        // The available OEM-specific
                                                                              // actions for this resource.
} RedfishVirtualMedia_V1_4_2_Actions_CS;

//
// This action detaches remote media from virtual media.
//
typedef struct _RedfishVirtualMedia_V1_4_2_EjectMedia_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishVirtualMedia_V1_4_2_EjectMedia_CS;

//
// This action attaches remote media to virtual media.
//
typedef struct _RedfishVirtualMedia_V1_4_2_InsertMedia_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishVirtualMedia_V1_4_2_InsertMedia_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishVirtualMedia_V1_4_2_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishVirtualMedia_V1_4_2_OemActions_CS;

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
// The VirtualMedia schema contains properties related to the monitor and control
// of an instance of virtual media, such as a remote CD, DVD, or USB device.  A
// manager for a system or device provides virtual media functionality.
//
typedef struct _RedfishVirtualMedia_V1_4_2_VirtualMedia_CS {
    RedfishCS_Header                         Header;
    RedfishCS_char                           *odata_context;      
    RedfishCS_char                           *odata_etag;         
    RedfishCS_char                           *odata_id;           
    RedfishCS_char                           *odata_type;         
    RedfishVirtualMedia_V1_4_2_Actions_CS    *Actions;                // The available actions for this
                                                                      // resource.
    RedfishCS_Link                           Certificates;            // The link to a collection of
                                                                      // server certificates for the
                                                                      // server referenced by the Image
                                                                      // property.
    RedfishCS_char                           *ConnectedVia;           // The current virtual media
                                                                      // connection method.
    RedfishCS_char                           *Description;        
    RedfishCS_char                           *Id;                 
    RedfishCS_char                           *Image;                  // The URI of the location of the
                                                                      // selected image.
    RedfishCS_char                           *ImageName;              // The current image name.
    RedfishCS_bool                           *Inserted;               // An indication of whether
                                                                      // virtual media is inserted into
                                                                      // the virtual device.
    RedfishCS_char                           *MediaTypes;             // The media types supported as
                                                                      // virtual media.
    RedfishCS_char                           *Name;               
    RedfishResource_Oem_CS                   *Oem;                    // The OEM extension property.
    RedfishCS_char                           *Password;               // The password to access the
                                                                      // Image parameter-specified URI.
                                                                      // This property is null in
                                                                      // responses.
    RedfishResource_Status_CS                *Status;                 // The status and health of the
                                                                      // resource and its subordinate
                                                                      // or dependent resources.
    RedfishCS_char                           *TransferMethod;         // The transfer method to use
                                                                      // with the Image.
    RedfishCS_char                           *TransferProtocolType;    // The network protocol to use
                                                                      // with the image.
    RedfishCS_char                           *UserName;               // The user name to access the
                                                                      // Image parameter-specified URI.
    RedfishCS_bool                           *VerifyCertificate;      // An indication of whether the
                                                                      // service will verify the
                                                                      // certificate of the server
                                                                      // referenced by the Image
                                                                      // property prior to completing
                                                                      // the remote media connection.
    RedfishCS_bool                           *WriteProtected;         // An indication of whether the
                                                                      // media is write-protected.
} RedfishVirtualMedia_V1_4_2_VirtualMedia_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

RedfishCS_status
Json_VirtualMedia_V1_4_2_To_CS (char *JsonRawText, RedfishVirtualMedia_V1_4_2_VirtualMedia_CS **ReturnedCS);

RedfishCS_status
CS_To_VirtualMedia_V1_4_2_JSON (RedfishVirtualMedia_V1_4_2_VirtualMedia_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyVirtualMedia_V1_4_2_CS (RedfishVirtualMedia_V1_4_2_VirtualMedia_CS *CSPtr);

RedfishCS_status
DestroyVirtualMedia_V1_4_2_Json (RedfishCS_char *JsonText);

#endif
