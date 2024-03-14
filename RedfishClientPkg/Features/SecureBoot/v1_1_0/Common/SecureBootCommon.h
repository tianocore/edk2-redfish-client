/** @file

  Redfish feature driver implementation - internal header file
  (C) Copyright 2020-2022 Hewlett Packard Enterprise Development LP<BR>
  Copyright (c) 2022-2024, NVIDIA CORPORATION & AFFILIATES. All rights reserved.

  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#ifndef EFI_REDFISH_SECUREBOOT_COMMON_H_
#define EFI_REDFISH_SECUREBOOT_COMMON_H_

#include <Guid/ImageAuthentication.h>
#include <Guid/GlobalVariable.h>
#include <Guid/AuthenticatedVariableFormat.h>
#include <RedfishJsonStructure/SecureBoot/v1_1_0/EfiSecureBootV1_1_0.h>
#include <RedfishResourceCommon.h>
#include <UefiSecureBoot.h>
#include <Library/UefiRuntimeServicesTableLib.h>
#include <Library/SecureBootVariableLib.h>

//
// Schema information.
//
#define REDFISH_MANAGED_URI        L"Systems/{}/SecureBoot"
#define REDFISH_DUMMY_CONFIG_LANG  L"Systems/{1}/SecureBoot"
#define MAX_URI_LENGTH             256
#define RESOURCE_SCHEMA            "SecureBoot"
#define RESOURCE_SCHEMA_MAJOR      "1"
#define RESOURCE_SCHEMA_MINOR      "1"
#define RESOURCE_SCHEMA_ERRATA     "0"
#define RESOURCE_SCHEMA_VERSION    "v1_1_0"
#define SECURE_BOOT_SETUP_MODE     "SetupMode"
#define SECURE_BOOT_USER_MODE      "UserMode"
#define SECURE_BOOT_ENABLED        "Enabled"
#define SECURE_BOOT_DISABLED       "Disabled"
#define SECURE_BOOT_MODE_STR_LEN   16

#endif
