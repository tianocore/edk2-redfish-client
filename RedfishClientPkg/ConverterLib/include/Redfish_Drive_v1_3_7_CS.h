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

#ifndef RedfishDrive_V1_3_7_CSTRUCT_H_
#define RedfishDrive_V1_3_7_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishDrive_V1_3_7_Operations_Array_CS RedfishDrive_V1_3_7_Operations_Array_CS;
typedef struct _RedfishDrive_V1_3_7_Actions_CS RedfishDrive_V1_3_7_Actions_CS;
typedef struct _RedfishDrive_V1_3_7_Drive_CS RedfishDrive_V1_3_7_Drive_CS;
typedef struct _RedfishDrive_V1_3_7_Links_CS RedfishDrive_V1_3_7_Links_CS;
typedef struct _RedfishDrive_V1_3_7_OemActions_CS RedfishDrive_V1_3_7_OemActions_CS;
typedef struct _RedfishDrive_V1_3_7_Operations_CS RedfishDrive_V1_3_7_Operations_CS;
typedef struct _RedfishDrive_V1_3_7_SecureErase_CS RedfishDrive_V1_3_7_SecureErase_CS;
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
typedef struct _RedfishDrive_V1_3_7_Actions_CS {
    RedfishDrive_V1_3_7_SecureErase_CS    *Drive_SecureErase;
    RedfishDrive_V1_3_7_OemActions_CS     *Oem;                 // The available OEM-specific
                                                                // actions for this resource.
} RedfishDrive_V1_3_7_Actions_CS;

//
// The links to other resources that are related to this resource.
//
typedef struct _RedfishDrive_V1_3_7_Links_CS {
    RedfishCS_Link            Chassis;                 // The link to the chassis that
                                                       // contains this drive.
    RedfishCS_Link            Endpoints;               // An array of links to the
                                                       // endpoints that connect to this
                                                       // drive.
    RedfishCS_int64           *Endpointsodata_count;
    RedfishResource_Oem_CS    *Oem;                    // The OEM extension property.
    RedfishCS_Link            Volumes;                 // An array of links to the
                                                       // volumes that this drive either
                                                       // wholly or only partially
                                                       // contains.
    RedfishCS_int64           *Volumesodata_count; 
} RedfishDrive_V1_3_7_Links_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishDrive_V1_3_7_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishDrive_V1_3_7_OemActions_CS;

//
// An operation currently running on this resource.
//
typedef struct _RedfishDrive_V1_3_7_Operations_CS {
    RedfishCS_Link     AssociatedTask;        // The link to the task
                                              // associated with the operation,
                                              // if any.
    RedfishCS_char     *OperationName;        // The name of the operation.
    RedfishCS_int64    *PercentageComplete;    // The percentage of the
                                              // operation that has been
                                              // completed.
} RedfishDrive_V1_3_7_Operations_CS;

//
// This action securely erases the contents of the drive.
//
typedef struct _RedfishDrive_V1_3_7_SecureErase_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishDrive_V1_3_7_SecureErase_CS;

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
// The Drive schema represents a single physical drive for a system, including
// links to associated volumes.
//
typedef struct _RedfishDrive_V1_3_7_Drive_CS {
    RedfishCS_Header                           Header;
    RedfishCS_char                             *odata_context;               
    RedfishCS_char                             *odata_etag;                  
    RedfishCS_char                             *odata_id;                    
    RedfishCS_char                             *odata_type;                  
    RedfishDrive_V1_3_7_Actions_CS             *Actions;                         // The available actions for this
                                                                                 // resource.
    RedfishCS_Link                             Assembly;                         // The link to the assembly
                                                                                 // associated with this drive.
    RedfishCS_char                             *AssetTag;                        // The user-assigned asset tag
                                                                                 // for this drive.
    RedfishCS_int64                            *BlockSizeBytes;                  // The size, in bytes, of the
                                                                                 // smallest addressable unit, or
                                                                                 // block.
    RedfishCS_int64                            *CapableSpeedGbs;                 // The speed, in gigabit per
                                                                                 // second (Gbit/s), at which this
                                                                                 // drive can communicate to a
                                                                                 // storage controller in ideal
                                                                                 // conditions.
    RedfishCS_int64                            *CapacityBytes;                   // The size, in bytes, of this
                                                                                 // drive.
    RedfishCS_char                             *Description;                 
    RedfishCS_char                             *EncryptionAbility;               // The encryption ability of this
                                                                                 // drive.
    RedfishCS_char                             *EncryptionStatus;                // The status of the encryption
                                                                                 // of this drive.
    RedfishCS_bool                             *FailurePredicted;                // An indication of whether this
                                                                                 // drive currently predicts a
                                                                                 // failure in the near future.
    RedfishCS_char                             *HotspareType;                    // The type of hot spare that
                                                                                 // this drive currently serves
                                                                                 // as.
    RedfishCS_char                             *Id;                          
    RedfishCS_Link                             Identifiers;                      // The durable names for the
                                                                                 // drive.
    RedfishCS_char                             *IndicatorLED;                    // The state of the indicator
                                                                                 // LED, that identifies the
                                                                                 // drive.
    RedfishDrive_V1_3_7_Links_CS               *Links;                           // The links to other resources
                                                                                 // that are related to this
                                                                                 // resource.
    RedfishCS_Link                             Location;                         // The location of the drive.
    RedfishCS_char                             *Manufacturer;                    // The manufacturer of this
                                                                                 // drive.
    RedfishCS_char                             *MediaType;                       // The type of media contained in
                                                                                 // this drive.
    RedfishCS_char                             *Model;                           // The model number for the
                                                                                 // drive.
    RedfishCS_char                             *Name;                        
    RedfishCS_int64                            *NegotiatedSpeedGbs;              // The speed, in gigabit per
                                                                                 // second (Gbit/s), at which this
                                                                                 // drive currently communicates
                                                                                 // to the storage controller.
    RedfishResource_Oem_CS                     *Oem;                             // The OEM extension property.
    RedfishDrive_V1_3_7_Operations_Array_CS    *Operations;                      // The operations currently
                                                                                 // running on the Drive.
    RedfishCS_char                             *PartNumber;                      // The part number for this
                                                                                 // drive.
    RedfishCS_int64                            *PredictedMediaLifeLeftPercent;    // The percentage of reads and
                                                                                 // writes that are predicted to
                                                                                 // be available for the media.
    RedfishCS_char                             *Protocol;                        // The protocol that this drive
                                                                                 // currently uses to communicate
                                                                                 // to the storage controller.
    RedfishCS_char                             *Revision;                        // The revision of this drive.
                                                                                 // This is typically the firmware
                                                                                 // or hardware version of the
                                                                                 // drive.
    RedfishCS_int64                            *RotationSpeedRPM;                // The rotation speed of this
                                                                                 // drive, in revolutions per
                                                                                 // minute (RPM).
    RedfishCS_char                             *SKU;                             // The SKU for this drive.
    RedfishCS_char                             *SerialNumber;                    // The serial number for this
                                                                                 // drive.
    RedfishResource_Status_CS                  *Status;                          // The status and health of the
                                                                                 // resource and its subordinate
                                                                                 // or dependent resources.
    RedfishCS_char                             *StatusIndicator;                 // The state of the status
                                                                                 // indicator, which communicates
                                                                                 // status information about this
                                                                                 // drive.
} RedfishDrive_V1_3_7_Drive_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

typedef struct _RedfishDrive_V1_3_7_Operations_Array_CS  {
    RedfishDrive_V1_3_7_Operations_Array_CS    *Next;
    RedfishDrive_V1_3_7_Operations_CS    *ArrayValue;
} RedfishDrive_V1_3_7_Operations_Array_CS;

RedfishCS_status
Json_Drive_V1_3_7_To_CS (char *JsonRawText, RedfishDrive_V1_3_7_Drive_CS **ReturnedCS);

RedfishCS_status
CS_To_Drive_V1_3_7_JSON (RedfishDrive_V1_3_7_Drive_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyDrive_V1_3_7_CS (RedfishDrive_V1_3_7_Drive_CS *CSPtr);

RedfishCS_status
DestroyDrive_V1_3_7_Json (RedfishCS_char *JsonText);

#endif
