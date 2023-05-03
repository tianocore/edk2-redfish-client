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

#ifndef RedfishMetricreportdefinition_V1_0_6_CSTRUCT_H_
#define RedfishMetricreportdefinition_V1_0_6_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishMetricReportDefinition_V1_0_6_Metric_Array_CS RedfishMetricReportDefinition_V1_0_6_Metric_Array_CS;
typedef struct _RedfishMetricReportDefinition_V1_0_6_Wildcard_Array_CS RedfishMetricReportDefinition_V1_0_6_Wildcard_Array_CS;
typedef struct _RedfishMetricReportDefinition_V1_0_6_Actions_CS RedfishMetricReportDefinition_V1_0_6_Actions_CS;
typedef struct _RedfishMetricReportDefinition_V1_0_6_Metric_CS RedfishMetricReportDefinition_V1_0_6_Metric_CS;
typedef struct _RedfishMetricReportDefinition_V1_0_6_MetricReportDefinition_CS RedfishMetricReportDefinition_V1_0_6_MetricReportDefinition_CS;
typedef struct _RedfishMetricReportDefinition_V1_0_6_OemActions_CS RedfishMetricReportDefinition_V1_0_6_OemActions_CS;
typedef struct _RedfishMetricReportDefinition_V1_0_6_Wildcard_CS RedfishMetricReportDefinition_V1_0_6_Wildcard_CS;
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
typedef struct _RedfishMetricReportDefinition_V1_0_6_Actions_CS {
    RedfishMetricReportDefinition_V1_0_6_OemActions_CS    *Oem;    // The available OEM-specific
                                                                  // actions for this resource.
} RedfishMetricReportDefinition_V1_0_6_Actions_CS;

//
// Specifies a metric to include in the metric report.  The metrics are derived by
// applying a calculation on each of the listed metric properties.
//
typedef struct _RedfishMetricReportDefinition_V1_0_6_Metric_CS {
    RedfishCS_char          *CollectionDuration;    // The duration over which the
                                                    // function is computed.
    RedfishCS_char          *CollectionFunction;    // Specifies the function to
                                                    // perform on each of the metric
                                                    // properties listed in the
                                                    // MetricProperties property.
    RedfishCS_char          *CollectionTimeScope;    // The scope of time over which
                                                    // the function is applied.
    RedfishCS_char          *MetricId;              // The label for the metric
                                                    // definition that is derived by
                                                    // applying the
                                                    // collectionFunction to the
                                                    // metric property.  It matches
                                                    // the Id property of the
                                                    // corresponding metric
                                                    // definition.
    RedfishCS_char_Array    *MetricProperties;      // The set of URIs for the
                                                    // properties on which this
                                                    // metric is collected.
} RedfishMetricReportDefinition_V1_0_6_Metric_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishMetricReportDefinition_V1_0_6_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishMetricReportDefinition_V1_0_6_OemActions_CS;

//
// The wildcard and its substitution values.
//
typedef struct _RedfishMetricReportDefinition_V1_0_6_Wildcard_CS {
    RedfishCS_char_Array    *Keys;    // An array of values to
                                     // substitute for the wildcard.
    RedfishCS_char          *Name;    // The string used as a wildcard.
} RedfishMetricReportDefinition_V1_0_6_Wildcard_CS;

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
// The MetricReportDefinition schema describes set of metrics that are collected
// into a metric report.
//
typedef struct _RedfishMetricReportDefinition_V1_0_6_MetricReportDefinition_CS {
    RedfishCS_Header                                          Header;
    RedfishCS_char                                            *odata_context;            
    RedfishCS_char                                            *odata_etag;               
    RedfishCS_char                                            *odata_id;                 
    RedfishCS_char                                            *odata_type;               
    RedfishMetricReportDefinition_V1_0_6_Actions_CS           *Actions;                      // The available actions for this
                                                                                             // resource.
    RedfishCS_int64                                           *AppendLimit;                  // The maximum number of entries
                                                                                             // that can be appended to a
                                                                                             // metric report.  When the
                                                                                             // metric report reaches its
                                                                                             // limit, its behavior is
                                                                                             // dictated by the ReportUpdates
                                                                                             // property.
    RedfishCS_char                                            *Description;              
    RedfishCS_char                                            *Id;                       
    RedfishCS_char_Array                                      *MetricProperties;             // The list of URIs with
                                                                                             // wildcards and property
                                                                                             // identifiers to include in the
                                                                                             // metric report.  If a URI has
                                                                                             // wildcards, the wildcards are
                                                                                             // substituted as specified in
                                                                                             // the Wildcards property.
    RedfishCS_Link                                            MetricReport;                  // The location where the
                                                                                             // resultant metric report is
                                                                                             // placed.
    RedfishCS_char                                            *MetricReportDefinitionType;    // Specifies when the metric
                                                                                             // report is generated.
    RedfishMetricReportDefinition_V1_0_6_Metric_Array_CS      *Metrics;                      // The list of metrics to include
                                                                                             // in the metric report.  The
                                                                                             // metrics might include metric
                                                                                             // properties or calculations
                                                                                             // applied to a metric property.
    RedfishCS_char                                            *Name;                     
    RedfishResource_Oem_CS                                    *Oem;                          // The OEM extension property.
    RedfishCS_char_Array                                      *ReportActions;                // The set of actions to perform
                                                                                             // when a metric report is
                                                                                             // generated.
    RedfishCS_char                                            *ReportUpdates;                // The behavior for how
                                                                                             // subsequent metric reports are
                                                                                             // handled in relationship to an
                                                                                             // existing metric report created
                                                                                             // from the metric report
                                                                                             // definition.  Namely, whether
                                                                                             // to overwrite, append, or
                                                                                             // create a report resource.
    RedfishCS_Link                                            Schedule;                      // The schedule for generating
                                                                                             // the metric report.
    RedfishResource_Status_CS                                 *Status;                       // The status and health of the
                                                                                             // resource and its subordinate
                                                                                             // or dependent resources.
    RedfishMetricReportDefinition_V1_0_6_Wildcard_Array_CS    *Wildcards;                    // The set of wildcards and their
                                                                                             // substitution values for the
                                                                                             // entries in the
                                                                                             // MetricProperties property.
} RedfishMetricReportDefinition_V1_0_6_MetricReportDefinition_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

typedef struct _RedfishMetricReportDefinition_V1_0_6_Metric_Array_CS  {
    RedfishMetricReportDefinition_V1_0_6_Metric_Array_CS    *Next;
    RedfishMetricReportDefinition_V1_0_6_Metric_CS    *ArrayValue;
} RedfishMetricReportDefinition_V1_0_6_Metric_Array_CS;

typedef struct _RedfishMetricReportDefinition_V1_0_6_Wildcard_Array_CS  {
    RedfishMetricReportDefinition_V1_0_6_Wildcard_Array_CS    *Next;
    RedfishMetricReportDefinition_V1_0_6_Wildcard_CS    *ArrayValue;
} RedfishMetricReportDefinition_V1_0_6_Wildcard_Array_CS;

RedfishCS_status
Json_MetricReportDefinition_V1_0_6_To_CS (char *JsonRawText, RedfishMetricReportDefinition_V1_0_6_MetricReportDefinition_CS **ReturnedCS);

RedfishCS_status
CS_To_MetricReportDefinition_V1_0_6_JSON (RedfishMetricReportDefinition_V1_0_6_MetricReportDefinition_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyMetricReportDefinition_V1_0_6_CS (RedfishMetricReportDefinition_V1_0_6_MetricReportDefinition_CS *CSPtr);

RedfishCS_status
DestroyMetricReportDefinition_V1_0_6_Json (RedfishCS_char *JsonText);

#endif
