/** @file

  Redfish feature driver implementation - internal header file

  Copyright (C) 2026 Advanced Micro Devices, Inc. All rights reserved.<BR>

  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#ifndef EFI_REDFISH_PCIE_DEVICE_ARRAY_H_
#define EFI_REDFISH_PCIE_DEVICE_ARRAY_H_

#include <Library/BaseLib.h>
#include <Library/RedfishAddendumLib.h>
#include <RedfishJsonStructure/PCIeDeviceArray/EfiPCIeDeviceArray.h>
#include <RedfishArrayCommon.h>

#define REDFISH_SCHEMA_NAME     "PCIeDeviceArray"
#define RESOURCE_SCHEMA_MAJOR   "NOVERSIONED"
#define RESOURCE_SCHEMA_MINOR   "NOVERSIONED"
#define RESOURCE_SCHEMA_ERRATA  "NOVERSIONED"
#define REDFISH_MANAGED_URI     L"Systems/{}/PCIeDevices;FabricAdapter/{}/Links/PCIeDevices;NetworkAdapter/{}/ControllerLinks/PCIeDevices"

#define REDFISH_PCIE_DEVICE_SCHEMA_NAME  "PCIeDevice"
#define MAX_URI_LENGTH                   256

#endif
