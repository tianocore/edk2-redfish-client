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

#ifndef RedfishCompositionreservation_V1_0_0_CSTRUCT_H_
#define RedfishCompositionreservation_V1_0_0_CSTRUCT_H_

#include "RedfishCsCommon.h"

typedef struct _RedfishCompositionReservation_V1_0_0_Actions_CS RedfishCompositionReservation_V1_0_0_Actions_CS;
typedef struct _RedfishCompositionReservation_V1_0_0_CompositionReservation_CS RedfishCompositionReservation_V1_0_0_CompositionReservation_CS;
typedef struct _RedfishCompositionReservation_V1_0_0_OemActions_CS RedfishCompositionReservation_V1_0_0_OemActions_CS;
#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

//
// The available actions for this resource.
//
typedef struct _RedfishCompositionReservation_V1_0_0_Actions_CS {
    RedfishCompositionReservation_V1_0_0_OemActions_CS    *Oem;    // The available OEM-specific
                                                                  // actions for this resource.
} RedfishCompositionReservation_V1_0_0_Actions_CS;

//
// The available OEM-specific actions for this resource.
//
typedef struct _RedfishCompositionReservation_V1_0_0_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishCompositionReservation_V1_0_0_OemActions_CS;

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
// The CompositionReservation schema contains reservation information related to
// the Compose action defined in the CompositionService resource when the of
// RequestType parameter contains the value `PreviewReserve`.
//
typedef struct _RedfishCompositionReservation_V1_0_0_CompositionReservation_CS {
    RedfishCS_Header                                   Header;
    RedfishCS_char                                     *odata_context;                   
    RedfishCS_char                                     *odata_etag;                      
    RedfishCS_char                                     *odata_id;                        
    RedfishCS_char                                     *odata_type;                      
    RedfishCompositionReservation_V1_0_0_Actions_CS    *Actions;                             // The available actions for this
                                                                                             // resource.
    RedfishCS_char                                     *Client;                              // The client that owns the
                                                                                             // reservation.
    RedfishCS_char                                     *Description;                     
    RedfishCS_char                                     *Id;                              
    RedfishCS_Link                                     Manifest;                             // The manifest document
                                                                                             // processed by the service that
                                                                                             // resulted in this reservation.
    RedfishCS_char                                     *Name;                            
    RedfishResource_Oem_CS                             *Oem;                                 // The OEM extension property.
    RedfishCS_char                                     *ReservationTime;                     // The date time the service
                                                                                             // created the reservation.
    RedfishCS_Link                                     ReservedResourceBlocks;               // The array of links to the
                                                                                             // reserved resource blocks.
    RedfishCS_int64                                    *ReservedResourceBlocksodata_count;
} RedfishCompositionReservation_V1_0_0_CompositionReservation_CS;

RedfishCS_status
Json_CompositionReservation_V1_0_0_To_CS (char *JsonRawText, RedfishCompositionReservation_V1_0_0_CompositionReservation_CS **ReturnedCS);

RedfishCS_status
CS_To_CompositionReservation_V1_0_0_JSON (RedfishCompositionReservation_V1_0_0_CompositionReservation_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyCompositionReservation_V1_0_0_CS (RedfishCompositionReservation_V1_0_0_CompositionReservation_CS *CSPtr);

RedfishCS_status
DestroyCompositionReservation_V1_0_0_Json (RedfishCS_char *JsonText);

#endif
