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

#ifndef RedfishRegisteredclient_V1_0_0_CSTRUCT_H_
#define RedfishRegisteredclient_V1_0_0_CSTRUCT_H_

#include "RedfishCsCommon.h"

typedef struct _RedfishRegisteredClient_V1_0_0_ManagedResource_Array_CS RedfishRegisteredClient_V1_0_0_ManagedResource_Array_CS;
typedef struct _RedfishRegisteredClient_V1_0_0_Actions_CS RedfishRegisteredClient_V1_0_0_Actions_CS;
typedef struct _RedfishRegisteredClient_V1_0_0_ManagedResource_CS RedfishRegisteredClient_V1_0_0_ManagedResource_CS;
typedef struct _RedfishRegisteredClient_V1_0_0_OemActions_CS RedfishRegisteredClient_V1_0_0_OemActions_CS;
typedef struct _RedfishRegisteredClient_V1_0_0_RegisteredClient_CS RedfishRegisteredClient_V1_0_0_RegisteredClient_CS;
#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

//
// The available actions for this resource.
//
typedef struct _RedfishRegisteredClient_V1_0_0_Actions_CS {
    RedfishRegisteredClient_V1_0_0_OemActions_CS    *Oem;    // The available OEM-specific
                                                            // actions for this resource.
} RedfishRegisteredClient_V1_0_0_Actions_CS;

//
// A resource managed by a client.
//
typedef struct _RedfishRegisteredClient_V1_0_0_ManagedResource_CS {
    RedfishCS_bool    *IncludesSubordinates;    // Indicates whether the
                                               // subordinate resources of the
                                               // managed resource are also
                                               // managed by the registered
                                               // client.
    RedfishCS_char    *ManagedResourceURI;     // The URI of the resource or
                                               // resource collection managed by
                                               // the registered client.
    RedfishCS_bool    *PreferExclusive;        // Indicates whether the
                                               // registered client expects to
                                               // have exclusive access to the
                                               // managed resource.
} RedfishRegisteredClient_V1_0_0_ManagedResource_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishRegisteredClient_V1_0_0_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishRegisteredClient_V1_0_0_OemActions_CS;

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
// The RegisteredClient schema defines the record format for a registered client.
// It is designed to allow well behaved clients to register with a Redfish service
// such that other clients are aware the service might be configured or monitored
// by the client.
//
typedef struct _RedfishRegisteredClient_V1_0_0_RegisteredClient_CS {
    RedfishCS_Header                                           Header;
    RedfishCS_char                                             *odata_context;  
    RedfishCS_char                                             *odata_etag;     
    RedfishCS_char                                             *odata_id;       
    RedfishCS_char                                             *odata_type;     
    RedfishRegisteredClient_V1_0_0_Actions_CS                  *Actions;            // The available actions for this
                                                                                    // resource.
    RedfishCS_char                                             *ClientType;         // The type of registered client.
    RedfishCS_char                                             *ClientURI;          // The URI of the registered
                                                                                    // client.
    RedfishCS_char                                             *CreatedDate;        // The date and time when the
                                                                                    // client entry was created.
    RedfishCS_char                                             *Description;    
    RedfishCS_char                                             *ExpirationDate;     // The date and time when the
                                                                                    // client entry will expire.
    RedfishCS_char                                             *Id;             
    RedfishRegisteredClient_V1_0_0_ManagedResource_Array_CS    *ManagedResources;    // An array of resources that the
                                                                                    // registered client monitors or
                                                                                    // configures.
    RedfishCS_char                                             *Name;           
    RedfishResource_Oem_CS                                     *Oem;                // The OEM extension property.
} RedfishRegisteredClient_V1_0_0_RegisteredClient_CS;

typedef struct _RedfishRegisteredClient_V1_0_0_ManagedResource_Array_CS  {
    RedfishRegisteredClient_V1_0_0_ManagedResource_Array_CS    *Next;
    RedfishRegisteredClient_V1_0_0_ManagedResource_CS    *ArrayValue;
} RedfishRegisteredClient_V1_0_0_ManagedResource_Array_CS;

RedfishCS_status
Json_RegisteredClient_V1_0_0_To_CS (char *JsonRawText, RedfishRegisteredClient_V1_0_0_RegisteredClient_CS **ReturnedCS);

RedfishCS_status
CS_To_RegisteredClient_V1_0_0_JSON (RedfishRegisteredClient_V1_0_0_RegisteredClient_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyRegisteredClient_V1_0_0_CS (RedfishRegisteredClient_V1_0_0_RegisteredClient_CS *CSPtr);

RedfishCS_status
DestroyRegisteredClient_V1_0_0_Json (RedfishCS_char *JsonText);

#endif
