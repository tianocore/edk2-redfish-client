/** @file
  This file defines the Redfish system topology library interface.

  Copyright (C) 2025 Advanced Micro Devices, Inc. All rights reserved.<BR>

  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#ifndef REDFISH_SUSTEM_TOPOLOGY_LIB_H_
#define REDFISH_SUSTEM_TOPOLOGY_LIB_H_

#include <Uefi.h>

///
/// Definitions of hardware type.
///
typedef enum {
  REDFISH_SYSTEM_TOPOLOGY_TYPE_PCIE = 0,
  REDFISH_SYSTEM_TOPOLOGY_TYPE_STORAGE,
  REDFISH_SYSTEM_TOPOLOGY_TYPE_CXL,
  REDFISH_SYSTEM_TOPOLOGY_TYPE_MEMORY,
  REDFISH_SYSTEM_TOPOLOGY_TYPE_COMPUTERSYSTEM,
  REDFISH_SYSTEM_TOPOLOGY_TYPE_INVALID = 255
} REDFISH_SYSTEM_TOPOLOGY_TYPE;

///
/// Version of hardware information structure.
/// Different version can be applied on
/// Different hawrdware component.
///
typedef struct  {
  UINT16                          Version; ///< high byte is the major version.
                                           ///< Low byte is the minor version.
  REDFISH_SYSTEM_TOPOLOGY_TYPE    Type;    ///< Hardware component type.
} REDFISH_SYSTEM_TOPOLOGY_HEADER;

#define REDFISH_SYSTEM_TOPOLOGY_PCIE_VERSION                 0x0100
#define REDFISH_SYSTEM_TOPOLOGY_TYPE_STORAGE_VERSION         0x0100
#define REDFISH_SYSTEM_TOPOLOGY_TYPE_CXL_VERSION             0x0100
#define REDFISH_SYSTEM_TOPOLOGY_TYPE_MEMORY_VERSION          0x0100
#define REDFISH_SYSTEM_TOPOLOGY_TYPE_COMPUTERSYSTEM_VERSION  0x0100

///
/// Definition of PCIe serial number.
///
typedef struct {
  UINT32    Lower;
  UINT32    Upper;
} REDFISH_PCIE_SERIAL_NUMBER;

///
/// PCIe type hardware information.
///
typedef struct  {
  UINTN                         Index;
  UINT16                        Manufacturer;
  UINT16                        Model;
  UINT8                         DeviceType;
  UINT8                         LanesInUse;
  UINT8                         MaxLanes;
  UINT8                         PCIeType;
  UINT8                         MaxPCIeType;
  UINT16                        State;
  REDFISH_PCIE_SERIAL_NUMBER    SerialNumber;
} REDFISH_SYSTEM_TOPOLOGY_PCIE;

///
/// Storage type hardware information.
///
typedef struct  {
  UINTN     Index;
  UINT64    CapacityBytes;
  UINT32    BlockSizeBytes;
  UINT8     MediaType;
  CHAR8     *ModelName;
  CHAR8     *SerialNumber;
  CHAR8     *FirmwareVersion;
} REDFISH_SYSTEM_TOPOLOGY_STORAGE;

///
/// Memory type hardware information.
///
typedef struct {
  UINT32    Size;
  UINT32    Speed;
  CHAR8     *DeviceLocator;
  CHAR8     *BankLocator;
  CHAR8     *Manufacturer;
  CHAR8     *SerialNumber;
  CHAR8     *PartNumber;
  CHAR8     *BaseModuleType;
  CHAR8     *MemoryType;
  CHAR8     *MemoryDeviceType;
  CHAR8     *FirmwareVersion;
  UINT32    DataWidth;
  UINT32    BusWidth;
  UINT32    RankCount;
  CHAR8     *ErrorCorrectionType;
  CHAR8     *Pmic0ManufacturerId;
  CHAR8     *RcdManufacturerId;
} REDFISH_SYSTEM_TOPOLOGY_MEMORY;

///
/// ComputerSystem type hardware information.
///
typedef struct {
  CHAR8    *BiosVersion;
} REDFISH_SYSTEM_TOPOLOGY_COMPUTERSYSTEM;

///
/// Dedinitions of hardware device type.
///
typedef union {
  REDFISH_SYSTEM_TOPOLOGY_PCIE              PcieDevice;
  REDFISH_SYSTEM_TOPOLOGY_MEMORY            MemoryDevice;
  REDFISH_SYSTEM_TOPOLOGY_STORAGE           StorageDevice;
  REDFISH_SYSTEM_TOPOLOGY_COMPUTERSYSTEM    ComputerSystem;
} EDKII_REDFISH_SYSTEM_TOPOLOGY_DEVICE_TYPE;

///
/// EDKII_REDFISH_SYSTEM_TOPOLOGY_DEVICE structure returns
/// from RedfishGetSystemTopologyGetEntry function.
///
typedef struct  {
  REDFISH_SYSTEM_TOPOLOGY_HEADER               Header;
  EDKII_REDFISH_SYSTEM_TOPOLOGY_DEVICE_TYPE    DeviceType;
} EDKII_REDFISH_SYSTEM_TOPOLOGY_DEVICE;

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
  );

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
  );

#endif // REDFISH_SUSTEM_TOPOLOGY_LIB_H_
