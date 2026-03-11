/** @file
  Redfish feature driver array common header file.

  Copyright (C) 2026 Advanced Micro Devices, Inc. All rights reserved.<BR>

  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#ifndef EFI_REDFISH_ARRAY_COMMON_H_
#define EFI_REDFISH_ARRAY_COMMON_H_

#include <RedfishBase.h>

//
// Libraries
//
#include <Library/BaseMemoryLib.h>
#include <Library/DebugLib.h>
#include <Library/MemoryAllocationLib.h>
#include <Library/PrintLib.h>
#include <Library/PcdLib.h>
#include <Library/RedfishHttpLib.h>
#include <Library/RedfishFeatureUtilityLib.h>
#include <Library/UefiLib.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/EdkIIRedfishResourceConfigLib.h>
#include <Library/RedfishVersionLib.h>

//
// Protocols
//
#include <Protocol/EdkIIRedfishConfigHandler.h>
#include <Protocol/EdkIIRedfishFeature.h>
#include <Protocol/RestJsonStructure.h>
#include <Protocol/RestEx.h>

typedef struct _REDFISH_ARRAY_PRIVATE {
  EFI_REST_JSON_STRUCTURE_PROTOCOL         *JsonStructProtocol;
  EDKII_REDFISH_FEATURE_PROTOCOL           *FeatureProtocol;
  REDFISH_SERVICE                          RedfishService;
  RESOURCE_INFORMATION_EXCHANGE            *InformationExchange;
  EDKII_REDFISH_CONFIG_HANDLER_PROTOCOL    ConfigHandler;
  EFI_STRING                               ArrayUri;
  EFI_STRING                               ArrayParentUri;
  CHAR8                                    *ArrayJson;
  REDFISH_PAYLOAD                          ArrayParentPayload;
  REDFISH_RESPONSE                         Response;
  EFI_STRING                               RedfishVersion;
} REDFISH_ARRAY_PRIVATE;

#define REDFISH_ARRAY_PRIVATE_DATA_FROM_PROTOCOL(This) \
          BASE_CR ((This), REDFISH_ARRAY_PRIVATE, ConfigHandler)

#endif
