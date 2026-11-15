/** @file
  Redfish task library platform implementation.

  Copyright (c) 2023-2026, NVIDIA CORPORATION & AFFILIATES. All rights reserved.

  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include "RedfishPlatformTaskInternal.h"

/**

  This function convert task state from REDFISH_TASK_STATE ASCII string.
  Caller does not need to free returned string.

  @param[in]  TaskState  Task state

  @retval     CHAR8 *     Task state in ASCII string.
  @retval     NULL        Errors occur.

**/
STATIC
CHAR8 *
GetTaskStateString (
  IN REDFISH_TASK_STATE  TaskState
  )
{
  switch (TaskState) {
    case RedfishTaskStateCompleted:
      return REDFISH_TASK_COMPLETED_STR;
    case RedfishTaskStateException:
      return REDFISH_TASK_EXCEPTION_STR;
    default:
      return NULL;
  }
}

/**

  This function sets ASCII string value to given attribute in JSON object.

  @param[in]  JsonObj     JSON object
  @param[in]  Attribute   Attribute name
  @param[in]  Value       ASCII string value

  @retval     EFI_SUCCESS  Value is set to JSON object.
  @retval     Others       Errors occur.

**/
STATIC
EFI_STATUS
RedfishTaskSetAsciiString (
  IN EDKII_JSON_VALUE  JsonObj,
  IN CHAR8             *Attribute,
  IN CHAR8             *Value
  )
{
  EFI_STATUS        Status;
  EDKII_JSON_VALUE  StringObj;

  StringObj = JsonValueInitAsciiString (Value);
  if (StringObj == NULL) {
    return EFI_OUT_OF_RESOURCES;
  }

  Status = JsonObjectSetValue (JsonValueGetObject (JsonObj), Attribute, StringObj);

  //
  // JSON object holds its own reference on success. Release ours.
  //
  JsonValueFree (StringObj);

  return Status;
}

/**

  This function add message to given message array

  @param[in]  JsonArray   Json array
  @param[in]  Message     Message to add
  @param[in]  OnSuccess   TRUE if this is success message.
                          FALSE otherwise.

  @retval     EFI_SUCCESS  Message is attached to JSON array.
  @retval     Others       Errors occur.

**/
STATIC
EFI_STATUS
RedfishTaskAddMessage (
  IN EDKII_JSON_ARRAY  JsonArray,
  IN CHAR8             *Message,
  IN BOOLEAN           OnSuccess
  )
{
  EFI_STATUS        Status;
  EDKII_JSON_VALUE  MessageObj;

  if ((JsonArray == NULL) || IS_EMPTY_STRING (Message)) {
    return EFI_INVALID_PARAMETER;
  }

  MessageObj = JsonValueInitObject ();
  if (MessageObj == NULL) {
    return EFI_OUT_OF_RESOURCES;
  }

  //
  // Message ID
  //
  Status = RedfishTaskSetAsciiString (
             MessageObj,
             REDFISH_TASK_MSG_ID_ATTRIBUTE,
             (OnSuccess ? REDFISH_TASK_MSG_ID_SUCCESS : REDFISH_TASK_MSG_ID_ERROR)
             );
  if (EFI_ERROR (Status)) {
    goto ON_RELEASE;
  }

  //
  // Message
  //
  Status = RedfishTaskSetAsciiString (MessageObj, REDFISH_TASK_MSG_ATTRIBUTE, Message);
  if (EFI_ERROR (Status)) {
    goto ON_RELEASE;
  }

  Status = JsonArrayAppendValue (JsonArray, MessageObj);

ON_RELEASE:

  //
  // JSON array holds its own reference on success. Release ours.
  //
  JsonValueFree (MessageObj);

  return Status;
}

/**

  This function update task result to BMC task service. There is
  no standard way defined in Redfish specification that allows
  BIOS to update task state and status. Platform implement
  this function to update task result to BMC by following
  BMC defined interface.

  @param[in]  RedfishService  Instance to Redfish service.
  @param[in]  TaskUri         The URI of task to update result.
  @param[in]  TaskResult      The task state and task status to update.

  @retval     EFI_SUCCESS         Task state and status is updated to BMC.
  @retval     Others              Errors occur.

**/
EFI_STATUS
RedfishTaskUpdate (
  IN REDFISH_SERVICE      RedfishService,
  IN EFI_STRING           TaskUri,
  IN REDFISH_TASK_RESULT  TaskResult
  )
{
  EFI_STATUS            Status;
  REDFISH_RESPONSE      Response;
  EFI_STRING            TaskUpdateUri;
  UINTN                 TaskUpdateUriSize;
  EDKII_JSON_VALUE      TaskResultObj;
  EDKII_JSON_ARRAY      MessageArrayObj;
  CHAR8                 *TaskStateStr;
  CHAR8                 *JsonText;
  REDFISH_MESSAGE_DATA  *MessageArray;
  UINTN                 MessageCount;
  UINTN                 Index;

  if ((RedfishService == NULL) || IS_EMPTY_STRING (TaskUri)) {
    return EFI_INVALID_PARAMETER;
  }

  TaskStateStr = GetTaskStateString (TaskResult.TaskState);
  if (TaskStateStr == NULL) {
    DEBUG ((DEBUG_ERROR, "%a: only support completed or exception task state\n", __func__));
    return EFI_UNSUPPORTED;
  }

  ZeroMem (&Response, sizeof (Response));
  TaskUpdateUri   = NULL;
  TaskResultObj   = NULL;
  MessageArrayObj = NULL;
  JsonText        = NULL;
  MessageArray    = NULL;
  MessageCount    = 0;

  //
  // Task update URI: "<TaskUri>/<REDFISH_TASK_UPDATE_URI>"
  //
  TaskUpdateUriSize = StrSize (TaskUri) + (AsciiStrLen (REDFISH_TASK_UPDATE_URI) + 1) * sizeof (CHAR16);
  TaskUpdateUri     = AllocatePool (TaskUpdateUriSize);
  if (TaskUpdateUri == NULL) {
    return EFI_OUT_OF_RESOURCES;
  }

  UnicodeSPrint (TaskUpdateUri, TaskUpdateUriSize, L"%s/%a", TaskUri, REDFISH_TASK_UPDATE_URI);

  //
  // Prepare task data
  //
  TaskResultObj = JsonValueInitObject ();
  if (TaskResultObj == NULL) {
    Status = EFI_OUT_OF_RESOURCES;
    goto ON_RELEASE;
  }

  Status = RedfishTaskSetAsciiString (TaskResultObj, REDFISH_TASK_STATE_ATTRIBUTE, TaskStateStr);
  if (EFI_ERROR (Status)) {
    goto ON_RELEASE;
  }

  //
  // Get message of this task URI
  //
  Status = RedfishMessageGet (TaskUri, &MessageArray, &MessageCount);
  if (EFI_ERROR (Status) && (Status != EFI_NOT_FOUND)) {
    DEBUG ((DEBUG_ERROR, "%a: failed to get message data: %r\n", __func__, Status));
    goto ON_RELEASE;
  }

  MessageArrayObj = JsonValueInitArray ();
  if (MessageArrayObj == NULL) {
    Status = EFI_OUT_OF_RESOURCES;
    goto ON_RELEASE;
  }

  if ((MessageCount == 0) && (TaskResult.TaskState == RedfishTaskStateCompleted)) {
    //
    // Add success message if there is no message returned and state is completed.
    //
    Status = RedfishTaskAddMessage (MessageArrayObj, REDFISH_TASK_MSG_SUCCESS, TRUE);
    if (EFI_ERROR (Status)) {
      DEBUG ((DEBUG_ERROR, "%a: failed to add success message: %r\n", __func__, Status));
    }
  } else {
    for (Index = 0; Index < MessageCount; Index++) {
      Status = RedfishTaskAddMessage (MessageArrayObj, MessageArray[Index].Message, (MessageArray[Index].MessageSeverity == RedfishMessageSeverityOk));
      if (EFI_ERROR (Status)) {
        DEBUG ((DEBUG_ERROR, "%a: failed to add message %Lu: %r\n", __func__, (UINT64)Index, Status));
      }
    }
  }

  Status = JsonObjectSetValue (JsonValueGetObject (TaskResultObj), REDFISH_TASK_MSG_ARRAY_ATTRIBUTE, MessageArrayObj);
  if (EFI_ERROR (Status)) {
    goto ON_RELEASE;
  }

  JsonText = JsonDumpString (TaskResultObj, EDKII_JSON_COMPACT);
  if (JsonText == NULL) {
    Status = EFI_OUT_OF_RESOURCES;
    goto ON_RELEASE;
  }

  Status = RedfishHttpPatchResource (
             RedfishService,
             TaskUpdateUri,
             JsonText,
             &Response
             );
  if (EFI_ERROR (Status)) {
    DEBUG ((DEBUG_ERROR, "%a: Patch resource: %s failed: %r\n", __func__, TaskUpdateUri, Status));
    DumpJsonValue (DEBUG_ERROR, TaskResultObj);
  }

ON_RELEASE:

  RedfishHttpFreeResponse (&Response);

  //
  // Release our reference of message array. Task result object
  // holds its own reference when message array is attached.
  //
  if (MessageArrayObj != NULL) {
    JsonValueFree (MessageArrayObj);
  }

  if (TaskResultObj != NULL) {
    JsonValueFree (TaskResultObj);
  }

  if (JsonText != NULL) {
    FreePool (JsonText);
  }

  if (MessageArray != NULL) {
    RedfishMessageFree (MessageArray, MessageCount);
  }

  if (TaskUpdateUri != NULL) {
    FreePool (TaskUpdateUri);
  }

  return Status;
}
