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

#ifndef EFI_REDFISHETHERNETINTERFACE_V1_2_1_CSTRUCT_H_
#define EFI_REDFISHETHERNETINTERFACE_V1_2_1_CSTRUCT_H_

#include "../../../include/RedfishDataTypeDef.h"
#include "../../../include/Redfish_EthernetInterface_v1_2_1_CS.h"

typedef RedfishEthernetInterface_V1_2_1_EthernetInterface_CS EFI_REDFISH_ETHERNETINTERFACE_V1_2_1_CS;

RedfishCS_status
Json_EthernetInterface_V1_2_1_To_CS (RedfishCS_char *JsonRawText, EFI_REDFISH_ETHERNETINTERFACE_V1_2_1_CS **ReturnedCs);

RedfishCS_status
CS_To_EthernetInterface_V1_2_1_JSON (EFI_REDFISH_ETHERNETINTERFACE_V1_2_1_CS *CSPtr, RedfishCS_char **JsonText);

RedfishCS_status
DestroyEthernetInterface_V1_2_1_CS (EFI_REDFISH_ETHERNETINTERFACE_V1_2_1_CS *CSPtr);

RedfishCS_status
DestroyEthernetInterface_V1_2_1_Json (RedfishCS_char *JsonText);

#endif
