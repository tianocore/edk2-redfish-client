# Definition of Assembly.V1_0_3 and functions<br><br>

## Actions
    typedef struct _RedfishAssembly_V1_0_3_Actions_CS {
        RedfishAssembly_V1_0_3_OemActions_CS *Oem;
    } RedfishAssembly_V1_0_3_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishAssembly_V1_0_3_OemActions_CS| Structure points to **Oem** property.| No| No


## AssemblyData
    typedef struct _RedfishAssembly_V1_0_3_AssemblyData_CS {
        RedfishCS_char *odata_id;
        RedfishAssembly_V1_0_3_AssemblyDataActions_CS *Actions;
        RedfishCS_char *BinaryDataURI;
        RedfishCS_char *Description;
        RedfishCS_char *EngineeringChangeLevel;
        RedfishCS_char *MemberId;
        RedfishCS_char *Model;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_char *PartNumber;
        RedfishCS_char *Producer;
        RedfishCS_char *ProductionDate;
        RedfishCS_char *SKU;
        RedfishCS_char *SparePartNumber;
        RedfishCS_char *Vendor;
        RedfishCS_char *Version;
    } RedfishAssembly_V1_0_3_AssemblyData_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**Actions**|RedfishAssembly_V1_0_3_AssemblyDataActions_CS| Structure points to **Actions** property.| No| No
|**BinaryDataURI**|RedfishCS_char| String pointer to **BinaryDataURI** property.| No| Yes
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**EngineeringChangeLevel**|RedfishCS_char| String pointer to **EngineeringChangeLevel** property.| No| Yes
|**MemberId**|RedfishCS_char| String pointer to **MemberId** property.| No| Yes
|**Model**|RedfishCS_char| String pointer to **Model** property.| No| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**PartNumber**|RedfishCS_char| String pointer to **PartNumber** property.| No| Yes
|**Producer**|RedfishCS_char| String pointer to **Producer** property.| No| Yes
|**ProductionDate**|RedfishCS_char| String pointer to **ProductionDate** property.| No| Yes
|**SKU**|RedfishCS_char| String pointer to **SKU** property.| No| Yes
|**SparePartNumber**|RedfishCS_char| String pointer to **SparePartNumber** property.| No| Yes
|**Vendor**|RedfishCS_char| String pointer to **Vendor** property.| No| Yes
|**Version**|RedfishCS_char| String pointer to **Version** property.| No| Yes


## AssemblyDataActions
    typedef struct _RedfishAssembly_V1_0_3_AssemblyDataActions_CS {
        RedfishAssembly_V1_0_3_AssemblyDataOemActions_CS *Oem;
    } RedfishAssembly_V1_0_3_AssemblyDataActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishAssembly_V1_0_3_AssemblyDataOemActions_CS| Structure points to **Oem** property.| No| No


## AssemblyDataOemActions
    typedef struct _RedfishAssembly_V1_0_3_AssemblyDataOemActions_CS {
        RedfishCS_Link Prop;
    } RedfishAssembly_V1_0_3_AssemblyDataOemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## OemActions
    typedef struct _RedfishAssembly_V1_0_3_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishAssembly_V1_0_3_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## Oem
    typedef struct _RedfishResource_Oem_CS {
        RedfishCS_Link Prop;
    } RedfishResource_Oem_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## Assembly
    typedef struct _RedfishAssembly_V1_0_3_Assembly_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishAssembly_V1_0_3_Actions_CS *Actions;
        RedfishAssembly_V1_0_3_AssemblyData_CS *Assemblies;
        RedfishCS_int64 *Assembliesodata_count;
        RedfishCS_char *Description;
        RedfishCS_char *Id;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
    } RedfishAssembly_V1_0_3_Assembly_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishAssembly_V1_0_3_Actions_CS| Structure points to **Actions** property.| No| No
|**Assemblies**|RedfishAssembly_V1_0_3_AssemblyData_CS| Structure points to **Assemblies** property.| No| No
|**Assembliesodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **Assemblies@odata.count** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
## Redfish Assembly V1_0_3 to C Structure Function
    RedfishCS_status
    Json_Assembly_V1_0_3_To_CS (RedfishCS_char *JsonRawText, RedfishAssembly_V1_0_3_Assembly_CS **ReturnedCS);

## C Structure to Redfish Assembly V1_0_3 JSON Function
    RedfishCS_status
    CS_To_Assembly_V1_0_3_JSON (RedfishAssembly_V1_0_3_Assembly_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish Assembly V1_0_3 C Structure Function
    RedfishCS_status
    DestroyAssembly_V1_0_3_CS (RedfishAssembly_V1_0_3_Assembly_CS *CSPtr);

