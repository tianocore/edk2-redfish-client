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

#ifndef RedfishPciefunction_V1_1_4_CSTRUCT_H_
#define RedfishPciefunction_V1_1_4_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishPCIeFunction_V1_1_4_Actions_CS RedfishPCIeFunction_V1_1_4_Actions_CS;
typedef struct _RedfishPCIeFunction_V1_1_4_Links_CS RedfishPCIeFunction_V1_1_4_Links_CS;
typedef struct _RedfishPCIeFunction_V1_1_4_OemActions_CS RedfishPCIeFunction_V1_1_4_OemActions_CS;
typedef struct _RedfishPCIeFunction_V1_1_4_PCIeFunction_CS RedfishPCIeFunction_V1_1_4_PCIeFunction_CS;
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
// The available actions for this Resource.
//
typedef struct _RedfishPCIeFunction_V1_1_4_Actions_CS {
    RedfishPCIeFunction_V1_1_4_OemActions_CS    *Oem;    // The available OEM-specific
                                                        // actions for this Resource.
} RedfishPCIeFunction_V1_1_4_Actions_CS;

//
// The links to other Resources that are related to this Resource.
//
typedef struct _RedfishPCIeFunction_V1_1_4_Links_CS {
    RedfishCS_Link            Drives;                           // An array of links to the
                                                                // drives that the PCIe device
                                                                // produces.
    RedfishCS_int64           *Drivesodata_count;           
    RedfishCS_Link            EthernetInterfaces;               // An array of links to the
                                                                // Ethernet interfaces that the
                                                                // PCIe device produces.
    RedfishCS_int64           *EthernetInterfacesodata_count;
    RedfishResource_Oem_CS    *Oem;                             // The OEM extension property.
    RedfishCS_Link            PCIeDevice;                       // The link to the PCIe device on
                                                                // which this function resides.
    RedfishCS_Link            StorageControllers;               // An array of links to the
                                                                // storage controllers that the
                                                                // PCIe device produces.
    RedfishCS_int64           *StorageControllersodata_count;
} RedfishPCIeFunction_V1_1_4_Links_CS;

//
// The available OEM-specific actions for this Resource.
//
typedef struct _RedfishPCIeFunction_V1_1_4_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishPCIeFunction_V1_1_4_OemActions_CS;

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
// The schema definition for the PCIeFunction Resource.  It represents the
// properties of a PCIeFunction attached to a System.
//
typedef struct _RedfishPCIeFunction_V1_1_4_PCIeFunction_CS {
    RedfishCS_Header                         Header;
    RedfishCS_char                           *odata_context;   
    RedfishCS_char                           *odata_etag;      
    RedfishCS_char                           *odata_id;        
    RedfishCS_char                           *odata_type;      
    RedfishPCIeFunction_V1_1_4_Actions_CS    *Actions;             // The available actions for this
                                                                   // Resource.
    RedfishCS_char                           *ClassCode;           // The Class Code of this PCIe
                                                                   // function.
    RedfishCS_char                           *Description;     
    RedfishCS_char                           *DeviceClass;         // The class for this PCIe
                                                                   // function.
    RedfishCS_char                           *DeviceId;            // The Device ID of this PCIe
                                                                   // function.
    RedfishCS_int64                          *FunctionId;          // The PCIe Function Number.
    RedfishCS_char                           *FunctionType;        // The type of the PCIe function.
    RedfishCS_char                           *Id;              
    RedfishPCIeFunction_V1_1_4_Links_CS      *Links;               // The links to other Resources
                                                                   // that are related to this
                                                                   // Resource.
    RedfishCS_char                           *Name;            
    RedfishResource_Oem_CS                   *Oem;                 // The OEM extension property.
    RedfishCS_char                           *RevisionId;          // The Revision ID of this PCIe
                                                                   // function.
    RedfishResource_Status_CS                *Status;              // The status and health of the
                                                                   // Resource and its subordinate
                                                                   // or dependent Resources.
    RedfishCS_char                           *SubsystemId;         // The Subsystem ID of this PCIe
                                                                   // function.
    RedfishCS_char                           *SubsystemVendorId;    // The Subsystem Vendor ID of
                                                                   // this PCIe function.
    RedfishCS_char                           *VendorId;            // The Vendor ID of this PCIe
                                                                   // function.
} RedfishPCIeFunction_V1_1_4_PCIeFunction_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

RedfishCS_status
Json_PCIeFunction_V1_1_4_To_CS (char *JsonRawText, RedfishPCIeFunction_V1_1_4_PCIeFunction_CS **ReturnedCS);

RedfishCS_status
CS_To_PCIeFunction_V1_1_4_JSON (RedfishPCIeFunction_V1_1_4_PCIeFunction_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyPCIeFunction_V1_1_4_CS (RedfishPCIeFunction_V1_1_4_PCIeFunction_CS *CSPtr);

RedfishCS_status
DestroyPCIeFunction_V1_1_4_Json (RedfishCS_char *JsonText);

#endif
