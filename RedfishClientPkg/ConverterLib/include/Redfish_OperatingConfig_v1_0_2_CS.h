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

#ifndef RedfishOperatingconfig_V1_0_2_CSTRUCT_H_
#define RedfishOperatingconfig_V1_0_2_CSTRUCT_H_

#include "RedfishCsCommon.h"

typedef struct _RedfishOperatingConfig_V1_0_2_BaseSpeedPrioritySettings_Array_CS RedfishOperatingConfig_V1_0_2_BaseSpeedPrioritySettings_Array_CS;
typedef struct _RedfishOperatingConfig_V1_0_2_TurboProfileDatapoint_Array_CS RedfishOperatingConfig_V1_0_2_TurboProfileDatapoint_Array_CS;
typedef struct _RedfishOperatingConfig_V1_0_2_Actions_CS RedfishOperatingConfig_V1_0_2_Actions_CS;
typedef struct _RedfishOperatingConfig_V1_0_2_BaseSpeedPrioritySettings_CS RedfishOperatingConfig_V1_0_2_BaseSpeedPrioritySettings_CS;
typedef struct _RedfishOperatingConfig_V1_0_2_OemActions_CS RedfishOperatingConfig_V1_0_2_OemActions_CS;
typedef struct _RedfishOperatingConfig_V1_0_2_OperatingConfig_CS RedfishOperatingConfig_V1_0_2_OperatingConfig_CS;
typedef struct _RedfishOperatingConfig_V1_0_2_TurboProfileDatapoint_CS RedfishOperatingConfig_V1_0_2_TurboProfileDatapoint_CS;
#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

//
// The available actions for this resource.
//
typedef struct _RedfishOperatingConfig_V1_0_2_Actions_CS {
    RedfishOperatingConfig_V1_0_2_OemActions_CS    *Oem;    // The available OEM-specific
                                                           // actions for this resource.
} RedfishOperatingConfig_V1_0_2_Actions_CS;

//
// The clock speed for a set of cores.
//
typedef struct _RedfishOperatingConfig_V1_0_2_BaseSpeedPrioritySettings_CS {
    RedfishCS_int64          *BaseSpeedMHz;    // The clock speed to configure
                                              // the set of cores in MHz.
    RedfishCS_int64          *CoreCount;      // The number of cores to
                                              // configure with a specified
                                              // speed.
    RedfishCS_int64_Array    *CoreIDs;        // The identifier of the cores to
                                              // configure with the specified
                                              // speed.
} RedfishOperatingConfig_V1_0_2_BaseSpeedPrioritySettings_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishOperatingConfig_V1_0_2_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishOperatingConfig_V1_0_2_OemActions_CS;

//
// The turbo profile for a set of active cores.
//
typedef struct _RedfishOperatingConfig_V1_0_2_TurboProfileDatapoint_CS {
    RedfishCS_int64    *ActiveCoreCount;    // The number of active cores to
                                           // be configured with the
                                           // specified maximum clock speed.
    RedfishCS_int64    *MaxSpeedMHz;       // The maximum turbo clock speed
                                           // that correspond to the number
                                           // of active cores in MHz.
} RedfishOperatingConfig_V1_0_2_TurboProfileDatapoint_CS;

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
// The OperatingConfig schema specifies a configuration that can be used when the
// processor is operational.
//
typedef struct _RedfishOperatingConfig_V1_0_2_OperatingConfig_CS {
    RedfishCS_Header                                                    Header;
    RedfishCS_char                                                      *odata_context;               
    RedfishCS_char                                                      *odata_etag;                  
    RedfishCS_char                                                      *odata_id;                    
    RedfishCS_char                                                      *odata_type;                  
    RedfishOperatingConfig_V1_0_2_Actions_CS                            *Actions;                         // The available actions for this
                                                                                                          // resource.
    RedfishCS_int64                                                     *BaseSpeedMHz;                    // The base (nominal) clock speed
                                                                                                          // of the processor in MHz.
    RedfishOperatingConfig_V1_0_2_BaseSpeedPrioritySettings_Array_CS    *BaseSpeedPrioritySettings;       // The clock speed for sets of
                                                                                                          // cores when the configuration
                                                                                                          // is operational.
    RedfishCS_char                                                      *Description;                 
    RedfishCS_char                                                      *Id;                          
    RedfishCS_int64                                                     *MaxJunctionTemperatureCelsius;    // The maximum temperature of the
                                                                                                          // junction in degrees Celsius.
    RedfishCS_int64                                                     *MaxSpeedMHz;                     // The maximum clock speed to
                                                                                                          // which the processor can be
                                                                                                          // configured in MHz.
    RedfishCS_char                                                      *Name;                        
    RedfishResource_Oem_CS                                              *Oem;                             // The OEM extension property.
    RedfishCS_int64                                                     *TDPWatts;                        // The thermal design point of
                                                                                                          // the processor in watts.
    RedfishCS_int64                                                     *TotalAvailableCoreCount;         // The number of cores in the
                                                                                                          // processor that can be
                                                                                                          // configured.
    RedfishOperatingConfig_V1_0_2_TurboProfileDatapoint_Array_CS        *TurboProfile;                    // The turbo profiles for the
                                                                                                          // processor.  A turbo profile is
                                                                                                          // the maximum turbo clock speed
                                                                                                          // as a function of the number of
                                                                                                          // active cores.
} RedfishOperatingConfig_V1_0_2_OperatingConfig_CS;

typedef struct _RedfishOperatingConfig_V1_0_2_BaseSpeedPrioritySettings_Array_CS  {
    RedfishOperatingConfig_V1_0_2_BaseSpeedPrioritySettings_Array_CS    *Next;
    RedfishOperatingConfig_V1_0_2_BaseSpeedPrioritySettings_CS    *ArrayValue;
} RedfishOperatingConfig_V1_0_2_BaseSpeedPrioritySettings_Array_CS;

typedef struct _RedfishOperatingConfig_V1_0_2_TurboProfileDatapoint_Array_CS  {
    RedfishOperatingConfig_V1_0_2_TurboProfileDatapoint_Array_CS    *Next;
    RedfishOperatingConfig_V1_0_2_TurboProfileDatapoint_CS    *ArrayValue;
} RedfishOperatingConfig_V1_0_2_TurboProfileDatapoint_Array_CS;

RedfishCS_status
Json_OperatingConfig_V1_0_2_To_CS (char *JsonRawText, RedfishOperatingConfig_V1_0_2_OperatingConfig_CS **ReturnedCS);

RedfishCS_status
CS_To_OperatingConfig_V1_0_2_JSON (RedfishOperatingConfig_V1_0_2_OperatingConfig_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyOperatingConfig_V1_0_2_CS (RedfishOperatingConfig_V1_0_2_OperatingConfig_CS *CSPtr);

RedfishCS_status
DestroyOperatingConfig_V1_0_2_Json (RedfishCS_char *JsonText);

#endif
