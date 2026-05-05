/** @file
  This file defines the Redfish event library interface.

  (C) Copyright 2022 Hewlett Packard Enterprise Development LP<BR>
  Copyright (C) 2026 Advanced Micro Devices, Inc. All rights reserved.<BR>

  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#ifndef REDFISH_EVENT_LIB_H_
#define REDFISH_EVENT_LIB_H_

#include <Uefi.h>

/**
  Create an EFI event before Redfish provisioning start.

  @param  NotifyFunction            The notification function to call when the event is signaled.
  @param  NotifyContext             The content to pass to NotifyFunction when the event is signaled.
  @param  ReadyToProvisioningEvent  Returns the EFI event returned from gBS->CreateEvent(Ex).

  @retval EFI_SUCCESS       Event was created.
  @retval Other             Event was not created.

**/
EFI_STATUS
EFIAPI
CreateReadyToProvisioningEvent (
  IN  EFI_EVENT_NOTIFY NotifyFunction, OPTIONAL
  IN  VOID              *NotifyContext, OPTIONAL
  OUT EFI_EVENT         *ReadyToProvisioningEvent
  );

/**
  Create an EFI event after Redfish provisioning finished.

  @param  NotifyFunction            The notification function to call when the event is signaled.
  @param  NotifyContext             The content to pass to NotifyFunction when the event is signaled.
  @param  ReadyToProvisioningEvent  Returns the EFI event returned from gBS->CreateEvent(Ex).

  @retval EFI_SUCCESS       Event was created.
  @retval Other             Event was not created.

**/
EFI_STATUS
EFIAPI
CreateAfterProvisioningEvent (
  IN  EFI_EVENT_NOTIFY NotifyFunction, OPTIONAL
  IN  VOID              *NotifyContext, OPTIONAL
  OUT EFI_EVENT         *ReadyToProvisioningEvent
  );

/**
  Create an EFI event to disconnect the Redfish transport interface.

  @param [in] NotifyFunction                   The notification function to call when the event is signaled.
  @param [in] NotifyContext                    The content to pass to NotifyFunction when the event is signaled.
  @param [out] DisconnectRedfishInterfaceEvent  Returns the EFI event returned from gBS->CreateEvent(Ex).

  @retval EFI_SUCCESS       Event was created.
  @retval Other             Event was not created.

**/
EFI_STATUS
EFIAPI
CreateRedfishInterfaceDisconnectEvent (
  IN  EFI_EVENT_NOTIFY NotifyFunction, OPTIONAL
  IN  VOID              *NotifyContext, OPTIONAL
  OUT EFI_EVENT         *DisconnectRedfishInterfaceEvent
  );

/**
  Signal ready to provisioning event.

  @retval EFI_SUCCESS       Event was created.
  @retval Other             Event was not created.

**/
EFI_STATUS
SignalReadyToProvisioningEvent (
  IN VOID
  );

/**
  Signal after provisioning event.

  @retval EFI_SUCCESS       Event was created.
  @retval Other             Event was not created.

**/
EFI_STATUS
SignalAfterProvisioningEvent (
  IN VOID
  );

/**
  Signal disconnect Redfish interface.

  @retval EFI_SUCCESS       Event was created.
  @retval Other             Event was not created.

**/
EFI_STATUS
SignalDisconnectRedfishInterfaceEvent (
  IN VOID
  );

#endif
