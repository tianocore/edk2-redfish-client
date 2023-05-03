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

#ifndef RedfishActioninfo_V1_1_2_CSTRUCT_H_
#define RedfishActioninfo_V1_1_2_CSTRUCT_H_

#include "RedfishCsCommon.h"

typedef struct _RedfishActionInfo_V1_1_2_Parameters_Array_CS RedfishActionInfo_V1_1_2_Parameters_Array_CS;
typedef struct _RedfishActionInfo_V1_1_2_ActionInfo_CS RedfishActionInfo_V1_1_2_ActionInfo_CS;
typedef struct _RedfishActionInfo_V1_1_2_Parameters_CS RedfishActionInfo_V1_1_2_Parameters_CS;
#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

//
// The information about a parameter included in a Redfish action for this
// Resource.
//
typedef struct _RedfishActionInfo_V1_1_2_Parameters_CS {
    RedfishCS_char_Array    *AllowableValues;    // The allowable values for this
                                                // parameter as applied to this
                                                // action target.
    RedfishCS_char          *DataType;          // The JSON property type for
                                                // this parameter.
    RedfishCS_int64         *MaximumValue;      // The maximum supported value
                                                // for this parameter.
    RedfishCS_int64         *MinimumValue;      // The minimum supported value
                                                // for this parameter.
    RedfishCS_char          *Name;              // The name of the parameter for
                                                // this action.
    RedfishCS_char          *ObjectDataType;    // The data type of an object-
                                                // based parameter.
    RedfishCS_bool          *Required;          // An indication of whether the
                                                // parameter is required to
                                                // complete this action.
} RedfishActionInfo_V1_1_2_Parameters_CS;

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
// The ActionInfo schema defines the supported parameters and other information
// for a Redfish action.  Supported parameters can differ among vendors and even
// among Resource instances.  This data can ensure that action requests from
// applications contain supported parameters.
//
typedef struct _RedfishActionInfo_V1_1_2_ActionInfo_CS {
    RedfishCS_Header                                Header;
    RedfishCS_char                                  *odata_context;
    RedfishCS_char                                  *odata_etag;  
    RedfishCS_char                                  *odata_id;    
    RedfishCS_char                                  *odata_type;  
    RedfishCS_char                                  *Description; 
    RedfishCS_char                                  *Id;          
    RedfishCS_char                                  *Name;        
    RedfishResource_Oem_CS                          *Oem;             // The OEM extension property.
    RedfishActionInfo_V1_1_2_Parameters_Array_CS    *Parameters;      // The list of parameters
                                                                      // included in the specified
                                                                      // Redfish action.
} RedfishActionInfo_V1_1_2_ActionInfo_CS;

typedef struct _RedfishActionInfo_V1_1_2_Parameters_Array_CS  {
    RedfishActionInfo_V1_1_2_Parameters_Array_CS    *Next;
    RedfishActionInfo_V1_1_2_Parameters_CS    *ArrayValue;
} RedfishActionInfo_V1_1_2_Parameters_Array_CS;

RedfishCS_status
Json_ActionInfo_V1_1_2_To_CS (char *JsonRawText, RedfishActionInfo_V1_1_2_ActionInfo_CS **ReturnedCS);

RedfishCS_status
CS_To_ActionInfo_V1_1_2_JSON (RedfishActionInfo_V1_1_2_ActionInfo_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyActionInfo_V1_1_2_CS (RedfishActionInfo_V1_1_2_ActionInfo_CS *CSPtr);

RedfishCS_status
DestroyActionInfo_V1_1_2_Json (RedfishCS_char *JsonText);

#endif
