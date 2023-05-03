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

#ifndef RedfishManager_V1_0_7_CSTRUCT_H_
#define RedfishManager_V1_0_7_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishManager_V1_0_7_Actions_CS RedfishManager_V1_0_7_Actions_CS;
typedef struct _RedfishManager_V1_0_7_CommandShell_CS RedfishManager_V1_0_7_CommandShell_CS;
typedef struct _RedfishManager_V1_0_7_ForceFailover_CS RedfishManager_V1_0_7_ForceFailover_CS;
typedef struct _RedfishManager_V1_0_7_GraphicalConsole_CS RedfishManager_V1_0_7_GraphicalConsole_CS;
typedef struct _RedfishManager_V1_0_7_Links_CS RedfishManager_V1_0_7_Links_CS;
typedef struct _RedfishManager_V1_0_7_Manager_CS RedfishManager_V1_0_7_Manager_CS;
typedef struct _RedfishManager_V1_0_7_ManagerService_CS RedfishManager_V1_0_7_ManagerService_CS;
typedef struct _RedfishManager_V1_0_7_ModifyRedundancySet_CS RedfishManager_V1_0_7_ModifyRedundancySet_CS;
typedef struct _RedfishManager_V1_0_7_OemActions_CS RedfishManager_V1_0_7_OemActions_CS;
typedef struct _RedfishManager_V1_0_7_Reset_CS RedfishManager_V1_0_7_Reset_CS;
typedef struct _RedfishManager_V1_0_7_SerialConsole_CS RedfishManager_V1_0_7_SerialConsole_CS;
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
typedef struct _RedfishManager_V1_0_7_Actions_CS {
    RedfishManager_V1_0_7_ForceFailover_CS          *Manager_ForceFailover;     
    RedfishManager_V1_0_7_ModifyRedundancySet_CS    *Manager_ModifyRedundancySet;
    RedfishManager_V1_0_7_Reset_CS                  *Manager_Reset;             
    RedfishManager_V1_0_7_OemActions_CS             *Oem;                           // This property contains the
                                                                                    // available OEM specific actions
                                                                                    // for this resource.
} RedfishManager_V1_0_7_Actions_CS;

//
// Information about a Command Shell service provided by a manager.
//
typedef struct _RedfishManager_V1_0_7_CommandShell_CS {
    RedfishCS_char_Array    *ConnectTypesSupported;    // This object is used to
                                                      // enumerate the Command Shell
                                                      // connection types allowed by
                                                      // the implementation.
    RedfishCS_int64         *MaxConcurrentSessions;    // Indicates the maximum number
                                                      // of service sessions,
                                                      // regardless of protocol, this
                                                      // manager is able to support.
    RedfishCS_bool          *ServiceEnabled;          // Indicates if the service is
                                                      // enabled for this manager.
} RedfishManager_V1_0_7_CommandShell_CS;

//
// The ForceFailover action forces a failover of this manager to the manager used
// in the parameter.
//
typedef struct _RedfishManager_V1_0_7_ForceFailover_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishManager_V1_0_7_ForceFailover_CS;

//
// Information about a Graphical Console service provided by a manager.
//
typedef struct _RedfishManager_V1_0_7_GraphicalConsole_CS {
    RedfishCS_char_Array    *ConnectTypesSupported;    // This object is used to
                                                      // enumerate the Graphical
                                                      // Console connection types
                                                      // allowed by the implementation.
    RedfishCS_int64         *MaxConcurrentSessions;    // Indicates the maximum number
                                                      // of service sessions,
                                                      // regardless of protocol, this
                                                      // manager is able to support.
    RedfishCS_bool          *ServiceEnabled;          // Indicates if the service is
                                                      // enabled for this manager.
} RedfishManager_V1_0_7_GraphicalConsole_CS;

//
// Contains references to other resources that are related to this resource.
//
typedef struct _RedfishManager_V1_0_7_Links_CS {
    RedfishCS_Link            ManagerForChassis;               // This property is an array of
                                                               // references to the chassis that
                                                               // this manager has control over.
    RedfishCS_int64           *ManagerForChassisodata_count;
    RedfishCS_Link            ManagerForServers;               // This property is an array of
                                                               // references to the systems that
                                                               // this manager has control over.
    RedfishCS_int64           *ManagerForServersodata_count;
    RedfishResource_Oem_CS    *Oem;                            // Oem extension object.
} RedfishManager_V1_0_7_Links_CS;

//
// Used for describing services like Serial Console, Command Shell or Graphical
// Console.
//
typedef struct _RedfishManager_V1_0_7_ManagerService_CS {
    RedfishCS_int64    *MaxConcurrentSessions;    // Indicates the maximum number
                                                 // of service sessions,
                                                 // regardless of protocol, this
                                                 // manager is able to support.
    RedfishCS_bool     *ServiceEnabled;          // Indicates if the service is
                                                 // enabled for this manager.
} RedfishManager_V1_0_7_ManagerService_CS;

//
// The ModifyRedundancySet operation is used to add or remove members to a
// redundant group of manager.
//
typedef struct _RedfishManager_V1_0_7_ModifyRedundancySet_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishManager_V1_0_7_ModifyRedundancySet_CS;

//
// The available OEM specific actions for this resource.
//
typedef struct _RedfishManager_V1_0_7_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishManager_V1_0_7_OemActions_CS;

//
// The reset action resets/reboots the manager.
//
typedef struct _RedfishManager_V1_0_7_Reset_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishManager_V1_0_7_Reset_CS;

//
// Information about a Serial Console service provided by a manager.
//
typedef struct _RedfishManager_V1_0_7_SerialConsole_CS {
    RedfishCS_char_Array    *ConnectTypesSupported;    // This object is used to
                                                      // enumerate the Serial Console
                                                      // connection types allowed by
                                                      // the implementation.
    RedfishCS_int64         *MaxConcurrentSessions;    // Indicates the maximum number
                                                      // of service sessions,
                                                      // regardless of protocol, this
                                                      // manager is able to support.
    RedfishCS_bool          *ServiceEnabled;          // Indicates if the service is
                                                      // enabled for this manager.
} RedfishManager_V1_0_7_SerialConsole_CS;

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
// This is the schema definition for a Manager.  Examples of managers are BMCs,
// Enclosure Managers, Management Controllers and other subsystems assigned
// managability functions.
//
typedef struct _RedfishManager_V1_0_7_Manager_CS {
    RedfishCS_Header                             Header;
    RedfishCS_char                               *odata_context;       
    RedfishCS_char                               *odata_etag;          
    RedfishCS_char                               *odata_id;            
    RedfishCS_char                               *odata_type;          
    RedfishManager_V1_0_7_Actions_CS             *Actions;                 // The available actions for this
                                                                           // resource.
    RedfishManager_V1_0_7_CommandShell_CS        *CommandShell;            // Information about the Command
                                                                           // Shell service provided by this
                                                                           // manager.
    RedfishCS_char                               *DateTime;                // The current DateTime (with
                                                                           // offset) for the manager, used
                                                                           // to set or read time.
    RedfishCS_char                               *DateTimeLocalOffset;     // The time offset from UTC that
                                                                           // the DateTime property is set
                                                                           // to in format: +06:00 .
    RedfishCS_char                               *Description;         
    RedfishCS_Link                               EthernetInterfaces;       // This is a reference to a
                                                                           // collection of NICs that this
                                                                           // manager uses for network
                                                                           // communication.  It is here
                                                                           // that clients will find NIC
                                                                           // configuration options and
                                                                           // settings.
    RedfishCS_char                               *FirmwareVersion;         // The firmware version of this
                                                                           // Manager.
    RedfishManager_V1_0_7_GraphicalConsole_CS    *GraphicalConsole;        // The value of this property
                                                                           // shall contain the information
                                                                           // about the Graphical Console
                                                                           // (KVM-IP) service of this
                                                                           // manager.
    RedfishCS_char                               *Id;                  
    RedfishManager_V1_0_7_Links_CS               *Links;                   // Contains references to other
                                                                           // resources that are related to
                                                                           // this resource.
    RedfishCS_Link                               LogServices;              // This is a reference to a
                                                                           // collection of Logs used by the
                                                                           // manager.
    RedfishCS_char                               *ManagerType;             // This property represents the
                                                                           // type of manager that this
                                                                           // resource represents.
    RedfishCS_char                               *Model;                   // The model information of this
                                                                           // Manager as defined by the
                                                                           // manufacturer.
    RedfishCS_char                               *Name;                
    RedfishCS_Link                               NetworkProtocol;          // This is a reference to the
                                                                           // network services and their
                                                                           // settings that the manager
                                                                           // controls.  It is here that
                                                                           // clients will find network
                                                                           // configuration options as well
                                                                           // as network services.
    RedfishResource_Oem_CS                       *Oem;                     // This is the
                                                                           // manufacturer/provider specific
                                                                           // extension moniker used to
                                                                           // divide the Oem object into
                                                                           // sections.
    RedfishCS_Link                               Redundancy;               // Redundancy information for the
                                                                           // managers of this system.
    RedfishCS_int64                              *Redundancyodata_count;
    RedfishManager_V1_0_7_SerialConsole_CS       *SerialConsole;           // Information about the Serial
                                                                           // Console service provided by
                                                                           // this manager.
    RedfishCS_Link                               SerialInterfaces;         // This is a reference to a
                                                                           // collection of serial
                                                                           // interfaces that this manager
                                                                           // uses for serial and console
                                                                           // communication.  It is here
                                                                           // that clients will find serial
                                                                           // configuration options and
                                                                           // settings.
    RedfishCS_char                               *ServiceEntryPointUUID;    // The UUID of the Redfish
                                                                           // Service provided by this
                                                                           // manager.
    RedfishResource_Status_CS                    *Status;                  // This property describes the
                                                                           // status and health of the
                                                                           // resource and its children.
    RedfishCS_char                               *UUID;                    // The Universal Unique
                                                                           // Identifier (UUID) for this
                                                                           // Manager.
    RedfishCS_Link                               VirtualMedia;             // This is a reference to the
                                                                           // Virtual Media services for
                                                                           // this particular manager.
} RedfishManager_V1_0_7_Manager_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

RedfishCS_status
Json_Manager_V1_0_7_To_CS (char *JsonRawText, RedfishManager_V1_0_7_Manager_CS **ReturnedCS);

RedfishCS_status
CS_To_Manager_V1_0_7_JSON (RedfishManager_V1_0_7_Manager_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyManager_V1_0_7_CS (RedfishManager_V1_0_7_Manager_CS *CSPtr);

RedfishCS_status
DestroyManager_V1_0_7_Json (RedfishCS_char *JsonText);

#endif
