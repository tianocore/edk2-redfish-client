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

#ifndef EFI_REDFISHJOB_V1_0_6_CSTRUCT_H_
#define EFI_REDFISHJOB_V1_0_6_CSTRUCT_H_

#include "../../../include/RedfishDataTypeDef.h"
#include "../../../include/Redfish_Job_v1_0_6_CS.h"

typedef RedfishJob_V1_0_6_Job_CS EFI_REDFISH_JOB_V1_0_6_CS;

RedfishCS_status
Json_Job_V1_0_6_To_CS (RedfishCS_char *JsonRawText, EFI_REDFISH_JOB_V1_0_6_CS **ReturnedCs);

RedfishCS_status
CS_To_Job_V1_0_6_JSON (EFI_REDFISH_JOB_V1_0_6_CS *CSPtr, RedfishCS_char **JsonText);

RedfishCS_status
DestroyJob_V1_0_6_CS (EFI_REDFISH_JOB_V1_0_6_CS *CSPtr);

RedfishCS_status
DestroyJob_V1_0_6_Json (RedfishCS_char *JsonText);

#endif
