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

#ifndef RedfishSerialinterface_V1_0_10_CSTRUCT_H_
#define RedfishSerialinterface_V1_0_10_CSTRUCT_H_

#include "RedfishCsCommon.h"

#ifndef RedfishResource_Oem_CS_
typedef struct _RedfishResource_Oem_CS RedfishResource_Oem_CS;
#endif

typedef struct _RedfishSerialInterface_V1_0_10_SerialInterface_CS RedfishSerialInterface_V1_0_10_SerialInterface_CS;
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
// The SerialInterface schema describes an asynchronous serial interface, such as
// an RS-232 interface, available to a system or device.
//
typedef struct _RedfishSerialInterface_V1_0_10_SerialInterface_CS {
    RedfishCS_Header          Header;
    RedfishCS_char            *odata_context;  
    RedfishCS_char            *odata_etag;     
    RedfishCS_char            *odata_id;       
    RedfishCS_char            *odata_type;     
    RedfishCS_char            *BitRate;            // The receive and transmit rate
                                                   // of data flow, typically in
                                                   // bits per second (bit/s), over
                                                   // the serial connection.
    RedfishCS_char            *ConnectorType;      // The type of connector used for
                                                   // this interface.
    RedfishCS_char            *DataBits;           // The number of data bits that
                                                   // follow the start bit over the
                                                   // serial connection.
    RedfishCS_char            *Description;    
    RedfishCS_char            *FlowControl;        // The type of flow control, if
                                                   // any, that is imposed on the
                                                   // serial connection.
    RedfishCS_char            *Id;             
    RedfishCS_bool            *InterfaceEnabled;    // An indication of whether this
                                                   // interface is enabled.
    RedfishCS_char            *Name;           
    RedfishResource_Oem_CS    *Oem;                // The OEM extension property.
    RedfishCS_char            *Parity;             // The type of parity used by the
                                                   // sender and receiver to detect
                                                   // errors over the serial
                                                   // connection.
    RedfishCS_char            *PinOut;             // The physical pinout
                                                   // configuration for a serial
                                                   // connector.
    RedfishCS_char            *SignalType;         // The type of signal used for
                                                   // the communication connection.
    RedfishCS_char            *StopBits;           // The period of time before the
                                                   // next start bit is transmitted.
} RedfishSerialInterface_V1_0_10_SerialInterface_CS;

RedfishCS_status
Json_SerialInterface_V1_0_10_To_CS (char *JsonRawText, RedfishSerialInterface_V1_0_10_SerialInterface_CS **ReturnedCS);

RedfishCS_status
CS_To_SerialInterface_V1_0_10_JSON (RedfishSerialInterface_V1_0_10_SerialInterface_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroySerialInterface_V1_0_10_CS (RedfishSerialInterface_V1_0_10_SerialInterface_CS *CSPtr);

RedfishCS_status
DestroySerialInterface_V1_0_10_Json (RedfishCS_char *JsonText);

#endif
