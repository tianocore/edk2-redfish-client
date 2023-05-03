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

#ifndef RedfishEventdestination_V1_7_2_CSTRUCT_H_
#define RedfishEventdestination_V1_7_2_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishEventDestination_V1_7_2_HttpHeaderProperty_Array_CS RedfishEventDestination_V1_7_2_HttpHeaderProperty_Array_CS;
#ifndef Redfishodatav4_idRef_Array_CS_
typedef struct _Redfishodatav4_idRef_Array_CS Redfishodatav4_idRef_Array_CS;
#endif
typedef struct _RedfishEventDestination_V1_7_2_Actions_CS RedfishEventDestination_V1_7_2_Actions_CS;
typedef struct _RedfishEventDestination_V1_7_2_EventDestination_CS RedfishEventDestination_V1_7_2_EventDestination_CS;
typedef struct _RedfishEventDestination_V1_7_2_HttpHeaderProperty_CS RedfishEventDestination_V1_7_2_HttpHeaderProperty_CS;
typedef struct _RedfishEventDestination_V1_7_2_OemActions_CS RedfishEventDestination_V1_7_2_OemActions_CS;
typedef struct _RedfishEventDestination_V1_7_2_ResumeSubscription_CS RedfishEventDestination_V1_7_2_ResumeSubscription_CS;
typedef struct _RedfishEventDestination_V1_7_2_SNMPSettings_CS RedfishEventDestination_V1_7_2_SNMPSettings_CS;
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
typedef struct _RedfishEventDestination_V1_7_2_Actions_CS {
    RedfishEventDestination_V1_7_2_ResumeSubscription_CS    *EventDestination_ResumeSubscription;
    RedfishEventDestination_V1_7_2_OemActions_CS            *Oem;                                   // The available OEM-specific
                                                                                                    // actions for this Resource.
} RedfishEventDestination_V1_7_2_Actions_CS;

//
// The HTTP header value is the property value.  The header name is the property
// name.
//
typedef struct _RedfishEventDestination_V1_7_2_HttpHeaderProperty_CS {
    RedfishCS_Link    Prop;
} RedfishEventDestination_V1_7_2_HttpHeaderProperty_CS;

//
// The available OEM-specific actions for this Resource.
//
typedef struct _RedfishEventDestination_V1_7_2_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishEventDestination_V1_7_2_OemActions_CS;

//
// This action resumes a suspended event subscription.
//
typedef struct _RedfishEventDestination_V1_7_2_ResumeSubscription_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishEventDestination_V1_7_2_ResumeSubscription_CS;

//
// Settings for an SNMP event destination.
//
typedef struct _RedfishEventDestination_V1_7_2_SNMPSettings_CS {
    RedfishCS_char    *AuthenticationKey;        // The secret authentication key
                                                 // for SNMPv3.
    RedfishCS_char    *AuthenticationProtocol;    // The authentication protocol
                                                 // for SNMPv3.
    RedfishCS_char    *EncryptionKey;            // The secret authentication key
                                                 // for SNMPv3.
    RedfishCS_char    *EncryptionProtocol;       // The encryption protocol for
                                                 // SNMPv3.
    RedfishCS_char    *TrapCommunity;            // The SNMP trap community
                                                 // string.
} RedfishEventDestination_V1_7_2_SNMPSettings_CS;

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
// The EventDestination schema defines the target of an event subscription,
// including the event types and context to provide to the target in the Event
// payload.
//
typedef struct _RedfishEventDestination_V1_7_2_EventDestination_CS {
    RedfishCS_Header                                              Header;
    RedfishCS_char                                                *odata_context;                    
    RedfishCS_char                                                *odata_etag;                       
    RedfishCS_char                                                *odata_id;                         
    RedfishCS_char                                                *odata_type;                       
    RedfishEventDestination_V1_7_2_Actions_CS                     *Actions;                              // The available actions for this
                                                                                                         // Resource.
    RedfishCS_char                                                *Context;                              // A client-supplied string that
                                                                                                         // is stored with the event
                                                                                                         // destination subscription.
    RedfishCS_char                                                *DeliveryRetryPolicy;                  // The subscription delivery
                                                                                                         // retry policy for events, where
                                                                                                         // the subscription type is
                                                                                                         // RedfishEvent.
    RedfishCS_char                                                *Description;                      
    RedfishCS_char                                                *Destination;                          // The URI of the destination
                                                                                                         // event receiver.
    RedfishCS_char                                                *EventFormatType;                      // The content types of the
                                                                                                         // message that are sent to the
                                                                                                         // EventDestination.
    RedfishCS_char_Array                                          *EventTypes;                           // The types of events that are
                                                                                                         // sent to the destination.
    RedfishEventDestination_V1_7_2_HttpHeaderProperty_Array_CS    *HttpHeaders;                          // An array of settings for HTTP
                                                                                                         // headers, such as authorization
                                                                                                         // information.  This array is
                                                                                                         // null or an empty array in
                                                                                                         // responses.  An empty array is
                                                                                                         // the preferred return value on
                                                                                                         // read operations.
    RedfishCS_char                                                *Id;                               
    RedfishCS_char_Array                                          *MessageIds;                           // The list of MessageIds that
                                                                                                         // the service sends.  If this
                                                                                                         // property is absent or the
                                                                                                         // array is empty, events with
                                                                                                         // any MessageId are sent to the
                                                                                                         // subscriber.
    RedfishCS_Link                                                MetricReportDefinitions;               // A list of metric report
                                                                                                         // definitions for which the
                                                                                                         // service only sends related
                                                                                                         // metric reports.  If this
                                                                                                         // property is absent or the
                                                                                                         // array is empty, metric reports
                                                                                                         // that originate from any metric
                                                                                                         // report definition are sent to
                                                                                                         // the subscriber.
    RedfishCS_int64                                               *MetricReportDefinitionsodata_count;
    RedfishCS_char                                                *Name;                             
    RedfishResource_Oem_CS                                        *Oem;                                  // The OEM extension property.
    Redfishodatav4_idRef_Array_CS                                 *OriginResources;                      // The array of Resources for
                                                                                                         // which the service sends only
                                                                                                         // related events.  If this
                                                                                                         // property is absent or the
                                                                                                         // array is empty, the service
                                                                                                         // sends the events that
                                                                                                         // originate from any Resource to
                                                                                                         // the subscriber.
    RedfishCS_int64                                               *OriginResourcesodata_count;       
    RedfishCS_char                                                *Protocol;                             // The protocol type of the event
                                                                                                         // connection.
    RedfishCS_char_Array                                          *RegistryPrefixes;                     // The list of the prefixes for
                                                                                                         // the Message Registries that
                                                                                                         // contain the MessageIds that
                                                                                                         // are sent to this event
                                                                                                         // destination.
    RedfishCS_char_Array                                          *ResourceTypes;                        // The list of Resource Type
                                                                                                         // values (Schema names) that
                                                                                                         // correspond to the
                                                                                                         // OriginOfCondition.  The
                                                                                                         // version and full namespace
                                                                                                         // should not be specified.
    RedfishEventDestination_V1_7_2_SNMPSettings_CS                *SNMP;                                 // Settings for an SNMP event
                                                                                                         // destination.
    RedfishResource_Status_CS                                     *Status;                               // This property shall contain
                                                                                                         // the status of the
                                                                                                         // subscription.
    RedfishCS_bool                                                *SubordinateResources;                 // An indication of whether the
                                                                                                         // subscription is for events in
                                                                                                         // the OriginResources array and
                                                                                                         // its subordinate Resources.  If
                                                                                                         // `true` and the OriginResources
                                                                                                         // array is specified, the
                                                                                                         // subscription is for events in
                                                                                                         // the OriginResources array and
                                                                                                         // its subordinate Resources.
                                                                                                         // Note that Resources associated
                                                                                                         // through the Links section are
                                                                                                         // not considered subordinate.
                                                                                                         // If `false` and the
                                                                                                         // OriginResources array is
                                                                                                         // specified, the subscription
                                                                                                         // shall be for events in the
                                                                                                         // OriginResources array only.
                                                                                                         // If the OriginResources array
                                                                                                         // is not present, this property
                                                                                                         // shall have no relevance.
    RedfishCS_char                                                *SubscriptionType;                     // The subscription type for
                                                                                                         // events.
} RedfishEventDestination_V1_7_2_EventDestination_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

typedef struct _RedfishEventDestination_V1_7_2_HttpHeaderProperty_Array_CS  {
    RedfishEventDestination_V1_7_2_HttpHeaderProperty_Array_CS    *Next;
    RedfishEventDestination_V1_7_2_HttpHeaderProperty_CS    *ArrayValue;
} RedfishEventDestination_V1_7_2_HttpHeaderProperty_Array_CS;

#ifndef Redfishodatav4_idRef_Array_CS_
#define Redfishodatav4_idRef_Array_CS_
typedef struct _Redfishodatav4_idRef_Array_CS  {
    Redfishodatav4_idRef_Array_CS    *Next;
    Redfishodatav4_idRef_CS    *ArrayValue;
} Redfishodatav4_idRef_Array_CS;
#endif

RedfishCS_status
Json_EventDestination_V1_7_2_To_CS (char *JsonRawText, RedfishEventDestination_V1_7_2_EventDestination_CS **ReturnedCS);

RedfishCS_status
CS_To_EventDestination_V1_7_2_JSON (RedfishEventDestination_V1_7_2_EventDestination_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyEventDestination_V1_7_2_CS (RedfishEventDestination_V1_7_2_EventDestination_CS *CSPtr);

RedfishCS_status
DestroyEventDestination_V1_7_2_Json (RedfishCS_char *JsonText);

#endif
