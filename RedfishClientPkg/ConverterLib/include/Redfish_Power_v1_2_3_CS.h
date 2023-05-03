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

#ifndef RedfishPower_V1_2_3_CSTRUCT_H_
#define RedfishPower_V1_2_3_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef Redfishodata_V4_0_0_idRef_Array_CS_
typedef struct _Redfishodata_V4_0_0_idRef_Array_CS Redfishodata_V4_0_0_idRef_Array_CS;
#endif
typedef struct _RedfishPower_V1_2_3_InputRange_Array_CS RedfishPower_V1_2_3_InputRange_Array_CS;
typedef struct _RedfishPower_V1_2_3_PowerControl_Array_CS RedfishPower_V1_2_3_PowerControl_Array_CS;
typedef struct _RedfishPower_V1_2_3_PowerSupply_Array_CS RedfishPower_V1_2_3_PowerSupply_Array_CS;
typedef struct _RedfishPower_V1_2_3_Voltage_Array_CS RedfishPower_V1_2_3_Voltage_Array_CS;
#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishPower_V1_2_3_InputRange_CS RedfishPower_V1_2_3_InputRange_CS;
typedef struct _RedfishPower_V1_2_3_Power_CS RedfishPower_V1_2_3_Power_CS;
typedef struct _RedfishPower_V1_2_3_PowerControl_CS RedfishPower_V1_2_3_PowerControl_CS;
typedef struct _RedfishPower_V1_2_3_PowerLimit_CS RedfishPower_V1_2_3_PowerLimit_CS;
typedef struct _RedfishPower_V1_2_3_PowerMetric_CS RedfishPower_V1_2_3_PowerMetric_CS;
typedef struct _RedfishPower_V1_2_3_PowerSupply_CS RedfishPower_V1_2_3_PowerSupply_CS;
typedef struct _RedfishPower_V1_2_3_Voltage_CS RedfishPower_V1_2_3_Voltage_CS;
#ifndef RedfishResource_Condition_CS_
typedef struct _RedfishResource_Condition_CS RedfishResource_Condition_CS;
#endif

#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

#ifndef RedfishResource_Status_CS_
typedef struct _RedfishResource_Status_CS RedfishResource_Status_CS;
#endif

#ifndef Redfishodata_V4_0_0_idRef_CS_
typedef struct _Redfishodata_V4_0_0_idRef_CS Redfishodata_V4_0_0_idRef_CS;
#endif

#ifndef Redfishodatav4_idRef_CS_
typedef struct _Redfishodatav4_idRef_CS Redfishodatav4_idRef_CS;
#endif

//
// This type describes an input range for a power supply.
//
typedef struct _RedfishPower_V1_2_3_InputRange_CS {
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
    RedfishResource_Oem_CS    *Oem;              
    RedfishCS_int64           *OutputWattage;        // The maximum capacity of this
                                                     // Power Supply when operating in
                                                     // this input range.
} RedfishPower_V1_2_3_InputRange_CS;

//
// This is the base type for addressable members of an array.
//
typedef struct _RedfishPower_V1_2_3_PowerControl_CS {
    RedfishCS_char                        *MemberId;                          // This is the identifier for the
                                                                              // member within the collection.
    RedfishCS_char                        *Name;                              // Power Control Function name.
    RedfishResource_Oem_CS                *Oem;                               // This is the
                                                                              // manufacturer/provider specific
                                                                              // extension moniker used to
                                                                              // divide the Oem object into
                                                                              // sections.
    RedfishCS_int64                       *PowerAllocatedWatts;               // The total amount of power that
                                                                              // has been allocated (or
                                                                              // budegeted)to  chassis
                                                                              // resources.
    RedfishCS_int64                       *PowerAvailableWatts;               // The amount of power not
                                                                              // already budgeted and therefore
                                                                              // available for additional
                                                                              // allocation. (powerCapacity -
                                                                              // powerAllocated).  This
                                                                              // indicates how much reserve
                                                                              // power capacity is left.
    RedfishCS_int64                       *PowerCapacityWatts;                // The total amount of power
                                                                              // available to the chassis for
                                                                              // allocation. This may the power
                                                                              // supply capacity, or power
                                                                              // budget assigned to the chassis
                                                                              // from an up-stream chassis.
    RedfishCS_int64                       *PowerConsumedWatts;                // The actual power being
                                                                              // consumed by the chassis.
    RedfishPower_V1_2_3_PowerLimit_CS     *PowerLimit;                        // Power limit status and
                                                                              // configuration information for
                                                                              // this chassis.
    RedfishPower_V1_2_3_PowerMetric_CS    *PowerMetrics;                      // Power readings for this
                                                                              // chassis.
    RedfishCS_int64                       *PowerRequestedWatts;               // The potential power that the
                                                                              // chassis resources are
                                                                              // requesting which may be higher
                                                                              // than the current level being
                                                                              // consumed since requested power
                                                                              // includes budget that the
                                                                              // chassis resource wants for
                                                                              // future use.
    Redfishodata_V4_0_0_idRef_Array_CS    *RelatedItem;                       // The ID(s) of the resources
                                                                              // associated with this Power
                                                                              // Limit.
    RedfishCS_int64                       *RelatedItemodata_count;        
    RedfishCS_char                        *RelatedItemodata_navigationLink;
    RedfishResource_Status_CS             *Status;                        
} RedfishPower_V1_2_3_PowerControl_CS;

//
// This object contains power limit status and configuration information for the
// chassis.
//
typedef struct _RedfishPower_V1_2_3_PowerLimit_CS {
    RedfishCS_int64    *CorrectionInMs;    // The time required for the
                                          // limiting process to reduce
                                          // power consumption to below the
                                          // limit.
    RedfishCS_char     *LimitException;    // The action that is taken if
                                          // the power cannot be maintained
                                          // below the LimitInWatts.
    RedfishCS_int64    *LimitInWatts;     // The Power limit in watts. Set
                                          // to null to disable power
                                          // capping.
} RedfishPower_V1_2_3_PowerLimit_CS;

//
// This type describe the power metrics for a resource.
//
typedef struct _RedfishPower_V1_2_3_PowerMetric_CS {
    RedfishCS_int64    *AverageConsumedWatts;    // The average power level over
                                                // the measurement window (the
                                                // last IntervalInMin minutes).
    RedfishCS_int64    *IntervalInMin;          // The time interval (or window)
                                                // in which the PowerMetrics are
                                                // measured over.
    RedfishCS_int64    *MaxConsumedWatts;       // The highest power consumption
                                                // level that has occured over
                                                // the measurement window (the
                                                // last IntervalInMin minutes).
    RedfishCS_int64    *MinConsumedWatts;       // The lowest power consumption
                                                // level over the measurement
                                                // window (the last IntervalInMin
                                                // minutes).
} RedfishPower_V1_2_3_PowerMetric_CS;

//
// Details of a power supplies associated with this system or device.
//
typedef struct _RedfishPower_V1_2_3_PowerSupply_CS {
    RedfishCS_char                             *FirmwareVersion;                   // The firmware version for this
                                                                                   // Power Supply.
    RedfishCS_char                             *IndicatorLED;                      // The state of the indicator
                                                                                   // LED, used to identify the
                                                                                   // power supply.
    RedfishPower_V1_2_3_InputRange_Array_CS    *InputRanges;                       // This is the input ranges that
                                                                                   // the power supply can use.
    RedfishCS_int64                            *LastPowerOutputWatts;              // The average power output of
                                                                                   // this Power Supply.
    RedfishCS_int64                            *LineInputVoltage;                  // The line input voltage at
                                                                                   // which the Power Supply is
                                                                                   // operating.
    RedfishCS_char                             *LineInputVoltageType;              // The line voltage type
                                                                                   // supported as an input to this
                                                                                   // Power Supply.
    RedfishCS_char                             *Manufacturer;                      // This is the manufacturer of
                                                                                   // this power supply.
    RedfishCS_char                             *MemberId;                          // This is the identifier for the
                                                                                   // member within the collection.
    RedfishCS_char                             *Model;                             // The model number for this
                                                                                   // Power Supply.
    RedfishCS_char                             *Name;                              // The name of the Power Supply.
    RedfishResource_Oem_CS                     *Oem;                               // This is the
                                                                                   // manufacturer/provider specific
                                                                                   // extension moniker used to
                                                                                   // divide the Oem object into
                                                                                   // sections.
    RedfishCS_char                             *PartNumber;                        // The part number for this Power
                                                                                   // Supply.
    RedfishCS_int64                            *PowerCapacityWatts;                // The maximum capacity of this
                                                                                   // Power Supply.
    RedfishCS_char                             *PowerSupplyType;                   // The Power Supply type (AC or
                                                                                   // DC).
    RedfishCS_Link                             Redundancy;                         // This structure is used to show
                                                                                   // redundancy for power supplies.
                                                                                   // The Component ids will
                                                                                   // reference the members of the
                                                                                   // redundancy groups.
    RedfishCS_int64                            *Redundancyodata_count;         
    RedfishCS_char                             *Redundancyodata_navigationLink;
    Redfishodata_V4_0_0_idRef_Array_CS         *RelatedItem;                       // The ID(s) of the resources
                                                                                   // associated with this Power
                                                                                   // Limit.
    RedfishCS_int64                            *RelatedItemodata_count;        
    RedfishCS_char                             *RelatedItemodata_navigationLink;
    RedfishCS_char                             *SerialNumber;                      // The serial number for this
                                                                                   // Power Supply.
    RedfishCS_char                             *SparePartNumber;                   // The spare part number for this
                                                                                   // Power Supply.
    RedfishResource_Status_CS                  *Status;                        
} RedfishPower_V1_2_3_PowerSupply_CS;

//
// This is the base type for addressable members of an array.
//
typedef struct _RedfishPower_V1_2_3_Voltage_CS {
    RedfishCS_int64                       *LowerThresholdCritical;            // Below normal range but not yet
                                                                              // fatal.
    RedfishCS_int64                       *LowerThresholdFatal;               // Below normal range and is
                                                                              // fatal.
    RedfishCS_int64                       *LowerThresholdNonCritical;         // Below normal range.
    RedfishCS_int64                       *MaxReadingRange;                   // Maximum value for this Voltage
                                                                              // sensor.
    RedfishCS_char                        *MemberId;                          // This is the identifier for the
                                                                              // member within the collection.
    RedfishCS_int64                       *MinReadingRange;                   // Minimum value for this Voltage
                                                                              // sensor.
    RedfishCS_char                        *Name;                              // Voltage sensor name.
    RedfishResource_Oem_CS                *Oem;                               // This is the
                                                                              // manufacturer/provider specific
                                                                              // extension moniker used to
                                                                              // divide the Oem object into
                                                                              // sections.
    RedfishCS_Link                        PhysicalContext;                    // Describes the area or device
                                                                              // to which this voltage
                                                                              // measurement applies.
    RedfishCS_int64                       *ReadingVolts;                      // The present reading of the
                                                                              // voltage sensor.
    Redfishodata_V4_0_0_idRef_Array_CS    *RelatedItem;                       // Describes the areas or devices
                                                                              // to which this voltage
                                                                              // measurement applies.
    RedfishCS_int64                       *RelatedItemodata_count;        
    RedfishCS_char                        *RelatedItemodata_navigationLink;
    RedfishCS_int64                       *SensorNumber;                      // A numerical identifier to
                                                                              // represent the voltage sensor.
    RedfishResource_Status_CS             *Status;                        
    RedfishCS_int64                       *UpperThresholdCritical;            // Above normal range but not yet
                                                                              // fatal.
    RedfishCS_int64                       *UpperThresholdFatal;               // Above normal range and is
                                                                              // fatal.
    RedfishCS_int64                       *UpperThresholdNonCritical;         // Above normal range.
} RedfishPower_V1_2_3_Voltage_CS;

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
#ifndef Redfishodata_V4_0_0_idRef_CS_
#define Redfishodata_V4_0_0_idRef_CS_
typedef struct _Redfishodata_V4_0_0_idRef_CS {
    RedfishCS_char    *odata_id;
} Redfishodata_V4_0_0_idRef_CS;
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
// This is the schema definition for the Power Metrics.  It represents the
// properties for Power Consumption and Power Limiting.
//
typedef struct _RedfishPower_V1_2_3_Power_CS {
    RedfishCS_Header                             Header;
    RedfishCS_char                               *odata_context;                   
    RedfishCS_char                               *odata_id;                        
    RedfishCS_char                               *odata_type;                      
    RedfishCS_char                               *Description;                     
    RedfishCS_char                               *Id;                              
    RedfishCS_char                               *Name;                            
    RedfishResource_Oem_CS                       *Oem;                                 // This is the
                                                                                       // manufacturer/provider specific
                                                                                       // extension moniker used to
                                                                                       // divide the Oem object into
                                                                                       // sections.
    RedfishPower_V1_2_3_PowerControl_Array_CS    *PowerControl;                        // This is the definition for
                                                                                       // power control function (power
                                                                                       // reading/limiting).
    RedfishCS_int64                              *PowerControlodata_count;         
    RedfishCS_char                               *PowerControlodata_navigationLink;
    RedfishPower_V1_2_3_PowerSupply_Array_CS     *PowerSupplies;                       // Details of the power supplies
                                                                                       // associated with this system or
                                                                                       // device.
    RedfishCS_int64                              *PowerSuppliesodata_count;        
    RedfishCS_char                               *PowerSuppliesodata_navigationLink;
    RedfishCS_Link                               Redundancy;                           // Redundancy information for the
                                                                                       // power subsystem of this system
                                                                                       // or device.
    RedfishCS_int64                              *Redundancyodata_count;           
    RedfishCS_char                               *Redundancyodata_navigationLink;  
    RedfishPower_V1_2_3_Voltage_Array_CS         *Voltages;                            // This is the definition for
                                                                                       // voltage sensors.
    RedfishCS_int64                              *Voltagesodata_count;             
    RedfishCS_char                               *Voltagesodata_navigationLink;    
} RedfishPower_V1_2_3_Power_CS;

#ifndef Redfishodata_V4_0_0_idRef_Array_CS_
#define Redfishodata_V4_0_0_idRef_Array_CS_
typedef struct _Redfishodata_V4_0_0_idRef_Array_CS  {
    Redfishodata_V4_0_0_idRef_Array_CS    *Next;
    Redfishodata_V4_0_0_idRef_CS    *ArrayValue;
} Redfishodata_V4_0_0_idRef_Array_CS;
#endif

typedef struct _RedfishPower_V1_2_3_InputRange_Array_CS  {
    RedfishPower_V1_2_3_InputRange_Array_CS    *Next;
    RedfishPower_V1_2_3_InputRange_CS    *ArrayValue;
} RedfishPower_V1_2_3_InputRange_Array_CS;

typedef struct _RedfishPower_V1_2_3_PowerControl_Array_CS  {
    RedfishPower_V1_2_3_PowerControl_Array_CS    *Next;
    RedfishPower_V1_2_3_PowerControl_CS    *ArrayValue;
} RedfishPower_V1_2_3_PowerControl_Array_CS;

typedef struct _RedfishPower_V1_2_3_PowerSupply_Array_CS  {
    RedfishPower_V1_2_3_PowerSupply_Array_CS    *Next;
    RedfishPower_V1_2_3_PowerSupply_CS    *ArrayValue;
} RedfishPower_V1_2_3_PowerSupply_Array_CS;

typedef struct _RedfishPower_V1_2_3_Voltage_Array_CS  {
    RedfishPower_V1_2_3_Voltage_Array_CS    *Next;
    RedfishPower_V1_2_3_Voltage_CS    *ArrayValue;
} RedfishPower_V1_2_3_Voltage_Array_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

RedfishCS_status
Json_Power_V1_2_3_To_CS (char *JsonRawText, RedfishPower_V1_2_3_Power_CS **ReturnedCS);

RedfishCS_status
CS_To_Power_V1_2_3_JSON (RedfishPower_V1_2_3_Power_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyPower_V1_2_3_CS (RedfishPower_V1_2_3_Power_CS *CSPtr);

RedfishCS_status
DestroyPower_V1_2_3_Json (RedfishCS_char *JsonText);

#endif
