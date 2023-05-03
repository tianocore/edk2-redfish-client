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

#ifndef RedfishThermal_V1_4_5_CSTRUCT_H_
#define RedfishThermal_V1_4_5_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_CS_
#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
#ifndef Redfishodatav4_idRef_Array_CS_
typedef struct _Redfishodatav4_idRef_Array_CS Redfishodatav4_idRef_Array_CS;
#endif
typedef struct _RedfishThermal_V1_4_5_Fan_Array_CS RedfishThermal_V1_4_5_Fan_Array_CS;
typedef struct _RedfishThermal_V1_4_5_Temperature_Array_CS RedfishThermal_V1_4_5_Temperature_Array_CS;
typedef struct _RedfishResource_Condition_CS RedfishResource_Condition_CS;
#endif

#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

#ifndef RedfishResource_Status_CS_
typedef struct _RedfishResource_Status_CS RedfishResource_Status_CS;
#endif

typedef struct _RedfishThermal_V1_4_5_Fan_CS RedfishThermal_V1_4_5_Fan_CS;
typedef struct _RedfishThermal_V1_4_5_FanActions_CS RedfishThermal_V1_4_5_FanActions_CS;
typedef struct _RedfishThermal_V1_4_5_FanOemActions_CS RedfishThermal_V1_4_5_FanOemActions_CS;
typedef struct _RedfishThermal_V1_4_5_Temperature_CS RedfishThermal_V1_4_5_Temperature_CS;
typedef struct _RedfishThermal_V1_4_5_TemperatureActions_CS RedfishThermal_V1_4_5_TemperatureActions_CS;
typedef struct _RedfishThermal_V1_4_5_TemperatureOemActions_CS RedfishThermal_V1_4_5_TemperatureOemActions_CS;
typedef struct _RedfishThermal_V1_4_5_Thermal_CS RedfishThermal_V1_4_5_Thermal_CS;
typedef struct _RedfishThermal_V1_4_5_ThermalActions_CS RedfishThermal_V1_4_5_ThermalActions_CS;
typedef struct _RedfishThermal_V1_4_5_ThermalOemActions_CS RedfishThermal_V1_4_5_ThermalOemActions_CS;
#ifndef Redfishodatav4_idRef_CS_
typedef struct _Redfishodatav4_idRef_CS Redfishodatav4_idRef_CS;
#endif

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

typedef struct _RedfishThermal_V1_4_5_Fan_CS {
    RedfishCS_char                         *odata_id;                
    RedfishThermal_V1_4_5_FanActions_CS    *Actions;                     // The available actions for this
                                                                         // resource.
    RedfishCS_Link                         Assembly;                     // The link to the assembly
                                                                         // associated with this fan.
    RedfishCS_char                         *FanName;                     // The name of the fan.
    RedfishCS_bool                         *HotPluggable;                // An indication of whether this
                                                                         // device can be inserted or
                                                                         // removed while the equipment is
                                                                         // in operation.
    RedfishCS_char                         *IndicatorLED;                // The state of the indicator
                                                                         // LED, which identifies this
                                                                         // fan.
    RedfishCS_Link                         Location;                     // The location of the fan.
    RedfishCS_int64                        *LowerThresholdCritical;      // The value at which the reading
                                                                         // is below normal range but not
                                                                         // yet fatal.
    RedfishCS_int64                        *LowerThresholdFatal;         // The value at which the reading
                                                                         // is below normal range and
                                                                         // fatal.
    RedfishCS_int64                        *LowerThresholdNonCritical;    // The value at which the reading
                                                                         // is below normal range.
    RedfishCS_char                         *Manufacturer;                // The manufacturer of this fan.
    RedfishCS_int64                        *MaxReadingRange;             // Maximum value for this sensor.
    RedfishCS_char                         *MemberId;                    // The identifier for the member
                                                                         // within the collection.
    RedfishCS_int64                        *MinReadingRange;             // Minimum value for this sensor.
    RedfishCS_char                         *Model;                       // The model number for this fan.
    RedfishCS_char                         *Name;                        // Name of the fan.
    RedfishResource_Oem_CS                 *Oem;                         // The OEM extension property.
    RedfishCS_char                         *PartNumber;                  // The part number for this fan.
    RedfishCS_char                         *PhysicalContext;             // The area or device associated
                                                                         // with this fan.
    RedfishCS_int64                        *Reading;                     // The fan speed.
    RedfishCS_char                         *ReadingUnits;                // The units in which the fan
                                                                         // reading and thresholds are
                                                                         // measured.
    RedfishCS_Link                         Redundancy;                   // The set of redundancy groups
                                                                         // for this fan.
    RedfishCS_int64                        *Redundancyodata_count;   
    Redfishodatav4_idRef_Array_CS          *RelatedItem;                 // An array of links to resources
                                                                         // or objects that this fan
                                                                         // services.
    RedfishCS_int64                        *RelatedItemodata_count;  
    RedfishCS_char                         *SerialNumber;                // The serial number for this
                                                                         // fan.
    RedfishCS_char                         *SparePartNumber;             // The spare part number for this
                                                                         // fan.
    RedfishResource_Status_CS              *Status;                      // The status and health of the
                                                                         // resource and its subordinate
                                                                         // or dependent resources.
    RedfishCS_int64                        *UpperThresholdCritical;      // The value at which the reading
                                                                         // is above normal range but not
                                                                         // yet fatal.
    RedfishCS_int64                        *UpperThresholdFatal;         // The value at which the reading
                                                                         // is above normal range and
                                                                         // fatal.
    RedfishCS_int64                        *UpperThresholdNonCritical;    // The value at which the reading
                                                                         // is above normal range.
} RedfishThermal_V1_4_5_Fan_CS;

//
// The available actions for this resource.
//
typedef struct _RedfishThermal_V1_4_5_FanActions_CS {
    RedfishThermal_V1_4_5_FanOemActions_CS    *Oem;    // The available OEM-specific
                                                      // actions for this resource.
} RedfishThermal_V1_4_5_FanActions_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishThermal_V1_4_5_FanOemActions_CS {
    RedfishCS_Link    Prop;
} RedfishThermal_V1_4_5_FanOemActions_CS;

typedef struct _RedfishThermal_V1_4_5_Temperature_CS {
    RedfishCS_char                                 *odata_id;                         
    RedfishThermal_V1_4_5_TemperatureActions_CS    *Actions;                              // The available actions for this
                                                                                          // resource.
    RedfishCS_int64                                *AdjustedMaxAllowableOperatingValue;    // Adjusted maximum allowable
                                                                                          // operating temperature for this
                                                                                          // equipment based on the current
                                                                                          // environmental conditions
                                                                                          // present.
    RedfishCS_int64                                *AdjustedMinAllowableOperatingValue;    // Adjusted minimum allowable
                                                                                          // operating temperature for this
                                                                                          // equipment based on the current
                                                                                          // environmental conditions
                                                                                          // present.
    RedfishCS_char                                 *DeltaPhysicalContext;                 // The area or device to which
                                                                                          // the DeltaReadingCelsius
                                                                                          // temperature measurement
                                                                                          // applies, relative to
                                                                                          // PhysicalContext.
    RedfishCS_int64                                *DeltaReadingCelsius;                  // The delta temperature reading.
    RedfishCS_int64                                *LowerThresholdCritical;               // The value at which the reading
                                                                                          // is below normal range but not
                                                                                          // yet fatal.
    RedfishCS_int64                                *LowerThresholdFatal;                  // The value at which the reading
                                                                                          // is below normal range and
                                                                                          // fatal.
    RedfishCS_int64                                *LowerThresholdNonCritical;            // The value at which the reading
                                                                                          // is below normal range.
    RedfishCS_int64                                *MaxAllowableOperatingValue;           // Maximum allowable operating
                                                                                          // temperature for this
                                                                                          // equipment.
    RedfishCS_int64                                *MaxReadingRangeTemp;                  // Maximum value for this sensor.
    RedfishCS_char                                 *MemberId;                             // The identifier for the member
                                                                                          // within the collection.
    RedfishCS_int64                                *MinAllowableOperatingValue;           // Minimum allowable operating
                                                                                          // temperature for this
                                                                                          // equipment.
    RedfishCS_int64                                *MinReadingRangeTemp;                  // Minimum value for this sensor.
    RedfishCS_char                                 *Name;                                 // The temperature sensor name.
    RedfishResource_Oem_CS                         *Oem;                                  // The OEM extension property.
    RedfishCS_char                                 *PhysicalContext;                      // The area or device to which
                                                                                          // this temperature measurement
                                                                                          // applies.
    RedfishCS_int64                                *ReadingCelsius;                       // The temperature in degrees
                                                                                          // Celsius.
    Redfishodatav4_idRef_Array_CS                  *RelatedItem;                          // An array of links to resources
                                                                                          // or objects that represent
                                                                                          // areas or devices to which this
                                                                                          // temperature applies.
    RedfishCS_int64                                *RelatedItemodata_count;           
    RedfishCS_int64                                *SensorNumber;                         // The numerical identifier of
                                                                                          // the temperature sensor.
    RedfishResource_Status_CS                      *Status;                               // The status and health of the
                                                                                          // resource and its subordinate
                                                                                          // or dependent resources.
    RedfishCS_int64                                *UpperThresholdCritical;               // The value at which the reading
                                                                                          // is above normal range but not
                                                                                          // yet fatal.
    RedfishCS_int64                                *UpperThresholdFatal;                  // The value at which the reading
                                                                                          // is above normal range and
                                                                                          // fatal.
    RedfishCS_int64                                *UpperThresholdNonCritical;            // The value at which the reading
                                                                                          // is above normal range.
} RedfishThermal_V1_4_5_Temperature_CS;

//
// The available actions for this resource.
//
typedef struct _RedfishThermal_V1_4_5_TemperatureActions_CS {
    RedfishThermal_V1_4_5_TemperatureOemActions_CS    *Oem;    // The available OEM-specific
                                                              // actions for this resource.
} RedfishThermal_V1_4_5_TemperatureActions_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishThermal_V1_4_5_TemperatureOemActions_CS {
    RedfishCS_Link    Prop;
} RedfishThermal_V1_4_5_TemperatureOemActions_CS;

//
// The available actions for this resource.
//
typedef struct _RedfishThermal_V1_4_5_ThermalActions_CS {
    RedfishThermal_V1_4_5_ThermalOemActions_CS    *Oem;    // The available OEM-specific
                                                          // actions for this resource.
} RedfishThermal_V1_4_5_ThermalActions_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishThermal_V1_4_5_ThermalOemActions_CS {
    RedfishCS_Link    Prop;
} RedfishThermal_V1_4_5_ThermalOemActions_CS;

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
// The Thermal schema describes temperature monitoring and thermal management
// subsystems, such as cooling fans, for a computer system or similar devices
// contained within a chassis.
//
typedef struct _RedfishThermal_V1_4_5_Thermal_CS {
    RedfishCS_Header                              Header;
    RedfishCS_char                                *odata_context;         
    RedfishCS_char                                *odata_etag;            
    RedfishCS_char                                *odata_id;              
    RedfishCS_char                                *odata_type;            
    RedfishThermal_V1_4_5_ThermalActions_CS       *Actions;                   // The available actions for this
                                                                              // resource.
    RedfishCS_char                                *Description;           
    RedfishThermal_V1_4_5_Fan_Array_CS            *Fans;                      // The set of fans for this
                                                                              // chassis.
    RedfishCS_int64                               *Fansodata_count;       
    RedfishCS_char                                *Id;                    
    RedfishCS_char                                *Name;                  
    RedfishResource_Oem_CS                        *Oem;                       // The OEM extension property.
    RedfishCS_Link                                Redundancy;                 // The redundancy information for
                                                                              // the set of fans in this
                                                                              // chassis.
    RedfishCS_int64                               *Redundancyodata_count; 
    RedfishResource_Status_CS                     *Status;                    // The status and health of the
                                                                              // resource and its subordinate
                                                                              // or dependent resources.
    RedfishThermal_V1_4_5_Temperature_Array_CS    *Temperatures;              // The set of temperature sensors
                                                                              // for this chassis.
    RedfishCS_int64                               *Temperaturesodata_count;
} RedfishThermal_V1_4_5_Thermal_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

#ifndef Redfishodatav4_idRef_Array_CS_
#define Redfishodatav4_idRef_Array_CS_
typedef struct _Redfishodatav4_idRef_Array_CS  {
    Redfishodatav4_idRef_Array_CS    *Next;
    Redfishodatav4_idRef_CS    *ArrayValue;
} Redfishodatav4_idRef_Array_CS;
#endif

typedef struct _RedfishThermal_V1_4_5_Fan_Array_CS  {
    RedfishThermal_V1_4_5_Fan_Array_CS    *Next;
    RedfishThermal_V1_4_5_Fan_CS    *ArrayValue;
} RedfishThermal_V1_4_5_Fan_Array_CS;

typedef struct _RedfishThermal_V1_4_5_Temperature_Array_CS  {
    RedfishThermal_V1_4_5_Temperature_Array_CS    *Next;
    RedfishThermal_V1_4_5_Temperature_CS    *ArrayValue;
} RedfishThermal_V1_4_5_Temperature_Array_CS;

RedfishCS_status
Json_Thermal_V1_4_5_To_CS (char *JsonRawText, RedfishThermal_V1_4_5_Thermal_CS **ReturnedCS);

RedfishCS_status
CS_To_Thermal_V1_4_5_JSON (RedfishThermal_V1_4_5_Thermal_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyThermal_V1_4_5_CS (RedfishThermal_V1_4_5_Thermal_CS *CSPtr);

RedfishCS_status
DestroyThermal_V1_4_5_Json (RedfishCS_char *JsonText);

#endif
