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

#ifndef RedfishTelemetryservice_V1_0_1_CSTRUCT_H_
#define RedfishTelemetryservice_V1_0_1_CSTRUCT_H_

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

typedef struct _RedfishTelemetryService_V1_0_1_Actions_CS RedfishTelemetryService_V1_0_1_Actions_CS;
typedef struct _RedfishTelemetryService_V1_0_1_OemActions_CS RedfishTelemetryService_V1_0_1_OemActions_CS;
typedef struct _RedfishTelemetryService_V1_0_1_SubmitTestMetricReport_CS RedfishTelemetryService_V1_0_1_SubmitTestMetricReport_CS;
typedef struct _RedfishTelemetryService_V1_0_1_TelemetryService_CS RedfishTelemetryService_V1_0_1_TelemetryService_CS;
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
typedef struct _RedfishTelemetryService_V1_0_1_Actions_CS {
    RedfishTelemetryService_V1_0_1_SubmitTestMetricReport_CS    *TelemetryService_SubmitTestMetricReport;
    RedfishTelemetryService_V1_0_1_OemActions_CS                *Oem;                                       // This property contains the
                                                                                                            // available OEM specific actions
                                                                                                            // for this resource.
} RedfishTelemetryService_V1_0_1_Actions_CS;

//
// The available OEM specific actions for this resource.
//
typedef struct _RedfishTelemetryService_V1_0_1_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishTelemetryService_V1_0_1_OemActions_CS;

//
// This action is used to generate a metric report.
//
typedef struct _RedfishTelemetryService_V1_0_1_SubmitTestMetricReport_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishTelemetryService_V1_0_1_SubmitTestMetricReport_CS;

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
// This is the schema definition for the Metrics Service.  It represents the
// properties for the service itself and has links to collections of metric
// definitions and metric report definitions.
//
typedef struct _RedfishTelemetryService_V1_0_1_TelemetryService_CS {
    RedfishCS_Header                             Header;
    RedfishCS_char                               *odata_context;              
    RedfishCS_char                               *odata_etag;                 
    RedfishCS_char                               *odata_id;                   
    RedfishCS_char                               *odata_type;                 
    RedfishTelemetryService_V1_0_1_Actions_CS    *Actions;                        // The available actions for this
                                                                                  // resource.
    RedfishCS_char                               *Description;                
    RedfishCS_char                               *Id;                         
    RedfishCS_Link                               LogService;                      // This is a reference to a Log
                                                                                  // Service used by the Telemetry
                                                                                  // Service.
    RedfishCS_int64                              *MaxReports;                     // The maximum number of metric
                                                                                  // reports supported by this
                                                                                  // service.
    RedfishCS_Link                               MetricDefinitions;               // A link to the collection of
                                                                                  // Metric Definitions.
    RedfishCS_Link                               MetricReportDefinitions;         // A link to the collection of
                                                                                  // Metric Report Definitions.
    RedfishCS_Link                               MetricReports;                   // A link to the collection of
                                                                                  // Metric Reports.
    RedfishCS_char                               *MinCollectionInterval;          // The minimum time interval
                                                                                  // between collections supported
                                                                                  // by this service.
    RedfishCS_char                               *Name;                       
    RedfishResource_Oem_CS                       *Oem;                            // This is the
                                                                                  // manufacturer/provider specific
                                                                                  // extension moniker used to
                                                                                  // divide the Oem object into
                                                                                  // sections.
    RedfishResource_Status_CS                    *Status;                         // This property describes the
                                                                                  // status and health of the
                                                                                  // resource and its children.
    RedfishCS_char_Array                         *SupportedCollectionFunctions;    // The functions that can be
                                                                                  // performed over each metric.
    RedfishCS_Link                               Triggers;                        // A link to the collection of
                                                                                  // Triggers, which apply to
                                                                                  // metrics.
} RedfishTelemetryService_V1_0_1_TelemetryService_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

RedfishCS_status
Json_TelemetryService_V1_0_1_To_CS (char *JsonRawText, RedfishTelemetryService_V1_0_1_TelemetryService_CS **ReturnedCS);

RedfishCS_status
CS_To_TelemetryService_V1_0_1_JSON (RedfishTelemetryService_V1_0_1_TelemetryService_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyTelemetryService_V1_0_1_CS (RedfishTelemetryService_V1_0_1_TelemetryService_CS *CSPtr);

RedfishCS_status
DestroyTelemetryService_V1_0_1_Json (RedfishCS_char *JsonText);

#endif
