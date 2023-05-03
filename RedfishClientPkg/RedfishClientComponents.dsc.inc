## @file
# Redfish Client DSC include file for [Components*] section of all Architectures.
#
# This file can be included to the [Components*] section(s) of a platform DSC file
# by using "!include RedfishClientPkg/RedfishClientComponents.dsc.inc" to specify the INF files
# of EDKII Redfish drivers according to the value of flags described in
# "RedfishClientDefines.dsc.inc".
#
# (C) Copyright 2021 Hewlett Packard Enterprise Development LP<BR>
#
#    SPDX-License-Identifier: BSD-2-Clause-Patent
#
##

!if $(REDFISH_CLIENT) == TRUE
  RedfishClientPkg/RedfishFeatureCoreDxe/RedfishFeatureCoreDxe.inf
!endif

!if $(REDFISH_CLIENT_ALL_AUTOGENED) == TRUE
  !include RedfishClientPkg/RedfishJsonStructureDxe.dsc.inc
!endif

