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

#ifndef RedfishAccelerationfunction_V1_0_1_CSTRUCT_H_
#define RedfishAccelerationfunction_V1_0_1_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishAccelerationFunction_V1_0_1_AccelerationFunction_CS RedfishAccelerationFunction_V1_0_1_AccelerationFunction_CS;
typedef struct _RedfishAccelerationFunction_V1_0_1_Actions_CS RedfishAccelerationFunction_V1_0_1_Actions_CS;
typedef struct _RedfishAccelerationFunction_V1_0_1_Links_CS RedfishAccelerationFunction_V1_0_1_Links_CS;
typedef struct _RedfishAccelerationFunction_V1_0_1_OemActions_CS RedfishAccelerationFunction_V1_0_1_OemActions_CS;
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
typedef struct _RedfishAccelerationFunction_V1_0_1_Actions_CS {
    RedfishAccelerationFunction_V1_0_1_OemActions_CS    *Oem;    // This property contains the
                                                                // available OEM specific actions
                                                                // for this resource.
} RedfishAccelerationFunction_V1_0_1_Actions_CS;

//
// Contains references to other resources that are related to this resource.
//
typedef struct _RedfishAccelerationFunction_V1_0_1_Links_CS {
    RedfishCS_Link            Endpoints;                   // An array of references to the
                                                           // endpoints that connect to this
                                                           // acceleartion function.
    RedfishCS_int64           *Endpointsodata_count;   
    RedfishResource_Oem_CS    *Oem;                        // Oem extension object.
    RedfishCS_Link            PCIeFunctions;               // An array of references to the
                                                           // PCIeFunctions associated with
                                                           // this acceleration function.
    RedfishCS_int64           *PCIeFunctionsodata_count;
} RedfishAccelerationFunction_V1_0_1_Links_CS;

//
// The available OEM specific actions for this resource.
//
typedef struct _RedfishAccelerationFunction_V1_0_1_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishAccelerationFunction_V1_0_1_OemActions_CS;

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
// The AccelerationFunction schema defines the accelerator implemented in a
// Processor device.
//
typedef struct _RedfishAccelerationFunction_V1_0_1_AccelerationFunction_CS {
    RedfishCS_Header                                 Header;
    RedfishCS_char                                   *odata_context;          
    RedfishCS_char                                   *odata_etag;             
    RedfishCS_char                                   *odata_id;               
    RedfishCS_char                                   *odata_type;             
    RedfishCS_char                                   *AccelerationFunctionType;    // The type of acceleration
                                                                                  // function.
    RedfishAccelerationFunction_V1_0_1_Actions_CS    *Actions;                    // The available actions for this
                                                                                  // resource.
    RedfishCS_char                                   *Description;            
    RedfishCS_char_Array                             *FpgaReconfigurationSlots;    // An array of the
                                                                                  // reconfiguration slot
                                                                                  // identifiers for an FPGA.
    RedfishCS_char                                   *Id;                     
    RedfishAccelerationFunction_V1_0_1_Links_CS      *Links;                      // Contains references to other
                                                                                  // resources that are related to
                                                                                  // this resource.
    RedfishCS_char                                   *Manufacturer;               // The acceleration function code
                                                                                  // manufacturer.
    RedfishCS_char                                   *Name;                   
    RedfishResource_Oem_CS                           *Oem;                        // This is the
                                                                                  // manufacturer/provider specific
                                                                                  // extension moniker used to
                                                                                  // divide the Oem object into
                                                                                  // sections.
    RedfishCS_int64                                  *PowerWatts;                 // The acceleration function
                                                                                  // power consumption.
    RedfishResource_Status_CS                        *Status;                     // This property describes the
                                                                                  // status and health of the
                                                                                  // resource and its children.
    RedfishCS_char                                   *UUID;                       // The universal unique
                                                                                  // identifier (UUID) for this
                                                                                  // acceleration function.
    RedfishCS_char                                   *Version;                    // The acceleration function
                                                                                  // version.
} RedfishAccelerationFunction_V1_0_1_AccelerationFunction_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

RedfishCS_status
Json_AccelerationFunction_V1_0_1_To_CS (char *JsonRawText, RedfishAccelerationFunction_V1_0_1_AccelerationFunction_CS **ReturnedCS);

RedfishCS_status
CS_To_AccelerationFunction_V1_0_1_JSON (RedfishAccelerationFunction_V1_0_1_AccelerationFunction_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyAccelerationFunction_V1_0_1_CS (RedfishAccelerationFunction_V1_0_1_AccelerationFunction_CS *CSPtr);

RedfishCS_status
DestroyAccelerationFunction_V1_0_1_Json (RedfishCS_char *JsonText);

#endif
