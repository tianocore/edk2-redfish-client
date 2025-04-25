/** @file

  Redfish Bios Attribute Registry driver header file.

  Copyright (C) 2026 Advanced Micro Devices, Inc. All rights reserved.<BR>

  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#ifndef EFI_REDFISH_BIOS_ATTRIBUTE_REGISTRY_H_
#define EFI_REDFISH_BIOS_ATTRIBUTE_REGISTRY_H_

#include <Library/BaseLib.h>
#include <Library/JsonLib.h>
#include <Library/RedfishFeatureUtilityLib.h>
#include <RedfishJsonStructure/AttributeRegistry/v1_3_6/EfiAttributeRegistryV1_3_6.h>
#include <RedfishResourceCommon.h>
#include "../Common/BiosAttributeRegistryCommon.h"

#define REDFISH_SCHEMA_NAME     "AttributeRegistry"
#define RESOURCE_SCHEMA_MAJOR   "1"
#define RESOURCE_SCHEMA_MINOR   "3"
#define RESOURCE_SCHEMA_ERRATA  "6"
#define REDFISH_MANAGED_URI     L"Systems/{}/Bios/AttributeRegistry"

#define REDFISH_BIOS_ATTRIBUTE_REGISTRY_SCHEMA_NAME  "AttributeRegistry"
#define MAX_URI_LENGTH                               256

#endif
