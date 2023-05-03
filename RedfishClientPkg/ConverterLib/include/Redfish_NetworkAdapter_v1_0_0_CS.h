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

#ifndef RedfishNetworkadapter_V1_0_0_CSTRUCT_H_
#define RedfishNetworkadapter_V1_0_0_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishNetworkAdapter_V1_0_0_Controllers_Array_CS RedfishNetworkAdapter_V1_0_0_Controllers_Array_CS;
typedef struct _RedfishNetworkAdapter_V1_0_0_ControllerCapabilities_CS RedfishNetworkAdapter_V1_0_0_ControllerCapabilities_CS;
typedef struct _RedfishNetworkAdapter_V1_0_0_Controllers_CS RedfishNetworkAdapter_V1_0_0_Controllers_CS;
typedef struct _RedfishNetworkAdapter_V1_0_0_Controllers_Links_CS RedfishNetworkAdapter_V1_0_0_Controllers_Links_CS;
typedef struct _RedfishNetworkAdapter_V1_0_0_DataCenterBridging_CS RedfishNetworkAdapter_V1_0_0_DataCenterBridging_CS;
typedef struct _RedfishNetworkAdapter_V1_0_0_NPIV_CS RedfishNetworkAdapter_V1_0_0_NPIV_CS;
typedef struct _RedfishNetworkAdapter_V1_0_0_NetworkAdapter_CS RedfishNetworkAdapter_V1_0_0_NetworkAdapter_CS;
typedef struct _RedfishNetworkAdapter_V1_0_0_NetworkAdapter_Actions_CS RedfishNetworkAdapter_V1_0_0_NetworkAdapter_Actions_CS;
typedef struct _RedfishNetworkAdapter_V1_0_0_NetworkAdapter_Actions_Oem_CS RedfishNetworkAdapter_V1_0_0_NetworkAdapter_Actions_Oem_CS;
typedef struct _RedfishNetworkAdapter_V1_0_0_ResetSettingsToDefault_CS RedfishNetworkAdapter_V1_0_0_ResetSettingsToDefault_CS;
typedef struct _RedfishNetworkAdapter_V1_0_0_SRIOV_CS RedfishNetworkAdapter_V1_0_0_SRIOV_CS;
typedef struct _RedfishNetworkAdapter_V1_0_0_VirtualFunction_CS RedfishNetworkAdapter_V1_0_0_VirtualFunction_CS;
typedef struct _RedfishNetworkAdapter_V1_0_0_VirtualizationOffload_CS RedfishNetworkAdapter_V1_0_0_VirtualizationOffload_CS;
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

typedef struct _RedfishNetworkAdapter_V1_0_0_ControllerCapabilities_CS {
    RedfishNetworkAdapter_V1_0_0_DataCenterBridging_CS       *DataCenterBridging;           // Data Center Bridging (DCB) for
                                                                                            // this controller.
    RedfishNetworkAdapter_V1_0_0_NPIV_CS                     *NPIV;                         // N_Port ID Virtualization
                                                                                            // (NPIV) capabilties for this
                                                                                            // controller.
    RedfishCS_int64                                          *NetworkDeviceFunctionCount;    // The maximum number of physical
                                                                                            // functions available on this
                                                                                            // controller.
    RedfishCS_int64                                          *NetworkPortCount;             // The number of physical ports
                                                                                            // on this controller.
    RedfishNetworkAdapter_V1_0_0_VirtualizationOffload_CS    *VirtualizationOffload;        // Virtualization offload for
                                                                                            // this controller.
} RedfishNetworkAdapter_V1_0_0_ControllerCapabilities_CS;

typedef struct _RedfishNetworkAdapter_V1_0_0_Controllers_CS {
    RedfishNetworkAdapter_V1_0_0_ControllerCapabilities_CS    *ControllerCapabilities;    // The capabilities of this
                                                                                         // controller.
    RedfishCS_char                                            *FirmwarePackageVersion;    // The version of the user-facing
                                                                                         // firmware package.
    RedfishNetworkAdapter_V1_0_0_Controllers_Links_CS         *Links;                    // Links.
} RedfishNetworkAdapter_V1_0_0_Controllers_CS;

//
// Links.
//
typedef struct _RedfishNetworkAdapter_V1_0_0_Controllers_Links_CS {
    RedfishCS_Link            NetworkDeviceFunctions;                        // Contains the members of this
                                                                             // collection.
    RedfishCS_int64           *NetworkDeviceFunctionsodata_count;        
    RedfishCS_char            *NetworkDeviceFunctionsodata_navigationLink;
    RedfishCS_Link            NetworkPorts;                                  // Contains the members of this
                                                                             // collection.
    RedfishCS_int64           *NetworkPortsodata_count;                  
    RedfishCS_char            *NetworkPortsodata_navigationLink;         
    RedfishResource_Oem_CS    *Oem;                                          // Oem extension object.
    RedfishCS_Link            PCIeDevices;                                   // Contains the members of this
                                                                             // collection.
    RedfishCS_int64           *PCIeDevicesodata_count;                   
    RedfishCS_char            *PCIeDevicesodata_navigationLink;          
} RedfishNetworkAdapter_V1_0_0_Controllers_Links_CS;

typedef struct _RedfishNetworkAdapter_V1_0_0_DataCenterBridging_CS {
    RedfishCS_bool    *Capable;    // Whether this controller is
                                  // capable of Data Center
                                  // Bridging (DCB).
} RedfishNetworkAdapter_V1_0_0_DataCenterBridging_CS;

typedef struct _RedfishNetworkAdapter_V1_0_0_NPIV_CS {
    RedfishCS_int64    *MaxDeviceLogins;    // The maximum number of N_Port
                                           // ID Virtualization (NPIV)
                                           // logins allowed simultaneously
                                           // from all ports on this
                                           // controller.
    RedfishCS_int64    *MaxPortLogins;     // The maximum number of N_Port
                                           // ID Virtualization (NPIV)
                                           // logins allowed per physical
                                           // port on this controller.
} RedfishNetworkAdapter_V1_0_0_NPIV_CS;

//
// The available actions for this resource.
//
typedef struct _RedfishNetworkAdapter_V1_0_0_NetworkAdapter_Actions_CS {
    RedfishNetworkAdapter_V1_0_0_ResetSettingsToDefault_CS        *NetworkAdapter_ResetSettingsToDefault;
    RedfishNetworkAdapter_V1_0_0_NetworkAdapter_Actions_Oem_CS    *Oem;                                 
} RedfishNetworkAdapter_V1_0_0_NetworkAdapter_Actions_CS;

typedef struct _RedfishNetworkAdapter_V1_0_0_NetworkAdapter_Actions_Oem_CS {
    RedfishCS_Link    Prop;
} RedfishNetworkAdapter_V1_0_0_NetworkAdapter_Actions_Oem_CS;

//
// This action is to clear the settings back to factory defaults.
//
typedef struct _RedfishNetworkAdapter_V1_0_0_ResetSettingsToDefault_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishNetworkAdapter_V1_0_0_ResetSettingsToDefault_CS;

typedef struct _RedfishNetworkAdapter_V1_0_0_SRIOV_CS {
    RedfishCS_bool    *SRIOVVEPACapable;    // Whether this controller
                                           // supports Single Root
                                           // Input/Output Virtualization
                                           // (SR-IOV) in Virtual Ethernet
                                           // Port Aggregator (VEPA) mode.
} RedfishNetworkAdapter_V1_0_0_SRIOV_CS;

typedef struct _RedfishNetworkAdapter_V1_0_0_VirtualFunction_CS {
    RedfishCS_int64    *DeviceMaxCount;           // The maximum number of Virtual
                                                  // Functions (VFs) supported by
                                                  // this controller.
    RedfishCS_int64    *MinAssignmentGroupSize;    // The minimum number of Virtual
                                                  // Functions (VFs) that can be
                                                  // allocated or moved between
                                                  // physical functions for this
                                                  // controller.
    RedfishCS_int64    *NetworkPortMaxCount;      // The maximum number of Virtual
                                                  // Functions (VFs) supported per
                                                  // network port for this
                                                  // controller.
} RedfishNetworkAdapter_V1_0_0_VirtualFunction_CS;

typedef struct _RedfishNetworkAdapter_V1_0_0_VirtualizationOffload_CS {
    RedfishNetworkAdapter_V1_0_0_SRIOV_CS              *SRIOV;             // Single-Root Input/Output
                                                                           // Virtualization (SR-IOV)
                                                                           // capabilities.
    RedfishNetworkAdapter_V1_0_0_VirtualFunction_CS    *VirtualFunction;
} RedfishNetworkAdapter_V1_0_0_VirtualizationOffload_CS;

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
// A NetworkAdapter represents the physical network adapter capable of connecting
// to a computer network.  Examples include but are not limited to Ethernet, Fibre
// Channel, and converged network adapters.
//
typedef struct _RedfishNetworkAdapter_V1_0_0_NetworkAdapter_CS {
    RedfishCS_Header                                          Header;
    RedfishCS_char                                            *odata_context;       
    RedfishCS_char                                            *odata_id;            
    RedfishCS_char                                            *odata_type;          
    RedfishNetworkAdapter_V1_0_0_NetworkAdapter_Actions_CS    *Actions;                 // The available actions for this
                                                                                        // resource.
    RedfishNetworkAdapter_V1_0_0_Controllers_Array_CS         *Controllers;             // The set of network controllers
                                                                                        // ASICs that make up this
                                                                                        // NetworkAdapter.
    RedfishCS_char                                            *Description;         
    RedfishCS_char                                            *Id;                  
    RedfishCS_char                                            *Manufacturer;            // The manufacturer or OEM of
                                                                                        // this network adapter.
    RedfishCS_char                                            *Model;                   // The model string for this
                                                                                        // network adapter.
    RedfishCS_char                                            *Name;                
    RedfishCS_Link                                            NetworkDeviceFunctions;    // Contains the members of this
                                                                                        // collection.
    RedfishCS_Link                                            NetworkPorts;             // Contains the members of this
                                                                                        // collection.
    RedfishResource_Oem_CS                                    *Oem;                     // This is the
                                                                                        // manufacturer/provider specific
                                                                                        // extension moniker used to
                                                                                        // divide the Oem object into
                                                                                        // sections.
    RedfishCS_char                                            *PartNumber;              // Part number for this network
                                                                                        // adapter.
    RedfishCS_char                                            *SKU;                     // The manufacturer SKU for this
                                                                                        // network adapter.
    RedfishCS_char                                            *SerialNumber;            // The serial number for this
                                                                                        // network adapter.
    RedfishResource_Status_CS                                 *Status;              
} RedfishNetworkAdapter_V1_0_0_NetworkAdapter_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

typedef struct _RedfishNetworkAdapter_V1_0_0_Controllers_Array_CS  {
    RedfishNetworkAdapter_V1_0_0_Controllers_Array_CS    *Next;
    RedfishNetworkAdapter_V1_0_0_Controllers_CS    *ArrayValue;
} RedfishNetworkAdapter_V1_0_0_Controllers_Array_CS;

RedfishCS_status
Json_NetworkAdapter_V1_0_0_To_CS (char *JsonRawText, RedfishNetworkAdapter_V1_0_0_NetworkAdapter_CS **ReturnedCS);

RedfishCS_status
CS_To_NetworkAdapter_V1_0_0_JSON (RedfishNetworkAdapter_V1_0_0_NetworkAdapter_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyNetworkAdapter_V1_0_0_CS (RedfishNetworkAdapter_V1_0_0_NetworkAdapter_CS *CSPtr);

RedfishCS_status
DestroyNetworkAdapter_V1_0_0_Json (RedfishCS_char *JsonText);

#endif
