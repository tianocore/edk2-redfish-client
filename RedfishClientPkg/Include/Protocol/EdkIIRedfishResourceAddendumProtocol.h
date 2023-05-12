/** @file
  This file defines the EDKII_REDFISH_RESOURCE_ADDENDUM_PROTOCOL interface.

  Copyright (c) 2022-2023, NVIDIA CORPORATION & AFFILIATES. All rights reserved.

  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#ifndef EDKII_REDFISH_RESOURCE_ADDENDUM_PROTOCOL_H_
#define EDKII_REDFISH_RESOURCE_ADDENDUM_PROTOCOL_H_

#include <Uefi.h>

typedef struct _EDKII_REDFISH_RESOURCE_ADDENDUM_PROTOCOL EDKII_REDFISH_RESOURCE_ADDENDUM_PROTOCOL;

///
/// The definition of REDFISH_SCHEMA_INFO
///
typedef struct {
  CHAR8    *Uri;
  CHAR8    *Schema;
  CHAR8    *Version;
} REDFISH_RESOURCE_SCHEMA_INFO;

/**
  Edk2 platform Redfish Resource Addendum driver provides this interface to create addendum data
  which is required by Redfish service to manage Redfish resource.

  Redfish feature driver calls this interface with the JSON data on input and Redfish schema
  information. The JSON data contains Redfish attributes that is created by feature driver.
  Based those attributes, edk2 platform Redfish Resource Addendum driver appends addendum data
  to it, or edk2 platform Redfish Resource Addendum driver replaces it with addendum data that
  is required by Redfish service. Then Redfish feature driver sends JSON data to Redfish
  service directly without modification.

  @param[in]      This             Pointer to EDKII_REDFISH_RESOURCE_ADDENDUM_PROTOCOL instance.
  @param[in]      SchemaInfo       Redfish schema information.
  @param[in,out]  Json             On input, this is the Redfish data in given JSON in JSON object.
                                   On output, This is the Redfish data with addendum information
                                   which platform would like to add to Redfish service.

  @retval EFI_SUCCESS              Addendum data is attached.
  @retval EFI_UNSUPPORTED          No addendum data is required in given schema.
  @retval Others                   Some error happened.

**/
typedef
EFI_STATUS
(EFIAPI *EDKII_REDFISH_RESOURCE_ADDENDUM_DATA)(
  IN     EDKII_REDFISH_RESOURCE_ADDENDUM_PROTOCOL  *This,
  IN     REDFISH_RESOURCE_SCHEMA_INFO              *SchemaInfo,
  IN OUT EDKII_JSON_VALUE                          Json
  );

/**
  Edk2 platform Redfish Resource Addendum driver provides this interface to create OEM data which
  is specified by Redfish schema.

  Redfish feature driver calls this interface with Redfish schema information. edk2 platform
  Redfish Resource Addendum driver creates OEM data and return it to feature driver. Then feature
  driver will append returned JSON data to "Oem" attribute. Feature driver sends Oem attribute
  and all other attributes to Redfish service without modification.

  @param[in]   This             Pointer to EDKII_REDFISH_RESOURCE_ADDENDUM_PROTOCOL instance.
  @param[in]   SchemaInfo       Redfish schema information.
  @param[out]  Json             This is the Redfish data which will be attached to OEM object in
                                given schema.

  @retval EFI_SUCCESS           OEM data is attached.
  @retval EFI_UNSUPPORTED       No OEM data is required in given schema.
  @retval Others                Some error happened.

**/
typedef
EFI_STATUS
(EFIAPI *EDKII_REDFISH_RESOURCE_ADDENDUM_OEM)(
  IN   EDKII_REDFISH_RESOURCE_ADDENDUM_PROTOCOL  *This,
  IN   REDFISH_RESOURCE_SCHEMA_INFO              *SchemaInfo,
  OUT  EDKII_JSON_VALUE                          Json
  );

///
/// The definition of _EDKII_REDFISH_RESOURCE_ADDENDUM_PROTOCOL
///
struct _EDKII_REDFISH_RESOURCE_ADDENDUM_PROTOCOL {
  UINT64                                  Revision;    ///< Protocol revision
  EDKII_REDFISH_RESOURCE_ADDENDUM_OEM     GetOemData;  ///< Get OEM data
  EDKII_REDFISH_RESOURCE_ADDENDUM_DATA    GetData;     ///< Get addendum data
};

extern EFI_GUID  gEdkIIRedfishResourceAddendumProtocolGuid;

#endif
