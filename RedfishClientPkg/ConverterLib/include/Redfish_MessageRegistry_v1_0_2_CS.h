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

#ifndef RedfishMessageregistry_V1_0_2_CSTRUCT_H_
#define RedfishMessageregistry_V1_0_2_CSTRUCT_H_

#include "RedfishCsCommon.h"

typedef struct _RedfishMessageRegistry_V1_0_2_Message_CS RedfishMessageRegistry_V1_0_2_Message_CS;
typedef struct _RedfishMessageRegistry_V1_0_2_MessageProperty_CS RedfishMessageRegistry_V1_0_2_MessageProperty_CS;
typedef struct _RedfishMessageRegistry_V1_0_2_MessageRegistry_CS RedfishMessageRegistry_V1_0_2_MessageRegistry_CS;
#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

typedef struct _RedfishMessageRegistry_V1_0_2_Message_CS {
    RedfishCS_char            *Description;    // This is a short description of
                                               // how and when this message is
                                               // to be used.
    RedfishCS_char            *Message;        // The actual message.
    RedfishCS_int64           *NumberOfArgs;    // The number of arguments to be
                                               // expected to be passed in as
                                               // MessageArgs for this message.
    RedfishResource_Oem_CS    *Oem;            // Oem extension object.
    RedfishCS_char_Array      *ParamTypes;     // The MessageArg types, in
                                               // order, for the message.
    RedfishCS_char            *Resolution;     // Used to provide suggestions on
                                               // how to resolve the situation
                                               // that caused the error.
    RedfishCS_char            *Severity;       // This is the severity of the
                                               // message.
} RedfishMessageRegistry_V1_0_2_Message_CS;

typedef struct _RedfishMessageRegistry_V1_0_2_MessageProperty_CS {
    RedfishCS_Link    Prop;
} RedfishMessageRegistry_V1_0_2_MessageProperty_CS;

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
// This is the schema definition for all Message Registries.  It represents the
// properties for the registries themselves.  The MessageId is formed per the
// Redfish specification.  It consists of the RegistryPrefix concatenated with the
// version concatenated with the unique identifier for the message registry entry.
//
typedef struct _RedfishMessageRegistry_V1_0_2_MessageRegistry_CS {
    RedfishCS_Header                                    Header;
    RedfishCS_char                                      *odata_context; 
    RedfishCS_char                                      *odata_id;      
    RedfishCS_char                                      *odata_type;    
    RedfishCS_char                                      *Description;   
    RedfishCS_char                                      *Id;            
    RedfishCS_char                                      *Language;          // This is the RFC 5646 compliant
                                                                            // language code for the
                                                                            // registry.
    RedfishMessageRegistry_V1_0_2_MessageProperty_CS    *Messages;          // The pattern property indicates
                                                                            // that a free-form string is the
                                                                            // unique identifier for the
                                                                            // message within the registry.
    RedfishCS_char                                      *Name;          
    RedfishResource_Oem_CS                              *Oem;               // This is the
                                                                            // manufacturer/provider specific
                                                                            // extension moniker used to
                                                                            // divide the Oem object into
                                                                            // sections.
    RedfishCS_char                                      *OwningEntity;      // This is the organization or
                                                                            // company that publishes this
                                                                            // registry.
    RedfishCS_char                                      *RegistryPrefix;    // This is the single word prefix
                                                                            // used to form a messageID
                                                                            // structure.
    RedfishCS_char                                      *RegistryVersion;    // This is the message registry
                                                                            // version which is used in the
                                                                            // middle portion of a messageID.
} RedfishMessageRegistry_V1_0_2_MessageRegistry_CS;

RedfishCS_status
Json_MessageRegistry_V1_0_2_To_CS (char *JsonRawText, RedfishMessageRegistry_V1_0_2_MessageRegistry_CS **ReturnedCS);

RedfishCS_status
CS_To_MessageRegistry_V1_0_2_JSON (RedfishMessageRegistry_V1_0_2_MessageRegistry_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyMessageRegistry_V1_0_2_CS (RedfishMessageRegistry_V1_0_2_MessageRegistry_CS *CSPtr);

RedfishCS_status
DestroyMessageRegistry_V1_0_2_Json (RedfishCS_char *JsonText);

#endif
