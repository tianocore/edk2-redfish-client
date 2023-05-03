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

#ifndef RedfishThermal_V1_1_2_CSTRUCT_H_
#define RedfishThermal_V1_1_2_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_CS_
#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
#ifndef Redfishodata_V4_0_0_idRef_Array_CS_
typedef struct _Redfishodata_V4_0_0_idRef_Array_CS Redfishodata_V4_0_0_idRef_Array_CS;
#endif
typedef struct _RedfishThermal_V1_1_2_Fan_Array_CS RedfishThermal_V1_1_2_Fan_Array_CS;
typedef struct _RedfishThermal_V1_1_2_Temperature_Array_CS RedfishThermal_V1_1_2_Temperature_Array_CS;
typedef struct _RedfishResource_Condition_CS RedfishResource_Condition_CS;
#endif

#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

#ifndef RedfishResource_Status_CS_
typedef struct _RedfishResource_Status_CS RedfishResource_Status_CS;
#endif

typedef struct _RedfishThermal_V1_1_2_Fan_CS RedfishThermal_V1_1_2_Fan_CS;
typedef struct _RedfishThermal_V1_1_2_Temperature_CS RedfishThermal_V1_1_2_Temperature_CS;
typedef struct _RedfishThermal_V1_1_2_Thermal_CS RedfishThermal_V1_1_2_Thermal_CS;
#ifndef Redfishodata_V4_0_0_idRef_CS_
typedef struct _Redfishodata_V4_0_0_idRef_CS Redfishodata_V4_0_0_idRef_CS;
#endif

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
// This is the base type for addressable members of an array.
//
typedef struct _RedfishThermal_V1_1_2_Fan_CS {
    RedfishCS_char                        *FanName;                           // Name of the fan.
    RedfishCS_int64                       *LowerThresholdCritical;            // Below normal range but not yet
                                                                              // fatal.
    RedfishCS_int64                       *LowerThresholdFatal;               // Below normal range and is
                                                                              // fatal.
    RedfishCS_int64                       *LowerThresholdNonCritical;         // Below normal range.
    RedfishCS_int64                       *MaxReadingRange;                   // Maximum value for Reading.
    RedfishCS_char                        *MemberId;                          // This is the identifier for the
                                                                              // member within the collection.
    RedfishCS_int64                       *MinReadingRange;                   // Minimum value for Reading.
    RedfishCS_char                        *Name;                              // Name of the fan.
    RedfishResource_Oem_CS                *Oem;                               // This is the
                                                                              // manufacturer/provider specific
                                                                              // extension moniker used to
                                                                              // divide the Oem object into
                                                                              // sections.
    RedfishCS_Link                        PhysicalContext;                    // Describes the area or device
                                                                              // associated with this fan.
    RedfishCS_int64                       *Reading;                           // Current fan speed.
    RedfishCS_char                        *ReadingUnits;                      // Units in which the reading and
                                                                              // thresholds are measured.
    RedfishCS_Link                        Redundancy;                         // This structure is used to show
                                                                              // redundancy for fans.  The
                                                                              // Component ids will reference
                                                                              // the members of the redundancy
                                                                              // groups.
    RedfishCS_int64                       *Redundancyodata_count;         
    RedfishCS_char                        *Redundancyodata_navigationLink;
    Redfishodata_V4_0_0_idRef_Array_CS    *RelatedItem;                       // The ID(s) of the resources
                                                                              // serviced with this fan.
    RedfishCS_int64                       *RelatedItemodata_count;        
    RedfishCS_char                        *RelatedItemodata_navigationLink;
    RedfishResource_Status_CS             *Status;                        
    RedfishCS_int64                       *UpperThresholdCritical;            // Above normal range but not yet
                                                                              // fatal.
    RedfishCS_int64                       *UpperThresholdFatal;               // Above normal range and is
                                                                              // fatal.
    RedfishCS_int64                       *UpperThresholdNonCritical;         // Above normal range.
} RedfishThermal_V1_1_2_Fan_CS;

//
// This is the base type for addressable members of an array.
//
typedef struct _RedfishThermal_V1_1_2_Temperature_CS {
    RedfishCS_int64                       *LowerThresholdCritical;            // Below normal range but not yet
                                                                              // fatal.
    RedfishCS_int64                       *LowerThresholdFatal;               // Below normal range and is
                                                                              // fatal.
    RedfishCS_int64                       *LowerThresholdNonCritical;         // Below normal range.
    RedfishCS_int64                       *MaxReadingRangeTemp;               // Maximum value for
                                                                              // ReadingCelsius.
    RedfishCS_char                        *MemberId;                          // This is the identifier for the
                                                                              // member within the collection.
    RedfishCS_int64                       *MinReadingRangeTemp;               // Minimum value for
                                                                              // ReadingCelsius.
    RedfishCS_char                        *Name;                              // Temperature sensor name.
    RedfishResource_Oem_CS                *Oem;                               // This is the
                                                                              // manufacturer/provider specific
                                                                              // extension moniker used to
                                                                              // divide the Oem object into
                                                                              // sections.
    RedfishCS_Link                        PhysicalContext;                    // Describes the area or device
                                                                              // to which this temperature
                                                                              // measurement applies.
    RedfishCS_int64                       *ReadingCelsius;                    // Temperature.
    Redfishodata_V4_0_0_idRef_Array_CS    *RelatedItem;                       // Describes the areas or devices
                                                                              // to which this temperature
                                                                              // measurement applies.
    RedfishCS_int64                       *RelatedItemodata_count;        
    RedfishCS_char                        *RelatedItemodata_navigationLink;
    RedfishCS_int64                       *SensorNumber;                      // A numerical identifier to
                                                                              // represent the temperature
                                                                              // sensor.
    RedfishResource_Status_CS             *Status;                        
    RedfishCS_int64                       *UpperThresholdCritical;            // Above normal range but not yet
                                                                              // fatal.
    RedfishCS_int64                       *UpperThresholdFatal;               // Above normal range and is
                                                                              // fatal.
    RedfishCS_int64                       *UpperThresholdNonCritical;         // Above normal range.
} RedfishThermal_V1_1_2_Temperature_CS;

//
// A reference to a resource.
//
#ifndef Redfishodata_V4_0_0_idRef_CS_
#define Redfishodata_V4_0_0_idRef_CS_
typedef struct _Redfishodata_V4_0_0_idRef_CS {
    RedfishCS_char    *odata_id;
} Redfishodata_V4_0_0_idRef_CS;
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
// This is the schema definition for the Thermal properties.  It represents the
// properties for Temperature and Cooling.
//
typedef struct _RedfishThermal_V1_1_2_Thermal_CS {
    RedfishCS_Header                              Header;
    RedfishCS_char                                *odata_context;                  
    RedfishCS_char                                *odata_id;                       
    RedfishCS_char                                *odata_type;                     
    RedfishCS_char                                *Description;                    
    RedfishThermal_V1_1_2_Fan_Array_CS            *Fans;                               // This is the definition for
                                                                                       // fans.
    RedfishCS_int64                               *Fansodata_count;                
    RedfishCS_char                                *Fansodata_navigationLink;       
    RedfishCS_char                                *Id;                             
    RedfishCS_char                                *Name;                           
    RedfishResource_Oem_CS                        *Oem;                                // This is the
                                                                                       // manufacturer/provider specific
                                                                                       // extension moniker used to
                                                                                       // divide the Oem object into
                                                                                       // sections.
    RedfishCS_Link                                Redundancy;                          // This structure is used to show
                                                                                       // redundancy for fans.  The
                                                                                       // Component ids will reference
                                                                                       // the members of the redundancy
                                                                                       // groups.
    RedfishCS_int64                               *Redundancyodata_count;          
    RedfishCS_char                                *Redundancyodata_navigationLink; 
    RedfishResource_Status_CS                     *Status;                         
    RedfishThermal_V1_1_2_Temperature_Array_CS    *Temperatures;                       // This is the definition for
                                                                                       // temperature sensors.
    RedfishCS_int64                               *Temperaturesodata_count;        
    RedfishCS_char                                *Temperaturesodata_navigationLink;
} RedfishThermal_V1_1_2_Thermal_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

#ifndef Redfishodata_V4_0_0_idRef_Array_CS_
#define Redfishodata_V4_0_0_idRef_Array_CS_
typedef struct _Redfishodata_V4_0_0_idRef_Array_CS  {
    Redfishodata_V4_0_0_idRef_Array_CS    *Next;
    Redfishodata_V4_0_0_idRef_CS    *ArrayValue;
} Redfishodata_V4_0_0_idRef_Array_CS;
#endif

typedef struct _RedfishThermal_V1_1_2_Fan_Array_CS  {
    RedfishThermal_V1_1_2_Fan_Array_CS    *Next;
    RedfishThermal_V1_1_2_Fan_CS    *ArrayValue;
} RedfishThermal_V1_1_2_Fan_Array_CS;

typedef struct _RedfishThermal_V1_1_2_Temperature_Array_CS  {
    RedfishThermal_V1_1_2_Temperature_Array_CS    *Next;
    RedfishThermal_V1_1_2_Temperature_CS    *ArrayValue;
} RedfishThermal_V1_1_2_Temperature_Array_CS;

RedfishCS_status
Json_Thermal_V1_1_2_To_CS (char *JsonRawText, RedfishThermal_V1_1_2_Thermal_CS **ReturnedCS);

RedfishCS_status
CS_To_Thermal_V1_1_2_JSON (RedfishThermal_V1_1_2_Thermal_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyThermal_V1_1_2_CS (RedfishThermal_V1_1_2_Thermal_CS *CSPtr);

RedfishCS_status
DestroyThermal_V1_1_2_Json (RedfishCS_char *JsonText);

#endif
