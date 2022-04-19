# Definition of ManagerDiagnosticData.V1_0_0 and functions<br><br>

## Actions
    typedef struct _RedfishManagerDiagnosticData_V1_0_0_Actions_CS {
        RedfishManagerDiagnosticData_V1_0_0_ResetMetrics_CS *ManagerDiagnosticData_ResetMetrics;
        RedfishManagerDiagnosticData_V1_0_0_OemActions_CS *Oem;
    } RedfishManagerDiagnosticData_V1_0_0_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**ManagerDiagnosticData_ResetMetrics**|RedfishManagerDiagnosticData_V1_0_0_ResetMetrics_CS| Structure points to **#ManagerDiagnosticData.ResetMetrics** property.| No| No
|**Oem**|RedfishManagerDiagnosticData_V1_0_0_OemActions_CS| Structure points to **Oem** property.| No| No


## BootTimeStatistics
    typedef struct _RedfishManagerDiagnosticData_V1_0_0_BootTimeStatistics_CS {
        RedfishCS_int64 *FirmwareTimeSeconds;
        RedfishCS_int64 *InitrdTimeSeconds;
        RedfishCS_int64 *KernelTimeSeconds;
        RedfishCS_int64 *LoaderTimeSeconds;
        RedfishCS_int64 *UserSpaceTimeSeconds;
    } RedfishManagerDiagnosticData_V1_0_0_BootTimeStatistics_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**FirmwareTimeSeconds**|RedfishCS_int64| 64-bit long long interger pointer to **FirmwareTimeSeconds** property.| No| Yes
|**InitrdTimeSeconds**|RedfishCS_int64| 64-bit long long interger pointer to **InitrdTimeSeconds** property.| No| Yes
|**KernelTimeSeconds**|RedfishCS_int64| 64-bit long long interger pointer to **KernelTimeSeconds** property.| No| Yes
|**LoaderTimeSeconds**|RedfishCS_int64| 64-bit long long interger pointer to **LoaderTimeSeconds** property.| No| Yes
|**UserSpaceTimeSeconds**|RedfishCS_int64| 64-bit long long interger pointer to **UserSpaceTimeSeconds** property.| No| Yes


## I2CBusStatistics
    typedef struct _RedfishManagerDiagnosticData_V1_0_0_I2CBusStatistics_CS {
        RedfishCS_int64 *BusErrorCount;
        RedfishCS_char *I2CBusName;
        RedfishCS_int64 *NACKCount;
        RedfishCS_int64 *TotalTransactionCount;
    } RedfishManagerDiagnosticData_V1_0_0_I2CBusStatistics_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**BusErrorCount**|RedfishCS_int64| 64-bit long long interger pointer to **BusErrorCount** property.| No| Yes
|**I2CBusName**|RedfishCS_char| String pointer to **I2CBusName** property.| No| Yes
|**NACKCount**|RedfishCS_int64| 64-bit long long interger pointer to **NACKCount** property.| No| Yes
|**TotalTransactionCount**|RedfishCS_int64| 64-bit long long interger pointer to **TotalTransactionCount** property.| No| Yes


## MemoryECCStatistics
    typedef struct _RedfishManagerDiagnosticData_V1_0_0_MemoryECCStatistics_CS {
        RedfishCS_int64 *CorrectableECCErrorCount;
        RedfishCS_int64 *UncorrectableECCErrorCount;
    } RedfishManagerDiagnosticData_V1_0_0_MemoryECCStatistics_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**CorrectableECCErrorCount**|RedfishCS_int64| 64-bit long long interger pointer to **CorrectableECCErrorCount** property.| No| Yes
|**UncorrectableECCErrorCount**|RedfishCS_int64| 64-bit long long interger pointer to **UncorrectableECCErrorCount** property.| No| Yes


## MemoryStatistics
    typedef struct _RedfishManagerDiagnosticData_V1_0_0_MemoryStatistics_CS {
        RedfishCS_int64 *AvailableBytes;
        RedfishCS_int64 *BuffersAndCacheBytes;
        RedfishCS_int64 *FreeBytes;
        RedfishCS_int64 *SharedBytes;
        RedfishCS_int64 *TotalBytes;
        RedfishCS_int64 *UsedBytes;
    } RedfishManagerDiagnosticData_V1_0_0_MemoryStatistics_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**AvailableBytes**|RedfishCS_int64| 64-bit long long interger pointer to **AvailableBytes** property.| No| Yes
|**BuffersAndCacheBytes**|RedfishCS_int64| 64-bit long long interger pointer to **BuffersAndCacheBytes** property.| No| Yes
|**FreeBytes**|RedfishCS_int64| 64-bit long long interger pointer to **FreeBytes** property.| No| Yes
|**SharedBytes**|RedfishCS_int64| 64-bit long long interger pointer to **SharedBytes** property.| No| Yes
|**TotalBytes**|RedfishCS_int64| 64-bit long long interger pointer to **TotalBytes** property.| No| Yes
|**UsedBytes**|RedfishCS_int64| 64-bit long long interger pointer to **UsedBytes** property.| No| Yes


## OemActions
    typedef struct _RedfishManagerDiagnosticData_V1_0_0_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishManagerDiagnosticData_V1_0_0_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## ProcessStatistics
    typedef struct _RedfishManagerDiagnosticData_V1_0_0_ProcessStatistics_CS {
        RedfishCS_char *CommandLine;
        RedfishCS_int64 *KernelTimeSeconds;
        RedfishCS_int64 *ResidentSetSizeBytes;
        RedfishCS_int64 *UserTimeSeconds;
    } RedfishManagerDiagnosticData_V1_0_0_ProcessStatistics_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**CommandLine**|RedfishCS_char| String pointer to **CommandLine** property.| No| Yes
|**KernelTimeSeconds**|RedfishCS_int64| 64-bit long long interger pointer to **KernelTimeSeconds** property.| No| Yes
|**ResidentSetSizeBytes**|RedfishCS_int64| 64-bit long long interger pointer to **ResidentSetSizeBytes** property.| No| Yes
|**UserTimeSeconds**|RedfishCS_int64| 64-bit long long interger pointer to **UserTimeSeconds** property.| No| Yes


## ProcessorStatistics
    typedef struct _RedfishManagerDiagnosticData_V1_0_0_ProcessorStatistics_CS {
        RedfishCS_int64 *KernelPercent;
        RedfishCS_int64 *UserPercent;
    } RedfishManagerDiagnosticData_V1_0_0_ProcessorStatistics_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**KernelPercent**|RedfishCS_int64| 64-bit long long interger pointer to **KernelPercent** property.| No| Yes
|**UserPercent**|RedfishCS_int64| 64-bit long long interger pointer to **UserPercent** property.| No| Yes


## ResetMetrics
    typedef struct _RedfishManagerDiagnosticData_V1_0_0_ResetMetrics_CS {
        RedfishCS_char *target;
        RedfishCS_char *title;
    } RedfishManagerDiagnosticData_V1_0_0_ResetMetrics_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**target**|RedfishCS_char| String pointer to **target** property.| No| No
|**title**|RedfishCS_char| String pointer to **title** property.| No| No


## Oem
    typedef struct _RedfishResource_Oem_CS {
        RedfishCS_Link Prop;
    } RedfishResource_Oem_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## ManagerDiagnosticData
    typedef struct _RedfishManagerDiagnosticData_V1_0_0_ManagerDiagnosticData_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishManagerDiagnosticData_V1_0_0_Actions_CS *Actions;
        RedfishManagerDiagnosticData_V1_0_0_BootTimeStatistics_CS *BootTimeStatistics;
        RedfishCS_char *Description;
        RedfishCS_int64 *FreeStorageSpaceKiB;
        RedfishManagerDiagnosticData_V1_0_0_I2CBusStatistics_CS *I2CBuses;
        RedfishCS_char *Id;
        RedfishManagerDiagnosticData_V1_0_0_MemoryECCStatistics_CS *MemoryECCStatistics;
        RedfishManagerDiagnosticData_V1_0_0_MemoryStatistics_CS *MemoryStatistics;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishManagerDiagnosticData_V1_0_0_ProcessorStatistics_CS *ProcessorStatistics;
        RedfishManagerDiagnosticData_V1_0_0_ProcessStatistics_CS *TopProcesses;
    } RedfishManagerDiagnosticData_V1_0_0_ManagerDiagnosticData_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishManagerDiagnosticData_V1_0_0_Actions_CS| Structure points to **Actions** property.| No| No
|**BootTimeStatistics**|RedfishManagerDiagnosticData_V1_0_0_BootTimeStatistics_CS| Structure points to **BootTimeStatistics** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**FreeStorageSpaceKiB**|RedfishCS_int64| 64-bit long long interger pointer to **FreeStorageSpaceKiB** property.| No| Yes
|**I2CBuses**|RedfishManagerDiagnosticData_V1_0_0_I2CBusStatistics_CS| Structure points to **I2CBuses** property.| No| No
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**MemoryECCStatistics**|RedfishManagerDiagnosticData_V1_0_0_MemoryECCStatistics_CS| Structure points to **MemoryECCStatistics** property.| No| No
|**MemoryStatistics**|RedfishManagerDiagnosticData_V1_0_0_MemoryStatistics_CS| Structure points to **MemoryStatistics** property.| No| No
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**ProcessorStatistics**|RedfishManagerDiagnosticData_V1_0_0_ProcessorStatistics_CS| Structure points to **ProcessorStatistics** property.| No| No
|**TopProcesses**|RedfishManagerDiagnosticData_V1_0_0_ProcessStatistics_CS| Structure points to **TopProcesses** property.| No| No
## Redfish ManagerDiagnosticData V1_0_0 to C Structure Function
    RedfishCS_status
    Json_ManagerDiagnosticData_V1_0_0_To_CS (RedfishCS_char *JsonRawText, RedfishManagerDiagnosticData_V1_0_0_ManagerDiagnosticData_CS **ReturnedCS);

## C Structure to Redfish ManagerDiagnosticData V1_0_0 JSON Function
    RedfishCS_status
    CS_To_ManagerDiagnosticData_V1_0_0_JSON (RedfishManagerDiagnosticData_V1_0_0_ManagerDiagnosticData_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish ManagerDiagnosticData V1_0_0 C Structure Function
    RedfishCS_status
    DestroyManagerDiagnosticData_V1_0_0_CS (RedfishManagerDiagnosticData_V1_0_0_ManagerDiagnosticData_CS *CSPtr);

