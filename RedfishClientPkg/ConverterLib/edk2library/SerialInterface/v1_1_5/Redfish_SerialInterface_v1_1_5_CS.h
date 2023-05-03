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

#ifndef EFI_REDFISHSERIALINTERFACE_V1_1_5_CSTRUCT_H_
#define EFI_REDFISHSERIALINTERFACE_V1_1_5_CSTRUCT_H_

#include "../../../include/RedfishDataTypeDef.h"
#include "../../../include/Redfish_SerialInterface_v1_1_5_CS.h"

typedef RedfishSerialInterface_V1_1_5_SerialInterface_CS EFI_REDFISH_SERIALINTERFACE_V1_1_5_CS;

RedfishCS_status
Json_SerialInterface_V1_1_5_To_CS (RedfishCS_char *JsonRawText, EFI_REDFISH_SERIALINTERFACE_V1_1_5_CS **ReturnedCs);

RedfishCS_status
CS_To_SerialInterface_V1_1_5_JSON (EFI_REDFISH_SERIALINTERFACE_V1_1_5_CS *CSPtr, RedfishCS_char **JsonText);

RedfishCS_status
DestroySerialInterface_V1_1_5_CS (EFI_REDFISH_SERIALINTERFACE_V1_1_5_CS *CSPtr);

RedfishCS_status
DestroySerialInterface_V1_1_5_Json (RedfishCS_char *JsonText);

#endif
