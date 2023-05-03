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

#ifndef RedfishMessageregistry_V1_0_8_CSTRUCT_H_
#define RedfishMessageregistry_V1_0_8_CSTRUCT_H_

#include "RedfishCsCommon.h"

typedef struct _RedfishMessageRegistry_V1_0_8_Message_CS RedfishMessageRegistry_V1_0_8_Message_CS;
typedef struct _RedfishMessageRegistry_V1_0_8_MessageProperty_CS RedfishMessageRegistry_V1_0_8_MessageProperty_CS;
typedef struct _RedfishMessageRegistry_V1_0_8_MessageRegistry_CS RedfishMessageRegistry_V1_0_8_MessageRegistry_CS;
#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

//
// This type represents how a message is defined within the Message Registry.
//
typedef struct _RedfishMessageRegistry_V1_0_8_Message_CS {
    RedfishCS_char            *Description;    // A short description of how and
                                               // when to use this message.
    RedfishCS_char            *Message;        // The actual message.
    RedfishCS_int64           *NumberOfArgs;    // The number of arguments in the
                                               // message.
    RedfishResource_Oem_CS    *Oem;            // The OEM extension property.
    RedfishCS_char_Array      *ParamTypes;     // The MessageArg types, in
                                               // order, for the message.
    RedfishCS_char            *Resolution;     // Used to provide suggestions on
                                               // how to resolve the situation
                                               // that caused the error.
    RedfishCS_char            *Severity;       // The severity of the message.
} RedfishMessageRegistry_V1_0_8_Message_CS;

//
// The message keys contained in the Message Registry.
//
typedef struct _RedfishMessageRegistry_V1_0_8_MessageProperty_CS {
    RedfishCS_Link    Prop;
} RedfishMessageRegistry_V1_0_8_MessageProperty_CS;

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
// The MessageRegistry schema describes all Message Registries.  It represents the
// properties for the Message Registries themselves.
//
typedef struct _RedfishMessageRegistry_V1_0_8_MessageRegistry_CS {
    RedfishCS_Header                                    Header;
    RedfishCS_char                                      *odata_type;    
    RedfishCS_char                                      *Description;   
    RedfishCS_char                                      *Id;            
    RedfishCS_char                                      *Language;          // The RFC5646-conformant
                                                                            // language code for the Message
                                                                            // Registry.
    RedfishMessageRegistry_V1_0_8_MessageProperty_CS    *Messages;          // The message keys contained in
                                                                            // the Message Registry.
    RedfishCS_char                                      *Name;          
    RedfishResource_Oem_CS                              *Oem;               // The OEM extension property.
    RedfishCS_char                                      *OwningEntity;      // The organization or company
                                                                            // that publishes this Message
                                                                            // Registry.
    RedfishCS_char                                      *RegistryPrefix;    // The single-word prefix that is
                                                                            // used in forming and decoding
                                                                            // MessageIds.
    RedfishCS_char                                      *RegistryVersion;    // The Message Registry version
                                                                            // in the middle portion of a
                                                                            // MessageId.
} RedfishMessageRegistry_V1_0_8_MessageRegistry_CS;

RedfishCS_status
Json_MessageRegistry_V1_0_8_To_CS (char *JsonRawText, RedfishMessageRegistry_V1_0_8_MessageRegistry_CS **ReturnedCS);

RedfishCS_status
CS_To_MessageRegistry_V1_0_8_JSON (RedfishMessageRegistry_V1_0_8_MessageRegistry_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyMessageRegistry_V1_0_8_CS (RedfishMessageRegistry_V1_0_8_MessageRegistry_CS *CSPtr);

RedfishCS_status
DestroyMessageRegistry_V1_0_8_Json (RedfishCS_char *JsonText);

#endif
