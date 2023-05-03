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

#ifndef RedfishPowersupply_V1_0_0_CSTRUCT_H_
#define RedfishPowersupply_V1_0_0_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishPowerSupply_V1_0_0_EfficiencyRating_Array_CS RedfishPowerSupply_V1_0_0_EfficiencyRating_Array_CS;
typedef struct _RedfishPowerSupply_V1_0_0_InputRange_Array_CS RedfishPowerSupply_V1_0_0_InputRange_Array_CS;
typedef struct _RedfishPowerSupply_V1_0_0_OutputRail_Array_CS RedfishPowerSupply_V1_0_0_OutputRail_Array_CS;
typedef struct _RedfishPowerSupply_V1_0_0_Actions_CS RedfishPowerSupply_V1_0_0_Actions_CS;
typedef struct _RedfishPowerSupply_V1_0_0_EfficiencyRating_CS RedfishPowerSupply_V1_0_0_EfficiencyRating_CS;
typedef struct _RedfishPowerSupply_V1_0_0_InputRange_CS RedfishPowerSupply_V1_0_0_InputRange_CS;
typedef struct _RedfishPowerSupply_V1_0_0_Links_CS RedfishPowerSupply_V1_0_0_Links_CS;
typedef struct _RedfishPowerSupply_V1_0_0_OemActions_CS RedfishPowerSupply_V1_0_0_OemActions_CS;
typedef struct _RedfishPowerSupply_V1_0_0_OutputRail_CS RedfishPowerSupply_V1_0_0_OutputRail_CS;
typedef struct _RedfishPowerSupply_V1_0_0_PowerSupply_CS RedfishPowerSupply_V1_0_0_PowerSupply_CS;
typedef struct _RedfishPowerSupply_V1_0_0_Reset_CS RedfishPowerSupply_V1_0_0_Reset_CS;
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
typedef struct _RedfishPowerSupply_V1_0_0_Actions_CS {
    RedfishPowerSupply_V1_0_0_Reset_CS         *PowerSupply_Reset;
    RedfishPowerSupply_V1_0_0_OemActions_CS    *Oem;                 // The available OEM-specific
                                                                     // actions for this resource.
} RedfishPowerSupply_V1_0_0_Actions_CS;

//
// This type describes an efficiency rating for a power supply.
//
typedef struct _RedfishPowerSupply_V1_0_0_EfficiencyRating_CS {
    RedfishCS_int64    *EfficiencyPercent;    // The rated efficiency of this
                                             // power supply at the specified
                                             // load.
    RedfishCS_int64    *LoadPercent;         // The electrical load for this
                                             // rating.
} RedfishPowerSupply_V1_0_0_EfficiencyRating_CS;

//
// This type describes an input range for a power supply.
//
typedef struct _RedfishPowerSupply_V1_0_0_InputRange_CS {
    RedfishCS_int64    *CapacityWatts;        // The maximum capacity of this
                                              // power supply when operating in
                                              // this input range.
    RedfishCS_char     *NominalVoltageType;    // The input voltage range.
} RedfishPowerSupply_V1_0_0_InputRange_CS;

//
// The links to other resources that are related to this resource.
//
typedef struct _RedfishPowerSupply_V1_0_0_Links_CS {
    RedfishResource_Oem_CS    *Oem;     // The OEM extension property.
    RedfishCS_Link            Outlet;    // A link to the outlet connected
                                        // to this power supply.
} RedfishPowerSupply_V1_0_0_Links_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishPowerSupply_V1_0_0_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishPowerSupply_V1_0_0_OemActions_CS;

//
// This type describes an output power rail for a power supply.
//
typedef struct _RedfishPowerSupply_V1_0_0_OutputRail_CS {
    RedfishCS_int64    *NominalVoltage;    // The nominal voltage of this
                                           // output power rail.
    RedfishCS_char     *PhysicalContext;    // The area or device to which
                                           // this power rail applies.
} RedfishPowerSupply_V1_0_0_OutputRail_CS;

//
// This action resets the power supply.
//
typedef struct _RedfishPowerSupply_V1_0_0_Reset_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishPowerSupply_V1_0_0_Reset_CS;

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
// The PowerSupply schema describes a power supply unit.
//
typedef struct _RedfishPowerSupply_V1_0_0_PowerSupply_CS {
    RedfishCS_Header                                       Header;
    RedfishCS_char                                         *odata_context;         
    RedfishCS_char                                         *odata_etag;            
    RedfishCS_char                                         *odata_id;              
    RedfishCS_char                                         *odata_type;            
    RedfishPowerSupply_V1_0_0_Actions_CS                   *Actions;                   // The available actions for this
                                                                                       // resource.
    RedfishCS_Link                                         Assembly;                   // The link to the assembly
                                                                                       // associated with this power
                                                                                       // supply.
    RedfishCS_char                                         *Description;           
    RedfishPowerSupply_V1_0_0_EfficiencyRating_Array_CS    *EfficiencyRatings;         // The efficiency ratings of this
                                                                                       // power supply.
    RedfishCS_char                                         *FirmwareVersion;           // The firmware version for this
                                                                                       // power supply.
    RedfishCS_bool                                         *HotPluggable;              // An indication of whether this
                                                                                       // device can be inserted or
                                                                                       // removed while the equipment is
                                                                                       // in operation.
    RedfishCS_char                                         *Id;                    
    RedfishCS_char                                         *InputNominalVoltageType;    // The nominal voltage type of
                                                                                       // the line input to this power
                                                                                       // supply.
    RedfishPowerSupply_V1_0_0_InputRange_Array_CS          *InputRanges;               // The input ranges that the
                                                                                       // power supply can use.
    RedfishPowerSupply_V1_0_0_Links_CS                     *Links;                     // The links to other resources
                                                                                       // that are related to this
                                                                                       // resource.
    RedfishCS_Link                                         Location;                   // The location of the power
                                                                                       // supply.
    RedfishCS_bool                                         *LocationIndicatorActive;    // An indicator allowing an
                                                                                       // operator to physically locate
                                                                                       // this resource.
    RedfishCS_char                                         *Manufacturer;              // The manufacturer of this power
                                                                                       // supply.
    RedfishCS_Link                                         Metrics;                    // The link to the power supply
                                                                                       // metrics resource associated
                                                                                       // with this power supply.
    RedfishCS_char                                         *Model;                     // The model number for this
                                                                                       // power supply.
    RedfishCS_char                                         *Name;                  
    RedfishResource_Oem_CS                                 *Oem;                       // The OEM extension property.
    RedfishPowerSupply_V1_0_0_OutputRail_Array_CS          *OutputRails;               // The output power rails
                                                                                       // provided by this power supply.
    RedfishCS_char                                         *PartNumber;                // The part number for this power
                                                                                       // supply.
    RedfishCS_char                                         *PhaseWiringType;           // The number of ungrounded
                                                                                       // current-carrying conductors
                                                                                       // (phases) and the total number
                                                                                       // of conductors (wires) provided
                                                                                       // for the power supply input
                                                                                       // connector.
    RedfishCS_char                                         *PlugType;                  // The type of plug according to
                                                                                       // NEMA, IEC, or regional
                                                                                       // standards.
    RedfishCS_int64                                        *PowerCapacityWatts;        // The maximum capacity of this
                                                                                       // power supply.
    RedfishCS_char                                         *PowerSupplyType;           // The power supply type (AC or
                                                                                       // DC).
    RedfishCS_char                                         *SerialNumber;              // The serial number for this
                                                                                       // power supply.
    RedfishCS_char                                         *SparePartNumber;           // The spare part number for this
                                                                                       // power supply.
    RedfishResource_Status_CS                              *Status;                    // The status and health of the
                                                                                       // resource and its subordinate
                                                                                       // or dependent resources.
} RedfishPowerSupply_V1_0_0_PowerSupply_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

typedef struct _RedfishPowerSupply_V1_0_0_EfficiencyRating_Array_CS  {
    RedfishPowerSupply_V1_0_0_EfficiencyRating_Array_CS    *Next;
    RedfishPowerSupply_V1_0_0_EfficiencyRating_CS    *ArrayValue;
} RedfishPowerSupply_V1_0_0_EfficiencyRating_Array_CS;

typedef struct _RedfishPowerSupply_V1_0_0_InputRange_Array_CS  {
    RedfishPowerSupply_V1_0_0_InputRange_Array_CS    *Next;
    RedfishPowerSupply_V1_0_0_InputRange_CS    *ArrayValue;
} RedfishPowerSupply_V1_0_0_InputRange_Array_CS;

typedef struct _RedfishPowerSupply_V1_0_0_OutputRail_Array_CS  {
    RedfishPowerSupply_V1_0_0_OutputRail_Array_CS    *Next;
    RedfishPowerSupply_V1_0_0_OutputRail_CS    *ArrayValue;
} RedfishPowerSupply_V1_0_0_OutputRail_Array_CS;

RedfishCS_status
Json_PowerSupply_V1_0_0_To_CS (char *JsonRawText, RedfishPowerSupply_V1_0_0_PowerSupply_CS **ReturnedCS);

RedfishCS_status
CS_To_PowerSupply_V1_0_0_JSON (RedfishPowerSupply_V1_0_0_PowerSupply_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyPowerSupply_V1_0_0_CS (RedfishPowerSupply_V1_0_0_PowerSupply_CS *CSPtr);

RedfishCS_status
DestroyPowerSupply_V1_0_0_Json (RedfishCS_char *JsonText);

#endif
