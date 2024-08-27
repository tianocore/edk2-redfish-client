/** @file
  Header file of EDKII Redfish Resource Config Library.

  Copyright (c) 2023-2024, NVIDIA CORPORATION & AFFILIATES. All rights reserved.

  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#ifndef REDFISH_RESOURCE_CONFIG_INTERNAL_H_
#define REDFISH_RESOURCE_CONFIG_INTERNAL_H_

#include <RedfishBase.h>
#include <Library/BaseLib.h>
#include <Library/DebugLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/MemoryAllocationLib.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/EdkIIRedfishResourceConfigLib.h>
#include <Library/RedfishFeatureUtilityLib.h>
#include <Library/RedfishPlatformConfigLib.h>
#include <Library/RedfishHttpLib.h>
#include <Library/PrintLib.h>

///
/// Definition of SCHEMA_VERSION_COMPARE_RESULT
///
typedef enum {
  SCHEMA_LEFT_EQUAL_TO_RIGHT = 0,
  SCHEMA_LEFT_GREATER_THAN_RIGHT,
  SCHEMA_LEFT_SMALLER_THAN_RIGHT,
  SCHEMA_COMPARE_ERROR
} SCHEMA_VERSION_COMPARE_RESULT;

///
/// Definition of EDKII_REDFISH_RESOURCE_CONFIG_PROTOCOLS
///
typedef union {
  EDKII_REDFISH_RESOURCE_CONFIG_PROTOCOL     *ConfigProtocol;
  EDKII_REDFISH_RESOURCE_CONFIG2_PROTOCOL    *Config2Protocol;
} EDKII_REDFISH_RESOURCE_CONFIG_PROTOCOLS;

///
/// Definition of REDFISH_CONFIG_PROTOCOL_CACHE
///
typedef struct {
  EDKII_REDFISH_RESOURCE_CONFIG_PROTOCOLS    RedfishResourceConfig;
  EFI_HANDLE                                 CachedHandle;
  REDFISH_SCHEMA_INFO                        SchemaInfoCache;
  BOOLEAN                                    CompatibleMode;
} REDFISH_CONFIG_PROTOCOL_CACHE;

#define SCHEMA_NAME_PREFIX         "x-UEFI-redfish-"
#define SCHEMA_NAME_PREFIX_OFFSET  (AsciiStrLen (SCHEMA_NAME_PREFIX))
#define SCHEMA_ODATA_TYPE          "@odata.type"
#define SCHEMA_ODATA_TYPE_MAX_LEN  64

#endif
