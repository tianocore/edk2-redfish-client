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

#ifndef RedfishPciedevice_V1_0_1_CSTRUCT_H_
#define RedfishPciedevice_V1_0_1_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishPCIeDevice_V1_0_1_PCIeDevice_CS RedfishPCIeDevice_V1_0_1_PCIeDevice_CS;
typedef struct _RedfishPCIeDevice_V1_0_1_PCIeDevice_Links_CS RedfishPCIeDevice_V1_0_1_PCIeDevice_Links_CS;
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
// The links object contains the links to other resources that are related to this
// resource.
//
typedef struct _RedfishPCIeDevice_V1_0_1_PCIeDevice_Links_CS {
    RedfishCS_Link            Chassis;                              // An array of references to the
                                                                    // chassis in which the PCIe
                                                                    // device is contained.
    RedfishCS_int64           *Chassisodata_count;              
    RedfishCS_char            *Chassisodata_navigationLink;     
    RedfishResource_Oem_CS    *Oem;                                 // Oem extension object.
    RedfishCS_Link            PCIeFunctions;                        // An array of references to
                                                                    // PCIeFunctions exposed by this
                                                                    // device.
    RedfishCS_int64           *PCIeFunctionsodata_count;        
    RedfishCS_char            *PCIeFunctionsodata_navigationLink;
} RedfishPCIeDevice_V1_0_1_PCIeDevice_Links_CS;

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
// This is the schema definition for the PCIeDevice resource.  It represents the
// properties of a PCIeDevice attached to a System.
//
typedef struct _RedfishPCIeDevice_V1_0_1_PCIeDevice_CS {
    RedfishCS_Header                                Header;
    RedfishCS_char                                  *odata_context; 
    RedfishCS_char                                  *odata_id;      
    RedfishCS_char                                  *odata_type;    
    RedfishCS_char                                  *AssetTag;          // The user assigned asset tag
                                                                        // for this PCIe device.
    RedfishCS_char                                  *Description;   
    RedfishCS_char                                  *DeviceType;        // The device type for this PCIe
                                                                        // device.
    RedfishCS_char                                  *FirmwareVersion;    // The version of firmware for
                                                                        // this PCIe device.
    RedfishCS_char                                  *Id;            
    RedfishPCIeDevice_V1_0_1_PCIeDevice_Links_CS    *Links;             // The links object contains the
                                                                        // links to other resources that
                                                                        // are related to this resource.
    RedfishCS_char                                  *Manufacturer;      // This is the manufacturer of
                                                                        // this PCIe device.
    RedfishCS_char                                  *Model;             // This is the model number for
                                                                        // the PCIe device.
    RedfishCS_char                                  *Name;          
    RedfishResource_Oem_CS                          *Oem;               // This is the
                                                                        // manufacturer/provider specific
                                                                        // extension moniker used to
                                                                        // divide the Oem object into
                                                                        // sections.
    RedfishCS_char                                  *PartNumber;        // The part number for this PCIe
                                                                        // device.
    RedfishCS_char                                  *SKU;               // This is the SKU for this PCIe
                                                                        // device.
    RedfishCS_char                                  *SerialNumber;      // The serial number for this
                                                                        // PCIe device.
    RedfishResource_Status_CS                       *Status;        
} RedfishPCIeDevice_V1_0_1_PCIeDevice_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

RedfishCS_status
Json_PCIeDevice_V1_0_1_To_CS (char *JsonRawText, RedfishPCIeDevice_V1_0_1_PCIeDevice_CS **ReturnedCS);

RedfishCS_status
CS_To_PCIeDevice_V1_0_1_JSON (RedfishPCIeDevice_V1_0_1_PCIeDevice_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyPCIeDevice_V1_0_1_CS (RedfishPCIeDevice_V1_0_1_PCIeDevice_CS *CSPtr);

RedfishCS_status
DestroyPCIeDevice_V1_0_1_Json (RedfishCS_char *JsonText);

#endif
