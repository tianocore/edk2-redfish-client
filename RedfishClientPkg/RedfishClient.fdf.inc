## @file
# Redfish Client FDF include file for [FV*] section of all Architectures.
#
# This file can be included to the [FV*] section(s) of a platform FDF file
# by using "!include RedfishClientPkg/RedfishClientLibs.fdf.inc" to specify the module instances
# to be built in the firmware volume.
#
# (C) Copyright 2021-2022 Hewlett Packard Enterprise Development LP<BR>
# Copyright (c) 2023-2024, NVIDIA CORPORATION & AFFILIATES. All rights reserved.
#
#    SPDX-License-Identifier: BSD-2-Clause-Patent
#
##
!if $(REDFISH_CLIENT) == TRUE
  INF RedfishClientPkg/RedfishFeatureCoreDxe/RedfishFeatureCoreDxe.inf
  INF RedfishClientPkg/RedfishETagDxe/RedfishETagDxe.inf
  INF RedfishClientPkg/RedfishConfigLangMapDxe/RedfishConfigLangMapDxe.inf
  INF RedfishClientPkg/Features/Memory/V1_7_1/Dxe/MemoryDxe.inf
  INF RedfishClientPkg/Features/MemoryCollectionDxe/MemoryCollectionDxe.inf
  INF RedfishClientPkg/Features/ComputerSystem/v1_5_0/Dxe/ComputerSystemDxe.inf
  INF RedfishClientPkg/Features/ComputerSystemCollectionDxe/ComputerSystemCollectionDxe.inf
  INF RedfishClientPkg/Features/Bios/v1_0_9/Dxe/BiosDxe.inf
  INF RedfishClientPkg/HiiToRedfishMemoryDxe/HiiToRedfishMemoryDxe.inf
  INF RedfishClientPkg/HiiToRedfishBootDxe/HiiToRedfishBootDxe.inf
  INF RedfishClientPkg/HiiToRedfishBiosDxe/HiiToRedfishBiosDxe.inf
  INF RedfishClientPkg/Features/BootOptionCollection/BootOptionCollectionDxe.inf
  INF RedfishClientPkg/Features/BootOption/v1_0_4/Dxe/BootOptionDxe.inf
  INF RedfishClientPkg/Features/SecureBoot/v1_1_0/Dxe/SecureBootDxe.inf
  INF RedfishClientPkg/RedfishTaskServiceDxe/RedfishTaskServiceDxe.inf

  !include RedfishClientPkg/RedfishJsonStructureDxe.fdf.inc
  #
  # Below two modules should be pulled in by build tool.
  #
  INF RedfishClientPkg/Converter/Memory/v1_7_1/RedfishMemory_V1_7_1_Dxe.inf
  INF RedfishClientPkg/Converter/MemoryCollection/RedfishMemoryCollection_Dxe.inf
  INF RedfishClientPkg/Converter/ComputerSystem/v1_5_0/RedfishComputerSystem_V1_5_0_Dxe.inf
  INF RedfishClientPkg/Converter/ComputerSystemCollection/RedfishComputerSystemCollection_Dxe.inf
  INF RedfishClientPkg/Converter/Bios/v1_0_9/RedfishBios_V1_0_9_Dxe.inf
  INF RedfishClientPkg/Converter/BootOptionCollection/RedfishBootOptionCollection_Dxe.inf
  INF RedfishClientPkg/Converter/BootOption/v1_0_4/RedfishBootOption_V1_0_4_Dxe.inf
!endif
