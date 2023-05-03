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

#ifndef RedfishMetricreport_V1_1_5_CSTRUCT_H_
#define RedfishMetricreport_V1_1_5_CSTRUCT_H_

#include "RedfishCsCommon.h"

typedef struct _RedfishMetricReport_V1_1_5_MetricValue_Array_CS RedfishMetricReport_V1_1_5_MetricValue_Array_CS;
typedef struct _RedfishMetricReport_V1_1_5_Actions_CS RedfishMetricReport_V1_1_5_Actions_CS;
typedef struct _RedfishMetricReport_V1_1_5_MetricReport_CS RedfishMetricReport_V1_1_5_MetricReport_CS;
typedef struct _RedfishMetricReport_V1_1_5_MetricValue_CS RedfishMetricReport_V1_1_5_MetricValue_CS;
typedef struct _RedfishMetricReport_V1_1_5_OemActions_CS RedfishMetricReport_V1_1_5_OemActions_CS;
#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

//
// The available actions for this resource.
//
typedef struct _RedfishMetricReport_V1_1_5_Actions_CS {
    RedfishMetricReport_V1_1_5_OemActions_CS    *Oem;    // The available OEM-specific
                                                        // actions for this resource.
} RedfishMetricReport_V1_1_5_Actions_CS;

//
// Properties that capture a metric value and other associated information.
//
typedef struct _RedfishMetricReport_V1_1_5_MetricValue_CS {
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
} RedfishMetricReport_V1_1_5_MetricValue_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishMetricReport_V1_1_5_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishMetricReport_V1_1_5_OemActions_CS;

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
// The MetricReport schema represents a set of collected metrics.
//
typedef struct _RedfishMetricReport_V1_1_5_MetricReport_CS {
    RedfishCS_Header                                   Header;
    RedfishCS_char                                     *odata_context;       
    RedfishCS_char                                     *odata_etag;          
    RedfishCS_char                                     *odata_id;            
    RedfishCS_char                                     *odata_type;          
    RedfishMetricReport_V1_1_5_Actions_CS              *Actions;                 // The available actions for this
                                                                                 // resource.
    RedfishCS_char                                     *Description;         
    RedfishCS_char                                     *Id;                  
    RedfishCS_Link                                     MetricReportDefinition;    // The link to the definition of
                                                                                 // this metric report.
    RedfishMetricReport_V1_1_5_MetricValue_Array_CS    *MetricValues;            // An array of metric values for
                                                                                 // the metered items of this
                                                                                 // metric report.
    RedfishCS_char                                     *Name;                
    RedfishResource_Oem_CS                             *Oem;                     // The OEM extension property.
    RedfishCS_char                                     *ReportSequence;          // The current sequence
                                                                                 // identifier for this metric
                                                                                 // report.
    RedfishCS_char                                     *Timestamp;               // The time associated with the
                                                                                 // metric report in its entirety.
                                                                                 // The time of the metric report
                                                                                 // can be relevant when the time
                                                                                 // of individual metrics are
                                                                                 // minimally different.
} RedfishMetricReport_V1_1_5_MetricReport_CS;

typedef struct _RedfishMetricReport_V1_1_5_MetricValue_Array_CS  {
    RedfishMetricReport_V1_1_5_MetricValue_Array_CS    *Next;
    RedfishMetricReport_V1_1_5_MetricValue_CS    *ArrayValue;
} RedfishMetricReport_V1_1_5_MetricValue_Array_CS;

RedfishCS_status
Json_MetricReport_V1_1_5_To_CS (char *JsonRawText, RedfishMetricReport_V1_1_5_MetricReport_CS **ReturnedCS);

RedfishCS_status
CS_To_MetricReport_V1_1_5_JSON (RedfishMetricReport_V1_1_5_MetricReport_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyMetricReport_V1_1_5_CS (RedfishMetricReport_V1_1_5_MetricReport_CS *CSPtr);

RedfishCS_status
DestroyMetricReport_V1_1_5_Json (RedfishCS_char *JsonText);

#endif
