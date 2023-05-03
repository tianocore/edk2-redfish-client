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

#ifndef RedfishVolume_V1_0_4_CSTRUCT_H_
#define RedfishVolume_V1_0_4_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_CS_
#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishResource_Condition_CS RedfishResource_Condition_CS;
#endif

#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

#ifndef RedfishResource_Status_CS_
typedef struct _RedfishResource_Status_CS RedfishResource_Status_CS;
#endif

typedef struct _RedfishVolume_V1_0_4_Actions_CS RedfishVolume_V1_0_4_Actions_CS;
typedef struct _RedfishVolume_V1_0_4_CheckConsistency_CS RedfishVolume_V1_0_4_CheckConsistency_CS;
typedef struct _RedfishVolume_V1_0_4_Links_CS RedfishVolume_V1_0_4_Links_CS;
typedef struct _RedfishVolume_V1_0_4_OemActions_CS RedfishVolume_V1_0_4_OemActions_CS;
typedef struct _RedfishVolume_V1_0_4_Operation_CS RedfishVolume_V1_0_4_Operation_CS;
typedef struct _RedfishVolume_V1_0_4_Volume_CS RedfishVolume_V1_0_4_Volume_CS;
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

typedef struct _RedfishVolume_V1_0_4_Actions_CS {
    RedfishVolume_V1_0_4_CheckConsistency_CS    *Volume_CheckConsistency;
    RedfishVolume_V1_0_4_OemActions_CS          *Oem;                   
} RedfishVolume_V1_0_4_Actions_CS;

//
// This action is used to force a check of the Volume's parity or redundant data
// to ensure it matches calculated values.
//
typedef struct _RedfishVolume_V1_0_4_CheckConsistency_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishVolume_V1_0_4_CheckConsistency_CS;

typedef struct _RedfishVolume_V1_0_4_Links_CS {
    RedfishCS_Link            Drives;               // An array of references to the
                                                    // drives which contain this
                                                    // volume. This will reference
                                                    // Drives that either wholly or
                                                    // only partly contain this
                                                    // volume.
    RedfishCS_int64           *Drivesodata_count;
    RedfishResource_Oem_CS    *Oem;                 // The OEM extension property.
} RedfishVolume_V1_0_4_Links_CS;

typedef struct _RedfishVolume_V1_0_4_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishVolume_V1_0_4_OemActions_CS;

typedef struct _RedfishVolume_V1_0_4_Operation_CS {
    RedfishCS_Link     AssociatedFeaturesRegistry;    // A reference to the task
                                                     // associated with the operation
                                                     // if any.
    RedfishCS_char     *OperationName;               // The name of the operation.
    RedfishCS_int64    *PercentageComplete;          // The percentage of the
                                                     // operation that has been
                                                     // completed.
} RedfishVolume_V1_0_4_Operation_CS;

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
// Volume contains properties used to describe a volume, virtual disk, LUN, or
// other logical storage entity for any system.
//
typedef struct _RedfishVolume_V1_0_4_Volume_CS {
    RedfishCS_Header                     Header;
    RedfishCS_char                       *odata_context;    
    RedfishCS_char                       *odata_etag;       
    RedfishCS_char                       *odata_id;         
    RedfishCS_char                       *odata_type;       
    RedfishVolume_V1_0_4_Actions_CS      *Actions;              // The available actions for this
                                                                // resource.
    RedfishCS_int64                      *BlockSizeBytes;       // The size of the smallest
                                                                // addressable unit (Block) of
                                                                // this volume in bytes.
    RedfishCS_int64                      *CapacityBytes;        // The size in bytes of this
                                                                // Volume.
    RedfishCS_char                       *Description;      
    RedfishCS_bool                       *Encrypted;            // Is this Volume encrypted.
    RedfishCS_char                       *EncryptionTypes;      // The types of encryption used
                                                                // by this Volume.
    RedfishCS_char                       *Id;               
    RedfishCS_Link                       Identifiers;           // The Durable names for the
                                                                // volume.
    RedfishVolume_V1_0_4_Links_CS        *Links;                // Contains references to other
                                                                // resources that are related to
                                                                // this resource.
    RedfishCS_char                       *Name;             
    RedfishResource_Oem_CS               *Oem;                  // The OEM extension property.
    RedfishVolume_V1_0_4_Operation_CS    *Operations;           // The operations currently
                                                                // running on the Volume.
    RedfishCS_int64                      *OptimumIOSizeBytes;    // The size in bytes of this
                                                                // Volume's optimum IO size.
    RedfishResource_Status_CS            *Status;               // The property contains the
                                                                // status of the Volume.
    RedfishCS_char                       *VolumeType;           // The type of this volume.
} RedfishVolume_V1_0_4_Volume_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

RedfishCS_status
Json_Volume_V1_0_4_To_CS (char *JsonRawText, RedfishVolume_V1_0_4_Volume_CS **ReturnedCS);

RedfishCS_status
CS_To_Volume_V1_0_4_JSON (RedfishVolume_V1_0_4_Volume_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyVolume_V1_0_4_CS (RedfishVolume_V1_0_4_Volume_CS *CSPtr);

RedfishCS_status
DestroyVolume_V1_0_4_Json (RedfishCS_char *JsonText);

#endif
