/** @file

  Common BIOS attribute registry interfaces to build the Redfish AttributeRegistry.

  Copyright (C) 2026 Advanced Micro Devices, Inc. All rights reserved.<BR>
  Copyright (c) 2022-2023, NVIDIA CORPORATION & AFFILIATES. All rights reserved.

  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#ifndef BIOS_ATTRIBUTE_REGISTRY_COMMON_H_
#define BIOS_ATTRIBUTE_REGISTRY_COMMON_H_

#include <Library/UefiBootServicesTableLib.h>
#include <Library/MemoryAllocationLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/BaseLib.h>
#include <Library/UefiLib.h>
#include <Library/DebugLib.h>
#include <Library/PrintLib.h>
#include <Library/JsonLib.h>
#include <Library/RedfishPlatformConfigLib.h>

#include <Protocol/EdkIIRedfishResourceAddendumProtocol.h>

#define REDFISH_BIOS_CONFIG_LANG_SIZE    64
#define REDFISH_BIOS_DEBUG_DUMP          DEBUG_INFO
#define REDFISH_BIOS_CONFIG_LANG_PREFIX  L"/Bios/Attributes/"
#define REDFISH_TOP_MENU_PATH            "/Root"

/**
  This function consume input BIOS attribute name and create all required
  JSON objects that is required by BMC. The format is basically the format
  of AttributeRegistry.v1_3_6

  @param[in]      Schema        The schema name.
  @param[in]      Version       The schema verion string.
  @param[in]      Key           The name of BIOS attribute.
  @param[in]      Value         The value of given BIOS attribute.
  @param[out]     AttributeObj  The object which follows BMC requirements.

  @retval EFI_SUCCESS              Attribute is created successfully.
  @retval Others                   Some error happened.

**/
EFI_STATUS
GenerateAttributeDetails (
  IN CHAR8              *Schema,
  IN CHAR8              *Version,
  IN CHAR8              *Key,
  IN EDKII_JSON_VALUE   Value,
  OUT EDKII_JSON_VALUE  *AttributeObj
  );

/**
  Convert Redfish value to JSON value.

  @param[in]      RedfishValue     Redfish value to be converted.
  @param[out]     Value            JSON value from given Redfish value.

  @retval EFI_SUCCESS              Conversion is done successfully.
  @retval EFI_UNSUPPORTED          Unsupported Redfish value type.
  @retval Others                   Some error happened.

**/
EFI_STATUS
RedfishValueToJsonValue (
  IN EDKII_REDFISH_VALUE  *RedfishValue,
  OUT EDKII_JSON_VALUE    *Value
  );

/**
  Dump Json object for debugging purpose.

  @param[in]      Message          Help message.
  @param[in]      JsonValue        Json object to dump.

**/
VOID
DumpJsonData (
  IN  CONST CHAR8       *Message,
  IN  EDKII_JSON_VALUE  JsonValue
  );

#endif
