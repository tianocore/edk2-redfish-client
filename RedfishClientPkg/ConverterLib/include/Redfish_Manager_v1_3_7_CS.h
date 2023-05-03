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

#ifndef RedfishManager_V1_3_7_CSTRUCT_H_
#define RedfishManager_V1_3_7_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishManager_V1_3_7_Actions_CS RedfishManager_V1_3_7_Actions_CS;
typedef struct _RedfishManager_V1_3_7_CommandShell_CS RedfishManager_V1_3_7_CommandShell_CS;
typedef struct _RedfishManager_V1_3_7_ForceFailover_CS RedfishManager_V1_3_7_ForceFailover_CS;
typedef struct _RedfishManager_V1_3_7_GraphicalConsole_CS RedfishManager_V1_3_7_GraphicalConsole_CS;
typedef struct _RedfishManager_V1_3_7_Links_CS RedfishManager_V1_3_7_Links_CS;
typedef struct _RedfishManager_V1_3_7_Manager_CS RedfishManager_V1_3_7_Manager_CS;
typedef struct _RedfishManager_V1_3_7_ManagerService_CS RedfishManager_V1_3_7_ManagerService_CS;
typedef struct _RedfishManager_V1_3_7_ModifyRedundancySet_CS RedfishManager_V1_3_7_ModifyRedundancySet_CS;
typedef struct _RedfishManager_V1_3_7_OemActions_CS RedfishManager_V1_3_7_OemActions_CS;
typedef struct _RedfishManager_V1_3_7_Reset_CS RedfishManager_V1_3_7_Reset_CS;
typedef struct _RedfishManager_V1_3_7_SerialConsole_CS RedfishManager_V1_3_7_SerialConsole_CS;
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
typedef struct _RedfishManager_V1_3_7_Actions_CS {
    RedfishManager_V1_3_7_ForceFailover_CS          *Manager_ForceFailover;     
    RedfishManager_V1_3_7_ModifyRedundancySet_CS    *Manager_ModifyRedundancySet;
    RedfishManager_V1_3_7_Reset_CS                  *Manager_Reset;             
    RedfishManager_V1_3_7_OemActions_CS             *Oem;                           // The available OEM-specific
                                                                                    // actions for this Resource.
} RedfishManager_V1_3_7_Actions_CS;

//
// The information about a command shell service that this manager provides.
//
typedef struct _RedfishManager_V1_3_7_CommandShell_CS {
    RedfishCS_char_Array    *ConnectTypesSupported;    // This property enumerates the
                                                      // command shell connection types
                                                      // that the implementation
                                                      // allows.
    RedfishCS_int64         *MaxConcurrentSessions;    // The maximum number of service
                                                      // sessions, regardless of
                                                      // protocol, that this manager
                                                      // can support.
    RedfishCS_bool          *ServiceEnabled;          // An indication of whether the
                                                      // service is enabled for this
                                                      // manager.
} RedfishManager_V1_3_7_CommandShell_CS;

//
// The ForceFailover action forces a failover of this manager to the manager used
// in the parameter.
//
typedef struct _RedfishManager_V1_3_7_ForceFailover_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishManager_V1_3_7_ForceFailover_CS;

//
// The information about a graphical console service that this manager provides.
//
typedef struct _RedfishManager_V1_3_7_GraphicalConsole_CS {
    RedfishCS_char_Array    *ConnectTypesSupported;    // This property enumerates the
                                                      // graphical console connection
                                                      // types that the implementation
                                                      // allows.
    RedfishCS_int64         *MaxConcurrentSessions;    // The maximum number of service
                                                      // sessions, regardless of
                                                      // protocol, that this manager
                                                      // can support.
    RedfishCS_bool          *ServiceEnabled;          // An indication of whether the
                                                      // service is enabled for this
                                                      // manager.
} RedfishManager_V1_3_7_GraphicalConsole_CS;

//
// The links to other Resources that are related to this Resource.
//
typedef struct _RedfishManager_V1_3_7_Links_CS {
    RedfishCS_Link            ManagerForChassis;               // An array of links to the
                                                               // chassis this manager controls.
    RedfishCS_int64           *ManagerForChassisodata_count;
    RedfishCS_Link            ManagerForServers;               // An array of links to the
                                                               // systems that this manager
                                                               // controls.
    RedfishCS_int64           *ManagerForServersodata_count;
    RedfishCS_Link            ManagerInChassis;                // The link to the chassis where
                                                               // this manager is located.
    RedfishResource_Oem_CS    *Oem;                            // The OEM extension property.
} RedfishManager_V1_3_7_Links_CS;

//
// The manager services, such as serial console, command shell, or graphical
// console service.
//
typedef struct _RedfishManager_V1_3_7_ManagerService_CS {
    RedfishCS_int64    *MaxConcurrentSessions;    // The maximum number of service
                                                 // sessions, regardless of
                                                 // protocol, that this manager
                                                 // can support.
    RedfishCS_bool     *ServiceEnabled;          // An indication of whether the
                                                 // service is enabled for this
                                                 // manager.
} RedfishManager_V1_3_7_ManagerService_CS;

//
// The ModifyRedundancySet operation adds members to or removes members from a
// redundant group of managers.
//
typedef struct _RedfishManager_V1_3_7_ModifyRedundancySet_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishManager_V1_3_7_ModifyRedundancySet_CS;

//
// The available OEM-specific actions for this Resource.
//
typedef struct _RedfishManager_V1_3_7_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishManager_V1_3_7_OemActions_CS;

//
// The reset action resets/reboots the manager.
//
typedef struct _RedfishManager_V1_3_7_Reset_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishManager_V1_3_7_Reset_CS;

//
// The information about a serial console service that this manager provides.
//
typedef struct _RedfishManager_V1_3_7_SerialConsole_CS {
    RedfishCS_char_Array    *ConnectTypesSupported;    // This property enumerates the
                                                      // serial console connection
                                                      // types that the implementation
                                                      // allows.
    RedfishCS_int64         *MaxConcurrentSessions;    // The maximum number of service
                                                      // sessions, regardless of
                                                      // protocol, that this manager
                                                      // can support.
    RedfishCS_bool          *ServiceEnabled;          // An indication of whether the
                                                      // service is enabled for this
                                                      // manager.
} RedfishManager_V1_3_7_SerialConsole_CS;

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
// In Redfish, a manager is a systems management entity that may implement or
// provide access to a Redfish Service.  Examples of managers are BMCs, enclosure
// managers, management controllers, and other subsystems that are assigned
// managability functions.  An implementation may have multiple managers, which
// may or may not be directly accessible through a Redfish-defined interface.
//
typedef struct _RedfishManager_V1_3_7_Manager_CS {
    RedfishCS_Header                             Header;
    RedfishCS_char                               *odata_context;       
    RedfishCS_char                               *odata_etag;          
    RedfishCS_char                               *odata_id;            
    RedfishCS_char                               *odata_type;          
    RedfishManager_V1_3_7_Actions_CS             *Actions;                 // The available actions for this
                                                                           // Resource.
    RedfishManager_V1_3_7_CommandShell_CS        *CommandShell;            // The command shell service that
                                                                           // this manager provides.
    RedfishCS_char                               *DateTime;                // The current date and time with
                                                                           // UTC offset that the manager
                                                                           // uses to set or read time.
    RedfishCS_char                               *DateTimeLocalOffset;     // The time offset from UTC that
                                                                           // the DateTime property is in
                                                                           // `+HH:MM` format.
    RedfishCS_char                               *Description;         
    RedfishCS_Link                               EthernetInterfaces;       // The link to a collection of
                                                                           // NICs that this manager uses
                                                                           // for network communication.
    RedfishCS_char                               *FirmwareVersion;         // The firmware version of this
                                                                           // manager.
    RedfishManager_V1_3_7_GraphicalConsole_CS    *GraphicalConsole;        // The information about the
                                                                           // graphical console (KVM-IP)
                                                                           // service of this manager.
    RedfishCS_Link                               HostInterfaces;           // The link to a collection of
                                                                           // Host Interfaces that this
                                                                           // manager uses for local host
                                                                           // communication.  Clients can
                                                                           // find Host Interface
                                                                           // configuration options and
                                                                           // settings in this navigation
                                                                           // property.
    RedfishCS_char                               *Id;                  
    RedfishManager_V1_3_7_Links_CS               *Links;                   // The links to other Resources
                                                                           // that are related to this
                                                                           // Resource.
    RedfishCS_Link                               LogServices;              // The link to a collection of
                                                                           // logs that the manager uses.
    RedfishCS_char                               *ManagerType;             // The type of manager that this
                                                                           // Resource represents.
    RedfishCS_char                               *Model;                   // The model information of this
                                                                           // manager, as defined by the
                                                                           // manufacturer.
    RedfishCS_char                               *Name;                
    RedfishCS_Link                               NetworkProtocol;          // The link to the network
                                                                           // services and their settings
                                                                           // that the manager controls.
    RedfishResource_Oem_CS                       *Oem;                     // The OEM extension property.
    RedfishCS_char                               *PowerState;              // The current power state of the
                                                                           // manager.
    RedfishCS_Link                               Redundancy;               // The redundancy information for
                                                                           // the managers of this system.
    RedfishCS_int64                              *Redundancyodata_count;
    RedfishManager_V1_3_7_SerialConsole_CS       *SerialConsole;           // The serial console service
                                                                           // that this manager provides.
    RedfishCS_Link                               SerialInterfaces;         // The link to a collection of
                                                                           // serial interfaces that this
                                                                           // manager uses for serial and
                                                                           // console communication.
    RedfishCS_char                               *ServiceEntryPointUUID;    // The UUID of the Redfish
                                                                           // Service that is hosted by this
                                                                           // manager.
    RedfishResource_Status_CS                    *Status;                  // The status and health of the
                                                                           // Resource and its subordinate
                                                                           // or dependent Resources.
    RedfishCS_char                               *UUID;                    // The UUID for this manager.
    RedfishCS_Link                               VirtualMedia;             // The link to the Virtual Media
                                                                           // services for this particular
                                                                           // manager.
} RedfishManager_V1_3_7_Manager_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

RedfishCS_status
Json_Manager_V1_3_7_To_CS (char *JsonRawText, RedfishManager_V1_3_7_Manager_CS **ReturnedCS);

RedfishCS_status
CS_To_Manager_V1_3_7_JSON (RedfishManager_V1_3_7_Manager_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyManager_V1_3_7_CS (RedfishManager_V1_3_7_Manager_CS *CSPtr);

RedfishCS_status
DestroyManager_V1_3_7_Json (RedfishCS_char *JsonText);

#endif
