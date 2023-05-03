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

#ifndef RedfishPowersupplymetrics_V1_0_0_CSTRUCT_H_
#define RedfishPowersupplymetrics_V1_0_0_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishPowerSupplyMetrics_V1_0_0_Actions_CS RedfishPowerSupplyMetrics_V1_0_0_Actions_CS;
typedef struct _RedfishPowerSupplyMetrics_V1_0_0_CurrentSensors_CS RedfishPowerSupplyMetrics_V1_0_0_CurrentSensors_CS;
typedef struct _RedfishPowerSupplyMetrics_V1_0_0_OemActions_CS RedfishPowerSupplyMetrics_V1_0_0_OemActions_CS;
typedef struct _RedfishPowerSupplyMetrics_V1_0_0_PowerSensors_CS RedfishPowerSupplyMetrics_V1_0_0_PowerSensors_CS;
typedef struct _RedfishPowerSupplyMetrics_V1_0_0_PowerSupplyMetrics_CS RedfishPowerSupplyMetrics_V1_0_0_PowerSupplyMetrics_CS;
typedef struct _RedfishPowerSupplyMetrics_V1_0_0_ResetMetrics_CS RedfishPowerSupplyMetrics_V1_0_0_ResetMetrics_CS;
typedef struct _RedfishPowerSupplyMetrics_V1_0_0_VoltageSensors_CS RedfishPowerSupplyMetrics_V1_0_0_VoltageSensors_CS;
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
typedef struct _RedfishPowerSupplyMetrics_V1_0_0_Actions_CS {
    RedfishPowerSupplyMetrics_V1_0_0_ResetMetrics_CS    *PowerSupplyMetrics_ResetMetrics;
    RedfishPowerSupplyMetrics_V1_0_0_OemActions_CS      *Oem;                               // The available OEM-specific
                                                                                            // actions for this resource.
} RedfishPowerSupplyMetrics_V1_0_0_Actions_CS;

//
// The current sensors for this power supply.
//
typedef struct _RedfishPowerSupplyMetrics_V1_0_0_CurrentSensors_CS {
    RedfishCS_Link    Input;            // The power supply input.
    RedfishCS_Link    InputSecondary;    // The power supply secondary
                                        // input.
    RedfishCS_Link    Output12Volt;     // The 12V nominal output.
    RedfishCS_Link    Output3Volt;      // The 3V nominal output.
    RedfishCS_Link    Output48Volt;     // The 48V nominal output.
    RedfishCS_Link    Output5Volt;      // The 5V nominal output.
    RedfishCS_Link    OutputAux;        // The auxiliary (AUX) output.
} RedfishPowerSupplyMetrics_V1_0_0_CurrentSensors_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishPowerSupplyMetrics_V1_0_0_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishPowerSupplyMetrics_V1_0_0_OemActions_CS;

//
// The power sensors for this power supply.
//
typedef struct _RedfishPowerSupplyMetrics_V1_0_0_PowerSensors_CS {
    RedfishCS_Link    Input;            // The input power reading for
                                        // the power supply.
    RedfishCS_Link    InputSecondary;    // The secondary input power
                                        // reading for the power supply.
    RedfishCS_Link    Output;           // The output power reading for
                                        // the power supply.
} RedfishPowerSupplyMetrics_V1_0_0_PowerSensors_CS;

//
// This action resets the summary metrics related to this equipment.
//
typedef struct _RedfishPowerSupplyMetrics_V1_0_0_ResetMetrics_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishPowerSupplyMetrics_V1_0_0_ResetMetrics_CS;

//
// The voltage readings for a power supply.
//
typedef struct _RedfishPowerSupplyMetrics_V1_0_0_VoltageSensors_CS {
    RedfishCS_Link    Input;            // The power supply input.
    RedfishCS_Link    InputSecondary;    // The power supply secondary
                                        // input.
    RedfishCS_Link    Output12Volt;     // The 12V nominal output.
    RedfishCS_Link    Output3Volt;      // The 3V nominal output.
    RedfishCS_Link    Output48Volt;     // The 48V nominal output.
    RedfishCS_Link    Output5Volt;      // The 5V nominal output.
    RedfishCS_Link    OutputAux;        // The auxiliary (AUX) output.
} RedfishPowerSupplyMetrics_V1_0_0_VoltageSensors_CS;

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
// The PowerSupplyMetrics schema contains definitions for the metrics of a power
// supply.
//
typedef struct _RedfishPowerSupplyMetrics_V1_0_0_PowerSupplyMetrics_CS {
    RedfishCS_Header                               Header;
    RedfishCS_char                                 *odata_context;            
    RedfishCS_char                                 *odata_etag;               
    RedfishCS_char                                 *odata_id;                 
    RedfishCS_char                                 *odata_type;               
    RedfishPowerSupplyMetrics_V1_0_0_Actions_CS    *Actions;                      // The available actions for this
                                                                                  // resource.
    RedfishCS_char                                 *Description;              
    RedfishCS_Link                                 EnergykWh;                     // The energy consumption of this
                                                                                  // unit.
    RedfishCS_Link                                 FanSpeedPercent;               // The fan speed reading for this
                                                                                  // power supply.
    RedfishCS_Link                                 FrequencyHz;                   // The frequency reading for this
                                                                                  // power supply.
    RedfishCS_char                                 *Id;                       
    RedfishCS_Link                                 InputCurrentAmps;              // The input current reading for
                                                                                  // this power supply.
    RedfishCS_Link                                 InputPowerWatts;               // The input power reading for
                                                                                  // this power supply.
    RedfishCS_Link                                 InputVoltage;                  // The input voltage reading for
                                                                                  // this power supply.
    RedfishCS_char                                 *Name;                     
    RedfishResource_Oem_CS                         *Oem;                          // The OEM extension property.
    RedfishCS_Link                                 OutputPowerWatts;              // The total power output reading
                                                                                  // for this power supply.
    RedfishCS_Link                                 RailCurrentAmps;               // The current readings for this
                                                                                  // power supply.
    RedfishCS_int64                                *RailCurrentAmpsodata_count;
    RedfishCS_Link                                 RailPowerWatts;                // The power readings for this
                                                                                  // power supply.
    RedfishCS_int64                                *RailPowerWattsodata_count;
    RedfishCS_Link                                 RailVoltage;                   // The voltage readings for this
                                                                                  // power supply.
    RedfishCS_int64                                *RailVoltageodata_count;   
    RedfishResource_Status_CS                      *Status;                       // The status and health of the
                                                                                  // resource and its subordinate
                                                                                  // or dependent resources.
    RedfishCS_Link                                 TemperatureCelsius;            // The temperature reading for
                                                                                  // this power supply.
} RedfishPowerSupplyMetrics_V1_0_0_PowerSupplyMetrics_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

RedfishCS_status
Json_PowerSupplyMetrics_V1_0_0_To_CS (char *JsonRawText, RedfishPowerSupplyMetrics_V1_0_0_PowerSupplyMetrics_CS **ReturnedCS);

RedfishCS_status
CS_To_PowerSupplyMetrics_V1_0_0_JSON (RedfishPowerSupplyMetrics_V1_0_0_PowerSupplyMetrics_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyPowerSupplyMetrics_V1_0_0_CS (RedfishPowerSupplyMetrics_V1_0_0_PowerSupplyMetrics_CS *CSPtr);

RedfishCS_status
DestroyPowerSupplyMetrics_V1_0_0_Json (RedfishCS_char *JsonText);

#endif
