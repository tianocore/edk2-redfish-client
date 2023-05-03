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

#ifndef RedfishPcieslots_V1_0_3_CSTRUCT_H_
#define RedfishPcieslots_V1_0_3_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishPCIeSlots_V1_0_3_PCIeSlot_Array_CS RedfishPCIeSlots_V1_0_3_PCIeSlot_Array_CS;
typedef struct _RedfishPCIeSlots_V1_0_3_Actions_CS RedfishPCIeSlots_V1_0_3_Actions_CS;
typedef struct _RedfishPCIeSlots_V1_0_3_OemActions_CS RedfishPCIeSlots_V1_0_3_OemActions_CS;
typedef struct _RedfishPCIeSlots_V1_0_3_PCIeLinks_CS RedfishPCIeSlots_V1_0_3_PCIeLinks_CS;
typedef struct _RedfishPCIeSlots_V1_0_3_PCIeSlot_CS RedfishPCIeSlots_V1_0_3_PCIeSlot_CS;
typedef struct _RedfishPCIeSlots_V1_0_3_PCIeSlots_CS RedfishPCIeSlots_V1_0_3_PCIeSlots_CS;
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
typedef struct _RedfishPCIeSlots_V1_0_3_Actions_CS {
    RedfishPCIeSlots_V1_0_3_OemActions_CS    *Oem;    // The available OEM-specific
                                                     // actions for this Resource.
} RedfishPCIeSlots_V1_0_3_Actions_CS;

//
// The available OEM-specific actions for this Resource.
//
typedef struct _RedfishPCIeSlots_V1_0_3_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishPCIeSlots_V1_0_3_OemActions_CS;

//
// The links to other Resources that are related to this Resource.
//
typedef struct _RedfishPCIeSlots_V1_0_3_PCIeLinks_CS {
    RedfishResource_Oem_CS    *Oem;                     // The OEM extension property.
    RedfishCS_Link            PCIeDevice;               // An array of links to the PCIe
                                                        // devices contained in this
                                                        // slot.
    RedfishCS_int64           *PCIeDeviceodata_count;
} RedfishPCIeSlots_V1_0_3_PCIeLinks_CS;

//
// This type defines information for a PCIe slot.
//
typedef struct _RedfishPCIeSlots_V1_0_3_PCIeSlot_CS {
    RedfishCS_int64                         *Lanes;      // The number of PCIe lanes
                                                         // supported by this slot.
    RedfishPCIeSlots_V1_0_3_PCIeLinks_CS    *Links;      // The links to other Resources
                                                         // that are related to this
                                                         // Resource.
    RedfishCS_Link                          Location;    // The location of the PCIe slot.
    RedfishResource_Oem_CS                  *Oem;        // The OEM extension property.
    RedfishCS_char                          *PCIeType;    // The PCIe specification
                                                         // supported by this slot.
    RedfishCS_char                          *SlotType;    // The PCIe slot type for this
                                                         // slot.
    RedfishResource_Status_CS               *Status;     // The status and health of the
                                                         // Resource and its subordinate
                                                         // or dependent Resources.
} RedfishPCIeSlots_V1_0_3_PCIeSlot_CS;

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
// The PCIeSlots schema describes PCIe slot properties.
//
typedef struct _RedfishPCIeSlots_V1_0_3_PCIeSlots_CS {
    RedfishCS_Header                             Header;
    RedfishCS_char                               *odata_context;
    RedfishCS_char                               *odata_etag;  
    RedfishCS_char                               *odata_id;    
    RedfishCS_char                               *odata_type;  
    RedfishPCIeSlots_V1_0_3_Actions_CS           *Actions;         // The available actions for this
                                                                   // Resource.
    RedfishCS_char                               *Description; 
    RedfishCS_char                               *Id;          
    RedfishCS_char                               *Name;        
    RedfishResource_Oem_CS                       *Oem;             // The OEM extension property.
    RedfishPCIeSlots_V1_0_3_PCIeSlot_Array_CS    *Slots;           // An array of PCI Slot
                                                                   // information.
} RedfishPCIeSlots_V1_0_3_PCIeSlots_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

typedef struct _RedfishPCIeSlots_V1_0_3_PCIeSlot_Array_CS  {
    RedfishPCIeSlots_V1_0_3_PCIeSlot_Array_CS    *Next;
    RedfishPCIeSlots_V1_0_3_PCIeSlot_CS    *ArrayValue;
} RedfishPCIeSlots_V1_0_3_PCIeSlot_Array_CS;

RedfishCS_status
Json_PCIeSlots_V1_0_3_To_CS (char *JsonRawText, RedfishPCIeSlots_V1_0_3_PCIeSlots_CS **ReturnedCS);

RedfishCS_status
CS_To_PCIeSlots_V1_0_3_JSON (RedfishPCIeSlots_V1_0_3_PCIeSlots_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyPCIeSlots_V1_0_3_CS (RedfishPCIeSlots_V1_0_3_PCIeSlots_CS *CSPtr);

RedfishCS_status
DestroyPCIeSlots_V1_0_3_Json (RedfishCS_char *JsonText);

#endif
