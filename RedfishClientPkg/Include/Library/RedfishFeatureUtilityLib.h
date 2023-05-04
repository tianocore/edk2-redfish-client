/** @file
  This file defines the Redfish Feature Utility Library interface.

  (C) Copyright 2021 Hewlett Packard Enterprise Development LP<BR>

  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#ifndef REDFISH_FEATURE_UTILITY_LIB_H_
#define REDFISH_FEATURE_UTILITY_LIB_H_

#include <Protocol/EdkIIRedfishResourceConfigProtocol.h>
#include <Protocol/RestJsonStructure.h>

//
// Definition of REDFISH_FEATURE_ARRAY_TYPE_CONFIG_LANG
//
typedef struct {
  UINTN         Index;
  EFI_STRING    ConfigureLang;
} REDFISH_FEATURE_ARRAY_TYPE_CONFIG_LANG;

//
// Definition of REDFISH_FEATURE_ARRAY_TYPE_CONFIG_LANG_LIST
//
typedef struct {
  UINTN                                     Count;
  REDFISH_FEATURE_ARRAY_TYPE_CONFIG_LANG    *List;
} REDFISH_FEATURE_ARRAY_TYPE_CONFIG_LANG_LIST;

/**

  Read redfish resource by given resource path.

  @param[in]  Service       Redfish srvice instacne to make query.
  @param[in]  ResourcePath  Target resource path.
  @param[out] Response      HTTP response from redfish service.

  @retval     EFI_SUCCESS     Resrouce is returned successfully.
  @retval     Others          Errors occur.

**/
EFI_STATUS
GetResourceByPath (
  IN  REDFISH_SERVICE   *Service,
  IN  CHAR8             *ResourcePath,
  OUT REDFISH_RESPONSE  *Response
  );

/**

  Search HII database with given Configure Language pattern. Data is handled and
  returned in array.

  @param[in]  Schema                    The schema to search.
  @param[in]  Version                   The schema version.
  @param[in]  Pattern                   Configure Language pattern to search.
  @param[out] UnifiedConfigureLangList  The data returned by HII database.

  @retval     EFI_SUCCESS     Data is found and returned.
  @retval     Others          Errors occur.

**/
EFI_STATUS
RedfishFeatureGetUnifiedArrayTypeConfigureLang (
  IN     CHAR8                                        *Schema,
  IN     CHAR8                                        *Version,
  IN     EFI_STRING                                   Pattern,
  OUT    REDFISH_FEATURE_ARRAY_TYPE_CONFIG_LANG_LIST  *UnifiedConfigureLangList
  );

/**

  Get array key by parsing the URI.

  @param[in]  Uri     URI with array key.
  @param[out] ArrayKey  Array key in given URI string.

  @retval     EFI_SUCCESS         Array key is found.
  @retval     Others              Errors occur.

**/
EFI_STATUS
GetArraykeyFromUri (
  IN  CHAR8  *Uri,
  OUT CHAR8  **ArrayKey
  );

/**

  Keep configure language with given key in UEFI variable.

  @param[in]  Schema              Schema name.
  @param[in]  Version             Schema version.
  @param[in]  Key                 Key string.
  @param[in]  ConfigureLangIndex  Index value.

  @retval     EFI_SUCCESS         Data is saved in UEFI variable.
  @retval     Others              Errors occur.

**/
EFI_STATUS
SetConfigureLangWithkey (
  IN  CHAR8  *Schema,
  IN  CHAR8  *Version,
  IN  CHAR8  *Key,
  IN  UINTN  ConfigureLangIndex
  );

/**

  Find configure language with input key string.

  @param[in]  Schema    Schema name.
  @param[in]  Version   Schema version.
  @param[in]  Property  Property name.
  @param[in]  Key       Key string.

  @retval     CHAR16 *  Corresponding configure langauge
  @retval     NULL      No configure language is found

**/
CHAR16 *
GetConfigureLangByKey (
  IN  CHAR8  *Schema,
  IN  CHAR8  *Version,
  IN  CHAR8  *Property,
  IN  CHAR8  *Key
  );

/**

  Convert HII string value to string value in JSON format.

  @param[in]  HiiStringValue  String in HII format.

  @retval     CHAR8 *         String in JSON format.
  @retval     NULL            Errors occur.

**/
CHAR8 *
ConvertHiiStringValueToJsonStringValue (
  IN EFI_STRING  HiiStringValue
  );

/**

  Apply property value to UEFI HII database in string type.

  @param[in]  Schema        Property schema.
  @param[in]  Version       Property schema version.
  @param[in]  ConfigureLang Configure language refers to this property.
  @param[in]  FeatureValue  New value to set.

  @retval     EFI_SUCCESS     New value is applied successfully.
  @retval     Others          Errors occur.

**/
EFI_STATUS
ApplyFeatureSettingsStringType (
  IN  CHAR8       *Schema,
  IN  CHAR8       *Version,
  IN  EFI_STRING  ConfigureLang,
  IN  CHAR8       *FeatureValue
  );

/**

  Apply property value to UEFI HII database in numric type.

  @param[in]  Schema        Property schema.
  @param[in]  Version       Property schema version.
  @param[in]  ConfigureLang Configure language refers to this property.
  @param[in]  FeatureValue  New value to set.

  @retval     EFI_SUCCESS     New value is applied successfully.
  @retval     Others          Errors occur.

**/
EFI_STATUS
ApplyFeatureSettingsNumericType (
  IN  CHAR8       *Schema,
  IN  CHAR8       *Version,
  IN  EFI_STRING  ConfigureLang,
  IN  INTN        FeatureValue
  );

/**

  Apply property value to UEFI HII database in boolean type.

  @param[in]  Schema        Property schema.
  @param[in]  Version       Property schema version.
  @param[in]  ConfigureLang Configure language refers to this property.
  @param[in]  FeatureValue  New value to set.

  @retval     EFI_SUCCESS     New value is applied successfully.
  @retval     Others          Errors occur.

**/
EFI_STATUS
ApplyFeatureSettingsBooleanType (
  IN  CHAR8       *Schema,
  IN  CHAR8       *Version,
  IN  EFI_STRING  ConfigureLang,
  IN  BOOLEAN     FeatureValue
  );

/**

  Create HTTP payload and send them to redfish service with POST method.

  @param[in]  Service         Redfish service.
  @param[in]  TargetPayload   Target payload
  @param[in]  Json            Data in JSON format.
  @param[out] Location        Returned location string from Redfish service.
  @param[out] Etag            Returned ETAG string from Redfish service.

  @retval     EFI_SUCCESS     Data is sent to redfish service successfully.
  @retval     Others          Errors occur.

**/
EFI_STATUS
CreatePayloadToPostResource (
  IN  REDFISH_SERVICE  *Service,
  IN  REDFISH_PAYLOAD  *TargetPayload,
  IN  CHAR8            *Json,
  OUT CHAR8            **Location,
  OUT CHAR8            **Etag
  );

/**

  Create HTTP payload and send them to redfish service with PATCH method.

  @param[in]  Service         Redfish service.
  @param[in]  TargetPayload   Target payload
  @param[in]  Json            Data in JSON format.
  @param[out] Etag            Returned ETAG string from Redfish service.

  @retval     EFI_SUCCESS     Data is sent to redfish service successfully.
  @retval     Others          Errors occur.

**/
EFI_STATUS
CreatePayloadToPatchResource (
  IN  REDFISH_SERVICE  *Service,
  IN  REDFISH_PAYLOAD  *TargetPayload,
  IN  CHAR8            *Json,
  OUT CHAR8            **Etag
  );

/**

  Find Redfish Resource Config Protocol that supports given schema and version.

  @param[in]  Schema      Schema name.
  @param[in]  Major       Schema version major number.
  @param[in]  Minor       Schema version minor number.
  @param[in]  Errata      Schema version errata number.

  @retval     EDKII_REDFISH_RESOURCE_CONFIG_PROTOCOL *    Pointer to protocol
  @retval     NULL                                        No protocol found.

**/
EDKII_REDFISH_RESOURCE_CONFIG_PROTOCOL  *
GetRedfishResourceConfigProtocol (
  IN  CHAR8  *Schema,
  IN  CHAR8  *Major,
  IN  CHAR8  *Minor,
  IN  CHAR8  *Errata
  );

/**

  Get supported schema list by given specify schema name.

  @param[in]  Schema      Schema type name.
  @param[out] SchemaInfo  Returned schema information.

  @retval     EFI_SUCCESS         Schema information is returned successfully.
  @retval     Others              Errors occur.

**/
EFI_STATUS
GetSupportedSchemaVersion (
  IN   CHAR8                *Schema,
  OUT  REDFISH_SCHEMA_INFO  *SchemaInfo
  );

/**

  Return system root path

  @retval  NULL     Can not find system root path.
  @retval  Other    System root path is returned.

**/
CHAR8 *
RedfishGetSystemRootPath (
  VOID
  );

/**

  Get schema information by given protocol and service instance.

  @param[in]  RedfishService      Pointer to Redfish service instance.
  @param[in]  JsonStructProtocol  Json Structure protocol instance.
  @param[in]  Uri                 Target URI.
  @param[out] SchemaInfo          Returned schema information.

  @retval     EFI_SUCCESS         Schema information is returned successfully.
  @retval     Others              Errors occur.

**/
EFI_STATUS
GetRedfishSchemaInfo (
  IN  REDFISH_SERVICE                   *RedfishService,
  IN  EFI_REST_JSON_STRUCTURE_PROTOCOL  *JsonStructProtocol,
  IN  CHAR8                             *Uri,
  OUT REDFISH_SCHEMA_INFO               *SchemaInfo
  );

/**

  Get the property name by given Configure Langauge.

  @param[in]  ConfigureLang   Configure Language string.

  @retval     EFI_STRING      Pointer to property name.
  @retval     NULL            There is error.

**/
EFI_STRING
GetPropertyFromConfigureLang (
  IN EFI_STRING  ConfigureLang
  );

/**

  Get the property value in string type.

  @param[in]  Schema        Schema of this property.
  @param[in]  Version       Schema version.
  @param[in]  PropertyName  Property name.
  @param[in]  ConfigureLang Configure Language of this property.

  @retval     CHAR8*        Pointer to the CHAR8 buffer.
  @retval     NULL          There is error.

**/
CHAR8 *
GetPropertyStringValue (
  IN CHAR8       *Schema,
  IN CHAR8       *Version,
  IN EFI_STRING  PropertyName,
  IN EFI_STRING  ConfigureLang
  );

/**

  Get the property value in numeric type.

  @param[in]  Schema        Schema of this property.
  @param[in]  Version       Schema version.
  @param[in]  PropertyName  Property name.
  @param[in]  ConfigureLang Configure Language of this property.

  @retval     INT64*        Pointer to the INT64 value.
  @retval     NULL          There is error.

**/
INT64 *
GetPropertyNumericValue (
  IN CHAR8       *Schema,
  IN CHAR8       *Version,
  IN EFI_STRING  PropertyName,
  IN EFI_STRING  ConfigureLang
  );

/**

  Get the property value in Boolean type.

  @param[in]  Schema        Schema of this property.
  @param[in]  Version       Schema version.
  @param[in]  PropertyName  Property name.
  @param[in]  ConfigureLang Configure Language of this property.

  @retval     BOOLEAN       Boolean value returned by this property.

**/
BOOLEAN *
GetPropertyBooleanValue (
  IN CHAR8       *Schema,
  IN CHAR8       *Version,
  IN EFI_STRING  PropertyName,
  IN EFI_STRING  ConfigureLang
  );

/**

  Check and see if we need to do provisioning for this property.

  @param[in]  PropertyBuffer   Pointer to property instance.
  @param[in]  ProvisionMode    TRUE if we are in provision mode. FALSE otherwise.

  @retval     TRUE             Provision is required.
  @retval     FALSE            Provision is not required.

**/
BOOLEAN
PropertyChecker (
  IN VOID     *PropertyBuffer,
  IN BOOLEAN  ProvisionMode
  );

/**

  Check and see if we need to do provisioning for this two properties.

  @param[in]  PropertyBuffer1   Pointer to property instance 1.
  @param[in]  PropertyBuffer2   Pointer to property instance 2.
  @param[in]  ProvisionMode     TRUE if we are in provision mode. FALSE otherwise.

  @retval     TRUE             Provision is required.
  @retval     FALSE            Provision is not required.

**/
BOOLEAN
PropertyChecker2Parm (
  IN VOID     *PropertyBuffer1,
  IN VOID     *PropertyBuffer2,
  IN BOOLEAN  ProvisionMode
  );

/**

  Keep ETAG string and URI string in database.

  @param[in]  EtagStr   ETAG string.
  @param[in]  Uri       URI string.

  @retval     EFI_SUCCESS     ETAG and URI are applied successfully.
  @retval     Others          Errors occur.

**/
EFI_STATUS
SetEtagWithUri (
  IN  CHAR8  *EtagStr,
  IN  CHAR8  *Uri
  );

/**

  Find ETAG string that refers to given URI.

  @param[in]  Uri       Target URI string.

  @retval     CHAR8 *   ETAG string
  @retval     NULL      No ETAG is found.

**/
CHAR8 *
GetEtagWithUri (
  IN  CHAR8  *Uri
  );

#endif
