/** @file
  This file defines the EFI Redfish C Structure Interpreter for MediaControllerCollection 

  (C) Copyright 2019-2021 Hewlett Packard Enterprise Development LP<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

  Auto-generated file by Redfish Schema C Structure Generator.
  https://github.com/DMTF/Redfish-Schema-C-Struct-Generator
  
  Copyright Notice:
  Copyright 2019-2021 Distributed Management Task Force, Inc. All rights reserved.
  License: BSD 3-Clause License. For full text see link: https://github.com/DMTF/Redfish-JSON-C-Struct-Converter/blob/master/LICENSE.md  

**/

#ifndef EFI_REDFISH_INTERP_MEDIACONTROLLERCOLLECTION_H__
#define EFI_REDFISH_INTERP_MEDIACONTROLLERCOLLECTION_H__

#include <Uefi.h>
#include <Protocol/RestJsonStructure.h>
#include "ConverterLib/edk2library/MediaControllerCollection/Redfish_MediaControllerCollection_CS.h"
//
// EFI structure of Redfish MediaControllerCollection 
//
typedef struct _EFI_REDFISH_MEDIACONTROLLERCOLLECTION {
  EFI_REST_JSON_STRUCTURE_HEADER Header;
  EFI_REDFISH_MEDIACONTROLLERCOLLECTION_CS *MediaControllerCollection;
} EFI_REDFISH_MEDIACONTROLLERCOLLECTION;

#endif
