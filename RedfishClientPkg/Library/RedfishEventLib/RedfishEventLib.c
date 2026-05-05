/** @file
  Redfish event library to deliver Redfish specific event.

  (C) Copyright 2022 Hewlett Packard Enterprise Development LP<BR>
  Copyright (C) 2026 Advanced Micro Devices, Inc. All rights reserved.<BR>

  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include <Uefi.h>

#include <Guid/RedfishClientEventGroup.h>

#include <Library/UefiLib.h>
#include <Library/BaseLib.h>
#include <Library/DebugLib.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/RedfishEventLib.h>

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
  )
{
  EFI_STATUS  Status;

  Status = gBS->CreateEventEx (
                  EVT_NOTIFY_SIGNAL,
                  TPL_CALLBACK,
                  (NotifyFunction == NULL ? EfiEventEmptyFunction : NotifyFunction),
                  NotifyContext,
                  &gEfiRedfishClientFeatureReadyToProvisioningGuid,
                  ReadyToProvisioningEvent
                  );

  return Status;
}

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
  )
{
  EFI_STATUS  Status;

  Status = gBS->CreateEventEx (
                  EVT_NOTIFY_SIGNAL,
                  TPL_CALLBACK,
                  (NotifyFunction == NULL ? EfiEventEmptyFunction : NotifyFunction),
                  NotifyContext,
                  &gEfiRedfishClientFeatureAfterProvisioningGuid,
                  ReadyToProvisioningEvent
                  );

  return Status;
}

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
  )
{
  EFI_STATUS  Status;

  Status = gBS->CreateEventEx (
                  EVT_NOTIFY_SIGNAL,
                  TPL_CALLBACK,
                  (NotifyFunction == NULL ? EfiEventEmptyFunction : NotifyFunction),
                  NotifyContext,
                  &gEdkIIRedfisEventRedfishInterfaceDisconnectionGuid,
                  DisconnectRedfishInterfaceEvent
                  );

  return Status;
}

/**
  Signal ready to provisioning event.

  @retval EFI_SUCCESS       Event was created.
  @retval Other             Event was not created.

**/
EFI_STATUS
SignalReadyToProvisioningEvent (
  IN VOID
  )
{
  EFI_STATUS  Status;
  EFI_EVENT   Event;

  Status = CreateReadyToProvisioningEvent (NULL, NULL, &Event);
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a, failed to create after provisioning event\n", __func__));
    return Status;
  }

  gBS->SignalEvent (Event);
  gBS->CloseEvent (Event);

  return EFI_SUCCESS;
}

/**
  Signal after provisioning event.

  @retval EFI_SUCCESS       Event was created.
  @retval Other             Event was not created.

**/
EFI_STATUS
SignalAfterProvisioningEvent (
  IN VOID
  )
{
  EFI_STATUS  Status;
  EFI_EVENT   Event;

  Status = CreateAfterProvisioningEvent (NULL, NULL, &Event);
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a, failed to create after provisioning event\n", __func__));
    return Status;
  }

  gBS->SignalEvent (Event);
  gBS->CloseEvent (Event);

  return EFI_SUCCESS;
}

/**
  Signal disconnect Redfish interface.

  @retval EFI_SUCCESS       Event was created.
  @retval Other             Event was not created.

**/
EFI_STATUS
SignalDisconnectRedfishInterfaceEvent (
  IN VOID
  )
{
  EFI_STATUS  Status;
  EFI_EVENT   Event;

  Status = CreateRedfishInterfaceDisconnectEvent (NULL, NULL, &Event);
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a, failed to create after provisioning event\n", __func__));
    return Status;
  }

  gBS->SignalEvent (Event);
  gBS->CloseEvent (Event);
  return EFI_SUCCESS;
}
