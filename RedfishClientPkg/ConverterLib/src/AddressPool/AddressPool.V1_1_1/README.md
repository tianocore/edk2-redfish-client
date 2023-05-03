# Definition of AddressPool.V1_1_1 and functions<br><br>

## ASNumberRange
    typedef struct _RedfishAddressPool_V1_1_1_ASNumberRange_CS {
        RedfishCS_int64 *Lower;
        RedfishCS_int64 *Upper;
    } RedfishAddressPool_V1_1_1_ASNumberRange_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Lower**|RedfishCS_int64| 64-bit long long interger pointer to **Lower** property.| No| No
|**Upper**|RedfishCS_int64| 64-bit long long interger pointer to **Upper** property.| No| No


## Actions
    typedef struct _RedfishAddressPool_V1_1_1_Actions_CS {
        RedfishAddressPool_V1_1_1_OemActions_CS *Oem;
    } RedfishAddressPool_V1_1_1_Actions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Oem**|RedfishAddressPool_V1_1_1_OemActions_CS| Structure points to **Oem** property.| No| No


## BFDSingleHopOnly
    typedef struct _RedfishAddressPool_V1_1_1_BFDSingleHopOnly_CS {
        RedfishCS_bool *DemandModeEnabled;
        RedfishCS_int64 *DesiredMinTxIntervalMilliseconds;
        RedfishCS_char *KeyChain;
        RedfishCS_int64 *LocalMultiplier;
        RedfishCS_bool *MeticulousModeEnabled;
        RedfishCS_int64 *RequiredMinRxIntervalMilliseconds;
        RedfishCS_int64 *SourcePort;
    } RedfishAddressPool_V1_1_1_BFDSingleHopOnly_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**DemandModeEnabled**|RedfishCS_bool| Boolean pointer to **DemandModeEnabled** property.| No| No
|**DesiredMinTxIntervalMilliseconds**|RedfishCS_int64| 64-bit long long interger pointer to **DesiredMinTxIntervalMilliseconds** property.| No| No
|**KeyChain**|RedfishCS_char| String pointer to **KeyChain** property.| No| No
|**LocalMultiplier**|RedfishCS_int64| 64-bit long long interger pointer to **LocalMultiplier** property.| No| No
|**MeticulousModeEnabled**|RedfishCS_bool| Boolean pointer to **MeticulousModeEnabled** property.| No| No
|**RequiredMinRxIntervalMilliseconds**|RedfishCS_int64| 64-bit long long interger pointer to **RequiredMinRxIntervalMilliseconds** property.| No| No
|**SourcePort**|RedfishCS_int64| 64-bit long long interger pointer to **SourcePort** property.| No| No


## BGPEvpn
    typedef struct _RedfishAddressPool_V1_1_1_BGPEvpn_CS {
        RedfishCS_bool *ARPProxyEnabled;
        RedfishCS_bool *ARPSupressionEnabled;
        RedfishCS_char *AnycastGatewayIPAddress;
        RedfishCS_char *AnycastGatewayMACAddress;
        RedfishAddressPool_V1_1_1_ESINumberRange_CS *ESINumberRange;
        RedfishAddressPool_V1_1_1_EVINumberRange_CS *EVINumberRange;
        RedfishCS_char *GatewayIPAddress;
        RedfishCS_bool *NDPProxyEnabled;
        RedfishCS_bool *NDPSupressionEnabled;
        RedfishAddressPool_V1_1_1_RouteDistinguisherRange_CS *RouteDistinguisherRange;
        RedfishAddressPool_V1_1_1_RouteTargetRange_CS *RouteTargetRange;
        RedfishCS_bool *UnderlayMulticastEnabled;
        RedfishCS_bool *UnknownUnicastSuppressionEnabled;
        RedfishAddressPool_V1_1_1_VLANIdentifierAddressRange_CS *VLANIdentifierAddressRange;
    } RedfishAddressPool_V1_1_1_BGPEvpn_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**ARPProxyEnabled**|RedfishCS_bool| Boolean pointer to **ARPProxyEnabled** property.| No| No
|**ARPSupressionEnabled**|RedfishCS_bool| Boolean pointer to **ARPSupressionEnabled** property.| No| No
|**AnycastGatewayIPAddress**|RedfishCS_char| String pointer to **AnycastGatewayIPAddress** property.| No| No
|**AnycastGatewayMACAddress**|RedfishCS_char| String pointer to **AnycastGatewayMACAddress** property.| No| No
|**ESINumberRange**|RedfishAddressPool_V1_1_1_ESINumberRange_CS| Structure points to **ESINumberRange** property.| No| No
|**EVINumberRange**|RedfishAddressPool_V1_1_1_EVINumberRange_CS| Structure points to **EVINumberRange** property.| No| No
|**GatewayIPAddress**|RedfishCS_char| String pointer to **GatewayIPAddress** property.| No| No
|**NDPProxyEnabled**|RedfishCS_bool| Boolean pointer to **NDPProxyEnabled** property.| No| No
|**NDPSupressionEnabled**|RedfishCS_bool| Boolean pointer to **NDPSupressionEnabled** property.| No| No
|**RouteDistinguisherRange**|RedfishAddressPool_V1_1_1_RouteDistinguisherRange_CS| Structure points to **RouteDistinguisherRange** property.| No| No
|**RouteTargetRange**|RedfishAddressPool_V1_1_1_RouteTargetRange_CS| Structure points to **RouteTargetRange** property.| No| No
|**UnderlayMulticastEnabled**|RedfishCS_bool| Boolean pointer to **UnderlayMulticastEnabled** property.| No| No
|**UnknownUnicastSuppressionEnabled**|RedfishCS_bool| Boolean pointer to **UnknownUnicastSuppressionEnabled** property.| No| No
|**VLANIdentifierAddressRange**|RedfishAddressPool_V1_1_1_VLANIdentifierAddressRange_CS| Structure points to **VLANIdentifierAddressRange** property.| No| No


## BGPNeighbor
    typedef struct _RedfishAddressPool_V1_1_1_BGPNeighbor_CS {
        RedfishCS_char *Address;
        RedfishCS_bool *AllowOwnASEnabled;
        RedfishCS_int64 *ConnectRetrySeconds;
        RedfishCS_int64 *HoldTimeSeconds;
        RedfishCS_int64 *KeepaliveIntervalSeconds;
        RedfishCS_int64 *LocalAS;
        RedfishCS_bool *LogStateChangesEnabled;
        RedfishAddressPool_V1_1_1_MaxPrefix_CS *MaxPrefix;
        RedfishCS_int64 *MinimumAdvertisementIntervalSeconds;
        RedfishCS_bool *PassiveModeEnabled;
        RedfishCS_bool *PathMTUDiscoveryEnabled;
        RedfishCS_int64 *PeerAS;
        RedfishCS_bool *ReplacePeerASEnabled;
        RedfishCS_int64 *TCPMaxSegmentSizeBytes;
        RedfishCS_bool *TreatAsWithdrawEnabled;
    } RedfishAddressPool_V1_1_1_BGPNeighbor_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Address**|RedfishCS_char| String pointer to **Address** property.| No| No
|**AllowOwnASEnabled**|RedfishCS_bool| Boolean pointer to **AllowOwnASEnabled** property.| No| No
|**ConnectRetrySeconds**|RedfishCS_int64| 64-bit long long interger pointer to **ConnectRetrySeconds** property.| No| No
|**HoldTimeSeconds**|RedfishCS_int64| 64-bit long long interger pointer to **HoldTimeSeconds** property.| No| No
|**KeepaliveIntervalSeconds**|RedfishCS_int64| 64-bit long long interger pointer to **KeepaliveIntervalSeconds** property.| No| No
|**LocalAS**|RedfishCS_int64| 64-bit long long interger pointer to **LocalAS** property.| No| No
|**LogStateChangesEnabled**|RedfishCS_bool| Boolean pointer to **LogStateChangesEnabled** property.| No| No
|**MaxPrefix**|RedfishAddressPool_V1_1_1_MaxPrefix_CS| Structure points to **MaxPrefix** property.| No| No
|**MinimumAdvertisementIntervalSeconds**|RedfishCS_int64| 64-bit long long interger pointer to **MinimumAdvertisementIntervalSeconds** property.| No| No
|**PassiveModeEnabled**|RedfishCS_bool| Boolean pointer to **PassiveModeEnabled** property.| No| No
|**PathMTUDiscoveryEnabled**|RedfishCS_bool| Boolean pointer to **PathMTUDiscoveryEnabled** property.| No| No
|**PeerAS**|RedfishCS_int64| 64-bit long long interger pointer to **PeerAS** property.| No| No
|**ReplacePeerASEnabled**|RedfishCS_bool| Boolean pointer to **ReplacePeerASEnabled** property.| No| No
|**TCPMaxSegmentSizeBytes**|RedfishCS_int64| 64-bit long long interger pointer to **TCPMaxSegmentSizeBytes** property.| No| No
|**TreatAsWithdrawEnabled**|RedfishCS_bool| Boolean pointer to **TreatAsWithdrawEnabled** property.| No| No


## BGPRoute
    typedef struct _RedfishAddressPool_V1_1_1_BGPRoute_CS {
        RedfishCS_bool *AdvertiseInactiveRoutesEnabled;
        RedfishCS_int64 *DistanceExternal;
        RedfishCS_int64 *DistanceInternal;
        RedfishCS_int64 *DistanceLocal;
        RedfishCS_bool *ExternalCompareRouterIdEnabled;
        RedfishCS_bool *FlapDampingEnabled;
        RedfishCS_bool *SendDefaultRouteEnabled;
    } RedfishAddressPool_V1_1_1_BGPRoute_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**AdvertiseInactiveRoutesEnabled**|RedfishCS_bool| Boolean pointer to **AdvertiseInactiveRoutesEnabled** property.| No| No
|**DistanceExternal**|RedfishCS_int64| 64-bit long long interger pointer to **DistanceExternal** property.| No| No
|**DistanceInternal**|RedfishCS_int64| 64-bit long long interger pointer to **DistanceInternal** property.| No| No
|**DistanceLocal**|RedfishCS_int64| 64-bit long long interger pointer to **DistanceLocal** property.| No| No
|**ExternalCompareRouterIdEnabled**|RedfishCS_bool| Boolean pointer to **ExternalCompareRouterIdEnabled** property.| No| No
|**FlapDampingEnabled**|RedfishCS_bool| Boolean pointer to **FlapDampingEnabled** property.| No| No
|**SendDefaultRouteEnabled**|RedfishCS_bool| Boolean pointer to **SendDefaultRouteEnabled** property.| No| No


## CommonBGPProperties
    typedef struct _RedfishAddressPool_V1_1_1_CommonBGPProperties_CS {
        RedfishAddressPool_V1_1_1_ASNumberRange_CS *ASNumberRange;
        RedfishAddressPool_V1_1_1_BGPNeighbor_CS *BGPNeighbor;
        RedfishAddressPool_V1_1_1_BGPRoute_CS *BGPRoute;
        RedfishAddressPool_V1_1_1_GracefulRestart_CS *GracefulRestart;
        RedfishAddressPool_V1_1_1_MultiplePaths_CS *MultiplePaths;
        RedfishCS_bool *SendCommunityEnabled;
    } RedfishAddressPool_V1_1_1_CommonBGPProperties_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**ASNumberRange**|RedfishAddressPool_V1_1_1_ASNumberRange_CS| Structure points to **ASNumberRange** property.| No| No
|**BGPNeighbor**|RedfishAddressPool_V1_1_1_BGPNeighbor_CS| Structure points to **BGPNeighbor** property.| No| No
|**BGPRoute**|RedfishAddressPool_V1_1_1_BGPRoute_CS| Structure points to **BGPRoute** property.| No| No
|**GracefulRestart**|RedfishAddressPool_V1_1_1_GracefulRestart_CS| Structure points to **GracefulRestart** property.| No| No
|**MultiplePaths**|RedfishAddressPool_V1_1_1_MultiplePaths_CS| Structure points to **MultiplePaths** property.| No| No
|**SendCommunityEnabled**|RedfishCS_bool| Boolean pointer to **SendCommunityEnabled** property.| No| No


## DHCP
    typedef struct _RedfishAddressPool_V1_1_1_DHCP_CS {
        RedfishCS_int64 *DHCPInterfaceMTUBytes;
        RedfishCS_bool *DHCPRelayEnabled;
        RedfishCS_char_Array *DHCPServer;
    } RedfishAddressPool_V1_1_1_DHCP_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**DHCPInterfaceMTUBytes**|RedfishCS_int64| 64-bit long long interger pointer to **DHCPInterfaceMTUBytes** property.| No| No
|**DHCPRelayEnabled**|RedfishCS_bool| Boolean pointer to **DHCPRelayEnabled** property.| No| No
|**DHCPServer**|RedfishCS_char_Array| Structure array points to one or more than one **RedfishCS_char *** for property **DHCPServer**.| No| No


## EBGP
    typedef struct _RedfishAddressPool_V1_1_1_EBGP_CS {
        RedfishAddressPool_V1_1_1_ASNumberRange_CS *ASNumberRange;
        RedfishCS_bool *AllowDuplicateASEnabled;
        RedfishCS_bool *AllowOverrideASEnabled;
        RedfishCS_bool *AlwaysCompareMEDEnabled;
        RedfishCS_int64 *BGPLocalPreference;
        RedfishAddressPool_V1_1_1_BGPNeighbor_CS *BGPNeighbor;
        RedfishAddressPool_V1_1_1_BGPRoute_CS *BGPRoute;
        RedfishCS_int64 *BGPWeight;
        RedfishAddressPool_V1_1_1_GracefulRestart_CS *GracefulRestart;
        RedfishCS_int64 *MED;
        RedfishCS_bool *MultihopEnabled;
        RedfishCS_int64 *MultihopTTL;
        RedfishAddressPool_V1_1_1_MultiplePaths_CS *MultiplePaths;
        RedfishCS_bool *SendCommunityEnabled;
    } RedfishAddressPool_V1_1_1_EBGP_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**ASNumberRange**|RedfishAddressPool_V1_1_1_ASNumberRange_CS| Structure points to **ASNumberRange** property.| No| No
|**AllowDuplicateASEnabled**|RedfishCS_bool| Boolean pointer to **AllowDuplicateASEnabled** property.| No| No
|**AllowOverrideASEnabled**|RedfishCS_bool| Boolean pointer to **AllowOverrideASEnabled** property.| No| No
|**AlwaysCompareMEDEnabled**|RedfishCS_bool| Boolean pointer to **AlwaysCompareMEDEnabled** property.| No| No
|**BGPLocalPreference**|RedfishCS_int64| 64-bit long long interger pointer to **BGPLocalPreference** property.| No| No
|**BGPNeighbor**|RedfishAddressPool_V1_1_1_BGPNeighbor_CS| Structure points to **BGPNeighbor** property.| No| No
|**BGPRoute**|RedfishAddressPool_V1_1_1_BGPRoute_CS| Structure points to **BGPRoute** property.| No| No
|**BGPWeight**|RedfishCS_int64| 64-bit long long interger pointer to **BGPWeight** property.| No| No
|**GracefulRestart**|RedfishAddressPool_V1_1_1_GracefulRestart_CS| Structure points to **GracefulRestart** property.| No| No
|**MED**|RedfishCS_int64| 64-bit long long interger pointer to **MED** property.| No| No
|**MultihopEnabled**|RedfishCS_bool| Boolean pointer to **MultihopEnabled** property.| No| No
|**MultihopTTL**|RedfishCS_int64| 64-bit long long interger pointer to **MultihopTTL** property.| No| No
|**MultiplePaths**|RedfishAddressPool_V1_1_1_MultiplePaths_CS| Structure points to **MultiplePaths** property.| No| No
|**SendCommunityEnabled**|RedfishCS_bool| Boolean pointer to **SendCommunityEnabled** property.| No| No


## ESINumberRange
    typedef struct _RedfishAddressPool_V1_1_1_ESINumberRange_CS {
        RedfishCS_int64 *Lower;
        RedfishCS_int64 *Upper;
    } RedfishAddressPool_V1_1_1_ESINumberRange_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Lower**|RedfishCS_int64| 64-bit long long interger pointer to **Lower** property.| No| No
|**Upper**|RedfishCS_int64| 64-bit long long interger pointer to **Upper** property.| No| No


## EVINumberRange
    typedef struct _RedfishAddressPool_V1_1_1_EVINumberRange_CS {
        RedfishCS_int64 *Lower;
        RedfishCS_int64 *Upper;
    } RedfishAddressPool_V1_1_1_EVINumberRange_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Lower**|RedfishCS_int64| 64-bit long long interger pointer to **Lower** property.| No| No
|**Upper**|RedfishCS_int64| 64-bit long long interger pointer to **Upper** property.| No| No


## Ethernet
    typedef struct _RedfishAddressPool_V1_1_1_Ethernet_CS {
        RedfishAddressPool_V1_1_1_BFDSingleHopOnly_CS *BFDSingleHopOnly;
        RedfishAddressPool_V1_1_1_BGPEvpn_CS *BGPEvpn;
        RedfishAddressPool_V1_1_1_EBGP_CS *EBGP;
        RedfishAddressPool_V1_1_1_IPv4_CS *IPv4;
        RedfishAddressPool_V1_1_1_EBGP_CS *MultiProtocolEBGP;
        RedfishAddressPool_V1_1_1_CommonBGPProperties_CS *MultiProtocolIBGP;
    } RedfishAddressPool_V1_1_1_Ethernet_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**BFDSingleHopOnly**|RedfishAddressPool_V1_1_1_BFDSingleHopOnly_CS| Structure points to **BFDSingleHopOnly** property.| No| No
|**BGPEvpn**|RedfishAddressPool_V1_1_1_BGPEvpn_CS| Structure points to **BGPEvpn** property.| No| No
|**EBGP**|RedfishAddressPool_V1_1_1_EBGP_CS| Structure points to **EBGP** property.| No| No
|**IPv4**|RedfishAddressPool_V1_1_1_IPv4_CS| Structure points to **IPv4** property.| No| No
|**MultiProtocolEBGP**|RedfishAddressPool_V1_1_1_EBGP_CS| Structure points to **MultiProtocolEBGP** property.| No| No
|**MultiProtocolIBGP**|RedfishAddressPool_V1_1_1_CommonBGPProperties_CS| Structure points to **MultiProtocolIBGP** property.| No| No


## GenZ
    typedef struct _RedfishAddressPool_V1_1_1_GenZ_CS {
        RedfishCS_char *AccessKey;
        RedfishCS_int64 *MaxCID;
        RedfishCS_int64 *MaxSID;
        RedfishCS_int64 *MinCID;
        RedfishCS_int64 *MinSID;
    } RedfishAddressPool_V1_1_1_GenZ_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**AccessKey**|RedfishCS_char| String pointer to **AccessKey** property.| No| No
|**MaxCID**|RedfishCS_int64| 64-bit long long interger pointer to **MaxCID** property.| No| No
|**MaxSID**|RedfishCS_int64| 64-bit long long interger pointer to **MaxSID** property.| No| No
|**MinCID**|RedfishCS_int64| 64-bit long long interger pointer to **MinCID** property.| No| No
|**MinSID**|RedfishCS_int64| 64-bit long long interger pointer to **MinSID** property.| No| No


## GracefulRestart
    typedef struct _RedfishAddressPool_V1_1_1_GracefulRestart_CS {
        RedfishCS_bool *GracefulRestartEnabled;
        RedfishCS_bool *HelperModeEnabled;
        RedfishCS_int64 *StaleRoutesTimeSeconds;
        RedfishCS_int64 *TimeSeconds;
    } RedfishAddressPool_V1_1_1_GracefulRestart_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**GracefulRestartEnabled**|RedfishCS_bool| Boolean pointer to **GracefulRestartEnabled** property.| No| No
|**HelperModeEnabled**|RedfishCS_bool| Boolean pointer to **HelperModeEnabled** property.| No| No
|**StaleRoutesTimeSeconds**|RedfishCS_int64| 64-bit long long interger pointer to **StaleRoutesTimeSeconds** property.| No| No
|**TimeSeconds**|RedfishCS_int64| 64-bit long long interger pointer to **TimeSeconds** property.| No| No


## IPv4
    typedef struct _RedfishAddressPool_V1_1_1_IPv4_CS {
        RedfishCS_char *AnycastGatewayIPAddress;
        RedfishCS_char *AnycastGatewayMACAddress;
        RedfishAddressPool_V1_1_1_DHCP_CS *DHCP;
        RedfishCS_char *DNSDomainName;
        RedfishCS_char_Array *DNSServer;
        RedfishCS_bool *DistributeIntoUnderlayEnabled;
        RedfishAddressPool_V1_1_1_IPv4AddressRange_CS *EBGPAddressRange;
        RedfishAddressPool_V1_1_1_IPv4AddressRange_CS *FabricLinkAddressRange;
        RedfishCS_char *GatewayIPAddress;
        RedfishAddressPool_V1_1_1_IPv4AddressRange_CS *HostAddressRange;
        RedfishAddressPool_V1_1_1_IPv4AddressRange_CS *IBGPAddressRange;
        RedfishAddressPool_V1_1_1_IPv4AddressRange_CS *LoopbackAddressRange;
        RedfishAddressPool_V1_1_1_IPv4AddressRange_CS *ManagementAddressRange;
        RedfishCS_int64 *NTPOffsetHoursMinutes;
        RedfishCS_char_Array *NTPServer;
        RedfishCS_char *NTPTimezone;
        RedfishCS_int64 *NativeVLAN;
        RedfishAddressPool_V1_1_1_VLANIdentifierAddressRange_CS *VLANIdentifierAddressRange;
    } RedfishAddressPool_V1_1_1_IPv4_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**AnycastGatewayIPAddress**|RedfishCS_char| String pointer to **AnycastGatewayIPAddress** property.| No| No
|**AnycastGatewayMACAddress**|RedfishCS_char| String pointer to **AnycastGatewayMACAddress** property.| No| No
|**DHCP**|RedfishAddressPool_V1_1_1_DHCP_CS| Structure points to **DHCP** property.| No| No
|**DNSDomainName**|RedfishCS_char| String pointer to **DNSDomainName** property.| No| No
|**DNSServer**|RedfishCS_char_Array| Structure array points to one or more than one **RedfishCS_char *** for property **DNSServer**.| No| No
|**DistributeIntoUnderlayEnabled**|RedfishCS_bool| Boolean pointer to **DistributeIntoUnderlayEnabled** property.| No| No
|**EBGPAddressRange**|RedfishAddressPool_V1_1_1_IPv4AddressRange_CS| Structure points to **EBGPAddressRange** property.| No| No
|**FabricLinkAddressRange**|RedfishAddressPool_V1_1_1_IPv4AddressRange_CS| Structure points to **FabricLinkAddressRange** property.| No| No
|**GatewayIPAddress**|RedfishCS_char| String pointer to **GatewayIPAddress** property.| No| No
|**HostAddressRange**|RedfishAddressPool_V1_1_1_IPv4AddressRange_CS| Structure points to **HostAddressRange** property.| No| No
|**IBGPAddressRange**|RedfishAddressPool_V1_1_1_IPv4AddressRange_CS| Structure points to **IBGPAddressRange** property.| No| No
|**LoopbackAddressRange**|RedfishAddressPool_V1_1_1_IPv4AddressRange_CS| Structure points to **LoopbackAddressRange** property.| No| No
|**ManagementAddressRange**|RedfishAddressPool_V1_1_1_IPv4AddressRange_CS| Structure points to **ManagementAddressRange** property.| No| No
|**NTPOffsetHoursMinutes**|RedfishCS_int64| 64-bit long long interger pointer to **NTPOffsetHoursMinutes** property.| No| No
|**NTPServer**|RedfishCS_char_Array| Structure array points to one or more than one **RedfishCS_char *** for property **NTPServer**.| No| No
|**NTPTimezone**|RedfishCS_char| String pointer to **NTPTimezone** property.| No| No
|**NativeVLAN**|RedfishCS_int64| 64-bit long long interger pointer to **NativeVLAN** property.| No| No
|**VLANIdentifierAddressRange**|RedfishAddressPool_V1_1_1_VLANIdentifierAddressRange_CS| Structure points to **VLANIdentifierAddressRange** property.| No| No


## IPv4AddressRange
    typedef struct _RedfishAddressPool_V1_1_1_IPv4AddressRange_CS {
        RedfishCS_char *Lower;
        RedfishCS_char *Upper;
    } RedfishAddressPool_V1_1_1_IPv4AddressRange_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Lower**|RedfishCS_char| String pointer to **Lower** property.| No| No
|**Upper**|RedfishCS_char| String pointer to **Upper** property.| No| No


## Links
    typedef struct _RedfishAddressPool_V1_1_1_Links_CS {
        RedfishCS_Link Endpoints;
        RedfishCS_int64 *Endpointsodata_count;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_Link Zones;
        RedfishCS_int64 *Zonesodata_count;
    } RedfishAddressPool_V1_1_1_Links_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Endpoints**|RedfishCS_Link| Structure link list to **Endpoints** property.| No| No
|**Endpointsodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **Endpoints@odata.count** property.| No| No
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**Zones**|RedfishCS_Link| Structure link list to **Zones** property.| No| No
|**Zonesodata_count**|RedfishCS_int64| 64-bit long long interger pointer to **Zones@odata.count** property.| No| No


## MaxPrefix
    typedef struct _RedfishAddressPool_V1_1_1_MaxPrefix_CS {
        RedfishCS_int64 *MaxPrefixNumber;
        RedfishCS_int64 *RestartTimerSeconds;
        RedfishCS_int64 *ShutdownThresholdPercentage;
        RedfishCS_bool *ThresholdWarningOnlyEnabled;
    } RedfishAddressPool_V1_1_1_MaxPrefix_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**MaxPrefixNumber**|RedfishCS_int64| 64-bit long long interger pointer to **MaxPrefixNumber** property.| No| No
|**RestartTimerSeconds**|RedfishCS_int64| 64-bit long long interger pointer to **RestartTimerSeconds** property.| No| No
|**ShutdownThresholdPercentage**|RedfishCS_int64| 64-bit long long interger pointer to **ShutdownThresholdPercentage** property.| No| No
|**ThresholdWarningOnlyEnabled**|RedfishCS_bool| Boolean pointer to **ThresholdWarningOnlyEnabled** property.| No| No


## MultiplePaths
    typedef struct _RedfishAddressPool_V1_1_1_MultiplePaths_CS {
        RedfishCS_int64 *MaximumPaths;
        RedfishCS_bool *UseMultiplePathsEnabled;
    } RedfishAddressPool_V1_1_1_MultiplePaths_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**MaximumPaths**|RedfishCS_int64| 64-bit long long interger pointer to **MaximumPaths** property.| No| No
|**UseMultiplePathsEnabled**|RedfishCS_bool| Boolean pointer to **UseMultiplePathsEnabled** property.| No| No


## OemActions
    typedef struct _RedfishAddressPool_V1_1_1_OemActions_CS {
        RedfishCS_Link Prop;
    } RedfishAddressPool_V1_1_1_OemActions_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## RouteDistinguisherRange
    typedef struct _RedfishAddressPool_V1_1_1_RouteDistinguisherRange_CS {
        RedfishCS_int64 *Lower;
        RedfishCS_int64 *Upper;
    } RedfishAddressPool_V1_1_1_RouteDistinguisherRange_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Lower**|RedfishCS_int64| 64-bit long long interger pointer to **Lower** property.| No| No
|**Upper**|RedfishCS_int64| 64-bit long long interger pointer to **Upper** property.| No| No


## RouteTargetRange
    typedef struct _RedfishAddressPool_V1_1_1_RouteTargetRange_CS {
        RedfishCS_int64 *Lower;
        RedfishCS_int64 *Upper;
    } RedfishAddressPool_V1_1_1_RouteTargetRange_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Lower**|RedfishCS_int64| 64-bit long long interger pointer to **Lower** property.| No| No
|**Upper**|RedfishCS_int64| 64-bit long long interger pointer to **Upper** property.| No| No


## VLANIdentifierAddressRange
    typedef struct _RedfishAddressPool_V1_1_1_VLANIdentifierAddressRange_CS {
        RedfishCS_int64 *Lower;
        RedfishCS_int64 *Upper;
    } RedfishAddressPool_V1_1_1_VLANIdentifierAddressRange_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Lower**|RedfishCS_int64| 64-bit long long interger pointer to **Lower** property.| No| No
|**Upper**|RedfishCS_int64| 64-bit long long interger pointer to **Upper** property.| No| No


## Condition
    typedef struct _RedfishResource_Condition_CS {
        RedfishCS_Link LogEntry;
        RedfishCS_char *Message;
        RedfishCS_char_Array *MessageArgs;
        RedfishCS_char *MessageId;
        Redfishodatav4_idRef_CS *OriginOfCondition;
        RedfishCS_char *Severity;
        RedfishCS_char *Timestamp;
    } RedfishResource_Condition_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**LogEntry**|RedfishCS_Link| Structure link list to **LogEntry** property.| No| Yes
|**Message**|RedfishCS_char| String pointer to **Message** property.| No| Yes
|**MessageArgs**|RedfishCS_char_Array| Structure array points to one or more than one **RedfishCS_char *** for property **MessageArgs**.| No| Yes
|**MessageId**|RedfishCS_char| String pointer to **MessageId** property.| No| Yes
|**OriginOfCondition**|Redfishodatav4_idRef_CS| Structure points to **OriginOfCondition** property.| No| Yes
|**Severity**|RedfishCS_char| String pointer to **Severity** property.| No| Yes
|**Timestamp**|RedfishCS_char| String pointer to **Timestamp** property.| No| Yes


## Oem
    typedef struct _RedfishResource_Oem_CS {
        RedfishCS_Link Prop;
    } RedfishResource_Oem_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Prop**|RedfishCS_Link| Structure link list to OEM defined property| ---| ---


## Status
    typedef struct _RedfishResource_Status_CS {
        RedfishResource_Condition_Array_CS *Conditions;
        RedfishCS_char *Health;
        RedfishCS_char *HealthRollup;
        RedfishResource_Oem_CS *Oem;
        RedfishCS_char *State;
    } RedfishResource_Status_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Conditions**|RedfishResource_Condition_Array_CS| Structure array points to one or more than one **RedfishResource_Condition_Array_CS** structures for property **Conditions**.| No| No
|**Health**|RedfishCS_char| String pointer to **Health** property.| No| Yes
|**HealthRollup**|RedfishCS_char| String pointer to **HealthRollup** property.| No| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**State**|RedfishCS_char| String pointer to **State** property.| No| Yes


## idRef
    typedef struct _Redfishodatav4_idRef_CS {
        RedfishCS_char *odata_id;
    } Redfishodatav4_idRef_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No


## RedfishCS_char_Array
    typedef struct _RedfishCS_char_Array  {
        RedfishCS_Link *Next;
        RedfishCS_char *ArrayValue;
    } RedfishCS_char_Array;



## RedfishResource_Condition_Array_CS
    typedef struct _RedfishResource_Condition_Array_CS  {
        RedfishCS_Link *Next;
        RedfishResource_Condition_CS *ArrayValue;
    } RedfishResource_Condition_Array_CS;



## AddressPool
    typedef struct _RedfishAddressPool_V1_1_1_AddressPool_CS {
        RedfishCS_Header     Header;
        RedfishCS_char *odata_context;
        RedfishCS_char *odata_etag;
        RedfishCS_char *odata_id;
        RedfishCS_char *odata_type;
        RedfishAddressPool_V1_1_1_Actions_CS *Actions;
        RedfishCS_char *Description;
        RedfishAddressPool_V1_1_1_Ethernet_CS *Ethernet;
        RedfishAddressPool_V1_1_1_GenZ_CS *GenZ;
        RedfishCS_char *Id;
        RedfishAddressPool_V1_1_1_Links_CS *Links;
        RedfishCS_char *Name;
        RedfishResource_Oem_CS *Oem;
        RedfishResource_Status_CS *Status;
    } RedfishAddressPool_V1_1_1_AddressPool_CS;

|Field |C Structure Data Type|Description |Required Property|Read only Property
| ---  | --- | --- | --- | ---
|**Header**|RedfishCS_Header|Redfish C structure header|---|---
|**odata_context**|RedfishCS_char| String pointer to **@odata.context** property.| No| No
|**odata_etag**|RedfishCS_char| String pointer to **@odata.etag** property.| No| No
|**odata_id**|RedfishCS_char| String pointer to **@odata.id** property.| Yes| No
|**odata_type**|RedfishCS_char| String pointer to **@odata.type** property.| Yes| No
|**Actions**|RedfishAddressPool_V1_1_1_Actions_CS| Structure points to **Actions** property.| No| No
|**Description**|RedfishCS_char| String pointer to **Description** property.| No| Yes
|**Ethernet**|RedfishAddressPool_V1_1_1_Ethernet_CS| Structure points to **Ethernet** property.| No| No
|**GenZ**|RedfishAddressPool_V1_1_1_GenZ_CS| Structure points to **GenZ** property.| No| No
|**Id**|RedfishCS_char| String pointer to **Id** property.| Yes| Yes
|**Links**|RedfishAddressPool_V1_1_1_Links_CS| Structure points to **Links** property.| No| No
|**Name**|RedfishCS_char| String pointer to **Name** property.| Yes| Yes
|**Oem**|RedfishResource_Oem_CS| Structure points to **Oem** property.| No| No
|**Status**|RedfishResource_Status_CS| Structure points to **Status** property.| No| No
## Redfish AddressPool V1_1_1 to C Structure Function
    RedfishCS_status
    Json_AddressPool_V1_1_1_To_CS (RedfishCS_char *JsonRawText, RedfishAddressPool_V1_1_1_AddressPool_CS **ReturnedCS);

## C Structure to Redfish AddressPool V1_1_1 JSON Function
    RedfishCS_status
    CS_To_AddressPool_V1_1_1_JSON (RedfishAddressPool_V1_1_1_AddressPool_CS *CSPtr, RedfishCS_char **JsonText);

## Destory Redfish AddressPool V1_1_1 C Structure Function
    RedfishCS_status
    DestroyAddressPool_V1_1_1_CS (RedfishAddressPool_V1_1_1_AddressPool_CS *CSPtr);

