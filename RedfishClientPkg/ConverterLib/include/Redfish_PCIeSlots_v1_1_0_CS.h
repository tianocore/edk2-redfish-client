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

#ifndef RedfishPcieslots_V1_1_0_CSTRUCT_H_
#define RedfishPcieslots_V1_1_0_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishPCIeSlots_V1_1_0_PCIeSlot_Array_CS RedfishPCIeSlots_V1_1_0_PCIeSlot_Array_CS;
typedef struct _RedfishPCIeSlots_V1_1_0_Actions_CS RedfishPCIeSlots_V1_1_0_Actions_CS;
typedef struct _RedfishPCIeSlots_V1_1_0_OemActions_CS RedfishPCIeSlots_V1_1_0_OemActions_CS;
typedef struct _RedfishPCIeSlots_V1_1_0_PCIeLinks_CS RedfishPCIeSlots_V1_1_0_PCIeLinks_CS;
typedef struct _RedfishPCIeSlots_V1_1_0_PCIeSlot_CS RedfishPCIeSlots_V1_1_0_PCIeSlot_CS;
typedef struct _RedfishPCIeSlots_V1_1_0_PCIeSlots_CS RedfishPCIeSlots_V1_1_0_PCIeSlots_CS;
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
typedef struct _RedfishPCIeSlots_V1_1_0_Actions_CS {
    RedfishPCIeSlots_V1_1_0_OemActions_CS    *Oem;    // This property contains the
                                                     // available OEM specific actions
                                                     // for this resource.
} RedfishPCIeSlots_V1_1_0_Actions_CS;

//
// The available OEM specific actions for this resource.
//
typedef struct _RedfishPCIeSlots_V1_1_0_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishPCIeSlots_V1_1_0_OemActions_CS;

//
// Contains references to other resources that are related to this resource.
//
typedef struct _RedfishPCIeSlots_V1_1_0_PCIeLinks_CS {
    RedfishResource_Oem_CS    *Oem;                     // Oem extension object.
    RedfishCS_Link            PCIeDevice;               // An array of references to the
                                                        // PCIe Devices contained in this
                                                        // slot.
    RedfishCS_int64           *PCIeDeviceodata_count;
} RedfishPCIeSlots_V1_1_0_PCIeLinks_CS;

//
// This is the definition for a PCI slot information object.
//
typedef struct _RedfishPCIeSlots_V1_1_0_PCIeSlot_CS {
    RedfishCS_int64                         *Lanes;      // This is the number of PCIe
                                                         // lanes supported by this slot.
    RedfishPCIeSlots_V1_1_0_PCIeLinks_CS    *Links;      // Contains references to other
                                                         // resources that are related to
                                                         // this resource.
    RedfishCS_Link                          Location;    // The Location of the PCIe slot.
    RedfishResource_Oem_CS                  *Oem;        // Oem extension object.
    RedfishCS_char                          *PCIeType;    // This is the PCIe specification
                                                         // supported by this slot.
    RedfishCS_char                          *SlotType;    // This is the PCIe slot type for
                                                         // this slot.
    RedfishResource_Status_CS               *Status;     // This property describes the
                                                         // status and health of the
                                                         // resource and its children.
} RedfishPCIeSlots_V1_1_0_PCIeSlot_CS;

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
// This is the schema definition for the PCIe Slot properties.
//
typedef struct _RedfishPCIeSlots_V1_1_0_PCIeSlots_CS {
    RedfishCS_Header                             Header;
    RedfishCS_char                               *odata_context;
    RedfishCS_char                               *odata_etag;  
    RedfishCS_char                               *odata_id;    
    RedfishCS_char                               *odata_type;  
    RedfishPCIeSlots_V1_1_0_Actions_CS           *Actions;         // The available actions for this
                                                                   // resource.
    RedfishCS_char                               *Description; 
    RedfishCS_bool                               *HotPluggable;    // Indicates whether the PCIe
                                                                   // slot supports hotplug.
    RedfishCS_char                               *Id;          
    RedfishCS_char                               *Name;        
    RedfishResource_Oem_CS                       *Oem;             // This is the
                                                                   // manufacturer/provider specific
                                                                   // extension moniker used to
                                                                   // divide the Oem object into
                                                                   // sections.
    RedfishPCIeSlots_V1_1_0_PCIeSlot_Array_CS    *Slots;           // An array of PCI Slot
                                                                   // information.
} RedfishPCIeSlots_V1_1_0_PCIeSlots_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

typedef struct _RedfishPCIeSlots_V1_1_0_PCIeSlot_Array_CS  {
    RedfishPCIeSlots_V1_1_0_PCIeSlot_Array_CS    *Next;
    RedfishPCIeSlots_V1_1_0_PCIeSlot_CS    *ArrayValue;
} RedfishPCIeSlots_V1_1_0_PCIeSlot_Array_CS;

RedfishCS_status
Json_PCIeSlots_V1_1_0_To_CS (char *JsonRawText, RedfishPCIeSlots_V1_1_0_PCIeSlots_CS **ReturnedCS);

RedfishCS_status
CS_To_PCIeSlots_V1_1_0_JSON (RedfishPCIeSlots_V1_1_0_PCIeSlots_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyPCIeSlots_V1_1_0_CS (RedfishPCIeSlots_V1_1_0_PCIeSlots_CS *CSPtr);

RedfishCS_status
DestroyPCIeSlots_V1_1_0_Json (RedfishCS_char *JsonText);

#endif
