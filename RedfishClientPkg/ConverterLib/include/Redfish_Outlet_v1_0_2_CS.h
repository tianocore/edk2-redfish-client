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

#ifndef RedfishOutlet_V1_0_2_CSTRUCT_H_
#define RedfishOutlet_V1_0_2_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishOutlet_V1_0_2_Actions_CS RedfishOutlet_V1_0_2_Actions_CS;
typedef struct _RedfishOutlet_V1_0_2_CurrentSensors_CS RedfishOutlet_V1_0_2_CurrentSensors_CS;
typedef struct _RedfishOutlet_V1_0_2_Links_CS RedfishOutlet_V1_0_2_Links_CS;
typedef struct _RedfishOutlet_V1_0_2_OemActions_CS RedfishOutlet_V1_0_2_OemActions_CS;
typedef struct _RedfishOutlet_V1_0_2_Outlet_CS RedfishOutlet_V1_0_2_Outlet_CS;
typedef struct _RedfishOutlet_V1_0_2_PowerControl_CS RedfishOutlet_V1_0_2_PowerControl_CS;
typedef struct _RedfishOutlet_V1_0_2_ResetMetrics_CS RedfishOutlet_V1_0_2_ResetMetrics_CS;
typedef struct _RedfishOutlet_V1_0_2_VoltageSensors_CS RedfishOutlet_V1_0_2_VoltageSensors_CS;
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
typedef struct _RedfishOutlet_V1_0_2_Actions_CS {
    RedfishOutlet_V1_0_2_PowerControl_CS    *Outlet_PowerControl;
    RedfishOutlet_V1_0_2_ResetMetrics_CS    *Outlet_ResetMetrics;
    RedfishOutlet_V1_0_2_OemActions_CS      *Oem;                   // The available OEM-specific
                                                                    // actions for this resource.
} RedfishOutlet_V1_0_2_Actions_CS;

//
// The current sensors for this outlet.
//
typedef struct _RedfishOutlet_V1_0_2_CurrentSensors_CS {
    RedfishCS_Link    Line1;     // Line 1 current sensor.
    RedfishCS_Link    Line2;     // Line 2 current sensor.
    RedfishCS_Link    Line3;     // Line 3 current sensor.
    RedfishCS_Link    Neutral;    // Neutral line current sensor.
} RedfishOutlet_V1_0_2_CurrentSensors_CS;

//
// The links to other resources that are related to this resource.
//
typedef struct _RedfishOutlet_V1_0_2_Links_CS {
    RedfishCS_Link            BranchCircuit;    // A reference to the branch
                                               // circuit related to this
                                               // outlet.
    RedfishResource_Oem_CS    *Oem;            // The OEM extension property.
} RedfishOutlet_V1_0_2_Links_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishOutlet_V1_0_2_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishOutlet_V1_0_2_OemActions_CS;

//
// This action turns the outlet on or off.
//
typedef struct _RedfishOutlet_V1_0_2_PowerControl_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishOutlet_V1_0_2_PowerControl_CS;

//
// This action resets metrics related to this outlet.
//
typedef struct _RedfishOutlet_V1_0_2_ResetMetrics_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishOutlet_V1_0_2_ResetMetrics_CS;

//
// The voltage readings for this outlet.
//
typedef struct _RedfishOutlet_V1_0_2_VoltageSensors_CS {
    RedfishCS_Link    Line1ToLine2;     // The Line 1 to Line 2 voltage
                                        // reading for this outlet.
    RedfishCS_Link    Line1ToNeutral;    // The Line 1 to Neutral voltage
                                        // reading for this outlet.
    RedfishCS_Link    Line2ToLine3;     // The Line 2 to Line 3 voltage
                                        // reading for this outlet.
    RedfishCS_Link    Line2ToNeutral;    // The Line 2 to Neutral voltage
                                        // reading for this outlet.
    RedfishCS_Link    Line3ToLine1;     // The Line 3 to Line 1 voltage
                                        // reading for this outlet.
    RedfishCS_Link    Line3ToNeutral;    // The Line 3 to Neutral voltage
                                        // reading for this outlet.
} RedfishOutlet_V1_0_2_VoltageSensors_CS;

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
// The Outlet schema contains definition for an electrical outlet.
//
typedef struct _RedfishOutlet_V1_0_2_Outlet_CS {
    RedfishCS_Header                          Header;
    RedfishCS_char                            *odata_context;          
    RedfishCS_char                            *odata_etag;             
    RedfishCS_char                            *odata_id;               
    RedfishCS_char                            *odata_type;             
    RedfishOutlet_V1_0_2_Actions_CS           *Actions;                    // The available actions for this
                                                                           // resource.
    RedfishCS_Link                            CurrentAmps;                 // The current reading for this
                                                                           // single phase outlet.
    RedfishCS_char                            *Description;            
    RedfishCS_char                            *ElectricalContext;          // The combination of current-
                                                                           // carrying conductors.
    RedfishCS_Link                            EnergykWh;                   // The energy reading for this
                                                                           // outlet.
    RedfishCS_Link                            FrequencyHz;                 // The frequency reading for this
                                                                           // outlet.
    RedfishCS_char                            *Id;                     
    RedfishCS_char                            *IndicatorLED;               // The state of the indicator
                                                                           // LED, which identifies the
                                                                           // outlet.
    RedfishOutlet_V1_0_2_Links_CS             *Links;                      // The links to other resources
                                                                           // that are related to this
                                                                           // resource.
    RedfishCS_char                            *Name;                   
    RedfishCS_char                            *NominalVoltage;             // The nominal voltage for this
                                                                           // outlet.
    RedfishResource_Oem_CS                    *Oem;                        // The OEM extension property.
    RedfishCS_char                            *OutletType;                 // The type of receptacle
                                                                           // according to NEMA, IEC, or
                                                                           // regional standards.
    RedfishCS_char                            *PhaseWiringType;            // The number of ungrounded
                                                                           // current-carrying conductors
                                                                           // (phases) and the total number
                                                                           // of conductors (wires).
    RedfishOutlet_V1_0_2_CurrentSensors_CS    *PolyPhaseCurrentAmps;       // The current readings for this
                                                                           // outlet.
    RedfishOutlet_V1_0_2_VoltageSensors_CS    *PolyPhaseVoltage;           // The voltage readings for this
                                                                           // outlet.
    RedfishCS_int64                           *PowerCycleDelaySeconds;     // The number of seconds to delay
                                                                           // power on after a PowerControl
                                                                           // action to cycle power.  Zero
                                                                           // seconds indicates no delay.
    RedfishCS_bool                            *PowerEnabled;               // Indicates if the outlet can be
                                                                           // powered.
    RedfishCS_int64                           *PowerOffDelaySeconds;       // The number of seconds to delay
                                                                           // power off after a PowerControl
                                                                           // action.  Zero seconds
                                                                           // indicates no delay to power
                                                                           // off.
    RedfishCS_int64                           *PowerOnDelaySeconds;        // The number of seconds to delay
                                                                           // power up after a power cycle
                                                                           // or a PowerControl action.
                                                                           // Zero seconds indicates no
                                                                           // delay to power up.
    RedfishCS_int64                           *PowerRestoreDelaySeconds;    // The number of seconds to delay
                                                                           // power on after power has been
                                                                           // restored.  Zero seconds
                                                                           // indicates no delay.
    RedfishCS_char                            *PowerRestorePolicy;         // The desired power state of the
                                                                           // outlet when power is restored
                                                                           // after a power loss.
    RedfishCS_char                            *PowerState;                 // The power state of the outlet.
    RedfishCS_Link                            PowerWatts;                  // The power reading for this
                                                                           // outlet.
    RedfishCS_int64                           *RatedCurrentAmps;           // The rated maximum current
                                                                           // allowed for this outlet.
    RedfishResource_Status_CS                 *Status;                     // The status and health of the
                                                                           // resource and its subordinate
                                                                           // or dependent resources.
    RedfishCS_Link                            Voltage;                     // The voltage reading for this
                                                                           // single phase outlet.
    RedfishCS_char                            *VoltageType;                // The type of voltage applied to
                                                                           // the outlet.
} RedfishOutlet_V1_0_2_Outlet_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

RedfishCS_status
Json_Outlet_V1_0_2_To_CS (char *JsonRawText, RedfishOutlet_V1_0_2_Outlet_CS **ReturnedCS);

RedfishCS_status
CS_To_Outlet_V1_0_2_JSON (RedfishOutlet_V1_0_2_Outlet_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyOutlet_V1_0_2_CS (RedfishOutlet_V1_0_2_Outlet_CS *CSPtr);

RedfishCS_status
DestroyOutlet_V1_0_2_Json (RedfishCS_char *JsonText);

#endif
