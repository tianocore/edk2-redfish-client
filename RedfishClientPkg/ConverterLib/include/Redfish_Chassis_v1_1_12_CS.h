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

#ifndef RedfishChassis_V1_1_12_CSTRUCT_H_
#define RedfishChassis_V1_1_12_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef Redfishodatav4_idRef_Array_CS_
typedef struct _Redfishodatav4_idRef_Array_CS Redfishodatav4_idRef_Array_CS;
#endif
#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishChassis_V1_1_12_Actions_CS RedfishChassis_V1_1_12_Actions_CS;
typedef struct _RedfishChassis_V1_1_12_Chassis_CS RedfishChassis_V1_1_12_Chassis_CS;
typedef struct _RedfishChassis_V1_1_12_Links_CS RedfishChassis_V1_1_12_Links_CS;
typedef struct _RedfishChassis_V1_1_12_OemActions_CS RedfishChassis_V1_1_12_OemActions_CS;
typedef struct _RedfishChassis_V1_1_12_PhysicalSecurity_CS RedfishChassis_V1_1_12_PhysicalSecurity_CS;
typedef struct _RedfishChassis_V1_1_12_Reset_CS RedfishChassis_V1_1_12_Reset_CS;
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
typedef struct _RedfishChassis_V1_1_12_Actions_CS {
    RedfishChassis_V1_1_12_Reset_CS         *Chassis_Reset;
    RedfishChassis_V1_1_12_OemActions_CS    *Oem;             // The available OEM-specific
                                                              // actions for this resource.
} RedfishChassis_V1_1_12_Actions_CS;

//
// The links to other resources that are related to this resource.
//
typedef struct _RedfishChassis_V1_1_12_Links_CS {
    RedfishCS_Link                   ComputerSystems;               // An array of links to the
                                                                    // computer systems that this
                                                                    // chassis directly and wholly
                                                                    // contains.
    RedfishCS_int64                  *ComputerSystemsodata_count;
    RedfishCS_Link                   ContainedBy;                   // The link to the chassis that
                                                                    // contains this chassis.
    RedfishCS_Link                   Contains;                      // An array of links to any other
                                                                    // chassis that this chassis has
                                                                    // in it.
    RedfishCS_int64                  *Containsodata_count;      
    Redfishodatav4_idRef_Array_CS    *CooledBy;                     // An array of links to resources
                                                                    // or objects that cool this
                                                                    // chassis.  Normally, the link
                                                                    // is for either a chassis or a
                                                                    // specific set of fans.
    RedfishCS_int64                  *CooledByodata_count;      
    RedfishCS_Link                   ManagedBy;                     // An array of links to the
                                                                    // managers responsible for
                                                                    // managing this chassis.
    RedfishCS_int64                  *ManagedByodata_count;     
    RedfishResource_Oem_CS           *Oem;                          // The OEM extension property.
    Redfishodatav4_idRef_Array_CS    *PoweredBy;                    // An array of links to resources
                                                                    // or objects that power this
                                                                    // chassis.  Normally, the link
                                                                    // is for either a chassis or a
                                                                    // specific set of power
                                                                    // supplies.
    RedfishCS_int64                  *PoweredByodata_count;     
} RedfishChassis_V1_1_12_Links_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishChassis_V1_1_12_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishChassis_V1_1_12_OemActions_CS;

//
// The state of the physical security sensor.
//
typedef struct _RedfishChassis_V1_1_12_PhysicalSecurity_CS {
    RedfishCS_char     *IntrusionSensor;         // This indicates the known state
                                                 // of the physical security
                                                 // sensor, such as if it is
                                                 // hardware intrusion detected.
    RedfishCS_int64    *IntrusionSensorNumber;    // A numerical identifier to
                                                 // represent the physical
                                                 // security sensor.
    RedfishCS_char     *IntrusionSensorReArm;    // The method that restores this
                                                 // physical security sensor to
                                                 // the normal state.
} RedfishChassis_V1_1_12_PhysicalSecurity_CS;

//
// This action resets the chassis but does not reset systems or other contained
// resources, although side effects might occur that affect those resources.
//
typedef struct _RedfishChassis_V1_1_12_Reset_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishChassis_V1_1_12_Reset_CS;

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
// The Chassis schema represents the physical components of a system.  This
// resource represents the sheet-metal confined spaces and logical zones such as
// racks, enclosures, chassis and all other containers.  Subsystems, such as
// sensors, that operate outside of a system's data plane are linked either
// directly or indirectly through this resource.  A subsystem that operates
// outside of a system's data plane are not accessible to software that runs on
// the system.
//
typedef struct _RedfishChassis_V1_1_12_Chassis_CS {
    RedfishCS_Header                              Header;
    RedfishCS_char                                *odata_context;  
    RedfishCS_char                                *odata_etag;     
    RedfishCS_char                                *odata_id;       
    RedfishCS_char                                *odata_type;     
    RedfishChassis_V1_1_12_Actions_CS             *Actions;            // The available actions for this
                                                                       // resource.
    RedfishCS_char                                *AssetTag;           // The user-assigned asset tag of
                                                                       // this chassis.
    RedfishCS_char                                *ChassisType;        // The type of physical form
                                                                       // factor of the chassis.
    RedfishCS_char                                *Description;    
    RedfishCS_char                                *Id;             
    RedfishCS_char                                *IndicatorLED;       // The state of the indicator
                                                                       // LED, which identifies the
                                                                       // chassis.
    RedfishChassis_V1_1_12_Links_CS               *Links;              // The links to other resources
                                                                       // that are related to this
                                                                       // resource.
    RedfishCS_Link                                LogServices;         // The link to the logs for this
                                                                       // chassis.
    RedfishCS_char                                *Manufacturer;       // The manufacturer of this
                                                                       // chassis.
    RedfishCS_char                                *Model;              // The model number of the
                                                                       // chassis.
    RedfishCS_char                                *Name;           
    RedfishResource_Oem_CS                        *Oem;                // The OEM extension property.
    RedfishCS_char                                *PartNumber;         // The part number of the
                                                                       // chassis.
    RedfishChassis_V1_1_12_PhysicalSecurity_CS    *PhysicalSecurity;    // The state of the physical
                                                                       // security sensor.
    RedfishCS_Link                                Power;               // The link to the power
                                                                       // properties, or power supplies,
                                                                       // power policies, and sensors,
                                                                       // for this chassis.
    RedfishCS_char                                *PowerState;         // The current power state of the
                                                                       // chassis.
    RedfishCS_char                                *SKU;                // The SKU of the chassis.
    RedfishCS_char                                *SerialNumber;       // The serial number of the
                                                                       // chassis.
    RedfishResource_Status_CS                     *Status;             // The status and health of the
                                                                       // resource and its subordinate
                                                                       // or dependent resources.
    RedfishCS_Link                                Thermal;             // The link to the thermal
                                                                       // properties, such as fans,
                                                                       // cooling, and sensors, for this
                                                                       // chassis.
} RedfishChassis_V1_1_12_Chassis_CS;

#ifndef Redfishodatav4_idRef_Array_CS_
#define Redfishodatav4_idRef_Array_CS_
typedef struct _Redfishodatav4_idRef_Array_CS  {
    Redfishodatav4_idRef_Array_CS    *Next;
    Redfishodatav4_idRef_CS    *ArrayValue;
} Redfishodatav4_idRef_Array_CS;
#endif

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

RedfishCS_status
Json_Chassis_V1_1_12_To_CS (char *JsonRawText, RedfishChassis_V1_1_12_Chassis_CS **ReturnedCS);

RedfishCS_status
CS_To_Chassis_V1_1_12_JSON (RedfishChassis_V1_1_12_Chassis_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyChassis_V1_1_12_CS (RedfishChassis_V1_1_12_Chassis_CS *CSPtr);

RedfishCS_status
DestroyChassis_V1_1_12_Json (RedfishCS_char *JsonText);

#endif
