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

#ifndef EFI_REDFISHPORTCOLLECTION_CSTRUCT_H_
#define EFI_REDFISHPORTCOLLECTION_CSTRUCT_H_

#include "../../include/RedfishDataTypeDef.h"
#include "../../include/Redfish_PortCollection_CS.h"

typedef RedfishPortCollection_PortCollection_CS EFI_REDFISH_PORTCOLLECTION_CS;

RedfishCS_status
Json_PortCollection_To_CS (RedfishCS_char *JsonRawText, EFI_REDFISH_PORTCOLLECTION_CS **ReturnedCs);

RedfishCS_status
CS_To_PortCollection_JSON (EFI_REDFISH_PORTCOLLECTION_CS *CSPtr, RedfishCS_char **JsonText);

RedfishCS_status
DestroyPortCollection_CS (EFI_REDFISH_PORTCOLLECTION_CS *CSPtr);

RedfishCS_status
DestroyPortCollection_Json (RedfishCS_char *JsonText);

#endif
