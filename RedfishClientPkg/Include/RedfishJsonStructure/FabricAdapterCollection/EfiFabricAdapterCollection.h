/** @file
  This file defines the EFI Redfish C Structure Interpreter for FabricAdapterCollection 

  (C) Copyright 2019-2022 Hewlett Packard Enterprise Development LP<BR>
  Copyright (c) 2023-2024, NVIDIA CORPORATION & AFFILIATES. All rights reserved.
  Copyright (C) 2024 Advanced Micro Devices, Inc. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

  Auto-generated file by Redfish Schema C Structure Generator.
  https://github.com/DMTF/Redfish-Schema-C-Struct-Generator
  
  Copyright Notice:
  Copyright 2019-2024 Distributed Management Task Force, Inc. All rights reserved.
  License: BSD 3-Clause License. For full text see link: https://github.com/DMTF/Redfish-JSON-C-Struct-Converter/blob/main/LICENSE.md  

**/

#ifndef EFI_REDFISH_INTERP_FABRICADAPTERCOLLECTION_H__
#define EFI_REDFISH_INTERP_FABRICADAPTERCOLLECTION_H__

#include <Uefi.h>
#include <Protocol/RestJsonStructure.h>
#include "ConverterLib/edk2library/FabricAdapterCollection/Redfish_FabricAdapterCollection_CS.h"
//
// EFI structure of Redfish FabricAdapterCollection 
//
typedef struct _EFI_REDFISH_FABRICADAPTERCOLLECTION {
  EFI_REST_JSON_STRUCTURE_HEADER Header;
  EFI_REDFISH_FABRICADAPTERCOLLECTION_CS *FabricAdapterCollection;
} EFI_REDFISH_FABRICADAPTERCOLLECTION;

#endif
