/** @file
  NULL instace of RedfishSystemTopology library

  Copyright (C) 2025 Advanced Micro Devices, Inc. All rights reserved.<BR>

  SPDX-License-Identifier: BSD-2-Clause-Patent

**/
#include <Uefi.h>
#include <Library/RedfishSystemTopologyLib.h>

/**
  Get the count of specific REDFISH_SYSTEM_TOPOLOGY_TYPE.

  @param[in]    TopologyType     REDFISH_SYSTEM_TOPOLOGY_TYPE.
  @param[out]   Count            Count of this REDFISH_SYSTEM_TOPOLOGY_TYPE.
  @retval EFI_STATUS             Some error happened.

**/
EFI_STATUS
RedfishSystemTopologyGetCount (
  IN   REDFISH_SYSTEM_TOPOLOGY_TYPE  TopologyType,
  OUT  UINTN                         *Count
  )
{
  return EFI_UNSUPPORTED;
}

/**
  Get the device hardware information according REDFISH_SYSTEM_TOPOLOGY_TYPE.

  @param[in]      TopologyType   REDFISH_SYSTEM_TOPOLOGY_TYPE.
  @param[in out]  DeviceEntry    NULL to get the first entry of REDFISH_SYSTEM_TOPOLOGY_TYPE device.
                                 Otherwise, returns the next entry of REDFISH_SYSTEM_TOPOLOGY_TYPE device.
  @retval EFI_STATUS             Some error happened.

**/
EFI_STATUS
RedfishGetSystemTopologyGetEntry (
  IN     REDFISH_SYSTEM_TOPOLOGY_TYPE          TopologyType,
  IN OUT EDKII_REDFISH_SYSTEM_TOPOLOGY_DEVICE  **DeviceEntry
  )
{
  return EFI_UNSUPPORTED;
}
