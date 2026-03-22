//
//  Copyright (C) 2026 Advanced Micro Devices, Inc. All rights reserved.<BR>
//  SPDX-License-Identifier: BSD-2-Clause-Patent
//

#ifndef EFI_REDFISHPCIEDEVICEARRAY_CSTRUCT_H_
#define EFI_REDFISHPCIEDEVICEARRAY_CSTRUCT_H_

#include "../../include/RedfishDataTypeDef.h"
#include "../../include/Redfish_PCIeDeviceArray_CS.h"

typedef RedfishPCIeDeviceArray_PCIeDeviceArray_CS EFI_REDFISH_PCIEDEVICEARRAY_CS;

RedfishCS_status
Json_PCIeDeviceArray_To_CS (RedfishCS_char *JsonRawText, EFI_REDFISH_PCIEDEVICEARRAY_CS **ReturnedCs);

RedfishCS_status
CS_To_PCIeDeviceArray_JSON (EFI_REDFISH_PCIEDEVICEARRAY_CS *CSPtr, RedfishCS_char **JsonText);

RedfishCS_status
DestroyPCIeDeviceArray_CS (EFI_REDFISH_PCIEDEVICEARRAY_CS *CSPtr);

RedfishCS_status
DestroyPCIeDeviceArray_Json (RedfishCS_char *JsonText);

#endif
