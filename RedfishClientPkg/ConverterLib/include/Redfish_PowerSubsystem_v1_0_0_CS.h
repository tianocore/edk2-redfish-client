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

#ifndef RedfishPowersubsystem_V1_0_0_CSTRUCT_H_
#define RedfishPowersubsystem_V1_0_0_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishPowerSubsystem_V1_0_0_Actions_CS RedfishPowerSubsystem_V1_0_0_Actions_CS;
typedef struct _RedfishPowerSubsystem_V1_0_0_OemActions_CS RedfishPowerSubsystem_V1_0_0_OemActions_CS;
typedef struct _RedfishPowerSubsystem_V1_0_0_PowerAllocation_CS RedfishPowerSubsystem_V1_0_0_PowerAllocation_CS;
typedef struct _RedfishPowerSubsystem_V1_0_0_PowerSubsystem_CS RedfishPowerSubsystem_V1_0_0_PowerSubsystem_CS;
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
typedef struct _RedfishPowerSubsystem_V1_0_0_Actions_CS {
    RedfishPowerSubsystem_V1_0_0_OemActions_CS    *Oem;    // This property contains the
                                                          // available OEM specific actions
                                                          // for this resource.
} RedfishPowerSubsystem_V1_0_0_Actions_CS;

//
// The available OEM specific actions for this resource.
//
typedef struct _RedfishPowerSubsystem_V1_0_0_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishPowerSubsystem_V1_0_0_OemActions_CS;

//
// Power allocation for a subsystem.
//
typedef struct _RedfishPowerSubsystem_V1_0_0_PowerAllocation_CS {
    RedfishCS_int64    *AllocatedWatts;    // The total amount of power that
                                          // has been allocated or budgeted
                                          // to this subsystem.
    RedfishCS_int64    *RequestedWatts;    // The potential power, in watts,
                                          // that the subsystem requests,
                                          // which might be higher than the
                                          // current level being consumed
                                          // because the requested power
                                          // includes a budget that the
                                          // subsystem wants for future
                                          // use.
} RedfishPowerSubsystem_V1_0_0_PowerAllocation_CS;

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
// This PowerSubsystem schema contains the definition for the power subsystem of a
// chassis.
//
typedef struct _RedfishPowerSubsystem_V1_0_0_PowerSubsystem_CS {
    RedfishCS_Header                                   Header;
    RedfishCS_char                                     *odata_context;      
    RedfishCS_char                                     *odata_etag;         
    RedfishCS_char                                     *odata_id;           
    RedfishCS_char                                     *odata_type;         
    RedfishPowerSubsystem_V1_0_0_Actions_CS            *Actions;                // The available actions for this
                                                                                // resource.
    RedfishPowerSubsystem_V1_0_0_PowerAllocation_CS    *Allocation;             // Power allocation for this
                                                                                // subsystem.
    RedfishCS_int64                                    *CapacityWatts;          // The total amount of power that
                                                                                // can be allocated to this
                                                                                // subsystem.  This value can be
                                                                                // either the power supply
                                                                                // capacity or the power budget
                                                                                // that an upstream chassis
                                                                                // assigns to this subsystem.
    RedfishCS_char                                     *Description;        
    RedfishCS_char                                     *Id;                 
    RedfishCS_char                                     *Name;               
    RedfishResource_Oem_CS                             *Oem;                    // The OEM extension property.
    RedfishCS_Link                                     PowerSupplies;           // The link to the collection of
                                                                                // power supplies within this
                                                                                // subsystem.
    RedfishCS_Link                                     PowerSupplyRedundancy;    // The redundancy information for
                                                                                // the set of power supplies in
                                                                                // this subsystem.
    RedfishResource_Status_CS                          *Status;                 // The status and health of the
                                                                                // resource and its subordinate
                                                                                // or dependent resources.
} RedfishPowerSubsystem_V1_0_0_PowerSubsystem_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

RedfishCS_status
Json_PowerSubsystem_V1_0_0_To_CS (char *JsonRawText, RedfishPowerSubsystem_V1_0_0_PowerSubsystem_CS **ReturnedCS);

RedfishCS_status
CS_To_PowerSubsystem_V1_0_0_JSON (RedfishPowerSubsystem_V1_0_0_PowerSubsystem_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyPowerSubsystem_V1_0_0_CS (RedfishPowerSubsystem_V1_0_0_PowerSubsystem_CS *CSPtr);

RedfishCS_status
DestroyPowerSubsystem_V1_0_0_Json (RedfishCS_char *JsonText);

#endif
