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

#ifndef RedfishTask_V1_4_3_CSTRUCT_H_
#define RedfishTask_V1_4_3_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

typedef struct _RedfishTask_V1_4_3_Actions_CS RedfishTask_V1_4_3_Actions_CS;
typedef struct _RedfishTask_V1_4_3_OemActions_CS RedfishTask_V1_4_3_OemActions_CS;
typedef struct _RedfishTask_V1_4_3_Payload_CS RedfishTask_V1_4_3_Payload_CS;
typedef struct _RedfishTask_V1_4_3_Task_CS RedfishTask_V1_4_3_Task_CS;
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
// The available actions for this Resource.
//
typedef struct _RedfishTask_V1_4_3_Actions_CS {
    RedfishTask_V1_4_3_OemActions_CS    *Oem;    // The available OEM-specific
                                                // actions for this Resource.
} RedfishTask_V1_4_3_Actions_CS;

//
// The available OEM-specific actions for this Resource.
//
typedef struct _RedfishTask_V1_4_3_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishTask_V1_4_3_OemActions_CS;

//
// The HTTP and JSON payload details for this Task.
//
typedef struct _RedfishTask_V1_4_3_Payload_CS {
    RedfishCS_char_Array    *HttpHeaders;     // An array of HTTP headers that
                                              // this task includes.
    RedfishCS_char          *HttpOperation;    // The HTTP operation to perform
                                              // to execute this task.
    RedfishCS_char          *JsonBody;        // The JSON payload to use in the
                                              // execution of this task.
    RedfishCS_char          *TargetUri;       // The URI of the target for this
                                              // task.
} RedfishTask_V1_4_3_Payload_CS;

//
// The Task schema contains information about a task that the Redfish Task Service
// schedules or executes.  Tasks represent operations that take more time than a
// client typically wants to wait.
//
typedef struct _RedfishTask_V1_4_3_Task_CS {
    RedfishCS_Header                 Header;
    RedfishCS_char                   *odata_context; 
    RedfishCS_char                   *odata_etag;    
    RedfishCS_char                   *odata_id;      
    RedfishCS_char                   *odata_type;    
    RedfishTask_V1_4_3_Actions_CS    *Actions;           // The available actions for this
                                                         // Resource.
    RedfishCS_char                   *Description;   
    RedfishCS_char                   *EndTime;           // The date and time when the
                                                         // task was completed.  This
                                                         // property will only appear when
                                                         // the task is complete.
    RedfishCS_bool                   *HidePayload;       // An indication of whether the
                                                         // contents of the payload are
                                                         // hidden from view after the
                                                         // task has been created.  If
                                                         // `true`, responses do not
                                                         // return the payload.  If
                                                         // `false`, responses return the
                                                         // payload.  If this property is
                                                         // not present when the task is
                                                         // created, the default is
                                                         // `false`.
    RedfishCS_char                   *Id;            
    RedfishCS_Link                   Messages;           // An array of messages
                                                         // associated with the task.
    RedfishCS_char                   *Name;          
    RedfishResource_Oem_CS           *Oem;               // The OEM extension property.
    RedfishTask_V1_4_3_Payload_CS    *Payload;           // The HTTP and JSON payload
                                                         // details for this task, unless
                                                         // they are hidden from view by
                                                         // the service.
    RedfishCS_int64                  *PercentComplete;    // The completion percentage of
                                                         // this task.
    RedfishCS_char                   *StartTime;         // The date and time when the
                                                         // task was started.
    RedfishCS_char                   *TaskMonitor;       // The URI of the Task Monitor
                                                         // for this task.
    RedfishCS_char                   *TaskState;         // The state of the task.
    RedfishCS_char                   *TaskStatus;        // The completion status of the
                                                         // task.
} RedfishTask_V1_4_3_Task_CS;

RedfishCS_status
Json_Task_V1_4_3_To_CS (char *JsonRawText, RedfishTask_V1_4_3_Task_CS **ReturnedCS);

RedfishCS_status
CS_To_Task_V1_4_3_JSON (RedfishTask_V1_4_3_Task_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyTask_V1_4_3_CS (RedfishTask_V1_4_3_Task_CS *CSPtr);

RedfishCS_status
DestroyTask_V1_4_3_Json (RedfishCS_char *JsonText);

#endif
