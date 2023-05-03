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

#ifndef RedfishDrive_V1_1_6_CSTRUCT_H_
#define RedfishDrive_V1_1_6_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishDrive_V1_1_6_Operations_Array_CS RedfishDrive_V1_1_6_Operations_Array_CS;
typedef struct _RedfishDrive_V1_1_6_Actions_CS RedfishDrive_V1_1_6_Actions_CS;
typedef struct _RedfishDrive_V1_1_6_Drive_CS RedfishDrive_V1_1_6_Drive_CS;
typedef struct _RedfishDrive_V1_1_6_Links_CS RedfishDrive_V1_1_6_Links_CS;
typedef struct _RedfishDrive_V1_1_6_OemActions_CS RedfishDrive_V1_1_6_OemActions_CS;
typedef struct _RedfishDrive_V1_1_6_Operations_CS RedfishDrive_V1_1_6_Operations_CS;
typedef struct _RedfishDrive_V1_1_6_SecureErase_CS RedfishDrive_V1_1_6_SecureErase_CS;
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
typedef struct _RedfishDrive_V1_1_6_Actions_CS {
    RedfishDrive_V1_1_6_SecureErase_CS    *Drive_SecureErase;
    RedfishDrive_V1_1_6_OemActions_CS     *Oem;                 // This property contains the
                                                                // available OEM specific actions
                                                                // for this resource.
} RedfishDrive_V1_1_6_Actions_CS;

//
// Contains references to other resources that are related to this resource.
//
typedef struct _RedfishDrive_V1_1_6_Links_CS {
    RedfishCS_Link            Endpoints;               // An array of references to the
                                                       // endpoints that connect to this
                                                       // drive.
    RedfishCS_int64           *Endpointsodata_count;
    RedfishResource_Oem_CS    *Oem;                    // Oem extension object.
    RedfishCS_Link            Volumes;                 // An array of references to the
                                                       // volumes contained in this
                                                       // drive. This will reference
                                                       // Volumes that are either wholly
                                                       // or only partly contained by
                                                       // this drive.
    RedfishCS_int64           *Volumesodata_count; 
} RedfishDrive_V1_1_6_Links_CS;

//
// The available OEM specific actions for this resource.
//
typedef struct _RedfishDrive_V1_1_6_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishDrive_V1_1_6_OemActions_CS;

//
// An operation currently running on this resource.
//
typedef struct _RedfishDrive_V1_1_6_Operations_CS {
    RedfishCS_Link     AssociatedTask;        // A reference to the task
                                              // associated with the operation
                                              // if any.
    RedfishCS_char     *OperationName;        // The name of the operation.
    RedfishCS_int64    *PercentageComplete;    // The percentage of the
                                              // operation that has been
                                              // completed.
} RedfishDrive_V1_1_6_Operations_CS;

//
// This action is used to securely erase the contents of the drive.
//
typedef struct _RedfishDrive_V1_1_6_SecureErase_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishDrive_V1_1_6_SecureErase_CS;

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
// The Drive schema represents a single physical disk drive for a system,
// including links to associated Volumes.
//
typedef struct _RedfishDrive_V1_1_6_Drive_CS {
    RedfishCS_Header                           Header;
    RedfishCS_char                             *odata_context;               
    RedfishCS_char                             *odata_etag;                  
    RedfishCS_char                             *odata_id;                    
    RedfishCS_char                             *odata_type;                  
    RedfishDrive_V1_1_6_Actions_CS             *Actions;                         // The available actions for this
                                                                                 // resource.
    RedfishCS_char                             *AssetTag;                        // The user assigned asset tag
                                                                                 // for this drive.
    RedfishCS_int64                            *BlockSizeBytes;                  // The size of the smallest
                                                                                 // addressible unit (Block) of
                                                                                 // this drive in bytes.
    RedfishCS_int64                            *CapableSpeedGbs;                 // The speed which this drive can
                                                                                 // communicate to a storage
                                                                                 // controller in ideal conditions
                                                                                 // in Gigabits per second.
    RedfishCS_int64                            *CapacityBytes;                   // The size in bytes of this
                                                                                 // Drive.
    RedfishCS_char                             *Description;                 
    RedfishCS_char                             *EncryptionAbility;               // The encryption abilities of
                                                                                 // this drive.
    RedfishCS_char                             *EncryptionStatus;                // The status of the encrytion of
                                                                                 // this drive.
    RedfishCS_bool                             *FailurePredicted;                // Is this drive currently
                                                                                 // predicting a failure in the
                                                                                 // near future.
    RedfishCS_char                             *HotspareType;                    // The type of hotspare this
                                                                                 // drive is currently serving as.
    RedfishCS_char                             *Id;                          
    RedfishCS_Link                             Identifiers;                      // The Durable names for the
                                                                                 // drive.
    RedfishCS_char                             *IndicatorLED;                    // The state of the indicator
                                                                                 // LED, used to identify the
                                                                                 // drive.
    RedfishDrive_V1_1_6_Links_CS               *Links;                           // Contains references to other
                                                                                 // resources that are related to
                                                                                 // this resource.
    RedfishCS_Link                             Location;                         // The Location of the drive.
    RedfishCS_char                             *Manufacturer;                    // This is the manufacturer of
                                                                                 // this drive.
    RedfishCS_char                             *MediaType;                       // The type of media contained in
                                                                                 // this drive.
    RedfishCS_char                             *Model;                           // This is the model number for
                                                                                 // the drive.
    RedfishCS_char                             *Name;                        
    RedfishCS_int64                            *NegotiatedSpeedGbs;              // The speed which this drive is
                                                                                 // currently communicating to the
                                                                                 // storage controller in Gigabits
                                                                                 // per second.
    RedfishResource_Oem_CS                     *Oem;                             // This is the
                                                                                 // manufacturer/provider specific
                                                                                 // extension moniker used to
                                                                                 // divide the Oem object into
                                                                                 // sections.
    RedfishDrive_V1_1_6_Operations_Array_CS    *Operations;                      // The operations currently
                                                                                 // running on the Drive.
    RedfishCS_char                             *PartNumber;                      // The part number for this
                                                                                 // drive.
    RedfishCS_int64                            *PredictedMediaLifeLeftPercent;    // The percentage of reads and
                                                                                 // writes that are predicted to
                                                                                 // still be available for the
                                                                                 // media.
    RedfishCS_char                             *Protocol;                        // The protocol this drive is
                                                                                 // using to communicate to the
                                                                                 // storage controller.
    RedfishCS_char                             *Revision;                        // The revision of this Drive.
                                                                                 // This is typically the
                                                                                 // firmware/hardware version of
                                                                                 // the drive.
    RedfishCS_int64                            *RotationSpeedRPM;                // The rotation speed of this
                                                                                 // Drive in Revolutions per
                                                                                 // Minute (RPM).
    RedfishCS_char                             *SKU;                             // This is the SKU for this
                                                                                 // drive.
    RedfishCS_char                             *SerialNumber;                    // The serial number for this
                                                                                 // drive.
    RedfishResource_Status_CS                  *Status;                          // This property describes the
                                                                                 // status and health of the
                                                                                 // resource and its children.
    RedfishCS_char                             *StatusIndicator;                 // The state of the status
                                                                                 // indicator, used to communicate
                                                                                 // status information about this
                                                                                 // drive.
} RedfishDrive_V1_1_6_Drive_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

typedef struct _RedfishDrive_V1_1_6_Operations_Array_CS  {
    RedfishDrive_V1_1_6_Operations_Array_CS    *Next;
    RedfishDrive_V1_1_6_Operations_CS    *ArrayValue;
} RedfishDrive_V1_1_6_Operations_Array_CS;

RedfishCS_status
Json_Drive_V1_1_6_To_CS (char *JsonRawText, RedfishDrive_V1_1_6_Drive_CS **ReturnedCS);

RedfishCS_status
CS_To_Drive_V1_1_6_JSON (RedfishDrive_V1_1_6_Drive_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyDrive_V1_1_6_CS (RedfishDrive_V1_1_6_Drive_CS *CSPtr);

RedfishCS_status
DestroyDrive_V1_1_6_Json (RedfishCS_char *JsonText);

#endif
