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

#ifndef RedfishAssembly_V1_1_1_CSTRUCT_H_
#define RedfishAssembly_V1_1_1_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishAssembly_V1_1_1_AssemblyData_Array_CS RedfishAssembly_V1_1_1_AssemblyData_Array_CS;
typedef struct _RedfishAssembly_V1_1_1_Actions_CS RedfishAssembly_V1_1_1_Actions_CS;
typedef struct _RedfishAssembly_V1_1_1_Assembly_CS RedfishAssembly_V1_1_1_Assembly_CS;
typedef struct _RedfishAssembly_V1_1_1_AssemblyData_CS RedfishAssembly_V1_1_1_AssemblyData_CS;
typedef struct _RedfishAssembly_V1_1_1_AssemblyDataActions_CS RedfishAssembly_V1_1_1_AssemblyDataActions_CS;
typedef struct _RedfishAssembly_V1_1_1_AssemblyDataOemActions_CS RedfishAssembly_V1_1_1_AssemblyDataOemActions_CS;
typedef struct _RedfishAssembly_V1_1_1_OemActions_CS RedfishAssembly_V1_1_1_OemActions_CS;
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
typedef struct _RedfishAssembly_V1_1_1_Actions_CS {
    RedfishAssembly_V1_1_1_OemActions_CS    *Oem;    // This property contains the
                                                    // available OEM specific actions
                                                    // for this resource.
} RedfishAssembly_V1_1_1_Actions_CS;

typedef struct _RedfishAssembly_V1_1_1_AssemblyData_CS {
    RedfishCS_char                                   *odata_id;             
    RedfishAssembly_V1_1_1_AssemblyDataActions_CS    *Actions;                  // The available actions for this
                                                                                // resource.
    RedfishCS_char                                   *BinaryDataURI;            // URI that provides the ability
                                                                                // to access an image of the
                                                                                // assembly information.
    RedfishCS_char                                   *Description;              // Description of the Assembly.
    RedfishCS_char                                   *EngineeringChangeLevel;    // Engineering change level of
                                                                                // the Assembly.
    RedfishCS_char                                   *MemberId;                 // This is the identifier for the
                                                                                // member within the collection.
    RedfishCS_char                                   *Model;                    // Model number of the Assembly.
    RedfishCS_char                                   *Name;                     // Name of the Assembly.
    RedfishResource_Oem_CS                           *Oem;                      // This is the
                                                                                // manufacturer/provider specific
                                                                                // extension moniker used to
                                                                                // divide the Oem object into
                                                                                // sections.
    RedfishCS_char                                   *PartNumber;               // Part number of the Assembly.
    RedfishCS_char                                   *Producer;                 // Producer or manufacturer of
                                                                                // the Assembly.
    RedfishCS_char                                   *ProductionDate;           // Production date of the
                                                                                // Assembly.
    RedfishCS_char                                   *SKU;                      // SKU of the Assembly.
    RedfishCS_char                                   *SparePartNumber;          // Spare part number of the
                                                                                // Assembly.
    RedfishResource_Status_CS                        *Status;                   // This property describes the
                                                                                // status and health of the
                                                                                // resource and its children.
    RedfishCS_char                                   *Vendor;                   // Vendor of the Assembly.
    RedfishCS_char                                   *Version;                  // Version of the Assembly.
} RedfishAssembly_V1_1_1_AssemblyData_CS;

//
// The available actions for this resource.
//
typedef struct _RedfishAssembly_V1_1_1_AssemblyDataActions_CS {
    RedfishAssembly_V1_1_1_AssemblyDataOemActions_CS    *Oem;    // This property contains the
                                                                // available OEM specific actions
                                                                // for this resource.
} RedfishAssembly_V1_1_1_AssemblyDataActions_CS;

//
// The available OEM specific actions for this resource.
//
typedef struct _RedfishAssembly_V1_1_1_AssemblyDataOemActions_CS {
    RedfishCS_Link    Prop;
} RedfishAssembly_V1_1_1_AssemblyDataOemActions_CS;

//
// The available OEM specific actions for this resource.
//
typedef struct _RedfishAssembly_V1_1_1_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishAssembly_V1_1_1_OemActions_CS;

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
// This is the schema definition for the Assembly properties.
//
typedef struct _RedfishAssembly_V1_1_1_Assembly_CS {
    RedfishCS_Header                                Header;
    RedfishCS_char                                  *odata_context;       
    RedfishCS_char                                  *odata_etag;          
    RedfishCS_char                                  *odata_id;            
    RedfishCS_char                                  *odata_type;          
    RedfishAssembly_V1_1_1_Actions_CS               *Actions;                 // The available actions for this
                                                                              // resource.
    RedfishAssembly_V1_1_1_AssemblyData_Array_CS    *Assemblies;              // This is the definition for an
                                                                              // assembly information record.
    RedfishCS_int64                                 *Assembliesodata_count;
    RedfishCS_char                                  *Description;         
    RedfishCS_char                                  *Id;                  
    RedfishCS_char                                  *Name;                
    RedfishResource_Oem_CS                          *Oem;                     // This is the
                                                                              // manufacturer/provider specific
                                                                              // extension moniker used to
                                                                              // divide the Oem object into
                                                                              // sections.
} RedfishAssembly_V1_1_1_Assembly_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

typedef struct _RedfishAssembly_V1_1_1_AssemblyData_Array_CS  {
    RedfishAssembly_V1_1_1_AssemblyData_Array_CS    *Next;
    RedfishAssembly_V1_1_1_AssemblyData_CS    *ArrayValue;
} RedfishAssembly_V1_1_1_AssemblyData_Array_CS;

RedfishCS_status
Json_Assembly_V1_1_1_To_CS (char *JsonRawText, RedfishAssembly_V1_1_1_Assembly_CS **ReturnedCS);

RedfishCS_status
CS_To_Assembly_V1_1_1_JSON (RedfishAssembly_V1_1_1_Assembly_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyAssembly_V1_1_1_CS (RedfishAssembly_V1_1_1_Assembly_CS *CSPtr);

RedfishCS_status
DestroyAssembly_V1_1_1_Json (RedfishCS_char *JsonText);

#endif
