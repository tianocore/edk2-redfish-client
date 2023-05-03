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

#ifndef RedfishMetricdefinition_V1_1_0_CSTRUCT_H_
#define RedfishMetricdefinition_V1_1_0_CSTRUCT_H_

#include "RedfishCsCommon.h"

typedef struct _RedfishMetricDefinition_V1_1_0_CalculationParamsType_Array_CS RedfishMetricDefinition_V1_1_0_CalculationParamsType_Array_CS;
typedef struct _RedfishMetricDefinition_V1_1_0_Wildcard_Array_CS RedfishMetricDefinition_V1_1_0_Wildcard_Array_CS;
typedef struct _RedfishMetricDefinition_V1_1_0_Actions_CS RedfishMetricDefinition_V1_1_0_Actions_CS;
typedef struct _RedfishMetricDefinition_V1_1_0_CalculationParamsType_CS RedfishMetricDefinition_V1_1_0_CalculationParamsType_CS;
typedef struct _RedfishMetricDefinition_V1_1_0_MetricDefinition_CS RedfishMetricDefinition_V1_1_0_MetricDefinition_CS;
typedef struct _RedfishMetricDefinition_V1_1_0_OemActions_CS RedfishMetricDefinition_V1_1_0_OemActions_CS;
typedef struct _RedfishMetricDefinition_V1_1_0_Wildcard_CS RedfishMetricDefinition_V1_1_0_Wildcard_CS;
#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

//
// The available actions for this resource.
//
typedef struct _RedfishMetricDefinition_V1_1_0_Actions_CS {
    RedfishMetricDefinition_V1_1_0_OemActions_CS    *Oem;    // The available OEM-specific
                                                            // actions for this resource.
} RedfishMetricDefinition_V1_1_0_Actions_CS;

//
// The usage of the parameter in the calculation.
//
typedef struct _RedfishMetricDefinition_V1_1_0_CalculationParamsType_CS {
    RedfishCS_char    *ResultMetric;    // The link to a metric property
                                       // that stores the result of the
                                       // calculation.  If the link has
                                       // wildcards, the wildcards are
                                       // substituted as specified in
                                       // the Wildcards array property.
    RedfishCS_char    *SourceMetric;    // The metric property used as
                                       // the input into the
                                       // calculation.  If the link has
                                       // wildcards, the wildcards are
                                       // substituted as specified in
                                       // the Wildcards array property.
} RedfishMetricDefinition_V1_1_0_CalculationParamsType_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishMetricDefinition_V1_1_0_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishMetricDefinition_V1_1_0_OemActions_CS;

//
// The wildcard and its substitution values.
//
typedef struct _RedfishMetricDefinition_V1_1_0_Wildcard_CS {
    RedfishCS_char          *Name;     // The string used as a wildcard.
    RedfishCS_char_Array    *Values;    // An array of values to
                                       // substitute for the wildcard.
} RedfishMetricDefinition_V1_1_0_Wildcard_CS;

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
// The MetricDefinition schema describes the metadata information for a metric.
//
typedef struct _RedfishMetricDefinition_V1_1_0_MetricDefinition_CS {
    RedfishCS_Header                                                 Header;
    RedfishCS_char                                                   *odata_context;         
    RedfishCS_char                                                   *odata_etag;            
    RedfishCS_char                                                   *odata_id;              
    RedfishCS_char                                                   *odata_type;            
    RedfishCS_int64                                                  *Accuracy;                  // The estimated percent error of
                                                                                                 // measured versus actual values.
    RedfishMetricDefinition_V1_1_0_Actions_CS                        *Actions;                   // The available actions for this
                                                                                                 // resource.
    RedfishCS_char                                                   *Calculable;                // An indication of whether the
                                                                                                 // metric can be used in a
                                                                                                 // calculation.
    RedfishCS_char                                                   *CalculationAlgorithm;      // The calculation that is
                                                                                                 // performed on a source metric
                                                                                                 // to obtain the metric being
                                                                                                 // defined.
    RedfishMetricDefinition_V1_1_0_CalculationParamsType_Array_CS    *CalculationParameters;     // The metric properties that are
                                                                                                 // part of a calculation.
    RedfishCS_char                                                   *CalculationTimeInterval;    // The time interval over which
                                                                                                 // the metric calculation is
                                                                                                 // performed.
    RedfishCS_int64                                                  *Calibration;               // The calibration offset added
                                                                                                 // to the metric reading.
    RedfishCS_char                                                   *Description;           
    RedfishCS_char_Array                                             *DiscreteValues;            // This array property specifies
                                                                                                 // possible values of a discrete
                                                                                                 // metric.
    RedfishCS_char                                                   *Id;                    
    RedfishCS_char                                                   *Implementation;            // The implementation of the
                                                                                                 // metric.
    RedfishCS_bool                                                   *IsLinear;                  // An indication of whether the
                                                                                                 // metric values are linear
                                                                                                 // versus non-linear.
    RedfishCS_int64                                                  *MaxReadingRange;           // Maximum value for metric
                                                                                                 // reading.
    RedfishCS_char                                                   *MetricDataType;            // The data type of the metric.
    RedfishCS_char_Array                                             *MetricProperties;          // The list of URIs with
                                                                                                 // wildcards and property
                                                                                                 // identifiers that this metric
                                                                                                 // definition defines.  If a URI
                                                                                                 // has wildcards, the wildcards
                                                                                                 // are substituted as specified
                                                                                                 // in the Wildcards array
                                                                                                 // property.
    RedfishCS_char                                                   *MetricType;                // The type of metric.
    RedfishCS_int64                                                  *MinReadingRange;           // Minimum value for metric
                                                                                                 // reading.
    RedfishCS_char                                                   *Name;                  
    RedfishCS_char                                                   *OEMCalculationAlgorithm;    // The OEM-defined calculation
                                                                                                 // that is performed on a source
                                                                                                 // metric to obtain the metric
                                                                                                 // being defined.
    RedfishResource_Oem_CS                                           *Oem;                       // The OEM extension property.
    RedfishCS_char                                                   *PhysicalContext;           // The physical context of the
                                                                                                 // metric.
    RedfishCS_int64                                                  *Precision;                 // Number of significant digits
                                                                                                 // in the metric reading.
    RedfishCS_char                                                   *SensingInterval;           // The time interval between when
                                                                                                 // a metric is updated.
    RedfishCS_char                                                   *TimestampAccuracy;         // The accuracy of the timestamp.
    RedfishCS_char                                                   *Units;                     // The units of measure for this
                                                                                                 // metric.
    RedfishMetricDefinition_V1_1_0_Wildcard_Array_CS                 *Wildcards;                 // The wildcards and their
                                                                                                 // substitution values for the
                                                                                                 // entries in the
                                                                                                 // MetricProperties array
                                                                                                 // property.
} RedfishMetricDefinition_V1_1_0_MetricDefinition_CS;

typedef struct _RedfishMetricDefinition_V1_1_0_CalculationParamsType_Array_CS  {
    RedfishMetricDefinition_V1_1_0_CalculationParamsType_Array_CS    *Next;
    RedfishMetricDefinition_V1_1_0_CalculationParamsType_CS    *ArrayValue;
} RedfishMetricDefinition_V1_1_0_CalculationParamsType_Array_CS;

typedef struct _RedfishMetricDefinition_V1_1_0_Wildcard_Array_CS  {
    RedfishMetricDefinition_V1_1_0_Wildcard_Array_CS    *Next;
    RedfishMetricDefinition_V1_1_0_Wildcard_CS    *ArrayValue;
} RedfishMetricDefinition_V1_1_0_Wildcard_Array_CS;

RedfishCS_status
Json_MetricDefinition_V1_1_0_To_CS (char *JsonRawText, RedfishMetricDefinition_V1_1_0_MetricDefinition_CS **ReturnedCS);

RedfishCS_status
CS_To_MetricDefinition_V1_1_0_JSON (RedfishMetricDefinition_V1_1_0_MetricDefinition_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyMetricDefinition_V1_1_0_CS (RedfishMetricDefinition_V1_1_0_MetricDefinition_CS *CSPtr);

RedfishCS_status
DestroyMetricDefinition_V1_1_0_Json (RedfishCS_char *JsonText);

#endif
