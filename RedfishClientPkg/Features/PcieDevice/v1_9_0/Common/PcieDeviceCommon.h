/** @file
  Redfish feature driver implementation - internal header file

  Copyright (C) 2026 Advanced Micro Devices, Inc. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#ifndef EFI_REDFISH_PCIEDEVICE_COMMON_H_
#define EFI_REDFISH_PCIEDEVICE_COMMON_H_

#include <RedfishJsonStructure/PCIeDevice/v1_9_0/EfiPCIeDeviceV1_9_0.h>
#include <Library/RedfishSystemTopologyLib.h>
#include <RedfishResourceCommon.h>

//
// Schema information.
//
#define RESOURCE_SCHEMA          "PCIeDevice"
#define RESOURCE_SCHEMA_MAJOR    "1"
#define RESOURCE_SCHEMA_MINOR    "9"
#define RESOURCE_SCHEMA_ERRATA   "0"
#define RESOURCE_SCHEMA_VERSION  "v1_9_0"
#define RESOURCE_SCHEMA_FULL     "x-UEFI-redfish-PCIeDevice.v1_9_0"

#endif
