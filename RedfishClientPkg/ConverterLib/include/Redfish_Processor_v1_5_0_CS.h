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

#ifndef RedfishProcessor_V1_5_0_CSTRUCT_H_
#define RedfishProcessor_V1_5_0_CSTRUCT_H_

#include "RedfishCsCommon.h"

typedef struct _RedfishProcessor_V1_5_0_FpgaInterface_Array_CS RedfishProcessor_V1_5_0_FpgaInterface_Array_CS;
typedef struct _RedfishProcessor_V1_5_0_FpgaReconfigurationSlot_Array_CS RedfishProcessor_V1_5_0_FpgaReconfigurationSlot_Array_CS;
typedef struct _RedfishProcessor_V1_5_0_ProcessorMemory_Array_CS RedfishProcessor_V1_5_0_ProcessorMemory_Array_CS;
#ifndef RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS RedfishResource_Condition_Array_CS;
#endif
typedef struct _RedfishProcessor_V1_5_0_Actions_CS RedfishProcessor_V1_5_0_Actions_CS;
typedef struct _RedfishProcessor_V1_5_0_EthernetInterface_CS RedfishProcessor_V1_5_0_EthernetInterface_CS;
typedef struct _RedfishProcessor_V1_5_0_FPGA_CS RedfishProcessor_V1_5_0_FPGA_CS;
typedef struct _RedfishProcessor_V1_5_0_FpgaInterface_CS RedfishProcessor_V1_5_0_FpgaInterface_CS;
typedef struct _RedfishProcessor_V1_5_0_FpgaReconfigurationSlot_CS RedfishProcessor_V1_5_0_FpgaReconfigurationSlot_CS;
typedef struct _RedfishProcessor_V1_5_0_Links_CS RedfishProcessor_V1_5_0_Links_CS;
typedef struct _RedfishProcessor_V1_5_0_OemActions_CS RedfishProcessor_V1_5_0_OemActions_CS;
typedef struct _RedfishProcessor_V1_5_0_Processor_CS RedfishProcessor_V1_5_0_Processor_CS;
typedef struct _RedfishProcessor_V1_5_0_ProcessorId_CS RedfishProcessor_V1_5_0_ProcessorId_CS;
typedef struct _RedfishProcessor_V1_5_0_ProcessorMemory_CS RedfishProcessor_V1_5_0_ProcessorMemory_CS;
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
typedef struct _RedfishProcessor_V1_5_0_Actions_CS {
    RedfishProcessor_V1_5_0_OemActions_CS    *Oem;    // This property contains the
                                                     // available OEM specific actions
                                                     // for this resource.
} RedfishProcessor_V1_5_0_Actions_CS;

//
// This is the definition for an Ethernet Interface object.
//
typedef struct _RedfishProcessor_V1_5_0_EthernetInterface_CS {
    RedfishCS_int64           *MaxLanes;       // This is the number of lanes
                                               // supported by this interface.
    RedfishCS_int64           *MaxSpeedMbps;    // The maximum speed supported by
                                               // this interface.
    RedfishResource_Oem_CS    *Oem;            // Oem extension object.
} RedfishProcessor_V1_5_0_EthernetInterface_CS;

//
// The properties of the FPGA device.
//
typedef struct _RedfishProcessor_V1_5_0_FPGA_CS {
    RedfishProcessor_V1_5_0_FpgaInterface_Array_CS              *ExternalInterfaces;     // An array of the FPGA external
                                                                                         // interfaces.
    RedfishCS_char                                              *FirmwareId;             // The FPGA firmware identifier.
    RedfishCS_char                                              *FirmwareManufacturer;    // The FPGA firmware
                                                                                         // manufacturer.
    RedfishCS_char                                              *FirmwareVersion;        // The FPGA firmware version.
    RedfishCS_char                                              *FpgaType;               // The FPGA type.
    RedfishProcessor_V1_5_0_FpgaInterface_CS                    *HostInterface;          // The FPGA interface to the
                                                                                         // host.
    RedfishCS_char                                              *Model;                  // The FPGA model.
    RedfishResource_Oem_CS                                      *Oem;                    // Oem extension object.
    RedfishCS_int64                                             *PCIeVirtualFunctions;    // The number of the PCIe Virtual
                                                                                         // Functions.
    RedfishCS_bool                                              *ProgrammableFromHost;    // This flag indicates if the
                                                                                         // FPGA firmware can be
                                                                                         // reprogrammed from the host
                                                                                         // using system software.
    RedfishProcessor_V1_5_0_FpgaReconfigurationSlot_Array_CS    *ReconfigurationSlots;    // An array of the FPGA
                                                                                         // reconfiguration slots.  A
                                                                                         // reconfiguration slot is used
                                                                                         // by an FPGA to contain an
                                                                                         // acceleration function that can
                                                                                         // change as the FPGA is being
                                                                                         // provisioned.
} RedfishProcessor_V1_5_0_FPGA_CS;

//
// This type describes an interface to the FPGA.
//
typedef struct _RedfishProcessor_V1_5_0_FpgaInterface_CS {
    RedfishProcessor_V1_5_0_EthernetInterface_CS    *Ethernet;        // Describes the Ethernet related
                                                                      // information about this FPGA
                                                                      // interface.
    RedfishCS_char                                  *InterfaceType;    // The FPGA interface type.
    RedfishCS_Link                                  PCIe;             // Describes the PCI-e related
                                                                      // information about this FPGA
                                                                      // interface.
} RedfishProcessor_V1_5_0_FpgaInterface_CS;

//
// This type describes the FPGA reconfiguration slot.  A reconfiguration slot is
// used by an FPGA to contain an acceleration function that can change as the FPGA
// is being provisioned.
//
typedef struct _RedfishProcessor_V1_5_0_FpgaReconfigurationSlot_CS {
    RedfishCS_Link    AccelerationFunction;    // A link to the Acceleration
                                               // Function provided by the code
                                               // programmed into a
                                               // reconfiguration slot.
    RedfishCS_bool    *ProgrammableFromHost;    // This flag indicates if the
                                               // reconfiguration slot can be
                                               // reprogrammed from the host
                                               // using system software.
    RedfishCS_char    *SlotId;                 // The FPGA reconfiguration slot
                                               // identifier.
    RedfishCS_char    *UUID;                   // The universal unique
                                               // identifier (UUID) for this
                                               // reconfiguration slot.
} RedfishProcessor_V1_5_0_FpgaReconfigurationSlot_CS;

//
// Contains references to other resources that are related to this resource.
//
typedef struct _RedfishProcessor_V1_5_0_Links_CS {
    RedfishCS_Link            Chassis;                           // A reference to the Chassis
                                                                 // which contains this Processor.
    RedfishCS_Link            ConnectedProcessors;               // An array of references to the
                                                                 // processors directly connected
                                                                 // to this processor.
    RedfishCS_int64           *ConnectedProcessorsodata_count;
    RedfishCS_Link            Endpoints;                         // An array of references to the
                                                                 // endpoints that connect to this
                                                                 // processor.
    RedfishCS_int64           *Endpointsodata_count;         
    RedfishResource_Oem_CS    *Oem;                              // Oem extension object.
    RedfishCS_Link            PCIeDevice;                        // A reference to the PCIeDevice
                                                                 // associated with this
                                                                 // Processor.
    RedfishCS_Link            PCIeFunctions;                     // An array of references to the
                                                                 // PCIeFunctions associated with
                                                                 // this Processor.
    RedfishCS_int64           *PCIeFunctionsodata_count;     
} RedfishProcessor_V1_5_0_Links_CS;

//
// The available OEM specific actions for this resource.
//
typedef struct _RedfishProcessor_V1_5_0_OemActions_CS {
    RedfishCS_Link    Prop;
} RedfishProcessor_V1_5_0_OemActions_CS;

//
// This type describes the Identification information for a processor.
//
typedef struct _RedfishProcessor_V1_5_0_ProcessorId_CS {
    RedfishCS_char    *EffectiveFamily;           // The effective Family for this
                                                  // processor.
    RedfishCS_char    *EffectiveModel;            // The effective Model for this
                                                  // processor.
    RedfishCS_char    *IdentificationRegisters;    // The contents of the
                                                  // Identification Registers
                                                  // (CPUID) for this processor.
    RedfishCS_char    *MicrocodeInfo;             // The Microcode Information for
                                                  // this processor.
    RedfishCS_char    *Step;                      // The Step value for this
                                                  // processor.
    RedfishCS_char    *VendorId;                  // The Vendor Identification for
                                                  // this processor.
} RedfishProcessor_V1_5_0_ProcessorId_CS;

//
// This type describes the memory directly attached or integrated within a
// processor.
//
typedef struct _RedfishProcessor_V1_5_0_ProcessorMemory_CS {
    RedfishCS_int64    *CapacityMiB;        // The memory capacity in MiB.
    RedfishCS_bool     *IntegratedMemory;    // This indicates whether this
                                            // memory is integrated within
                                            // the Processor.
    RedfishCS_char     *MemoryType;         // The type of memory used by
                                            // this processor.
    RedfishCS_int64    *SpeedMHz;           // The operating speed of the
                                            // memory in MHz.
} RedfishProcessor_V1_5_0_ProcessorMemory_CS;

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
// This is the schema definition for the Processor resource.  It represents the
// properties of a processor attached to a System.
//
typedef struct _RedfishProcessor_V1_5_0_Processor_CS {
    RedfishCS_Header                                    Header;
    RedfishCS_char                                      *odata_context;       
    RedfishCS_char                                      *odata_etag;          
    RedfishCS_char                                      *odata_id;            
    RedfishCS_char                                      *odata_type;          
    RedfishCS_Link                                      AccelerationFunctions;    // A reference to the collection
                                                                                  // of Acceleration Functions
                                                                                  // associated with this
                                                                                  // Processor.
    RedfishProcessor_V1_5_0_Actions_CS                  *Actions;                 // The available actions for this
                                                                                  // resource.
    RedfishCS_Link                                      Assembly;                 // A reference to the Assembly
                                                                                  // resource associated with this
                                                                                  // processor.
    RedfishCS_char                                      *Description;         
    RedfishProcessor_V1_5_0_FPGA_CS                     *FPGA;                    // The properties specific for
                                                                                  // Processors of type FPGA.
    RedfishCS_char                                      *Id;                  
    RedfishCS_char                                      *InstructionSet;          // The instruction set of the
                                                                                  // processor.
    RedfishProcessor_V1_5_0_Links_CS                    *Links;                   // Contains references to other
                                                                                  // resources that are related to
                                                                                  // this resource.
    RedfishCS_Link                                      Location;                 // The Location of the processor.
    RedfishCS_char                                      *Manufacturer;            // The processor manufacturer.
    RedfishCS_int64                                     *MaxSpeedMHz;             // The maximum clock speed of the
                                                                                  // processor.
    RedfishCS_int64                                     *MaxTDPWatts;             // The maximum Thermal Design
                                                                                  // Power (TDP) in watts.
    RedfishCS_Link                                      Metrics;                  // A reference to the Metrics
                                                                                  // associated with this
                                                                                  // Processor.
    RedfishCS_char                                      *Model;                   // The product model number of
                                                                                  // this device.
    RedfishCS_char                                      *Name;                
    RedfishResource_Oem_CS                              *Oem;                     // This is the
                                                                                  // manufacturer/provider specific
                                                                                  // extension moniker used to
                                                                                  // divide the Oem object into
                                                                                  // sections.
    RedfishCS_char                                      *ProcessorArchitecture;    // The architecture of the
                                                                                  // processor.
    RedfishProcessor_V1_5_0_ProcessorId_CS              *ProcessorId;             // Identification information for
                                                                                  // this processor.
    RedfishProcessor_V1_5_0_ProcessorMemory_Array_CS    *ProcessorMemory;         // The memory directly attached
                                                                                  // or integrated witin this
                                                                                  // Procesor.
    RedfishCS_char                                      *ProcessorType;           // The type of processor.
    RedfishCS_char                                      *Socket;                  // The socket or location of the
                                                                                  // processor.
    RedfishResource_Status_CS                           *Status;                  // This property describes the
                                                                                  // status and health of the
                                                                                  // resource and its children.
    RedfishCS_Link                                      SubProcessors;            // A reference to the collection
                                                                                  // of Sub-Processors associated
                                                                                  // with this system, such as
                                                                                  // cores or threads that are part
                                                                                  // of a processor.
    RedfishCS_int64                                     *TDPWatts;                // The nominal Thermal Design
                                                                                  // Power (TDP) in watts.
    RedfishCS_int64                                     *TotalCores;              // The total number of cores
                                                                                  // contained in this processor.
    RedfishCS_int64                                     *TotalEnabledCores;       // The total number of enabled
                                                                                  // cores contained in this
                                                                                  // processor.
    RedfishCS_int64                                     *TotalThreads;            // The total number of execution
                                                                                  // threads supported by this
                                                                                  // processor.
    RedfishCS_char                                      *UUID;                    // The universal unique
                                                                                  // identifier (UUID) for this
                                                                                  // processor.
} RedfishProcessor_V1_5_0_Processor_CS;

typedef struct _RedfishProcessor_V1_5_0_FpgaInterface_Array_CS  {
    RedfishProcessor_V1_5_0_FpgaInterface_Array_CS    *Next;
    RedfishProcessor_V1_5_0_FpgaInterface_CS    *ArrayValue;
} RedfishProcessor_V1_5_0_FpgaInterface_Array_CS;

typedef struct _RedfishProcessor_V1_5_0_FpgaReconfigurationSlot_Array_CS  {
    RedfishProcessor_V1_5_0_FpgaReconfigurationSlot_Array_CS    *Next;
    RedfishProcessor_V1_5_0_FpgaReconfigurationSlot_CS    *ArrayValue;
} RedfishProcessor_V1_5_0_FpgaReconfigurationSlot_Array_CS;

typedef struct _RedfishProcessor_V1_5_0_ProcessorMemory_Array_CS  {
    RedfishProcessor_V1_5_0_ProcessorMemory_Array_CS    *Next;
    RedfishProcessor_V1_5_0_ProcessorMemory_CS    *ArrayValue;
} RedfishProcessor_V1_5_0_ProcessorMemory_Array_CS;

#ifndef RedfishResource_Condition_Array_CS_
#define RedfishResource_Condition_Array_CS_
typedef struct _RedfishResource_Condition_Array_CS  {
    RedfishResource_Condition_Array_CS    *Next;
    RedfishResource_Condition_CS    *ArrayValue;
} RedfishResource_Condition_Array_CS;
#endif

RedfishCS_status
Json_Processor_V1_5_0_To_CS (char *JsonRawText, RedfishProcessor_V1_5_0_Processor_CS **ReturnedCS);

RedfishCS_status
CS_To_Processor_V1_5_0_JSON (RedfishProcessor_V1_5_0_Processor_CS *CSPtr, char **JsonText);

RedfishCS_status
DestroyProcessor_V1_5_0_CS (RedfishProcessor_V1_5_0_Processor_CS *CSPtr);

RedfishCS_status
DestroyProcessor_V1_5_0_Json (RedfishCS_char *JsonText);

#endif
