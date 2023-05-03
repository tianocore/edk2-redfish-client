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

#ifndef RedfishTriggers_V1_1_0_CSTRUCT_H_
#define RedfishTriggers_V1_1_0_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_CS_
#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishTriggers_V1_1_0_DiscreteTrigger_Array_CS RedfishTriggers_V1_1_0_DiscreteTrigger_Array_CS;
typedef struct _RedfishTriggers_V1_1_0_Wildcard_Array_CS RedfishTriggers_V1_1_0_Wildcard_Array_CS;
typedef struct _RedfishResource_Condition_CS RedfishResource_Condition_CS;
#endif

#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

#ifndef RedfishResource_Status_CS_
typedef struct _RedfishResource_Status_CS RedfishResource_Status_CS;
#endif

typedef struct _RedfishTriggers_V1_1_0_Actions_CS RedfishTriggers_V1_1_0_Actions_CS;
typedef struct _RedfishTriggers_V1_1_0_DiscreteTrigger_CS RedfishTriggers_V1_1_0_DiscreteTrigger_CS;
typedef struct _RedfishTriggers_V1_1_0_Links_CS RedfishTriggers_V1_1_0_Links_CS;
typedef struct _RedfishTriggers_V1_1_0_OemActions_CS RedfishTriggers_V1_1_0_OemActions_CS;
typedef struct _RedfishTriggers_V1_1_0_Threshold_CS RedfishTriggers_V1_1_0_Threshold_CS;
typedef struct _RedfishTriggers_V1_1_0_Thresholds_CS RedfishTriggers_V1_1_0_Thresholds_CS;
typedef struct _RedfishTriggers_V1_1_0_Triggers_CS RedfishTriggers_V1_1_0_Triggers_CS;
typedef struct _RedfishTriggers_V1_1_0_Wildcard_CS RedfishTriggers_V1_1_0_Wildcard_CS;
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
typedef struct _RedfishTriggers_V1_1_0_Actions_CS {
    RedfishTriggers_V1_1_0_OemActions_CS    *Oem;    // This property contains the
                                                    // available OEM specific actions
                                                    // for this resource.
} RedfishTriggers_V1_1_0_Actions_CS;

//
// The characteristics of the discrete trigger.
//
typedef struct _RedfishTriggers_V1_1_0_DiscreteTrigger_CS {
    RedfishCS_char    *DwellTime;    // This time the trigger
                                    // occurance persists before a
                                    // trigger event has occurred.
    RedfishCS_char    *Name;        // The name of trigger.
    RedfishCS_char    *Severity;    // This property contains the
                                    // value of the Severity property
                                    // in the Event message.
    RedfishCS_char    *Value;       // The value of the discrete
                                    // metric that constitutes a
                                    // trigger occurance.
} RedfishTriggers_V1_1_0_DiscreteTrigger_CS;

//
// Contains references to other resources that are related to this resource.
//
typedef struct _RedfishTriggers_V1_1_0_Links_CS {
    RedfishCS_Link            MetricReportDefinitions;               // The metric report definitions
                                                                     // that will generate new metric
                                                                     // reports when a trigger occurs
                                                                     // when the TriggerActions
                                                                     // property contains the value
                                                                     // RedfishMetricReport.
    RedfishCS_int64           *MetricReportDefinitionsodata_count;
    RedfishResource_Oem_CS    *Oem;                                  // Oem extension object.
} RedfishTriggers_V1_1_0_Links_CS;

//
// The available OEM specific actions for this resource.
//
typedef struct _RedfishTriggers_V1_1_0_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishTriggers_V1_1_0_OemActions_CS;

//
// A threshold definition for a sensor.
//
typedef struct _RedfishTriggers_V1_1_0_Threshold_CS {
    RedfishCS_char     *Activation;    // The direction of crossing that
                                      // activates this threshold.
    RedfishCS_char     *DwellTime;    // The time interval over which
                                      // the sensor reading must have
                                      // passed through this Threshold
                                      // value before the threshold is
                                      // considered to be violated.
    RedfishCS_int64    *Reading;      // The threshold value.
} RedfishTriggers_V1_1_0_Threshold_CS;

//
// The set of thresholds defined for a sensor.
//
typedef struct _RedfishTriggers_V1_1_0_Thresholds_CS {
    RedfishTriggers_V1_1_0_Threshold_CS    *LowerCritical;    // Below normal range and
                                                             // requires attention.
    RedfishTriggers_V1_1_0_Threshold_CS    *LowerWarning;    // Below normal range.
    RedfishTriggers_V1_1_0_Threshold_CS    *UpperCritical;    // Above normal range and
                                                             // requires attention.
    RedfishTriggers_V1_1_0_Threshold_CS    *UpperWarning;    // Above normal range.
} RedfishTriggers_V1_1_0_Thresholds_CS;

//
// Contains a wildcard and its substitution values.
//
typedef struct _RedfishTriggers_V1_1_0_Wildcard_CS {
    RedfishCS_char          *Name;     // The string used as a wildcard.
    RedfishCS_char_Array    *Values;    // An array of values to
                                       // substitute for the wildcard.
} RedfishTriggers_V1_1_0_Wildcard_CS;

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
// Triggers which apply to a list of metrics.
//
typedef struct _RedfishTriggers_V1_1_0_Triggers_CS {
    RedfishCS_Header                                   Header;
    RedfishCS_char                                     *odata_context;          
    RedfishCS_char                                     *odata_etag;             
    RedfishCS_char                                     *odata_id;               
    RedfishCS_char                                     *odata_type;             
    RedfishTriggers_V1_1_0_Actions_CS                  *Actions;                    // The available actions for this
                                                                                    // resource.
    RedfishCS_char                                     *Description;            
    RedfishCS_char                                     *DiscreteTriggerCondition;    // Specifies the conditions when
                                                                                    // a discrete metric triggers.
    RedfishTriggers_V1_1_0_DiscreteTrigger_Array_CS    *DiscreteTriggers;           // List of discrete triggers.
    RedfishCS_char_Array                               *EventTriggers;              // A list of MessageIds that
                                                                                    // specify when a trigger occurs
                                                                                    // based on an event.
    RedfishCS_char                                     *Id;                     
    RedfishTriggers_V1_1_0_Links_CS                    *Links;                      // Contains references to other
                                                                                    // resources that are related to
                                                                                    // this resource.
    RedfishCS_char_Array                               *MetricProperties;           // A list of URIs with wildcards
                                                                                    // and property identifiers for
                                                                                    // which this trigger is defined.
                                                                                    // If a URI has wildcards, the
                                                                                    // wildcards are substituted as
                                                                                    // specified in the Wildcards
                                                                                    // array property.
    RedfishCS_char                                     *MetricType;                 // The type of trigger.
    RedfishCS_char                                     *Name;                   
    RedfishTriggers_V1_1_0_Thresholds_CS               *NumericThresholds;          // Specifies the thresholds when
                                                                                    // a numeric metric triggers.
    RedfishResource_Oem_CS                             *Oem;                        // This is the
                                                                                    // manufacturer/provider specific
                                                                                    // extension moniker used to
                                                                                    // divide the Oem object into
                                                                                    // sections.
    RedfishResource_Status_CS                          *Status;                     // This property describes the
                                                                                    // status and health of the
                                                                                    // resource and its children.
    RedfishCS_char_Array                               *TriggerActions;             // This property specifies the
                                                                                    // actions to perform when the
                                                                                    // trigger occurs.
    RedfishTriggers_V1_1_0_Wildcard_Array_CS           *Wildcards;                  // A list of wildcards and their
                                                                                    // substitution values to be
                                                                                    // applied to the entries in the
                                                                                    // MetricProperties array
                                                                                    // property.
} RedfishTriggers_V1_1_0_Triggers_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

typedef struct _RedfishTriggers_V1_1_0_DiscreteTrigger_Array_CS  {
    RedfishTriggers_V1_1_0_DiscreteTrigger_Array_CS    *Next;
    RedfishTriggers_V1_1_0_DiscreteTrigger_CS    *ArrayValue;
} RedfishTriggers_V1_1_0_DiscreteTrigger_Array_CS;

typedef struct _RedfishTriggers_V1_1_0_Wildcard_Array_CS  {
    RedfishTriggers_V1_1_0_Wildcard_Array_CS    *Next;
    RedfishTriggers_V1_1_0_Wildcard_CS    *ArrayValue;
} RedfishTriggers_V1_1_0_Wildcard_Array_CS;

RedfishCS_status
Json_Triggers_V1_1_0_To_CS (char *JsonRawText, RedfishTriggers_V1_1_0_Triggers_CS **ReturnedCS);

RedfishCS_status
CS_To_Triggers_V1_1_0_JSON (RedfishTriggers_V1_1_0_Triggers_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyTriggers_V1_1_0_CS (RedfishTriggers_V1_1_0_Triggers_CS *CSPtr);

RedfishCS_status
DestroyTriggers_V1_1_0_Json (RedfishCS_char *JsonText);

#endif
