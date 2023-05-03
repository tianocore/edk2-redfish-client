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

#ifndef EFI_REDFISHACCELERATIONFUNCTIONCOLLECTION_CSTRUCT_H_
#define EFI_REDFISHACCELERATIONFUNCTIONCOLLECTION_CSTRUCT_H_

#include "../../include/RedfishDataTypeDef.h"
#include "../../include/Redfish_AccelerationFunctionCollection_CS.h"

typedef RedfishAccelerationFunctionCollection_AccelerationFunctionCollection_CS EFI_REDFISH_ACCELERATIONFUNCTIONCOLLECTION_CS;

RedfishCS_status
Json_AccelerationFunctionCollection_To_CS (RedfishCS_char *JsonRawText, EFI_REDFISH_ACCELERATIONFUNCTIONCOLLECTION_CS **ReturnedCs);

RedfishCS_status
CS_To_AccelerationFunctionCollection_JSON (EFI_REDFISH_ACCELERATIONFUNCTIONCOLLECTION_CS *CSPtr, RedfishCS_char **JsonText);

RedfishCS_status
DestroyAccelerationFunctionCollection_CS (EFI_REDFISH_ACCELERATIONFUNCTIONCOLLECTION_CS *CSPtr);

RedfishCS_status
DestroyAccelerationFunctionCollection_Json (RedfishCS_char *JsonText);

#endif
