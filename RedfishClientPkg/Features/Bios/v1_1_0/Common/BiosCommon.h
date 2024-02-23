/** @file

  Redfish feature driver implementation - internal header file
  (C) Copyright 2020-2022 Hewlett Packard Enterprise Development LP<BR>
  Copyright (C) 2024-2025 Advanced Micro Devices, Inc. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#ifndef EFI_REDFISH_BIOS_COMMON_H_
#define EFI_REDFISH_BIOS_COMMON_H_

#include <RedfishJsonStructure/Bios/v1_1_0/EfiBiosV1_1_0.h>
#include <RedfishResourceCommon.h>

//
// Schema information.
//
#define REDFISH_MANAGED_URI        L"Systems/{}/Bios"
#define MAX_URI_LENGTH             256
#define RESOURCE_SCHEMA            "Bios"
#define RESOURCE_SCHEMA_MAJOR      "1"
#define RESOURCE_SCHEMA_MINOR      "1"
#define RESOURCE_SCHEMA_ERRATA     "0"
#define RESOURCE_SCHEMA_VERSION    "v1_1_0"
#define CONFIG_LANG_ARRAY_PATTERN  L"/Bios/.*"
#define CONFIG_LANG_ARRAY_PREFIX   L"/Bios/"
#define RESOURCE_SCHEMA_FULL       "x-UEFI-redfish-Bios.v1_1_0"

#endif
