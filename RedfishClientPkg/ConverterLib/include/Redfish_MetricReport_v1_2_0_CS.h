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

#ifndef RedfishMetricreport_V1_2_0_CSTRUCT_H_
#define RedfishMetricreport_V1_2_0_CSTRUCT_H_

#include "RedfishCsCommon.h"

typedef struct _RedfishMetricReport_V1_2_0_MetricValue_Array_CS RedfishMetricReport_V1_2_0_MetricValue_Array_CS;
typedef struct _RedfishMetricReport_V1_2_0_Actions_CS RedfishMetricReport_V1_2_0_Actions_CS;
typedef struct _RedfishMetricReport_V1_2_0_MetricReport_CS RedfishMetricReport_V1_2_0_MetricReport_CS;
typedef struct _RedfishMetricReport_V1_2_0_MetricValue_CS RedfishMetricReport_V1_2_0_MetricValue_CS;
typedef struct _RedfishMetricReport_V1_2_0_OemActions_CS RedfishMetricReport_V1_2_0_OemActions_CS;
#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

//
// The available actions for this Resource.
//
typedef struct _RedfishMetricReport_V1_2_0_Actions_CS {
    RedfishMetricReport_V1_2_0_OemActions_CS    *Oem;    // The available OEM-specific
                                                        // actions for this Resource.
} RedfishMetricReport_V1_2_0_Actions_CS;

//
// A metric Value.
//
typedef struct _RedfishMetricReport_V1_2_0_MetricValue_CS {
    RedfishCS_Link            MetricDefinition;    // The link to the metric.
    RedfishCS_char            *MetricId;          // The metric definitions
                                                  // identifier for this metric.
    RedfishCS_char            *MetricProperty;    // The URI for the property from
                                                  // which this metric is derived.
    RedfishCS_char            *MetricValue;       // The metric value, as a string.
    RedfishResource_Oem_CS    *Oem;               // The OEM extension property.
    RedfishCS_char            *Timestamp;         // The time when the metric is
                                                  // obtained.  A management
                                                  // application may establish a
                                                  // time series of metric data by
                                                  // retrieving the instances of
                                                  // metric value and sorting them
                                                  // according to their Timestamp.
} RedfishMetricReport_V1_2_0_MetricValue_CS;

//
// The available OEM-specific actions for this Resource.
//
typedef struct _RedfishMetricReport_V1_2_0_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishMetricReport_V1_2_0_OemActions_CS;

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
// The metric definitions that create a metric report.
//
typedef struct _RedfishMetricReport_V1_2_0_MetricReport_CS {
    RedfishCS_Header                                   Header;
    RedfishCS_char                                     *odata_context;       
    RedfishCS_char                                     *odata_etag;          
    RedfishCS_char                                     *odata_id;            
    RedfishCS_char                                     *odata_type;          
    RedfishMetricReport_V1_2_0_Actions_CS              *Actions;                 // The available actions for this
                                                                                 // Resource.
    RedfishCS_char                                     *Description;         
    RedfishCS_char                                     *Id;                  
    RedfishCS_Link                                     MetricReportDefinition;    // The definitions in the metric
                                                                                 // report.
    RedfishMetricReport_V1_2_0_MetricValue_Array_CS    *MetricValues;            // An array of metric values for
                                                                                 // the metered items of this
                                                                                 // Metric.
    RedfishCS_char                                     *Name;                
    RedfishResource_Oem_CS                             *Oem;                     // The OEM extension property.
    RedfishCS_char                                     *ReportSequence;          // The current sequence
                                                                                 // identifier for this metric
                                                                                 // report.
    RedfishCS_char                                     *Timestamp;               // The time associated with the
                                                                                 // metric report in its entirety.
                                                                                 // The time of the metric report
                                                                                 // may be relevant when the time
                                                                                 // of individual metrics are
                                                                                 // minimally different.
} RedfishMetricReport_V1_2_0_MetricReport_CS;

typedef struct _RedfishMetricReport_V1_2_0_MetricValue_Array_CS  {
    RedfishMetricReport_V1_2_0_MetricValue_Array_CS    *Next;
    RedfishMetricReport_V1_2_0_MetricValue_CS    *ArrayValue;
} RedfishMetricReport_V1_2_0_MetricValue_Array_CS;

RedfishCS_status
Json_MetricReport_V1_2_0_To_CS (char *JsonRawText, RedfishMetricReport_V1_2_0_MetricReport_CS **ReturnedCS);

RedfishCS_status
CS_To_MetricReport_V1_2_0_JSON (RedfishMetricReport_V1_2_0_MetricReport_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyMetricReport_V1_2_0_CS (RedfishMetricReport_V1_2_0_MetricReport_CS *CSPtr);

RedfishCS_status
DestroyMetricReport_V1_2_0_Json (RedfishCS_char *JsonText);

#endif
