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

#ifndef RedfishPowerequipment_V1_0_0_CSTRUCT_H_
#define RedfishPowerequipment_V1_0_0_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishPowerEquipment_V1_0_0_Actions_CS RedfishPowerEquipment_V1_0_0_Actions_CS;
typedef struct _RedfishPowerEquipment_V1_0_0_Links_CS RedfishPowerEquipment_V1_0_0_Links_CS;
typedef struct _RedfishPowerEquipment_V1_0_0_OemActions_CS RedfishPowerEquipment_V1_0_0_OemActions_CS;
typedef struct _RedfishPowerEquipment_V1_0_0_PowerEquipment_CS RedfishPowerEquipment_V1_0_0_PowerEquipment_CS;
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
typedef struct _RedfishPowerEquipment_V1_0_0_Actions_CS {
    RedfishPowerEquipment_V1_0_0_OemActions_CS    *Oem;    // The available OEM-specific
                                                          // actions for this resource.
} RedfishPowerEquipment_V1_0_0_Actions_CS;

//
// The links to other resources that are related to this resource.
//
typedef struct _RedfishPowerEquipment_V1_0_0_Links_CS {
    RedfishCS_Link            ManagedBy;               // An array of links to the
                                                       // managers responsible for
                                                       // managing this power equipment.
    RedfishCS_int64           *ManagedByodata_count;
    RedfishResource_Oem_CS    *Oem;                    // The OEM extension property.
} RedfishPowerEquipment_V1_0_0_Links_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishPowerEquipment_V1_0_0_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishPowerEquipment_V1_0_0_OemActions_CS;

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
// This is the schema definition for the set of power equipment.
//
typedef struct _RedfishPowerEquipment_V1_0_0_PowerEquipment_CS {
    RedfishCS_Header                           Header;
    RedfishCS_char                             *odata_context; 
    RedfishCS_char                             *odata_etag;    
    RedfishCS_char                             *odata_id;      
    RedfishCS_char                             *odata_type;    
    RedfishPowerEquipment_V1_0_0_Actions_CS    *Actions;           // The available actions for this
                                                                   // resource.
    RedfishCS_char                             *Description;   
    RedfishCS_Link                             FloorPDUs;          // A link to a collection of
                                                                   // floor power distribution
                                                                   // units.
    RedfishCS_char                             *Id;            
    RedfishPowerEquipment_V1_0_0_Links_CS      *Links;             // The links to other resources
                                                                   // that are related to this
                                                                   // resource.
    RedfishCS_char                             *Name;          
    RedfishResource_Oem_CS                     *Oem;               // The OEM extension property.
    RedfishCS_Link                             RackPDUs;           // A link to a collection of
                                                                   // rack-level power distribution
                                                                   // units.
    RedfishResource_Status_CS                  *Status;            // The status and health of the
                                                                   // resource and its subordinate
                                                                   // or dependent resources.
    RedfishCS_Link                             Switchgear;         // A link to a collection of
                                                                   // switchgear.
    RedfishCS_Link                             TransferSwitches;    // A link to a collection of
                                                                   // transfer switches.
} RedfishPowerEquipment_V1_0_0_PowerEquipment_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

RedfishCS_status
Json_PowerEquipment_V1_0_0_To_CS (char *JsonRawText, RedfishPowerEquipment_V1_0_0_PowerEquipment_CS **ReturnedCS);

RedfishCS_status
CS_To_PowerEquipment_V1_0_0_JSON (RedfishPowerEquipment_V1_0_0_PowerEquipment_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyPowerEquipment_V1_0_0_CS (RedfishPowerEquipment_V1_0_0_PowerEquipment_CS *CSPtr);

RedfishCS_status
DestroyPowerEquipment_V1_0_0_Json (RedfishCS_char *JsonText);

#endif
