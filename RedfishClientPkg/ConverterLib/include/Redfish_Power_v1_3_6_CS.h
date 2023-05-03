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

#ifndef RedfishPower_V1_3_6_CSTRUCT_H_
#define RedfishPower_V1_3_6_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef Redfishodatav4_idRef_Array_CS_
typedef struct _Redfishodatav4_idRef_Array_CS Redfishodatav4_idRef_Array_CS;
#endif
typedef struct _RedfishPower_V1_3_6_InputRange_Array_CS RedfishPower_V1_3_6_InputRange_Array_CS;
typedef struct _RedfishPower_V1_3_6_PowerControl_Array_CS RedfishPower_V1_3_6_PowerControl_Array_CS;
typedef struct _RedfishPower_V1_3_6_PowerSupply_Array_CS RedfishPower_V1_3_6_PowerSupply_Array_CS;
typedef struct _RedfishPower_V1_3_6_Voltage_Array_CS RedfishPower_V1_3_6_Voltage_Array_CS;
#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishPower_V1_3_6_Actions_CS RedfishPower_V1_3_6_Actions_CS;
typedef struct _RedfishPower_V1_3_6_InputRange_CS RedfishPower_V1_3_6_InputRange_CS;
typedef struct _RedfishPower_V1_3_6_OemActions_CS RedfishPower_V1_3_6_OemActions_CS;
typedef struct _RedfishPower_V1_3_6_Power_CS RedfishPower_V1_3_6_Power_CS;
typedef struct _RedfishPower_V1_3_6_PowerControl_CS RedfishPower_V1_3_6_PowerControl_CS;
typedef struct _RedfishPower_V1_3_6_PowerControlActions_CS RedfishPower_V1_3_6_PowerControlActions_CS;
typedef struct _RedfishPower_V1_3_6_PowerControlOemActions_CS RedfishPower_V1_3_6_PowerControlOemActions_CS;
typedef struct _RedfishPower_V1_3_6_PowerLimit_CS RedfishPower_V1_3_6_PowerLimit_CS;
typedef struct _RedfishPower_V1_3_6_PowerMetric_CS RedfishPower_V1_3_6_PowerMetric_CS;
typedef struct _RedfishPower_V1_3_6_PowerSupply_CS RedfishPower_V1_3_6_PowerSupply_CS;
typedef struct _RedfishPower_V1_3_6_PowerSupplyActions_CS RedfishPower_V1_3_6_PowerSupplyActions_CS;
typedef struct _RedfishPower_V1_3_6_PowerSupplyOemActions_CS RedfishPower_V1_3_6_PowerSupplyOemActions_CS;
typedef struct _RedfishPower_V1_3_6_Voltage_CS RedfishPower_V1_3_6_Voltage_CS;
typedef struct _RedfishPower_V1_3_6_VoltageActions_CS RedfishPower_V1_3_6_VoltageActions_CS;
typedef struct _RedfishPower_V1_3_6_VoltageOemActions_CS RedfishPower_V1_3_6_VoltageOemActions_CS;
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
typedef struct _RedfishPower_V1_3_6_Actions_CS {
    RedfishPower_V1_3_6_OemActions_CS    *Oem;    // The available OEM-specific
                                                 // actions for this Resource.
} RedfishPower_V1_3_6_Actions_CS;

//
// This type describes an input range for a power supply.
//
typedef struct _RedfishPower_V1_3_6_InputRange_CS {
    RedfishCS_char            *InputType;            // The Input type (AC or DC).
    RedfishCS_int64           *MaximumFrequencyHz;    // The maximum line input
                                                     // frequency at which this power
                                                     // supply input range is
                                                     // effective.
    RedfishCS_int64           *MaximumVoltage;       // The maximum line input voltage
                                                     // at which this power supply
                                                     // input range is effective.
    RedfishCS_int64           *MinimumFrequencyHz;    // The minimum line input
                                                     // frequency at which this power
                                                     // supply input range is
                                                     // effective.
    RedfishCS_int64           *MinimumVoltage;       // The minimum line input voltage
                                                     // at which this power supply
                                                     // input range is effective.
    RedfishResource_Oem_CS    *Oem;                  // The OEM extension property.
    RedfishCS_int64           *OutputWattage;        // The maximum capacity of this
                                                     // power supply when operating in
                                                     // this input range.
} RedfishPower_V1_3_6_InputRange_CS;

//
// The available OEM-specific actions for this Resource.
//
typedef struct _RedfishPower_V1_3_6_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishPower_V1_3_6_OemActions_CS;

typedef struct _RedfishPower_V1_3_6_PowerControl_CS {
    RedfishCS_char                                *odata_id;             
    RedfishPower_V1_3_6_PowerControlActions_CS    *Actions;                  // The available actions for this
                                                                             // Resource.
    RedfishCS_char                                *MemberId;                 // The identifier for the member
                                                                             // within the collection.
    RedfishCS_char                                *Name;                     // The power control function
                                                                             // name.
    RedfishResource_Oem_CS                        *Oem;                      // The OEM extension property.
    RedfishCS_int64                               *PowerAllocatedWatts;      // The total amount of power that
                                                                             // has been allocated or budgeted
                                                                             // to chassis.
    RedfishCS_int64                               *PowerAvailableWatts;      // The amount of reserve power
                                                                             // capacity, in watts, that
                                                                             // remains.  This value is the
                                                                             // PowerCapacity value minus the
                                                                             // PowerAllocated value.
    RedfishCS_int64                               *PowerCapacityWatts;       // The total amount of power that
                                                                             // can be allocated to the
                                                                             // chassis.  This value can be
                                                                             // either the power supply
                                                                             // capacity or the power budget
                                                                             // that an upstream chassis
                                                                             // assigns to this chassis.
    RedfishCS_int64                               *PowerConsumedWatts;       // The actual power that the
                                                                             // chassis consumes, in watts.
    RedfishPower_V1_3_6_PowerLimit_CS             *PowerLimit;               // The power limit status and
                                                                             // configuration information for
                                                                             // this chassis.
    RedfishPower_V1_3_6_PowerMetric_CS            *PowerMetrics;             // The power readings for this
                                                                             // chassis.
    RedfishCS_int64                               *PowerRequestedWatts;      // The potential power, in watts,
                                                                             // that the chassis requests,
                                                                             // which may be higher than the
                                                                             // current level being consumed
                                                                             // because the requested power
                                                                             // includes a budget that the
                                                                             // chassis wants for future use.
    Redfishodatav4_idRef_Array_CS                 *RelatedItem;              // An array of one or more IDs of
                                                                             // the Resources associated with
                                                                             // this power limit.
    RedfishCS_int64                               *RelatedItemodata_count;
    RedfishResource_Status_CS                     *Status;                   // The status and health of the
                                                                             // Resource and its subordinate
                                                                             // or dependent Resources.
} RedfishPower_V1_3_6_PowerControl_CS;

//
// The available actions for this Resource.
//
typedef struct _RedfishPower_V1_3_6_PowerControlActions_CS {
    RedfishPower_V1_3_6_PowerControlOemActions_CS    *Oem;    // The available OEM-specific
                                                             // actions for this Resource.
} RedfishPower_V1_3_6_PowerControlActions_CS;

//
// The available OEM-specific actions for this Resource.
//
typedef struct _RedfishPower_V1_3_6_PowerControlOemActions_CS {
    RedfishCS_Link    Prop;
} RedfishPower_V1_3_6_PowerControlOemActions_CS;

//
// The power limit status and configuration information for the chassis.
//
typedef struct _RedfishPower_V1_3_6_PowerLimit_CS {
    RedfishCS_int64    *CorrectionInMs;    // The time required for the
                                          // limiting process to reduce
                                          // power consumption to below the
                                          // limit.
    RedfishCS_char     *LimitException;    // The action that is taken if
                                          // the power cannot be maintained
                                          // below the LimitInWatts.
    RedfishCS_int64    *LimitInWatts;     // The power limit, in watts.  If
                                          // `null`, power capping is
                                          // disabled.
} RedfishPower_V1_3_6_PowerLimit_CS;

//
// The power metrics for a Resource.
//
typedef struct _RedfishPower_V1_3_6_PowerMetric_CS {
    RedfishCS_int64    *AverageConsumedWatts;    // The average power level over
                                                // the measurement window over
                                                // the last IntervalInMin
                                                // minutes.
    RedfishCS_int64    *IntervalInMin;          // The time interval, or window,
                                                // over which the power metrics
                                                // are measured.
    RedfishCS_int64    *MaxConsumedWatts;       // The highest power consumption
                                                // level, in watts, that has
                                                // occurred over the measurement
                                                // window within the last
                                                // IntervalInMin minutes.
    RedfishCS_int64    *MinConsumedWatts;       // The lowest power consumption
                                                // level, in watts, over the
                                                // measurement window that
                                                // occurred within the last
                                                // IntervalInMin minutes.
} RedfishPower_V1_3_6_PowerMetric_CS;

//
// Details of a power supplies associated with this system or device.
//
typedef struct _RedfishPower_V1_3_6_PowerSupply_CS {
    RedfishCS_char                               *odata_id;             
    RedfishPower_V1_3_6_PowerSupplyActions_CS    *Actions;                  // The available actions for this
                                                                            // Resource.
    RedfishCS_char                               *FirmwareVersion;          // The firmware version for this
                                                                            // power supply.
    RedfishCS_char                               *IndicatorLED;             // The state of The indicator
                                                                            // LED, which identifies the
                                                                            // power supply.
    RedfishPower_V1_3_6_InputRange_Array_CS      *InputRanges;              // The input ranges that the
                                                                            // power supply can use.
    RedfishCS_int64                              *LastPowerOutputWatts;     // The average power output of
                                                                            // this power supply.
    RedfishCS_int64                              *LineInputVoltage;         // The line input voltage at
                                                                            // which the power supply is
                                                                            // operating.
    RedfishCS_char                               *LineInputVoltageType;     // The line voltage type
                                                                            // supported as an input to this
                                                                            // power supply.
    RedfishCS_char                               *Manufacturer;             // The manufacturer of this power
                                                                            // supply.
    RedfishCS_char                               *MemberId;                 // The identifier for the member
                                                                            // within the collection.
    RedfishCS_char                               *Model;                    // The model number for this
                                                                            // power supply.
    RedfishCS_char                               *Name;                     // The name of the power supply.
    RedfishResource_Oem_CS                       *Oem;                      // The OEM extension property.
    RedfishCS_char                               *PartNumber;               // The part number for this power
                                                                            // supply.
    RedfishCS_int64                              *PowerCapacityWatts;       // The maximum capacity of this
                                                                            // power supply.
    RedfishCS_char                               *PowerSupplyType;          // The power supply type (AC or
                                                                            // DC).
    RedfishCS_Link                               Redundancy;                // The set of redundancy groups
                                                                            // for this power supply.
    RedfishCS_int64                              *Redundancyodata_count;
    Redfishodatav4_idRef_Array_CS                *RelatedItem;              // The ID(s) of the Resources
                                                                            // associated with this power
                                                                            // limit.
    RedfishCS_int64                              *RelatedItemodata_count;
    RedfishCS_char                               *SerialNumber;             // The serial number for this
                                                                            // power supply.
    RedfishCS_char                               *SparePartNumber;          // The spare part number for this
                                                                            // power supply.
    RedfishResource_Status_CS                    *Status;                   // The status and health of the
                                                                            // Resource and its subordinate
                                                                            // or dependent Resources.
} RedfishPower_V1_3_6_PowerSupply_CS;

//
// The available actions for this Resource.
//
typedef struct _RedfishPower_V1_3_6_PowerSupplyActions_CS {
    RedfishPower_V1_3_6_PowerSupplyOemActions_CS    *Oem;    // The available OEM-specific
                                                            // actions for this Resource.
} RedfishPower_V1_3_6_PowerSupplyActions_CS;

//
// The available OEM-specific actions for this Resource.
//
typedef struct _RedfishPower_V1_3_6_PowerSupplyOemActions_CS {
    RedfishCS_Link    Prop;
} RedfishPower_V1_3_6_PowerSupplyOemActions_CS;

typedef struct _RedfishPower_V1_3_6_Voltage_CS {
    RedfishCS_char                           *odata_id;                
    RedfishPower_V1_3_6_VoltageActions_CS    *Actions;                     // The available actions for this
                                                                           // Resource.
    RedfishCS_int64                          *LowerThresholdCritical;      // The value at which the reading
                                                                           // is below normal range but not
                                                                           // yet fatal.
    RedfishCS_int64                          *LowerThresholdFatal;         // The value at which the reading
                                                                           // is below normal range and
                                                                           // fatal.
    RedfishCS_int64                          *LowerThresholdNonCritical;    // The value at which the reading
                                                                           // is below normal range.
    RedfishCS_int64                          *MaxReadingRange;             // Maximum value for this sensor.
    RedfishCS_char                           *MemberId;                    // The identifier for the member
                                                                           // within the collection.
    RedfishCS_int64                          *MinReadingRange;             // Minimum value for this sensor.
    RedfishCS_char                           *Name;                        // Voltage sensor name.
    RedfishResource_Oem_CS                   *Oem;                         // The OEM extension property.
    RedfishCS_char                           *PhysicalContext;             // The area or device to which
                                                                           // this voltage measurement
                                                                           // applies.
    RedfishCS_int64                          *ReadingVolts;                // The reading of the voltage
                                                                           // sensor.
    Redfishodatav4_idRef_Array_CS            *RelatedItem;                 // The areas or devices to which
                                                                           // this voltage measurement
                                                                           // applies.
    RedfishCS_int64                          *RelatedItemodata_count;  
    RedfishCS_int64                          *SensorNumber;                // A numerical identifier to
                                                                           // represent the voltage sensor.
    RedfishResource_Status_CS                *Status;                      // The status and health of the
                                                                           // Resource and its subordinate
                                                                           // or dependent Resources.
    RedfishCS_int64                          *UpperThresholdCritical;      // The value at which the reading
                                                                           // is above normal range but not
                                                                           // yet fatal.
    RedfishCS_int64                          *UpperThresholdFatal;         // The value at which the reading
                                                                           // is above normal range and
                                                                           // fatal.
    RedfishCS_int64                          *UpperThresholdNonCritical;    // The value at which the reading
                                                                           // is above normal range.
} RedfishPower_V1_3_6_Voltage_CS;

//
// The available actions for this Resource.
//
typedef struct _RedfishPower_V1_3_6_VoltageActions_CS {
    RedfishPower_V1_3_6_VoltageOemActions_CS    *Oem;    // The available OEM-specific
                                                        // actions for this Resource.
} RedfishPower_V1_3_6_VoltageActions_CS;

//
// The available OEM-specific actions for this Resource.
//
typedef struct _RedfishPower_V1_3_6_VoltageOemActions_CS {
    RedfishCS_Link    Prop;
} RedfishPower_V1_3_6_VoltageOemActions_CS;

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
// The Power schema describes power metrics and represents the properties for
// power consumption and power limiting.
//
typedef struct _RedfishPower_V1_3_6_Power_CS {
    RedfishCS_Header                             Header;
    RedfishCS_char                               *odata_context;          
    RedfishCS_char                               *odata_etag;             
    RedfishCS_char                               *odata_id;               
    RedfishCS_char                               *odata_type;             
    RedfishPower_V1_3_6_Actions_CS               *Actions;                    // The available actions for this
                                                                              // Resource.
    RedfishCS_char                               *Description;            
    RedfishCS_char                               *Id;                     
    RedfishCS_char                               *Name;                   
    RedfishResource_Oem_CS                       *Oem;                        // The OEM extension property.
    RedfishPower_V1_3_6_PowerControl_Array_CS    *PowerControl;               // The set of power control
                                                                              // functions, including power
                                                                              // reading and limiting.
    RedfishCS_int64                              *PowerControlodata_count;
    RedfishPower_V1_3_6_PowerSupply_Array_CS     *PowerSupplies;              // The set of power supplies
                                                                              // associated with this system or
                                                                              // device.
    RedfishCS_int64                              *PowerSuppliesodata_count;
    RedfishCS_Link                               Redundancy;                  // The redundancy information for
                                                                              // the set of power supplies in
                                                                              // this chassis.
    RedfishCS_int64                              *Redundancyodata_count;  
    RedfishPower_V1_3_6_Voltage_Array_CS         *Voltages;                   // The set of voltage sensors for
                                                                              // this chassis.
    RedfishCS_int64                              *Voltagesodata_count;    
} RedfishPower_V1_3_6_Power_CS;

#ifndef Redfishodatav4_idRef_Array_CS_
#define Redfishodatav4_idRef_Array_CS_
typedef struct _Redfishodatav4_idRef_Array_CS  {
    Redfishodatav4_idRef_Array_CS    *Next;
    Redfishodatav4_idRef_CS    *ArrayValue;
} Redfishodatav4_idRef_Array_CS;
#endif

typedef struct _RedfishPower_V1_3_6_InputRange_Array_CS  {
    RedfishPower_V1_3_6_InputRange_Array_CS    *Next;
    RedfishPower_V1_3_6_InputRange_CS    *ArrayValue;
} RedfishPower_V1_3_6_InputRange_Array_CS;

typedef struct _RedfishPower_V1_3_6_PowerControl_Array_CS  {
    RedfishPower_V1_3_6_PowerControl_Array_CS    *Next;
    RedfishPower_V1_3_6_PowerControl_CS    *ArrayValue;
} RedfishPower_V1_3_6_PowerControl_Array_CS;

typedef struct _RedfishPower_V1_3_6_PowerSupply_Array_CS  {
    RedfishPower_V1_3_6_PowerSupply_Array_CS    *Next;
    RedfishPower_V1_3_6_PowerSupply_CS    *ArrayValue;
} RedfishPower_V1_3_6_PowerSupply_Array_CS;

typedef struct _RedfishPower_V1_3_6_Voltage_Array_CS  {
    RedfishPower_V1_3_6_Voltage_Array_CS    *Next;
    RedfishPower_V1_3_6_Voltage_CS    *ArrayValue;
} RedfishPower_V1_3_6_Voltage_Array_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

RedfishCS_status
Json_Power_V1_3_6_To_CS (char *JsonRawText, RedfishPower_V1_3_6_Power_CS **ReturnedCS);

RedfishCS_status
CS_To_Power_V1_3_6_JSON (RedfishPower_V1_3_6_Power_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyPower_V1_3_6_CS (RedfishPower_V1_3_6_Power_CS *CSPtr);

RedfishCS_status
DestroyPower_V1_3_6_Json (RedfishCS_char *JsonText);

#endif
