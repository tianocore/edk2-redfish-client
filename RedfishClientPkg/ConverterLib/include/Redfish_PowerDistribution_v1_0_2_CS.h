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

#ifndef RedfishPowerdistribution_V1_0_2_CSTRUCT_H_
#define RedfishPowerdistribution_V1_0_2_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishPowerDistribution_V1_0_2_Actions_CS RedfishPowerDistribution_V1_0_2_Actions_CS;
typedef struct _RedfishPowerDistribution_V1_0_2_Links_CS RedfishPowerDistribution_V1_0_2_Links_CS;
typedef struct _RedfishPowerDistribution_V1_0_2_OemActions_CS RedfishPowerDistribution_V1_0_2_OemActions_CS;
typedef struct _RedfishPowerDistribution_V1_0_2_PowerDistribution_CS RedfishPowerDistribution_V1_0_2_PowerDistribution_CS;
typedef struct _RedfishPowerDistribution_V1_0_2_TransferConfiguration_CS RedfishPowerDistribution_V1_0_2_TransferConfiguration_CS;
typedef struct _RedfishPowerDistribution_V1_0_2_TransferControl_CS RedfishPowerDistribution_V1_0_2_TransferControl_CS;
typedef struct _RedfishPowerDistribution_V1_0_2_TransferCriteria_CS RedfishPowerDistribution_V1_0_2_TransferCriteria_CS;
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
typedef struct _RedfishPowerDistribution_V1_0_2_Actions_CS {
    RedfishPowerDistribution_V1_0_2_TransferControl_CS    *PowerDistribution_TransferControl;
    RedfishPowerDistribution_V1_0_2_OemActions_CS         *Oem;                                 // The available OEM-specific
                                                                                                // actions for this resource.
} RedfishPowerDistribution_V1_0_2_Actions_CS;

//
// The links to other resources that are related to this resource.
//
typedef struct _RedfishPowerDistribution_V1_0_2_Links_CS {
    RedfishCS_Link            Chassis;                 // An array of links to the
                                                       // chassis that contain this
                                                       // equipment.
    RedfishCS_int64           *Chassisodata_count; 
    RedfishCS_Link            Facility;                // A link to the facility that
                                                       // contains this equipment.
    RedfishCS_Link            ManagedBy;               // An array of links to the
                                                       // managers responsible for
                                                       // managing this equipment.
    RedfishCS_int64           *ManagedByodata_count;
    RedfishResource_Oem_CS    *Oem;                    // The OEM extension property.
} RedfishPowerDistribution_V1_0_2_Links_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishPowerDistribution_V1_0_2_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishPowerDistribution_V1_0_2_OemActions_CS;

//
// The configuration settings for an automatic transfer switch.
//
typedef struct _RedfishPowerDistribution_V1_0_2_TransferConfiguration_CS {
    RedfishCS_char     *ActiveMainsId;                    // The mains circuit that is
                                                          // switched on and qualified to
                                                          // supply power to the output
                                                          // circuit.
    RedfishCS_bool     *AutoTransferEnabled;              // Indicates if the qualified
                                                          // alternate mains circuit is
                                                          // automatically switched on when
                                                          // the preferred mains circuit
                                                          // becomes unqualified and is
                                                          // automatically switched off.
    RedfishCS_bool     *ClosedTransitionAllowed;          // Indicates if a make-before-
                                                          // break switching sequence of
                                                          // the mains circuits is
                                                          // permitted when they are both
                                                          // qualified and in
                                                          // synchronization.
    RedfishCS_int64    *ClosedTransitionTimeoutSeconds;    // The time in seconds to wait
                                                          // for a closed transition to
                                                          // occur.
    RedfishCS_char     *PreferredMainsId;                 // The preferred source for the
                                                          // mains circuit to this
                                                          // equipment.
    RedfishCS_int64    *RetransferDelaySeconds;           // The time in seconds to delay
                                                          // the automatic transfer from
                                                          // the alternate mains circuit
                                                          // back to the preferred mains
                                                          // circuit.
    RedfishCS_bool     *RetransferEnabled;                // Indicates if the automatic
                                                          // transfer is permitted from the
                                                          // alternate mains circuit back
                                                          // to the preferred mains circuit
                                                          // after the preferred mains
                                                          // circuit is qualified again and
                                                          // the Retransfer Delay time has
                                                          // expired.
    RedfishCS_int64    *TransferDelaySeconds;             // The time in seconds to delay
                                                          // the automatic transfer from
                                                          // the preferred mains circuit to
                                                          // the alternate mains circuit
                                                          // when the preferred mains
                                                          // circuit is disqualified.
    RedfishCS_bool     *TransferInhibit;                  // Indicates if any transfer is
                                                          // inhibited.
} RedfishPowerDistribution_V1_0_2_TransferConfiguration_CS;

//
// This action transfers control to the alternative input circuit.
//
typedef struct _RedfishPowerDistribution_V1_0_2_TransferControl_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishPowerDistribution_V1_0_2_TransferControl_CS;

//
// The criteria used to initiate a transfer for an automatic transfer switch.
//
typedef struct _RedfishPowerDistribution_V1_0_2_TransferCriteria_CS {
    RedfishCS_int64    *OverNominalFrequencyHz;      // The frequency in Hertz over
                                                     // the nominal value that
                                                     // satisfies a criterion for
                                                     // transfer.
    RedfishCS_int64    *OverVoltageRMSPercentage;    // The positive percentage of
                                                     // voltage RMS over the nominal
                                                     // value that satisfies a
                                                     // criterion for transfer.
    RedfishCS_char     *TransferSensitivity;         // The sensitivity to voltage
                                                     // waveform quality to satisfy
                                                     // the criterion for initiating a
                                                     // transfer.
    RedfishCS_int64    *UnderNominalFrequencyHz;     // The frequency in Hertz under
                                                     // the nominal value that
                                                     // satisfies a criterion for
                                                     // transfer.
    RedfishCS_int64    *UnderVoltageRMSPercentage;    // The negative percentage of
                                                     // voltage RMS under the nominal
                                                     // value that satisfies a
                                                     // criterion for transfer.
} RedfishPowerDistribution_V1_0_2_TransferCriteria_CS;

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
// This is the schema definition for a power distribution component or unit, such
// as a floor power distribution unit (PDU) or switchgear.
//
typedef struct _RedfishPowerDistribution_V1_0_2_PowerDistribution_CS {
    RedfishCS_Header                                            Header;
    RedfishCS_char                                              *odata_context;       
    RedfishCS_char                                              *odata_etag;          
    RedfishCS_char                                              *odata_id;            
    RedfishCS_char                                              *odata_type;          
    RedfishPowerDistribution_V1_0_2_Actions_CS                  *Actions;                 // The available actions for this
                                                                                          // resource.
    RedfishCS_char                                              *AssetTag;                // The user-assigned asset tag
                                                                                          // for this equipment.
    RedfishCS_Link                                              Branches;                 // A link to the branch circuits
                                                                                          // for this equipment.
    RedfishCS_char                                              *Description;         
    RedfishCS_char                                              *EquipmentType;           // The type of equipment this
                                                                                          // resource represents.
    RedfishCS_Link                                              Feeders;                  // A link to the feeder circuits
                                                                                          // for this equipment.
    RedfishCS_char                                              *FirmwareVersion;         // The firmware version of this
                                                                                          // equipment.
    RedfishCS_char                                              *Id;                  
    RedfishPowerDistribution_V1_0_2_Links_CS                    *Links;                   // The links to other resources
                                                                                          // that are related to this
                                                                                          // resource.
    RedfishCS_Link                                              Location;                 // The location of the equipment.
    RedfishCS_Link                                              Mains;                    // A link to the power input
                                                                                          // circuits for this equipment.
    RedfishCS_char                                              *Manufacturer;            // The manufacturer of this
                                                                                          // equipment.
    RedfishCS_Link                                              Metrics;                  // A link to the summary metrics
                                                                                          // for this equipment.
    RedfishCS_char                                              *Model;                   // The product model number of
                                                                                          // this equipment.
    RedfishCS_char                                              *Name;                
    RedfishResource_Oem_CS                                      *Oem;                     // The OEM extension property.
    RedfishCS_Link                                              OutletGroups;             // A link to the outlet groups
                                                                                          // for this equipment.
    RedfishCS_Link                                              Outlets;                  // A link to the outlets for this
                                                                                          // equipment.
    RedfishCS_char                                              *PartNumber;              // The part number for this
                                                                                          // equipment.
    RedfishCS_char                                              *ProductionDate;          // The production or
                                                                                          // manufacturing date of this
                                                                                          // equipment.
    RedfishCS_Link                                              Sensors;                  // A link to the collection of
                                                                                          // sensors located in the
                                                                                          // equipment and sub-components.
    RedfishCS_char                                              *SerialNumber;            // The serial number for this
                                                                                          // equipment.
    RedfishResource_Status_CS                                   *Status;                  // The status and health of the
                                                                                          // resource and its subordinate
                                                                                          // or dependent resources.
    RedfishCS_Link                                              Subfeeds;                 // A link to the subfeed circuits
                                                                                          // for this equipment.
    RedfishPowerDistribution_V1_0_2_TransferConfiguration_CS    *TransferConfiguration;    // The configuration settings for
                                                                                          // an automatic transfer switch.
    RedfishPowerDistribution_V1_0_2_TransferCriteria_CS         *TransferCriteria;        // The criteria used to initiate
                                                                                          // a transfer for an automatic
                                                                                          // transfer switch.
    RedfishCS_char                                              *UUID;                    // The UUID for this equipment.
    RedfishCS_char                                              *Version;                 // The hardware version of this
                                                                                          // equipment.
} RedfishPowerDistribution_V1_0_2_PowerDistribution_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

RedfishCS_status
Json_PowerDistribution_V1_0_2_To_CS (char *JsonRawText, RedfishPowerDistribution_V1_0_2_PowerDistribution_CS **ReturnedCS);

RedfishCS_status
CS_To_PowerDistribution_V1_0_2_JSON (RedfishPowerDistribution_V1_0_2_PowerDistribution_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyPowerDistribution_V1_0_2_CS (RedfishPowerDistribution_V1_0_2_PowerDistribution_CS *CSPtr);

RedfishCS_status
DestroyPowerDistribution_V1_0_2_Json (RedfishCS_char *JsonText);

#endif
