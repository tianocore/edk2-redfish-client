/** @file
  This file defines the EFI Redfish C Structure Interpreter for PCIeDeviceArray

  Copyright (C) 2026 Advanced Micro Devices, Inc. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#ifndef EFI_REDFISH_INTERP_PCIEDEVICEARRAY_H__
#define EFI_REDFISH_INTERP_PCIEDEVICEARRAY_H__

#include <Uefi.h>
#include <Protocol/RestJsonStructure.h>
#include "ConverterLib/edk2library/PCIeDeviceArray/Redfish_PCIeDeviceArray_CS.h"
//
// EFI structure of Redfish PCIeDeviceCollection
//
typedef struct _EFI_REDFISH_PCIEDEVICEARRAY {
  EFI_REST_JSON_STRUCTURE_HEADER    Header;
  EFI_REDFISH_PCIEDEVICEARRAY_CS    *PCIeDeviceArray;
} EFI_REDFISH_PCIEDEVICEARRAY;

#endif
