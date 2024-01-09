//
// Auto-generated file by Redfish Schema C Structure Generator.
// https://github.com/DMTF/Redfish-Schema-C-Struct-Generator.
//
//  (C) Copyright 2019-2022 Hewlett Packard Enterprise Development LP<BR>
//  Copyright (c) 2023-2024, NVIDIA CORPORATION & AFFILIATES. All rights reserved.
//  Copyright (C) 2024 Advanced Micro Devices, Inc. All rights reserved.<BR>
//
// Copyright Notice:
// Copyright 2019-2024 Distributed Management Task Force, Inc. All rights reserved.
// License: BSD 3-Clause License. For full text see link: https://github.com/DMTF/Redfish-JSON-C-Struct-Converter/blob/master/LICENSE.md
//

#ifndef RedfishBatterymetrics_V1_0_0_CSTRUCT_H_
#define RedfishBatterymetrics_V1_0_0_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishBatteryMetrics_V1_0_0_Actions_CS RedfishBatteryMetrics_V1_0_0_Actions_CS;
typedef struct _RedfishBatteryMetrics_V1_0_0_BatteryMetrics_CS RedfishBatteryMetrics_V1_0_0_BatteryMetrics_CS;
typedef struct _RedfishBatteryMetrics_V1_0_0_OemActions_CS RedfishBatteryMetrics_V1_0_0_OemActions_CS;
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
typedef struct _RedfishBatteryMetrics_V1_0_0_Actions_CS {
    RedfishBatteryMetrics_V1_0_0_OemActions_CS    *Oem;    // The available OEM-specific
                                                          // actions for this resource.
} RedfishBatteryMetrics_V1_0_0_Actions_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishBatteryMetrics_V1_0_0_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishBatteryMetrics_V1_0_0_OemActions_CS;

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
// The BatteryMetrics schema contains definitions for the metrics of a battery
// unit.
//
typedef struct _RedfishBatteryMetrics_V1_0_0_BatteryMetrics_CS {
    RedfishCS_Header                           Header;
    RedfishCS_char                             *odata_context;              
    RedfishCS_char                             *odata_etag;                 
    RedfishCS_char                             *odata_id;                   
    RedfishCS_char                             *odata_type;                 
    RedfishBatteryMetrics_V1_0_0_Actions_CS    *Actions;                        // The available actions for this
                                                                                // resource.
    RedfishCS_Link                             CellVoltages;                    // The cell voltage readings for
                                                                                // this battery.
    RedfishCS_int64                            *CellVoltagesodata_count;    
    RedfishCS_Link                             ChargePercent;                   // The amount of charge available
                                                                                // in this battery as a
                                                                                // percentage.
    RedfishCS_char                             *Description;                
    RedfishCS_int64                            *DischargeCycles;                // The number of discharges this
                                                                                // battery sustained.
    RedfishCS_char                             *Id;                         
    RedfishCS_Link                             InputCurrentAmps;                // The input current reading for
                                                                                // this battery.
    RedfishCS_Link                             InputVoltage;                    // The input voltage reading for
                                                                                // this battery.
    RedfishCS_char                             *Name;                       
    RedfishResource_Oem_CS                     *Oem;                            // The OEM extension property.
    RedfishCS_Link                             OutputCurrentAmps;               // The output current readings
                                                                                // for this battery.
    RedfishCS_int64                            *OutputCurrentAmpsodata_count;
    RedfishCS_Link                             OutputVoltages;                  // The output voltage readings
                                                                                // for this battery.
    RedfishCS_int64                            *OutputVoltagesodata_count;  
    RedfishResource_Status_CS                  *Status;                         // The status and health of the
                                                                                // resource and its subordinate
                                                                                // or dependent resources.
    RedfishCS_Link                             StoredChargeAmpHours;            // The charge stored in this
                                                                                // battery in amp-hours.
    RedfishCS_Link                             StoredEnergyWattHours;           // The energy stored in this
                                                                                // battery in watt-hours.
    RedfishCS_Link                             TemperatureCelsius;              // The temperature reading for
                                                                                // this battery.
} RedfishBatteryMetrics_V1_0_0_BatteryMetrics_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

RedfishCS_status
Json_BatteryMetrics_V1_0_0_To_CS (char *JsonRawText, RedfishBatteryMetrics_V1_0_0_BatteryMetrics_CS **ReturnedCS);

RedfishCS_status
CS_To_BatteryMetrics_V1_0_0_JSON (RedfishBatteryMetrics_V1_0_0_BatteryMetrics_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyBatteryMetrics_V1_0_0_CS (RedfishBatteryMetrics_V1_0_0_BatteryMetrics_CS *CSPtr);

RedfishCS_status
DestroyBatteryMetrics_V1_0_0_Json (RedfishCS_char *JsonText);

#endif
