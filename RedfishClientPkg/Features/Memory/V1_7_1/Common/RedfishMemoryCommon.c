/** @file
  Redfish feature driver implementation - common functions

  (C) Copyright 2020-2021 Hewlett Packard Enterprise Development LP<BR>

  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include "RedfishMemoryCommon.h"

CHAR8  MemoryEmptyJson[] = "{\"@odata.id\": \"\", \"@odata.type\": \"#Memory.v1_7_1.Memory\", \"Id\": \"\", \"Name\": \"\"}";

REDFISH_RESOURCE_COMMON_PRIVATE  *mRedfishResourcePrivate = NULL;

EFI_STATUS
RedfishConsumeResourceCommon (
  IN  REDFISH_RESOURCE_COMMON_PRIVATE  *Private,
  IN  CHAR8                            *MemoryJson
  )
{
  EFI_STATUS                    Status;
  EFI_REDFISH_MEMORY_V1_7_1     *Memory;
  EFI_REDFISH_MEMORY_V1_7_1_CS  *MemoryCs;
  EFI_STRING                    ConfigureLang;
  CHAR8                         *Arraykey;
  CHAR8                         *EtagInDb;

  if ((Private == NULL) || IS_EMPTY_STRING (MemoryJson)) {
    return EFI_INVALID_PARAMETER;
  }

  Memory        = NULL;
  MemoryCs      = NULL;
  ConfigureLang = NULL;
  Arraykey      = NULL;
  EtagInDb      = NULL;

  Status = Private->JsonStructProtocol->ToStructure (
                                          Private->JsonStructProtocol,
                                          NULL,
                                          MemoryJson,
                                          (EFI_REST_JSON_STRUCTURE_HEADER **)&Memory
                                          );
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a, ToStructure() failed: %r\n", __FUNCTION__, Status));
    return Status;
  }

  MemoryCs = Memory->Memory;

  //
  // Check ETAG to see if we need to consume it
  //
  EtagInDb = GetEtagWithUri (Private->Uri);
  if ((EtagInDb != NULL) && (MemoryCs->odata_etag != NULL)) {
    if (AsciiStrCmp (EtagInDb, MemoryCs->odata_etag) == 0) {
      //
      // No change
      //
      DEBUG ((DEBUG_INFO, "%a, ETAG: [%a] no change, ignore consume action\n", __FUNCTION__, EtagInDb));
      goto ON_RELEASE;
    }
  }

  //
  // Find array key from URI
  //
  Status = GetArraykeyFromUri (Private->Uri, &Arraykey);
  if (EFI_ERROR (Status)) {
    ASSERT (FALSE);
    return Status;
  }

  //
  // Handle ALLOCATIONALIGNMENTMIB
  //
  if (MemoryCs->AllocationAlignmentMiB != NULL) {
    //
    // Find corresponding redpath for collection resource.
    //
    ConfigureLang = GetConfigureLangByKey (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, "AllocationAlignmentMiB", Arraykey);
    if (ConfigureLang != NULL) {
      Status = ApplyFeatureSettingsNumericType (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, ConfigureLang, (UINTN)*MemoryCs->AllocationAlignmentMiB);
      if (EFI_ERROR (Status)) {
        DEBUG ((DEBUG_ERROR, "%a, apply setting for %s failed: %r\n", __FUNCTION__, ConfigureLang, Status));
      }

      FreePool (ConfigureLang);
    } else {
      DEBUG ((DEBUG_ERROR, "%a, can not get configure language for key: %a\n", __FUNCTION__, Arraykey));
    }
  }

  //
  // Handle ALLOCATIONINCREMENTMIB
  //
  if (MemoryCs->AllocationIncrementMiB != NULL) {
    //
    // Find corresponding redpath for collection resource.
    //
    ConfigureLang = GetConfigureLangByKey (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, "AllocationIncrementMiB", Arraykey);
    if (ConfigureLang != NULL) {
      Status = ApplyFeatureSettingsNumericType (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, ConfigureLang, (UINTN)*MemoryCs->AllocationIncrementMiB);
      if (EFI_ERROR (Status)) {
        DEBUG ((DEBUG_ERROR, "%a, apply setting for %s failed: %r\n", __FUNCTION__, ConfigureLang, Status));
      }

      FreePool (ConfigureLang);
    } else {
      DEBUG ((DEBUG_ERROR, "%a, can not get configure language for key: %a\n", __FUNCTION__, Arraykey));
    }
  }

  //
  // Handle BASEMODULETYPE
  //
  if (MemoryCs->BaseModuleType != NULL) {
    //
    // Find corresponding redpath for collection resource.
    //
    ConfigureLang = GetConfigureLangByKey (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, "BaseModuleType", Arraykey);
    if (ConfigureLang != NULL) {
      Status = ApplyFeatureSettingsStringType (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, ConfigureLang, MemoryCs->BaseModuleType);
      if (EFI_ERROR (Status)) {
        DEBUG ((DEBUG_ERROR, "%a, apply setting for %s failed: %r\n", __FUNCTION__, ConfigureLang, Status));
      }

      FreePool (ConfigureLang);
    } else {
      DEBUG ((DEBUG_ERROR, "%a, can not get configure language for key: %a\n", __FUNCTION__, Arraykey));
    }
  }

  //
  // Handle BUSWIDTHBITS
  //
  if (MemoryCs->BusWidthBits != NULL) {
    //
    // Find corresponding redpath for collection resource.
    //
    ConfigureLang = GetConfigureLangByKey (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, "BusWidthBits", Arraykey);
    if (ConfigureLang != NULL) {
      Status = ApplyFeatureSettingsNumericType (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, ConfigureLang, (UINTN)*MemoryCs->BusWidthBits);
      if (EFI_ERROR (Status)) {
        DEBUG ((DEBUG_ERROR, "%a, apply setting for %s failed: %r\n", __FUNCTION__, ConfigureLang, Status));
      }

      FreePool (ConfigureLang);
    } else {
      DEBUG ((DEBUG_ERROR, "%a, can not get configure language for key: %a\n", __FUNCTION__, Arraykey));
    }
  }

  //
  // Handle CACHESIZEMIB
  //
  if (MemoryCs->CacheSizeMiB != NULL) {
    //
    // Find corresponding redpath for collection resource.
    //
    ConfigureLang = GetConfigureLangByKey (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, "CacheSizeMiB", Arraykey);
    if (ConfigureLang != NULL) {
      Status = ApplyFeatureSettingsNumericType (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, ConfigureLang, (UINTN)*MemoryCs->CacheSizeMiB);
      if (EFI_ERROR (Status)) {
        DEBUG ((DEBUG_ERROR, "%a, apply setting for %s failed: %r\n", __FUNCTION__, ConfigureLang, Status));
      }

      FreePool (ConfigureLang);
    } else {
      DEBUG ((DEBUG_ERROR, "%a, can not get configure language for key: %a\n", __FUNCTION__, Arraykey));
    }
  }

  //
  // Handle CAPACITYMIB
  //
  if (MemoryCs->CapacityMiB != NULL) {
    //
    // Find corresponding redpath for collection resource.
    //
    ConfigureLang = GetConfigureLangByKey (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, "CapacityMiB", Arraykey);
    if (ConfigureLang != NULL) {
      Status = ApplyFeatureSettingsNumericType (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, ConfigureLang, (UINTN)*MemoryCs->CapacityMiB);
      if (EFI_ERROR (Status)) {
        DEBUG ((DEBUG_ERROR, "%a, apply setting for %s failed: %r\n", __FUNCTION__, ConfigureLang, Status));
      }

      FreePool (ConfigureLang);
    } else {
      DEBUG ((DEBUG_ERROR, "%a, can not get configure language for key: %a\n", __FUNCTION__, Arraykey));
    }
  }

  //
  // Handle CONFIGURATIONLOCKED
  //
  if (MemoryCs->ConfigurationLocked != NULL) {
    //
    // Find corresponding redpath for collection resource.
    //
    ConfigureLang = GetConfigureLangByKey (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, "ConfigurationLocked", Arraykey);
    if (ConfigureLang != NULL) {
      Status = ApplyFeatureSettingsBooleanType (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, ConfigureLang, (BOOLEAN)*MemoryCs->ConfigurationLocked);
      if (EFI_ERROR (Status)) {
        DEBUG ((DEBUG_ERROR, "%a, apply setting for %s failed: %r\n", __FUNCTION__, ConfigureLang, Status));
      }

      FreePool (ConfigureLang);
    } else {
      DEBUG ((DEBUG_ERROR, "%a, can not get configure language for key: %a\n", __FUNCTION__, Arraykey));
    }
  }

  //
  // Handle DATAWIDTHBITS
  //
  if (MemoryCs->DataWidthBits != NULL) {
    //
    // Find corresponding redpath for collection resource.
    //
    ConfigureLang = GetConfigureLangByKey (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, "DataWidthBits", Arraykey);
    if (ConfigureLang != NULL) {
      Status = ApplyFeatureSettingsNumericType (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, ConfigureLang, (UINTN)*MemoryCs->DataWidthBits);
      if (EFI_ERROR (Status)) {
        DEBUG ((DEBUG_ERROR, "%a, apply setting for %s failed: %r\n", __FUNCTION__, ConfigureLang, Status));
      }

      FreePool (ConfigureLang);
    } else {
      DEBUG ((DEBUG_ERROR, "%a, can not get configure language for key: %a\n", __FUNCTION__, Arraykey));
    }
  }

  //
  // Handle DEVICEID
  //
  if (MemoryCs->DeviceID != NULL) {
    //
    // Find corresponding redpath for collection resource.
    //
    ConfigureLang = GetConfigureLangByKey (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, "DeviceID", Arraykey);
    if (ConfigureLang != NULL) {
      Status = ApplyFeatureSettingsStringType (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, ConfigureLang, MemoryCs->DeviceID);
      if (EFI_ERROR (Status)) {
        DEBUG ((DEBUG_ERROR, "%a, apply setting for %s failed: %r\n", __FUNCTION__, ConfigureLang, Status));
      }

      FreePool (ConfigureLang);
    } else {
      DEBUG ((DEBUG_ERROR, "%a, can not get configure language for key: %a\n", __FUNCTION__, Arraykey));
    }
  }

  //
  // Handle DEVICELOCATOR
  //
  if (MemoryCs->DeviceLocator != NULL) {
    //
    // Find corresponding redpath for collection resource.
    //
    ConfigureLang = GetConfigureLangByKey (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, "DeviceLocator", Arraykey);
    if (ConfigureLang != NULL) {
      Status = ApplyFeatureSettingsStringType (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, ConfigureLang, MemoryCs->DeviceLocator);
      if (EFI_ERROR (Status)) {
        DEBUG ((DEBUG_ERROR, "%a, apply setting for %s failed: %r\n", __FUNCTION__, ConfigureLang, Status));
      }

      FreePool (ConfigureLang);
    } else {
      DEBUG ((DEBUG_ERROR, "%a, can not get configure language for key: %a\n", __FUNCTION__, Arraykey));
    }
  }

  //
  // Handle ERRORCORRECTION
  //
  if (MemoryCs->ErrorCorrection != NULL) {
    //
    // Find corresponding redpath for collection resource.
    //
    ConfigureLang = GetConfigureLangByKey (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, "ErrorCorrection", Arraykey);
    if (ConfigureLang != NULL) {
      Status = ApplyFeatureSettingsStringType (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, ConfigureLang, MemoryCs->ErrorCorrection);
      if (EFI_ERROR (Status)) {
        DEBUG ((DEBUG_ERROR, "%a, apply setting for %s failed: %r\n", __FUNCTION__, ConfigureLang, Status));
      }

      FreePool (ConfigureLang);
    } else {
      DEBUG ((DEBUG_ERROR, "%a, can not get configure language for key: %a\n", __FUNCTION__, Arraykey));
    }
  }

  //
  // Handle FIRMWAREAPIVERSION
  //
  if (MemoryCs->FirmwareApiVersion != NULL) {
    //
    // Find corresponding redpath for collection resource.
    //
    ConfigureLang = GetConfigureLangByKey (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, "FirmwareApiVersion", Arraykey);
    if (ConfigureLang != NULL) {
      Status = ApplyFeatureSettingsStringType (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, ConfigureLang, MemoryCs->FirmwareApiVersion);
      if (EFI_ERROR (Status)) {
        DEBUG ((DEBUG_ERROR, "%a, apply setting for %s failed: %r\n", __FUNCTION__, ConfigureLang, Status));
      }

      FreePool (ConfigureLang);
    } else {
      DEBUG ((DEBUG_ERROR, "%a, can not get configure language for key: %a\n", __FUNCTION__, Arraykey));
    }
  }

  //
  // Handle FIRMWAREREVISION
  //
  if (MemoryCs->FirmwareRevision != NULL) {
    //
    // Find corresponding redpath for collection resource.
    //
    ConfigureLang = GetConfigureLangByKey (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, "FirmwareRevision", Arraykey);
    if (ConfigureLang != NULL) {
      Status = ApplyFeatureSettingsStringType (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, ConfigureLang, MemoryCs->FirmwareRevision);
      if (EFI_ERROR (Status)) {
        DEBUG ((DEBUG_ERROR, "%a, apply setting for %s failed: %r\n", __FUNCTION__, ConfigureLang, Status));
      }

      FreePool (ConfigureLang);
    } else {
      DEBUG ((DEBUG_ERROR, "%a, can not get configure language for key: %a\n", __FUNCTION__, Arraykey));
    }
  }

  //
  // Handle ISRANKSPAREENABLED
  //
  if (MemoryCs->IsRankSpareEnabled != NULL) {
    //
    // Find corresponding redpath for collection resource.
    //
    ConfigureLang = GetConfigureLangByKey (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, "IsRankSpareEnabled", Arraykey);
    if (ConfigureLang != NULL) {
      Status = ApplyFeatureSettingsBooleanType (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, ConfigureLang, (BOOLEAN)*MemoryCs->IsRankSpareEnabled);
      if (EFI_ERROR (Status)) {
        DEBUG ((DEBUG_ERROR, "%a, apply setting for %s failed: %r\n", __FUNCTION__, ConfigureLang, Status));
      }

      FreePool (ConfigureLang);
    } else {
      DEBUG ((DEBUG_ERROR, "%a, can not get configure language for key: %a\n", __FUNCTION__, Arraykey));
    }
  }

  //
  // Handle ISSPAREDEVICEENABLED
  //
  if (MemoryCs->IsSpareDeviceEnabled != NULL) {
    //
    // Find corresponding redpath for collection resource.
    //
    ConfigureLang = GetConfigureLangByKey (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, "IsSpareDeviceEnabled", Arraykey);
    if (ConfigureLang != NULL) {
      Status = ApplyFeatureSettingsBooleanType (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, ConfigureLang, (BOOLEAN)*MemoryCs->IsSpareDeviceEnabled);
      if (EFI_ERROR (Status)) {
        DEBUG ((DEBUG_ERROR, "%a, apply setting for %s failed: %r\n", __FUNCTION__, ConfigureLang, Status));
      }

      FreePool (ConfigureLang);
    } else {
      DEBUG ((DEBUG_ERROR, "%a, can not get configure language for key: %a\n", __FUNCTION__, Arraykey));
    }
  }

  //
  // Handle LOGICALSIZEMIB
  //
  if (MemoryCs->LogicalSizeMiB != NULL) {
    //
    // Find corresponding redpath for collection resource.
    //
    ConfigureLang = GetConfigureLangByKey (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, "LogicalSizeMiB", Arraykey);
    if (ConfigureLang != NULL) {
      Status = ApplyFeatureSettingsNumericType (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, ConfigureLang, (UINTN)*MemoryCs->LogicalSizeMiB);
      if (EFI_ERROR (Status)) {
        DEBUG ((DEBUG_ERROR, "%a, apply setting for %s failed: %r\n", __FUNCTION__, ConfigureLang, Status));
      }

      FreePool (ConfigureLang);
    } else {
      DEBUG ((DEBUG_ERROR, "%a, can not get configure language for key: %a\n", __FUNCTION__, Arraykey));
    }
  }

  //
  // Handle MANUFACTURER
  //
  if (MemoryCs->Manufacturer != NULL) {
    //
    // Find corresponding redpath for collection resource.
    //
    ConfigureLang = GetConfigureLangByKey (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, "Manufacturer", Arraykey);
    if (ConfigureLang != NULL) {
      Status = ApplyFeatureSettingsStringType (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, ConfigureLang, MemoryCs->Manufacturer);
      if (EFI_ERROR (Status)) {
        DEBUG ((DEBUG_ERROR, "%a, apply setting for %s failed: %r\n", __FUNCTION__, ConfigureLang, Status));
      }

      FreePool (ConfigureLang);
    } else {
      DEBUG ((DEBUG_ERROR, "%a, can not get configure language for key: %a\n", __FUNCTION__, Arraykey));
    }
  }

  //
  // Handle MEMORYDEVICETYPE
  //
  if (MemoryCs->MemoryDeviceType != NULL) {
    //
    // Find corresponding redpath for collection resource.
    //
    ConfigureLang = GetConfigureLangByKey (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, "MemoryDeviceType", Arraykey);
    if (ConfigureLang != NULL) {
      Status = ApplyFeatureSettingsStringType (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, ConfigureLang, MemoryCs->MemoryDeviceType);
      if (EFI_ERROR (Status)) {
        DEBUG ((DEBUG_ERROR, "%a, apply setting for %s failed: %r\n", __FUNCTION__, ConfigureLang, Status));
      }

      FreePool (ConfigureLang);
    } else {
      DEBUG ((DEBUG_ERROR, "%a, can not get configure language for key: %a\n", __FUNCTION__, Arraykey));
    }
  }

  //
  // Handle MEMORYLOCATION
  //
  if (MemoryCs->MemoryLocation == NULL) {
    MemoryCs->MemoryLocation = AllocateZeroPool (sizeof (RedfishMemory_V1_7_1_MemoryLocation_CS));
    ASSERT (MemoryCs->MemoryLocation != NULL);
  }

  //
  // Handle MEMORYLOCATION->CHANNEL
  //
  if (MemoryCs->MemoryLocation->Channel != NULL) {
    //
    // Find corresponding redpath for collection resource.
    //
    ConfigureLang = GetConfigureLangByKey (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, "MemoryLocation/Channel", Arraykey);
    if (ConfigureLang != NULL) {
      Status = ApplyFeatureSettingsNumericType (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, ConfigureLang, (UINTN)*MemoryCs->MemoryLocation->Channel);
      if (EFI_ERROR (Status)) {
        DEBUG ((DEBUG_ERROR, "%a, apply setting for %s failed: %r\n", __FUNCTION__, ConfigureLang, Status));
      }

      FreePool (ConfigureLang);
    } else {
      DEBUG ((DEBUG_ERROR, "%a, can not get configure language for key: %a\n", __FUNCTION__, Arraykey));
    }
  }

  //
  // Handle MEMORYLOCATION->MEMORYCONTROLLER
  //
  if (MemoryCs->MemoryLocation->MemoryController != NULL) {
    //
    // Find corresponding redpath for collection resource.
    //
    ConfigureLang = GetConfigureLangByKey (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, "MemoryLocation/MemoryController", Arraykey);
    if (ConfigureLang != NULL) {
      Status = ApplyFeatureSettingsNumericType (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, ConfigureLang, (UINTN)*MemoryCs->MemoryLocation->MemoryController);
      if (EFI_ERROR (Status)) {
        DEBUG ((DEBUG_ERROR, "%a, apply setting for %s failed: %r\n", __FUNCTION__, ConfigureLang, Status));
      }

      FreePool (ConfigureLang);
    } else {
      DEBUG ((DEBUG_ERROR, "%a, can not get configure language for key: %a\n", __FUNCTION__, Arraykey));
    }
  }

  //
  // Handle MEMORYLOCATION->SLOT
  //
  if (MemoryCs->MemoryLocation->Slot != NULL) {
    //
    // Find corresponding redpath for collection resource.
    //
    ConfigureLang = GetConfigureLangByKey (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, "MemoryLocation/Slot", Arraykey);
    if (ConfigureLang != NULL) {
      Status = ApplyFeatureSettingsNumericType (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, ConfigureLang, (UINTN)*MemoryCs->MemoryLocation->Slot);
      if (EFI_ERROR (Status)) {
        DEBUG ((DEBUG_ERROR, "%a, apply setting for %s failed: %r\n", __FUNCTION__, ConfigureLang, Status));
      }

      FreePool (ConfigureLang);
    } else {
      DEBUG ((DEBUG_ERROR, "%a, can not get configure language for key: %a\n", __FUNCTION__, Arraykey));
    }
  }

  //
  // Handle MEMORYLOCATION->SOCKET
  //
  if (MemoryCs->MemoryLocation->Socket != NULL) {
    //
    // Find corresponding redpath for collection resource.
    //
    ConfigureLang = GetConfigureLangByKey (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, "MemoryLocation/Socket", Arraykey);
    if (ConfigureLang != NULL) {
      Status = ApplyFeatureSettingsNumericType (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, ConfigureLang, (UINTN)*MemoryCs->MemoryLocation->Socket);
      if (EFI_ERROR (Status)) {
        DEBUG ((DEBUG_ERROR, "%a, apply setting for %s failed: %r\n", __FUNCTION__, ConfigureLang, Status));
      }

      FreePool (ConfigureLang);
    } else {
      DEBUG ((DEBUG_ERROR, "%a, can not get configure language for key: %a\n", __FUNCTION__, Arraykey));
    }
  }

  //
  // Handle MEMORYSUBSYSTEMCONTROLLERMANUFACTURERID
  //
  if (MemoryCs->MemorySubsystemControllerManufacturerID != NULL) {
    //
    // Find corresponding redpath for collection resource.
    //
    ConfigureLang = GetConfigureLangByKey (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, "MemorySubsystemControllerManufacturerID", Arraykey);
    if (ConfigureLang != NULL) {
      Status = ApplyFeatureSettingsStringType (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, ConfigureLang, MemoryCs->MemorySubsystemControllerManufacturerID);
      if (EFI_ERROR (Status)) {
        DEBUG ((DEBUG_ERROR, "%a, apply setting for %s failed: %r\n", __FUNCTION__, ConfigureLang, Status));
      }

      FreePool (ConfigureLang);
    } else {
      DEBUG ((DEBUG_ERROR, "%a, can not get configure language for key: %a\n", __FUNCTION__, Arraykey));
    }
  }

  //
  // Handle MEMORYSUBSYSTEMCONTROLLERPRODUCTID
  //
  if (MemoryCs->MemorySubsystemControllerProductID != NULL) {
    //
    // Find corresponding redpath for collection resource.
    //
    ConfigureLang = GetConfigureLangByKey (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, "MemorySubsystemControllerProductID", Arraykey);
    if (ConfigureLang != NULL) {
      Status = ApplyFeatureSettingsStringType (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, ConfigureLang, MemoryCs->MemorySubsystemControllerProductID);
      if (EFI_ERROR (Status)) {
        DEBUG ((DEBUG_ERROR, "%a, apply setting for %s failed: %r\n", __FUNCTION__, ConfigureLang, Status));
      }

      FreePool (ConfigureLang);
    } else {
      DEBUG ((DEBUG_ERROR, "%a, can not get configure language for key: %a\n", __FUNCTION__, Arraykey));
    }
  }

  //
  // Handle MEMORYTYPE
  //
  if (MemoryCs->MemoryType != NULL) {
    //
    // Find corresponding redpath for collection resource.
    //
    ConfigureLang = GetConfigureLangByKey (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, "MemoryType", Arraykey);
    if (ConfigureLang != NULL) {
      Status = ApplyFeatureSettingsStringType (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, ConfigureLang, MemoryCs->MemoryType);
      if (EFI_ERROR (Status)) {
        DEBUG ((DEBUG_ERROR, "%a, apply setting for %s failed: %r\n", __FUNCTION__, ConfigureLang, Status));
      }

      FreePool (ConfigureLang);
    } else {
      DEBUG ((DEBUG_ERROR, "%a, can not get configure language for key: %a\n", __FUNCTION__, Arraykey));
    }
  }

  //
  // Handle MODULEMANUFACTURERID
  //
  if (MemoryCs->ModuleManufacturerID != NULL) {
    //
    // Find corresponding redpath for collection resource.
    //
    ConfigureLang = GetConfigureLangByKey (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, "ModuleManufacturerID", Arraykey);
    if (ConfigureLang != NULL) {
      Status = ApplyFeatureSettingsStringType (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, ConfigureLang, MemoryCs->ModuleManufacturerID);
      if (EFI_ERROR (Status)) {
        DEBUG ((DEBUG_ERROR, "%a, apply setting for %s failed: %r\n", __FUNCTION__, ConfigureLang, Status));
      }

      FreePool (ConfigureLang);
    } else {
      DEBUG ((DEBUG_ERROR, "%a, can not get configure language for key: %a\n", __FUNCTION__, Arraykey));
    }
  }

  //
  // Handle MODULEPRODUCTID
  //
  if (MemoryCs->ModuleProductID != NULL) {
    //
    // Find corresponding redpath for collection resource.
    //
    ConfigureLang = GetConfigureLangByKey (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, "ModuleProductID", Arraykey);
    if (ConfigureLang != NULL) {
      Status = ApplyFeatureSettingsStringType (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, ConfigureLang, MemoryCs->ModuleProductID);
      if (EFI_ERROR (Status)) {
        DEBUG ((DEBUG_ERROR, "%a, apply setting for %s failed: %r\n", __FUNCTION__, ConfigureLang, Status));
      }

      FreePool (ConfigureLang);
    } else {
      DEBUG ((DEBUG_ERROR, "%a, can not get configure language for key: %a\n", __FUNCTION__, Arraykey));
    }
  }

  //
  // Handle NONVOLATILESIZEMIB
  //
  if (MemoryCs->NonVolatileSizeMiB != NULL) {
    //
    // Find corresponding redpath for collection resource.
    //
    ConfigureLang = GetConfigureLangByKey (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, "NonVolatileSizeMiB", Arraykey);
    if (ConfigureLang != NULL) {
      Status = ApplyFeatureSettingsNumericType (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, ConfigureLang, (UINTN)*MemoryCs->NonVolatileSizeMiB);
      if (EFI_ERROR (Status)) {
        DEBUG ((DEBUG_ERROR, "%a, apply setting for %s failed: %r\n", __FUNCTION__, ConfigureLang, Status));
      }

      FreePool (ConfigureLang);
    } else {
      DEBUG ((DEBUG_ERROR, "%a, can not get configure language for key: %a\n", __FUNCTION__, Arraykey));
    }
  }

  //
  // Handle OPERATINGSPEEDMHZ
  //
  if (MemoryCs->OperatingSpeedMhz != NULL) {
    //
    // Find corresponding redpath for collection resource.
    //
    ConfigureLang = GetConfigureLangByKey (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, "OperatingSpeedMhz", Arraykey);
    if (ConfigureLang != NULL) {
      Status = ApplyFeatureSettingsNumericType (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, ConfigureLang, (UINTN)*MemoryCs->OperatingSpeedMhz);
      if (EFI_ERROR (Status)) {
        DEBUG ((DEBUG_ERROR, "%a, apply setting for %s failed: %r\n", __FUNCTION__, ConfigureLang, Status));
      }

      FreePool (ConfigureLang);
    } else {
      DEBUG ((DEBUG_ERROR, "%a, can not get configure language for key: %a\n", __FUNCTION__, Arraykey));
    }
  }

  //
  // Handle PARTNUMBER
  //
  if (MemoryCs->PartNumber != NULL) {
    //
    // Find corresponding redpath for collection resource.
    //
    ConfigureLang = GetConfigureLangByKey (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, "PartNumber", Arraykey);
    if (ConfigureLang != NULL) {
      Status = ApplyFeatureSettingsStringType (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, ConfigureLang, MemoryCs->PartNumber);
      if (EFI_ERROR (Status)) {
        DEBUG ((DEBUG_ERROR, "%a, apply setting for %s failed: %r\n", __FUNCTION__, ConfigureLang, Status));
      }

      FreePool (ConfigureLang);
    } else {
      DEBUG ((DEBUG_ERROR, "%a, can not get configure language for key: %a\n", __FUNCTION__, Arraykey));
    }
  }

  //
  // Handle PERSISTENTREGIONNUMBERLIMIT
  //
  if (MemoryCs->PersistentRegionNumberLimit != NULL) {
    //
    // Find corresponding redpath for collection resource.
    //
    ConfigureLang = GetConfigureLangByKey (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, "PersistentRegionNumberLimit", Arraykey);
    if (ConfigureLang != NULL) {
      Status = ApplyFeatureSettingsNumericType (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, ConfigureLang, (UINTN)*MemoryCs->PersistentRegionNumberLimit);
      if (EFI_ERROR (Status)) {
        DEBUG ((DEBUG_ERROR, "%a, apply setting for %s failed: %r\n", __FUNCTION__, ConfigureLang, Status));
      }

      FreePool (ConfigureLang);
    } else {
      DEBUG ((DEBUG_ERROR, "%a, can not get configure language for key: %a\n", __FUNCTION__, Arraykey));
    }
  }

  //
  // Handle PERSISTENTREGIONSIZELIMITMIB
  //
  if (MemoryCs->PersistentRegionSizeLimitMiB != NULL) {
    //
    // Find corresponding redpath for collection resource.
    //
    ConfigureLang = GetConfigureLangByKey (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, "PersistentRegionSizeLimitMiB", Arraykey);
    if (ConfigureLang != NULL) {
      Status = ApplyFeatureSettingsNumericType (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, ConfigureLang, (UINTN)*MemoryCs->PersistentRegionSizeLimitMiB);
      if (EFI_ERROR (Status)) {
        DEBUG ((DEBUG_ERROR, "%a, apply setting for %s failed: %r\n", __FUNCTION__, ConfigureLang, Status));
      }

      FreePool (ConfigureLang);
    } else {
      DEBUG ((DEBUG_ERROR, "%a, can not get configure language for key: %a\n", __FUNCTION__, Arraykey));
    }
  }

  //
  // Handle PERSISTENTREGIONSIZEMAXMIB
  //
  if (MemoryCs->PersistentRegionSizeMaxMiB != NULL) {
    //
    // Find corresponding redpath for collection resource.
    //
    ConfigureLang = GetConfigureLangByKey (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, "PersistentRegionSizeMaxMiB", Arraykey);
    if (ConfigureLang != NULL) {
      Status = ApplyFeatureSettingsNumericType (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, ConfigureLang, (UINTN)*MemoryCs->PersistentRegionSizeMaxMiB);
      if (EFI_ERROR (Status)) {
        DEBUG ((DEBUG_ERROR, "%a, apply setting for %s failed: %r\n", __FUNCTION__, ConfigureLang, Status));
      }

      FreePool (ConfigureLang);
    } else {
      DEBUG ((DEBUG_ERROR, "%a, can not get configure language for key: %a\n", __FUNCTION__, Arraykey));
    }
  }

  //
  // Handle POWERMANAGEMENTPOLICY
  //
  if (MemoryCs->PowerManagementPolicy == NULL) {
    MemoryCs->PowerManagementPolicy = AllocateZeroPool (sizeof (RedfishMemory_V1_7_1_PowerManagementPolicy_CS));
    ASSERT (MemoryCs->PowerManagementPolicy != NULL);
  }

  //
  // Handle POWERMANAGEMENTPOLICY->AVERAGEPOWERBUDGETMILLIWATTS
  //
  if (MemoryCs->PowerManagementPolicy->AveragePowerBudgetMilliWatts != NULL) {
    //
    // Find corresponding redpath for collection resource.
    //
    ConfigureLang = GetConfigureLangByKey (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, "PowerManagementPolicy/AveragePowerBudgetMilliWatts", Arraykey);
    if (ConfigureLang != NULL) {
      Status = ApplyFeatureSettingsNumericType (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, ConfigureLang, (UINTN)*MemoryCs->PowerManagementPolicy->AveragePowerBudgetMilliWatts);
      if (EFI_ERROR (Status)) {
        DEBUG ((DEBUG_ERROR, "%a, apply setting for %s failed: %r\n", __FUNCTION__, ConfigureLang, Status));
      }

      FreePool (ConfigureLang);
    } else {
      DEBUG ((DEBUG_ERROR, "%a, can not get configure language for key: %a\n", __FUNCTION__, Arraykey));
    }
  }

  //
  // Handle POWERMANAGEMENTPOLICY->MAXTDPMILLIWATTS
  //
  if (MemoryCs->PowerManagementPolicy->MaxTDPMilliWatts != NULL) {
    //
    // Find corresponding redpath for collection resource.
    //
    ConfigureLang = GetConfigureLangByKey (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, "PowerManagementPolicy/MaxTDPMilliWatts", Arraykey);
    if (ConfigureLang != NULL) {
      Status = ApplyFeatureSettingsNumericType (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, ConfigureLang, (UINTN)*MemoryCs->PowerManagementPolicy->MaxTDPMilliWatts);
      if (EFI_ERROR (Status)) {
        DEBUG ((DEBUG_ERROR, "%a, apply setting for %s failed: %r\n", __FUNCTION__, ConfigureLang, Status));
      }

      FreePool (ConfigureLang);
    } else {
      DEBUG ((DEBUG_ERROR, "%a, can not get configure language for key: %a\n", __FUNCTION__, Arraykey));
    }
  }

  //
  // Handle POWERMANAGEMENTPOLICY->PEAKPOWERBUDGETMILLIWATTS
  //
  if (MemoryCs->PowerManagementPolicy->PeakPowerBudgetMilliWatts != NULL) {
    //
    // Find corresponding redpath for collection resource.
    //
    ConfigureLang = GetConfigureLangByKey (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, "PowerManagementPolicy/PeakPowerBudgetMilliWatts", Arraykey);
    if (ConfigureLang != NULL) {
      Status = ApplyFeatureSettingsNumericType (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, ConfigureLang, (UINTN)*MemoryCs->PowerManagementPolicy->PeakPowerBudgetMilliWatts);
      if (EFI_ERROR (Status)) {
        DEBUG ((DEBUG_ERROR, "%a, apply setting for %s failed: %r\n", __FUNCTION__, ConfigureLang, Status));
      }

      FreePool (ConfigureLang);
    } else {
      DEBUG ((DEBUG_ERROR, "%a, can not get configure language for key: %a\n", __FUNCTION__, Arraykey));
    }
  }

  //
  // Handle POWERMANAGEMENTPOLICY->POLICYENABLED
  //
  if (MemoryCs->PowerManagementPolicy->PolicyEnabled != NULL) {
    //
    // Find corresponding redpath for collection resource.
    //
    ConfigureLang = GetConfigureLangByKey (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, "PowerManagementPolicy/PolicyEnabled", Arraykey);
    if (ConfigureLang != NULL) {
      Status = ApplyFeatureSettingsBooleanType (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, ConfigureLang, (BOOLEAN)*MemoryCs->PowerManagementPolicy->PolicyEnabled);
      if (EFI_ERROR (Status)) {
        DEBUG ((DEBUG_ERROR, "%a, apply setting for %s failed: %r\n", __FUNCTION__, ConfigureLang, Status));
      }

      FreePool (ConfigureLang);
    } else {
      DEBUG ((DEBUG_ERROR, "%a, can not get configure language for key: %a\n", __FUNCTION__, Arraykey));
    }
  }

  //
  // Handle RANKCOUNT
  //
  if (MemoryCs->RankCount != NULL) {
    //
    // Find corresponding redpath for collection resource.
    //
    ConfigureLang = GetConfigureLangByKey (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, "RankCount", Arraykey);
    if (ConfigureLang != NULL) {
      Status = ApplyFeatureSettingsNumericType (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, ConfigureLang, (UINTN)*MemoryCs->RankCount);
      if (EFI_ERROR (Status)) {
        DEBUG ((DEBUG_ERROR, "%a, apply setting for %s failed: %r\n", __FUNCTION__, ConfigureLang, Status));
      }

      FreePool (ConfigureLang);
    } else {
      DEBUG ((DEBUG_ERROR, "%a, can not get configure language for key: %a\n", __FUNCTION__, Arraykey));
    }
  }

  //
  // Handle SECURITYCAPABILITIES
  //
  if (MemoryCs->SecurityCapabilities == NULL) {
    MemoryCs->SecurityCapabilities = AllocateZeroPool (sizeof (RedfishMemory_V1_7_1_SecurityCapabilities_CS));
    ASSERT (MemoryCs->SecurityCapabilities != NULL);
  }

  //
  // Handle SECURITYCAPABILITIES->CONFIGURATIONLOCKCAPABLE
  //
  if (MemoryCs->SecurityCapabilities->ConfigurationLockCapable != NULL) {
    //
    // Find corresponding redpath for collection resource.
    //
    ConfigureLang = GetConfigureLangByKey (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, "SecurityCapabilities/ConfigurationLockCapable", Arraykey);
    if (ConfigureLang != NULL) {
      Status = ApplyFeatureSettingsBooleanType (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, ConfigureLang, (BOOLEAN)*MemoryCs->SecurityCapabilities->ConfigurationLockCapable);
      if (EFI_ERROR (Status)) {
        DEBUG ((DEBUG_ERROR, "%a, apply setting for %s failed: %r\n", __FUNCTION__, ConfigureLang, Status));
      }

      FreePool (ConfigureLang);
    } else {
      DEBUG ((DEBUG_ERROR, "%a, can not get configure language for key: %a\n", __FUNCTION__, Arraykey));
    }
  }

  //
  // Handle SECURITYCAPABILITIES->DATALOCKCAPABLE
  //
  if (MemoryCs->SecurityCapabilities->DataLockCapable != NULL) {
    //
    // Find corresponding redpath for collection resource.
    //
    ConfigureLang = GetConfigureLangByKey (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, "SecurityCapabilities/DataLockCapable", Arraykey);
    if (ConfigureLang != NULL) {
      Status = ApplyFeatureSettingsBooleanType (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, ConfigureLang, (BOOLEAN)*MemoryCs->SecurityCapabilities->DataLockCapable);
      if (EFI_ERROR (Status)) {
        DEBUG ((DEBUG_ERROR, "%a, apply setting for %s failed: %r\n", __FUNCTION__, ConfigureLang, Status));
      }

      FreePool (ConfigureLang);
    } else {
      DEBUG ((DEBUG_ERROR, "%a, can not get configure language for key: %a\n", __FUNCTION__, Arraykey));
    }
  }

  //
  // Handle SECURITYCAPABILITIES->MAXPASSPHRASECOUNT
  //
  if (MemoryCs->SecurityCapabilities->MaxPassphraseCount != NULL) {
    //
    // Find corresponding redpath for collection resource.
    //
    ConfigureLang = GetConfigureLangByKey (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, "SecurityCapabilities/MaxPassphraseCount", Arraykey);
    if (ConfigureLang != NULL) {
      Status = ApplyFeatureSettingsNumericType (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, ConfigureLang, (UINTN)*MemoryCs->SecurityCapabilities->MaxPassphraseCount);
      if (EFI_ERROR (Status)) {
        DEBUG ((DEBUG_ERROR, "%a, apply setting for %s failed: %r\n", __FUNCTION__, ConfigureLang, Status));
      }

      FreePool (ConfigureLang);
    } else {
      DEBUG ((DEBUG_ERROR, "%a, can not get configure language for key: %a\n", __FUNCTION__, Arraykey));
    }
  }

  //
  // Handle SECURITYCAPABILITIES->PASSPHRASECAPABLE
  //
  if (MemoryCs->SecurityCapabilities->PassphraseCapable != NULL) {
    //
    // Find corresponding redpath for collection resource.
    //
    ConfigureLang = GetConfigureLangByKey (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, "SecurityCapabilities/PassphraseCapable", Arraykey);
    if (ConfigureLang != NULL) {
      Status = ApplyFeatureSettingsBooleanType (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, ConfigureLang, (BOOLEAN)*MemoryCs->SecurityCapabilities->PassphraseCapable);
      if (EFI_ERROR (Status)) {
        DEBUG ((DEBUG_ERROR, "%a, apply setting for %s failed: %r\n", __FUNCTION__, ConfigureLang, Status));
      }

      FreePool (ConfigureLang);
    } else {
      DEBUG ((DEBUG_ERROR, "%a, can not get configure language for key: %a\n", __FUNCTION__, Arraykey));
    }
  }

  //
  // Handle SECURITYCAPABILITIES->PASSPHRASELOCKLIMIT
  //
  if (MemoryCs->SecurityCapabilities->PassphraseLockLimit != NULL) {
    //
    // Find corresponding redpath for collection resource.
    //
    ConfigureLang = GetConfigureLangByKey (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, "SecurityCapabilities/PassphraseLockLimit", Arraykey);
    if (ConfigureLang != NULL) {
      Status = ApplyFeatureSettingsNumericType (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, ConfigureLang, (UINTN)*MemoryCs->SecurityCapabilities->PassphraseLockLimit);
      if (EFI_ERROR (Status)) {
        DEBUG ((DEBUG_ERROR, "%a, apply setting for %s failed: %r\n", __FUNCTION__, ConfigureLang, Status));
      }

      FreePool (ConfigureLang);
    } else {
      DEBUG ((DEBUG_ERROR, "%a, can not get configure language for key: %a\n", __FUNCTION__, Arraykey));
    }
  }

  //
  // Handle SECURITYSTATE
  //
  if (MemoryCs->SecurityState != NULL) {
    //
    // Find corresponding redpath for collection resource.
    //
    ConfigureLang = GetConfigureLangByKey (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, "SecurityState", Arraykey);
    if (ConfigureLang != NULL) {
      Status = ApplyFeatureSettingsStringType (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, ConfigureLang, MemoryCs->SecurityState);
      if (EFI_ERROR (Status)) {
        DEBUG ((DEBUG_ERROR, "%a, apply setting for %s failed: %r\n", __FUNCTION__, ConfigureLang, Status));
      }

      FreePool (ConfigureLang);
    } else {
      DEBUG ((DEBUG_ERROR, "%a, can not get configure language for key: %a\n", __FUNCTION__, Arraykey));
    }
  }

  //
  // Handle SERIALNUMBER
  //
  if (MemoryCs->SerialNumber != NULL) {
    //
    // Find corresponding redpath for collection resource.
    //
    ConfigureLang = GetConfigureLangByKey (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, "SerialNumber", Arraykey);
    if (ConfigureLang != NULL) {
      Status = ApplyFeatureSettingsStringType (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, ConfigureLang, MemoryCs->SerialNumber);
      if (EFI_ERROR (Status)) {
        DEBUG ((DEBUG_ERROR, "%a, apply setting for %s failed: %r\n", __FUNCTION__, ConfigureLang, Status));
      }

      FreePool (ConfigureLang);
    } else {
      DEBUG ((DEBUG_ERROR, "%a, can not get configure language for key: %a\n", __FUNCTION__, Arraykey));
    }
  }

  //
  // Handle SPAREDEVICECOUNT
  //
  if (MemoryCs->SpareDeviceCount != NULL) {
    //
    // Find corresponding redpath for collection resource.
    //
    ConfigureLang = GetConfigureLangByKey (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, "SpareDeviceCount", Arraykey);
    if (ConfigureLang != NULL) {
      Status = ApplyFeatureSettingsNumericType (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, ConfigureLang, (UINTN)*MemoryCs->SpareDeviceCount);
      if (EFI_ERROR (Status)) {
        DEBUG ((DEBUG_ERROR, "%a, apply setting for %s failed: %r\n", __FUNCTION__, ConfigureLang, Status));
      }

      FreePool (ConfigureLang);
    } else {
      DEBUG ((DEBUG_ERROR, "%a, can not get configure language for key: %a\n", __FUNCTION__, Arraykey));
    }
  }

  //
  // Handle SUBSYSTEMDEVICEID
  //
  if (MemoryCs->SubsystemDeviceID != NULL) {
    //
    // Find corresponding redpath for collection resource.
    //
    ConfigureLang = GetConfigureLangByKey (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, "SubsystemDeviceID", Arraykey);
    if (ConfigureLang != NULL) {
      Status = ApplyFeatureSettingsStringType (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, ConfigureLang, MemoryCs->SubsystemDeviceID);
      if (EFI_ERROR (Status)) {
        DEBUG ((DEBUG_ERROR, "%a, apply setting for %s failed: %r\n", __FUNCTION__, ConfigureLang, Status));
      }

      FreePool (ConfigureLang);
    } else {
      DEBUG ((DEBUG_ERROR, "%a, can not get configure language for key: %a\n", __FUNCTION__, Arraykey));
    }
  }

  //
  // Handle SUBSYSTEMVENDORID
  //
  if (MemoryCs->SubsystemVendorID != NULL) {
    //
    // Find corresponding redpath for collection resource.
    //
    ConfigureLang = GetConfigureLangByKey (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, "SubsystemVendorID", Arraykey);
    if (ConfigureLang != NULL) {
      Status = ApplyFeatureSettingsStringType (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, ConfigureLang, MemoryCs->SubsystemVendorID);
      if (EFI_ERROR (Status)) {
        DEBUG ((DEBUG_ERROR, "%a, apply setting for %s failed: %r\n", __FUNCTION__, ConfigureLang, Status));
      }

      FreePool (ConfigureLang);
    } else {
      DEBUG ((DEBUG_ERROR, "%a, can not get configure language for key: %a\n", __FUNCTION__, Arraykey));
    }
  }

  //
  // Handle VENDORID
  //
  if (MemoryCs->VendorID != NULL) {
    //
    // Find corresponding redpath for collection resource.
    //
    ConfigureLang = GetConfigureLangByKey (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, "VendorID", Arraykey);
    if (ConfigureLang != NULL) {
      Status = ApplyFeatureSettingsStringType (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, ConfigureLang, MemoryCs->VendorID);
      if (EFI_ERROR (Status)) {
        DEBUG ((DEBUG_ERROR, "%a, apply setting for %s failed: %r\n", __FUNCTION__, ConfigureLang, Status));
      }

      FreePool (ConfigureLang);
    } else {
      DEBUG ((DEBUG_ERROR, "%a, can not get configure language for key: %a\n", __FUNCTION__, Arraykey));
    }
  }

  //
  // Handle VOLATILEREGIONNUMBERLIMIT
  //
  if (MemoryCs->VolatileRegionNumberLimit != NULL) {
    //
    // Find corresponding redpath for collection resource.
    //
    ConfigureLang = GetConfigureLangByKey (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, "VolatileRegionNumberLimit", Arraykey);
    if (ConfigureLang != NULL) {
      Status = ApplyFeatureSettingsNumericType (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, ConfigureLang, (UINTN)*MemoryCs->VolatileRegionNumberLimit);
      if (EFI_ERROR (Status)) {
        DEBUG ((DEBUG_ERROR, "%a, apply setting for %s failed: %r\n", __FUNCTION__, ConfigureLang, Status));
      }

      FreePool (ConfigureLang);
    } else {
      DEBUG ((DEBUG_ERROR, "%a, can not get configure language for key: %a\n", __FUNCTION__, Arraykey));
    }
  }

  //
  // Handle VOLATILEREGIONSIZELIMITMIB
  //
  if (MemoryCs->VolatileRegionSizeLimitMiB != NULL) {
    //
    // Find corresponding redpath for collection resource.
    //
    ConfigureLang = GetConfigureLangByKey (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, "VolatileRegionSizeLimitMiB", Arraykey);
    if (ConfigureLang != NULL) {
      Status = ApplyFeatureSettingsNumericType (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, ConfigureLang, (UINTN)*MemoryCs->VolatileRegionSizeLimitMiB);
      if (EFI_ERROR (Status)) {
        DEBUG ((DEBUG_ERROR, "%a, apply setting for %s failed: %r\n", __FUNCTION__, ConfigureLang, Status));
      }

      FreePool (ConfigureLang);
    } else {
      DEBUG ((DEBUG_ERROR, "%a, can not get configure language for key: %a\n", __FUNCTION__, Arraykey));
    }
  }

  //
  // Handle VOLATILEREGIONSIZEMAXMIB
  //
  if (MemoryCs->VolatileRegionSizeMaxMiB != NULL) {
    //
    // Find corresponding redpath for collection resource.
    //
    ConfigureLang = GetConfigureLangByKey (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, "VolatileRegionSizeMaxMiB", Arraykey);
    if (ConfigureLang != NULL) {
      Status = ApplyFeatureSettingsNumericType (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, ConfigureLang, (UINTN)*MemoryCs->VolatileRegionSizeMaxMiB);
      if (EFI_ERROR (Status)) {
        DEBUG ((DEBUG_ERROR, "%a, apply setting for %s failed: %r\n", __FUNCTION__, ConfigureLang, Status));
      }

      FreePool (ConfigureLang);
    } else {
      DEBUG ((DEBUG_ERROR, "%a, can not get configure language for key: %a\n", __FUNCTION__, Arraykey));
    }
  }

  //
  // Handle VOLATILESIZEMIB
  //
  if (MemoryCs->VolatileSizeMiB != NULL) {
    //
    // Find corresponding redpath for collection resource.
    //
    ConfigureLang = GetConfigureLangByKey (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, "VolatileSizeMiB", Arraykey);
    if (ConfigureLang != NULL) {
      Status = ApplyFeatureSettingsNumericType (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, ConfigureLang, (UINTN)*MemoryCs->VolatileSizeMiB);
      if (EFI_ERROR (Status)) {
        DEBUG ((DEBUG_ERROR, "%a, apply setting for %s failed: %r\n", __FUNCTION__, ConfigureLang, Status));
      }

      FreePool (ConfigureLang);
    } else {
      DEBUG ((DEBUG_ERROR, "%a, can not get configure language for key: %a\n", __FUNCTION__, Arraykey));
    }
  }

  //
ON_RELEASE:

  //
  // Release resource.
  //
  if (EtagInDb != NULL) {
    FreePool (EtagInDb);
  }

  if (Arraykey != NULL) {
    FreePool (Arraykey);
  }

  Private->JsonStructProtocol->DestoryStructure (
                                 Private->JsonStructProtocol,
                                 (EFI_REST_JSON_STRUCTURE_HEADER *)Memory
                                 );

  return EFI_SUCCESS;
}

EFI_STATUS
ProvisioningMemoryProperties (
  IN  EFI_REST_JSON_STRUCTURE_PROTOCOL *JsonStructProtocol,
  IN  CHAR8 *IputJson,
  IN  CHAR8 *ResourceId, OPTIONAL
  IN  EFI_STRING                        ConfigureLang,
  IN  BOOLEAN                           ProvisionMode,
  OUT CHAR8                             **ResultJson
  )
{
  EFI_REDFISH_MEMORY_V1_7_1     *Memory;
  EFI_REDFISH_MEMORY_V1_7_1_CS  *MemoryCs;
  EFI_STATUS                    Status;
  INT64                         *NumericValue;
  INT32                         *IntegerValue;
  BOOLEAN                       *BooleanValue;
  CHAR8                         *AsciiStringValue;
  BOOLEAN                       PropertyChanged;
  BOOLEAN                       UnusedProperty;

  if ((JsonStructProtocol == NULL) || (ResultJson == NULL) || IS_EMPTY_STRING (IputJson) || IS_EMPTY_STRING (ConfigureLang)) {
    return EFI_INVALID_PARAMETER;
  }

  DEBUG ((REDFISH_DEBUG_TRACE, "%a provision for %s with: %s\n", __FUNCTION__, ConfigureLang, (ProvisionMode ? L"Provision all resource" : L"Provision existing resource")));

  *ResultJson     = NULL;
  PropertyChanged = FALSE;
  UnusedProperty  = TRUE;

  Memory = NULL;
  Status = JsonStructProtocol->ToStructure (
                                 JsonStructProtocol,
                                 NULL,
                                 IputJson,
                                 (EFI_REST_JSON_STRUCTURE_HEADER **)&Memory
                                 );
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a, ToStructure failure: %r\n", __FUNCTION__, Status));
    return Status;
  }

  MemoryCs = Memory->Memory;

  //
  // ID
  //
  if ((MemoryCs->Id == NULL) && !IS_EMPTY_STRING (ResourceId)) {
    MemoryCs->Id = AllocateCopyPool (AsciiStrSize (ResourceId), ResourceId);
  }

  //
  // Handle ALLOCATIONALIGNMENTMIB
  //
  if (PropertyChecker (MemoryCs->AllocationAlignmentMiB, ProvisionMode)) {
    NumericValue = GetPropertyNumericValue (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, L"AllocationAlignmentMiB", ConfigureLang);
    if (NumericValue != NULL) {
      if (ProvisionMode || (*MemoryCs->AllocationAlignmentMiB != *NumericValue)) {
        MemoryCs->AllocationAlignmentMiB = NumericValue;
        PropertyChanged                  = TRUE;
      }
    }
  }

  //
  // Handle ALLOCATIONINCREMENTMIB
  //
  if (PropertyChecker (MemoryCs->AllocationIncrementMiB, ProvisionMode)) {
    NumericValue = GetPropertyNumericValue (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, L"AllocationIncrementMiB", ConfigureLang);
    if (NumericValue != NULL) {
      if (ProvisionMode || (*MemoryCs->AllocationIncrementMiB != *NumericValue)) {
        MemoryCs->AllocationIncrementMiB = NumericValue;
        PropertyChanged                  = TRUE;
      }
    }
  }

  //
  // Handle BASEMODULETYPE
  //
  if (PropertyChecker (MemoryCs->BaseModuleType, ProvisionMode)) {
    AsciiStringValue = GetPropertyStringValue (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, L"BaseModuleType", ConfigureLang);
    if (AsciiStringValue != NULL) {
      if (ProvisionMode || (AsciiStrCmp (MemoryCs->BaseModuleType, AsciiStringValue) != 0)) {
        MemoryCs->BaseModuleType = AsciiStringValue;
        PropertyChanged          = TRUE;
      }
    }
  }

  //
  // Handle BUSWIDTHBITS
  //
  if (PropertyChecker (MemoryCs->BusWidthBits, ProvisionMode)) {
    NumericValue = GetPropertyNumericValue (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, L"BusWidthBits", ConfigureLang);
    if (NumericValue != NULL) {
      if (ProvisionMode || (*MemoryCs->BusWidthBits != *NumericValue)) {
        MemoryCs->BusWidthBits = NumericValue;
        PropertyChanged        = TRUE;
      }
    }
  }

  //
  // Handle CACHESIZEMIB
  //
  if (PropertyChecker (MemoryCs->CacheSizeMiB, ProvisionMode)) {
    NumericValue = GetPropertyNumericValue (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, L"CacheSizeMiB", ConfigureLang);
    if (NumericValue != NULL) {
      if (ProvisionMode || (*MemoryCs->CacheSizeMiB != *NumericValue)) {
        MemoryCs->CacheSizeMiB = NumericValue;
        PropertyChanged        = TRUE;
      }
    }
  }

  //
  // Handle CAPACITYMIB
  //
  if (PropertyChecker (MemoryCs->CapacityMiB, ProvisionMode)) {
    NumericValue = GetPropertyNumericValue (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, L"CapacityMiB", ConfigureLang);
    if (NumericValue != NULL) {
      if (ProvisionMode || (*MemoryCs->CapacityMiB != *NumericValue)) {
        MemoryCs->CapacityMiB = NumericValue;
        PropertyChanged       = TRUE;
      }
    }
  }

  //
  // Handle CONFIGURATIONLOCKED
  //
  if (PropertyChecker (MemoryCs->ConfigurationLocked, ProvisionMode)) {
    BooleanValue = GetPropertyBooleanValue (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, L"ConfigurationLocked", ConfigureLang);
    if (BooleanValue != NULL) {
      if (ProvisionMode || (*MemoryCs->ConfigurationLocked != *BooleanValue)) {
        IntegerValue = AllocatePool (sizeof (*IntegerValue));
        if (IntegerValue != NULL) {
          *IntegerValue                 = (BooleanValue ? 0x01 : 0x00);
          MemoryCs->ConfigurationLocked = IntegerValue;
        }
      }
    }
  }

  //
  // Handle DATAWIDTHBITS
  //
  if (PropertyChecker (MemoryCs->DataWidthBits, ProvisionMode)) {
    NumericValue = GetPropertyNumericValue (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, L"DataWidthBits", ConfigureLang);
    if (NumericValue != NULL) {
      if (ProvisionMode || (*MemoryCs->DataWidthBits != *NumericValue)) {
        MemoryCs->DataWidthBits = NumericValue;
        PropertyChanged         = TRUE;
      }
    }
  }

  //
  // Handle DEVICEID
  //
  if (PropertyChecker (MemoryCs->DeviceID, ProvisionMode)) {
    AsciiStringValue = GetPropertyStringValue (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, L"DeviceID", ConfigureLang);
    if (AsciiStringValue != NULL) {
      if (ProvisionMode || (AsciiStrCmp (MemoryCs->DeviceID, AsciiStringValue) != 0)) {
        MemoryCs->DeviceID = AsciiStringValue;
        PropertyChanged    = TRUE;
      }
    }
  }

  //
  // Handle DEVICELOCATOR
  //
  if (PropertyChecker (MemoryCs->DeviceLocator, ProvisionMode)) {
    AsciiStringValue = GetPropertyStringValue (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, L"DeviceLocator", ConfigureLang);
    if (AsciiStringValue != NULL) {
      if (ProvisionMode || (AsciiStrCmp (MemoryCs->DeviceLocator, AsciiStringValue) != 0)) {
        MemoryCs->DeviceLocator = AsciiStringValue;
        PropertyChanged         = TRUE;
      }
    }
  }

  //
  // Handle ERRORCORRECTION
  //
  if (PropertyChecker (MemoryCs->ErrorCorrection, ProvisionMode)) {
    AsciiStringValue = GetPropertyStringValue (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, L"ErrorCorrection", ConfigureLang);
    if (AsciiStringValue != NULL) {
      if (ProvisionMode || (AsciiStrCmp (MemoryCs->ErrorCorrection, AsciiStringValue) != 0)) {
        MemoryCs->ErrorCorrection = AsciiStringValue;
        PropertyChanged           = TRUE;
      }
    }
  }

  //
  // Handle FIRMWAREAPIVERSION
  //
  if (PropertyChecker (MemoryCs->FirmwareApiVersion, ProvisionMode)) {
    AsciiStringValue = GetPropertyStringValue (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, L"FirmwareApiVersion", ConfigureLang);
    if (AsciiStringValue != NULL) {
      if (ProvisionMode || (AsciiStrCmp (MemoryCs->FirmwareApiVersion, AsciiStringValue) != 0)) {
        MemoryCs->FirmwareApiVersion = AsciiStringValue;
        PropertyChanged              = TRUE;
      }
    }
  }

  //
  // Handle FIRMWAREREVISION
  //
  if (PropertyChecker (MemoryCs->FirmwareRevision, ProvisionMode)) {
    AsciiStringValue = GetPropertyStringValue (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, L"FirmwareRevision", ConfigureLang);
    if (AsciiStringValue != NULL) {
      if (ProvisionMode || (AsciiStrCmp (MemoryCs->FirmwareRevision, AsciiStringValue) != 0)) {
        MemoryCs->FirmwareRevision = AsciiStringValue;
        PropertyChanged            = TRUE;
      }
    }
  }

  //
  // Handle ISRANKSPAREENABLED
  //
  if (PropertyChecker (MemoryCs->IsRankSpareEnabled, ProvisionMode)) {
    BooleanValue = GetPropertyBooleanValue (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, L"IsRankSpareEnabled", ConfigureLang);
    if (BooleanValue != NULL) {
      if (ProvisionMode || (*MemoryCs->IsRankSpareEnabled != *BooleanValue)) {
        IntegerValue = AllocatePool (sizeof (*IntegerValue));
        if (IntegerValue != NULL) {
          *IntegerValue                = (BooleanValue ? 0x01 : 0x00);
          MemoryCs->IsRankSpareEnabled = IntegerValue;
        }
      }
    }
  }

  //
  // Handle ISSPAREDEVICEENABLED
  //
  if (PropertyChecker (MemoryCs->IsSpareDeviceEnabled, ProvisionMode)) {
    BooleanValue = GetPropertyBooleanValue (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, L"IsSpareDeviceEnabled", ConfigureLang);
    if (BooleanValue != NULL) {
      if (ProvisionMode || (*MemoryCs->IsSpareDeviceEnabled != *BooleanValue)) {
        IntegerValue = AllocatePool (sizeof (*IntegerValue));
        if (IntegerValue != NULL) {
          *IntegerValue                  = (BooleanValue ? 0x01 : 0x00);
          MemoryCs->IsSpareDeviceEnabled = IntegerValue;
        }
      }
    }
  }

  //
  // Handle LOGICALSIZEMIB
  //
  if (PropertyChecker (MemoryCs->LogicalSizeMiB, ProvisionMode)) {
    NumericValue = GetPropertyNumericValue (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, L"LogicalSizeMiB", ConfigureLang);
    if (NumericValue != NULL) {
      if (ProvisionMode || (*MemoryCs->LogicalSizeMiB != *NumericValue)) {
        MemoryCs->LogicalSizeMiB = NumericValue;
        PropertyChanged          = TRUE;
      }
    }
  }

  //
  // Handle MANUFACTURER
  //
  if (PropertyChecker (MemoryCs->Manufacturer, ProvisionMode)) {
    AsciiStringValue = GetPropertyStringValue (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, L"Manufacturer", ConfigureLang);
    if (AsciiStringValue != NULL) {
      if (ProvisionMode || (AsciiStrCmp (MemoryCs->Manufacturer, AsciiStringValue) != 0)) {
        MemoryCs->Manufacturer = AsciiStringValue;
        PropertyChanged        = TRUE;
      }
    }
  }

  //
  // Handle MEMORYDEVICETYPE
  //
  if (PropertyChecker (MemoryCs->MemoryDeviceType, ProvisionMode)) {
    AsciiStringValue = GetPropertyStringValue (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, L"MemoryDeviceType", ConfigureLang);
    if (AsciiStringValue != NULL) {
      if (ProvisionMode || (AsciiStrCmp (MemoryCs->MemoryDeviceType, AsciiStringValue) != 0)) {
        MemoryCs->MemoryDeviceType = AsciiStringValue;
        PropertyChanged            = TRUE;
      }
    }
  }

  //
  // Handle MEMORYLOCATION
  //
  if (MemoryCs->MemoryLocation == NULL) {
    MemoryCs->MemoryLocation = AllocateZeroPool (sizeof (RedfishMemory_V1_7_1_MemoryLocation_CS));
    ASSERT (MemoryCs->MemoryLocation != NULL);
    UnusedProperty = TRUE;
  } else {
    UnusedProperty = FALSE;
  }

  //
  // Handle MEMORYLOCATION->CHANNEL
  //
  if (PropertyChecker (MemoryCs->MemoryLocation->Channel, ProvisionMode)) {
    NumericValue = GetPropertyNumericValue (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, L"MemoryLocation/Channel", ConfigureLang);
    if (NumericValue != NULL) {
      if (ProvisionMode || (*MemoryCs->MemoryLocation->Channel != *NumericValue)) {
        MemoryCs->MemoryLocation->Channel = NumericValue;
        PropertyChanged                   = TRUE;
        UnusedProperty                    = FALSE;
      }
    }
  }

  //
  // Handle MEMORYLOCATION->MEMORYCONTROLLER
  //
  if (PropertyChecker (MemoryCs->MemoryLocation->MemoryController, ProvisionMode)) {
    NumericValue = GetPropertyNumericValue (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, L"MemoryLocation/MemoryController", ConfigureLang);
    if (NumericValue != NULL) {
      if (ProvisionMode || (*MemoryCs->MemoryLocation->MemoryController != *NumericValue)) {
        MemoryCs->MemoryLocation->MemoryController = NumericValue;
        PropertyChanged                            = TRUE;
        UnusedProperty                             = FALSE;
      }
    }
  }

  //
  // Handle MEMORYLOCATION->SLOT
  //
  if (PropertyChecker (MemoryCs->MemoryLocation->Slot, ProvisionMode)) {
    NumericValue = GetPropertyNumericValue (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, L"MemoryLocation/Slot", ConfigureLang);
    if (NumericValue != NULL) {
      if (ProvisionMode || (*MemoryCs->MemoryLocation->Slot != *NumericValue)) {
        MemoryCs->MemoryLocation->Slot = NumericValue;
        PropertyChanged                = TRUE;
        UnusedProperty                 = FALSE;
      }
    }
  }

  //
  // Handle MEMORYLOCATION->SOCKET
  //
  if (PropertyChecker (MemoryCs->MemoryLocation->Socket, ProvisionMode)) {
    NumericValue = GetPropertyNumericValue (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, L"MemoryLocation/Socket", ConfigureLang);
    if (NumericValue != NULL) {
      if (ProvisionMode || (*MemoryCs->MemoryLocation->Socket != *NumericValue)) {
        MemoryCs->MemoryLocation->Socket = NumericValue;
        PropertyChanged                  = TRUE;
        UnusedProperty                   = FALSE;
      }
    }
  }

  if (UnusedProperty) {
    FreePool (MemoryCs->MemoryLocation);
    MemoryCs->MemoryLocation = NULL;
  }

  //
  // Handle MEMORYSUBSYSTEMCONTROLLERMANUFACTURERID
  //
  if (PropertyChecker (MemoryCs->MemorySubsystemControllerManufacturerID, ProvisionMode)) {
    AsciiStringValue = GetPropertyStringValue (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, L"MemorySubsystemControllerManufacturerID", ConfigureLang);
    if (AsciiStringValue != NULL) {
      if (ProvisionMode || (AsciiStrCmp (MemoryCs->MemorySubsystemControllerManufacturerID, AsciiStringValue) != 0)) {
        MemoryCs->MemorySubsystemControllerManufacturerID = AsciiStringValue;
        PropertyChanged                                   = TRUE;
      }
    }
  }

  //
  // Handle MEMORYSUBSYSTEMCONTROLLERPRODUCTID
  //
  if (PropertyChecker (MemoryCs->MemorySubsystemControllerProductID, ProvisionMode)) {
    AsciiStringValue = GetPropertyStringValue (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, L"MemorySubsystemControllerProductID", ConfigureLang);
    if (AsciiStringValue != NULL) {
      if (ProvisionMode || (AsciiStrCmp (MemoryCs->MemorySubsystemControllerProductID, AsciiStringValue) != 0)) {
        MemoryCs->MemorySubsystemControllerProductID = AsciiStringValue;
        PropertyChanged                              = TRUE;
      }
    }
  }

  //
  // Handle MEMORYTYPE
  //
  if (PropertyChecker (MemoryCs->MemoryType, ProvisionMode)) {
    AsciiStringValue = GetPropertyStringValue (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, L"MemoryType", ConfigureLang);
    if (AsciiStringValue != NULL) {
      if (ProvisionMode || (AsciiStrCmp (MemoryCs->MemoryType, AsciiStringValue) != 0)) {
        MemoryCs->MemoryType = AsciiStringValue;
        PropertyChanged      = TRUE;
      }
    }
  }

  //
  // Handle MODULEMANUFACTURERID
  //
  if (PropertyChecker (MemoryCs->ModuleManufacturerID, ProvisionMode)) {
    AsciiStringValue = GetPropertyStringValue (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, L"ModuleManufacturerID", ConfigureLang);
    if (AsciiStringValue != NULL) {
      if (ProvisionMode || (AsciiStrCmp (MemoryCs->ModuleManufacturerID, AsciiStringValue) != 0)) {
        MemoryCs->ModuleManufacturerID = AsciiStringValue;
        PropertyChanged                = TRUE;
      }
    }
  }

  //
  // Handle MODULEPRODUCTID
  //
  if (PropertyChecker (MemoryCs->ModuleProductID, ProvisionMode)) {
    AsciiStringValue = GetPropertyStringValue (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, L"ModuleProductID", ConfigureLang);
    if (AsciiStringValue != NULL) {
      if (ProvisionMode || (AsciiStrCmp (MemoryCs->ModuleProductID, AsciiStringValue) != 0)) {
        MemoryCs->ModuleProductID = AsciiStringValue;
        PropertyChanged           = TRUE;
      }
    }
  }

  //
  // Handle NONVOLATILESIZEMIB
  //
  if (PropertyChecker (MemoryCs->NonVolatileSizeMiB, ProvisionMode)) {
    NumericValue = GetPropertyNumericValue (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, L"NonVolatileSizeMiB", ConfigureLang);
    if (NumericValue != NULL) {
      if (ProvisionMode || (*MemoryCs->NonVolatileSizeMiB != *NumericValue)) {
        MemoryCs->NonVolatileSizeMiB = NumericValue;
        PropertyChanged              = TRUE;
      }
    }
  }

  //
  // Handle OPERATINGSPEEDMHZ
  //
  if (PropertyChecker (MemoryCs->OperatingSpeedMhz, ProvisionMode)) {
    NumericValue = GetPropertyNumericValue (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, L"OperatingSpeedMhz", ConfigureLang);
    if (NumericValue != NULL) {
      if (ProvisionMode || (*MemoryCs->OperatingSpeedMhz != *NumericValue)) {
        MemoryCs->OperatingSpeedMhz = NumericValue;
        PropertyChanged             = TRUE;
      }
    }
  }

  //
  // Handle PARTNUMBER
  //
  if (PropertyChecker (MemoryCs->PartNumber, ProvisionMode)) {
    AsciiStringValue = GetPropertyStringValue (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, L"PartNumber", ConfigureLang);
    if (AsciiStringValue != NULL) {
      if (ProvisionMode || (AsciiStrCmp (MemoryCs->PartNumber, AsciiStringValue) != 0)) {
        MemoryCs->PartNumber = AsciiStringValue;
        PropertyChanged      = TRUE;
      }
    }
  }

  //
  // Handle PERSISTENTREGIONNUMBERLIMIT
  //
  if (PropertyChecker (MemoryCs->PersistentRegionNumberLimit, ProvisionMode)) {
    NumericValue = GetPropertyNumericValue (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, L"PersistentRegionNumberLimit", ConfigureLang);
    if (NumericValue != NULL) {
      if (ProvisionMode || (*MemoryCs->PersistentRegionNumberLimit != *NumericValue)) {
        MemoryCs->PersistentRegionNumberLimit = NumericValue;
        PropertyChanged                       = TRUE;
      }
    }
  }

  //
  // Handle PERSISTENTREGIONSIZELIMITMIB
  //
  if (PropertyChecker (MemoryCs->PersistentRegionSizeLimitMiB, ProvisionMode)) {
    NumericValue = GetPropertyNumericValue (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, L"PersistentRegionSizeLimitMiB", ConfigureLang);
    if (NumericValue != NULL) {
      if (ProvisionMode || (*MemoryCs->PersistentRegionSizeLimitMiB != *NumericValue)) {
        MemoryCs->PersistentRegionSizeLimitMiB = NumericValue;
        PropertyChanged                        = TRUE;
      }
    }
  }

  //
  // Handle PERSISTENTREGIONSIZEMAXMIB
  //
  if (PropertyChecker (MemoryCs->PersistentRegionSizeMaxMiB, ProvisionMode)) {
    NumericValue = GetPropertyNumericValue (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, L"PersistentRegionSizeMaxMiB", ConfigureLang);
    if (NumericValue != NULL) {
      if (ProvisionMode || (*MemoryCs->PersistentRegionSizeMaxMiB != *NumericValue)) {
        MemoryCs->PersistentRegionSizeMaxMiB = NumericValue;
        PropertyChanged                      = TRUE;
      }
    }
  }

  //
  // Handle POWERMANAGEMENTPOLICY
  //
  if (MemoryCs->PowerManagementPolicy == NULL) {
    MemoryCs->PowerManagementPolicy = AllocateZeroPool (sizeof (RedfishMemory_V1_7_1_PowerManagementPolicy_CS));
    ASSERT (MemoryCs->PowerManagementPolicy != NULL);
    UnusedProperty = TRUE;
  } else {
    UnusedProperty = FALSE;
  }

  //
  // Handle POWERMANAGEMENTPOLICY->AVERAGEPOWERBUDGETMILLIWATTS
  //
  if (PropertyChecker (MemoryCs->PowerManagementPolicy->AveragePowerBudgetMilliWatts, ProvisionMode)) {
    NumericValue = GetPropertyNumericValue (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, L"PowerManagementPolicy/AveragePowerBudgetMilliWatts", ConfigureLang);
    if (NumericValue != NULL) {
      if (ProvisionMode || (*MemoryCs->PowerManagementPolicy->AveragePowerBudgetMilliWatts != *NumericValue)) {
        MemoryCs->PowerManagementPolicy->AveragePowerBudgetMilliWatts = NumericValue;
        PropertyChanged                                               = TRUE;
        UnusedProperty                                                = FALSE;
      }
    }
  }

  //
  // Handle POWERMANAGEMENTPOLICY->MAXTDPMILLIWATTS
  //
  if (PropertyChecker (MemoryCs->PowerManagementPolicy->MaxTDPMilliWatts, ProvisionMode)) {
    NumericValue = GetPropertyNumericValue (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, L"PowerManagementPolicy/MaxTDPMilliWatts", ConfigureLang);
    if (NumericValue != NULL) {
      if (ProvisionMode || (*MemoryCs->PowerManagementPolicy->MaxTDPMilliWatts != *NumericValue)) {
        MemoryCs->PowerManagementPolicy->MaxTDPMilliWatts = NumericValue;
        PropertyChanged                                   = TRUE;
        UnusedProperty                                    = FALSE;
      }
    }
  }

  //
  // Handle POWERMANAGEMENTPOLICY->PEAKPOWERBUDGETMILLIWATTS
  //
  if (PropertyChecker (MemoryCs->PowerManagementPolicy->PeakPowerBudgetMilliWatts, ProvisionMode)) {
    NumericValue = GetPropertyNumericValue (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, L"PowerManagementPolicy/PeakPowerBudgetMilliWatts", ConfigureLang);
    if (NumericValue != NULL) {
      if (ProvisionMode || (*MemoryCs->PowerManagementPolicy->PeakPowerBudgetMilliWatts != *NumericValue)) {
        MemoryCs->PowerManagementPolicy->PeakPowerBudgetMilliWatts = NumericValue;
        PropertyChanged                                            = TRUE;
        UnusedProperty                                             = FALSE;
      }
    }
  }

  //
  // Handle POWERMANAGEMENTPOLICY->POLICYENABLED
  //
  if (PropertyChecker (MemoryCs->PowerManagementPolicy->PolicyEnabled, ProvisionMode)) {
    BooleanValue = GetPropertyBooleanValue (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, L"PowerManagementPolicy/PolicyEnabled", ConfigureLang);
    if (BooleanValue != NULL) {
      if (ProvisionMode || (*MemoryCs->PowerManagementPolicy->PolicyEnabled != *BooleanValue)) {
        IntegerValue = AllocatePool (sizeof (*IntegerValue));
        if (IntegerValue != NULL) {
          *IntegerValue                                  = (BooleanValue ? 0x01 : 0x00);
          MemoryCs->PowerManagementPolicy->PolicyEnabled = IntegerValue;
          PropertyChanged                                = TRUE;
          UnusedProperty                                 = FALSE;
        }
      }
    }
  }

  if (UnusedProperty) {
    FreePool (MemoryCs->PowerManagementPolicy);
    MemoryCs->PowerManagementPolicy = NULL;
  }

  //
  // Handle RANKCOUNT
  //
  if (PropertyChecker (MemoryCs->RankCount, ProvisionMode)) {
    NumericValue = GetPropertyNumericValue (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, L"RankCount", ConfigureLang);
    if (NumericValue != NULL) {
      if (ProvisionMode || (*MemoryCs->RankCount != *NumericValue)) {
        MemoryCs->RankCount = NumericValue;
        PropertyChanged     = TRUE;
      }
    }
  }

  //
  // Handle SECURITYCAPABILITIES
  //
  if (MemoryCs->SecurityCapabilities == NULL) {
    MemoryCs->SecurityCapabilities = AllocateZeroPool (sizeof (RedfishMemory_V1_7_1_SecurityCapabilities_CS));
    ASSERT (MemoryCs->SecurityCapabilities != NULL);
    UnusedProperty = TRUE;
  } else {
    UnusedProperty = FALSE;
  }

  //
  // Handle SECURITYCAPABILITIES->CONFIGURATIONLOCKCAPABLE
  //
  if (PropertyChecker (MemoryCs->SecurityCapabilities->ConfigurationLockCapable, ProvisionMode)) {
    BooleanValue = GetPropertyBooleanValue (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, L"SecurityCapabilities/ConfigurationLockCapable", ConfigureLang);
    if (BooleanValue != NULL) {
      if (ProvisionMode || (*MemoryCs->SecurityCapabilities->ConfigurationLockCapable != *BooleanValue)) {
        IntegerValue = AllocatePool (sizeof (*IntegerValue));
        if (IntegerValue != NULL) {
          *IntegerValue                                            = (BooleanValue ? 0x01 : 0x00);
          MemoryCs->SecurityCapabilities->ConfigurationLockCapable = IntegerValue;
          PropertyChanged                                          = TRUE;
          UnusedProperty                                           = FALSE;
        }
      }
    }
  }

  //
  // Handle SECURITYCAPABILITIES->DATALOCKCAPABLE
  //
  if (PropertyChecker (MemoryCs->SecurityCapabilities->DataLockCapable, ProvisionMode)) {
    BooleanValue = GetPropertyBooleanValue (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, L"SecurityCapabilities/DataLockCapable", ConfigureLang);
    if (BooleanValue != NULL) {
      if (ProvisionMode || (*MemoryCs->SecurityCapabilities->DataLockCapable != *BooleanValue)) {
        IntegerValue = AllocatePool (sizeof (*IntegerValue));
        if (IntegerValue != NULL) {
          *IntegerValue                                   = (BooleanValue ? 0x01 : 0x00);
          MemoryCs->SecurityCapabilities->DataLockCapable = IntegerValue;
          PropertyChanged                                 = TRUE;
          UnusedProperty                                  = FALSE;
        }
      }
    }
  }

  //
  // Handle SECURITYCAPABILITIES->MAXPASSPHRASECOUNT
  //
  if (PropertyChecker (MemoryCs->SecurityCapabilities->MaxPassphraseCount, ProvisionMode)) {
    NumericValue = GetPropertyNumericValue (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, L"SecurityCapabilities/MaxPassphraseCount", ConfigureLang);
    if (NumericValue != NULL) {
      if (ProvisionMode || (*MemoryCs->SecurityCapabilities->MaxPassphraseCount != *NumericValue)) {
        MemoryCs->SecurityCapabilities->MaxPassphraseCount = NumericValue;
        PropertyChanged                                    = TRUE;
        UnusedProperty                                     = FALSE;
      }
    }
  }

  //
  // Handle SECURITYCAPABILITIES->PASSPHRASECAPABLE
  //
  if (PropertyChecker (MemoryCs->SecurityCapabilities->PassphraseCapable, ProvisionMode)) {
    BooleanValue = GetPropertyBooleanValue (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, L"SecurityCapabilities/PassphraseCapable", ConfigureLang);
    if (BooleanValue != NULL) {
      if (ProvisionMode || (*MemoryCs->SecurityCapabilities->PassphraseCapable != *BooleanValue)) {
        IntegerValue = AllocatePool (sizeof (*IntegerValue));
        if (IntegerValue != NULL) {
          *IntegerValue                                     = (BooleanValue ? 0x01 : 0x00);
          MemoryCs->SecurityCapabilities->PassphraseCapable = IntegerValue;
          PropertyChanged                                   = TRUE;
          UnusedProperty                                    = FALSE;
        }
      }
    }
  }

  //
  // Handle SECURITYCAPABILITIES->PASSPHRASELOCKLIMIT
  //
  if (PropertyChecker (MemoryCs->SecurityCapabilities->PassphraseLockLimit, ProvisionMode)) {
    NumericValue = GetPropertyNumericValue (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, L"SecurityCapabilities/PassphraseLockLimit", ConfigureLang);
    if (NumericValue != NULL) {
      if (ProvisionMode || (*MemoryCs->SecurityCapabilities->PassphraseLockLimit != *NumericValue)) {
        MemoryCs->SecurityCapabilities->PassphraseLockLimit = NumericValue;
        PropertyChanged                                     = TRUE;
        UnusedProperty                                      = FALSE;
      }
    }
  }

  if (UnusedProperty) {
    FreePool (MemoryCs->SecurityCapabilities);
    MemoryCs->SecurityCapabilities = NULL;
  }

  //
  // Handle SECURITYSTATE
  //
  if (PropertyChecker (MemoryCs->SecurityState, ProvisionMode)) {
    AsciiStringValue = GetPropertyStringValue (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, L"SecurityState", ConfigureLang);
    if (AsciiStringValue != NULL) {
      if (ProvisionMode || (AsciiStrCmp (MemoryCs->SecurityState, AsciiStringValue) != 0)) {
        MemoryCs->SecurityState = AsciiStringValue;
        PropertyChanged         = TRUE;
      }
    }
  }

  //
  // Handle SERIALNUMBER
  //
  if (PropertyChecker (MemoryCs->SerialNumber, ProvisionMode)) {
    AsciiStringValue = GetPropertyStringValue (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, L"SerialNumber", ConfigureLang);
    if (AsciiStringValue != NULL) {
      if (ProvisionMode || (AsciiStrCmp (MemoryCs->SerialNumber, AsciiStringValue) != 0)) {
        MemoryCs->SerialNumber = AsciiStringValue;
        PropertyChanged        = TRUE;
      }
    }
  }

  //
  // Handle SPAREDEVICECOUNT
  //
  if (PropertyChecker (MemoryCs->SpareDeviceCount, ProvisionMode)) {
    NumericValue = GetPropertyNumericValue (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, L"SpareDeviceCount", ConfigureLang);
    if (NumericValue != NULL) {
      if (ProvisionMode || (*MemoryCs->SpareDeviceCount != *NumericValue)) {
        MemoryCs->SpareDeviceCount = NumericValue;
        PropertyChanged            = TRUE;
      }
    }
  }

  //
  // Handle SUBSYSTEMDEVICEID
  //
  if (PropertyChecker (MemoryCs->SubsystemDeviceID, ProvisionMode)) {
    AsciiStringValue = GetPropertyStringValue (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, L"SubsystemDeviceID", ConfigureLang);
    if (AsciiStringValue != NULL) {
      if (ProvisionMode || (AsciiStrCmp (MemoryCs->SubsystemDeviceID, AsciiStringValue) != 0)) {
        MemoryCs->SubsystemDeviceID = AsciiStringValue;
        PropertyChanged             = TRUE;
      }
    }
  }

  //
  // Handle SUBSYSTEMVENDORID
  //
  if (PropertyChecker (MemoryCs->SubsystemVendorID, ProvisionMode)) {
    AsciiStringValue = GetPropertyStringValue (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, L"SubsystemVendorID", ConfigureLang);
    if (AsciiStringValue != NULL) {
      if (ProvisionMode || (AsciiStrCmp (MemoryCs->SubsystemVendorID, AsciiStringValue) != 0)) {
        MemoryCs->SubsystemVendorID = AsciiStringValue;
        PropertyChanged             = TRUE;
      }
    }
  }

  //
  // Handle VENDORID
  //
  if (PropertyChecker (MemoryCs->VendorID, ProvisionMode)) {
    AsciiStringValue = GetPropertyStringValue (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, L"VendorID", ConfigureLang);
    if (AsciiStringValue != NULL) {
      if (ProvisionMode || (AsciiStrCmp (MemoryCs->VendorID, AsciiStringValue) != 0)) {
        MemoryCs->VendorID = AsciiStringValue;
        PropertyChanged    = TRUE;
      }
    }
  }

  //
  // Handle VOLATILEREGIONNUMBERLIMIT
  //
  if (PropertyChecker (MemoryCs->VolatileRegionNumberLimit, ProvisionMode)) {
    NumericValue = GetPropertyNumericValue (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, L"VolatileRegionNumberLimit", ConfigureLang);
    if (NumericValue != NULL) {
      if (ProvisionMode || (*MemoryCs->VolatileRegionNumberLimit != *NumericValue)) {
        MemoryCs->VolatileRegionNumberLimit = NumericValue;
        PropertyChanged                     = TRUE;
      }
    }
  }

  //
  // Handle VOLATILEREGIONSIZELIMITMIB
  //
  if (PropertyChecker (MemoryCs->VolatileRegionSizeLimitMiB, ProvisionMode)) {
    NumericValue = GetPropertyNumericValue (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, L"VolatileRegionSizeLimitMiB", ConfigureLang);
    if (NumericValue != NULL) {
      if (ProvisionMode || (*MemoryCs->VolatileRegionSizeLimitMiB != *NumericValue)) {
        MemoryCs->VolatileRegionSizeLimitMiB = NumericValue;
        PropertyChanged                      = TRUE;
      }
    }
  }

  //
  // Handle VOLATILEREGIONSIZEMAXMIB
  //
  if (PropertyChecker (MemoryCs->VolatileRegionSizeMaxMiB, ProvisionMode)) {
    NumericValue = GetPropertyNumericValue (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, L"VolatileRegionSizeMaxMiB", ConfigureLang);
    if (NumericValue != NULL) {
      if (ProvisionMode || (*MemoryCs->VolatileRegionSizeMaxMiB != *NumericValue)) {
        MemoryCs->VolatileRegionSizeMaxMiB = NumericValue;
        PropertyChanged                    = TRUE;
      }
    }
  }

  //
  // Handle VOLATILESIZEMIB
  //
  if (PropertyChecker (MemoryCs->VolatileSizeMiB, ProvisionMode)) {
    NumericValue = GetPropertyNumericValue (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, L"VolatileSizeMiB", ConfigureLang);
    if (NumericValue != NULL) {
      if (ProvisionMode || (*MemoryCs->VolatileSizeMiB != *NumericValue)) {
        MemoryCs->VolatileSizeMiB = NumericValue;
        PropertyChanged           = TRUE;
      }
    }
  }

  //
  // Convert C structure back to JSON text.
  //
  Status = JsonStructProtocol->ToJson (
                                 JsonStructProtocol,
                                 (EFI_REST_JSON_STRUCTURE_HEADER *)Memory,
                                 ResultJson
                                 );
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a, ToJson() failed: %r\n", __FUNCTION__, Status));
    return Status;
  }

  //
  // Release resource.
  //
  JsonStructProtocol->DestoryStructure (
                        JsonStructProtocol,
                        (EFI_REST_JSON_STRUCTURE_HEADER *)Memory
                        );

  return (PropertyChanged ? EFI_SUCCESS : EFI_NOT_FOUND);
}

EFI_STATUS
ProvisioningMemoryResource (
  IN  REDFISH_RESOURCE_COMMON_PRIVATE  *Private,
  IN  UINTN                            Index,
  IN  EFI_STRING                       ConfigureLang
  )
{
  CHAR8       *MemoryJson;
  EFI_STATUS  Status;
  CHAR8       *NewResourceLocation;
  CHAR8       *NewKey;
  CHAR8       *EtagStr;
  CHAR8       ResourceId[16];
  CHAR8       NewUri[255];

  if (IS_EMPTY_STRING (ConfigureLang) || (Private == NULL)) {
    return EFI_INVALID_PARAMETER;
  }

  AsciiSPrint (ResourceId, sizeof (ResourceId), "%d", Index);

  Status = ProvisioningMemoryProperties (
             Private->JsonStructProtocol,
             MemoryEmptyJson,
             ResourceId,
             ConfigureLang,
             TRUE,
             &MemoryJson
             );
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a, provisioning resource for %s failed: %r\n", __FUNCTION__, ConfigureLang, Status));
    return Status;
  }

  Status = CreatePayloadToPostResource (Private->RedfishService, Private->Payload, MemoryJson, &NewResourceLocation, &EtagStr);
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a, post memory resource for %s failed: %r\n", __FUNCTION__, ConfigureLang, Status));
    goto RELEASE_RESOURCE;
  }

  NewUri[0] = '\0';

  //
  // Keep location of new resource.
  //
  if (NewResourceLocation != NULL) {
    //
    // Find key
    //
    NewKey = AsciiStrStr (NewResourceLocation, RESOURCE_SCHEMA);
    if (NewKey != NULL) {
      NewKey += 6;
      //
      // skip '/'
      //
      if (NewKey[0] == '/') {
        NewKey++;
      }

      SetConfigureLangWithkey (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, NewKey, Index);
      AsciiSPrint (NewUri, sizeof (NewUri), "%a[%a]", Private->Uri, NewKey);
      FreePool (NewResourceLocation);
    }
  }

  //
  // Handle Etag
  //
  if (EtagStr != NULL) {
    SetEtagWithUri (EtagStr, NewUri);
    FreePool (EtagStr);
  }

RELEASE_RESOURCE:

  FreePool (MemoryJson);

  return Status;
}

EFI_STATUS
ProvisioningMemoryResources (
  IN  REDFISH_RESOURCE_COMMON_PRIVATE  *Private
  )
{
  UINTN                                        Index;
  EFI_STATUS                                   Status;
  REDFISH_FEATURE_ARRAY_TYPE_CONFIG_LANG_LIST  UnifiedConfigureLangList;

  if (Private == NULL) {
    return EFI_INVALID_PARAMETER;
  }

  Status = RedfishFeatureGetUnifiedArrayTypeConfigureLang (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, REDPATH_ARRAY_PATTERN, &UnifiedConfigureLangList);
  if (EFI_ERROR (Status) || (UnifiedConfigureLangList.Count == 0)) {
    DEBUG ((DEBUG_ERROR, "%a, No HII question found with redpath: %s: %r\n", __FUNCTION__, REDPATH_ARRAY_PATTERN, Status));
    return EFI_NOT_FOUND;
  }

  for (Index = 0; Index < UnifiedConfigureLangList.Count; Index++) {
    DEBUG ((DEBUG_INFO, "[%d] create memory resource from: %s\n", UnifiedConfigureLangList.List[Index].Index, UnifiedConfigureLangList.List[Index].ConfigureLang));
    ProvisioningMemoryResource (Private, UnifiedConfigureLangList.List[Index].Index, UnifiedConfigureLangList.List[Index].ConfigureLang);
    FreePool (UnifiedConfigureLangList.List[Index].ConfigureLang);
  }

  return EFI_SUCCESS;
}

EFI_STATUS
ProvisioningMemoryExistResource (
  IN  REDFISH_RESOURCE_COMMON_PRIVATE  *Private
  )
{
  if (Private == NULL) {
    return EFI_INVALID_PARAMETER;
  }

  Private->Json = JsonDumpString (RedfishJsonInPayload (Private->Payload), EDKII_JSON_COMPACT);
  ASSERT (Private->Json != NULL);

  return RedfishUpdateResourceCommon (Private, Private->Json);
}

/**
  Provisioning redfish resource by given URI.

  @param[in]   This                Pointer to EFI_HP_REDFISH_HII_PROTOCOL instance.
  @param[in]   ResourceExist       TRUE if resource exists, PUT method will be used.
                                   FALSE if resource does not exist POST method is used.

  @retval EFI_SUCCESS              Value is returned successfully.
  @retval Others                   Some error happened.

**/
EFI_STATUS
RedfishProvisioningResourceCommon (
  IN     REDFISH_RESOURCE_COMMON_PRIVATE  *Private,
  IN     BOOLEAN                          ResourceExist
  )
{
  if (Private == NULL) {
    return EFI_INVALID_PARAMETER;
  }

  return (ResourceExist ? ProvisioningMemoryExistResource (Private) : ProvisioningMemoryResources (Private));
}

/**
  Check resource from given URI.

  @param[in]   This                Pointer to REDFISH_RESOURCE_COMMON_PRIVATE instance.
  @param[in]   Json                The JSON to consume.

  @retval EFI_SUCCESS              Value is returned successfully.
  @retval Others                   Some error happened.

**/
EFI_STATUS
RedfishCheckResourceCommon (
  IN     REDFISH_RESOURCE_COMMON_PRIVATE  *Private,
  IN     CHAR8                            *Json
  )
{
  UINTN       Index;
  EFI_STATUS  Status;
  EFI_STRING  *ConfigureLangList;
  UINTN       Count;
  EFI_STRING  Property;
  CHAR8       *PropertyAscii;
  UINTN       BuffSize;
  CHAR8       *Match;

  if ((Private == NULL) || IS_EMPTY_STRING (Json)) {
    return EFI_INVALID_PARAMETER;
  }

  Status = RedfishPlatformConfigGetConfigureLang (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, REDPATH_ARRAY_PATTERN, &ConfigureLangList, &Count);
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a, BiosConfigToRedfishGetConfigureLangRegex failed: %r\n", __FUNCTION__, Status));
    return Status;
  }

  if (Count == 0) {
    return EFI_NOT_FOUND;
  }

  Status = EFI_SUCCESS;
  for (Index = 0; Index < Count; Index++) {
    Property = GetPropertyFromConfigureLang (ConfigureLangList[Index]);
    if (Property == NULL) {
      continue;
    }

    DEBUG ((DEBUG_INFO, "[%d] check resource from: %s\n", Index, Property));

    BuffSize      = StrLen (Property) + 1;
    PropertyAscii = AllocatePool (BuffSize);
    UnicodeStrToAsciiStrS (Property, PropertyAscii, BuffSize);

    //
    // check to see if it is partial match.
    //
    Match = AsciiStrStr (Json, PropertyAscii);
    if ((Match == NULL) || (AsciiStrnCmp (Match, PropertyAscii, AsciiStrLen (PropertyAscii)) != 0)) {
      Status = EFI_NOT_FOUND;
      DEBUG ((DEBUG_ERROR, "%a, property %a is missing\n", __FUNCTION__, PropertyAscii));
    }

    FreePool (PropertyAscii);
  }

  FreePool (ConfigureLangList);

  return Status;
}

/**
  Update resource to given URI.

  @param[in]   This                Pointer to REDFISH_RESOURCE_COMMON_PRIVATE instance.
  @param[in]   Json                The JSON to consume.

  @retval EFI_SUCCESS              Value is returned successfully.
  @retval Others                   Some error happened.

**/
EFI_STATUS
RedfishUpdateResourceCommon (
  IN     REDFISH_RESOURCE_COMMON_PRIVATE  *Private,
  IN     CHAR8                            *Json
  )
{
  EFI_STATUS  Status;
  CHAR8       *MemoryJson;
  CHAR8       *ArrayKey;
  EFI_STRING  ConfigureLang;
  CHAR8       *EtagStr;

  if ((Private == NULL) || IS_EMPTY_STRING (Json)) {
    return EFI_INVALID_PARAMETER;
  }

  MemoryJson    = NULL;
  ConfigureLang = NULL;
  ArrayKey      = NULL;

  Status = GetArraykeyFromUri (Private->Uri, &ArrayKey);
  if (EFI_ERROR (Status)) {
    return Status;
  }

  ConfigureLang = GetConfigureLangByKey (RESOURCE_SCHEMA, RESOURCE_SCHEMA_VERSION, NULL, ArrayKey);
  if (ConfigureLang == NULL) {
    return EFI_NOT_FOUND;
  }

  Status = ProvisioningMemoryProperties (
             Private->JsonStructProtocol,
             Json,
             NULL,
             ConfigureLang,
             FALSE,
             &MemoryJson
             );
  if (EFI_ERROR (Status)) {
    if (Status == EFI_NOT_FOUND) {
      DEBUG ((REDFISH_DEBUG_TRACE, "%a, update resource for %s ignored. Nothing changed\n", __FUNCTION__, ConfigureLang));
    } else {
      DEBUG ((DEBUG_ERROR, "%a, update resource for %s failed: %r\n", __FUNCTION__, ConfigureLang, Status));
    }

    goto ON_RELEASE;
  }

  DEBUG ((REDFISH_DEBUG_TRACE, "%a, update resource for %s\n", __FUNCTION__, ConfigureLang));
  //
  // PUT back to instance
  //
  Status = CreatePayloadToPatchResource (Private->RedfishService, Private->Payload, MemoryJson, &EtagStr);
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a, post memory resource for %s failed: %r\n", __FUNCTION__, ConfigureLang, Status));
  }

  //
  // Handle Etag
  //
  if (EtagStr != NULL) {
    SetEtagWithUri (EtagStr, Private->Uri);
    FreePool (EtagStr);
  }

ON_RELEASE:

  if (MemoryJson != NULL) {
    FreePool (MemoryJson);
  }

  if (ConfigureLang != NULL) {
    FreePool (ConfigureLang);
  }

  if (ArrayKey != NULL) {
    FreePool (ArrayKey);
  }

  return Status;
}
