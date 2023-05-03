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

#ifndef RedfishTriggers_V1_0_5_CSTRUCT_H_
#define RedfishTriggers_V1_0_5_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_CS_
#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishTriggers_V1_0_5_DiscreteTrigger_Array_CS RedfishTriggers_V1_0_5_DiscreteTrigger_Array_CS;
typedef struct _RedfishTriggers_V1_0_5_Wildcard_Array_CS RedfishTriggers_V1_0_5_Wildcard_Array_CS;
typedef struct _RedfishResource_Condition_CS RedfishResource_Condition_CS;
#endif

#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

#ifndef RedfishResource_Status_CS_
typedef struct _RedfishResource_Status_CS RedfishResource_Status_CS;
#endif

typedef struct _RedfishTriggers_V1_0_5_Actions_CS RedfishTriggers_V1_0_5_Actions_CS;
typedef struct _RedfishTriggers_V1_0_5_DiscreteTrigger_CS RedfishTriggers_V1_0_5_DiscreteTrigger_CS;
typedef struct _RedfishTriggers_V1_0_5_OemActions_CS RedfishTriggers_V1_0_5_OemActions_CS;
typedef struct _RedfishTriggers_V1_0_5_Threshold_CS RedfishTriggers_V1_0_5_Threshold_CS;
typedef struct _RedfishTriggers_V1_0_5_Thresholds_CS RedfishTriggers_V1_0_5_Thresholds_CS;
typedef struct _RedfishTriggers_V1_0_5_Triggers_CS RedfishTriggers_V1_0_5_Triggers_CS;
typedef struct _RedfishTriggers_V1_0_5_Wildcard_CS RedfishTriggers_V1_0_5_Wildcard_CS;
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
typedef struct _RedfishTriggers_V1_0_5_Actions_CS {
    RedfishTriggers_V1_0_5_OemActions_CS    *Oem;    // The available OEM-specific
                                                    // actions for this resource.
} RedfishTriggers_V1_0_5_Actions_CS;

//
// The characteristics of the discrete trigger.
//
typedef struct _RedfishTriggers_V1_0_5_DiscreteTrigger_CS {
    RedfishCS_char    *DwellTime;    // The amount of time that a
                                    // trigger event persists before
                                    // the metric action is
                                    // performed.
    RedfishCS_char    *Name;        // The name of trigger.
    RedfishCS_char    *Severity;    // The severity of the event
                                    // message.
    RedfishCS_char    *Value;       // The discrete metric value that
                                    // constitutes a trigger event.
} RedfishTriggers_V1_0_5_DiscreteTrigger_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishTriggers_V1_0_5_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishTriggers_V1_0_5_OemActions_CS;

//
// A threshold definition for a sensor.
//
typedef struct _RedfishTriggers_V1_0_5_Threshold_CS {
    RedfishCS_char     *Activation;    // The direction of crossing that
                                      // activates this threshold.
    RedfishCS_char     *DwellTime;    // The duration the sensor value
                                      // must violate the threshold
                                      // before the threshold is
                                      // activated.
    RedfishCS_int64    *Reading;      // The threshold value.
} RedfishTriggers_V1_0_5_Threshold_CS;

//
// The set of thresholds for a sensor.
//
typedef struct _RedfishTriggers_V1_0_5_Thresholds_CS {
    RedfishTriggers_V1_0_5_Threshold_CS    *LowerCritical;    // The value at which the reading
                                                             // is below normal range and
                                                             // requires attention.
    RedfishTriggers_V1_0_5_Threshold_CS    *LowerWarning;    // The value at which the reading
                                                             // is below normal range.
    RedfishTriggers_V1_0_5_Threshold_CS    *UpperCritical;    // The value at which the reading
                                                             // is above normal range and
                                                             // requires attention.
    RedfishTriggers_V1_0_5_Threshold_CS    *UpperWarning;    // The value at which the reading
                                                             // is above normal range.
} RedfishTriggers_V1_0_5_Thresholds_CS;

//
// The wildcard and its substitution values.
//
typedef struct _RedfishTriggers_V1_0_5_Wildcard_CS {
    RedfishCS_char          *Name;     // The wildcard.
    RedfishCS_char_Array    *Values;    // An array of values to
                                       // substitute for the wildcard.
} RedfishTriggers_V1_0_5_Wildcard_CS;

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
// The Triggers schema describes a trigger that applies to metrics.
//
typedef struct _RedfishTriggers_V1_0_5_Triggers_CS {
    RedfishCS_Header                                   Header;
    RedfishCS_char                                     *odata_context;          
    RedfishCS_char                                     *odata_etag;             
    RedfishCS_char                                     *odata_id;               
    RedfishCS_char                                     *odata_type;             
    RedfishTriggers_V1_0_5_Actions_CS                  *Actions;                    // The available actions for this
                                                                                    // resource.
    RedfishCS_char                                     *Description;            
    RedfishCS_char                                     *DiscreteTriggerCondition;    // The conditions when a discrete
                                                                                    // metric triggers.
    RedfishTriggers_V1_0_5_DiscreteTrigger_Array_CS    *DiscreteTriggers;           // The list of discrete triggers.
    RedfishCS_char                                     *Id;                     
    RedfishCS_char_Array                               *MetricProperties;           // An array of URIs with
                                                                                    // wildcards and property
                                                                                    // identifiers for this trigger.
                                                                                    // Each wildcard shall be
                                                                                    // replaced with its
                                                                                    // corresponding entry in the
                                                                                    // Wildcard array property.
    RedfishCS_char                                     *MetricType;                 // The metric type of the
                                                                                    // trigger.
    RedfishCS_char                                     *Name;                   
    RedfishTriggers_V1_0_5_Thresholds_CS               *NumericThresholds;          // The thresholds when a numeric
                                                                                    // metric triggers.
    RedfishResource_Oem_CS                             *Oem;                        // The OEM extension property.
    RedfishResource_Status_CS                          *Status;                     // The status and health of the
                                                                                    // resource and its subordinate
                                                                                    // or dependent resources.
    RedfishCS_char_Array                               *TriggerActions;             // The actions that the trigger
                                                                                    // initiates.
    RedfishTriggers_V1_0_5_Wildcard_Array_CS           *Wildcards;                  // The wildcards and their
                                                                                    // substitution values for the
                                                                                    // entries in the
                                                                                    // MetricProperties array
                                                                                    // property.
} RedfishTriggers_V1_0_5_Triggers_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

typedef struct _RedfishTriggers_V1_0_5_DiscreteTrigger_Array_CS  {
    RedfishTriggers_V1_0_5_DiscreteTrigger_Array_CS    *Next;
    RedfishTriggers_V1_0_5_DiscreteTrigger_CS    *ArrayValue;
} RedfishTriggers_V1_0_5_DiscreteTrigger_Array_CS;

typedef struct _RedfishTriggers_V1_0_5_Wildcard_Array_CS  {
    RedfishTriggers_V1_0_5_Wildcard_Array_CS    *Next;
    RedfishTriggers_V1_0_5_Wildcard_CS    *ArrayValue;
} RedfishTriggers_V1_0_5_Wildcard_Array_CS;

RedfishCS_status
Json_Triggers_V1_0_5_To_CS (char *JsonRawText, RedfishTriggers_V1_0_5_Triggers_CS **ReturnedCS);

RedfishCS_status
CS_To_Triggers_V1_0_5_JSON (RedfishTriggers_V1_0_5_Triggers_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyTriggers_V1_0_5_CS (RedfishTriggers_V1_0_5_Triggers_CS *CSPtr);

RedfishCS_status
DestroyTriggers_V1_0_5_Json (RedfishCS_char *JsonText);

#endif
