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

#ifndef RedfishCable_V1_1_0_CSTRUCT_H_
#define RedfishCable_V1_1_0_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishCable_V1_1_0_Actions_CS RedfishCable_V1_1_0_Actions_CS;
typedef struct _RedfishCable_V1_1_0_Cable_CS RedfishCable_V1_1_0_Cable_CS;
typedef struct _RedfishCable_V1_1_0_Links_CS RedfishCable_V1_1_0_Links_CS;
typedef struct _RedfishCable_V1_1_0_OemActions_CS RedfishCable_V1_1_0_OemActions_CS;
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
typedef struct _RedfishCable_V1_1_0_Actions_CS {
    RedfishCable_V1_1_0_OemActions_CS    *Oem;    // The available OEM-specific
                                                 // actions for this resource.
} RedfishCable_V1_1_0_Actions_CS;

//
// The links to other resources that are related to this resource.
//
typedef struct _RedfishCable_V1_1_0_Links_CS {
    RedfishCS_Link            DownstreamChassis;                 // An array of links to the
                                                                 // downstream chassis connected
                                                                 // to this cable.
    RedfishCS_int64           *DownstreamChassisodata_count; 
    RedfishCS_Link            DownstreamPorts;                   // An array of links to the
                                                                 // downstream ports connected to
                                                                 // this cable.
    RedfishCS_int64           *DownstreamPortsodata_count;   
    RedfishCS_Link            DownstreamResources;               // An array of links to the
                                                                 // downstream resources connected
                                                                 // to this cable.
    RedfishCS_int64           *DownstreamResourcesodata_count;
    RedfishResource_Oem_CS    *Oem;                              // The OEM extension property.
    RedfishCS_Link            UpstreamChassis;                   // An array of links to the
                                                                 // upstream chassis connected to
                                                                 // this cable.
    RedfishCS_int64           *UpstreamChassisodata_count;   
    RedfishCS_Link            UpstreamPorts;                     // An array of links to the
                                                                 // upstream ports connected to
                                                                 // this cable.
    RedfishCS_int64           *UpstreamPortsodata_count;     
    RedfishCS_Link            UpstreamResources;                 // An array of links to the
                                                                 // upstream resources connected
                                                                 // to this cable.
    RedfishCS_int64           *UpstreamResourcesodata_count; 
} RedfishCable_V1_1_0_Links_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishCable_V1_1_0_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishCable_V1_1_0_OemActions_CS;

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
// A reference to a resource.
//
#ifndef Redfishodatav4_idRef_CS_
#define Redfishodatav4_idRef_CS_
typedef struct _Redfishodatav4_idRef_CS {
    RedfishCS_char    *odata_id;
} Redfishodatav4_idRef_CS;
#endif

//
// The Cable schema contains properties that describe a cable connecting endpoints
// of a chassis, port, or any other cable-compatible endpoint.
//
typedef struct _RedfishCable_V1_1_0_Cable_CS {
    RedfishCS_Header                  Header;
    RedfishCS_char                    *odata_context;          
    RedfishCS_char                    *odata_etag;             
    RedfishCS_char                    *odata_id;               
    RedfishCS_char                    *odata_type;             
    RedfishCable_V1_1_0_Actions_CS    *Actions;                    // The available actions for this
                                                                   // resource.
    RedfishCS_Link                    Assembly;                    // The link to the assembly
                                                                   // associated with this cable.
    RedfishCS_char                    *AssetTag;                   // The user-assigned asset tag
                                                                   // for this cable.
    RedfishCS_char                    *CableClass;                 // The identifier for the
                                                                   // downstream resource.
    RedfishCS_char                    *CableStatus;                // The user-reported status of
                                                                   // this resource.
    RedfishCS_char                    *CableType;                  // The type of this cable.
    RedfishCS_char                    *Description;            
    RedfishCS_char_Array              *DownstreamConnectorTypes;    // The connector types this cable
                                                                   // supports.
    RedfishCS_char                    *DownstreamName;             // The identifier for the
                                                                   // downstream resource.
    RedfishCS_char                    *Id;                     
    RedfishCS_int64                   *LengthMeters;               // The length of the cable in
                                                                   // meters.
    RedfishCable_V1_1_0_Links_CS      *Links;                      // The links to other resources
                                                                   // that are related to this
                                                                   // resource.
    RedfishCS_Link                    Location;                    // The location of the assembly.
    RedfishCS_char                    *Manufacturer;               // The manufacturer of this
                                                                   // cable.
    RedfishCS_char                    *Model;                      // The model number of the cable.
    RedfishCS_char                    *Name;                   
    RedfishResource_Oem_CS            *Oem;                        // The OEM extension property.
    RedfishCS_char                    *PartNumber;                 // The part number for this
                                                                   // cable.
    RedfishCS_char                    *SKU;                        // The SKU for this cable.
    RedfishCS_char                    *SerialNumber;               // The serial number for this
                                                                   // cable.
    RedfishResource_Status_CS         *Status;                     // The status and health of the
                                                                   // resource and its subordinate
                                                                   // or dependent resources.
    RedfishCS_char_Array              *UpstreamConnectorTypes;     // The connector types this cable
                                                                   // supports.
    RedfishCS_char                    *UpstreamName;               // The identifier for the
                                                                   // downstream resource.
    RedfishCS_char                    *UserDescription;            // The description of this cable.
    RedfishCS_char                    *UserLabel;                  // A user-assigned label.
    RedfishCS_char                    *Vendor;                     // The manufacturer of this
                                                                   // cable.
} RedfishCable_V1_1_0_Cable_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

RedfishCS_status
Json_Cable_V1_1_0_To_CS (char *JsonRawText, RedfishCable_V1_1_0_Cable_CS **ReturnedCS);

RedfishCS_status
CS_To_Cable_V1_1_0_JSON (RedfishCable_V1_1_0_Cable_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyCable_V1_1_0_CS (RedfishCable_V1_1_0_Cable_CS *CSPtr);

RedfishCS_status
DestroyCable_V1_1_0_Json (RedfishCS_char *JsonText);

#endif
