/** @file
  Common implmentation of building Redfish BIOS attribute registry

  Copyright (C) 2026 Advanced Micro Devices, Inc. All rights reserved.<BR>

  Some of the source code and functions in this file come from NVIDIA
  edk2 opensource source here,
  https://github.com/NVIDIA/edk2-nvidia/blob/uefi-202503.1-updates/Silicon/NVIDIA/Drivers/PlatformRedfishBiosDxe/PlatformRedfishBiosDxe.c
  Below is the original file header,

  This driver uses EDKII_REDFISH_RESOURCE_ADDENDUM_PROTOCOL to provide BMC
  required data during Redfish operation and support BIOS configuration on
  Redfish service.
  Copyright (c) 2022-2023, NVIDIA CORPORATION & AFFILIATES. All rights reserved.

  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include "BiosAttributeRegistryCommon.h"

/**
  Dump Json object for debugging purpose.

  @param[in]      Message          Help message.
  @param[in]      JsonValue        Json object to dump.

**/
VOID
DumpJsonData (
  IN  CONST CHAR8       *Message,
  IN  EDKII_JSON_VALUE  JsonValue
  )
{
  CHAR8  *JsonString;

  if (Message != NULL) {
    DEBUG ((REDFISH_BIOS_DEBUG_DUMP, "%a: ", Message));
  }

  JsonString = JsonDumpString (JsonValue, EDKII_JSON_COMPACT);
  if (JsonString != NULL) {
    DEBUG ((REDFISH_BIOS_DEBUG_DUMP, "%a\n", JsonString));
    FreePool (JsonString);
  }
}

/**
  Convert JSON value to Redfish value.

  @param[in]      Value            JSON value to be converted.
  @param[out]     RedfishValue     Redfish value from given JSON value.

  @retval EFI_SUCCESS              Conversion is done successfully.
  @retval EFI_UNSUPPORTED          Unsupported JSON value type.
  @retval Others                   Some error happened.

**/
EFI_STATUS
JsonValueToRedfishValue (
  IN  EDKII_JSON_VALUE     Value,
  OUT EDKII_REDFISH_VALUE  *RedfishValue
  )
{
  EDKII_JSON_TYPE  type;

  if ((Value == NULL) || (RedfishValue == NULL)) {
    return EFI_INVALID_PARAMETER;
  }

  type = JsonGetType (Value);
  switch (type) {
    case EdkiiJsonTypeString:
      RedfishValue->Type         = RedfishValueTypeString;
      RedfishValue->Value.Buffer = (CHAR8 *)JsonValueGetAsciiString (Value);
      break;
    case EdkiiJsonTypeInteger:
      RedfishValue->Type          = RedfishValueTypeInteger;
      RedfishValue->Value.Integer = JsonValueGetInteger (Value);
      break;
    case EdkiiJsonTypeTrue:
    case EdkiiJsonTypeFalse:
      RedfishValue->Type          = RedfishValueTypeBoolean;
      RedfishValue->Value.Boolean = JsonValueGetBoolean (Value);
      break;
    default:
      DEBUG ((DEBUG_ERROR, "%a, unsupported value type: 0x%x\n", __func__, type));
      return EFI_UNSUPPORTED;
  }

  return EFI_SUCCESS;
}

/**
  Convert Redfish value to JSON value.

  @param[in]      RedfishValue     Redfish value to be converted.
  @param[out]     Value            JSON value from given Redfish value.

  @retval EFI_SUCCESS              Conversion is done successfully.
  @retval EFI_UNSUPPORTED          Unsupported Redfish value type.
  @retval Others                   Some error happened.

**/
EFI_STATUS
RedfishValueToJsonValue (
  IN EDKII_REDFISH_VALUE  *RedfishValue,
  OUT EDKII_JSON_VALUE    *Value
  )
{
  if ((Value == NULL) || (RedfishValue == NULL)) {
    return EFI_INVALID_PARAMETER;
  }

  switch (RedfishValue->Type) {
    case RedfishValueTypeString:
      *Value = JsonValueInitAsciiString (RedfishValue->Value.Buffer);
      break;
    case RedfishValueTypeInteger:
      *Value = JsonValueInitInteger (RedfishValue->Value.Integer);
      break;
    case RedfishValueTypeBoolean:
      *Value = JsonValueInitBoolean (RedfishValue->Value.Boolean);
      break;
    default:
      DEBUG ((DEBUG_ERROR, "%a, unsupported value type: 0x%x\n", __func__, RedfishValue->Type));
      return EFI_UNSUPPORTED;
  }

  return EFI_SUCCESS;
}

/**
  Convert Redfish attribute type to stirng in JSON object.

  @param[in]      Type     Redfish attribute type.
  @param[out]     Value    Type string in JSON object.

  @retval EFI_SUCCESS              Conversion is done successfully.
  @retval EFI_UNSUPPORTED          Unsupported Redfish attribute type.
  @retval Others                   Some error happened.

**/
EFI_STATUS
AttributeTypeToJsonValue (
  IN EDKII_REDFISH_ATTRIBUTE_TYPES  Type,
  OUT EDKII_JSON_VALUE              *Value
  )
{
  if (Value == NULL) {
    return EFI_INVALID_PARAMETER;
  }

  switch (Type) {
    case RedfishAttributeTypeEnumeration:
      *Value = JsonValueInitAsciiString ("Enumeration");
      break;
    case RedfishAttributeTypeString:
      *Value = JsonValueInitAsciiString ("String");
      break;
    case RedfishAttributeTypeInteger:
      *Value = JsonValueInitAsciiString ("Integer");
      break;
    case RedfishAttributeTypeBoolean:
      *Value = JsonValueInitAsciiString ("Boolean");
      break;
    default:
      DEBUG ((DEBUG_ERROR, "%a, unsupported value type: 0x%x\n", __func__, Type));
      return EFI_UNSUPPORTED;
  }

  return EFI_SUCCESS;
}

/**
  This function consume input BIOS attribute name and create all required
  JSON objects that is required by BMC. The format is basically the format
  of AttributeRegistry.v1_3_6

  @param[in]      Schema        The schema name.
  @param[in]      Version       The schema verion string.
  @param[in]      Key           The name of BIOS attribute.
  @param[in]      Value         The value of given BIOS attribute.
  @param[out]     AttributeObj  The object which follows BMC requirements.

  @retval EFI_SUCCESS              Attribute is created successfully.
  @retval Others                   Some error happened.

**/
EFI_STATUS
GenerateAttributeDetails (
  IN CHAR8              *Schema,
  IN CHAR8              *Version,
  IN CHAR8              *Key,
  IN EDKII_JSON_VALUE   Value,
  OUT EDKII_JSON_VALUE  *AttributeObj
  )
{
  EDKII_JSON_VALUE         AttributeValue;
  EDKII_JSON_VALUE         AttributeArray;
  EFI_STATUS               Status;
  EDKII_REDFISH_ATTRIBUTE  Attribute;
  EDKII_REDFISH_VALUE      DefaultValue;
  CHAR16                   ConfigureLang[REDFISH_BIOS_CONFIG_LANG_SIZE];
  CHAR8                    *FullMenuPath;
  UINTN                    MenuPathSize;
  UINTN                    Index;
  BOOLEAN                  NoDefaultValue;

  if ((Schema == NULL) || (Version == NULL) || (Key == NULL) || (AttributeObj == NULL)) {
    return EFI_INVALID_PARAMETER;
  }

  AttributeArray = NULL;
  AttributeValue = NULL;
  FullMenuPath   = NULL;
  MenuPathSize   = 0;
  ZeroMem (&DefaultValue, sizeof (EDKII_REDFISH_VALUE));
  ZeroMem (&Attribute, sizeof (EDKII_REDFISH_ATTRIBUTE));

  UnicodeSPrint (ConfigureLang, sizeof (CHAR16) * REDFISH_BIOS_CONFIG_LANG_SIZE, L"%a", Key);
  DEBUG ((DEBUG_INFO, "%a, generate %a attribute\n", __func__, Key));

  //
  // Get HII question details of given attribute name
  //
  Status = RedfishPlatformConfigGetAttribute (Schema, Version, ConfigureLang, &Attribute);
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a, RedfishPlatformConfigGetAttribute for %s failed: %r\n", __func__, ConfigureLang, Status));
    return Status;
  }

  //
  // Get default value of given attribute name if it is not read-only property.
  //
  NoDefaultValue = TRUE;
  if (!Attribute.ReadOnly) {
    Status = RedfishPlatformConfigGetDefaultValue (Schema, Version, ConfigureLang, EDKII_REDFISH_DEFAULT_CLASS_STANDARD, &DefaultValue);
    if (!EFI_ERROR (Status)) {
      NoDefaultValue = FALSE;
    } else {
      DEBUG ((DEBUG_ERROR, "%a, RedfishPlatformConfigGetDefaultValue for %s failed: %r\n", __func__, ConfigureLang, Status));
    }
  }

  *AttributeObj = JsonValueInitObject ();
  if (*AttributeObj == NULL) {
    Status = EFI_OUT_OF_RESOURCES;
    goto RELEASE;
  }

  //
  // Create required attributes for BMC
  // AttributeName
  //
  AttributeValue = JsonValueInitAsciiString (Key);
  if (AttributeValue == NULL) {
    Status = EFI_OUT_OF_RESOURCES;
    goto RELEASE;
  }

  JsonObjectSetValue (*AttributeObj, "AttributeName", AttributeValue);

  //
  // CurrentValue
  //
  JsonObjectSetValue (*AttributeObj, "CurrentValue", Value);

  //
  // DefaultValue
  //
  if (NoDefaultValue) {
    AttributeValue = JsonValueInitNull ();
    if (AttributeValue == NULL) {
      Status = EFI_OUT_OF_RESOURCES;
      goto RELEASE;
    }
  } else {
    Status = RedfishValueToJsonValue (&DefaultValue, &AttributeValue);
    if (EFI_ERROR (Status)) {
      DEBUG ((DEBUG_ERROR, "%a, RedfishValueToJsonValue failed: %r\n", __func__, Status));
      goto RELEASE;
    }
  }

  JsonObjectSetValue (*AttributeObj, "DefaultValue", AttributeValue);

  //
  // DisplayName
  //
  AttributeValue = JsonValueInitAsciiString (Attribute.DisplayName);
  if (AttributeValue == NULL) {
    Status = EFI_OUT_OF_RESOURCES;
    goto RELEASE;
  }

  JsonObjectSetValue (*AttributeObj, "DisplayName", AttributeValue);

  //
  // HelpText (Description in BMC)
  //
  AttributeValue = JsonValueInitAsciiString (Attribute.HelpText);
  if (AttributeValue == NULL) {
    Status = EFI_OUT_OF_RESOURCES;
    goto RELEASE;
  }

  JsonObjectSetValue (*AttributeObj, "Description", AttributeValue);

  //
  // MenuPath
  //
  if (Attribute.MenuPath != NULL) {
    MenuPathSize = AsciiStrLen (REDFISH_TOP_MENU_PATH) + AsciiStrLen (Attribute.MenuPath) + 1;
    FullMenuPath = AllocateZeroPool (MenuPathSize);
    if (FullMenuPath != NULL) {
      AsciiSPrint (FullMenuPath, MenuPathSize, "%a%a", REDFISH_TOP_MENU_PATH, Attribute.MenuPath);

      AttributeValue = JsonValueInitAsciiString (FullMenuPath);
      if (AttributeValue == NULL) {
        Status = EFI_OUT_OF_RESOURCES;
        goto RELEASE;
      }

      JsonObjectSetValue (*AttributeObj, "MenuPath", AttributeValue);
    }
  }

  //
  // ReadOnly
  //
  AttributeValue = JsonValueInitBoolean (Attribute.ReadOnly);
  if (AttributeValue == NULL) {
    Status = EFI_OUT_OF_RESOURCES;
    goto RELEASE;
  }

  JsonObjectSetValue (*AttributeObj, "ReadOnly", AttributeValue);

  //
  // ResetRequired
  //
  AttributeValue = JsonValueInitBoolean (Attribute.ResetRequired);
  if (AttributeValue == NULL) {
    Status = EFI_OUT_OF_RESOURCES;
    goto RELEASE;
  }

  JsonObjectSetValue (*AttributeObj, "ResetRequired", AttributeValue);

  //
  // Type
  //
  Status = AttributeTypeToJsonValue (Attribute.Type, &AttributeValue);
  if (EFI_ERROR (Status)) {
    goto RELEASE;
  }

  JsonObjectSetValue (*AttributeObj, "Type", AttributeValue);

  //
  // String length
  //
  if (Attribute.Type == RedfishAttributeTypeString) {
    //
    // MaxLength
    //
    AttributeValue = JsonValueInitInteger (Attribute.StrMaxSize);
    if (AttributeValue == NULL) {
      Status = EFI_OUT_OF_RESOURCES;
      goto RELEASE;
    }

    JsonObjectSetValue (*AttributeObj, "MaxLength", AttributeValue);

    //
    // MinLength
    //
    AttributeValue = JsonValueInitInteger (Attribute.StrMinSize);
    if (AttributeValue == NULL) {
      Status = EFI_OUT_OF_RESOURCES;
      goto RELEASE;
    }

    JsonObjectSetValue (*AttributeObj, "MinLength", AttributeValue);
  }

  //
  // Numeric boundary
  //
  if (Attribute.Type == RedfishAttributeTypeInteger) {
    //
    // UpperBound
    //
    AttributeValue = JsonValueInitInteger (Attribute.NumMaximum);
    if (AttributeValue == NULL) {
      Status = EFI_OUT_OF_RESOURCES;
      goto RELEASE;
    }

    JsonObjectSetValue (*AttributeObj, "UpperBound", AttributeValue);

    //
    // LowerBound
    //
    AttributeValue = JsonValueInitInteger (Attribute.NumMinimum);
    if (AttributeValue == NULL) {
      Status = EFI_OUT_OF_RESOURCES;
      goto RELEASE;
    }

    JsonObjectSetValue (*AttributeObj, "LowerBound", AttributeValue);

    //
    // ScalarIncrement
    //
    AttributeValue = JsonValueInitInteger (Attribute.NumStep);
    if (AttributeValue == NULL) {
      Status = EFI_OUT_OF_RESOURCES;
      goto RELEASE;
    }

    JsonObjectSetValue (*AttributeObj, "ScalarIncrement", AttributeValue);
  }

  //
  // Values
  //
  if ((Attribute.Type == RedfishAttributeTypeEnumeration) && (Attribute.Values.ValueCount > 0)) {
    AttributeArray = JsonValueInitArray ();

    for (Index = 0; Index < Attribute.Values.ValueCount; Index++) {
      AttributeValue = JsonValueInitAsciiString (Attribute.Values.ValueArray[Index].ValueName);
      JsonArrayAppendValue (AttributeArray, AttributeValue);
    }

    JsonObjectSetValue (*AttributeObj, "Values", AttributeArray);
  }

  Status = EFI_SUCCESS;

RELEASE:
  //
  // Release string buffer
  //
  if (Attribute.AttributeName != NULL) {
    FreePool (Attribute.AttributeName);
  }

  if (Attribute.DisplayName != NULL) {
    FreePool (Attribute.DisplayName);
  }

  if (Attribute.HelpText != NULL) {
    FreePool (Attribute.HelpText);
  }

  if (Attribute.MenuPath != NULL) {
    FreePool (Attribute.MenuPath);
  }

  if (FullMenuPath != NULL) {
    FreePool (FullMenuPath);
  }

  return Status;
}
