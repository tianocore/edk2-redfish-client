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

#ifndef RedfishFabricadapter_V1_0_0_CSTRUCT_H_
#define RedfishFabricadapter_V1_0_0_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishFabricAdapter_V1_0_0_Actions_CS RedfishFabricAdapter_V1_0_0_Actions_CS;
typedef struct _RedfishFabricAdapter_V1_0_0_FabricAdapter_CS RedfishFabricAdapter_V1_0_0_FabricAdapter_CS;
typedef struct _RedfishFabricAdapter_V1_0_0_GenZ_CS RedfishFabricAdapter_V1_0_0_GenZ_CS;
typedef struct _RedfishFabricAdapter_V1_0_0_Links_CS RedfishFabricAdapter_V1_0_0_Links_CS;
typedef struct _RedfishFabricAdapter_V1_0_0_OemActions_CS RedfishFabricAdapter_V1_0_0_OemActions_CS;
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
// The available actions for this Resource.
//
typedef struct _RedfishFabricAdapter_V1_0_0_Actions_CS {
    RedfishFabricAdapter_V1_0_0_OemActions_CS    *Oem;    // The available OEM-specific
                                                         // actions for this Resource.
} RedfishFabricAdapter_V1_0_0_Actions_CS;

//
// Gen-Z related properties for a fabric adapter.
//
typedef struct _RedfishFabricAdapter_V1_0_0_GenZ_CS {
    RedfishCS_Link          MSDT;            // The Multi Subnet Destination
                                             // Table for the component.
    RedfishCS_char_Array    *PIDT;           // An array of table entry values
                                             // for the Packet Injection Delay
                                             // Table.
    RedfishCS_char_Array    *RITable;        // An array of table entry values
                                             // for the Responder Interface
                                             // Table.
    RedfishCS_Link          RequestorVCAT;    // The Requestor Virtual Channel
                                             // Action Table for the
                                             // component.
    RedfishCS_Link          ResponderVCAT;    // The Responder Virtual Channel
                                             // Action Table for the
                                             // component.
    RedfishCS_Link          SSDT;            // The Single Subnet Destination
                                             // Table for the component.
} RedfishFabricAdapter_V1_0_0_GenZ_CS;

//
// The links to other Resources that are related to this Resource.
//
typedef struct _RedfishFabricAdapter_V1_0_0_Links_CS {
    RedfishCS_Link            Endpoints;               // An array of links to the
                                                       // endpoints that represent the
                                                       // logical fabric connection to
                                                       // this fabric adapter.
    RedfishCS_int64           *Endpointsodata_count;
    RedfishResource_Oem_CS    *Oem;                    // The OEM extension property.
} RedfishFabricAdapter_V1_0_0_Links_CS;

//
// The available OEM-specific actions for this Resource.
//
typedef struct _RedfishFabricAdapter_V1_0_0_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishFabricAdapter_V1_0_0_OemActions_CS;

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
// A FabricAdapter represents the physical fabric adapter capable of connecting to
// an interconnect fabric.  Examples include but are not limited to Ethernet, NVMe
// over Fabrics, Gen-Z, and SAS fabric adapters.
//
typedef struct _RedfishFabricAdapter_V1_0_0_FabricAdapter_CS {
    RedfishCS_Header                          Header;
    RedfishCS_char                            *odata_context;        
    RedfishCS_char                            *odata_etag;           
    RedfishCS_char                            *odata_id;             
    RedfishCS_char                            *odata_type;           
    RedfishCS_char                            *ASICManufacturer;         // The manufacturer name for the
                                                                         // ASIC of this fabric adapter.
    RedfishCS_char                            *ASICPartNumber;           // The part number for the ASIC
                                                                         // on this fabric adapter.
    RedfishCS_char                            *ASICRevisionIdentifier;    // The revision identifier for
                                                                         // the ASIC on this fabric
                                                                         // adapter.
    RedfishFabricAdapter_V1_0_0_Actions_CS    *Actions;                  // The available actions for this
                                                                         // Resource.
    RedfishCS_char                            *Description;          
    RedfishCS_char                            *FirmwareVersion;          // The firmware version of this
                                                                         // fabric adapter.
    RedfishFabricAdapter_V1_0_0_GenZ_CS       *GenZ;                     // The Gen-Z specific properties
                                                                         // for this fabric adapter.
    RedfishCS_char                            *Id;                   
    RedfishFabricAdapter_V1_0_0_Links_CS      *Links;                    // The links to other Resources
                                                                         // that are related to this
                                                                         // Resource.
    RedfishCS_char                            *Manufacturer;             // The manufacturer or OEM of
                                                                         // this fabric adapter.
    RedfishCS_char                            *Model;                    // The model string for this
                                                                         // fabric adapter.
    RedfishCS_char                            *Name;                 
    RedfishResource_Oem_CS                    *Oem;                      // The OEM extension property.
    RedfishCS_Link                            PCIeInterface;             // The PCIe interface details for
                                                                         // this fabric adapter.
    RedfishCS_char                            *PartNumber;               // The part number for this
                                                                         // fabric adapter.
    RedfishCS_Link                            Ports;                     // The link to the collection of
                                                                         // ports that exist on the fabric
                                                                         // adapter.
    RedfishCS_char                            *SKU;                      // The manufacturer SKU for this
                                                                         // fabric adapter.
    RedfishCS_char                            *SerialNumber;             // The serial number for this
                                                                         // fabric adapter.
    RedfishCS_char                            *SparePartNumber;          // The spare part number for this
                                                                         // fabric adapter.
    RedfishResource_Status_CS                 *Status;                   // The status and health of the
                                                                         // Resource and its subordinate
                                                                         // or dependent Resources.
    RedfishCS_char                            *UUID;                     // The UUID for this fabric
                                                                         // adapter.
} RedfishFabricAdapter_V1_0_0_FabricAdapter_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

RedfishCS_status
Json_FabricAdapter_V1_0_0_To_CS (char *JsonRawText, RedfishFabricAdapter_V1_0_0_FabricAdapter_CS **ReturnedCS);

RedfishCS_status
CS_To_FabricAdapter_V1_0_0_JSON (RedfishFabricAdapter_V1_0_0_FabricAdapter_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyFabricAdapter_V1_0_0_CS (RedfishFabricAdapter_V1_0_0_FabricAdapter_CS *CSPtr);

RedfishCS_status
DestroyFabricAdapter_V1_0_0_Json (RedfishCS_char *JsonText);

#endif
