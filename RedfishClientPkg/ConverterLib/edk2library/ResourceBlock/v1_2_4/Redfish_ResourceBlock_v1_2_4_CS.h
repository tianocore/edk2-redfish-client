//
// Auto-generated file by Redfish Schema C Structure Generator.
// https://github.com/DMTF/Redfish-Schema-C-Struct-Generator.
//
//  (C) Copyright 2019-2022 Hewlett Packard Enterprise Development LP<BR>
//  Copyright (c) 2023-2024, NVIDIA CORPORATION & AFFILIATES. All rights reserved.
//  Copyright (C) 2024 Advanced Micro Devices, Inc. All rights reserved.<BR>
//  SPDX-License-Identifier: BSD-2-Clause-Patent
//
// Auto-generated file by Redfish Schema C Structure Generator.
// https://github.com/DMTF/Redfish-Schema-C-Struct-Generator.
// Copyright Notice:
// Copyright 2019-2024 Distributed Management Task Force, Inc. All rights reserved.
// License: BSD 3-Clause License. For full text see link: https://github.com/DMTF/Redfish-JSON-C-Struct-Converter/blob/master/LICENSE.md
//

#ifndef EFI_REDFISHRESOURCEBLOCK_V1_2_4_CSTRUCT_H_
#define EFI_REDFISHRESOURCEBLOCK_V1_2_4_CSTRUCT_H_

#include "../../../include/RedfishDataTypeDef.h"
#include "../../../include/Redfish_ResourceBlock_v1_2_4_CS.h"

typedef RedfishResourceBlock_V1_2_4_ResourceBlock_CS EFI_REDFISH_RESOURCEBLOCK_V1_2_4_CS;

RedfishCS_status
Json_ResourceBlock_V1_2_4_To_CS (RedfishCS_char *JsonRawText, EFI_REDFISH_RESOURCEBLOCK_V1_2_4_CS **ReturnedCs);

RedfishCS_status
CS_To_ResourceBlock_V1_2_4_JSON (EFI_REDFISH_RESOURCEBLOCK_V1_2_4_CS *CSPtr, RedfishCS_char **JsonText);

RedfishCS_status
DestroyResourceBlock_V1_2_4_CS (EFI_REDFISH_RESOURCEBLOCK_V1_2_4_CS *CSPtr);

RedfishCS_status
DestroyResourceBlock_V1_2_4_Json (RedfishCS_char *JsonText);

#endif
