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

#ifndef RedfishSensor_V1_0_1_CSTRUCT_H_
#define RedfishSensor_V1_0_1_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_CS_
#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishResource_Condition_CS RedfishResource_Condition_CS;
#endif

#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

#ifndef RedfishResource_Status_CS_
typedef struct _RedfishResource_Status_CS RedfishResource_Status_CS;
#endif

typedef struct _RedfishSensor_V1_0_1_Actions_CS RedfishSensor_V1_0_1_Actions_CS;
typedef struct _RedfishSensor_V1_0_1_OemActions_CS RedfishSensor_V1_0_1_OemActions_CS;
typedef struct _RedfishSensor_V1_0_1_ResetStatistics_CS RedfishSensor_V1_0_1_ResetStatistics_CS;
typedef struct _RedfishSensor_V1_0_1_Sensor_CS RedfishSensor_V1_0_1_Sensor_CS;
typedef struct _RedfishSensor_V1_0_1_SensorExcerpt_CS RedfishSensor_V1_0_1_SensorExcerpt_CS;
typedef struct _RedfishSensor_V1_0_1_SensorPowerExcerpt_CS RedfishSensor_V1_0_1_SensorPowerExcerpt_CS;
typedef struct _RedfishSensor_V1_0_1_Threshold_CS RedfishSensor_V1_0_1_Threshold_CS;
typedef struct _RedfishSensor_V1_0_1_Thresholds_CS RedfishSensor_V1_0_1_Thresholds_CS;
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

//
// The available actions for this resource.
//
typedef struct _RedfishSensor_V1_0_1_Actions_CS {
    RedfishSensor_V1_0_1_ResetStatistics_CS    *Sensor_ResetStatistics;
    RedfishSensor_V1_0_1_OemActions_CS         *Oem;                      // This property contains the
                                                                          // available OEM specific actions
                                                                          // for this resource.
} RedfishSensor_V1_0_1_Actions_CS;

//
// The available OEM specific actions for this resource.
//
typedef struct _RedfishSensor_V1_0_1_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishSensor_V1_0_1_OemActions_CS;

//
// This action is used to reset statistics related to this sensor.
//
typedef struct _RedfishSensor_V1_0_1_ResetStatistics_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishSensor_V1_0_1_ResetStatistics_CS;

//
// This schema defines a Sensor to be used in conjunction with data center
// equipment.
//
typedef struct _RedfishSensor_V1_0_1_SensorExcerpt_CS {
    RedfishCS_char               *DataSourceUri;        // A link to the resource that
                                                        // provides the data for this
                                                        // object.
    RedfishCS_char               *Name;             
    RedfishCS_int64              *PeakReading;          // The peak reading value for
                                                        // this sensor.
    RedfishCS_char               *PhysicalContext;      // Describes the area or device
                                                        // to which this sensor
                                                        // measurement applies.
    RedfishCS_char               *PhysicalSubContext;    // Describes the usage or
                                                        // location within a device to
                                                        // which this sensor measurement
                                                        // applies.
    RedfishCS_int64              *Reading;              // The present value for this
                                                        // Sensor.
    RedfishCS_char               *ReadingUnits;         // Units in which the reading and
                                                        // thresholds are measured.
    RedfishResource_Status_CS    *Status;               // This property describes the
                                                        // status and health of the
                                                        // resource and its children.
} RedfishSensor_V1_0_1_SensorExcerpt_CS;

//
// This schema defines a Sensor to be used in conjunction with data center
// equipment.
//
typedef struct _RedfishSensor_V1_0_1_SensorPowerExcerpt_CS {
    RedfishCS_int64              *ApparentVA;           // The product of Voltage and
                                                        // Current for an AC circuit, in
                                                        // Volt-Amperes units.
    RedfishCS_char               *DataSourceUri;        // A link to the resource that
                                                        // provides the data for this
                                                        // object.
    RedfishCS_int64              *LoadPercent;          // The power load utilization for
                                                        // this Sensor.
    RedfishCS_char               *Name;             
    RedfishCS_int64              *PeakReading;          // The peak reading value for
                                                        // this sensor.
    RedfishCS_char               *PhysicalContext;      // Describes the area or device
                                                        // to which this sensor
                                                        // measurement applies.
    RedfishCS_char               *PhysicalSubContext;    // Describes the usage or
                                                        // location within a device to
                                                        // which this sensor measurement
                                                        // applies.
    RedfishCS_int64              *PowerFactor;          // The power factor for this
                                                        // Sensor.
    RedfishCS_int64              *ReactiveVAR;          // The square root of the
                                                        // difference term of squared
                                                        // ApparentVA and squared Power
                                                        // (Reading) for a circuit,
                                                        // expressed in VAR units.
    RedfishCS_int64              *Reading;              // The present value for this
                                                        // Sensor.
    RedfishCS_char               *ReadingUnits;         // Units in which the reading and
                                                        // thresholds are measured.
    RedfishResource_Status_CS    *Status;               // This property describes the
                                                        // status and health of the
                                                        // resource and its children.
} RedfishSensor_V1_0_1_SensorPowerExcerpt_CS;

//
// A threshold definition for a sensor.
//
typedef struct _RedfishSensor_V1_0_1_Threshold_CS {
    RedfishCS_char     *Activation;    // The direction of crossing that
                                      // activates this threshold.
    RedfishCS_char     *DwellTime;    // The time interval over which
                                      // the sensor reading must have
                                      // passed through this Threshold
                                      // value before the threshold is
                                      // considered to be violated.
    RedfishCS_int64    *Reading;      // The threshold value.
} RedfishSensor_V1_0_1_Threshold_CS;

//
// The set of thresholds defined for a sensor.
//
typedef struct _RedfishSensor_V1_0_1_Thresholds_CS {
    RedfishSensor_V1_0_1_Threshold_CS    *LowerCaution;    // Below normal range.
    RedfishSensor_V1_0_1_Threshold_CS    *LowerCritical;    // Below normal range but not yet
                                                           // fatal.
    RedfishSensor_V1_0_1_Threshold_CS    *LowerFatal;      // Below normal range and fatal.
    RedfishSensor_V1_0_1_Threshold_CS    *UpperCaution;    // Above normal range.
    RedfishSensor_V1_0_1_Threshold_CS    *UpperCritical;    // Above normal range but not yet
                                                           // fatal.
    RedfishSensor_V1_0_1_Threshold_CS    *UpperFatal;      // Above normal range and fatal.
} RedfishSensor_V1_0_1_Thresholds_CS;

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
// This schema defines a Sensor to be used in conjunction with data center
// equipment.
//
typedef struct _RedfishSensor_V1_0_1_Sensor_CS {
    RedfishCS_Header                      Header;
    RedfishCS_char                        *odata_context;                    
    RedfishCS_char                        *odata_etag;                       
    RedfishCS_char                        *odata_id;                         
    RedfishCS_char                        *odata_type;                       
    RedfishCS_int64                       *Accuracy;                             // Estimated percent error of
                                                                                 // measured vs. actual values.
    RedfishSensor_V1_0_1_Actions_CS       *Actions;                              // The available actions for this
                                                                                 // resource.
    RedfishCS_int64                       *AdjustedMaxAllowableOperatingValue;    // Adjusted maximum allowable
                                                                                 // operating value for this
                                                                                 // equipment based on the current
                                                                                 // environmental conditions
                                                                                 // present.
    RedfishCS_int64                       *AdjustedMinAllowableOperatingValue;    // Adjusted minimum allowable
                                                                                 // operating value for this
                                                                                 // equipment based on the current
                                                                                 // environmental conditions
                                                                                 // present.
    RedfishCS_int64                       *ApparentVA;                           // The product of Voltage and
                                                                                 // Current for an AC circuit, in
                                                                                 // Volt-Amperes units.
    RedfishCS_char                        *Description;                      
    RedfishCS_char                        *ElectricalContext;                    // The combination of current-
                                                                                 // carrying conductors.
    RedfishCS_char                        *Id;                               
    RedfishCS_int64                       *LoadPercent;                          // The power load utilization for
                                                                                 // this Sensor.
    RedfishCS_Link                        Location;                              // The location information for
                                                                                 // this Sensor.
    RedfishCS_int64                       *MaxAllowableOperatingValue;           // Maximum allowable operating
                                                                                 // value for this equipment.
    RedfishCS_int64                       *MinAllowableOperatingValue;           // Minimum allowable operating
                                                                                 // value for this equipment.
    RedfishCS_char                        *Name;                             
    RedfishResource_Oem_CS                *Oem;                                  // This is the
                                                                                 // manufacturer/provider specific
                                                                                 // extension moniker used to
                                                                                 // divide the Oem object into
                                                                                 // sections.
    RedfishCS_int64                       *PeakReading;                          // The peak reading value for
                                                                                 // this sensor.
    RedfishCS_char                        *PeakReadingTime;                      // The time at which the Peak
                                                                                 // Reading value occurred.
    RedfishCS_char                        *PhysicalContext;                      // Describes the area or device
                                                                                 // to which this sensor
                                                                                 // measurement applies.
    RedfishCS_char                        *PhysicalSubContext;                   // Describes the usage or
                                                                                 // location within a device to
                                                                                 // which this sensor measurement
                                                                                 // applies.
    RedfishCS_int64                       *PowerFactor;                          // The power factor for this
                                                                                 // Sensor.
    RedfishCS_int64                       *Precision;                            // Number of significant digits
                                                                                 // in the Reading.
    RedfishCS_int64                       *ReactiveVAR;                          // The square root of the
                                                                                 // difference term of squared
                                                                                 // ApparentVA and squared Power
                                                                                 // (Reading) for a circuit,
                                                                                 // expressed in VAR units.
    RedfishCS_int64                       *Reading;                              // The present value for this
                                                                                 // Sensor.
    RedfishCS_int64                       *ReadingRangeMax;                      // The maximum value of Reading
                                                                                 // possible for this Sensor.
    RedfishCS_int64                       *ReadingRangeMin;                      // The minimum value of Reading
                                                                                 // possible for this Sensor.
    RedfishCS_char                        *ReadingType;                          // The kind of sensor being
                                                                                 // represented.
    RedfishCS_char                        *ReadingUnits;                         // Units in which the reading and
                                                                                 // thresholds are measured.
    RedfishCS_int64                       *SensingFrequency;                     // The time interval between
                                                                                 // readings of the physical
                                                                                 // sensor.
    RedfishCS_char                        *SensorResetTime;                      // The time at which the time-
                                                                                 // based properties were last
                                                                                 // reset.
    RedfishResource_Status_CS             *Status;                               // This property describes the
                                                                                 // status and health of the
                                                                                 // resource and its children.
    RedfishSensor_V1_0_1_Thresholds_CS    *Thresholds;                           // The set of thresholds defined
                                                                                 // for this sensor.
    RedfishCS_char                        *VoltageType;                          // The voltage type (AC or DC)
                                                                                 // for this sensor.
} RedfishSensor_V1_0_1_Sensor_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

RedfishCS_status
Json_Sensor_V1_0_1_To_CS (char *JsonRawText, RedfishSensor_V1_0_1_Sensor_CS **ReturnedCS);

RedfishCS_status
CS_To_Sensor_V1_0_1_JSON (RedfishSensor_V1_0_1_Sensor_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroySensor_V1_0_1_CS (RedfishSensor_V1_0_1_Sensor_CS *CSPtr);

RedfishCS_status
DestroySensor_V1_0_1_Json (RedfishCS_char *JsonText);

#endif
