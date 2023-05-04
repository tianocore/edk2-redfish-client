/** @file
  RedfishFeatureCoreDxe produces EdkIIRedfishFeatureCoreProtocol
  for EDK2 Redfish Feature driver registration.

  (C) Copyright 2021 Hewlett Packard Enterprise Development LP<BR>

  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include <RedfishFeatureCoreDxe.h>

EFI_EVENT                        mEdkIIRedfishFeatureDriverStartupEvent;
REDFISH_FEATURE_STARTUP_CONTEXT  mFeatureDriverStartupContext;
REDFISH_FEATURE_INTERNAL_DATA    *ResourceUriNodeList;

/**
  Startup child feature drivers and it's sibing feature drivers.

  @param[in]  ThisFeatureDriverList This feature driver list.
  @param[in]  StartupContext        Start up information

**/
VOID
StartUpFeatureDriver (
  IN REDFISH_FEATURE_INTERNAL_DATA    *ThisFeatureDriverList,
  IN REDFISH_FEATURE_STARTUP_CONTEXT  *StartupContext
  )
{
  EFI_STATUS                     Status;
  REDFISH_FEATURE_INTERNAL_DATA  *ThisList;

  ThisList = ThisFeatureDriverList;
  while (TRUE) {
    if (ThisList->Callback != NULL) {
      Status = ThisList->Callback (
                           StartupContext->This,
                           StartupContext->Action,
                           ThisList->Context,
                           &ThisList->ReturnedInformation
                           );
      if (EFI_ERROR (Status)) {
        DEBUG ((DEBUG_ERROR, "%a: Callback to EDK2 Redfish feature driver fail.", __func__));
      }
    }

    if (ThisList->ChildList != NULL) {
      StartUpFeatureDriver (ThisList->ChildList, StartupContext);
    }

    //
    // Check sibling Redfish feature driver.
    //
    if (ThisList->SiblingList == NULL) {
      break;
    }

    //
    // Go next sibling Redfish feature driver.
    //
    ThisList = ThisList->SiblingList;
  }
}

/**
  Callback routine when mEdkIIRedfishFeatureDriverStartupEvent
  is signaled.

  @param[in]  Event                 Event whose notification function is being invoked.
  @param[in]  Context               The pointer to the notification function's context,
                                    which is implementation-dependent.

**/
VOID
EFIAPI
RedfishFeatureDriverStartup (
  IN  EFI_EVENT  Event,
  IN  VOID       *Context
  )
{
  REDFISH_FEATURE_STARTUP_CONTEXT  *StartupContext;

  StartupContext = (REDFISH_FEATURE_STARTUP_CONTEXT *)Context;
  //
  // Invoke EDK2 Redfish feature driver callback to start up
  // the Redfish operations.
  //
  if (ResourceUriNodeList == NULL) {
    return;
  }

  //
  // Invoke the callback by the hierarchy level
  //
  StartUpFeatureDriver (ResourceUriNodeList, StartupContext);
}

/**
  Create new internal data instance.

  @param[in,out] PtrToNewInternalData  Pointer to receive new instance of
                                       REDFISH_FEATURE_INTERNAL_DATA.
  @param[in]     NodeName              Name of URI node.

  @retval EFI_SUCCESS              New entry is inserted successfully.
  @retval EFI_INVALID_PARAMETER    Improper given parameters.
  @retval EFI_OUT_OF_RESOURCES     Lack of memory for the internal data structure.

**/
EFI_STATUS
NewInternalInstance (
  IN OUT REDFISH_FEATURE_INTERNAL_DATA  **PtrToNewInternalData,
  IN EFI_STRING                         NodeName
  )
{
  REDFISH_FEATURE_INTERNAL_DATA  *NewInternalData;

  if ((PtrToNewInternalData == NULL) || (NodeName == NULL)) {
    DEBUG ((DEBUG_ERROR, "%a: Inproper given parameters\n", __func__));
    return EFI_INVALID_PARAMETER;
  }

  *PtrToNewInternalData = NULL;
  NewInternalData       = AllocateZeroPool (sizeof (REDFISH_FEATURE_INTERNAL_DATA));
  if (NewInternalData == NULL) {
    DEBUG ((DEBUG_ERROR, "%a: No memory for REDFISH_FEATURE_INTERNAL_DATA\n", __func__));
    return EFI_OUT_OF_RESOURCES;
  }

  NewInternalData->NodeName = AllocateZeroPool (StrSize (NodeName));
  StrnCpyS (NewInternalData->NodeName, StrSize (NodeName), (CONST CHAR16 *)NodeName, StrLen (NodeName));
  NewInternalData->SiblingList = NULL;
  NewInternalData->ChildList   = NULL;
  if ((NodeName[0] == (UINT16)NodeIsCollectionLeftBracket) &&
      (NodeName[StrLen (NodeName) - 1] == (UINT16)NodeIsCollectionRightBracket))
  {
    NewInternalData->Flags |= REDFISH_FEATURE_INTERNAL_DATA_IS_COLLECTION;
  }

  *PtrToNewInternalData = NewInternalData;
  return EFI_SUCCESS;
}

/**
  Insert the URI node into internal data structure

  @param[in]        HeadEntryToInsert  The head entry to start the searching.
  @param[in]        NodeName           Name of URI node.
  @param[in, out]   NextNodeEntry      Pointer to receive the pointer of next head
                                       entry for inserting the follow up nodes.
                                       The returned LIST_ENTRY is the address of
                                       ChildList link list.
  @retval EFI_SUCCESS              New entry is inserted successfully.
  @retval EFI_INVALID_PARAMETER    Improper given parameters.
  @retval EFI_OUT_OF_RESOURCES     Lack of memory for the internal data structure.

**/
EFI_STATUS
InsertRedfishFeatureUriNode (
  IN REDFISH_FEATURE_INTERNAL_DATA      *HeadEntryToInsert,
  IN EFI_STRING                         NodeName,
  IN OUT REDFISH_FEATURE_INTERNAL_DATA  **NextNodeEntry
  )
{
  EFI_STATUS                     Status;
  REDFISH_FEATURE_INTERNAL_DATA  *NewInternalData;
  REDFISH_FEATURE_INTERNAL_DATA  *ThisInternalData;
  REDFISH_FEATURE_INTERNAL_DATA  *SiblingList;

  if (NodeName == NULL) {
    DEBUG ((DEBUG_ERROR, "%a: Node name is NULL.\n", __func__));
    return EFI_INVALID_PARAMETER;
  }

  if (NextNodeEntry == NULL) {
    DEBUG ((DEBUG_ERROR, "%a: NextNodeEntry can't be NULL.\n", __func__));
    return EFI_INVALID_PARAMETER;
  }

  if ((HeadEntryToInsert == NULL) || (HeadEntryToInsert->ChildList == NULL)) {
    Status = NewInternalInstance (&NewInternalData, NodeName);
    if (EFI_ERROR (Status)) {
      return Status;
    }

    if (HeadEntryToInsert == NULL) {
      ResourceUriNodeList = NewInternalData;
    } else {
      HeadEntryToInsert->ChildList = NewInternalData;
    }

    *NextNodeEntry = NewInternalData;
    return EFI_SUCCESS;
  }

  //
  // Go through sibling list to find the entry.
  //
  ThisInternalData = HeadEntryToInsert;
  SiblingList      = ThisInternalData->SiblingList;
  while (TRUE) {
    if (StrCmp ((CONST CHAR16 *)ThisInternalData->NodeName, (CONST CHAR16 *)NodeName) == 0) {
      *NextNodeEntry = ThisInternalData->ChildList;
      return EFI_SUCCESS;
    }

    //
    // If sibing exist?
    //
    if (SiblingList == NULL) {
      Status = NewInternalInstance (&NewInternalData, NodeName);
      if (EFI_ERROR (Status)) {
        return Status;
      }

      ThisInternalData->SiblingList = NewInternalData;
      *NextNodeEntry                = NewInternalData->ChildList;
      return EFI_SUCCESS;
    }

    SiblingList = SiblingList->SiblingList;
  }

  return EFI_SUCCESS;
}

/**
  The registration function for the Redfish Feature driver.

  @param[in]   This                Pointer to EDKII_REDFISH_FEATURE_PROTOCOL instance.
  @param[in]   FeatureManagedUri   The URI represents the hierarchy path of the Redfish
                                   resource in the entire Redfish data model that managed
                                   by Redfish feature driver . Each node in the hierarchy
                                   path is the property name defined in the schema of the
                                   resource.
                                   e.g. "ServiceRoot/" - Managed by ServiceRoot feature driver
                                        "ServiceRoot/Systems[]/" - Managed by ComputerSystemCollection feature driver
                                        "ServiceRoot/Systems[1]/" - Managed by ComputerSystem feature driver
                                        "ServiceRoot/Systems[2]/Bios/" - Managed by Bios feature driver
  @param[in]   Callback            Callback routine associated with this registration that
                                   provided by Redfish feature driver to execute the action
                                   on Redfish resource which is managed by this Redfish
                                   feature driver.
  @param[in]   Context             The context of the registering feature driver. The pointer
                                   to the conext is delivered through callback function.
  @retval EFI_SUCCESS              Redfish feature driver is registered successfully.
  @retval EFI_SUCCESS              Redfish feature driver is registered successfully.
  @retval EFI_INVALID_PARAMETER    Improper given parameters or fail to register
                                   feature driver.
  @retval EFI_OUT_OF_RESOURCES     Lack of memory for the internal data structure.
  @retval Others                   Some error happened.

**/
EFI_STATUS
EFIAPI
RedfishFeatureRegister (
  IN EDKII_REDFISH_FEATURE_PROTOCOL  *This,
  IN EFI_STRING                      FeatureManagedUri,
  IN REDFISH_FEATURE_CALLBACK        Callback,
  IN VOID                            *Context
  )
{
  CHAR16                         NodeName[MaxNodeNameLength];
  EFI_STATUS                     Status;
  UINTN                          Index;
  UINTN                          AnchorIndex;
  UINTN                          UriLength;
  REDFISH_FEATURE_INTERNAL_DATA  *ThisUriNode;

  if ((FeatureManagedUri == NULL) || (Callback == NULL)) {
    DEBUG ((DEBUG_ERROR, "%a: The given parameter is invalid\n", __func__));
    return EFI_INVALID_PARAMETER;
  }

  //
  // Walk through URI which managed by this EDK2 Redfish feature driver.
  //
  UriLength   = StrLen (FeatureManagedUri) + 1; // Add one NULL for the last node.
  Index       = 0;
  AnchorIndex = 0;
  ThisUriNode = ResourceUriNodeList;
  do {
    if ((Index - AnchorIndex + 1) >= MaxNodeNameLength) {
      // Increase one for the NULL terminator
      DEBUG ((DEBUG_ERROR, "%a: the length of node name is >= MaxNodeNameLength\n", __func__));
      ASSERT (FALSE);
    }

    NodeName[Index - AnchorIndex] = *(FeatureManagedUri + Index);
    if ((NodeName[Index - AnchorIndex] == NodeSeperator) || (NodeName[Index - AnchorIndex] == (CHAR16)0)) {
      NodeName[Index - AnchorIndex] = 0;
      AnchorIndex                   = Index + 1;
      //
      // Insert node
      //
      if (StrLen (NodeName) != 0) {
        Status = InsertRedfishFeatureUriNode (ThisUriNode, NodeName, &ThisUriNode);
        if (EFI_ERROR (Status)) {
          return Status;
        }
      }
    }

    Index++;
  } while ((Index < UriLength));

  if (ThisUriNode == NULL) {
    //
    // No URI node was created
    //
    DEBUG ((DEBUG_ERROR, "%a: No URI node is added\n", __func__));
    return EFI_INVALID_PARAMETER;
  }

  //
  // Add feature driver info to internal data instance.
  //
  ThisUriNode->Callback = Callback;
  ThisUriNode->Context  = Context;
  return EFI_SUCCESS;
}

/**
  The unregistration function for the Redfish Feature driver.

  @param[in]   This                Pointer to EDKII_REDFISH_FEATURE_PROTOCOL instance.
  @param[in]   FeatureManagedUri   The URI represents the hierarchy path of the Redfish
                                   resource in the entire Redfish data model that managed
                                   by Redfish feature driver . Each node in the hierarchy
                                   path is the property name defined in the schema of the
                                   resource.
  @param[in]   Context             The context used for the previous feature driver
                                   registration.
  @retval EFI_SUCCESS              Redfish feature driver is registered successfully.
  @retval Others                   Some error happened.

**/
EFI_STATUS
EFIAPI
RedfishFeatureUnregister (
  IN     EDKII_REDFISH_FEATURE_PROTOCOL  *This,
  IN     EFI_STRING                      FeatureManagedUri,
  IN     VOID                            *Context
  )
{
  return EFI_UNSUPPORTED;
}

EDKII_REDFISH_FEATURE_PROTOCOL  mRedfishFeatureProtocol = {
  RedfishFeatureRegister,
  RedfishFeatureUnregister
};

/**
  Main entry for this driver.

  @param[in] ImageHandle     Image handle this driver.
  @param[in] SystemTable     Pointer to SystemTable.

  @retval EFI_SUCESS     This function always complete successfully.

**/
EFI_STATUS
EFIAPI
RedfishFeatureCoreEntryPoint (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  )
{
  EFI_STATUS  Status;
  EFI_HANDLE  Handle;
  EFI_GUID    *EventGuid;

  Handle              = NULL;
  ResourceUriNodeList = NULL;
  EventGuid           = (EFI_GUID *)PcdGetPtr (PcdEdkIIRedfishFeatureDriverStartupEventGuid);

  ZeroMem ((VOID *)&mFeatureDriverStartupContext, sizeof (REDFISH_FEATURE_STARTUP_CONTEXT));
  mFeatureDriverStartupContext.This   = &mRedfishFeatureProtocol;
  mFeatureDriverStartupContext.Action = CallbackActionStartOperation;

  Status = gBS->CreateEventEx (
                  EVT_NOTIFY_SIGNAL,
                  TPL_CALLBACK,
                  RedfishFeatureDriverStartup,
                  (CONST VOID *)&mFeatureDriverStartupContext,
                  EventGuid,
                  &mEdkIIRedfishFeatureDriverStartupEvent
                  );
  if (EFI_ERROR (Status)) {
    return Status;
  }

  //
  // Install the RedfishCredentialProtocol onto Handle.
  //
  Status = gBS->InstallMultipleProtocolInterfaces (
                  &Handle,
                  &gEdkIIRedfishFeatureProtocolGuid,
                  &mRedfishFeatureProtocol,
                  NULL
                  );
  return Status;
}
