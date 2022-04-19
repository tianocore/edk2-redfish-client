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

#ifndef RedfishComponentintegrity_V1_0_0_CSTRUCT_H_
#define RedfishComponentintegrity_V1_0_0_CSTRUCT_H_

#include "RedfishCsCommon.h"

typedef struct _RedfishComponentIntegrity_V1_0_0_SingleSessionInfo_Array_CS RedfishComponentIntegrity_V1_0_0_SingleSessionInfo_Array_CS;
#ifndef Redfishodatav4_idRef_Array_CS_
typedef struct _Redfishodatav4_idRef_Array_CS Redfishodatav4_idRef_Array_CS;
#endif
typedef struct _RedfishComponentIntegrity_V1_0_0_SPDMsingleMeasurement_Array_CS RedfishComponentIntegrity_V1_0_0_SPDMsingleMeasurement_Array_CS;
typedef struct _RedfishComponentIntegrity_V1_0_0_TPMsingleMeasurement_Array_CS RedfishComponentIntegrity_V1_0_0_TPMsingleMeasurement_Array_CS;
#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishComponentIntegrity_V1_0_0_Actions_CS RedfishComponentIntegrity_V1_0_0_Actions_CS;
typedef struct _RedfishComponentIntegrity_V1_0_0_CommonAuthInfo_CS RedfishComponentIntegrity_V1_0_0_CommonAuthInfo_CS;
typedef struct _RedfishComponentIntegrity_V1_0_0_CommunicationInfo_CS RedfishComponentIntegrity_V1_0_0_CommunicationInfo_CS;
typedef struct _RedfishComponentIntegrity_V1_0_0_ComponentIntegrity_CS RedfishComponentIntegrity_V1_0_0_ComponentIntegrity_CS;
typedef struct _RedfishComponentIntegrity_V1_0_0_Links_CS RedfishComponentIntegrity_V1_0_0_Links_CS;
typedef struct _RedfishComponentIntegrity_V1_0_0_OemActions_CS RedfishComponentIntegrity_V1_0_0_OemActions_CS;
typedef struct _RedfishComponentIntegrity_V1_0_0_SPDMGetSignedMeasurements_CS RedfishComponentIntegrity_V1_0_0_SPDMGetSignedMeasurements_CS;
typedef struct _RedfishComponentIntegrity_V1_0_0_SPDMGetSignedMeasurementsResponse_CS RedfishComponentIntegrity_V1_0_0_SPDMGetSignedMeasurementsResponse_CS;
typedef struct _RedfishComponentIntegrity_V1_0_0_SPDMcommunication_CS RedfishComponentIntegrity_V1_0_0_SPDMcommunication_CS;
typedef struct _RedfishComponentIntegrity_V1_0_0_SPDMidentity_CS RedfishComponentIntegrity_V1_0_0_SPDMidentity_CS;
typedef struct _RedfishComponentIntegrity_V1_0_0_SPDMinfo_CS RedfishComponentIntegrity_V1_0_0_SPDMinfo_CS;
typedef struct _RedfishComponentIntegrity_V1_0_0_SPDMmeasurementSet_CS RedfishComponentIntegrity_V1_0_0_SPDMmeasurementSet_CS;
typedef struct _RedfishComponentIntegrity_V1_0_0_SPDMrequesterAuth_CS RedfishComponentIntegrity_V1_0_0_SPDMrequesterAuth_CS;
typedef struct _RedfishComponentIntegrity_V1_0_0_SPDMresponderAuth_CS RedfishComponentIntegrity_V1_0_0_SPDMresponderAuth_CS;
typedef struct _RedfishComponentIntegrity_V1_0_0_SPDMsingleMeasurement_CS RedfishComponentIntegrity_V1_0_0_SPDMsingleMeasurement_CS;
typedef struct _RedfishComponentIntegrity_V1_0_0_SingleSessionInfo_CS RedfishComponentIntegrity_V1_0_0_SingleSessionInfo_CS;
typedef struct _RedfishComponentIntegrity_V1_0_0_TPMauth_CS RedfishComponentIntegrity_V1_0_0_TPMauth_CS;
typedef struct _RedfishComponentIntegrity_V1_0_0_TPMcommunication_CS RedfishComponentIntegrity_V1_0_0_TPMcommunication_CS;
typedef struct _RedfishComponentIntegrity_V1_0_0_TPMinfo_CS RedfishComponentIntegrity_V1_0_0_TPMinfo_CS;
typedef struct _RedfishComponentIntegrity_V1_0_0_TPMmeasurementSet_CS RedfishComponentIntegrity_V1_0_0_TPMmeasurementSet_CS;
typedef struct _RedfishComponentIntegrity_V1_0_0_TPMsingleMeasurement_CS RedfishComponentIntegrity_V1_0_0_TPMsingleMeasurement_CS;
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
typedef struct _RedfishComponentIntegrity_V1_0_0_Actions_CS {
    RedfishComponentIntegrity_V1_0_0_SPDMGetSignedMeasurements_CS    *ComponentIntegrity_SPDMGetSignedMeasurements;
    RedfishComponentIntegrity_V1_0_0_OemActions_CS                   *Oem;                                            // The available OEM-specific
                                                                                                                      // actions for this resource.
} RedfishComponentIntegrity_V1_0_0_Actions_CS;

//
// Common Authentication information.
//
typedef struct _RedfishComponentIntegrity_V1_0_0_CommonAuthInfo_CS {
    RedfishCS_Link    ComponentCertificate;    // A link to the certificate that
                                              // represents the identify of the
                                              // component.
    RedfishCS_char    *VerificationStatus;    // The status of the verification
                                              // of the identity of the
                                              // component.
} RedfishComponentIntegrity_V1_0_0_CommonAuthInfo_CS;

//
// Information about communication between two components.
//
typedef struct _RedfishComponentIntegrity_V1_0_0_CommunicationInfo_CS {
    RedfishComponentIntegrity_V1_0_0_SingleSessionInfo_Array_CS    *Sessions;    // The active sessions or
                                                                                // communication channels between
                                                                                // two components.
} RedfishComponentIntegrity_V1_0_0_CommunicationInfo_CS;

//
// The links to other resources that are related to this resource.
//
typedef struct _RedfishComponentIntegrity_V1_0_0_Links_CS {
    Redfishodatav4_idRef_Array_CS    *ComponentsProtected;              // An array of links to resources
                                                                        // that the target component
                                                                        // protects.
    RedfishCS_int64                  *ComponentsProtectedodata_count;
    RedfishResource_Oem_CS           *Oem;                              // The OEM extension property.
} RedfishComponentIntegrity_V1_0_0_Links_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishComponentIntegrity_V1_0_0_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishComponentIntegrity_V1_0_0_OemActions_CS;

//
// This action generates an SPDM cryptographic signed statement over the given
// nonce and measurements of the SPDM Responder.
//
typedef struct _RedfishComponentIntegrity_V1_0_0_SPDMGetSignedMeasurements_CS {
    RedfishCS_char    *target;    // Link to invoke action
    RedfishCS_char    *title;    // Friendly action name
} RedfishComponentIntegrity_V1_0_0_SPDMGetSignedMeasurements_CS;

//
// The SPDM signed measurement from an SPDM Responder.
//
typedef struct _RedfishComponentIntegrity_V1_0_0_SPDMGetSignedMeasurementsResponse_CS {
    RedfishCS_Link            Certificate;           // A link to the certificate
                                                     // corresponding to the SPDM slot
                                                     // identifier that can be used to
                                                     // validate the signature.
    RedfishCS_char            *HashingAlgorithm;     // The hashing algorithm used for
                                                     // generating the cryptographic
                                                     // signed statement.
    RedfishResource_Oem_CS    *Oem;                  // The OEM extension property.
    RedfishCS_char            *PublicKey;            // A Privacy Enhanced Mail
                                                     // (PEM)-encoded public key that
                                                     // can be used to validate the
                                                     // signature.
    RedfishCS_char            *SignedMeasurements;    // Base64 encoded cryptographic
                                                     // signed statement generated by
                                                     // the signer.
    RedfishCS_char            *SigningAlgorithm;     // The asymmetric signing
                                                     // algorithm used for generating
                                                     // the cryptographic signed
                                                     // statement.
    RedfishCS_char            *Version;              // The SPDM version used by the
                                                     // SPDM Responder to generate the
                                                     // cryptographic signed
                                                     // statement.
} RedfishComponentIntegrity_V1_0_0_SPDMGetSignedMeasurementsResponse_CS;

//
// Information about communication between two components.
//
typedef struct _RedfishComponentIntegrity_V1_0_0_SPDMcommunication_CS {
    RedfishComponentIntegrity_V1_0_0_SingleSessionInfo_Array_CS    *Sessions;    // The active sessions or
                                                                                // communication channels between
                                                                                // two components.
} RedfishComponentIntegrity_V1_0_0_SPDMcommunication_CS;

//
// Identity authentication information about the SPDM Requester and SPDM
// Responder.
//
typedef struct _RedfishComponentIntegrity_V1_0_0_SPDMidentity_CS {
    RedfishComponentIntegrity_V1_0_0_SPDMrequesterAuth_CS    *RequesterAuthentication;    // Authentication information of
                                                                                         // the identity of the SPDM
                                                                                         // Requester.
    RedfishComponentIntegrity_V1_0_0_SPDMresponderAuth_CS    *ResponderAuthentication;    // Authentication information of
                                                                                         // the identity of the SPDM
                                                                                         // Responder.
} RedfishComponentIntegrity_V1_0_0_SPDMidentity_CS;

//
// Integrity information about an SPDM Responder as reported by an SPDM Requester.
//
typedef struct _RedfishComponentIntegrity_V1_0_0_SPDMinfo_CS {
    RedfishComponentIntegrity_V1_0_0_SPDMcommunication_CS     *ComponentCommunication;    // Information about
                                                                                         // communication between the SPDM
                                                                                         // Requester and SPDM Responder.
    RedfishComponentIntegrity_V1_0_0_SPDMidentity_CS          *IdentityAuthentication;    // Identity authentication
                                                                                         // information about the SPDM
                                                                                         // Requester and SPDM Responder.
    RedfishComponentIntegrity_V1_0_0_SPDMmeasurementSet_CS    *MeasurementSet;           // Measurement information about
                                                                                         // the SPDM Responder.
    Redfishodatav4_idRef_CS                                   *Requester;                // The link to the the component
                                                                                         // that is reporting the
                                                                                         // integrity information of the
                                                                                         // target component.
} RedfishComponentIntegrity_V1_0_0_SPDMinfo_CS;

//
// SPDM Responder measurement information.
//
typedef struct _RedfishComponentIntegrity_V1_0_0_SPDMmeasurementSet_CS {
    RedfishCS_char                                                     *MeasurementSpecification;          // The measurement specification
                                                                                                           // negotiated between the SPDM
                                                                                                           // Requester and SPDM Responder.
    RedfishCS_char                                                     *MeasurementSummary;                // The measurement summary data.
    RedfishCS_char                                                     *MeasurementSummaryHashAlgorithm;    // The hash algorithm used to
                                                                                                           // compute the measurement
                                                                                                           // summary.
    RedfishCS_char                                                     *MeasurementSummaryType;            // The type of measurement
                                                                                                           // summary.
    RedfishComponentIntegrity_V1_0_0_SPDMsingleMeasurement_Array_CS    *Measurements;                      // Measurements from an SPDM
                                                                                                           // Responder.
    RedfishResource_Oem_CS                                             *Oem;                               // The OEM extension property.
} RedfishComponentIntegrity_V1_0_0_SPDMmeasurementSet_CS;

//
// Authentication information of the identity of the SPDM Requester.
//
typedef struct _RedfishComponentIntegrity_V1_0_0_SPDMrequesterAuth_CS {
    RedfishCS_Link    ProvidedCertificate;    // A link to the certificate that
                                             // represents the identify of the
                                             // SPDM Requester provided in
                                             // mutual authentication.
} RedfishComponentIntegrity_V1_0_0_SPDMrequesterAuth_CS;

//
// Common Authentication information.
//
typedef struct _RedfishComponentIntegrity_V1_0_0_SPDMresponderAuth_CS {
    RedfishCS_Link    ComponentCertificate;    // A link to the certificate that
                                              // represents the identify of the
                                              // component.
    RedfishCS_char    *VerificationStatus;    // The status of the verification
                                              // of the identity of the
                                              // component.
} RedfishComponentIntegrity_V1_0_0_SPDMresponderAuth_CS;

//
// A single SPDM measurement for an SPDM Responder.
//
typedef struct _RedfishComponentIntegrity_V1_0_0_SPDMsingleMeasurement_CS {
    RedfishCS_char            *LastUpdated;                // The date and time when
                                                           // information for the
                                                           // measurement was last updated.
    RedfishCS_char            *Measurement;                // The measurement data.
    RedfishCS_char            *MeasurementHashAlgorithm;    // The hash algorithm used to
                                                           // compute the measurement.
    RedfishCS_int64           *MeasurementIndex;           // The index of the measurement.
    RedfishCS_char            *MeasurementType;            // The type or characteristics of
                                                           // the data that this measurement
                                                           // represents.
    RedfishResource_Oem_CS    *Oem;                        // The OEM extension property.
    RedfishCS_bool            *PartofSummaryHash;          // Indicates whether this
                                                           // measurement is part of the
                                                           // measurement summary.
} RedfishComponentIntegrity_V1_0_0_SPDMsingleMeasurement_CS;

//
// Information about a single communication channel or session between two
// components.
//
typedef struct _RedfishComponentIntegrity_V1_0_0_SingleSessionInfo_CS {
    RedfishCS_int64    *SessionId;     // The identifier for an active
                                       // session or communication
                                       // channel between two
                                       // components.
    RedfishCS_char     *SessionType;    // The type of session or
                                       // communication channel between
                                       // two components.
} RedfishComponentIntegrity_V1_0_0_SingleSessionInfo_CS;

//
// Common Authentication information.
//
typedef struct _RedfishComponentIntegrity_V1_0_0_TPMauth_CS {
    RedfishCS_Link    ComponentCertificate;    // A link to the certificate that
                                              // represents the identify of the
                                              // component.
    RedfishCS_char    *VerificationStatus;    // The status of the verification
                                              // of the identity of the
                                              // component.
} RedfishComponentIntegrity_V1_0_0_TPMauth_CS;

//
// Information about communication between two components.
//
typedef struct _RedfishComponentIntegrity_V1_0_0_TPMcommunication_CS {
    RedfishComponentIntegrity_V1_0_0_SingleSessionInfo_Array_CS    *Sessions;    // The active sessions or
                                                                                // communication channels between
                                                                                // two components.
} RedfishComponentIntegrity_V1_0_0_TPMcommunication_CS;

//
// Integrity information about a Trusted Platform Module (TPM).
//
typedef struct _RedfishComponentIntegrity_V1_0_0_TPMinfo_CS {
    RedfishComponentIntegrity_V1_0_0_TPMcommunication_CS     *ComponentCommunication;    // Information about
                                                                                        // communication with the TPM.
    RedfishComponentIntegrity_V1_0_0_TPMauth_CS              *IdentityAuthentication;    // Identity authentication
                                                                                        // information about the TPM.
    RedfishComponentIntegrity_V1_0_0_TPMmeasurementSet_CS    *MeasurementSet;           // Measurement information from
                                                                                        // the TPM.
} RedfishComponentIntegrity_V1_0_0_TPMinfo_CS;

//
// Trusted Computing Group TPM measurement information.
//
typedef struct _RedfishComponentIntegrity_V1_0_0_TPMmeasurementSet_CS {
    RedfishComponentIntegrity_V1_0_0_TPMsingleMeasurement_Array_CS    *Measurements;    // Measurements from a TPM.
} RedfishComponentIntegrity_V1_0_0_TPMmeasurementSet_CS;

//
// A single Trusted Computing Group TPM measurement.
//
typedef struct _RedfishComponentIntegrity_V1_0_0_TPMsingleMeasurement_CS {
    RedfishCS_char     *LastUpdated;                // The date and time when
                                                    // information for the
                                                    // measurement was last updated.
    RedfishCS_char     *Measurement;                // The measurement data.
    RedfishCS_char     *MeasurementHashAlgorithm;    // The hash algorithm used to
                                                    // compute the measurement.
    RedfishCS_int64    *PCR;                        // The Platform Configuration
                                                    // Register (PCR) bank of the
                                                    // measurement.
} RedfishComponentIntegrity_V1_0_0_TPMsingleMeasurement_CS;

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
// The ComponentIntegrity resource provides critical and pertinent security
// information about a specific device, system, software element, or other managed
// entity.
//
typedef struct _RedfishComponentIntegrity_V1_0_0_ComponentIntegrity_CS {
    RedfishCS_Header                                Header;
    RedfishCS_char                                  *odata_context;               
    RedfishCS_char                                  *odata_etag;                  
    RedfishCS_char                                  *odata_id;                    
    RedfishCS_char                                  *odata_type;                  
    RedfishComponentIntegrity_V1_0_0_Actions_CS     *Actions;                         // The available actions for this
                                                                                      // resource.
    RedfishCS_bool                                  *ComponentIntegrityEnabled;       // An indication of whether
                                                                                      // security protocols are enabled
                                                                                      // for the component.
    RedfishCS_char                                  *ComponentIntegrityType;          // The type of security
                                                                                      // technology for the component.
    RedfishCS_char                                  *ComponentIntegrityTypeVersion;    // The version of the security
                                                                                      // technology.
    RedfishCS_char                                  *Description;                 
    RedfishCS_char                                  *Id;                          
    RedfishCS_char                                  *LastUpdated;                     // The date and time when
                                                                                      // information for the component
                                                                                      // was last updated.
    RedfishComponentIntegrity_V1_0_0_Links_CS       *Links;                           // The links to other resources
                                                                                      // that are related to this
                                                                                      // resource.
    RedfishCS_char                                  *Name;                        
    RedfishResource_Oem_CS                          *Oem;                             // The OEM extension property.
    RedfishComponentIntegrity_V1_0_0_SPDMinfo_CS    *SPDM;                            // Integrity information about
                                                                                      // the SPDM Responder as reported
                                                                                      // by an SPDM Requester.
    RedfishResource_Status_CS                       *Status;                          // The status and health of the
                                                                                      // resource and its subordinate
                                                                                      // or dependent resources.
    RedfishComponentIntegrity_V1_0_0_TPMinfo_CS     *TPM;                             // Integrity information about
                                                                                      // the Trusted Platform Module
                                                                                      // (TPM).
    RedfishCS_char                                  *TargetComponentURI;              // The link to the the component
                                                                                      // whose integrity that this
                                                                                      // resource reports.
} RedfishComponentIntegrity_V1_0_0_ComponentIntegrity_CS;

typedef struct _RedfishComponentIntegrity_V1_0_0_SingleSessionInfo_Array_CS  {
    RedfishComponentIntegrity_V1_0_0_SingleSessionInfo_Array_CS    *Next;
    RedfishComponentIntegrity_V1_0_0_SingleSessionInfo_CS    *ArrayValue;
} RedfishComponentIntegrity_V1_0_0_SingleSessionInfo_Array_CS;

#ifndef Redfishodatav4_idRef_Array_CS_
#define Redfishodatav4_idRef_Array_CS_
typedef struct _Redfishodatav4_idRef_Array_CS  {
    Redfishodatav4_idRef_Array_CS    *Next;
    Redfishodatav4_idRef_CS    *ArrayValue;
} Redfishodatav4_idRef_Array_CS;
#endif

typedef struct _RedfishComponentIntegrity_V1_0_0_SPDMsingleMeasurement_Array_CS  {
    RedfishComponentIntegrity_V1_0_0_SPDMsingleMeasurement_Array_CS    *Next;
    RedfishComponentIntegrity_V1_0_0_SPDMsingleMeasurement_CS    *ArrayValue;
} RedfishComponentIntegrity_V1_0_0_SPDMsingleMeasurement_Array_CS;

typedef struct _RedfishComponentIntegrity_V1_0_0_TPMsingleMeasurement_Array_CS  {
    RedfishComponentIntegrity_V1_0_0_TPMsingleMeasurement_Array_CS    *Next;
    RedfishComponentIntegrity_V1_0_0_TPMsingleMeasurement_CS    *ArrayValue;
} RedfishComponentIntegrity_V1_0_0_TPMsingleMeasurement_Array_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

RedfishCS_status
Json_ComponentIntegrity_V1_0_0_To_CS (char *JsonRawText, RedfishComponentIntegrity_V1_0_0_ComponentIntegrity_CS **ReturnedCS);

RedfishCS_status
CS_To_ComponentIntegrity_V1_0_0_JSON (RedfishComponentIntegrity_V1_0_0_ComponentIntegrity_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyComponentIntegrity_V1_0_0_CS (RedfishComponentIntegrity_V1_0_0_ComponentIntegrity_CS *CSPtr);

RedfishCS_status
DestroyComponentIntegrity_V1_0_0_Json (RedfishCS_char *JsonText);

#endif
