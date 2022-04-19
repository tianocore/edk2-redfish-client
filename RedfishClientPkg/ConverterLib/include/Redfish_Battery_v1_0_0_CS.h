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

#ifndef RedfishBattery_V1_0_0_CSTRUCT_H_
#define RedfishBattery_V1_0_0_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishBattery_V1_0_0_Actions_CS RedfishBattery_V1_0_0_Actions_CS;
typedef struct _RedfishBattery_V1_0_0_Battery_CS RedfishBattery_V1_0_0_Battery_CS;
typedef struct _RedfishBattery_V1_0_0_Calibrate_CS RedfishBattery_V1_0_0_Calibrate_CS;
typedef struct _RedfishBattery_V1_0_0_OemActions_CS RedfishBattery_V1_0_0_OemActions_CS;
typedef struct _RedfishBattery_V1_0_0_Reset_CS RedfishBattery_V1_0_0_Reset_CS;
typedef struct _RedfishBattery_V1_0_0_SelfTest_CS RedfishBattery_V1_0_0_SelfTest_CS;
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
typedef struct _RedfishBattery_V1_0_0_Actions_CS {
    RedfishBattery_V1_0_0_Calibrate_CS     *Battery_Calibrate;
    RedfishBattery_V1_0_0_Reset_CS         *Battery_Reset;   
    RedfishBattery_V1_0_0_SelfTest_CS      *Battery_SelfTest;
    RedfishBattery_V1_0_0_OemActions_CS    *Oem;                 // The available OEM-specific
                                                                 // actions for this resource.
} RedfishBattery_V1_0_0_Actions_CS;

//
// This action performs a self-calibration, or learn cycle, of the battery.
//
typedef struct _RedfishBattery_V1_0_0_Calibrate_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishBattery_V1_0_0_Calibrate_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishBattery_V1_0_0_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishBattery_V1_0_0_OemActions_CS;

//
// This action resets the battery.
//
typedef struct _RedfishBattery_V1_0_0_Reset_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishBattery_V1_0_0_Reset_CS;

//
// This action performs a self-test of the battery.
//
typedef struct _RedfishBattery_V1_0_0_SelfTest_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishBattery_V1_0_0_SelfTest_CS;

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
// The Battery schema describes a battery unit, such as those used to provide
// systems with power during a power loss event.
//
typedef struct _RedfishBattery_V1_0_0_Battery_CS {
    RedfishCS_Header                    Header;
    RedfishCS_char                      *odata_context;         
    RedfishCS_char                      *odata_etag;            
    RedfishCS_char                      *odata_id;              
    RedfishCS_char                      *odata_type;            
    RedfishBattery_V1_0_0_Actions_CS    *Actions;                   // The available actions for this
                                                                    // resource.
    RedfishCS_Link                      Assembly;                   // The link to the assembly
                                                                    // associated with this battery.
    RedfishCS_int64                     *CapacityActualAmpHours;    // The actual maximum capacity of
                                                                    // this battery in amp-hours.
    RedfishCS_int64                     *CapacityActualWattHours;    // The actual maximum capacity of
                                                                    // this battery in watt-hours.
    RedfishCS_int64                     *CapacityRatedAmpHours;     // The rated maximum capacity of
                                                                    // this battery in amp-hours.
    RedfishCS_int64                     *CapacityRatedWattHours;    // The rated maximum capacity of
                                                                    // this battery in watt-hours.
    RedfishCS_char                      *ChargeState;               // The charge state of this
                                                                    // battery.
    RedfishCS_char                      *Description;           
    RedfishCS_char                      *FirmwareVersion;           // The firmware version for this
                                                                    // battery.
    RedfishCS_bool                      *HotPluggable;              // An indication of whether this
                                                                    // device can be inserted or
                                                                    // removed while the equipment is
                                                                    // in operation.
    RedfishCS_char                      *Id;                    
    RedfishCS_Link                      Location;                   // The location of the battery.
    RedfishCS_bool                      *LocationIndicatorActive;    // An indicator allowing an
                                                                    // operator to physically locate
                                                                    // this resource.
    RedfishCS_char                      *Manufacturer;              // The manufacturer of this
                                                                    // battery.
    RedfishCS_int64                     *MaxChargeRateAmps;         // The maximum charge rate of
                                                                    // this battery in amps.
    RedfishCS_int64                     *MaxChargeVoltage;          // The maximum charge voltage of
                                                                    // this battery.
    RedfishCS_int64                     *MaxDischargeRateAmps;      // The maximum discharge rate of
                                                                    // this battery in amps.
    RedfishCS_Link                      Metrics;                    // The link to the battery
                                                                    // metrics resource associated
                                                                    // with this battery.
    RedfishCS_char                      *Model;                     // The model number for this
                                                                    // battery.
    RedfishCS_char                      *Name;                  
    RedfishResource_Oem_CS              *Oem;                       // The OEM extension property.
    RedfishCS_char                      *PartNumber;                // The part number for this
                                                                    // battery.
    RedfishCS_char                      *ProductionDate;            // The production or
                                                                    // manufacturing date of this
                                                                    // battery.
    RedfishCS_char                      *SerialNumber;              // The serial number for this
                                                                    // battery.
    RedfishCS_char                      *SparePartNumber;           // The spare part number for this
                                                                    // battery.
    RedfishCS_Link                      StateOfHealthPercent;       // The state of health of this
                                                                    // battery.
    RedfishResource_Status_CS           *Status;                    // The status and health of the
                                                                    // resource and its subordinate
                                                                    // or dependent resources.
    RedfishCS_char                      *Version;                   // The hardware version of this
                                                                    // battery.
} RedfishBattery_V1_0_0_Battery_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

RedfishCS_status
Json_Battery_V1_0_0_To_CS (char *JsonRawText, RedfishBattery_V1_0_0_Battery_CS **ReturnedCS);

RedfishCS_status
CS_To_Battery_V1_0_0_JSON (RedfishBattery_V1_0_0_Battery_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyBattery_V1_0_0_CS (RedfishBattery_V1_0_0_Battery_CS *CSPtr);

RedfishCS_status
DestroyBattery_V1_0_0_Json (RedfishCS_char *JsonText);

#endif
