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

#ifndef RedfishSimplestorage_V1_2_4_CSTRUCT_H_
#define RedfishSimplestorage_V1_2_4_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_CS_
#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishSimpleStorage_V1_2_4_Device_Array_CS RedfishSimpleStorage_V1_2_4_Device_Array_CS;
typedef struct _RedfishResource_Condition_CS RedfishResource_Condition_CS;
#endif

#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

#ifndef RedfishResource_Status_CS_
typedef struct _RedfishResource_Status_CS RedfishResource_Status_CS;
#endif

typedef struct _RedfishSimpleStorage_V1_2_4_Actions_CS RedfishSimpleStorage_V1_2_4_Actions_CS;
typedef struct _RedfishSimpleStorage_V1_2_4_Device_CS RedfishSimpleStorage_V1_2_4_Device_CS;
typedef struct _RedfishSimpleStorage_V1_2_4_Links_CS RedfishSimpleStorage_V1_2_4_Links_CS;
typedef struct _RedfishSimpleStorage_V1_2_4_OemActions_CS RedfishSimpleStorage_V1_2_4_OemActions_CS;
typedef struct _RedfishSimpleStorage_V1_2_4_SimpleStorage_CS RedfishSimpleStorage_V1_2_4_SimpleStorage_CS;
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
// The available actions for this Resource.
//
typedef struct _RedfishSimpleStorage_V1_2_4_Actions_CS {
    RedfishSimpleStorage_V1_2_4_OemActions_CS    *Oem;    // The available OEM-specific
                                                         // actions for this Resource.
} RedfishSimpleStorage_V1_2_4_Actions_CS;

//
// A storage device, such as a disk drive or optical media device.
//
typedef struct _RedfishSimpleStorage_V1_2_4_Device_CS {
    RedfishCS_int64              *CapacityBytes;    // The size, in bytes, of the
                                                   // storage device.
    RedfishCS_char               *Manufacturer;    // The name of the manufacturer
                                                   // of this device.
    RedfishCS_char               *Model;           // The product model number of
                                                   // this device.
    RedfishCS_char               *Name;            // The name of the Resource or
                                                   // array member.
    RedfishResource_Oem_CS       *Oem;             // The OEM extension property.
    RedfishResource_Status_CS    *Status;          // The status and health of the
                                                   // Resource and its subordinate
                                                   // or dependent Resources.
} RedfishSimpleStorage_V1_2_4_Device_CS;

//
// The links to other Resources that are related to this Resource.
//
typedef struct _RedfishSimpleStorage_V1_2_4_Links_CS {
    RedfishCS_Link            Chassis;    // The link to the chassis that
                                         // contains this simple storage.
    RedfishResource_Oem_CS    *Oem;      // The OEM extension property.
} RedfishSimpleStorage_V1_2_4_Links_CS;

//
// The available OEM-specific actions for this Resource.
//
typedef struct _RedfishSimpleStorage_V1_2_4_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishSimpleStorage_V1_2_4_OemActions_CS;

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
// The SimpleStorage schema represents the properties of a storage controller and
// its directly-attached devices.
//
typedef struct _RedfishSimpleStorage_V1_2_4_SimpleStorage_CS {
    RedfishCS_Header                               Header;
    RedfishCS_char                                 *odata_context;
    RedfishCS_char                                 *odata_etag;   
    RedfishCS_char                                 *odata_id;     
    RedfishCS_char                                 *odata_type;   
    RedfishSimpleStorage_V1_2_4_Actions_CS         *Actions;          // The available actions for this
                                                                      // Resource.
    RedfishCS_char                                 *Description;  
    RedfishSimpleStorage_V1_2_4_Device_Array_CS    *Devices;          // The storage devices.
    RedfishCS_char                                 *Id;           
    RedfishSimpleStorage_V1_2_4_Links_CS           *Links;            // The links to other Resources
                                                                      // that are related to this
                                                                      // Resource.
    RedfishCS_char                                 *Name;         
    RedfishResource_Oem_CS                         *Oem;              // The OEM extension property.
    RedfishResource_Status_CS                      *Status;           // The status and health of the
                                                                      // Resource and its subordinate
                                                                      // or dependent Resources.
    RedfishCS_char                                 *UefiDevicePath;    // The UEFI device path to access
                                                                      // this storage controller.
} RedfishSimpleStorage_V1_2_4_SimpleStorage_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

typedef struct _RedfishSimpleStorage_V1_2_4_Device_Array_CS  {
    RedfishSimpleStorage_V1_2_4_Device_Array_CS    *Next;
    RedfishSimpleStorage_V1_2_4_Device_CS    *ArrayValue;
} RedfishSimpleStorage_V1_2_4_Device_Array_CS;

RedfishCS_status
Json_SimpleStorage_V1_2_4_To_CS (char *JsonRawText, RedfishSimpleStorage_V1_2_4_SimpleStorage_CS **ReturnedCS);

RedfishCS_status
CS_To_SimpleStorage_V1_2_4_JSON (RedfishSimpleStorage_V1_2_4_SimpleStorage_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroySimpleStorage_V1_2_4_CS (RedfishSimpleStorage_V1_2_4_SimpleStorage_CS *CSPtr);

RedfishCS_status
DestroySimpleStorage_V1_2_4_Json (RedfishCS_char *JsonText);

#endif
