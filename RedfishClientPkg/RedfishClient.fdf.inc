## @file
# Redfish Client FDF include file for [FV*] section of all Architectures.
#
# This file can be included to the [FV*] section(s) of a platform FDF file
# by using "!include RedfishClientPkg/RedfisClientLibs.fdf.inc" to specify the module instances
# to be built in the firmware volume.
#
# (C) Copyright 2021 Hewlett Packard Enterprise Development LP<BR>
#
#    SPDX-License-Identifier: BSD-2-Clause-Patent
#
##
!if $(REDFISH_CLIENT) == TRUE
  INF RedfishClientPkg/RedfishFeatureCoreDxe/RedfishFeatureCoreDxe.inf
  INF RedfishClientPkg/RedfishETagDxe/RedfishETagDxe.inf
  INF RedfishClientPkg/Features/Memory/V1_7_1/Dxe/RedfishMemoryDxe.inf
  INF RedfishClientPkg/Features/RedfishMemoryCollectionDxe/RedfishMemoryCollectionDxe.inf

  INF RedfishClientPkg/Converter/Memory/v1_7_1/RedfishMemory_V1_7_1_Dxe.inf
  INF RedfishClientPkg/Converter/MemoryCollection/RedfishMemoryCollection_Dxe.inf
!endif
