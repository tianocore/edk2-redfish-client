/** @file
  Redfish Schema JSON to C converter header file

  Copyright (C) 2026 Advanced Micro Devices, Inc. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/
#ifndef RedfishPciedeviceArray_Noversioned_CSTRUCT_H_
#define RedfishPciedeviceArray_Noversioned_CSTRUCT_H_

#include "RedfishCsCommon.h"

//
// The Array of PCIeDevice resource idref instances.
//
typedef struct _RedfishPCIeDeviceArray_PCIeDeviceArray_CS {
  RedfishCS_Header               Header;
  RedfishCS_Type_Uri_Data        PCIeDevices;
} RedfishPCIeDeviceArray_PCIeDeviceArray_CS;

RedfishCS_status
Json_PCIeDeviceArray_To_CS (char *JsonRawText, RedfishPCIeDeviceArray_PCIeDeviceArray_CS **ReturnedCS);

RedfishCS_status
CS_To_PCIeDeviceArray_JSON (RedfishPCIeDeviceArray_PCIeDeviceArray_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyPCIeDeviceArray_CS (RedfishPCIeDeviceArray_PCIeDeviceArray_CS *CSPtr);

RedfishCS_status
DestroyPCIeDeviceArray_Json (RedfishCS_char *JsonText);

#endif
