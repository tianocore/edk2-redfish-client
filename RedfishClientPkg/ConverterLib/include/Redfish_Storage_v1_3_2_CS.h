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

#ifndef RedfishStorage_V1_3_2_CSTRUCT_H_
#define RedfishStorage_V1_3_2_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_CS_
#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishStorage_V1_3_2_StorageController_Array_CS RedfishStorage_V1_3_2_StorageController_Array_CS;
typedef struct _RedfishResource_Condition_CS RedfishResource_Condition_CS;
#endif

#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

#ifndef RedfishResource_Status_CS_
typedef struct _RedfishResource_Status_CS RedfishResource_Status_CS;
#endif

typedef struct _RedfishStorage_V1_3_2_Actions_CS RedfishStorage_V1_3_2_Actions_CS;
typedef struct _RedfishStorage_V1_3_2_Links_CS RedfishStorage_V1_3_2_Links_CS;
typedef struct _RedfishStorage_V1_3_2_OemActions_CS RedfishStorage_V1_3_2_OemActions_CS;
typedef struct _RedfishStorage_V1_3_2_SetEncryptionKey_CS RedfishStorage_V1_3_2_SetEncryptionKey_CS;
typedef struct _RedfishStorage_V1_3_2_Storage_CS RedfishStorage_V1_3_2_Storage_CS;
typedef struct _RedfishStorage_V1_3_2_StorageController_CS RedfishStorage_V1_3_2_StorageController_CS;
typedef struct _RedfishStorage_V1_3_2_StorageControllerActions_CS RedfishStorage_V1_3_2_StorageControllerActions_CS;
typedef struct _RedfishStorage_V1_3_2_StorageControllerLinks_CS RedfishStorage_V1_3_2_StorageControllerLinks_CS;
typedef struct _RedfishStorage_V1_3_2_StorageControllerOemActions_CS RedfishStorage_V1_3_2_StorageControllerOemActions_CS;
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
// The available actions for this resource.
//
typedef struct _RedfishStorage_V1_3_2_Actions_CS {
    RedfishStorage_V1_3_2_SetEncryptionKey_CS    *Storage_SetEncryptionKey;
    RedfishStorage_V1_3_2_OemActions_CS          *Oem;                        // This property contains the
                                                                              // available OEM specific actions
                                                                              // for this resource.
} RedfishStorage_V1_3_2_Actions_CS;

//
// Contains references to other resources that are related to this resource.
//
typedef struct _RedfishStorage_V1_3_2_Links_CS {
    RedfishCS_Link            Enclosures;               // An array of references to the
                                                        // chassis to which this storage
                                                        // subsystem is attached.
    RedfishCS_int64           *Enclosuresodata_count;
    RedfishResource_Oem_CS    *Oem;                     // Oem extension object.
} RedfishStorage_V1_3_2_Links_CS;

//
// The available OEM specific actions for this resource.
//
typedef struct _RedfishStorage_V1_3_2_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishStorage_V1_3_2_OemActions_CS;

//
// This action is used to set the encryption key for the storage subsystem.
//
typedef struct _RedfishStorage_V1_3_2_SetEncryptionKey_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishStorage_V1_3_2_SetEncryptionKey_CS;

//
// This schema defines a storage controller and its respective properties.  A
// storage controller represents a storage device (physical or virtual) that
// produces Volumes.
//
typedef struct _RedfishStorage_V1_3_2_StorageController_CS {
    RedfishCS_char                                       *odata_id;                   
    RedfishStorage_V1_3_2_StorageControllerActions_CS    *Actions;                        // The available actions for this
                                                                                          // resource.
    RedfishCS_char                                       *AssetTag;                       // The user assigned asset tag
                                                                                          // for this storage controller.
    RedfishCS_char                                       *FirmwareVersion;                // The firmware version of this
                                                                                          // storage Controller.
    RedfishCS_Link                                       Identifiers;                     // The Durable names for the
                                                                                          // storage controller.
    RedfishStorage_V1_3_2_StorageControllerLinks_CS      *Links;                          // Contains references to other
                                                                                          // resources that are related to
                                                                                          // this resource.
    RedfishCS_char                                       *Manufacturer;                   // This is the manufacturer of
                                                                                          // this storage controller.
    RedfishCS_char                                       *MemberId;                       // This is the identifier for the
                                                                                          // member within the collection.
    RedfishCS_char                                       *Model;                          // This is the model number for
                                                                                          // the storage controller.
    RedfishCS_char                                       *Name;                           // The name of the Storage
                                                                                          // Controller.
    RedfishResource_Oem_CS                               *Oem;                            // This is the
                                                                                          // manufacturer/provider specific
                                                                                          // extension moniker used to
                                                                                          // divide the Oem object into
                                                                                          // sections.
    RedfishCS_char                                       *PartNumber;                     // The part number for this
                                                                                          // storage controller.
    RedfishCS_char                                       *SKU;                            // This is the SKU for this
                                                                                          // storage controller.
    RedfishCS_char                                       *SerialNumber;                   // The serial number for this
                                                                                          // storage controller.
    RedfishCS_int64                                      *SpeedGbps;                      // The maximum speed of the
                                                                                          // storage controller's device
                                                                                          // interface.
    RedfishResource_Status_CS                            *Status;                         // This property describes the
                                                                                          // status and health of the
                                                                                          // resource and its children.
    RedfishCS_char_Array                                 *SupportedControllerProtocols;    // This represents the protocols
                                                                                          // by which this storage
                                                                                          // controller can be communicated
                                                                                          // to.
    RedfishCS_char_Array                                 *SupportedDeviceProtocols;       // This represents the protocols
                                                                                          // which the storage controller
                                                                                          // can use to communicate with
                                                                                          // attached devices.
} RedfishStorage_V1_3_2_StorageController_CS;

//
// The available actions for this resource.
//
typedef struct _RedfishStorage_V1_3_2_StorageControllerActions_CS {
    RedfishStorage_V1_3_2_StorageControllerOemActions_CS    *Oem;    // This property contains the
                                                                    // available OEM specific actions
                                                                    // for this resource.
} RedfishStorage_V1_3_2_StorageControllerActions_CS;

//
// Contains references to other resources that are related to this resource.
//
typedef struct _RedfishStorage_V1_3_2_StorageControllerLinks_CS {
    RedfishCS_Link            Endpoints;               // An array of references to the
                                                       // endpoints that connect to this
                                                       // controller.
    RedfishCS_int64           *Endpointsodata_count;
    RedfishResource_Oem_CS    *Oem;                    // Oem extension object.
} RedfishStorage_V1_3_2_StorageControllerLinks_CS;

//
// The available OEM specific actions for this resource.
//
typedef struct _RedfishStorage_V1_3_2_StorageControllerOemActions_CS {
    RedfishCS_Link    Prop;
} RedfishStorage_V1_3_2_StorageControllerOemActions_CS;

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
// This schema defines a storage subsystem and its respective properties.  A
// storage subsystem represents a set of storage controllers (physical or virtual)
// and the resources such as volumes that can be accessed from that subsystem.
//
typedef struct _RedfishStorage_V1_3_2_Storage_CS {
    RedfishCS_Header                                    Header;
    RedfishCS_char                                      *odata_context;               
    RedfishCS_char                                      *odata_etag;                  
    RedfishCS_char                                      *odata_id;                    
    RedfishCS_char                                      *odata_type;                  
    RedfishStorage_V1_3_2_Actions_CS                    *Actions;                         // The available actions for this
                                                                                          // resource.
    RedfishCS_char                                      *Description;                 
    RedfishCS_Link                                      Drives;                           // The set of drives attached to
                                                                                          // the storage controllers
                                                                                          // represented by this resource.
    RedfishCS_int64                                     *Drivesodata_count;           
    RedfishCS_char                                      *Id;                          
    RedfishStorage_V1_3_2_Links_CS                      *Links;                           // Contains references to other
                                                                                          // resources that are related to
                                                                                          // this resource.
    RedfishCS_char                                      *Name;                        
    RedfishResource_Oem_CS                              *Oem;                             // This is the
                                                                                          // manufacturer/provider specific
                                                                                          // extension moniker used to
                                                                                          // divide the Oem object into
                                                                                          // sections.
    RedfishCS_Link                                      Redundancy;                       // Redundancy information for the
                                                                                          // storage subsystem.
    RedfishCS_int64                                     *Redundancyodata_count;       
    RedfishResource_Status_CS                           *Status;                          // This property describes the
                                                                                          // status and health of the
                                                                                          // resource and its children.
    RedfishStorage_V1_3_2_StorageController_Array_CS    *StorageControllers;              // The set of storage controllers
                                                                                          // represented by this resource.
    RedfishCS_int64                                     *StorageControllersodata_count;
    RedfishCS_Link                                      Volumes;                          // The set of volumes produced by
                                                                                          // the storage controllers
                                                                                          // represented by this resource.
} RedfishStorage_V1_3_2_Storage_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

typedef struct _RedfishStorage_V1_3_2_StorageController_Array_CS  {
    RedfishStorage_V1_3_2_StorageController_Array_CS    *Next;
    RedfishStorage_V1_3_2_StorageController_CS    *ArrayValue;
} RedfishStorage_V1_3_2_StorageController_Array_CS;

RedfishCS_status
Json_Storage_V1_3_2_To_CS (char *JsonRawText, RedfishStorage_V1_3_2_Storage_CS **ReturnedCS);

RedfishCS_status
CS_To_Storage_V1_3_2_JSON (RedfishStorage_V1_3_2_Storage_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyStorage_V1_3_2_CS (RedfishStorage_V1_3_2_Storage_CS *CSPtr);

RedfishCS_status
DestroyStorage_V1_3_2_Json (RedfishCS_char *JsonText);

#endif
