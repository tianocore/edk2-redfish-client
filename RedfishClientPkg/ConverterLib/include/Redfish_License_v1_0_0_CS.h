//
// Auto-generated file by Redfish Schema C Structure Generator.
// https://github.com/DMTF/Redfish-Schema-C-Struct-Generator.
//
//  (C) Copyright 2019-2021 Hewlett Packard Enterprise Development LP<BR>
//
// Copyright Notice:
// Copyright 2019-2021 Distributed Management Task Force, Inc. All rights reserved.
// License: BSD 3-Clause License. For full text see link: https://github.com/DMTF/Redfish-JSON-C-Struct-Converter/blob/master/LICENSE.md
//

#ifndef RedfishLicense_V1_0_0_CSTRUCT_H_
#define RedfishLicense_V1_0_0_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef Redfishodatav4_idRef_Array_CS_
typedef struct _Redfishodatav4_idRef_Array_CS Redfishodatav4_idRef_Array_CS;
#endif
#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishLicense_V1_0_0_Actions_CS RedfishLicense_V1_0_0_Actions_CS;
typedef struct _RedfishLicense_V1_0_0_ContactInfo_CS RedfishLicense_V1_0_0_ContactInfo_CS;
typedef struct _RedfishLicense_V1_0_0_License_CS RedfishLicense_V1_0_0_License_CS;
typedef struct _RedfishLicense_V1_0_0_Links_CS RedfishLicense_V1_0_0_Links_CS;
typedef struct _RedfishLicense_V1_0_0_OemActions_CS RedfishLicense_V1_0_0_OemActions_CS;
#ifndef RedfishResource_Condition_CS_
typedef struct _RedfishResource_Condition_CS RedfishResource_Condition_CS;
#endif

#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

#ifndef RedfishResource_Status_CS_
typedef struct _RedfishResource_Status_CS RedfishResource_Status_CS;
#endif

#ifndef Redfishodatav4_idRef_CS_
typedef struct _Redfishodatav4_idRef_CS Redfishodatav4_idRef_CS;
#endif

//
// The available actions for this resource.
//
typedef struct _RedfishLicense_V1_0_0_Actions_CS {
    RedfishLicense_V1_0_0_OemActions_CS    *Oem;    // The available OEM-specific
                                                   // actions for this resource.
} RedfishLicense_V1_0_0_Actions_CS;

//
// Contact information for this license.
//
typedef struct _RedfishLicense_V1_0_0_ContactInfo_CS {
    RedfishCS_char    *ContactName;    // Name of this contact.
    RedfishCS_char    *EmailAddress;    // Email address for this
                                       // contact.
    RedfishCS_char    *PhoneNumber;    // Phone number for this contact.
} RedfishLicense_V1_0_0_ContactInfo_CS;

//
// The links to other resources that are related to this resource.
//
typedef struct _RedfishLicense_V1_0_0_Links_CS {
    Redfishodatav4_idRef_Array_CS    *AuthorizedDevices;              // An array of links to devices
                                                                      // authorized by the license.
    RedfishCS_int64                  *AuthorizedDevicesodata_count;
    RedfishResource_Oem_CS           *Oem;                            // The OEM extension property.
} RedfishLicense_V1_0_0_Links_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishLicense_V1_0_0_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishLicense_V1_0_0_OemActions_CS;

//
// A condition that requires attention.
//
#ifndef RedfishResource_Condition_CS_
#define RedfishResource_Condition_CS_
typedef struct _RedfishResource_Condition_CS {
    RedfishCS_Link             LogEntry;             // The link to the log entry
                                                     // created for this condition.
    RedfishCS_char             *Message;             // The human-readable message for
                                                     // this condition.
    RedfishCS_char_Array       *MessageArgs;         // An array of message arguments
                                                     // that are substituted for the
                                                     // arguments in the message when
                                                     // looked up in the message
                                                     // registry.
    RedfishCS_char             *MessageId;           // The identifier for the
                                                     // message.
    Redfishodatav4_idRef_CS    *OriginOfCondition;    // A link to the resource or
                                                     // object that originated the
                                                     // condition.
    RedfishCS_char             *Resolution;          // Suggestions on how to resolve
                                                     // the condition.
    RedfishCS_char             *Severity;            // The severity of the condition.
    RedfishCS_char             *Timestamp;           // The time the condition
                                                     // occurred.
} RedfishResource_Condition_CS;
#endif

//
// The OEM extension.
//
#ifndef RedfishResource_Oem_CS_
#define RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS {
    RedfishCS_Link    Prop;
} RedfishResource_Oem_CS;
#endif

//
// The status and health of a resource and its children.
//
#ifndef RedfishResource_Status_CS_
#define RedfishResource_Status_CS_
typedef struct _RedfishResource_Status_CS {
    RedfishResource_Condition_Array_CS    *Conditions;     // Conditions in this resource
                                                           // that require attention.
    RedfishCS_char                        *Health;         // The health state of this
                                                           // resource in the absence of its
                                                           // dependent resources.
    RedfishCS_char                        *HealthRollup;    // The overall health state from
                                                           // the view of this resource.
    RedfishResource_Oem_CS                *Oem;            // The OEM extension property.
    RedfishCS_char                        *State;          // The known state of the
                                                           // resource, such as, enabled.
} RedfishResource_Status_CS;
#endif

//
// A reference to a resource.
//
#ifndef Redfishodatav4_idRef_CS_
#define Redfishodatav4_idRef_CS_
typedef struct _Redfishodatav4_idRef_CS {
    RedfishCS_char    *odata_id;
} Redfishodatav4_idRef_CS;
#endif

//
// The License schema describes a license for a feature.
//
typedef struct _RedfishLicense_V1_0_0_License_CS {
    RedfishCS_Header                        Header;
    RedfishCS_char                          *odata_context;      
    RedfishCS_char                          *odata_etag;         
    RedfishCS_char                          *odata_id;           
    RedfishCS_char                          *odata_type;         
    RedfishLicense_V1_0_0_Actions_CS        *Actions;                // The available actions for this
                                                                     // resource.
    RedfishCS_char                          *AuthorizationScope;     // The authorization scope of the
                                                                     // license.
    RedfishLicense_V1_0_0_ContactInfo_CS    *Contact;                // The contact of the license.
    RedfishCS_char                          *Description;        
    RedfishCS_char                          *DownloadURI;            // The URI at which to download
                                                                     // the license file.
    RedfishCS_char                          *EntitlementId;          // The entitlement identifier for
                                                                     // this license.
    RedfishCS_char                          *ExpirationDate;         // The date and time when the
                                                                     // license expires.
    RedfishCS_int64                         *GracePeriodDays;        // The grace days of this
                                                                     // license.
    RedfishCS_char                          *Id;                 
    RedfishCS_char                          *InstallDate;            // The date and time when the
                                                                     // license was installed.
    RedfishCS_char                          *LicenseInfoURI;         // The URI at which more
                                                                     // information about this license
                                                                     // can be obtained.
    RedfishCS_char                          *LicenseOrigin;          // This indicates the origin of
                                                                     // the license.
    RedfishCS_char                          *LicenseString;          // The Base64-encoded string of
                                                                     // the license.
    RedfishCS_char                          *LicenseType;            // The type of the license.
    RedfishLicense_V1_0_0_Links_CS          *Links;                  // The links to other resources
                                                                     // that are related to this
                                                                     // resource.
    RedfishCS_char                          *Manufacturer;           // The manufacturer or producer
                                                                     // of this license.
    RedfishCS_int64                         *MaxAuthorizedDevices;    // The maximum number of devices
                                                                     // authorized by the license.
    RedfishCS_char                          *Name;               
    RedfishResource_Oem_CS                  *Oem;                    // The OEM extension property.
    RedfishCS_char                          *PartNumber;             // The part number for this
                                                                     // license.
    RedfishCS_char                          *RemainingDuration;      // The remaining usage duration
                                                                     // before the license expires.
    RedfishCS_int64                         *RemainingUseCount;      // The remaining usage count
                                                                     // before the license expires.
    RedfishCS_bool                          *Removable;              // An indication of whether the
                                                                     // license is removable.
    RedfishCS_char                          *SKU;                    // The SKU for this license.
    RedfishCS_char                          *SerialNumber;           // The serial number for this
                                                                     // license.
    RedfishResource_Status_CS               *Status;                 // The status of the license.
} RedfishLicense_V1_0_0_License_CS;

#ifndef Redfishodatav4_idRef_Array_CS_
#define Redfishodatav4_idRef_Array_CS_
typedef struct _Redfishodatav4_idRef_Array_CS  {
    Redfishodatav4_idRef_Array_CS    *Next;
    Redfishodatav4_idRef_CS    *ArrayValue;
} Redfishodatav4_idRef_Array_CS;
#endif

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

RedfishCS_status
Json_License_V1_0_0_To_CS (char *JsonRawText, RedfishLicense_V1_0_0_License_CS **ReturnedCS);

RedfishCS_status
CS_To_License_V1_0_0_JSON (RedfishLicense_V1_0_0_License_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyLicense_V1_0_0_CS (RedfishLicense_V1_0_0_License_CS *CSPtr);

RedfishCS_status
DestroyLicense_V1_0_0_Json (RedfishCS_char *JsonText);

#endif
