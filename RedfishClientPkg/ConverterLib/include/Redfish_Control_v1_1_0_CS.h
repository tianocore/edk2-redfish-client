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

#ifndef RedfishControl_V1_1_0_CSTRUCT_H_
#define RedfishControl_V1_1_0_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
#ifndef Redfishodatav4_idRef_Array_CS_
typedef struct _Redfishodatav4_idRef_Array_CS Redfishodatav4_idRef_Array_CS;
#endif
typedef struct _RedfishControl_V1_1_0_Actions_CS RedfishControl_V1_1_0_Actions_CS;
typedef struct _RedfishControl_V1_1_0_Control_CS RedfishControl_V1_1_0_Control_CS;
typedef struct _RedfishControl_V1_1_0_ControlExcerpt_CS RedfishControl_V1_1_0_ControlExcerpt_CS;
typedef struct _RedfishControl_V1_1_0_ControlLoop_CS RedfishControl_V1_1_0_ControlLoop_CS;
typedef struct _RedfishControl_V1_1_0_ControlRangeExcerpt_CS RedfishControl_V1_1_0_ControlRangeExcerpt_CS;
typedef struct _RedfishControl_V1_1_0_ControlSingleExcerpt_CS RedfishControl_V1_1_0_ControlSingleExcerpt_CS;
typedef struct _RedfishControl_V1_1_0_OemActions_CS RedfishControl_V1_1_0_OemActions_CS;
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
typedef struct _RedfishControl_V1_1_0_Actions_CS {
    RedfishControl_V1_1_0_OemActions_CS    *Oem;    // The available OEM-specific
                                                   // actions for this resource.
} RedfishControl_V1_1_0_Actions_CS;

//
// The Control schema describes a control point and its properties.
//
typedef struct _RedfishControl_V1_1_0_ControlExcerpt_CS {
    RedfishCS_int64    *AllowableMax;    // The maximum possible setting
                                         // for this control.
    RedfishCS_int64    *AllowableMin;    // The minimum possible setting
                                         // for this control.
    RedfishCS_char     *ControlMode;     // The current operating mode of
                                         // the control.
    RedfishCS_char     *DataSourceUri;    // The link to the resource that
                                         // provides the data for this
                                         // control.
    RedfishCS_int64    *Reading;         // The reading of the sensor
                                         // associated with this control.
    RedfishCS_char     *ReadingUnits;    // The units of the sensor
                                         // reading associated with this
                                         // control.
} RedfishControl_V1_1_0_ControlExcerpt_CS;

//
// The details and coefficients used to operate a control loop.
//
typedef struct _RedfishControl_V1_1_0_ControlLoop_CS {
    RedfishCS_char     *CoefficientUpdateTime;    // The date and time that the
                                                 // control loop coefficients were
                                                 // changed.
    RedfishCS_int64    *Differential;            // The differential coefficient.
    RedfishCS_int64    *Integral;                // The integral coefficient.
    RedfishCS_int64    *Proportional;            // The proportional coefficient.
} RedfishControl_V1_1_0_ControlLoop_CS;

//
// The Control schema describes a control point and its properties.
//
typedef struct _RedfishControl_V1_1_0_ControlRangeExcerpt_CS {
    RedfishCS_int64          *AllowableMax;             // The maximum possible setting
                                                        // for this control.
    RedfishCS_int64          *AllowableMin;             // The minimum possible setting
                                                        // for this control.
    RedfishCS_int64_Array    *AllowableNumericValues;    // The supported values for the
                                                        // set point.
    RedfishCS_char           *ControlMode;              // The current operating mode of
                                                        // the control.
    RedfishCS_char           *DataSourceUri;            // The link to the resource that
                                                        // provides the data for this
                                                        // control.
    RedfishCS_int64          *Reading;                  // The reading of the sensor
                                                        // associated with this control.
    RedfishCS_char           *ReadingUnits;             // The units of the sensor
                                                        // reading associated with this
                                                        // control.
    RedfishCS_int64          *SettingMax;               // The maximum set point in the
                                                        // allowed range.
    RedfishCS_int64          *SettingMin;               // The minimum set point in the
                                                        // allowed range.
} RedfishControl_V1_1_0_ControlRangeExcerpt_CS;

//
// The Control schema describes a control point and its properties.
//
typedef struct _RedfishControl_V1_1_0_ControlSingleExcerpt_CS {
    RedfishCS_int64    *AllowableMax;    // The maximum possible setting
                                         // for this control.
    RedfishCS_int64    *AllowableMin;    // The minimum possible setting
                                         // for this control.
    RedfishCS_char     *ControlMode;     // The current operating mode of
                                         // the control.
    RedfishCS_char     *DataSourceUri;    // The link to the resource that
                                         // provides the data for this
                                         // control.
    RedfishCS_int64    *Reading;         // The reading of the sensor
                                         // associated with this control.
    RedfishCS_char     *ReadingUnits;    // The units of the sensor
                                         // reading associated with this
                                         // control.
    RedfishCS_int64    *SetPoint;        // The desired set point of the
                                         // control.
} RedfishControl_V1_1_0_ControlSingleExcerpt_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishControl_V1_1_0_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishControl_V1_1_0_OemActions_CS;

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
// The Control schema describes a control point and its properties.
//
typedef struct _RedfishControl_V1_1_0_Control_CS {
    RedfishCS_Header                        Header;
    RedfishCS_char                          *odata_context;              
    RedfishCS_char                          *odata_etag;                 
    RedfishCS_char                          *odata_id;                   
    RedfishCS_char                          *odata_type;                 
    RedfishCS_int64                         *Accuracy;                       // The estimated percent error of
                                                                             // measured versus actual values.
    RedfishControl_V1_1_0_Actions_CS        *Actions;                        // The available actions for this
                                                                             // resource.
    RedfishCS_int64                         *AllowableMax;                   // The maximum possible setting
                                                                             // for this control.
    RedfishCS_int64                         *AllowableMin;                   // The minimum possible setting
                                                                             // for this control.
    RedfishCS_int64_Array                   *AllowableNumericValues;         // The supported values for the
                                                                             // set point.
    RedfishCS_Link                          AssociatedSensors;               // An array of links to the
                                                                             // sensors associated with this
                                                                             // control.
    RedfishCS_int64                         *AssociatedSensorsodata_count;
    RedfishCS_int64                         *ControlDelaySeconds;            // The time delay in seconds
                                                                             // before the control will
                                                                             // activate once the value has
                                                                             // deviated from the set point.
    RedfishControl_V1_1_0_ControlLoop_CS    *ControlLoop;                    // The control loop details.
    RedfishCS_char                          *ControlMode;                    // The current operating mode of
                                                                             // the control.
    RedfishCS_char                          *ControlType;                    // The type of control.
    RedfishCS_int64                         *DeadBand;                       // The maximum deviation from the
                                                                             // set point allowed before the
                                                                             // control will activate.
    RedfishCS_char                          *Description;                
    RedfishCS_char                          *Id;                         
    RedfishCS_char                          *Implementation;                 // The implementation of the
                                                                             // control.
    RedfishCS_int64                         *Increment;                      // The smallest increment
                                                                             // supported for the set point.
    RedfishCS_Link                          Location;                        // The location information for
                                                                             // this control.
    RedfishCS_char                          *Name;                       
    RedfishResource_Oem_CS                  *Oem;                            // The OEM extension property.
    RedfishCS_char                          *PhysicalContext;                // The area or device to which
                                                                             // this control applies.
    RedfishCS_char                          *PhysicalSubContext;             // The usage or location within a
                                                                             // device to which this control
                                                                             // applies.
    Redfishodatav4_idRef_Array_CS           *RelatedItem;                    // An array of links to resources
                                                                             // that this control services.
    RedfishCS_int64                         *RelatedItemodata_count;     
    RedfishCS_Link                          Sensor;                          // The sensor reading associated
                                                                             // with this control.
    RedfishCS_int64                         *SetPoint;                       // The desired set point of the
                                                                             // control.
    RedfishCS_char                          *SetPointType;                   // The set point type used to
                                                                             // operate the control.
    RedfishCS_char                          *SetPointUnits;                  // The units of the set point.
    RedfishCS_char                          *SetPointUpdateTime;             // The date and time that the set
                                                                             // point was changed.
    RedfishCS_int64                         *SettingMax;                     // The maximum set point in the
                                                                             // allowed range.
    RedfishCS_int64                         *SettingMin;                     // The minimum set point in the
                                                                             // allowed range.
    RedfishResource_Status_CS               *Status;                         // The status and health of the
                                                                             // resource and its subordinate
                                                                             // or dependent resources.
} RedfishControl_V1_1_0_Control_CS;

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

RedfishCS_status
Json_Control_V1_1_0_To_CS (char *JsonRawText, RedfishControl_V1_1_0_Control_CS **ReturnedCS);

RedfishCS_status
CS_To_Control_V1_1_0_JSON (RedfishControl_V1_1_0_Control_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyControl_V1_1_0_CS (RedfishControl_V1_1_0_Control_CS *CSPtr);

RedfishCS_status
DestroyControl_V1_1_0_Json (RedfishCS_char *JsonText);

#endif
