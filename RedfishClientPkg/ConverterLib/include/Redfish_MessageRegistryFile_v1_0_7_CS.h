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

#ifndef RedfishMessageregistryfile_V1_0_7_CSTRUCT_H_
#define RedfishMessageregistryfile_V1_0_7_CSTRUCT_H_

#include "RedfishCsCommon.h"

typedef struct _RedfishMessageRegistryFile_V1_0_7_Location_Array_CS RedfishMessageRegistryFile_V1_0_7_Location_Array_CS;
typedef struct _RedfishMessageRegistryFile_V1_0_7_Location_CS RedfishMessageRegistryFile_V1_0_7_Location_CS;
typedef struct _RedfishMessageRegistryFile_V1_0_7_MessageRegistryFile_CS RedfishMessageRegistryFile_V1_0_7_MessageRegistryFile_CS;
#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

//
// The location information for a Message Registry file.
//
typedef struct _RedfishMessageRegistryFile_V1_0_7_Location_CS {
    RedfishCS_char    *ArchiveFile;      // If the service hosts the
                                         // Message Registry in an archive
                                         // file, the name of the file
                                         // within the archive.
    RedfishCS_char    *ArchiveUri;       // If the Message Registry is
                                         // hosted on the service in an
                                         // archive file, the link to the
                                         // archive file.
    RedfishCS_char    *Language;         // The language code for the
                                         // Message Registry file.
    RedfishCS_char    *PublicationUri;    // The link to publicly available
                                         // (canonical) URI for the
                                         // Message Registry.
    RedfishCS_char    *Uri;              // The link to locally available
                                         // URI for the Message Registry.
} RedfishMessageRegistryFile_V1_0_7_Location_CS;

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
// The MessageRegistryFile schema describes the Message Registry file locator
// Resource.
//
typedef struct _RedfishMessageRegistryFile_V1_0_7_MessageRegistryFile_CS {
    RedfishCS_Header                                       Header;
    RedfishCS_char                                         *odata_context;
    RedfishCS_char                                         *odata_etag;  
    RedfishCS_char                                         *odata_id;    
    RedfishCS_char                                         *odata_type;  
    RedfishCS_char                                         *Description; 
    RedfishCS_char                                         *Id;          
    RedfishCS_char_Array                                   *Languages;       // The RFC5646-conformant
                                                                             // language codes for the
                                                                             // available Message Registries.
    RedfishMessageRegistryFile_V1_0_7_Location_Array_CS    *Location;        // The location information for
                                                                             // this Message Registry file.
    RedfishCS_char                                         *Name;        
    RedfishResource_Oem_CS                                 *Oem;             // The OEM extension property.
    RedfishCS_char                                         *Registry;        // The registry name and its
                                                                             // major and minor versions.
                                                                             // This registry can be any type
                                                                             // of registry, such as a Message
                                                                             // Registry, Privilege Registry,
                                                                             // or Attribute Registry.
} RedfishMessageRegistryFile_V1_0_7_MessageRegistryFile_CS;

typedef struct _RedfishMessageRegistryFile_V1_0_7_Location_Array_CS  {
    RedfishMessageRegistryFile_V1_0_7_Location_Array_CS    *Next;
    RedfishMessageRegistryFile_V1_0_7_Location_CS    *ArrayValue;
} RedfishMessageRegistryFile_V1_0_7_Location_Array_CS;

RedfishCS_status
Json_MessageRegistryFile_V1_0_7_To_CS (char *JsonRawText, RedfishMessageRegistryFile_V1_0_7_MessageRegistryFile_CS **ReturnedCS);

RedfishCS_status
CS_To_MessageRegistryFile_V1_0_7_JSON (RedfishMessageRegistryFile_V1_0_7_MessageRegistryFile_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyMessageRegistryFile_V1_0_7_CS (RedfishMessageRegistryFile_V1_0_7_MessageRegistryFile_CS *CSPtr);

RedfishCS_status
DestroyMessageRegistryFile_V1_0_7_Json (RedfishCS_char *JsonText);

#endif
