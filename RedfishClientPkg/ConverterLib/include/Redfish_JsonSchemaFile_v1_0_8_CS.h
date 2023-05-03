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

#ifndef RedfishJsonschemafile_V1_0_8_CSTRUCT_H_
#define RedfishJsonschemafile_V1_0_8_CSTRUCT_H_

#include "RedfishCsCommon.h"

typedef struct _RedfishJsonSchemaFile_V1_0_8_Location_Array_CS RedfishJsonSchemaFile_V1_0_8_Location_Array_CS;
typedef struct _RedfishJsonSchemaFile_V1_0_8_JsonSchemaFile_CS RedfishJsonSchemaFile_V1_0_8_JsonSchemaFile_CS;
typedef struct _RedfishJsonSchemaFile_V1_0_8_Location_CS RedfishJsonSchemaFile_V1_0_8_Location_CS;
#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

//
// Location information for a schema file.
//
typedef struct _RedfishJsonSchemaFile_V1_0_8_Location_CS {
    RedfishCS_char    *ArchiveFile;      // The name of the file in the
                                         // archive, if the schema is
                                         // hosted on the service in an
                                         // archive file.
    RedfishCS_char    *ArchiveUri;       // The link to an archive file,
                                         // if the schema is hosted on the
                                         // service in an archive file.
    RedfishCS_char    *Language;         // The language code for the
                                         // schema file.
    RedfishCS_char    *PublicationUri;    // The link to publicly available
                                         // (canonical) URI for schema.
    RedfishCS_char    *Uri;              // The link to locally available
                                         // URI for schema.
} RedfishJsonSchemaFile_V1_0_8_Location_CS;

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
// The JsonSchemaFile schema contains the properties that describe the locations,
// as URIs, of a Redfish Schema definition that a Redfish Service implements or
// references.
//
typedef struct _RedfishJsonSchemaFile_V1_0_8_JsonSchemaFile_CS {
    RedfishCS_Header                                  Header;
    RedfishCS_char                                    *odata_context;
    RedfishCS_char                                    *odata_etag;  
    RedfishCS_char                                    *odata_id;    
    RedfishCS_char                                    *odata_type;  
    RedfishCS_char                                    *Description; 
    RedfishCS_char                                    *Id;          
    RedfishCS_char_Array                              *Languages;       // The RFC5646-conformant
                                                                        // language codes for the
                                                                        // available schemas.
    RedfishJsonSchemaFile_V1_0_8_Location_Array_CS    *Location;        // Location information for this
                                                                        // schema file.
    RedfishCS_char                                    *Name;        
    RedfishResource_Oem_CS                            *Oem;             // The OEM extension property.
    RedfishCS_char                                    *Schema;          // The @odata.type name this
                                                                        // schema describes.
} RedfishJsonSchemaFile_V1_0_8_JsonSchemaFile_CS;

typedef struct _RedfishJsonSchemaFile_V1_0_8_Location_Array_CS  {
    RedfishJsonSchemaFile_V1_0_8_Location_Array_CS    *Next;
    RedfishJsonSchemaFile_V1_0_8_Location_CS    *ArrayValue;
} RedfishJsonSchemaFile_V1_0_8_Location_Array_CS;

RedfishCS_status
Json_JsonSchemaFile_V1_0_8_To_CS (char *JsonRawText, RedfishJsonSchemaFile_V1_0_8_JsonSchemaFile_CS **ReturnedCS);

RedfishCS_status
CS_To_JsonSchemaFile_V1_0_8_JSON (RedfishJsonSchemaFile_V1_0_8_JsonSchemaFile_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyJsonSchemaFile_V1_0_8_CS (RedfishJsonSchemaFile_V1_0_8_JsonSchemaFile_CS *CSPtr);

RedfishCS_status
DestroyJsonSchemaFile_V1_0_8_Json (RedfishCS_char *JsonText);

#endif
