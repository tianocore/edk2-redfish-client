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

#ifndef RedfishEventdestination_V1_0_9_CSTRUCT_H_
#define RedfishEventdestination_V1_0_9_CSTRUCT_H_

#include "RedfishCsCommon.h"

typedef struct _RedfishEventDestination_V1_0_9_HttpHeaderProperty_Array_CS RedfishEventDestination_V1_0_9_HttpHeaderProperty_Array_CS;
typedef struct _RedfishEventDestination_V1_0_9_Actions_CS RedfishEventDestination_V1_0_9_Actions_CS;
typedef struct _RedfishEventDestination_V1_0_9_EventDestination_CS RedfishEventDestination_V1_0_9_EventDestination_CS;
typedef struct _RedfishEventDestination_V1_0_9_HttpHeaderProperty_CS RedfishEventDestination_V1_0_9_HttpHeaderProperty_CS;
typedef struct _RedfishEventDestination_V1_0_9_ResumeSubscription_CS RedfishEventDestination_V1_0_9_ResumeSubscription_CS;
#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

typedef struct _RedfishEventDestination_V1_0_9_Actions_CS {
    RedfishEventDestination_V1_0_9_ResumeSubscription_CS    *EventDestination_ResumeSubscription;
} RedfishEventDestination_V1_0_9_Actions_CS;

//
// The HTTP header value is the property value.  The header name is the property
// name.
//
typedef struct _RedfishEventDestination_V1_0_9_HttpHeaderProperty_CS {
    RedfishCS_Link    Prop;
} RedfishEventDestination_V1_0_9_HttpHeaderProperty_CS;

//
// This action resumes a suspended event subscription.
//
typedef struct _RedfishEventDestination_V1_0_9_ResumeSubscription_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishEventDestination_V1_0_9_ResumeSubscription_CS;

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
// The EventDestination schema defines the target of an event subscription,
// including the event types and context to provide to the target in the Event
// payload.
//
typedef struct _RedfishEventDestination_V1_0_9_EventDestination_CS {
    RedfishCS_Header                                              Header;
    RedfishCS_char                                                *odata_context;
    RedfishCS_char                                                *odata_etag;  
    RedfishCS_char                                                *odata_id;    
    RedfishCS_char                                                *odata_type;  
    RedfishCS_char                                                *Context;         // A client-supplied string that
                                                                                    // is stored with the event
                                                                                    // destination subscription.
    RedfishCS_char                                                *Description; 
    RedfishCS_char                                                *Destination;     // The URI of the destination
                                                                                    // event receiver.
    RedfishCS_char_Array                                          *EventTypes;      // The types of events that are
                                                                                    // sent to the destination.
    RedfishEventDestination_V1_0_9_HttpHeaderProperty_Array_CS    *HttpHeaders;     // An array of settings for HTTP
                                                                                    // headers, such as authorization
                                                                                    // information.  This array is
                                                                                    // null or an empty array in
                                                                                    // responses.  An empty array is
                                                                                    // the preferred return value on
                                                                                    // read operations.
    RedfishCS_char                                                *Id;          
    RedfishCS_char                                                *Name;        
    RedfishResource_Oem_CS                                        *Oem;             // The OEM extension property.
    RedfishCS_char                                                *Protocol;        // The protocol type of the event
                                                                                    // connection.
} RedfishEventDestination_V1_0_9_EventDestination_CS;

typedef struct _RedfishEventDestination_V1_0_9_HttpHeaderProperty_Array_CS  {
    RedfishEventDestination_V1_0_9_HttpHeaderProperty_Array_CS    *Next;
    RedfishEventDestination_V1_0_9_HttpHeaderProperty_CS    *ArrayValue;
} RedfishEventDestination_V1_0_9_HttpHeaderProperty_Array_CS;

RedfishCS_status
Json_EventDestination_V1_0_9_To_CS (char *JsonRawText, RedfishEventDestination_V1_0_9_EventDestination_CS **ReturnedCS);

RedfishCS_status
CS_To_EventDestination_V1_0_9_JSON (RedfishEventDestination_V1_0_9_EventDestination_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyEventDestination_V1_0_9_CS (RedfishEventDestination_V1_0_9_EventDestination_CS *CSPtr);

RedfishCS_status
DestroyEventDestination_V1_0_9_Json (RedfishCS_char *JsonText);

#endif
