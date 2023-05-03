/** @file
  This file defines the EFI Redfish C Structure Interpreter for MetricReportCollection 

  (C) Copyright 2019-2021 Hewlett Packard Enterprise Development LP<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

  Auto-generated file by Redfish Schema C Structure Generator.
  https://github.com/DMTF/Redfish-Schema-C-Struct-Generator
  
  Copyright Notice:
  Copyright 2019-2021 Distributed Management Task Force, Inc. All rights reserved.
  License: BSD 3-Clause License. For full text see link: https://github.com/DMTF/Redfish-JSON-C-Struct-Converter/blob/master/LICENSE.md  

**/

#ifndef EFI_REDFISH_INTERP_METRICREPORTCOLLECTION_H__
#define EFI_REDFISH_INTERP_METRICREPORTCOLLECTION_H__

#include <Uefi.h>
#include <Protocol/RestJsonStructure.h>
#include "ConverterLib/edk2library/MetricReportCollection/Redfish_MetricReportCollection_CS.h"
//
// EFI structure of Redfish MetricReportCollection 
//
typedef struct _EFI_REDFISH_METRICREPORTCOLLECTION {
  EFI_REST_JSON_STRUCTURE_HEADER Header;
  EFI_REDFISH_METRICREPORTCOLLECTION_CS *MetricReportCollection;
} EFI_REDFISH_METRICREPORTCOLLECTION;

#endif
