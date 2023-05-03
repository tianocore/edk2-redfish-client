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

#ifndef RedfishTelemetryservice_V1_3_0_CSTRUCT_H_
#define RedfishTelemetryservice_V1_3_0_CSTRUCT_H_

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

typedef struct _RedfishTelemetryService_V1_3_0_Actions_CS RedfishTelemetryService_V1_3_0_Actions_CS;
typedef struct _RedfishTelemetryService_V1_3_0_ClearMetricReports_CS RedfishTelemetryService_V1_3_0_ClearMetricReports_CS;
typedef struct _RedfishTelemetryService_V1_3_0_MetricValue_CS RedfishTelemetryService_V1_3_0_MetricValue_CS;
typedef struct _RedfishTelemetryService_V1_3_0_OemActions_CS RedfishTelemetryService_V1_3_0_OemActions_CS;
typedef struct _RedfishTelemetryService_V1_3_0_ResetMetricReportDefinitionsToDefaults_CS RedfishTelemetryService_V1_3_0_ResetMetricReportDefinitionsToDefaults_CS;
typedef struct _RedfishTelemetryService_V1_3_0_ResetTriggersToDefaults_CS RedfishTelemetryService_V1_3_0_ResetTriggersToDefaults_CS;
typedef struct _RedfishTelemetryService_V1_3_0_SubmitTestMetricReport_CS RedfishTelemetryService_V1_3_0_SubmitTestMetricReport_CS;
typedef struct _RedfishTelemetryService_V1_3_0_TelemetryService_CS RedfishTelemetryService_V1_3_0_TelemetryService_CS;
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
typedef struct _RedfishTelemetryService_V1_3_0_Actions_CS {
    RedfishTelemetryService_V1_3_0_ClearMetricReports_CS                        *TelemetryService_ClearMetricReports;                   
    RedfishTelemetryService_V1_3_0_ResetMetricReportDefinitionsToDefaults_CS    *TelemetryService_ResetMetricReportDefinitionsToDefaults;
    RedfishTelemetryService_V1_3_0_ResetTriggersToDefaults_CS                   *TelemetryService_ResetTriggersToDefaults;              
    RedfishTelemetryService_V1_3_0_SubmitTestMetricReport_CS                    *TelemetryService_SubmitTestMetricReport;               
    RedfishTelemetryService_V1_3_0_OemActions_CS                                *Oem;                                                       // The available OEM-specific
                                                                                                                                            // actions for this resource.
} RedfishTelemetryService_V1_3_0_Actions_CS;

//
// The action to clear the metric reports for this telemetry service.
//
typedef struct _RedfishTelemetryService_V1_3_0_ClearMetricReports_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishTelemetryService_V1_3_0_ClearMetricReports_CS;

//
// Properties that capture a metric value and other associated information.
//
typedef struct _RedfishTelemetryService_V1_3_0_MetricValue_CS {
    RedfishCS_Link    MetricDefinition;    // The link to the metric
                                          // definition for this metric.
    RedfishCS_char    *MetricId;          // The metric definitions
                                          // identifier for this metric.
    RedfishCS_char    *MetricProperty;    // The URI for the property from
                                          // which this metric is derived.
    RedfishCS_char    *MetricValue;       // The metric value, as a string.
    RedfishCS_char    *Timestamp;         // The date and time when the
                                          // metric is obtained.  A
                                          // management application can
                                          // establish a time series of
                                          // metric data by retrieving the
                                          // instances of metric value and
                                          // sorting them according to
                                          // their timestamp.
} RedfishTelemetryService_V1_3_0_MetricValue_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishTelemetryService_V1_3_0_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishTelemetryService_V1_3_0_OemActions_CS;

//
// The action to reset the metric report definitions to factory defaults.
//
typedef struct _RedfishTelemetryService_V1_3_0_ResetMetricReportDefinitionsToDefaults_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishTelemetryService_V1_3_0_ResetMetricReportDefinitionsToDefaults_CS;

//
// The action to reset the triggers to factory defaults.
//
typedef struct _RedfishTelemetryService_V1_3_0_ResetTriggersToDefaults_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishTelemetryService_V1_3_0_ResetTriggersToDefaults_CS;

//
// This action generates a metric report.
//
typedef struct _RedfishTelemetryService_V1_3_0_SubmitTestMetricReport_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishTelemetryService_V1_3_0_SubmitTestMetricReport_CS;

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
// The TelemetryService schema describes a telemetry service.  The telemetry
// service is used to for collecting and reporting metric data within the Redfish
// Service.
//
typedef struct _RedfishTelemetryService_V1_3_0_TelemetryService_CS {
    RedfishCS_Header                             Header;
    RedfishCS_char                               *odata_context;              
    RedfishCS_char                               *odata_etag;                 
    RedfishCS_char                               *odata_id;                   
    RedfishCS_char                               *odata_type;                 
    RedfishTelemetryService_V1_3_0_Actions_CS    *Actions;                        // The available actions for this
                                                                                  // resource.
    RedfishCS_char                               *Description;                
    RedfishCS_char                               *Id;                         
    RedfishCS_Link                               LogService;                      // The link to a log service that
                                                                                  // the telemetry service uses.
                                                                                  // This service can be a
                                                                                  // dedicated log service or a
                                                                                  // pointer a log service under
                                                                                  // another resource, such as a
                                                                                  // manager.
    RedfishCS_int64                              *MaxReports;                     // The maximum number of metric
                                                                                  // reports that this service
                                                                                  // supports.
    RedfishCS_Link                               MetricDefinitions;               // The link to the collection of
                                                                                  // metric definitions.
    RedfishCS_Link                               MetricReportDefinitions;         // The link to the collection of
                                                                                  // metric report definitions.
    RedfishCS_Link                               MetricReports;                   // The link to the collection of
                                                                                  // metric reports.
    RedfishCS_char                               *MinCollectionInterval;          // The minimum time interval
                                                                                  // between gathering metric data
                                                                                  // that this service allows.
    RedfishCS_char                               *Name;                       
    RedfishResource_Oem_CS                       *Oem;                            // The OEM extension property.
    RedfishCS_bool                               *ServiceEnabled;                 // An indication of whether this
                                                                                  // service is enabled.
    RedfishResource_Status_CS                    *Status;                         // The status and health of the
                                                                                  // resource and its subordinate
                                                                                  // or dependent resources.
    RedfishCS_char_Array                         *SupportedCollectionFunctions;    // The functions that can be
                                                                                  // performed over each metric.
    RedfishCS_Link                               Triggers;                        // The link to the collection of
                                                                                  // triggers that apply to
                                                                                  // metrics.
} RedfishTelemetryService_V1_3_0_TelemetryService_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

RedfishCS_status
Json_TelemetryService_V1_3_0_To_CS (char *JsonRawText, RedfishTelemetryService_V1_3_0_TelemetryService_CS **ReturnedCS);

RedfishCS_status
CS_To_TelemetryService_V1_3_0_JSON (RedfishTelemetryService_V1_3_0_TelemetryService_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyTelemetryService_V1_3_0_CS (RedfishTelemetryService_V1_3_0_TelemetryService_CS *CSPtr);

RedfishCS_status
DestroyTelemetryService_V1_3_0_Json (RedfishCS_char *JsonText);

#endif
