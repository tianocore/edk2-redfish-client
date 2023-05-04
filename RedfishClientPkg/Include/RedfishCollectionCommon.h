/** @file
  Redfish feature driver collection common header file.

  (C) Copyright 2020-2021 Hewlett Packard Enterprise Development LP<BR>

  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#ifndef EFI_REDFISH_COLLECTION_COMMON_H_
#define EFI_REDFISH_COLLECTION_COMMON_H_

//
// Libraries
//
#include <Library/BaseMemoryLib.h>
#include <Library/DebugLib.h>
#include <Library/MemoryAllocationLib.h>
#include <Library/PrintLib.h>
#include <Library/PcdLib.h>
#include <Library/RedfishLib.h>
#include <Library/RedfishFeatureUtilityLib.h>
#include <Library/UefiLib.h>
#include <Library/UefiBootServicesTableLib.h>

//
// Protocols
//
#include <Protocol/EdkIIRedfishConfigHandler.h>
#include <Protocol/EdkIIRedfishResourceConfigProtocol.h>
#include <Protocol/EdkIIRedfishFeature.h>
#include <Protocol/RestJsonStructure.h>
#include <Protocol/RestEx.h>

#define IS_EMPTY_STRING(a)  ((a) == NULL || (a)[0] == '\0')
#define REDFISH_DEBUG_TRACE  DEBUG_INFO

typedef struct _REDFISH_COLLECTION_PRIVATE {
  EFI_REST_JSON_STRUCTURE_PROTOCOL         *JsonStructProtocol;
  EDKII_REDFISH_FEATURE_PROTOCOL           *FeatureProtocol;
  REDFISH_SERVICE                          RedfishService;
  EDKII_REDFISH_CONFIG_HANDLER_PROTOCOL    ConfigHandler;
  CHAR8                                    *CollectionPath;
  CHAR8                                    *CollectionJson;
  REDFISH_PAYLOAD                          CollectionPayload;
  REDFISH_RESPONSE                         RedResponse;
} REDFISH_COLLECTION_PRIVATE;

#define REDFISH_COLLECTION_PRIVATE_DATA_FROM_PROTOCOL(This) \
          BASE_CR ((This), REDFISH_COLLECTION_PRIVATE, ConfigHandler)

#endif
