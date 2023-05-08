//
// Auto-generated file by Redfish Schema C Structure Generator.
// https://github.com/DMTF/Redfish-Schema-C-Struct-Generator.
//
//  (C) Copyright 2019-2021 Hewlett Packard Enterprise Development LP<BR>
//  SPDX-License-Identifier: BSD-2-Clause-Patent
//
// Auto-generated file by Redfish Schema C Structure Generator.
// https://github.com/DMTF/Redfish-Schema-C-Struct-Generator.
// Copyright Notice:
// Copyright 2019-2021 Distributed Management Task Force, Inc. All rights reserved.
// License: BSD 3-Clause License. For full text see link: https://github.com/DMTF/Redfish-JSON-C-Struct-Converter/blob/master/LICENSE.md
//

#ifndef EFI_REDFISHFABRIC_V1_0_9_CSTRUCT_H_
#define EFI_REDFISHFABRIC_V1_0_9_CSTRUCT_H_

#include "../../../include/RedfishDataTypeDef.h"
#include "../../../include/Redfish_Fabric_v1_0_9_CS.h"

typedef RedfishFabric_V1_0_9_Fabric_CS EFI_REDFISH_FABRIC_V1_0_9_CS;

RedfishCS_status
Json_Fabric_V1_0_9_To_CS (RedfishCS_char *JsonRawText, EFI_REDFISH_FABRIC_V1_0_9_CS **ReturnedCs);

RedfishCS_status
CS_To_Fabric_V1_0_9_JSON (EFI_REDFISH_FABRIC_V1_0_9_CS *CSPtr, RedfishCS_char **JsonText);

RedfishCS_status
DestroyFabric_V1_0_9_CS (EFI_REDFISH_FABRIC_V1_0_9_CS *CSPtr);

RedfishCS_status
DestroyFabric_V1_0_9_Json (RedfishCS_char *JsonText);

#endif