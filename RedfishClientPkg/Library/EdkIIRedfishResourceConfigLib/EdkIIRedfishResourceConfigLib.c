/** @file
  Redfish resource config library implementation

  (C) Copyright 2022 Hewlett Packard Enterprise Development LP<BR>
  Copyright (c) 2022-2024, NVIDIA CORPORATION & AFFILIATES. All rights reserved.

  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include "EdkIIRedfishResourceConfigInternal.h"

REDFISH_CONFIG_PROTOCOL_CACHE                    *mRedfishResourceConfigCache  = NULL;
REDFISH_CONFIG_PROTOCOL_CACHE                    *mRedfishResourceConfig2Cache = NULL;
EDKII_REDFISH_FEATURE_INTERCHANGE_DATA_PROTOCOL  mRedfishFeatureInterchangeData;

/**

  Get schema information by parsing JsonText.

  @param[in]  JsonText            Redfish data in JSON format.
  @param[out] SchemaInfo          Returned schema information.

  @retval     EFI_SUCCESS         Schema information is returned successfully.
  @retval     Others              Errors occur.

**/
EFI_STATUS
GetRedfishSchemaInfoFromJson (
  IN  CHAR8                *JsonText,
  OUT REDFISH_SCHEMA_INFO  *SchemaInfo
  )
{
  EFI_STATUS        Status;
  EDKII_JSON_VALUE  SchemaObj;
  EDKII_JSON_VALUE  OdataTypeObj;
  CONST CHAR8       *OdataTypeString;
  CHAR8             *Seeker;
  CHAR8             *TargetStr;

  if (IS_EMPTY_STRING (JsonText) || (SchemaInfo == NULL)) {
    return EFI_INVALID_PARAMETER;
  }

  SchemaObj    = NULL;
  OdataTypeObj = NULL;
  Status       = EFI_SUCCESS;

  SchemaObj = JsonLoadString (JsonText, 0, NULL);
  if ((SchemaObj == NULL) || !JsonValueIsObject (SchemaObj)) {
    return EFI_VOLUME_CORRUPTED;
  }

  OdataTypeObj = JsonObjectGetValue (JsonValueGetObject (SchemaObj), SCHEMA_ODATA_TYPE);
  if (!JsonValueIsString (OdataTypeObj)) {
    DEBUG ((DEBUG_ERROR, "%a, cannot find %a\n", __func__, SCHEMA_ODATA_TYPE));
    Status = EFI_NOT_FOUND;
    goto ON_RELEASE;
  }

  OdataTypeString = JsonValueGetAsciiString (OdataTypeObj);
  if (IS_EMPTY_STRING (OdataTypeString)) {
    Status = EFI_NOT_FOUND;
    goto ON_RELEASE;
  }

  DEBUG ((DEBUG_MANAGEABILITY, "%a, odata.type: %a\n", __func__, OdataTypeString));

  ZeroMem (SchemaInfo, sizeof (REDFISH_SCHEMA_INFO));
  //
  // Parse string to get schema name and version
  //
  Seeker = AsciiStrStr (OdataTypeString, "#");
  if (Seeker == NULL) {
    Status = EFI_NOT_FOUND;
    goto ON_RELEASE;
  }

  TargetStr = Seeker + 1;

  Seeker = AsciiStrStr (TargetStr, ".");
  if (Seeker == NULL) {
    Status = EFI_NOT_FOUND;
    goto ON_RELEASE;
  }

  AsciiStrnCpyS (SchemaInfo->Schema, REDFISH_SCHEMA_STRING_SIZE, TargetStr, (Seeker - TargetStr));

  //
  // Schema version major number
  //
  TargetStr = Seeker + 1;
  if (TargetStr[0] != 'v') {
    Status = EFI_NOT_FOUND;
    goto ON_RELEASE;
  }

  TargetStr += 1;

  Seeker = AsciiStrStr (TargetStr, "_");
  if (Seeker == NULL) {
    Status = EFI_NOT_FOUND;
    goto ON_RELEASE;
  }

  AsciiStrnCpyS (SchemaInfo->Major, REDFISH_SCHEMA_VERSION_SIZE, TargetStr, (Seeker - TargetStr));

  //
  // Schema version minor number
  //
  TargetStr = Seeker + 1;
  Seeker    = AsciiStrStr (TargetStr, "_");
  if (Seeker == NULL) {
    Status = EFI_NOT_FOUND;
    goto ON_RELEASE;
  }

  AsciiStrnCpyS (SchemaInfo->Minor, REDFISH_SCHEMA_VERSION_SIZE, TargetStr, (Seeker - TargetStr));

  //
  // Schema version errata number
  //
  TargetStr = Seeker + 1;
  Seeker    = AsciiStrStr (TargetStr, ".");
  if (Seeker == NULL) {
    Status = EFI_NOT_FOUND;
    goto ON_RELEASE;
  }

  AsciiStrnCpyS (SchemaInfo->Errata, REDFISH_SCHEMA_VERSION_SIZE, TargetStr, (Seeker - TargetStr));

  DEBUG ((DEBUG_MANAGEABILITY, "%a, schema: %a\n", __func__, SchemaInfo->Schema));
  DEBUG ((DEBUG_MANAGEABILITY, "%a, major:  %a\n", __func__, SchemaInfo->Major));
  DEBUG ((DEBUG_MANAGEABILITY, "%a, minor:  %a\n", __func__, SchemaInfo->Minor));
  DEBUG ((DEBUG_MANAGEABILITY, "%a, errata: %a\n", __func__, SchemaInfo->Errata));

ON_RELEASE:

  if (SchemaObj != NULL) {
    JsonValueFree (SchemaObj);
  }

  return Status;
}

/**
  This function checks the schema version in InputJson to see if it matches
  SchemaInfo. If not, it will replace "@odata.type" value to the schema information
  provided by SchemaInfo. It's caller's responsibility to release OutputJson by calling
  FreePool().

  @param[in]  SchemaInfo          Desired schema information.
  @param[in]  InputJson           JSON data on input.
  @param[out] OutputJson          Patched JSON data on output.

  @retval     EFI_SUCCESS         OutputJson is returned successfully.
  @retval     Others              Errors occur.

**/
EFI_STATUS
RedfishSetCompatibleSchemaVersion (
  IN REDFISH_SCHEMA_INFO  *SchemaInfo,
  IN CHAR8                *InputJson,
  OUT CHAR8               **OutputJson
  )
{
  EFI_STATUS           Status;
  REDFISH_SCHEMA_INFO  JsonSchemaInfo;
  EDKII_JSON_VALUE     PatchedObj;
  EDKII_JSON_VALUE     OdataTypeObj;
  CHAR8                OdataTypeString[SCHEMA_ODATA_TYPE_MAX_LEN];

  if ((SchemaInfo == NULL) || IS_EMPTY_STRING (InputJson) || (OutputJson == NULL)) {
    return EFI_INVALID_PARAMETER;
  }

  *OutputJson  = NULL;
  PatchedObj   = NULL;
  OdataTypeObj = NULL;
  Status       = GetRedfishSchemaInfoFromJson (InputJson, &JsonSchemaInfo);
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a: Can not get schema information: %r\n", __func__, Status));
    return Status;
  }

  if (AsciiStrCmp (JsonSchemaInfo.Schema, SchemaInfo->Schema) != 0) {
    //
    // Wrong schema
    //
    return EFI_UNSUPPORTED;
  }

  if ((AsciiStrCmp (JsonSchemaInfo.Major, SchemaInfo->Major) == 0) &&
      (AsciiStrCmp (JsonSchemaInfo.Minor, SchemaInfo->Minor) == 0) &&
      (AsciiStrCmp (JsonSchemaInfo.Errata, SchemaInfo->Errata) == 0)
      )
  {
    //
    // Perfect match. We don't need to do anything.
    //
    return EFI_SUCCESS;
  }

  DEBUG ((DEBUG_WARN, "%a, Compatible mode enabled!!\n", __func__));
  AsciiSPrint (OdataTypeString, sizeof (OdataTypeString), "#%a.v%a_%a_%a.%a", SchemaInfo->Schema, SchemaInfo->Major, SchemaInfo->Minor, SchemaInfo->Errata, SchemaInfo->Schema);

  PatchedObj = JsonLoadString (InputJson, 0, NULL);
  if (!JsonValueIsObject (PatchedObj)) {
    return EFI_VOLUME_CORRUPTED;
  }

  OdataTypeObj = JsonValueInitAsciiString (OdataTypeString);
  if (!JsonValueIsString (OdataTypeObj)) {
    Status = EFI_OUT_OF_RESOURCES;
    goto ON_RELEASE;
  }

  Status = JsonObjectSetValue (PatchedObj, SCHEMA_ODATA_TYPE, OdataTypeObj);
  if (!EFI_ERROR (Status)) {
    *OutputJson = JsonDumpString (PatchedObj, EDKII_JSON_COMPACT);
    if (*OutputJson == NULL) {
      Status = EFI_OUT_OF_RESOURCES;
    }
  }

ON_RELEASE:

  if (PatchedObj != NULL) {
    JsonValueFree (PatchedObj);
  }

  return Status;
}

/**

  This function checks to see if the protocol of supporting target schema is cached or not.

  @param[in]  ProtocolCache   Instance of protocol cache.
  @param[in]  TargetSchema    Target schema.

  @retval     TRUE   Protocol of supporting target schema is cached.
  @retval     FALSE  Protocol of supporting target schema is not found in cache.

**/
BOOLEAN
IsProtocolCached (
  IN REDFISH_CONFIG_PROTOCOL_CACHE  *ProtocolCache,
  IN REDFISH_SCHEMA_INFO            *TargetSchema
  )
{
  if ((ProtocolCache == NULL) || (TargetSchema == NULL)) {
    return FALSE;
  }

  if ((AsciiStrCmp (TargetSchema->Schema, ProtocolCache->SchemaInfoCache.Schema) != 0)) {
    return FALSE;
  }

  if (PcdGetBool (PcdRedfishCompatibleSchemaSupport) && ProtocolCache->CompatibleMode) {
    DEBUG ((
      DEBUG_WARN,
      "Compatible mode enabled!! Select cache %a %a.%a.%a to support %a %a.%a.%a\n",
      ProtocolCache->SchemaInfoCache.Schema,
      ProtocolCache->SchemaInfoCache.Major,
      ProtocolCache->SchemaInfoCache.Minor,
      ProtocolCache->SchemaInfoCache.Errata,
      TargetSchema->Schema,
      TargetSchema->Major,
      TargetSchema->Minor,
      TargetSchema->Errata
      ));
    return TRUE;
  }

  if ((AsciiStrCmp (TargetSchema->Major, ProtocolCache->SchemaInfoCache.Major) == 0) &&
      (AsciiStrCmp (TargetSchema->Minor, ProtocolCache->SchemaInfoCache.Minor) == 0) &&
      (AsciiStrCmp (TargetSchema->Errata, ProtocolCache->SchemaInfoCache.Errata) == 0))
  {
    return TRUE;
  }

  return FALSE;
}

/**

  This function compares two schema version and return the result.

  @param[in]  SchemaLeft    Schema on left.
  @param[in]  SchemaRight   Schema on right.

  @retval    SCHEMA_VERSION_COMPARE_RESULT

**/
SCHEMA_VERSION_COMPARE_RESULT
CompareSchemaVersion (
  IN REDFISH_SCHEMA_INFO  *SchemaLeft,
  IN REDFISH_SCHEMA_INFO  *SchemaRight
  )
{
  UINTN  LeftVersionNumber;
  UINTN  RightVersionNumber;

  if ((SchemaLeft == NULL) || (SchemaRight == NULL)) {
    return SCHEMA_COMPARE_ERROR;
  }

  LeftVersionNumber  = AsciiStrDecimalToUintn (SchemaLeft->Major);
  RightVersionNumber = AsciiStrDecimalToUintn (SchemaRight->Major);
  if (LeftVersionNumber > RightVersionNumber) {
    return SCHEMA_LEFT_GREATER_THAN_RIGHT;
  } else if (LeftVersionNumber < RightVersionNumber) {
    return SCHEMA_LEFT_SMALLER_THAN_RIGHT;
  }

  LeftVersionNumber  = AsciiStrDecimalToUintn (SchemaLeft->Minor);
  RightVersionNumber = AsciiStrDecimalToUintn (SchemaRight->Minor);
  if (LeftVersionNumber > RightVersionNumber) {
    return SCHEMA_LEFT_GREATER_THAN_RIGHT;
  } else if (LeftVersionNumber < RightVersionNumber) {
    return SCHEMA_LEFT_SMALLER_THAN_RIGHT;
  }

  LeftVersionNumber  = AsciiStrDecimalToUintn (SchemaLeft->Errata);
  RightVersionNumber = AsciiStrDecimalToUintn (SchemaRight->Errata);
  if (LeftVersionNumber > RightVersionNumber) {
    return SCHEMA_LEFT_GREATER_THAN_RIGHT;
  } else if (LeftVersionNumber < RightVersionNumber) {
    return SCHEMA_LEFT_SMALLER_THAN_RIGHT;
  }

  return SCHEMA_LEFT_EQUAL_TO_RIGHT;
}

/**

  This function keep protocol data to cache instance.

  @param[in,out]  ProtocolCache     Cache instance to keep protocol data.
  @param[in]      ProtocolHandle    Protocol handle.
  @param[in]      ProtocolPointer   Pointer to protocol instance.
  @param[in]      ProtocolSchema    Pointer to protocol schema.
  @param[in]      CompatibleEnabled TRUE when compatible mode is enabled. FALSE otherwise.
  @param[in]      IsVersion2        ProtocolPointer is config2 protocol or not.

  @retval     EFI_SUCCESS         Protocol data is properly cached.
  @retval     Others              Errors occur.

**/
EFI_STATUS
CacheConfigProtocol (
  IN OUT REDFISH_CONFIG_PROTOCOL_CACHE  *ProtocolCache,
  IN EFI_HANDLE                         ProtocolHandle,
  IN VOID                               *ProtocolPointer,
  IN REDFISH_SCHEMA_INFO                *ProtocolSchema,
  IN BOOLEAN                            CompatibleEnabled,
  IN BOOLEAN                            IsVersion2
  )
{
  if ((ProtocolCache == NULL) || (ProtocolHandle == NULL) || (ProtocolPointer == NULL) || (ProtocolSchema == NULL)) {
    return EFI_INVALID_PARAMETER;
  }

  ProtocolCache->CompatibleMode = CompatibleEnabled;
  ProtocolCache->CachedHandle   = ProtocolHandle;
  if (IsVersion2) {
    ProtocolCache->RedfishResourceConfig.Config2Protocol = ProtocolPointer;
  } else {
    ProtocolCache->RedfishResourceConfig.ConfigProtocol = ProtocolPointer;
  }

  CopyMem (&ProtocolCache->SchemaInfoCache, ProtocolSchema, sizeof (REDFISH_SCHEMA_INFO));

  return EFI_SUCCESS;
}

/**

  Get schema information by given protocol and service instance if JsonText
  is NULL or empty. When JsonText is provided by caller, this function read
  schema information from JsonText.

  @param[in]  RedfishService      Pointer to Redfish service instance.
  @param[in]  JsonStructProtocol  Json Structure protocol instance.
  @param[in]  Uri                 Target URI.
  @param[in]  JsonText            Redfish data in JSON format. This is optional.
  @param[out] SchemaInfo          Returned schema information.

  @retval     EFI_SUCCESS         Schema information is returned successfully.
  @retval     Others              Errors occur.

**/
EFI_STATUS
EFIAPI
GetRedfishSchemaInfo (
  IN  REDFISH_SERVICE                   *RedfishService,
  IN  EFI_REST_JSON_STRUCTURE_PROTOCOL  *JsonStructProtocol,
  IN  EFI_STRING                        Uri,
  IN  CHAR8                             *JsonText OPTIONAL,
  OUT REDFISH_SCHEMA_INFO               *SchemaInfo
  )
{
  EFI_STATUS        Status;
  REDFISH_RESPONSE  Response;
  CHAR8             *JsonData;

  if (((RedfishService == NULL) && IS_EMPTY_STRING (Uri) && IS_EMPTY_STRING (JsonText)) || (SchemaInfo == NULL)) {
    return EFI_INVALID_PARAMETER;
  }

  JsonData = NULL;
  ZeroMem (&Response, sizeof (Response));
  if (IS_EMPTY_STRING (JsonText)) {
    Status = RedfishHttpGetResource (RedfishService, Uri, NULL, &Response, TRUE);
    if (EFI_ERROR (Status)) {
      DEBUG ((DEBUG_ERROR, "%a: failed to get resource from %s: %r", __func__, Uri, Status));
      return Status;
    }

    if (Response.Payload != NULL) {
      JsonData = JsonDumpString (RedfishJsonInPayload (Response.Payload), EDKII_JSON_COMPACT);
    }
  } else {
    JsonData = AllocateCopyPool (AsciiStrSize (JsonText), JsonText);
  }

  if (IS_EMPTY_STRING (JsonData)) {
    Status = EFI_NOT_FOUND;
    goto ON_RELEASE;
  }

  //
  // Get schema information from JSON data.
  //
  Status = GetRedfishSchemaInfoFromJson (JsonData, SchemaInfo);
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a: cannot get schema information: %r\n", __func__, Status));
    goto ON_RELEASE;
  }

ON_RELEASE:
  //
  // Release resource.
  //
  if (JsonData != NULL) {
    FreePool (JsonData);
  }

  RedfishHttpFreeResponse (&Response);

  return Status;
}

/**

  Get supported schema list by given specify schema name.

  @param[in]  Schema      Schema type name.
  @param[out] SchemaInfo  Returned schema information.

  @retval     EFI_SUCCESS         Schema information is returned successfully.
  @retval     Others              Errors occur.

**/
EFI_STATUS
EFIAPI
GetSupportedSchemaVersion (
  IN   CHAR8                *Schema,
  OUT  REDFISH_SCHEMA_INFO  *SchemaInfo
  )
{
  EFI_STATUS  Status;
  CHAR8       *SupportSchema;
  CHAR8       *SchemaName;
  UINTN       Index;
  UINTN       Index2;
  BOOLEAN     Found;

  if (IS_EMPTY_STRING (Schema) || (SchemaInfo == NULL)) {
    return EFI_INVALID_PARAMETER;
  }

  Status = RedfishPlatformConfigGetSupportedSchema (&SupportSchema);
  if (EFI_ERROR (Status)) {
    return Status;
  }

  DEBUG ((DEBUG_MANAGEABILITY, "Supported schema: %a\n", SupportSchema));

  Index      = 0;
  Found      = FALSE;
  SchemaName = SupportSchema;
  while (TRUE) {
    if ((SupportSchema[Index] == ';') || (SupportSchema[Index] == '\0')) {
      if (AsciiStrnCmp (&SchemaName[SCHEMA_NAME_PREFIX_OFFSET], Schema, AsciiStrLen (Schema)) == 0) {
        Found                = TRUE;
        SupportSchema[Index] = '\0';
        break;
      }

      SchemaName = &SupportSchema[Index + 1];
    }

    if (SupportSchema[Index] == '\0') {
      break;
    }

    ++Index;
  }

  if (Found) {
    AsciiStrCpyS (SchemaInfo->Schema, REDFISH_SCHEMA_STRING_SIZE, Schema);

    //
    // forward to '.'
    //
    Index = 0;
    while (SchemaName[Index] != '\0' && SchemaName[Index] != '.') {
      ++Index;
    }

    ASSERT (SchemaName[Index] != '\0');

    //
    // Skip '.' and 'v'
    //
    Index += 2;

    //
    // forward to '_'
    //
    Index2 = Index;
    while (SchemaName[Index2] != '\0' && SchemaName[Index2] != '_') {
      ++Index2;
    }

    ASSERT (SchemaName[Index2] != '\0');

    AsciiStrnCpyS (SchemaInfo->Major, REDFISH_SCHEMA_VERSION_SIZE, &SchemaName[Index], (Index2 - Index));
    Index = Index2;

    //
    // Skip '_'
    //
    ++Index;

    //
    // forward to '_'
    //
    Index2 = Index;
    while (SchemaName[Index2] != '\0' && SchemaName[Index2] != '_') {
      ++Index2;
    }

    ASSERT (SchemaName[Index2] != '\0');

    AsciiStrnCpyS (SchemaInfo->Minor, REDFISH_SCHEMA_VERSION_SIZE, &SchemaName[Index], (Index2 - Index));
    Index = Index2;

    //
    // Skip '_'
    //
    ++Index;

    AsciiStrCpyS (SchemaInfo->Errata, REDFISH_SCHEMA_VERSION_SIZE, &SchemaName[Index]);
  }

  FreePool (SupportSchema);

  return (Found ? EFI_SUCCESS : EFI_NOT_FOUND);
}

/**

  Find Redfish Resource Config Protocol that supports given schema and version.

  @param[in]  Schema      Schema name.
  @param[out] Handle      Pointer to receive the handle that has EDKII_REDFISH_RESOURCE_CONFIG_PROTOCOL
                          installed on it.

  @retval     EDKII_REDFISH_RESOURCE_CONFIG_PROTOCOL *    Pointer to protocol
  @retval     NULL                                        No protocol found.

**/
EDKII_REDFISH_RESOURCE_CONFIG_PROTOCOL  *
GetRedfishResourceConfigProtocol (
  IN  REDFISH_SCHEMA_INFO  *Schema,
  OUT EFI_HANDLE           *Handle OPTIONAL
  )
{
  EFI_STATUS                              Status;
  EFI_HANDLE                              *HandleBuffer;
  EFI_HANDLE                              CompatibleHandle;
  UINTN                                   NumberOfHandles;
  UINTN                                   Index;
  EDKII_REDFISH_RESOURCE_CONFIG_PROTOCOL  *Protocol;
  EDKII_REDFISH_RESOURCE_CONFIG_PROTOCOL  *CompatibleProtocol;
  REDFISH_SCHEMA_INFO                     SchemaInfo;
  REDFISH_SCHEMA_INFO                     CompatibleSchemaInfo;
  BOOLEAN                                 Found;
  SCHEMA_VERSION_COMPARE_RESULT           SchemaVersionResult;

  if (IS_EMPTY_STRING (Schema->Schema) ||
      IS_EMPTY_STRING (Schema->Major) ||
      IS_EMPTY_STRING (Schema->Minor) ||
      IS_EMPTY_STRING (Schema->Errata)
      )
  {
    return NULL;
  }

  HandleBuffer        = NULL;
  CompatibleHandle    = NULL;
  NumberOfHandles     = 0;
  Protocol            = NULL;
  CompatibleProtocol  = NULL;
  SchemaVersionResult = SCHEMA_COMPARE_ERROR;

  //
  // Search protocol cache to see if we can return protocol immediately or not.
  //
  if ((mRedfishResourceConfigCache != NULL) && (mRedfishResourceConfigCache->RedfishResourceConfig.ConfigProtocol != NULL)) {
    if (IsProtocolCached (mRedfishResourceConfigCache, Schema)) {
      if (Handle != NULL) {
        *Handle = mRedfishResourceConfigCache->CachedHandle;
      }

      return mRedfishResourceConfigCache->RedfishResourceConfig.ConfigProtocol;
    }
  }

  Status = gBS->LocateHandleBuffer (
                  ByProtocol,
                  &gEdkIIRedfishResourceConfigProtocolGuid,
                  NULL,
                  &NumberOfHandles,
                  &HandleBuffer
                  );
  if (EFI_ERROR (Status)) {
    return NULL;
  }

  Found = FALSE;

  for (Index = 0; Index < NumberOfHandles; Index++) {
    Status = gBS->HandleProtocol (
                    HandleBuffer[Index],
                    &gEdkIIRedfishResourceConfigProtocolGuid,
                    (VOID **)&Protocol
                    );
    if (EFI_ERROR (Status)) {
      continue;
    }

    Status = Protocol->GetInfo (Protocol, &SchemaInfo);
    if (EFI_ERROR (Status)) {
      continue;
    }

    if ((AsciiStrCmp (Schema->Schema, SchemaInfo.Schema) != 0)) {
      continue;
    }

    //
    // Compare schema version
    //
    SchemaVersionResult = CompareSchemaVersion (Schema, &SchemaInfo);
    if (SchemaVersionResult == SCHEMA_COMPARE_ERROR) {
      DEBUG ((
        DEBUG_ERROR,
        "%a, compare schema error %a %a.%a.%a vs %a %a.%a.%a\n",
        __func__,
        Schema->Schema,
        Schema->Major,
        Schema->Minor,
        Schema->Errata,
        SchemaInfo.Schema,
        SchemaInfo.Major,
        SchemaInfo.Minor,
        SchemaInfo.Errata
        ));
      continue;
    }

    if (SchemaVersionResult == SCHEMA_LEFT_EQUAL_TO_RIGHT) {
      //
      // Perfect match
      //
      Found = TRUE;
      break;
    } else {
      if (!PcdGetBool (PcdRedfishCompatibleSchemaSupport)) {
        continue;
      }

      //
      // Check to see if this schema version is Compatible or not.
      // The rule is: we can use old schema version to support new schema version
      // because old/deprecated attributes will still be in new schema version.
      //
      if (SchemaVersionResult == SCHEMA_LEFT_SMALLER_THAN_RIGHT) {
        continue;
      }

      CompatibleHandle   = HandleBuffer[Index];
      CompatibleProtocol = Protocol;
      CopyMem (&CompatibleSchemaInfo, &SchemaInfo, sizeof (REDFISH_SCHEMA_INFO));
    }
  }

  if (Found) {
    CacheConfigProtocol (mRedfishResourceConfigCache, HandleBuffer[Index], Protocol, Schema, FALSE, FALSE);
    if (Handle != NULL) {
      *Handle = HandleBuffer[Index];
    }
  } else if (CompatibleHandle != NULL) {
    DEBUG ((
      DEBUG_WARN,
      "Compatible mode enabled!! Select %a %a.%a.%a to support %a %a.%a.%a\n",
      CompatibleSchemaInfo.Schema,
      CompatibleSchemaInfo.Major,
      CompatibleSchemaInfo.Minor,
      CompatibleSchemaInfo.Errata,
      Schema->Schema,
      Schema->Major,
      Schema->Minor,
      Schema->Errata
      ));

    CacheConfigProtocol (mRedfishResourceConfigCache, CompatibleHandle, CompatibleProtocol, &CompatibleSchemaInfo, TRUE, FALSE);

    if (Handle != NULL) {
      *Handle = CompatibleHandle;
    }

    Found    = TRUE;
    Protocol = CompatibleProtocol;
  }

  FreePool (HandleBuffer);

  return (Found ? Protocol : NULL);
}

/**

  Find Redfish Resource Config2 Protocol that supports given schema and version.

  @param[in]  Schema      Schema name.
  @param[out] Handle      Pointer to receive the handle that has EDKII_REDFISH_RESOURCE_CONFIG2_PROTOCOL
                          installed on it.

  @retval     EDKII_REDFISH_RESOURCE_CONFIG2_PROTOCOL *    Pointer to protocol
  @retval     NULL                                         No protocol found.

**/
EDKII_REDFISH_RESOURCE_CONFIG2_PROTOCOL  *
GetRedfishResourceConfig2Protocol (
  IN  REDFISH_SCHEMA_INFO  *Schema,
  OUT EFI_HANDLE           *Handle OPTIONAL
  )
{
  EFI_STATUS                               Status;
  EFI_HANDLE                               *HandleBuffer;
  EFI_HANDLE                               CompatibleHandle;
  UINTN                                    NumberOfHandles;
  UINTN                                    Index;
  EDKII_REDFISH_RESOURCE_CONFIG2_PROTOCOL  *Protocol;
  EDKII_REDFISH_RESOURCE_CONFIG2_PROTOCOL  *CompatibleProtocol;
  REDFISH_SCHEMA_INFO                      SchemaInfo;
  REDFISH_SCHEMA_INFO                      CompatibleSchemaInfo;
  BOOLEAN                                  Found;
  SCHEMA_VERSION_COMPARE_RESULT            SchemaVersionResult;

  if (IS_EMPTY_STRING (Schema->Schema) ||
      IS_EMPTY_STRING (Schema->Major) ||
      IS_EMPTY_STRING (Schema->Minor) ||
      IS_EMPTY_STRING (Schema->Errata)
      )
  {
    return NULL;
  }

  HandleBuffer        = NULL;
  CompatibleHandle    = NULL;
  NumberOfHandles     = 0;
  Protocol            = NULL;
  CompatibleProtocol  = NULL;
  SchemaVersionResult = SCHEMA_COMPARE_ERROR;

  //
  // Search protocol cache to see if we can return protocol immediately or not.
  //
  if ((mRedfishResourceConfig2Cache != NULL) && (mRedfishResourceConfig2Cache->RedfishResourceConfig.Config2Protocol != NULL)) {
    if (IsProtocolCached (mRedfishResourceConfig2Cache, Schema)) {
      if (Handle != NULL) {
        *Handle = mRedfishResourceConfig2Cache->CachedHandle;
      }

      return mRedfishResourceConfig2Cache->RedfishResourceConfig.Config2Protocol;
    }
  }

  Status = gBS->LocateHandleBuffer (
                  ByProtocol,
                  &gEdkIIRedfishResourceConfig2ProtocolGuid,
                  NULL,
                  &NumberOfHandles,
                  &HandleBuffer
                  );
  if (EFI_ERROR (Status)) {
    return NULL;
  }

  Found = FALSE;

  for (Index = 0; Index < NumberOfHandles; Index++) {
    Status = gBS->HandleProtocol (
                    HandleBuffer[Index],
                    &gEdkIIRedfishResourceConfig2ProtocolGuid,
                    (VOID **)&Protocol
                    );
    if (EFI_ERROR (Status)) {
      continue;
    }

    Status = Protocol->GetInfo (Protocol, &SchemaInfo);
    if (EFI_ERROR (Status)) {
      continue;
    }

    if ((AsciiStrCmp (Schema->Schema, SchemaInfo.Schema) != 0)) {
      continue;
    }

    //
    // Compare schema version
    //
    SchemaVersionResult = CompareSchemaVersion (Schema, &SchemaInfo);
    if (SchemaVersionResult == SCHEMA_COMPARE_ERROR) {
      DEBUG ((
        DEBUG_ERROR,
        "%a, compare schema error %a %a.%a.%a vs %a %a.%a.%a\n",
        __func__,
        Schema->Schema,
        Schema->Major,
        Schema->Minor,
        Schema->Errata,
        SchemaInfo.Schema,
        SchemaInfo.Major,
        SchemaInfo.Minor,
        SchemaInfo.Errata
        ));
      continue;
    }

    if (SchemaVersionResult == SCHEMA_LEFT_EQUAL_TO_RIGHT) {
      //
      // Perfect match
      //
      Found = TRUE;
      break;
    } else {
      if (!PcdGetBool (PcdRedfishCompatibleSchemaSupport)) {
        continue;
      }

      //
      // Check to see if this schema version is Compatible or not.
      // The rule is: we can use old schema version to support new schema version
      // because old/deprecated attributes will still be in new schema version.
      //
      if (SchemaVersionResult == SCHEMA_LEFT_SMALLER_THAN_RIGHT) {
        continue;
      }

      CompatibleHandle   = HandleBuffer[Index];
      CompatibleProtocol = Protocol;
      CopyMem (&CompatibleSchemaInfo, &SchemaInfo, sizeof (REDFISH_SCHEMA_INFO));
    }
  }

  if (Found) {
    CacheConfigProtocol (mRedfishResourceConfig2Cache, HandleBuffer[Index], Protocol, Schema, FALSE, TRUE);
    if (Handle != NULL) {
      *Handle = HandleBuffer[Index];
    }
  } else if (CompatibleHandle != NULL) {
    DEBUG ((
      DEBUG_WARN,
      "Compatible mode enabled!! Select %a %a.%a.%a to support %a %a.%a.%a\n",
      CompatibleSchemaInfo.Schema,
      CompatibleSchemaInfo.Major,
      CompatibleSchemaInfo.Minor,
      CompatibleSchemaInfo.Errata,
      Schema->Schema,
      Schema->Major,
      Schema->Minor,
      Schema->Errata
      ));

    CacheConfigProtocol (mRedfishResourceConfig2Cache, CompatibleHandle, CompatibleProtocol, &CompatibleSchemaInfo, TRUE, TRUE);

    if (Handle != NULL) {
      *Handle = CompatibleHandle;
    }

    Found    = TRUE;
    Protocol = CompatibleProtocol;
  }

  FreePool (HandleBuffer);

  return (Found ? Protocol : NULL);
}

/**
  Install EDKII_REDFISH_FEATURE_INTERCHANGE_DATA_PROTOCOL
  on child feature driver handle.

  @param[in]   Handle  Handle to install EDKII_REDFISH_FEATURE_INTERCHANGE_DATA_PROTOCOL.
  @param[in]   InformationExchange Pointer to RESOURCE_INFORMATION_EXCHANGE.

  @retval EFI_SUCCESS              Value is returned successfully.
  @retval Others                   Some error happened.

**/
EFI_STATUS
InstallInterchangeDataProtocol (
  IN  EFI_HANDLE                     Handle,
  IN  RESOURCE_INFORMATION_EXCHANGE  *InformationExchange
  )
{
  EFI_STATUS                                       Status;
  EDKII_REDFISH_FEATURE_INTERCHANGE_DATA_PROTOCOL  *Interface;

  Status = gBS->HandleProtocol (
                  Handle,
                  &gEdkIIRedfishFeatureInterchangeDataProtocolGuid,
                  (VOID **)&Interface
                  );
  if (!EFI_ERROR (Status)) {
    Interface->ResourceInformationExchage = InformationExchange;
    return EFI_SUCCESS;
  }

  if (Status == EFI_UNSUPPORTED) {
    mRedfishFeatureInterchangeData.ResourceInformationExchage = InformationExchange;
    Status                                                    = gBS->InstallProtocolInterface (
                                                                       &Handle,
                                                                       &gEdkIIRedfishFeatureInterchangeDataProtocolGuid,
                                                                       EFI_NATIVE_INTERFACE,
                                                                       (VOID *)&mRedfishFeatureInterchangeData
                                                                       );
  }

  return Status;
}

/**
  Set Configure language of this resource in the
  RESOURCE_INFORMATION_EXCHANGE structure.

  @param[in]   ImageHandle     Pointer to image handle.
  @param[in]   ConfigLangList  Pointer to REDFISH_FEATURE_ARRAY_TYPE_CONFIG_LANG_LIST.

  @retval EFI_SUCCESS              Configure language is set.
  @retval EFI_UNSUPPORTED          EdkIIRedfishFeatureInterchangeDataProtocol is not found.
  @retval Others                   Some error happened.

**/
EFI_STATUS
EFIAPI
EdkIIRedfishResourceSetConfigureLang (
  IN EFI_HANDLE                                   ImageHandle,
  IN REDFISH_FEATURE_ARRAY_TYPE_CONFIG_LANG_LIST  *ConfigLangList
  )
{
  EFI_STATUS                                       Status;
  UINTN                                            Index;
  EDKII_REDFISH_FEATURE_INTERCHANGE_DATA_PROTOCOL  *Interface;

  if ((ImageHandle == NULL) || (ConfigLangList == NULL)) {
    return EFI_INVALID_PARAMETER;
  }

  if ((ConfigLangList->Count == 0) || (ConfigLangList->List == NULL)) {
    return EFI_NOT_FOUND;
  }

  Status = gBS->HandleProtocol (
                  ImageHandle,
                  &gEdkIIRedfishFeatureInterchangeDataProtocolGuid,
                  (VOID **)&Interface
                  );
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a: EDKII_REDFISH_FEATURE_INTERCHANGE_DATA_PROTOCOL is not installed on %p: %r\n", __func__, ImageHandle, Status));
    return Status;
  }

  Interface->ResourceInformationExchage->ReturnedInformation.Type                        = InformationTypeCollectionMemberConfigLanguage;
  Interface->ResourceInformationExchage->ReturnedInformation.ConfigureLanguageList.Count = ConfigLangList->Count;
  Interface->ResourceInformationExchage->ReturnedInformation.ConfigureLanguageList.List  =
    AllocateZeroPool (sizeof (REDFISH_FEATURE_ARRAY_TYPE_CONFIG_LANG) * ConfigLangList->Count);
  if (Interface->ResourceInformationExchage->ReturnedInformation.ConfigureLanguageList.List == NULL) {
    DEBUG ((DEBUG_ERROR, "%a: Fail to allocate memory for REDFISH_FEATURE_ARRAY_TYPE_CONFIG_LANG.\n", __func__));
    return EFI_OUT_OF_RESOURCES;
  }

  for (Index = 0; Index < ConfigLangList->Count; Index++) {
    Interface->ResourceInformationExchage->ReturnedInformation.ConfigureLanguageList.List[Index].Index         = ConfigLangList->List[Index].Index;
    Interface->ResourceInformationExchage->ReturnedInformation.ConfigureLanguageList.List[Index].ConfigureLang =
      (EFI_STRING)AllocateCopyPool (StrSize (ConfigLangList->List[Index].ConfigureLang), (VOID *)ConfigLangList->List[Index].ConfigureLang);
  }

  return EFI_SUCCESS;
}

/**
  Provision redfish resource by given URI.

  @param[in]   Schema              Redfish schema information.
  @param[in]   Uri                 Target URI to create resource.
  @param[in]   JsonText            The JSON data in ASCII string format. This is optional.
  @param[in]   InformationExchange Pointer to RESOURCE_INFORMATION_EXCHANGE.
  @param[in]   HttpPostMode        TRUE if resource does not exist, HTTP POST method is used.
                                   FALSE if the resource exist but some of properties are missing,
                                   HTTP PUT method is used.

  @retval EFI_SUCCESS              Value is returned successfully.
  @retval Others                   Some error happened.

**/
EFI_STATUS
EFIAPI
EdkIIRedfishResourceConfigProvisioning (
  IN     REDFISH_SCHEMA_INFO            *Schema,
  IN     EFI_STRING                     Uri,
  IN     CHAR8                          *JsonText OPTIONAL,
  IN     RESOURCE_INFORMATION_EXCHANGE  *InformationExchange,
  IN     BOOLEAN                        HttpPostMode
  )
{
  EFI_HANDLE                               Handle;
  EDKII_REDFISH_RESOURCE_CONFIG_PROTOCOL   *ConfigProtocol;
  EDKII_REDFISH_RESOURCE_CONFIG2_PROTOCOL  *Config2Protocol;

  //
  // Initialization.
  //
  Handle          = NULL;
  ConfigProtocol  = NULL;
  Config2Protocol = NULL;

  //
  // Try to use config2 protocol first.
  //
  Config2Protocol = GetRedfishResourceConfig2Protocol (Schema, &Handle);
  if ((Config2Protocol != NULL) && (Handle != NULL)) {
    //
    // Install EDKII_REDFISH_FEATURE_INTERCHANGE_DATA_PROTOCOL on the child
    // feature driver handle.
    //
    InstallInterchangeDataProtocol (Handle, InformationExchange);
    return Config2Protocol->Provisioning (Config2Protocol, Uri, JsonText, HttpPostMode);
  }

  ConfigProtocol = GetRedfishResourceConfigProtocol (Schema, &Handle);
  if ((ConfigProtocol == NULL) || (Handle == NULL)) {
    return EFI_DEVICE_ERROR;
  }

  //
  // Install EDKII_REDFISH_FEATURE_INTERCHANGE_DATA_PROTOCOL on the child
  // feature driver handle.
  //
  InstallInterchangeDataProtocol (Handle, InformationExchange);
  return ConfigProtocol->Provisioning (ConfigProtocol, Uri, HttpPostMode);
}

/**
  Consume resource from given URI.

  @param[in]   Schema              Redfish schema information.
  @param[in]   Uri                 The target URI to consume.
  @param[in]   JsonText            The JSON data in ASCII string format. This is optional.

  @retval EFI_SUCCESS              Value is returned successfully.
  @retval Others                   Some error happened.

**/
EFI_STATUS
EFIAPI
EdkIIRedfishResourceConfigConsume (
  IN     REDFISH_SCHEMA_INFO  *Schema,
  IN     EFI_STRING           Uri,
  IN     CHAR8                *JsonText OPTIONAL
  )
{
  EDKII_REDFISH_RESOURCE_CONFIG_PROTOCOL   *ConfigProtocol;
  EDKII_REDFISH_RESOURCE_CONFIG2_PROTOCOL  *Config2Protocol;

  //
  // Initialization.
  //
  ConfigProtocol  = NULL;
  Config2Protocol = NULL;

  //
  // Try to use config2 protocol first.
  //
  Config2Protocol = GetRedfishResourceConfig2Protocol (Schema, NULL);
  if (Config2Protocol != NULL) {
    return Config2Protocol->Consume (Config2Protocol, Uri, JsonText);
  }

  ConfigProtocol = GetRedfishResourceConfigProtocol (Schema, NULL);
  if (ConfigProtocol == NULL) {
    return EFI_DEVICE_ERROR;
  }

  return ConfigProtocol->Consume (ConfigProtocol, Uri);
}

/**
  Update resource to given URI.

  @param[in]   Schema              Redfish schema information.
  @param[in]   Uri                 The target URI to consume.
  @param[in]   JsonText            The JSON data in ASCII string format. This is optional.

  @retval EFI_SUCCESS              Value is returned successfully.
  @retval Others                   Some error happened.

**/
EFI_STATUS
EFIAPI
EdkIIRedfishResourceConfigUpdate (
  IN     REDFISH_SCHEMA_INFO  *Schema,
  IN     EFI_STRING           Uri,
  IN     CHAR8                *JsonText OPTIONAL
  )
{
  EDKII_REDFISH_RESOURCE_CONFIG_PROTOCOL   *ConfigProtocol;
  EDKII_REDFISH_RESOURCE_CONFIG2_PROTOCOL  *Config2Protocol;

  //
  // Initialization.
  //
  ConfigProtocol  = NULL;
  Config2Protocol = NULL;

  //
  // Try to use config2 protocol first.
  //
  Config2Protocol = GetRedfishResourceConfig2Protocol (Schema, NULL);
  if (Config2Protocol != NULL) {
    return Config2Protocol->Update (Config2Protocol, Uri, JsonText);
  }

  ConfigProtocol = GetRedfishResourceConfigProtocol (Schema, NULL);
  if (ConfigProtocol == NULL) {
    return EFI_DEVICE_ERROR;
  }

  return ConfigProtocol->Update (ConfigProtocol, Uri);
}

/**
  Check resource on given URI.

  @param[in]   Schema              Redfish schema information.
  @param[in]   Uri                 The target URI to consume.
  @param[in]   JsonText            The JSON data in ASCII string format. This is optional.

  @retval EFI_SUCCESS              Value is returned successfully.
  @retval Others                   Some error happened.

**/
EFI_STATUS
EFIAPI
EdkIIRedfishResourceConfigCheck (
  IN     REDFISH_SCHEMA_INFO  *Schema,
  IN     EFI_STRING           Uri,
  IN     CHAR8                *JsonText OPTIONAL
  )
{
  EDKII_REDFISH_RESOURCE_CONFIG_PROTOCOL   *ConfigProtocol;
  EDKII_REDFISH_RESOURCE_CONFIG2_PROTOCOL  *Config2Protocol;

  //
  // Initialization.
  //
  ConfigProtocol  = NULL;
  Config2Protocol = NULL;

  //
  // Try to use config2 protocol first.
  //
  Config2Protocol = GetRedfishResourceConfig2Protocol (Schema, NULL);
  if (Config2Protocol != NULL) {
    return Config2Protocol->Check (Config2Protocol, Uri, JsonText);
  }

  ConfigProtocol = GetRedfishResourceConfigProtocol (Schema, NULL);
  if (ConfigProtocol == NULL) {
    return EFI_DEVICE_ERROR;
  }

  return ConfigProtocol->Check (ConfigProtocol, Uri);
}

/**
  Identify resource on given URI.

  @param[in]   Schema              Redfish schema information.
  @param[in]   Uri                 The target URI to consume.
  @param[in]   JsonText            The JSON data in ASCII string format. This is optional.
  @param[in]   InformationExchange Pointer to RESOURCE_INFORMATION_EXCHANGE.

  @retval EFI_SUCCESS              This is target resource which we want to handle.
  @retval EFI_UNSUPPORTED          This is not the target resource.
  @retval Others                   Some error happened.

**/
EFI_STATUS
EFIAPI
EdkIIRedfishResourceConfigIdentify (
  IN     REDFISH_SCHEMA_INFO            *Schema,
  IN     EFI_STRING                     Uri,
  IN     CHAR8                          *JsonText OPTIONAL,
  IN     RESOURCE_INFORMATION_EXCHANGE  *InformationExchange
  )
{
  EFI_HANDLE                               Handle;
  EDKII_REDFISH_RESOURCE_CONFIG_PROTOCOL   *ConfigProtocol;
  EDKII_REDFISH_RESOURCE_CONFIG2_PROTOCOL  *Config2Protocol;

  //
  // Initialization.
  //
  Handle          = NULL;
  ConfigProtocol  = NULL;
  Config2Protocol = NULL;

  //
  // Try to use config2 protocol first.
  //
  Config2Protocol = GetRedfishResourceConfig2Protocol (Schema, &Handle);
  if ((Config2Protocol != NULL) && (Handle != NULL)) {
    //
    // Install EDKII_REDFISH_FEATURE_INTERCHANGE_DATA_PROTOCOL on the child
    // feature driver handle.
    //
    InstallInterchangeDataProtocol (Handle, InformationExchange);
    return Config2Protocol->Identify (Config2Protocol, Uri, JsonText);
  }

  ConfigProtocol = GetRedfishResourceConfigProtocol (Schema, &Handle);
  if (ConfigProtocol == NULL) {
    return EFI_DEVICE_ERROR;
  }

  //
  // Install EDKII_REDFISH_FEATURE_INTERCHANGE_DATA_PROTOCOL on the child
  // feature driver handle.
  //
  InstallInterchangeDataProtocol (Handle, InformationExchange);
  return ConfigProtocol->Identify (ConfigProtocol, Uri);
}

/**

  Initial resource config library instance.

  @param[in] ImageHandle     The image handle.
  @param[in] SystemTable     The system table.

  @retval  EFI_SUCCESS  Install Boot manager menu success.
  @retval  Other        Return error status.

**/
EFI_STATUS
EFIAPI
RedfishResourceConfigConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  )
{
  mRedfishResourceConfigCache = AllocateZeroPool (sizeof (REDFISH_CONFIG_PROTOCOL_CACHE));
  if (mRedfishResourceConfigCache == NULL) {
    return EFI_OUT_OF_RESOURCES;
  }

  mRedfishResourceConfig2Cache = AllocateZeroPool (sizeof (REDFISH_CONFIG_PROTOCOL_CACHE));
  if (mRedfishResourceConfig2Cache == NULL) {
    return EFI_OUT_OF_RESOURCES;
  }

  ZeroMem (&mRedfishFeatureInterchangeData, sizeof (mRedfishFeatureInterchangeData));

  return EFI_SUCCESS;
}

/**
  Release allocated resource.

  @param[in] ImageHandle       Handle that identifies the image to be unloaded.
  @param[in] SystemTable      The system table.

  @retval EFI_SUCCESS      The image has been unloaded.

**/
EFI_STATUS
EFIAPI
RedfishResourceConfigDestructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  )
{
  if (mRedfishResourceConfigCache != NULL) {
    FreePool (mRedfishResourceConfigCache);
    mRedfishResourceConfigCache = NULL;
  }

  if (mRedfishResourceConfig2Cache != NULL) {
    FreePool (mRedfishResourceConfig2Cache);
    mRedfishResourceConfig2Cache = NULL;
  }

  return EFI_SUCCESS;
}
