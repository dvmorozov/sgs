#pragma once

#using <mscorlib.dll>
#using <System.ServiceModel.dll>
#using <System.Runtime.Serialization.dll>
#using <System.dll>
#using <System.Xml.dll>

using namespace System::Security::Permissions;
[assembly:SecurityPermissionAttribute(SecurityAction::RequestMinimum, SkipVerification=false)];
[assembly: System::Runtime::Serialization::ContractNamespaceAttribute(L"http://www.zigbee.org/GWGSchema", ClrNamespace=L"www.zigbee.org.GWGSchema")]
;
interface class gmo;
ref class Version;
ref class NWKMessageResult;
ref class NWKMessageEvent;
ref class RouteDiscoveryInfo;
ref class Address;
ref class EnergyScanResult;
ref class EnergyScanResultScannedChannel;
ref class NetworkDescriptor;
ref class NetworkDescriptorList;
ref class JoinConfiguration;
ref class MACCapability;
ref class NetworkStatusCode;
ref class NetworkConfiguration;
ref class PowerSources;
ref class PowerDescriptor;
ref class Device;
ref class Binding;
ref class Group;
ref class TxOptions;
ref class APSMessage;
ref class UserDescriptor;
ref class DescriptorCapability;
ref class ServerMask;
ref class NodeDescriptor;
ref class StartupAttributeInfo;
ref class SimpleDescriptor;
ref class NodeServices;
ref class NodeServicesActiveEndpoints;
ref class SonNode;
ref class AssociatedDevices;
ref class WSNNode;
ref class InterPANMessageEvent;
ref class APSMessageEvent;
ref class ZCLMessage;
ref class ZDPMessage;
ref class Action;
ref class Filter;
ref class FilterAddressSpecification;
ref class FilterMessageSpecification;
ref class GetVersionRequest;
ref class GetVersionResponse;
ref class CreateCallbackRequest;
ref class CreateCallbackResponse;
ref class GetRequest;
ref class GetResponse;
ref class SetRequest;
ref class SetResponse;
ref class DeleteCallbackRequest;
ref class DeleteCallbackResponse;
ref class ListCallbacksRequest;
ref class ListCallbacksResponse;
ref class UpdateTimeoutRequest;
ref class UpdateTimeoutResponse;
ref class PollCallbackResponseSendZDPResult;
ref class PollCallbackResponseSendZCLResult;
ref class PollCallbackResponseSendAPSResult;
ref class PollCallbackResponseSendInterPANResult;
ref class PollCallbackRequest;
ref class PollCallbackResponse;
ref class StartNodeDiscoveryRequest;
ref class StartNodeDiscoveryResponse;
ref class ReadNodeCacheRequest;
ref class ReadNodeCacheResponse;
ref class StartServiceDiscoveryRequest;
ref class StartServiceDiscoveryResponse;
ref class GetServiceDescriptorRequest;
ref class GetServiceDescriptorResponse;
ref class ReadServiceCacheRequest;
ref class ReadServiceCacheResponse;
ref class StartGatewayDeviceRequest;
ref class StartGatewayDeviceResponse;
ref class ConfigureStartupAttributeSetRequest;
ref class ConfigureStartupAttributeSetResponse;
ref class ReadStartupAttributeSetRequest;
ref class ReadStartupAttributeSetResponse;
ref class PollResultsResponseSendZDPResult;
ref class PollResultsResponseSendZCLResult;
ref class PollResultsResponseSendAPSResult;
ref class PollResultsResponseSendInterPANResult;
ref class PollResultsRequest;
ref class PollResultsResponse;
ref class CreateAliasAddressRequest;
ref class CreateAliasAddressResponse;
ref class DeleteAliasAddressRequest;
ref class DeleteAliasAddressResponse;
ref class ListAddressesRequest;
ref class ListAddressesResponse;
ref class GmoLeaveRequest;
ref class GmoLeaveResponse;
ref class PermitJoinRequest;
ref class PermitJoinResponse;
interface class gmoChannel;
ref class gmoClient;
interface class zdp;
ref class SendZDPCommandRequest;
ref class SendZDPCommandRequestBody;
ref class SendZDPCommandResponse;
ref class SendZDPCommandResponseBody;
interface class zdpChannel;
ref class zdpClient;
interface class zdpEvent;
ref class NotifyZDPEventRequest;
ref class NotifyZDPEventRequestBody;
ref class NotifyZDPEventResponse;
ref class NotifyZDPEventResponseBody;
interface class zdpEventChannel;
ref class zdpEventClient;
interface class zcl;
ref class SendZCLCommandRequest;
ref class SendZCLCommandRequestBody;
ref class SendZCLCommandResponse;
ref class SendZCLCommandResponseBody;
interface class zclChannel;
ref class zclClient;
interface class zclEvent;
ref class NotifyZCLEventRequest;
ref class NotifyZCLEventRequestBody;
ref class NotifyZCLEventResponse;
ref class NotifyZCLEventResponseBody;
interface class zclEventChannel;
ref class zclEventClient;
interface class aps;
ref class ConfigureNodeDescriptorRequest;
ref class ConfigureNodeDescriptorResponse;
ref class ConfigureUserDescriptorRequest;
ref class ConfigureUserDescriptorResponse;
ref class ConfigureEndpointRequest;
ref class ConfigureEndpointResponse;
ref class ClearEndpointRequest;
ref class ClearEndpointResponse;
ref class SendAPSMessageRequest;
ref class SendAPSMessageResponse;
ref class AddGroupRequest;
ref class AddGroupResponse;
ref class RemoveGroupRequest;
ref class RemoveGroupResponse;
ref class RemoveAllGroupsRequest;
ref class RemoveAllGroupsResponse;
ref class GetGroupListRequest;
ref class GetGroupListResponse;
ref class GetBindingListRequest;
ref class GetBindingListResponse;
ref class GetNodeDescriptorRequest;
ref class GetNodeDescriptorResponse;
ref class GetNodePowerDescriptorRequest;
ref class GetNodePowerDescriptorResponse;
ref class GetUserDescriptorRequest;
ref class GetUserDescriptorResponse;
interface class apsChannel;
ref class apsClient;
interface class apsEvent;
ref class NotifyAPSMessageEventRequest;
ref class NotifyAPSMessageEventRequestBody;
ref class NotifyAPSMessageEventResponse;
ref class NotifyAPSMessageEventResponseBody;
ref class NotifySendAPSMessageEventRequest;
ref class NotifySendAPSMessageEventRequestBody;
ref class NotifySendAPSMessageEventResponse;
ref class NotifySendAPSMessageEventResponseBody;
interface class apsEventChannel;
ref class apsEventClient;
interface class nwk;
ref class FormNetworkRequest;
ref class FormNetworkResponse;
ref class StartRouterRequest;
ref class StartRouterResponse;
ref class JoinRequest;
ref class JoinResponse;
ref class LeaveRequest;
ref class LeaveResponse;
ref class DiscoverNetworksRequest;
ref class DiscoverNetworksResponse;
ref class ResetRequest;
ref class ResetResponse;
ref class PerformEnergyScanRequest;
ref class PerformEnergyScanResponse;
ref class PerformRouteDiscoveryRequest;
ref class PerformRouteDiscoveryResponse;
ref class SendNWKCommandRequest;
ref class SendNWKCommandResponse;
interface class nwkChannel;
ref class nwkClient;
interface class nwkEvent;
ref class FormNetworkEventRequest;
ref class FormNetworkEventResponse;
ref class JoinEventRequest;
ref class JoinEventResponse;
ref class DiscoverNetworksEventRequest;
ref class DiscoverNetworksEventResponse;
ref class PerformEnergyScanEventRequest;
ref class PerformEnergyScanEventResponse;
ref class NetworkStatusEventRequest;
ref class NetworkStatusEventResponse;
ref class PerformRouteDiscoveryEventRequest;
ref class PerformRouteDiscoveryEventResponse;
ref class StartRouterEventRequest;
ref class StartRouterEventResponse;
ref class LeaveEventRequest;
ref class LeaveEventResponse;
ref class ResetEventRequest;
ref class ResetEventResponse;
ref class NotifyNWKMessageEventRequest;
ref class NotifyNWKMessageEventResponse;
interface class nwkEventChannel;
ref class nwkEventClient;
interface class gmoEvent;
ref class StartGatewayDeviceEventRequest;
ref class StartGatewayDeviceEventResponse;
ref class NodeDiscoveryEventRequest;
ref class NodeDiscoveryEventResponse;
ref class NodeLeaveEventRequest;
ref class NodeLeaveEventResponse;
ref class ServiceDiscoveryEventRequest;
ref class ServiceDiscoveryEventResponse;
ref class ServiceDiscriptorEventRequest;
ref class ServiceDiscriptorEventResponse;
ref class GmoLeaveEventRequest;
ref class GmoLeaveEventResponse;
ref class PermitJoinEventRequest;
ref class PermitJoinEventResponse;
interface class gmoEventChannel;
ref class gmoEventClient;
interface class interPAN;
ref class SendInterPANMessageRequest;
ref class SendInterPANMessageRequestBody;
ref class SendInterPANMessageResponse;
ref class SendInterPANMessageResponseBody;
interface class interPANChannel;
ref class interPANClient;
interface class interPANEvent;
ref class NotifyInterPANMessageEventRequest;
ref class NotifyInterPANMessageEventRequestBody;
ref class NotifyInterPANMessageEventResponse;
ref class NotifyInterPANMessageEventResponseBody;
interface class interPANEventChannel;
ref class interPANEventClient;
namespace www {
    namespace zigbee {
        namespace org {
            namespace GWGSchema {
    ref class ZDPCommand;
    ref class Address;
    ref class TxOptions;
    ref class ZDPMessage;
    ref class ZCLCommand;
    ref class ZCLMessage;
    ref class NodeDescriptor;
    ref class MACCapability;
    ref class ServerMask;
    ref class DescriptorCapability;
    ref class UserDescriptor;
    ref class NetworkConfiguration;
    ref class NetworkStatusCode;
    ref class JoinConfiguration;
    ref class NetworkDescriptorList;
    ref class NetworkDescriptor;
    ref class InterPANMessage;
    ref class APSMessageEvent;
            }
        }
    }
}
using namespace System;
interface class gmo;
ref class Version;
ref class NWKMessageResult;
ref class NWKMessageEvent;
ref class RouteDiscoveryInfo;
ref class Address;
ref class EnergyScanResult;
ref class EnergyScanResultScannedChannel;
ref class NetworkDescriptor;
ref class NetworkDescriptorList;
ref class JoinConfiguration;
ref class MACCapability;
ref class NetworkStatusCode;
ref class NetworkConfiguration;
ref class PowerSources;
ref class PowerDescriptor;
ref class Device;
ref class Binding;
ref class Group;
ref class TxOptions;
ref class APSMessage;
ref class UserDescriptor;
ref class DescriptorCapability;
ref class ServerMask;
ref class NodeDescriptor;
ref class StartupAttributeInfo;
ref class SimpleDescriptor;
ref class NodeServices;
ref class NodeServicesActiveEndpoints;
ref class SonNode;
ref class AssociatedDevices;
ref class WSNNode;
ref class InterPANMessageEvent;
ref class APSMessageEvent;
ref class ZCLMessage;
ref class ZDPMessage;
ref class Action;
ref class Filter;
ref class FilterAddressSpecification;
ref class FilterMessageSpecification;
ref class GetVersionRequest;
ref class GetVersionResponse;
ref class CreateCallbackRequest;
ref class CreateCallbackResponse;
ref class GetRequest;
ref class GetResponse;
ref class SetRequest;
ref class SetResponse;
ref class DeleteCallbackRequest;
ref class DeleteCallbackResponse;
ref class ListCallbacksRequest;
ref class ListCallbacksResponse;
ref class UpdateTimeoutRequest;
ref class UpdateTimeoutResponse;
ref class PollCallbackResponseSendZDPResult;
ref class PollCallbackResponseSendZCLResult;
ref class PollCallbackResponseSendAPSResult;
ref class PollCallbackResponseSendInterPANResult;
ref class PollCallbackRequest;
ref class PollCallbackResponse;
ref class StartNodeDiscoveryRequest;
ref class StartNodeDiscoveryResponse;
ref class ReadNodeCacheRequest;
ref class ReadNodeCacheResponse;
ref class StartServiceDiscoveryRequest;
ref class StartServiceDiscoveryResponse;
ref class GetServiceDescriptorRequest;
ref class GetServiceDescriptorResponse;
ref class ReadServiceCacheRequest;
ref class ReadServiceCacheResponse;
ref class StartGatewayDeviceRequest;
ref class StartGatewayDeviceResponse;
ref class ConfigureStartupAttributeSetRequest;
ref class ConfigureStartupAttributeSetResponse;
ref class ReadStartupAttributeSetRequest;
ref class ReadStartupAttributeSetResponse;
ref class PollResultsResponseSendZDPResult;
ref class PollResultsResponseSendZCLResult;
ref class PollResultsResponseSendAPSResult;
ref class PollResultsResponseSendInterPANResult;
ref class PollResultsRequest;
ref class PollResultsResponse;
ref class CreateAliasAddressRequest;
ref class CreateAliasAddressResponse;
ref class DeleteAliasAddressRequest;
ref class DeleteAliasAddressResponse;
ref class ListAddressesRequest;
ref class ListAddressesResponse;
ref class GmoLeaveRequest;
ref class GmoLeaveResponse;
ref class PermitJoinRequest;
ref class PermitJoinResponse;
interface class gmoChannel;
ref class gmoClient;
interface class zdp;
ref class SendZDPCommandRequest;
ref class SendZDPCommandRequestBody;
ref class SendZDPCommandResponse;
ref class SendZDPCommandResponseBody;
interface class zdpChannel;
ref class zdpClient;
interface class zdpEvent;
ref class NotifyZDPEventRequest;
ref class NotifyZDPEventRequestBody;
ref class NotifyZDPEventResponse;
ref class NotifyZDPEventResponseBody;
interface class zdpEventChannel;
ref class zdpEventClient;
interface class zcl;
ref class SendZCLCommandRequest;
ref class SendZCLCommandRequestBody;
ref class SendZCLCommandResponse;
ref class SendZCLCommandResponseBody;
interface class zclChannel;
ref class zclClient;
interface class zclEvent;
ref class NotifyZCLEventRequest;
ref class NotifyZCLEventRequestBody;
ref class NotifyZCLEventResponse;
ref class NotifyZCLEventResponseBody;
interface class zclEventChannel;
ref class zclEventClient;
interface class aps;
ref class ConfigureNodeDescriptorRequest;
ref class ConfigureNodeDescriptorResponse;
ref class ConfigureUserDescriptorRequest;
ref class ConfigureUserDescriptorResponse;
ref class ConfigureEndpointRequest;
ref class ConfigureEndpointResponse;
ref class ClearEndpointRequest;
ref class ClearEndpointResponse;
ref class SendAPSMessageRequest;
ref class SendAPSMessageResponse;
ref class AddGroupRequest;
ref class AddGroupResponse;
ref class RemoveGroupRequest;
ref class RemoveGroupResponse;
ref class RemoveAllGroupsRequest;
ref class RemoveAllGroupsResponse;
ref class GetGroupListRequest;
ref class GetGroupListResponse;
ref class GetBindingListRequest;
ref class GetBindingListResponse;
ref class GetNodeDescriptorRequest;
ref class GetNodeDescriptorResponse;
ref class GetNodePowerDescriptorRequest;
ref class GetNodePowerDescriptorResponse;
ref class GetUserDescriptorRequest;
ref class GetUserDescriptorResponse;
interface class apsChannel;
ref class apsClient;
interface class apsEvent;
ref class NotifyAPSMessageEventRequest;
ref class NotifyAPSMessageEventRequestBody;
ref class NotifyAPSMessageEventResponse;
ref class NotifyAPSMessageEventResponseBody;
ref class NotifySendAPSMessageEventRequest;
ref class NotifySendAPSMessageEventRequestBody;
ref class NotifySendAPSMessageEventResponse;
ref class NotifySendAPSMessageEventResponseBody;
interface class apsEventChannel;
ref class apsEventClient;
interface class nwk;
ref class FormNetworkRequest;
ref class FormNetworkResponse;
ref class StartRouterRequest;
ref class StartRouterResponse;
ref class JoinRequest;
ref class JoinResponse;
ref class LeaveRequest;
ref class LeaveResponse;
ref class DiscoverNetworksRequest;
ref class DiscoverNetworksResponse;
ref class ResetRequest;
ref class ResetResponse;
ref class PerformEnergyScanRequest;
ref class PerformEnergyScanResponse;
ref class PerformRouteDiscoveryRequest;
ref class PerformRouteDiscoveryResponse;
ref class SendNWKCommandRequest;
ref class SendNWKCommandResponse;
interface class nwkChannel;
ref class nwkClient;
interface class nwkEvent;
ref class FormNetworkEventRequest;
ref class FormNetworkEventResponse;
ref class JoinEventRequest;
ref class JoinEventResponse;
ref class DiscoverNetworksEventRequest;
ref class DiscoverNetworksEventResponse;
ref class PerformEnergyScanEventRequest;
ref class PerformEnergyScanEventResponse;
ref class NetworkStatusEventRequest;
ref class NetworkStatusEventResponse;
ref class PerformRouteDiscoveryEventRequest;
ref class PerformRouteDiscoveryEventResponse;
ref class StartRouterEventRequest;
ref class StartRouterEventResponse;
ref class LeaveEventRequest;
ref class LeaveEventResponse;
ref class ResetEventRequest;
ref class ResetEventResponse;
ref class NotifyNWKMessageEventRequest;
ref class NotifyNWKMessageEventResponse;
interface class nwkEventChannel;
ref class nwkEventClient;
interface class gmoEvent;
ref class StartGatewayDeviceEventRequest;
ref class StartGatewayDeviceEventResponse;
ref class NodeDiscoveryEventRequest;
ref class NodeDiscoveryEventResponse;
ref class NodeLeaveEventRequest;
ref class NodeLeaveEventResponse;
ref class ServiceDiscoveryEventRequest;
ref class ServiceDiscoveryEventResponse;
ref class ServiceDiscriptorEventRequest;
ref class ServiceDiscriptorEventResponse;
ref class GmoLeaveEventRequest;
ref class GmoLeaveEventResponse;
ref class PermitJoinEventRequest;
ref class PermitJoinEventResponse;
interface class gmoEventChannel;
ref class gmoEventClient;
interface class interPAN;
ref class SendInterPANMessageRequest;
ref class SendInterPANMessageRequestBody;
ref class SendInterPANMessageResponse;
ref class SendInterPANMessageResponseBody;
interface class interPANChannel;
ref class interPANClient;
interface class interPANEvent;
ref class NotifyInterPANMessageEventRequest;
ref class NotifyInterPANMessageEventRequestBody;
ref class NotifyInterPANMessageEventResponse;
ref class NotifyInterPANMessageEventResponseBody;
interface class interPANEventChannel;
ref class interPANEventClient;


/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"svcutil", L"4.0.30319.1"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(Namespace=L"http://www.zigbee.org/GWGSchema")]
public enum class RPCProtocol
{
    
    /// <remarks/>
    GRIP,
    
    /// <remarks/>
    SOAP,
    
    /// <remarks/>
    REST,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"svcutil", L"4.0.30319.1"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true, Namespace=L"http://www.zigbee.org/GWGSchema")]
public enum class PowerDescriptorCurrentPowerMode
{
    
    /// <remarks/>
    Synchronized,
    
    /// <remarks/>
    Periodic,
    
    /// <remarks/>
    Stimulated,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"svcutil", L"4.0.30319.1"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true, Namespace=L"http://www.zigbee.org/GWGSchema")]
public enum class PowerDescriptorCurrentPowerSourceLevel
{
    
    /// <remarks/>
    Critical,
    
    /// <remarks/>
    [System::Xml::Serialization::XmlEnumAttribute(L"33Percent")]
    Item33Percent,
    
    /// <remarks/>
    [System::Xml::Serialization::XmlEnumAttribute(L"66Percent")]
    Item66Percent,
    
    /// <remarks/>
    [System::Xml::Serialization::XmlEnumAttribute(L"100Percent")]
    Item100Percent,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"svcutil", L"4.0.30319.1"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(Namespace=L"http://www.zigbee.org/GWGSchema")]
public enum class LogicalType
{
    
    /// <remarks/>
    Current,
    
    /// <remarks/>
    Coordinator,
    
    /// <remarks/>
    Router,
    
    /// <remarks/>
    EndDevice,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"svcutil", L"4.0.30319.1"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true, Namespace=L"http://www.zigbee.org/GWGSchema")]
public enum class NodeDescriptorFrequencyBand
{
    
    /// <remarks/>
    [System::Xml::Serialization::XmlEnumAttribute(L"868MHz")]
    Item868MHz,
    
    /// <remarks/>
    [System::Xml::Serialization::XmlEnumAttribute(L"900MHz")]
    Item900MHz,
    
    /// <remarks/>
    [System::Xml::Serialization::XmlEnumAttribute(L"2400MHz")]
    Item2400MHz,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"svcutil", L"4.0.30319.1"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(Namespace=L"http://www.zigbee.org/GWGSchema")]
public enum class KeyType
{
    
    /// <remarks/>
    Standard,
    
    /// <remarks/>
    HighSecurity,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"svcutil", L"4.0.30319.1"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(Namespace=L"http://www.zigbee.org/GWGSchema")]
public enum class SecurityStatus
{
    
    /// <remarks/>
    Unsecured,
    
    /// <remarks/>
    SecuredNwkKey,
    
    /// <remarks/>
    SecuredLinkKey,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"svcutil", L"4.0.30319.1"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(Namespace=L"http://www.zigbee.org/GWGSchema")]
public enum class DecodeLevel
{
    
    /// <remarks/>
    DecodeMAC,
    
    /// <remarks/>
    DecodeNWK,
    
    /// <remarks/>
    DecodeInterPAN,
    
    /// <remarks/>
    DecodeAPS,
    
    /// <remarks/>
    DecodeZCL,
    
    /// <remarks/>
    DecodeZDP,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"svcutil", L"4.0.30319.1"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(Namespace=L"http://www.zigbee.org/GWGSchema")]
public enum class Level
{
    
    /// <remarks/>
    MACLevel,
    
    /// <remarks/>
    NWKLevel,
    
    /// <remarks/>
    APSLevel,
    
    /// <remarks/>
    INTRPLevel,
};

[System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ServiceModel::ServiceContractAttribute(Namespace=L"http://www.zigbee.org/zgd/", ConfigurationName=L"gmo")]
public interface class gmo
{
    
    // CODEGEN: Параметр "Status" требует дополнительной информации о схеме, которую невозможно получить в режиме параметров. Указан атрибут "System.Xml.Serialization.XmlElementAttribute".
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/GetVersion", ReplyAction=L"*")]
    [System::ServiceModel::XmlSerializerFormatAttribute]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< Level >::typeid)]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< DecodeLevel >::typeid)]
    [returnvalue: System::ServiceModel::MessageParameterAttribute(Name=L"Status")]
    GetVersionResponse^  GetVersion(GetVersionRequest^  request);
    
    // CODEGEN: Параметр "Status" требует дополнительной информации о схеме, которую невозможно получить в режиме параметров. Указан атрибут "System.Xml.Serialization.XmlElementAttribute".
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/CreateCallback", ReplyAction=L"*")]
    [System::ServiceModel::XmlSerializerFormatAttribute]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< Level >::typeid)]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< DecodeLevel >::typeid)]
    [returnvalue: System::ServiceModel::MessageParameterAttribute(Name=L"Status")]
    CreateCallbackResponse^  CreateCallback(CreateCallbackRequest^  request);
    
    // CODEGEN: Параметр "Status" требует дополнительной информации о схеме, которую невозможно получить в режиме параметров. Указан атрибут "System.Xml.Serialization.XmlElementAttribute".
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/Get", ReplyAction=L"*")]
    [System::ServiceModel::XmlSerializerFormatAttribute]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< Level >::typeid)]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< DecodeLevel >::typeid)]
    [returnvalue: System::ServiceModel::MessageParameterAttribute(Name=L"Status")]
    GetResponse^  Get(GetRequest^  request);
    
    // CODEGEN: Параметр "Status" требует дополнительной информации о схеме, которую невозможно получить в режиме параметров. Указан атрибут "System.Xml.Serialization.XmlElementAttribute".
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/Set", ReplyAction=L"*")]
    [System::ServiceModel::XmlSerializerFormatAttribute]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< Level >::typeid)]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< DecodeLevel >::typeid)]
    [returnvalue: System::ServiceModel::MessageParameterAttribute(Name=L"Status")]
    SetResponse^  Set(SetRequest^  request);
    
    // CODEGEN: Параметр "Status" требует дополнительной информации о схеме, которую невозможно получить в режиме параметров. Указан атрибут "System.Xml.Serialization.XmlElementAttribute".
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/DeleteCallback", ReplyAction=L"*")]
    [System::ServiceModel::XmlSerializerFormatAttribute]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< Level >::typeid)]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< DecodeLevel >::typeid)]
    [returnvalue: System::ServiceModel::MessageParameterAttribute(Name=L"Status")]
    DeleteCallbackResponse^  DeleteCallback(DeleteCallbackRequest^  request);
    
    // CODEGEN: Параметр "Status" требует дополнительной информации о схеме, которую невозможно получить в режиме параметров. Указан атрибут "System.Xml.Serialization.XmlElementAttribute".
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/ListCallbacks", ReplyAction=L"*")]
    [System::ServiceModel::XmlSerializerFormatAttribute]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< Level >::typeid)]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< DecodeLevel >::typeid)]
    [returnvalue: System::ServiceModel::MessageParameterAttribute(Name=L"Status")]
    ListCallbacksResponse^  ListCallbacks(ListCallbacksRequest^  request);
    
    // CODEGEN: Параметр "Status" требует дополнительной информации о схеме, которую невозможно получить в режиме параметров. Указан атрибут "System.Xml.Serialization.XmlElementAttribute".
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/UpdateTimeout", ReplyAction=L"*")]
    [System::ServiceModel::XmlSerializerFormatAttribute]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< Level >::typeid)]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< DecodeLevel >::typeid)]
    [returnvalue: System::ServiceModel::MessageParameterAttribute(Name=L"Status")]
    UpdateTimeoutResponse^  UpdateTimeout(UpdateTimeoutRequest^  request);
    
    // CODEGEN: Параметр "Status" требует дополнительной информации о схеме, которую невозможно получить в режиме параметров. Указан атрибут "System.Xml.Serialization.XmlElementAttribute".
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/PollCallback", ReplyAction=L"*")]
    [System::ServiceModel::XmlSerializerFormatAttribute]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< Level >::typeid)]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< DecodeLevel >::typeid)]
    [returnvalue: System::ServiceModel::MessageParameterAttribute(Name=L"Status")]
    PollCallbackResponse^  PollCallback(PollCallbackRequest^  request);
    
    // CODEGEN: Параметр "Status" требует дополнительной информации о схеме, которую невозможно получить в режиме параметров. Указан атрибут "System.Xml.Serialization.XmlElementAttribute".
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/StartNodeDiscovery", ReplyAction=L"*")]
    [System::ServiceModel::XmlSerializerFormatAttribute]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< Level >::typeid)]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< DecodeLevel >::typeid)]
    [returnvalue: System::ServiceModel::MessageParameterAttribute(Name=L"Status")]
    StartNodeDiscoveryResponse^  StartNodeDiscovery(StartNodeDiscoveryRequest^  request);
    
    // CODEGEN: Параметр "Status" требует дополнительной информации о схеме, которую невозможно получить в режиме параметров. Указан атрибут "System.Xml.Serialization.XmlElementAttribute".
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/ReadNodeCache", ReplyAction=L"*")]
    [System::ServiceModel::XmlSerializerFormatAttribute]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< Level >::typeid)]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< DecodeLevel >::typeid)]
    [returnvalue: System::ServiceModel::MessageParameterAttribute(Name=L"Status")]
    ReadNodeCacheResponse^  ReadNodeCache(ReadNodeCacheRequest^  request);
    
    // CODEGEN: Параметр "Status" требует дополнительной информации о схеме, которую невозможно получить в режиме параметров. Указан атрибут "System.Xml.Serialization.XmlElementAttribute".
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/StartServiceDiscovery", ReplyAction=L"*")]
    [System::ServiceModel::XmlSerializerFormatAttribute]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< Level >::typeid)]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< DecodeLevel >::typeid)]
    [returnvalue: System::ServiceModel::MessageParameterAttribute(Name=L"Status")]
    StartServiceDiscoveryResponse^  StartServiceDiscovery(StartServiceDiscoveryRequest^  request);
    
    // CODEGEN: Параметр "Status" требует дополнительной информации о схеме, которую невозможно получить в режиме параметров. Указан атрибут "System.Xml.Serialization.XmlElementAttribute".
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/GetServiceDescriptor", ReplyAction=L"*")]
    [System::ServiceModel::XmlSerializerFormatAttribute]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< Level >::typeid)]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< DecodeLevel >::typeid)]
    [returnvalue: System::ServiceModel::MessageParameterAttribute(Name=L"Status")]
    GetServiceDescriptorResponse^  GetServiceDescriptor(GetServiceDescriptorRequest^  request);
    
    // CODEGEN: Параметр "Status" требует дополнительной информации о схеме, которую невозможно получить в режиме параметров. Указан атрибут "System.Xml.Serialization.XmlElementAttribute".
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/ReadServiceCache", ReplyAction=L"*")]
    [System::ServiceModel::XmlSerializerFormatAttribute]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< Level >::typeid)]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< DecodeLevel >::typeid)]
    [returnvalue: System::ServiceModel::MessageParameterAttribute(Name=L"Status")]
    ReadServiceCacheResponse^  ReadServiceCache(ReadServiceCacheRequest^  request);
    
    // CODEGEN: Параметр "Status" требует дополнительной информации о схеме, которую невозможно получить в режиме параметров. Указан атрибут "System.Xml.Serialization.XmlElementAttribute".
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/StartGatewayDevice", ReplyAction=L"*")]
    [System::ServiceModel::XmlSerializerFormatAttribute]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< Level >::typeid)]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< DecodeLevel >::typeid)]
    [returnvalue: System::ServiceModel::MessageParameterAttribute(Name=L"Status")]
    StartGatewayDeviceResponse^  StartGatewayDevice(StartGatewayDeviceRequest^  request);
    
    // CODEGEN: Параметр "Status" требует дополнительной информации о схеме, которую невозможно получить в режиме параметров. Указан атрибут "System.Xml.Serialization.XmlElementAttribute".
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/ConfigureStartupAttributeSet", ReplyAction=L"*")]
    [System::ServiceModel::XmlSerializerFormatAttribute]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< Level >::typeid)]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< DecodeLevel >::typeid)]
    [returnvalue: System::ServiceModel::MessageParameterAttribute(Name=L"Status")]
    ConfigureStartupAttributeSetResponse^  ConfigureStartupAttributeSet(ConfigureStartupAttributeSetRequest^  request);
    
    // CODEGEN: Параметр "Status" требует дополнительной информации о схеме, которую невозможно получить в режиме параметров. Указан атрибут "System.Xml.Serialization.XmlElementAttribute".
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/ReadStartupAttributeSet", ReplyAction=L"*")]
    [System::ServiceModel::XmlSerializerFormatAttribute]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< Level >::typeid)]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< DecodeLevel >::typeid)]
    [returnvalue: System::ServiceModel::MessageParameterAttribute(Name=L"Status")]
    ReadStartupAttributeSetResponse^  ReadStartupAttributeSet(ReadStartupAttributeSetRequest^  request);
    
    // CODEGEN: Параметр "Status" требует дополнительной информации о схеме, которую невозможно получить в режиме параметров. Указан атрибут "System.Xml.Serialization.XmlElementAttribute".
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/PollResults", ReplyAction=L"*")]
    [System::ServiceModel::XmlSerializerFormatAttribute]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< Level >::typeid)]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< DecodeLevel >::typeid)]
    [returnvalue: System::ServiceModel::MessageParameterAttribute(Name=L"Status")]
    PollResultsResponse^  PollResults(PollResultsRequest^  request);
    
    // CODEGEN: Параметр "Status" требует дополнительной информации о схеме, которую невозможно получить в режиме параметров. Указан атрибут "System.Xml.Serialization.XmlElementAttribute".
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/CreateAliasAddress", ReplyAction=L"*")]
    [System::ServiceModel::XmlSerializerFormatAttribute]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< Level >::typeid)]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< DecodeLevel >::typeid)]
    [returnvalue: System::ServiceModel::MessageParameterAttribute(Name=L"Status")]
    CreateAliasAddressResponse^  CreateAliasAddress(CreateAliasAddressRequest^  request);
    
    // CODEGEN: Параметр "Status" требует дополнительной информации о схеме, которую невозможно получить в режиме параметров. Указан атрибут "System.Xml.Serialization.XmlElementAttribute".
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/DeleteAliasAddress", ReplyAction=L"*")]
    [System::ServiceModel::XmlSerializerFormatAttribute]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< Level >::typeid)]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< DecodeLevel >::typeid)]
    [returnvalue: System::ServiceModel::MessageParameterAttribute(Name=L"Status")]
    DeleteAliasAddressResponse^  DeleteAliasAddress(DeleteAliasAddressRequest^  request);
    
    // CODEGEN: Параметр "Status" требует дополнительной информации о схеме, которую невозможно получить в режиме параметров. Указан атрибут "System.Xml.Serialization.XmlElementAttribute".
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/ListAddresses", ReplyAction=L"*")]
    [System::ServiceModel::XmlSerializerFormatAttribute]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< Level >::typeid)]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< DecodeLevel >::typeid)]
    [returnvalue: System::ServiceModel::MessageParameterAttribute(Name=L"Status")]
    ListAddressesResponse^  ListAddresses(ListAddressesRequest^  request);
    
    // CODEGEN: Параметр "Status" требует дополнительной информации о схеме, которую невозможно получить в режиме параметров. Указан атрибут "System.Xml.Serialization.XmlElementAttribute".
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/ListAddresses", ReplyAction=L"*")]
    [System::ServiceModel::XmlSerializerFormatAttribute]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< Level >::typeid)]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< DecodeLevel >::typeid)]
    [returnvalue: System::ServiceModel::MessageParameterAttribute(Name=L"Status")]
    GmoLeaveResponse^  GmoLeave(GmoLeaveRequest^  request);
    
    // CODEGEN: Параметр "Status" требует дополнительной информации о схеме, которую невозможно получить в режиме параметров. Указан атрибут "System.Xml.Serialization.XmlElementAttribute".
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/PermitJoin", ReplyAction=L"*")]
    [System::ServiceModel::XmlSerializerFormatAttribute]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< Level >::typeid)]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< DecodeLevel >::typeid)]
    [returnvalue: System::ServiceModel::MessageParameterAttribute(Name=L"Status")]
    PermitJoinResponse^  PermitJoin(PermitJoinRequest^  request);
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"svcutil", L"4.0.30319.1"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(Namespace=L"http://www.zigbee.org/GWGSchema")]
public ref class Version
{
    
    private: System::Byte versionIdentifierField;
    
    private: System::Byte featureSetIdentifierField;
    
    private: cli::array< RPCProtocol >^  rPCProtocolField;
    
    private: System::String^  manufacturerVersionField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=0)]
    property System::Byte VersionIdentifier
    {
        System::Byte get();
        System::Void set(System::Byte value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=1)]
    property System::Byte FeatureSetIdentifier
    {
        System::Byte get();
        System::Void set(System::Byte value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"RPCProtocol", Order=2)]
    property cli::array< RPCProtocol >^  RPCProtocol
    {
        cli::array< RPCProtocol >^  get();
        System::Void set(cli::array< RPCProtocol >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=3)]
    property System::String^  ManufacturerVersion
    {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"svcutil", L"4.0.30319.1"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(Namespace=L"http://www.zigbee.org/GWGSchema")]
public ref class NWKMessageResult
{
    
    private: System::UInt16 nWKStatusField;
    
    private: System::Byte nsduHandleField;
    
    private: System::UInt32 txTimeField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=0)]
    property System::UInt16 NWKStatus
    {
        System::UInt16 get();
        System::Void set(System::UInt16 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=1)]
    property System::Byte NsduHandle
    {
        System::Byte get();
        System::Void set(System::Byte value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=2)]
    property System::UInt32 TxTime
    {
        System::UInt32 get();
        System::Void set(System::UInt32 value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"svcutil", L"4.0.30319.1"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(Namespace=L"http://www.zigbee.org/GWGSchema")]
public ref class NWKMessageEvent
{
    
    private: System::Byte dstAddrModeField;
    
    private: System::UInt16 dstAddrField;
    
    private: System::UInt16 srcAddrField;
    
    private: cli::array< System::Byte >^  nsduField;
    
    private: System::Byte linkQualityField;
    
    private: System::Boolean linkQualityFieldSpecified;
    
    private: System::UInt32 rxTimeField;
    
    private: System::Boolean rxTimeFieldSpecified;
    
    private: System::Boolean securityUseField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=0)]
    property System::Byte DstAddrMode
    {
        System::Byte get();
        System::Void set(System::Byte value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=1)]
    property System::UInt16 DstAddr
    {
        System::UInt16 get();
        System::Void set(System::UInt16 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=2)]
    property System::UInt16 SrcAddr
    {
        System::UInt16 get();
        System::Void set(System::UInt16 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(DataType=L"hexBinary", Order=3)]
    property cli::array< System::Byte >^  Nsdu
    {
        cli::array< System::Byte >^  get();
        System::Void set(cli::array< System::Byte >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=4)]
    property System::Byte LinkQuality
    {
        System::Byte get();
        System::Void set(System::Byte value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean LinkQualitySpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=5)]
    property System::UInt32 RxTime
    {
        System::UInt32 get();
        System::Void set(System::UInt32 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean RxTimeSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=6)]
    property System::Boolean SecurityUse
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"svcutil", L"4.0.30319.1"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(Namespace=L"http://www.zigbee.org/GWGSchema")]
public ref class RouteDiscoveryInfo
{
    
    private: System::Byte dstAddrModeField;
    
    private: System::Boolean dstAddrModeFieldSpecified;
    
    private: Address^  dstAddrField;
    
    private: System::Byte radiusField;
    
    private: System::Boolean noRouteCacheField;
    
    private: System::Boolean noRouteCacheFieldSpecified;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=0)]
    property System::Byte DstAddrMode
    {
        System::Byte get();
        System::Void set(System::Byte value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean DstAddrModeSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=1)]
    property Address^  DstAddr
    {
        Address^  get();
        System::Void set(Address^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=2)]
    property System::Byte Radius
    {
        System::Byte get();
        System::Void set(System::Byte value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=3)]
    property System::Boolean NoRouteCache
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean NoRouteCacheSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"svcutil", L"4.0.30319.1"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(Namespace=L"http://www.zigbee.org/GWGSchema")]
public ref class Address
{
    
    private: System::UInt16 networkAddressField;
    
    private: System::Boolean networkAddressFieldSpecified;
    
    private: System::UInt64 ieeeAddressField;
    
    private: System::Boolean ieeeAddressFieldSpecified;
    
    private: System::String^  aliasAddressField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=0)]
    property System::UInt16 NetworkAddress
    {
        System::UInt16 get();
        System::Void set(System::UInt16 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean NetworkAddressSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=1)]
    property System::UInt64 IeeeAddress
    {
        System::UInt64 get();
        System::Void set(System::UInt64 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean IeeeAddressSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=2)]
    property System::String^  AliasAddress
    {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"svcutil", L"4.0.30319.1"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(Namespace=L"http://www.zigbee.org/GWGSchema")]
public ref class EnergyScanResult
{
    
    private: cli::array< EnergyScanResultScannedChannel^  >^  scannedChannelField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"ScannedChannel", Order=0)]
    property cli::array< EnergyScanResultScannedChannel^  >^  ScannedChannel
    {
        cli::array< EnergyScanResultScannedChannel^  >^  get();
        System::Void set(cli::array< EnergyScanResultScannedChannel^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"svcutil", L"4.0.30319.1"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true, Namespace=L"http://www.zigbee.org/GWGSchema")]
public ref class EnergyScanResultScannedChannel
{
    
    private: System::Byte channelField;
    
    private: System::Byte energyField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=0)]
    property System::Byte Channel
    {
        System::Byte get();
        System::Void set(System::Byte value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=1)]
    property System::Byte Energy
    {
        System::Byte get();
        System::Void set(System::Byte value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"svcutil", L"4.0.30319.1"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(Namespace=L"http://www.zigbee.org/GWGSchema")]
public ref class NetworkDescriptor
{
    
    private: System::UInt64 extendedPanIdField;
    
    private: System::Boolean extendedPanIdFieldSpecified;
    
    private: System::UInt16 logicalChannelField;
    
    private: System::Boolean logicalChannelFieldSpecified;
    
    private: System::Byte stackProfileField;
    
    private: System::Boolean stackProfileFieldSpecified;
    
    private: System::Byte zigBeeVersionField;
    
    private: System::Boolean zigBeeVersionFieldSpecified;
    
    private: System::Byte beaconOrderField;
    
    private: System::Boolean beaconOrderFieldSpecified;
    
    private: System::Byte superFrameOrderField;
    
    private: System::Boolean superFrameOrderFieldSpecified;
    
    private: System::Boolean permitJoiningField;
    
    private: System::Boolean permitJoiningFieldSpecified;
    
    private: System::Boolean routerCapacityField;
    
    private: System::Boolean routerCapacityFieldSpecified;
    
    private: System::Boolean endDeviceCapacityField;
    
    private: System::Boolean endDeviceCapacityFieldSpecified;
    
    private: System::String^  nWKRootURIField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=0)]
    property System::UInt64 ExtendedPanId
    {
        System::UInt64 get();
        System::Void set(System::UInt64 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean ExtendedPanIdSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=1)]
    property System::UInt16 LogicalChannel
    {
        System::UInt16 get();
        System::Void set(System::UInt16 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean LogicalChannelSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=2)]
    property System::Byte StackProfile
    {
        System::Byte get();
        System::Void set(System::Byte value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean StackProfileSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=3)]
    property System::Byte ZigBeeVersion
    {
        System::Byte get();
        System::Void set(System::Byte value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean ZigBeeVersionSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=4)]
    property System::Byte BeaconOrder
    {
        System::Byte get();
        System::Void set(System::Byte value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean BeaconOrderSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=5)]
    property System::Byte SuperFrameOrder
    {
        System::Byte get();
        System::Void set(System::Byte value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean SuperFrameOrderSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=6)]
    property System::Boolean PermitJoining
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean PermitJoiningSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=7)]
    property System::Boolean RouterCapacity
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean RouterCapacitySpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=8)]
    property System::Boolean EndDeviceCapacity
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean EndDeviceCapacitySpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(DataType=L"anyURI", Order=9)]
    property System::String^  NWKRootURI
    {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"svcutil", L"4.0.30319.1"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(Namespace=L"http://www.zigbee.org/GWGSchema")]
public ref class NetworkDescriptorList
{
    
    private: NetworkDescriptor^  networkDescriptorField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=0)]
    property NetworkDescriptor^  NetworkDescriptor
    {
        NetworkDescriptor^  get();
        System::Void set(NetworkDescriptor^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"svcutil", L"4.0.30319.1"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(Namespace=L"http://www.zigbee.org/GWGSchema")]
public ref class JoinConfiguration
{
    
    private: System::UInt64 extendedPanIdField;
    
    private: System::Byte rejoinNetworkField;
    
    private: System::UInt32 scanChannelField;
    
    private: System::Byte scanDurationField;
    
    private: MACCapability^  capabilityInformationField;
    
    private: System::Boolean securityEnableField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=0)]
    property System::UInt64 ExtendedPanId
    {
        System::UInt64 get();
        System::Void set(System::UInt64 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=1)]
    property System::Byte RejoinNetwork
    {
        System::Byte get();
        System::Void set(System::Byte value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=2)]
    property System::UInt32 ScanChannel
    {
        System::UInt32 get();
        System::Void set(System::UInt32 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=3)]
    property System::Byte ScanDuration
    {
        System::Byte get();
        System::Void set(System::Byte value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=4)]
    property MACCapability^  CapabilityInformation
    {
        MACCapability^  get();
        System::Void set(MACCapability^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=5)]
    property System::Boolean SecurityEnable
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"svcutil", L"4.0.30319.1"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(Namespace=L"http://www.zigbee.org/GWGSchema")]
public ref class MACCapability
{
    
    private: System::Boolean alternatePanCoordinatorField;
    
    private: System::Boolean deviceIsFFDField;
    
    private: System::Boolean mainsPoweredField;
    
    private: System::Boolean receiverOnWhenIdleField;
    
    private: System::Boolean securitySupportedField;
    
    private: System::Boolean allocateAddressField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=0)]
    property System::Boolean AlternatePanCoordinator
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=1)]
    property System::Boolean DeviceIsFFD
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=2)]
    property System::Boolean MainsPowered
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=3)]
    property System::Boolean ReceiverOnWhenIdle
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=4)]
    property System::Boolean SecuritySupported
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=5)]
    property System::Boolean AllocateAddress
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"svcutil", L"4.0.30319.1"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(Namespace=L"http://www.zigbee.org/GWGSchema")]
public ref class NetworkStatusCode
{
    
    private: System::UInt32 statusField;
    
    private: System::UInt32 networkStatusCode1Field;
    
    private: System::Boolean networkStatusCode1FieldSpecified;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=0)]
    property System::UInt32 Status
    {
        System::UInt32 get();
        System::Void set(System::UInt32 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"NetworkStatusCode", Order=1)]
    property System::UInt32 NetworkStatusCode1
    {
        System::UInt32 get();
        System::Void set(System::UInt32 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean NetworkStatusCode1Specified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"svcutil", L"4.0.30319.1"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(Namespace=L"http://www.zigbee.org/GWGSchema")]
public ref class NetworkConfiguration
{
    
    private: System::UInt32 scanChannelsField;
    
    private: System::Boolean scanChannelsFieldSpecified;
    
    private: System::Byte scanDurationField;
    
    private: System::Boolean scanDurationFieldSpecified;
    
    private: System::Byte beaconOrderField;
    
    private: System::Byte superFrameOrderField;
    
    private: System::Boolean batteryLifeExtensionField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=0)]
    property System::UInt32 ScanChannels
    {
        System::UInt32 get();
        System::Void set(System::UInt32 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean ScanChannelsSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=1)]
    property System::Byte ScanDuration
    {
        System::Byte get();
        System::Void set(System::Byte value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean ScanDurationSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=2)]
    property System::Byte BeaconOrder
    {
        System::Byte get();
        System::Void set(System::Byte value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=3)]
    property System::Byte SuperFrameOrder
    {
        System::Byte get();
        System::Void set(System::Byte value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=4)]
    property System::Boolean BatteryLifeExtension
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"svcutil", L"4.0.30319.1"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(Namespace=L"http://www.zigbee.org/GWGSchema")]
public ref class PowerSources
{
    
    private: System::Boolean constantMainsField;
    
    private: System::Boolean rechargeableBatteryField;
    
    private: System::Boolean disposableBatteryField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=0)]
    property System::Boolean ConstantMains
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=1)]
    property System::Boolean RechargeableBattery
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=2)]
    property System::Boolean DisposableBattery
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"svcutil", L"4.0.30319.1"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(Namespace=L"http://www.zigbee.org/GWGSchema")]
public ref class PowerDescriptor
{
    
    private: PowerDescriptorCurrentPowerMode currentPowerModeField;
    
    private: System::Boolean currentPowerModeFieldSpecified;
    
    private: PowerSources^  availablePowerSourcesField;
    
    private: PowerSources^  currentPowerSourcesField;
    
    private: PowerDescriptorCurrentPowerSourceLevel currentPowerSourceLevelField;
    
    private: System::Boolean currentPowerSourceLevelFieldSpecified;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=0)]
    property PowerDescriptorCurrentPowerMode CurrentPowerMode
    {
        PowerDescriptorCurrentPowerMode get();
        System::Void set(PowerDescriptorCurrentPowerMode value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean CurrentPowerModeSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=1)]
    property PowerSources^  AvailablePowerSources
    {
        PowerSources^  get();
        System::Void set(PowerSources^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=2)]
    property PowerSources^  CurrentPowerSources
    {
        PowerSources^  get();
        System::Void set(PowerSources^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=3)]
    property PowerDescriptorCurrentPowerSourceLevel CurrentPowerSourceLevel
    {
        PowerDescriptorCurrentPowerSourceLevel get();
        System::Void set(PowerDescriptorCurrentPowerSourceLevel value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean CurrentPowerSourceLevelSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"svcutil", L"4.0.30319.1"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(Namespace=L"http://www.zigbee.org/GWGSchema")]
public ref class Device
{
    
    private: System::UInt64 addressField;
    
    private: System::Byte endpointField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=0)]
    property System::UInt64 Address
    {
        System::UInt64 get();
        System::Void set(System::UInt64 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=1)]
    property System::Byte Endpoint
    {
        System::Byte get();
        System::Void set(System::Byte value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"svcutil", L"4.0.30319.1"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(Namespace=L"http://www.zigbee.org/GWGSchema")]
public ref class Binding
{
    
    private: System::UInt64 sourceIEEEAddressField;
    
    private: System::Byte sourceEndpointField;
    
    private: System::UInt16 clusterIDField;
    
    private: cli::array< System::UInt16 >^  groupDestinationField;
    
    private: cli::array< Device^  >^  deviceDestinationField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=0)]
    property System::UInt64 SourceIEEEAddress
    {
        System::UInt64 get();
        System::Void set(System::UInt64 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=1)]
    property System::Byte SourceEndpoint
    {
        System::Byte get();
        System::Void set(System::Byte value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=2)]
    property System::UInt16 ClusterID
    {
        System::UInt16 get();
        System::Void set(System::UInt16 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"GroupDestination", Order=3)]
    property cli::array< System::UInt16 >^  GroupDestination
    {
        cli::array< System::UInt16 >^  get();
        System::Void set(cli::array< System::UInt16 >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"DeviceDestination", Order=4)]
    property cli::array< Device^  >^  DeviceDestination
    {
        cli::array< Device^  >^  get();
        System::Void set(cli::array< Device^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"svcutil", L"4.0.30319.1"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(Namespace=L"http://www.zigbee.org/GWGSchema")]
public ref class Group
{
    
    private: System::UInt16 groupAddressField;
    
    private: cli::array< System::Byte >^  endpointField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=0)]
    property System::UInt16 GroupAddress
    {
        System::UInt16 get();
        System::Void set(System::UInt16 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"Endpoint", Order=1)]
    property cli::array< System::Byte >^  Endpoint
    {
        cli::array< System::Byte >^  get();
        System::Void set(cli::array< System::Byte >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"svcutil", L"4.0.30319.1"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(Namespace=L"http://www.zigbee.org/GWGSchema")]
public ref class TxOptions
{
    
    private: System::Boolean securityEnabledField;
    
    private: System::Boolean useNetworkKeyField;
    
    private: System::Boolean acknowledgedField;
    
    private: System::Boolean permitFragmentationField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=0)]
    property System::Boolean SecurityEnabled
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=1)]
    property System::Boolean UseNetworkKey
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=2)]
    property System::Boolean Acknowledged
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=3)]
    property System::Boolean PermitFragmentation
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"svcutil", L"4.0.30319.1"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(Namespace=L"http://www.zigbee.org/GWGSchema")]
public ref class APSMessage
{
    
    private: System::UInt32 destinationAddressModeField;
    
    private: System::Boolean destinationAddressModeFieldSpecified;
    
    private: Address^  destinationAddressField;
    
    private: System::Byte destinationEndpointField;
    
    private: System::Byte sourceEndpointField;
    
    private: System::UInt16 profileIDField;
    
    private: System::Boolean profileIDFieldSpecified;
    
    private: System::UInt16 clusterIDField;
    
    private: cli::array< System::Byte >^  dataField;
    
    private: TxOptions^  txOptionsField;
    
    private: System::Byte radiusField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=0)]
    property System::UInt32 DestinationAddressMode
    {
        System::UInt32 get();
        System::Void set(System::UInt32 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean DestinationAddressModeSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=1)]
    property Address^  DestinationAddress
    {
        Address^  get();
        System::Void set(Address^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=2)]
    property System::Byte DestinationEndpoint
    {
        System::Byte get();
        System::Void set(System::Byte value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=3)]
    property System::Byte SourceEndpoint
    {
        System::Byte get();
        System::Void set(System::Byte value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=4)]
    property System::UInt16 ProfileID
    {
        System::UInt16 get();
        System::Void set(System::UInt16 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean ProfileIDSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=5)]
    property System::UInt16 ClusterID
    {
        System::UInt16 get();
        System::Void set(System::UInt16 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(DataType=L"hexBinary", Order=6)]
    property cli::array< System::Byte >^  Data
    {
        cli::array< System::Byte >^  get();
        System::Void set(cli::array< System::Byte >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=7)]
    property TxOptions^  TxOptions
    {
        TxOptions^  get();
        System::Void set(TxOptions^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=8)]
    property System::Byte Radius
    {
        System::Byte get();
        System::Void set(System::Byte value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"svcutil", L"4.0.30319.1"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(Namespace=L"http://www.zigbee.org/GWGSchema")]
public ref class UserDescriptor
{
    
    private: System::String^  descriptionField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=0)]
    property System::String^  Description
    {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"svcutil", L"4.0.30319.1"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(Namespace=L"http://www.zigbee.org/GWGSchema")]
public ref class DescriptorCapability
{
    
    private: System::Boolean extendedActiveEndpointListAvailableField;
    
    private: System::Boolean extendedSimpleDescriptorListAvailableField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=0)]
    property System::Boolean ExtendedActiveEndpointListAvailable
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=1)]
    property System::Boolean ExtendedSimpleDescriptorListAvailable
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"svcutil", L"4.0.30319.1"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(Namespace=L"http://www.zigbee.org/GWGSchema")]
public ref class ServerMask
{
    
    private: System::Boolean primaryTrustCenterField;
    
    private: System::Boolean backupTrustCenterField;
    
    private: System::Boolean primaryBindingTableCacheField;
    
    private: System::Boolean backupBindingTableCacheField;
    
    private: System::Boolean primaryDiscoveryCacheField;
    
    private: System::Boolean backupDiscoveryCacheField;
    
    private: System::Boolean networkManagerField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=0)]
    property System::Boolean PrimaryTrustCenter
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=1)]
    property System::Boolean BackupTrustCenter
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=2)]
    property System::Boolean PrimaryBindingTableCache
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=3)]
    property System::Boolean BackupBindingTableCache
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=4)]
    property System::Boolean PrimaryDiscoveryCache
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=5)]
    property System::Boolean BackupDiscoveryCache
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=6)]
    property System::Boolean NetworkManager
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"svcutil", L"4.0.30319.1"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(Namespace=L"http://www.zigbee.org/GWGSchema")]
public ref class NodeDescriptor
{
    
    private: LogicalType logicalTypeField;
    
    private: System::Boolean logicalTypeFieldSpecified;
    
    private: System::Boolean complexDescriptorAvailableField;
    
    private: System::Boolean complexDescriptorAvailableFieldSpecified;
    
    private: System::Boolean userDescriptorAvailableField;
    
    private: System::Boolean userDescriptorAvailableFieldSpecified;
    
    private: NodeDescriptorFrequencyBand frequencyBandField;
    
    private: System::Boolean frequencyBandFieldSpecified;
    
    private: MACCapability^  mACCapabilityFlagField;
    
    private: System::UInt16 manufacturerCodeField;
    
    private: System::Boolean manufacturerCodeFieldSpecified;
    
    private: System::Byte maximumBufferSizeField;
    
    private: System::Boolean maximumBufferSizeFieldSpecified;
    
    private: System::UInt16 maximumIncomingTransferSizeField;
    
    private: System::Boolean maximumIncomingTransferSizeFieldSpecified;
    
    private: ServerMask^  serverMaskField;
    
    private: System::UInt16 maximumOutgoingTransferSizeField;
    
    private: System::Boolean maximumOutgoingTransferSizeFieldSpecified;
    
    private: DescriptorCapability^  descriptorCapabilityFieldField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=0)]
    property LogicalType LogicalType
    {
        LogicalType get();
        System::Void set(LogicalType value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean LogicalTypeSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=1)]
    property System::Boolean ComplexDescriptorAvailable
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean ComplexDescriptorAvailableSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=2)]
    property System::Boolean UserDescriptorAvailable
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean UserDescriptorAvailableSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=3)]
    property NodeDescriptorFrequencyBand FrequencyBand
    {
        NodeDescriptorFrequencyBand get();
        System::Void set(NodeDescriptorFrequencyBand value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean FrequencyBandSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=4)]
    property MACCapability^  MACCapabilityFlag
    {
        MACCapability^  get();
        System::Void set(MACCapability^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=5)]
    property System::UInt16 ManufacturerCode
    {
        System::UInt16 get();
        System::Void set(System::UInt16 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean ManufacturerCodeSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=6)]
    property System::Byte MaximumBufferSize
    {
        System::Byte get();
        System::Void set(System::Byte value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean MaximumBufferSizeSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=7)]
    property System::UInt16 MaximumIncomingTransferSize
    {
        System::UInt16 get();
        System::Void set(System::UInt16 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean MaximumIncomingTransferSizeSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=8)]
    property ServerMask^  ServerMask
    {
        ServerMask^  get();
        System::Void set(ServerMask^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=9)]
    property System::UInt16 MaximumOutgoingTransferSize
    {
        System::UInt16 get();
        System::Void set(System::UInt16 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean MaximumOutgoingTransferSizeSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=10)]
    property DescriptorCapability^  DescriptorCapabilityField
    {
        DescriptorCapability^  get();
        System::Void set(DescriptorCapability^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"svcutil", L"4.0.30319.1"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(Namespace=L"http://www.zigbee.org/GWGSchema")]
public ref class StartupAttributeInfo
{
    
    private: System::Byte startupAttributeSetIndexField;
    
    private: LogicalType deviceTypeField;
    
    private: System::Boolean deviceTypeFieldSpecified;
    
    private: System::Byte protocolVersionField;
    
    private: System::Boolean protocolVersionFieldSpecified;
    
    private: System::Byte stackProfileField;
    
    private: System::Boolean stackProfileFieldSpecified;
    
    private: System::UInt32 channelMaskField;
    
    private: System::Boolean channelMaskFieldSpecified;
    
    private: System::UInt64 extendedPANIdField;
    
    private: System::Boolean extendedPANIdFieldSpecified;
    
    private: System::UInt16 pANIdField;
    
    private: System::Boolean pANIdFieldSpecified;
    
    private: System::UInt16 shortAddressField;
    
    private: System::Boolean shortAddressFieldSpecified;
    
    private: System::UInt64 trustCenterAddressField;
    
    private: System::Boolean trustCenterAddressFieldSpecified;
    
    private: cli::array< System::Byte >^  trustCenterMasterKeyField;
    
    private: cli::array< System::Byte >^  networkKeyField;
    
    private: System::Boolean useInsecureJoinField;
    
    private: System::Boolean useInsecureJoinFieldSpecified;
    
    private: cli::array< System::Byte >^  preconfiguredLinkKeyField;
    
    private: System::Byte networkKeySeqNumField;
    
    private: System::Boolean networkKeySeqNumFieldSpecified;
    
    private: KeyType networkKeyTypeField;
    
    private: System::Boolean networkKeyTypeFieldSpecified;
    
    private: System::UInt16 networkManagerAddressField;
    
    private: System::Boolean networkManagerAddressFieldSpecified;
    
    private: System::Byte startupControlField;
    
    private: System::Boolean startupControlFieldSpecified;
    
    private: System::Byte scanAttemptsField;
    
    private: System::Boolean scanAttemptsFieldSpecified;
    
    private: System::UInt16 timeBetweenScansField;
    
    private: System::Boolean timeBetweenScansFieldSpecified;
    
    private: System::UInt16 rejoinIntervalField;
    
    private: System::Boolean rejoinIntervalFieldSpecified;
    
    private: System::UInt16 maxRejoinIntervalField;
    
    private: System::Boolean maxRejoinIntervalFieldSpecified;
    
    private: System::UInt16 indirectPollRateField;
    
    private: System::Boolean indirectPollRateFieldSpecified;
    
    private: System::Byte parentRetryThresholdField;
    
    private: System::Boolean parentRetryThresholdFieldSpecified;
    
    private: System::Boolean concentratorFlagField;
    
    private: System::Boolean concentratorFlagFieldSpecified;
    
    private: System::Byte concentratorRadiusField;
    
    private: System::Boolean concentratorRadiusFieldSpecified;
    
    private: System::Byte concentratorDiscoveryTimeField;
    
    private: System::Boolean concentratorDiscoveryTimeFieldSpecified;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=0)]
    property System::Byte StartupAttributeSetIndex
    {
        System::Byte get();
        System::Void set(System::Byte value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=1)]
    property LogicalType DeviceType
    {
        LogicalType get();
        System::Void set(LogicalType value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean DeviceTypeSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=2)]
    property System::Byte ProtocolVersion
    {
        System::Byte get();
        System::Void set(System::Byte value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean ProtocolVersionSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=3)]
    property System::Byte StackProfile
    {
        System::Byte get();
        System::Void set(System::Byte value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean StackProfileSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=4)]
    property System::UInt32 ChannelMask
    {
        System::UInt32 get();
        System::Void set(System::UInt32 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean ChannelMaskSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=5)]
    property System::UInt64 ExtendedPANId
    {
        System::UInt64 get();
        System::Void set(System::UInt64 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean ExtendedPANIdSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=6)]
    property System::UInt16 PANId
    {
        System::UInt16 get();
        System::Void set(System::UInt16 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean PANIdSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=7)]
    property System::UInt16 ShortAddress
    {
        System::UInt16 get();
        System::Void set(System::UInt16 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean ShortAddressSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=8)]
    property System::UInt64 TrustCenterAddress
    {
        System::UInt64 get();
        System::Void set(System::UInt64 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean TrustCenterAddressSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(DataType=L"hexBinary", Order=9)]
    property cli::array< System::Byte >^  TrustCenterMasterKey
    {
        cli::array< System::Byte >^  get();
        System::Void set(cli::array< System::Byte >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(DataType=L"hexBinary", Order=10)]
    property cli::array< System::Byte >^  NetworkKey
    {
        cli::array< System::Byte >^  get();
        System::Void set(cli::array< System::Byte >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=11)]
    property System::Boolean UseInsecureJoin
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean UseInsecureJoinSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(DataType=L"hexBinary", Order=12)]
    property cli::array< System::Byte >^  PreconfiguredLinkKey
    {
        cli::array< System::Byte >^  get();
        System::Void set(cli::array< System::Byte >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=13)]
    property System::Byte NetworkKeySeqNum
    {
        System::Byte get();
        System::Void set(System::Byte value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean NetworkKeySeqNumSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=14)]
    property KeyType NetworkKeyType
    {
        KeyType get();
        System::Void set(KeyType value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean NetworkKeyTypeSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=15)]
    property System::UInt16 NetworkManagerAddress
    {
        System::UInt16 get();
        System::Void set(System::UInt16 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean NetworkManagerAddressSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=16)]
    property System::Byte StartupControl
    {
        System::Byte get();
        System::Void set(System::Byte value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean StartupControlSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=17)]
    property System::Byte ScanAttempts
    {
        System::Byte get();
        System::Void set(System::Byte value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean ScanAttemptsSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=18)]
    property System::UInt16 TimeBetweenScans
    {
        System::UInt16 get();
        System::Void set(System::UInt16 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean TimeBetweenScansSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=19)]
    property System::UInt16 RejoinInterval
    {
        System::UInt16 get();
        System::Void set(System::UInt16 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean RejoinIntervalSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=20)]
    property System::UInt16 maxRejoinInterval
    {
        System::UInt16 get();
        System::Void set(System::UInt16 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean maxRejoinIntervalSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=21)]
    property System::UInt16 IndirectPollRate
    {
        System::UInt16 get();
        System::Void set(System::UInt16 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean IndirectPollRateSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=22)]
    property System::Byte ParentRetryThreshold
    {
        System::Byte get();
        System::Void set(System::Byte value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean ParentRetryThresholdSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=23)]
    property System::Boolean ConcentratorFlag
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean ConcentratorFlagSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=24)]
    property System::Byte ConcentratorRadius
    {
        System::Byte get();
        System::Void set(System::Byte value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean ConcentratorRadiusSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=25)]
    property System::Byte ConcentratorDiscoveryTime
    {
        System::Byte get();
        System::Void set(System::Byte value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean ConcentratorDiscoveryTimeSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"svcutil", L"4.0.30319.1"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(Namespace=L"http://www.zigbee.org/GWGSchema")]
public ref class SimpleDescriptor
{
    
    private: System::Byte endPointField;
    
    private: System::Boolean endPointFieldSpecified;
    
    private: System::UInt16 applicationProfileIdentifierField;
    
    private: System::Boolean applicationProfileIdentifierFieldSpecified;
    
    private: System::UInt16 applicationDeviceIdentifierField;
    
    private: System::Boolean applicationDeviceIdentifierFieldSpecified;
    
    private: System::Byte applicationDeviceVersionField;
    
    private: System::Boolean applicationDeviceVersionFieldSpecified;
    
    private: cli::array< System::UInt16 >^  applicationInputClusterField;
    
    private: cli::array< System::UInt16 >^  applicationOutputClusterField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=0)]
    property System::Byte EndPoint
    {
        System::Byte get();
        System::Void set(System::Byte value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean EndPointSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=1)]
    property System::UInt16 ApplicationProfileIdentifier
    {
        System::UInt16 get();
        System::Void set(System::UInt16 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean ApplicationProfileIdentifierSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=2)]
    property System::UInt16 ApplicationDeviceIdentifier
    {
        System::UInt16 get();
        System::Void set(System::UInt16 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean ApplicationDeviceIdentifierSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=3)]
    property System::Byte ApplicationDeviceVersion
    {
        System::Byte get();
        System::Void set(System::Byte value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean ApplicationDeviceVersionSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"ApplicationInputCluster", Order=4)]
    property cli::array< System::UInt16 >^  ApplicationInputCluster
    {
        cli::array< System::UInt16 >^  get();
        System::Void set(cli::array< System::UInt16 >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"ApplicationOutputCluster", Order=5)]
    property cli::array< System::UInt16 >^  ApplicationOutputCluster
    {
        cli::array< System::UInt16 >^  get();
        System::Void set(cli::array< System::UInt16 >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"svcutil", L"4.0.30319.1"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(Namespace=L"http://www.zigbee.org/GWGSchema")]
public ref class NodeServices
{
    
    private: Address^  addressField;
    
    private: cli::array< NodeServicesActiveEndpoints^  >^  activeEndpointsField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=0)]
    property Address^  Address
    {
        Address^  get();
        System::Void set(Address^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"ActiveEndpoints", Order=1)]
    property cli::array< NodeServicesActiveEndpoints^  >^  ActiveEndpoints
    {
        cli::array< NodeServicesActiveEndpoints^  >^  get();
        System::Void set(cli::array< NodeServicesActiveEndpoints^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"svcutil", L"4.0.30319.1"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true, Namespace=L"http://www.zigbee.org/GWGSchema")]
public ref class NodeServicesActiveEndpoints
{
    
    private: System::Byte endPointField;
    
    private: SimpleDescriptor^  simpleDescriptorField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=0)]
    property System::Byte EndPoint
    {
        System::Byte get();
        System::Void set(System::Byte value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=1)]
    property SimpleDescriptor^  SimpleDescriptor
    {
        SimpleDescriptor^  get();
        System::Void set(SimpleDescriptor^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"svcutil", L"4.0.30319.1"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(Namespace=L"http://www.zigbee.org/GWGSchema")]
public ref class SonNode
{
    
    private: System::UInt16 shortAddrField;
    
    private: System::Boolean shortAddrFieldSpecified;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::UInt16 ShortAddr
    {
        System::UInt16 get();
        System::Void set(System::UInt16 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean ShortAddrSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"svcutil", L"4.0.30319.1"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(Namespace=L"http://www.zigbee.org/GWGSchema")]
public ref class AssociatedDevices
{
    
    private: cli::array< SonNode^  >^  sonNodeField;
    
    private: System::UInt16 totalNumberField;
    
    private: System::Boolean totalNumberFieldSpecified;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"SonNode", Order=0)]
    property cli::array< SonNode^  >^  SonNode
    {
        cli::array< SonNode^  >^  get();
        System::Void set(cli::array< SonNode^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::UInt16 TotalNumber
    {
        System::UInt16 get();
        System::Void set(System::UInt16 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean TotalNumberSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"svcutil", L"4.0.30319.1"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(Namespace=L"http://www.zigbee.org/GWGSchema")]
public ref class WSNNode
{
    
    private: Address^  addressField;
    
    private: Address^  parentAddressField;
    
    private: System::UInt32 startIndexField;
    
    private: cli::array< AssociatedDevices^  >^  associatedDevicesField;
    
    private: MACCapability^  capabilityInformationField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=0)]
    property Address^  Address
    {
        Address^  get();
        System::Void set(Address^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=1)]
    property Address^  ParentAddress
    {
        Address^  get();
        System::Void set(Address^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=2)]
    property System::UInt32 StartIndex
    {
        System::UInt32 get();
        System::Void set(System::UInt32 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"AssociatedDevices", Order=3)]
    property cli::array< AssociatedDevices^  >^  AssociatedDevices
    {
        cli::array< AssociatedDevices^  >^  get();
        System::Void set(cli::array< AssociatedDevices^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=4)]
    property MACCapability^  CapabilityInformation
    {
        MACCapability^  get();
        System::Void set(MACCapability^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"svcutil", L"4.0.30319.1"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(Namespace=L"http://www.zigbee.org/GWGSchema")]
public ref class InterPANMessageEvent
{
    
    private: System::UInt32 callbackIdentifierField;
    
    private: System::Boolean callbackIdentifierFieldSpecified;
    
    private: System::UInt32 srcAddressModeField;
    
    private: Address^  srcAddressField;
    
    private: System::UInt32 dstAddressModeField;
    
    private: Address^  dstAddressField;
    
    private: System::UInt16 srcPANIDField;
    
    private: System::UInt16 dstPANIDField;
    
    private: System::UInt16 profileIDField;
    
    private: System::Boolean profileIDFieldSpecified;
    
    private: System::UInt16 clusterIDField;
    
    private: System::UInt32 aSDULengthField;
    
    private: cli::array< System::Byte >^  aSDUField;
    
    private: System::Byte linkQualityField;
    
    private: System::Boolean linkQualityFieldSpecified;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=0)]
    property System::UInt32 CallbackIdentifier
    {
        System::UInt32 get();
        System::Void set(System::UInt32 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean CallbackIdentifierSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=1)]
    property System::UInt32 SrcAddressMode
    {
        System::UInt32 get();
        System::Void set(System::UInt32 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=2)]
    property Address^  SrcAddress
    {
        Address^  get();
        System::Void set(Address^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=3)]
    property System::UInt32 DstAddressMode
    {
        System::UInt32 get();
        System::Void set(System::UInt32 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=4)]
    property Address^  DstAddress
    {
        Address^  get();
        System::Void set(Address^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=5)]
    property System::UInt16 SrcPANID
    {
        System::UInt16 get();
        System::Void set(System::UInt16 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=6)]
    property System::UInt16 DstPANID
    {
        System::UInt16 get();
        System::Void set(System::UInt16 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=7)]
    property System::UInt16 ProfileID
    {
        System::UInt16 get();
        System::Void set(System::UInt16 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean ProfileIDSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=8)]
    property System::UInt16 ClusterID
    {
        System::UInt16 get();
        System::Void set(System::UInt16 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=9)]
    property System::UInt32 ASDULength
    {
        System::UInt32 get();
        System::Void set(System::UInt32 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(DataType=L"hexBinary", Order=10)]
    property cli::array< System::Byte >^  ASDU
    {
        cli::array< System::Byte >^  get();
        System::Void set(cli::array< System::Byte >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=11)]
    property System::Byte LinkQuality
    {
        System::Byte get();
        System::Void set(System::Byte value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean LinkQualitySpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"svcutil", L"4.0.30319.1"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(Namespace=L"http://www.zigbee.org/GWGSchema")]
public ref class APSMessageEvent
{
    
    private: System::UInt32 destinationAddressModeField;
    
    private: System::Boolean destinationAddressModeFieldSpecified;
    
    private: Address^  destinationAddressField;
    
    private: System::Byte destinationEndpointField;
    
    private: Address^  sourceAddressField;
    
    private: System::UInt32 sourceAddressModeField;
    
    private: System::Boolean sourceAddressModeFieldSpecified;
    
    private: System::Byte sourceEndpointField;
    
    private: System::UInt16 profileIDField;
    
    private: System::Boolean profileIDFieldSpecified;
    
    private: System::UInt16 clusterIDField;
    
    private: cli::array< System::Byte >^  dataField;
    
    private: System::UInt16 aPSStatusField;
    
    private: SecurityStatus securityStatusField;
    
    private: System::Boolean securityStatusFieldSpecified;
    
    private: System::Byte linkQualityField;
    
    private: System::Boolean linkQualityFieldSpecified;
    
    private: System::UInt32 rxTimeField;
    
    private: System::Boolean rxTimeFieldSpecified;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=0)]
    property System::UInt32 DestinationAddressMode
    {
        System::UInt32 get();
        System::Void set(System::UInt32 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean DestinationAddressModeSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=1)]
    property Address^  DestinationAddress
    {
        Address^  get();
        System::Void set(Address^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=2)]
    property System::Byte DestinationEndpoint
    {
        System::Byte get();
        System::Void set(System::Byte value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=3)]
    property Address^  SourceAddress
    {
        Address^  get();
        System::Void set(Address^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=4)]
    property System::UInt32 SourceAddressMode
    {
        System::UInt32 get();
        System::Void set(System::UInt32 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean SourceAddressModeSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=5)]
    property System::Byte SourceEndpoint
    {
        System::Byte get();
        System::Void set(System::Byte value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=6)]
    property System::UInt16 ProfileID
    {
        System::UInt16 get();
        System::Void set(System::UInt16 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean ProfileIDSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=7)]
    property System::UInt16 ClusterID
    {
        System::UInt16 get();
        System::Void set(System::UInt16 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(DataType=L"hexBinary", Order=8)]
    property cli::array< System::Byte >^  Data
    {
        cli::array< System::Byte >^  get();
        System::Void set(cli::array< System::Byte >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=9)]
    property System::UInt16 APSStatus
    {
        System::UInt16 get();
        System::Void set(System::UInt16 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=10)]
    property SecurityStatus SecurityStatus
    {
        SecurityStatus get();
        System::Void set(SecurityStatus value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean SecurityStatusSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=11)]
    property System::Byte LinkQuality
    {
        System::Byte get();
        System::Void set(System::Byte value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean LinkQualitySpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=12)]
    property System::UInt32 RxTime
    {
        System::UInt32 get();
        System::Void set(System::UInt32 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean RxTimeSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"svcutil", L"4.0.30319.1"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(Namespace=L"http://www.zigbee.org/GWGSchema")]
public ref class ZCLMessage
{
    
    private: System::UInt32 rxTimeField;
    
    private: System::Byte destinationEndpointField;
    
    private: Address^  sourceAddressField;
    
    private: System::Byte sourceEndpointField;
    
    private: System::Boolean sourceEndpointFieldSpecified;
    
    private: System::UInt16 profileIDField;
    
    private: System::Boolean profileIDFieldSpecified;
    
    private: System::UInt16 clusterIDField;
    
    private: cli::array< System::Byte >^  zCLPayloadField;
    
    private: System::UInt32 aPSStatusField;
    
    private: System::UInt32 sourceAddressModeField;
    
    private: cli::array< System::Byte >^  zCLHeaderField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=0)]
    property System::UInt32 RxTime
    {
        System::UInt32 get();
        System::Void set(System::UInt32 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=1)]
    property System::Byte DestinationEndpoint
    {
        System::Byte get();
        System::Void set(System::Byte value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=2)]
    property Address^  SourceAddress
    {
        Address^  get();
        System::Void set(Address^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=3)]
    property System::Byte SourceEndpoint
    {
        System::Byte get();
        System::Void set(System::Byte value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean SourceEndpointSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=4)]
    property System::UInt16 ProfileID
    {
        System::UInt16 get();
        System::Void set(System::UInt16 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean ProfileIDSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=5)]
    property System::UInt16 ClusterID
    {
        System::UInt16 get();
        System::Void set(System::UInt16 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(DataType=L"hexBinary", Order=6)]
    property cli::array< System::Byte >^  ZCLPayload
    {
        cli::array< System::Byte >^  get();
        System::Void set(cli::array< System::Byte >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=7)]
    property System::UInt32 APSStatus
    {
        System::UInt32 get();
        System::Void set(System::UInt32 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=8)]
    property System::UInt32 SourceAddressMode
    {
        System::UInt32 get();
        System::Void set(System::UInt32 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(DataType=L"hexBinary", Order=9)]
    property cli::array< System::Byte >^  ZCLHeader
    {
        cli::array< System::Byte >^  get();
        System::Void set(cli::array< System::Byte >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"svcutil", L"4.0.30319.1"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(Namespace=L"http://www.zigbee.org/GWGSchema")]
public ref class ZDPMessage
{
    
    private: Address^  sourceAddressField;
    
    private: System::UInt32 sourceAddressModeField;
    
    private: SecurityStatus securityStatusField;
    
    private: System::Boolean securityStatusFieldSpecified;
    
    private: System::Byte linkQualityField;
    
    private: System::Boolean linkQualityFieldSpecified;
    
    private: System::UInt32 rxTimeField;
    
    private: System::Boolean rxTimeFieldSpecified;
    
    private: System::UInt16 clusterIDField;
    
    private: System::Boolean clusterIDFieldSpecified;
    
    private: cli::array< System::Byte >^  commandField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=0)]
    property Address^  SourceAddress
    {
        Address^  get();
        System::Void set(Address^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=1)]
    property System::UInt32 SourceAddressMode
    {
        System::UInt32 get();
        System::Void set(System::UInt32 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=2)]
    property SecurityStatus SecurityStatus
    {
        SecurityStatus get();
        System::Void set(SecurityStatus value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean SecurityStatusSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=3)]
    property System::Byte LinkQuality
    {
        System::Byte get();
        System::Void set(System::Byte value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean LinkQualitySpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=4)]
    property System::UInt32 RxTime
    {
        System::UInt32 get();
        System::Void set(System::UInt32 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean RxTimeSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=5)]
    property System::UInt16 ClusterID
    {
        System::UInt16 get();
        System::Void set(System::UInt16 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean ClusterIDSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(DataType=L"hexBinary", Order=6)]
    property cli::array< System::Byte >^  Command
    {
        cli::array< System::Byte >^  get();
        System::Void set(cli::array< System::Byte >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"svcutil", L"4.0.30319.1"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(Namespace=L"http://www.zigbee.org/GWGSchema")]
public ref class Action
{
    
    private: cli::array< DecodeLevel >^  decodeSpecificationField;
    
    private: System::String^  forwardingSpecificationField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlArrayAttribute(Order=0)]
    property cli::array< DecodeLevel >^  DecodeSpecification
    {
        cli::array< DecodeLevel >^  get();
        System::Void set(cli::array< DecodeLevel >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=1)]
    property System::String^  ForwardingSpecification
    {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"svcutil", L"4.0.30319.1"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(Namespace=L"http://www.zigbee.org/GWGSchema")]
public ref class Filter
{
    
    private: cli::array< Level >^  levelSpecificationField;
    
    private: cli::array< FilterAddressSpecification^  >^  addressSpecificationField;
    
    private: cli::array< FilterMessageSpecification^  >^  messageSpecificationField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlArrayAttribute(Order=0)]
    property cli::array< Level >^  LevelSpecification
    {
        cli::array< Level >^  get();
        System::Void set(cli::array< Level >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"AddressSpecification", Order=1)]
    property cli::array< FilterAddressSpecification^  >^  AddressSpecification
    {
        cli::array< FilterAddressSpecification^  >^  get();
        System::Void set(cli::array< FilterAddressSpecification^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"MessageSpecification", Order=2)]
    property cli::array< FilterMessageSpecification^  >^  MessageSpecification
    {
        cli::array< FilterMessageSpecification^  >^  get();
        System::Void set(cli::array< FilterMessageSpecification^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"svcutil", L"4.0.30319.1"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true, Namespace=L"http://www.zigbee.org/GWGSchema")]
public ref class FilterAddressSpecification
{
    
    private: Address^  nWKSourceAddressField;
    
    private: System::Byte aPSSourceEndpointField;
    
    private: System::Boolean aPSSourceEndpointFieldSpecified;
    
    private: System::Byte aPSDestinationEndpointField;
    
    private: System::Boolean aPSDestinationEndpointFieldSpecified;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=0)]
    property Address^  NWKSourceAddress
    {
        Address^  get();
        System::Void set(Address^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=1)]
    property System::Byte APSSourceEndpoint
    {
        System::Byte get();
        System::Void set(System::Byte value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean APSSourceEndpointSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=2)]
    property System::Byte APSDestinationEndpoint
    {
        System::Byte get();
        System::Void set(System::Byte value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean APSDestinationEndpointSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"svcutil", L"4.0.30319.1"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true, Namespace=L"http://www.zigbee.org/GWGSchema")]
public ref class FilterMessageSpecification
{
    
    private: System::UInt16 aPSClusterIdentifierField;
    
    private: System::Boolean aPSClusterIdentifierFieldSpecified;
    
    private: System::String^  aPSClusterGroupField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=0)]
    property System::UInt16 APSClusterIdentifier
    {
        System::UInt16 get();
        System::Void set(System::UInt16 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean APSClusterIdentifierSpecified
    {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Order=1)]
    property System::String^  APSClusterGroup
    {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"GetVersion", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class GetVersionRequest
{
    
    public: GetVersionRequest();};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"GetVersionResponse", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class GetVersionResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    Version^  Version;
    
    public: GetVersionResponse();
    public: GetVersionResponse(System::Byte Status, Version^  Version);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"CreateCallback", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class CreateCallbackRequest
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    Filter^  Filter;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    Action^  Action;
    
    public: CreateCallbackRequest();
    public: CreateCallbackRequest(Filter^  Filter, Action^  Action);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"CreateCallbackResponse", WrapperNamespace=L"http://www.zigbee.org/zgd/", 
IsWrapped=true)]
public ref class CreateCallbackResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::UInt32 CallbackIdentifier;
    
    public: CreateCallbackResponse();
    public: CreateCallbackResponse(System::Byte Status, System::UInt32 CallbackIdentifier);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"Get", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class GetRequest
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::String^  attrId;
    
    public: GetRequest();
    public: GetRequest(System::String^  attrId);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"GetResponse", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class GetResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified, DataType=L"hexBinary")]
    cli::array< System::Byte >^  __identifier(value);
    
    public: GetResponse();
    public: GetResponse(System::Byte Status, cli::array< System::Byte >^  __identifier(value));};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"Set", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class SetRequest
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::String^  attrId;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified, DataType=L"hexBinary")]
    cli::array< System::Byte >^  __identifier(value);
    
    public: SetRequest();
    public: SetRequest(System::String^  attrId, cli::array< System::Byte >^  __identifier(value));};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"SetResponse", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class SetResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: SetResponse();
    public: SetResponse(System::Byte Status);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"DeleteCallback", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class DeleteCallbackRequest
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::UInt32 CallbackIdentifier;
    
    public: DeleteCallbackRequest();
    public: DeleteCallbackRequest(System::UInt32 CallbackIdentifier);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"DeleteCallbackResponse", WrapperNamespace=L"http://www.zigbee.org/zgd/", 
IsWrapped=true)]
public ref class DeleteCallbackResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: DeleteCallbackResponse();
    public: DeleteCallbackResponse(System::Byte Status);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"ListCallbacks", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class ListCallbacksRequest
{
    
    public: ListCallbacksRequest();};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"ListCallbacksResponse", WrapperNamespace=L"http://www.zigbee.org/zgd/", 
IsWrapped=true)]
public ref class ListCallbacksResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlArrayAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    [System::Xml::Serialization::XmlArrayItemAttribute(L"CallbackIdentifier", Namespace=L"http://www.zigbee.org/GWGSchema", IsNullable=false)]
    cli::array< System::UInt32 >^  CallbackIdentiferList;
    
    public: ListCallbacksResponse();
    public: ListCallbacksResponse(System::Byte Status, cli::array< System::UInt32 >^  CallbackIdentiferList);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"UpdateTimeout", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class UpdateTimeoutRequest
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified, DataType=L"hexBinary")]
    cli::array< System::Byte >^  RequestIdentifier;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::UInt32 Timeout;
    
    public: UpdateTimeoutRequest();
    public: UpdateTimeoutRequest(cli::array< System::Byte >^  RequestIdentifier, System::UInt32 Timeout);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"UpdateTimeoutResponse", WrapperNamespace=L"http://www.zigbee.org/zgd/", 
IsWrapped=true)]
public ref class UpdateTimeoutResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: UpdateTimeoutResponse();
    public: UpdateTimeoutResponse(System::Byte Status);};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"svcutil", L"4.0.30319.1"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true, Namespace=L"http://www.zigbee.org/zgd/")]
public ref class PollCallbackResponseSendZDPResult
{
    
    private: ZDPMessage^  zDPMessageField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified, Order=0)]
    property ZDPMessage^  ZDPMessage
    {
        ZDPMessage^  get();
        System::Void set(ZDPMessage^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"svcutil", L"4.0.30319.1"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true, Namespace=L"http://www.zigbee.org/zgd/")]
public ref class PollCallbackResponseSendZCLResult
{
    
    private: ZCLMessage^  zCLMessageField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified, Order=0)]
    property ZCLMessage^  ZCLMessage
    {
        ZCLMessage^  get();
        System::Void set(ZCLMessage^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"svcutil", L"4.0.30319.1"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true, Namespace=L"http://www.zigbee.org/zgd/")]
public ref class PollCallbackResponseSendAPSResult
{
    
    private: APSMessageEvent^  aPSMessageField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified, Order=0)]
    property APSMessageEvent^  APSMessage
    {
        APSMessageEvent^  get();
        System::Void set(APSMessageEvent^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"svcutil", L"4.0.30319.1"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true, Namespace=L"http://www.zigbee.org/zgd/")]
public ref class PollCallbackResponseSendInterPANResult
{
    
    private: InterPANMessageEvent^  interPANMessageField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified, Order=0)]
    property InterPANMessageEvent^  InterPANMessage
    {
        InterPANMessageEvent^  get();
        System::Void set(InterPANMessageEvent^  value);
    }
};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"PollCallback", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class PollCallbackRequest
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::UInt32 CallbackIdentifier;
    
    public: PollCallbackRequest();
    public: PollCallbackRequest(System::UInt32 CallbackIdentifier);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"PollCallbackResponse", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class PollCallbackResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    DecodeLevel AppliedDecodeSpecification;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=2)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    PollCallbackResponseSendZDPResult^  SendZDPResult;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=3)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    PollCallbackResponseSendZCLResult^  SendZCLResult;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=4)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    PollCallbackResponseSendAPSResult^  SendAPSResult;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=5)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    PollCallbackResponseSendInterPANResult^  SendInterPANResult;
    
    public: PollCallbackResponse();
    public: PollCallbackResponse(
                System::Byte Status, 
                DecodeLevel AppliedDecodeSpecification, 
                PollCallbackResponseSendZDPResult^  SendZDPResult, 
                PollCallbackResponseSendZCLResult^  SendZCLResult, 
                PollCallbackResponseSendAPSResult^  SendAPSResult, 
                PollCallbackResponseSendInterPANResult^  SendInterPANResult);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"StartNodeDiscovery", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class StartNodeDiscoveryRequest
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::String^  CallbackDestination;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::UInt32 Timeout;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=2)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Boolean ReportOnExistingNodes;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=3)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Boolean ReportAnnouncements;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=4)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Boolean ReportLeave;
    
    public: StartNodeDiscoveryRequest();
    public: StartNodeDiscoveryRequest(System::String^  CallbackDestination, System::UInt32 Timeout, System::Boolean ReportOnExistingNodes, 
                System::Boolean ReportAnnouncements, System::Boolean ReportLeave);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"StartNodeDiscoveryResponse", WrapperNamespace=L"http://www.zigbee.org/zgd/", 
IsWrapped=true)]
public ref class StartNodeDiscoveryResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified, DataType=L"hexBinary")]
    cli::array< System::Byte >^  RequestIdentifier;
    
    public: StartNodeDiscoveryResponse();
    public: StartNodeDiscoveryResponse(System::Byte Status, cli::array< System::Byte >^  RequestIdentifier);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"ReadNodeCache", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class ReadNodeCacheRequest
{
    
    public: ReadNodeCacheRequest();};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"ReadNodeCacheResponse", WrapperNamespace=L"http://www.zigbee.org/zgd/", 
IsWrapped=true)]
public ref class ReadNodeCacheResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlArrayAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    [System::Xml::Serialization::XmlArrayItemAttribute(Namespace=L"http://www.zigbee.org/GWGSchema", IsNullable=false)]
    cli::array< WSNNode^  >^  NodeInformation;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=2)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::UInt32 Node;
    
    public: ReadNodeCacheResponse();
    public: ReadNodeCacheResponse(System::Byte Status, cli::array< WSNNode^  >^  NodeInformation, System::UInt32 Node);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"StartServiceDiscovery", WrapperNamespace=L"http://www.zigbee.org/zgd/", 
IsWrapped=true)]
public ref class StartServiceDiscoveryRequest
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::UInt32 Timeout;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::String^  CallbackDestination;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=2)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::UInt16 AddressOfInterest;
    
    public: StartServiceDiscoveryRequest();
    public: StartServiceDiscoveryRequest(System::UInt32 Timeout, System::String^  CallbackDestination, System::UInt16 AddressOfInterest);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"StartServiceDiscoveryResponse", WrapperNamespace=L"http://www.zigbee.org/zgd/", 
IsWrapped=true)]
public ref class StartServiceDiscoveryResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified, DataType=L"hexBinary")]
    cli::array< System::Byte >^  RequestIdentifier;
    
    public: StartServiceDiscoveryResponse();
    public: StartServiceDiscoveryResponse(System::Byte Status, cli::array< System::Byte >^  RequestIdentifier);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"GetServiceDescriptor", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class GetServiceDescriptorRequest
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::UInt32 Timeout;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::String^  CallbackDestination;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=2)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    Address^  Address;
    
    public: GetServiceDescriptorRequest();
    public: GetServiceDescriptorRequest(System::UInt32 Timeout, System::String^  CallbackDestination, Address^  Address);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"GetServiceDescriptorResponse", WrapperNamespace=L"http://www.zigbee.org/zgd/", 
IsWrapped=true)]
public ref class GetServiceDescriptorResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified, DataType=L"hexBinary")]
    cli::array< System::Byte >^  RequestIdentifier;
    
    public: GetServiceDescriptorResponse();
    public: GetServiceDescriptorResponse(System::Byte Status, cli::array< System::Byte >^  RequestIdentifier);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"ReadServiceCache", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class ReadServiceCacheRequest
{
    
    public: ReadServiceCacheRequest();};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"ReadServiceCacheResponse", WrapperNamespace=L"http://www.zigbee.org/zgd/", 
IsWrapped=true)]
public ref class ReadServiceCacheResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlArrayAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    [System::Xml::Serialization::XmlArrayItemAttribute(Namespace=L"http://www.zigbee.org/GWGSchema", IsNullable=false)]
    cli::array< NodeServices^  >^  ServiceInformation;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=2)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::UInt32 Node;
    
    public: ReadServiceCacheResponse();
    public: ReadServiceCacheResponse(System::Byte Status, cli::array< NodeServices^  >^  ServiceInformation, System::UInt32 Node);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"StartGatewayDevice", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class StartGatewayDeviceRequest
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    StartupAttributeInfo^  Request;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::UInt32 Timeout;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=2)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::String^  CallbackDestination;
    
    public: StartGatewayDeviceRequest();
    public: StartGatewayDeviceRequest(StartupAttributeInfo^  Request, System::UInt32 Timeout, System::String^  CallbackDestination);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"StartGatewayDeviceResponse", WrapperNamespace=L"http://www.zigbee.org/zgd/", 
IsWrapped=true)]
public ref class StartGatewayDeviceResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified, DataType=L"hexBinary")]
    cli::array< System::Byte >^  RequestIdentifier;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=2)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte NWKStatus;
    
    public: StartGatewayDeviceResponse();
    public: StartGatewayDeviceResponse(System::Byte Status, cli::array< System::Byte >^  RequestIdentifier, System::Byte NWKStatus);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"ConfigureStartupAttributeSet", WrapperNamespace=L"http://www.zigbee.org/zgd/", 
IsWrapped=true)]
public ref class ConfigureStartupAttributeSetRequest
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    StartupAttributeInfo^  StartupAttrInfo;
    
    public: ConfigureStartupAttributeSetRequest();
    public: ConfigureStartupAttributeSetRequest(StartupAttributeInfo^  StartupAttrInfo);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"ConfigureStartupAttributeSetResponse", WrapperNamespace=L"http://www.zigbee.org/zgd/", 
IsWrapped=true)]
public ref class ConfigureStartupAttributeSetResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: ConfigureStartupAttributeSetResponse();
    public: ConfigureStartupAttributeSetResponse(System::Byte Status);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"ReadStartupAttributeSet", WrapperNamespace=L"http://www.zigbee.org/zgd/", 
IsWrapped=true)]
public ref class ReadStartupAttributeSetRequest
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::UInt32 StartAttrSetIndex;
    
    public: ReadStartupAttributeSetRequest();
    public: ReadStartupAttributeSetRequest(System::UInt32 StartAttrSetIndex);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"ReadStartupAttributeSetResponse", WrapperNamespace=L"http://www.zigbee.org/zgd/", 
IsWrapped=true)]
public ref class ReadStartupAttributeSetResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    StartupAttributeInfo^  StartupAttributeInfo;
    
    public: ReadStartupAttributeSetResponse();
    public: ReadStartupAttributeSetResponse(System::Byte Status, StartupAttributeInfo^  StartupAttributeInfo);};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"svcutil", L"4.0.30319.1"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true, Namespace=L"http://www.zigbee.org/zgd/")]
public ref class PollResultsResponseSendZDPResult
{
    
    private: ZDPMessage^  zDPMessageField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified, Order=0)]
    property ZDPMessage^  ZDPMessage
    {
        ZDPMessage^  get();
        System::Void set(ZDPMessage^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"svcutil", L"4.0.30319.1"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true, Namespace=L"http://www.zigbee.org/zgd/")]
public ref class PollResultsResponseSendZCLResult
{
    
    private: ZCLMessage^  zCLMessageField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified, Order=0)]
    property ZCLMessage^  ZCLMessage
    {
        ZCLMessage^  get();
        System::Void set(ZCLMessage^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"svcutil", L"4.0.30319.1"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true, Namespace=L"http://www.zigbee.org/zgd/")]
public ref class PollResultsResponseSendAPSResult
{
    
    private: APSMessageEvent^  aPSMessageEventField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified, Order=0)]
    property APSMessageEvent^  APSMessageEvent
    {
        APSMessageEvent^  get();
        System::Void set(APSMessageEvent^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"svcutil", L"4.0.30319.1"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true, Namespace=L"http://www.zigbee.org/zgd/")]
public ref class PollResultsResponseSendInterPANResult
{
    
    private: InterPANMessageEvent^  interPANMessageEventField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified, Order=0)]
    property InterPANMessageEvent^  InterPANMessageEvent
    {
        InterPANMessageEvent^  get();
        System::Void set(InterPANMessageEvent^  value);
    }
};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"PollResults", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class PollResultsRequest
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified, DataType=L"hexBinary")]
    cli::array< System::Byte >^  RequestIdentifier;
    
    public: PollResultsRequest();
    public: PollResultsRequest(cli::array< System::Byte >^  RequestIdentifier);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"PollResultsResponse", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class PollResultsResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified, DataType=L"hexBinary")]
    cli::array< System::Byte >^  RequestIdentifier;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=2)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    DecodeLevel AppliedDecodeSpecification;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=3)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    PollResultsResponseSendZDPResult^  SendZDPResult;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=4)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    PollResultsResponseSendZCLResult^  SendZCLResult;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=5)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    PollResultsResponseSendAPSResult^  SendAPSResult;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=6)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    PollResultsResponseSendInterPANResult^  SendInterPANResult;
    
    public: PollResultsResponse();
    public: PollResultsResponse(
                System::Byte Status, 
                cli::array< System::Byte >^  RequestIdentifier, 
                DecodeLevel AppliedDecodeSpecification, 
                PollResultsResponseSendZDPResult^  SendZDPResult, 
                PollResultsResponseSendZCLResult^  SendZCLResult, 
                PollResultsResponseSendAPSResult^  SendAPSResult, 
                PollResultsResponseSendInterPANResult^  SendInterPANResult);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"CreateAliasAddress", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class CreateAliasAddressRequest
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::String^  Alias;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::UInt64 ExtendedAddress;
    
    public: CreateAliasAddressRequest();
    public: CreateAliasAddressRequest(System::String^  Alias, System::UInt64 ExtendedAddress);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"CreateAliasAddressResponse", WrapperNamespace=L"http://www.zigbee.org/zgd/", 
IsWrapped=true)]
public ref class CreateAliasAddressResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: CreateAliasAddressResponse();
    public: CreateAliasAddressResponse(System::Byte Status);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"DeleteAliasAddress", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class DeleteAliasAddressRequest
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::String^  Alias;
    
    public: DeleteAliasAddressRequest();
    public: DeleteAliasAddressRequest(System::String^  Alias);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"DeleteAliasAddressResponse", WrapperNamespace=L"http://www.zigbee.org/zgd/", 
IsWrapped=true)]
public ref class DeleteAliasAddressResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: DeleteAliasAddressResponse();
    public: DeleteAliasAddressResponse(System::Byte Status);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"ListAddresses", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class ListAddressesRequest
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    Address^  Address;
    
    public: ListAddressesRequest();
    public: ListAddressesRequest(Address^  Address);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"ListAddressesResponse", WrapperNamespace=L"http://www.zigbee.org/zgd/", 
IsWrapped=true)]
public ref class ListAddressesResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::UInt32 NumOfAddr;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=2)]
    [System::Xml::Serialization::XmlElementAttribute(L"AddrList", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    cli::array< Address^  >^  AddrList;
    
    public: ListAddressesResponse();
    public: ListAddressesResponse(System::Byte Status, System::UInt32 NumOfAddr, cli::array< Address^  >^  AddrList);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"GmoLeave", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class GmoLeaveRequest
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::UInt32 Timeout;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::String^  CallbackDestination;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=2)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    Address^  DeviceAddress;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=3)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Boolean RemoveChildren;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=4)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Boolean Rejoin;
    
    public: GmoLeaveRequest();
    public: GmoLeaveRequest(System::UInt32 Timeout, System::String^  CallbackDestination, Address^  DeviceAddress, System::Boolean RemoveChildren, 
                System::Boolean Rejoin);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"GmoLeaveResponse", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class GmoLeaveResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified, DataType=L"hexBinary")]
    cli::array< System::Byte >^  RequestIdentifier;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=2)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte MgmtCommandStatus;
    
    public: GmoLeaveResponse();
    public: GmoLeaveResponse(System::Byte Status, cli::array< System::Byte >^  RequestIdentifier, System::Byte MgmtCommandStatus);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"PermitJoin", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class PermitJoinRequest
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::UInt32 Timeout;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::String^  CallbackDestination;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=2)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    Address^  DestinationAddress;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=3)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::UInt32 DestinationAddressMode;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=4)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte PermitDuration;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=5)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Boolean TCSignificane;
    
    public: PermitJoinRequest();
    public: PermitJoinRequest(
                System::UInt32 Timeout, 
                System::String^  CallbackDestination, 
                Address^  DestinationAddress, 
                System::UInt32 DestinationAddressMode, 
                System::Byte PermitDuration, 
                System::Boolean TCSignificane);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"PermitJoinResponse", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class PermitJoinResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified, DataType=L"hexBinary")]
    cli::array< System::Byte >^  RequestIdentifier;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=2)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte MgmtCommandStatus;
    
    public: PermitJoinResponse();
    public: PermitJoinResponse(System::Byte Status, cli::array< System::Byte >^  RequestIdentifier, System::Byte MgmtCommandStatus);};

[System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0")]
public interface class gmoChannel : public gmo, public System::ServiceModel::IClientChannel
{
};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0")]
public ref class gmoClient : public System::ServiceModel::ClientBase<gmo^ >, public gmo
{
    
    public: gmoClient();
    public: gmoClient(System::String^  endpointConfigurationName);
    public: gmoClient(System::String^  endpointConfigurationName, System::String^  remoteAddress);
    public: gmoClient(System::String^  endpointConfigurationName, System::ServiceModel::EndpointAddress^  remoteAddress);
    public: gmoClient(System::ServiceModel::Channels::Binding^  binding, System::ServiceModel::EndpointAddress^  remoteAddress);
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual GetVersionResponse^  __gmo__GetVersion(GetVersionRequest^  request) sealed = gmo::GetVersion;
    
    public: System::Byte GetVersion(Version^  %Version);
    
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual CreateCallbackResponse^  __gmo__CreateCallback(CreateCallbackRequest^  request) sealed = gmo::CreateCallback;
    
    public: System::Byte CreateCallback(Filter^  Filter, Action^  Action, System::UInt32 %CallbackIdentifier);
    
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual GetResponse^  __gmo__Get(GetRequest^  request) sealed = gmo::Get;
    
    public: System::Byte Get(System::String^  attrId, cli::array< System::Byte >^  %__identifier(value));
    
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual SetResponse^  __gmo__Set(SetRequest^  request) sealed = gmo::Set;
    
    public: System::Byte Set(System::String^  attrId, cli::array< System::Byte >^  __identifier(value));
    
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual DeleteCallbackResponse^  __gmo__DeleteCallback(DeleteCallbackRequest^  request) sealed = gmo::DeleteCallback;
    
    public: System::Byte DeleteCallback(System::UInt32 CallbackIdentifier);
    
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual ListCallbacksResponse^  __gmo__ListCallbacks(ListCallbacksRequest^  request) sealed = gmo::ListCallbacks;
    
    public: System::Byte ListCallbacks(cli::array< System::UInt32 >^  %CallbackIdentiferList);
    
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual UpdateTimeoutResponse^  __gmo__UpdateTimeout(UpdateTimeoutRequest^  request) sealed = gmo::UpdateTimeout;
    
    public: System::Byte UpdateTimeout(cli::array< System::Byte >^  RequestIdentifier, System::UInt32 Timeout);
    
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual PollCallbackResponse^  __gmo__PollCallback(PollCallbackRequest^  request) sealed = gmo::PollCallback;
    
    public: System::Byte PollCallback(
                System::UInt32 CallbackIdentifier, 
                DecodeLevel %AppliedDecodeSpecification, 
                PollCallbackResponseSendZDPResult^  %SendZDPResult, 
                PollCallbackResponseSendZCLResult^  %SendZCLResult, 
                PollCallbackResponseSendAPSResult^  %SendAPSResult, 
                PollCallbackResponseSendInterPANResult^  %SendInterPANResult);
    
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual StartNodeDiscoveryResponse^  __gmo__StartNodeDiscovery(StartNodeDiscoveryRequest^  request) sealed = gmo::StartNodeDiscovery;
    
    public: System::Byte StartNodeDiscovery(
                System::String^  CallbackDestination, 
                System::UInt32 Timeout, 
                System::Boolean ReportOnExistingNodes, 
                System::Boolean ReportAnnouncements, 
                System::Boolean ReportLeave, 
                cli::array< System::Byte >^  %RequestIdentifier);
    
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual ReadNodeCacheResponse^  __gmo__ReadNodeCache(ReadNodeCacheRequest^  request) sealed = gmo::ReadNodeCache;
    
    public: System::Byte ReadNodeCache(cli::array< WSNNode^  >^  %NodeInformation, System::UInt32 %Node);
    
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual StartServiceDiscoveryResponse^  __gmo__StartServiceDiscovery(StartServiceDiscoveryRequest^  request) sealed = gmo::StartServiceDiscovery;
    
    public: System::Byte StartServiceDiscovery(System::UInt32 Timeout, System::String^  CallbackDestination, System::UInt16 AddressOfInterest, 
                cli::array< System::Byte >^  %RequestIdentifier);
    
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual GetServiceDescriptorResponse^  __gmo__GetServiceDescriptor(GetServiceDescriptorRequest^  request) sealed = gmo::GetServiceDescriptor;
    
    public: System::Byte GetServiceDescriptor(System::UInt32 Timeout, System::String^  CallbackDestination, Address^  Address, 
                cli::array< System::Byte >^  %RequestIdentifier);
    
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual ReadServiceCacheResponse^  __gmo__ReadServiceCache(ReadServiceCacheRequest^  request) sealed = gmo::ReadServiceCache;
    
    public: System::Byte ReadServiceCache(cli::array< NodeServices^  >^  %ServiceInformation, System::UInt32 %Node);
    
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual StartGatewayDeviceResponse^  __gmo__StartGatewayDevice(StartGatewayDeviceRequest^  request) sealed = gmo::StartGatewayDevice;
    
    public: System::Byte StartGatewayDevice(StartupAttributeInfo^  Request, System::UInt32 Timeout, System::String^  CallbackDestination, 
                cli::array< System::Byte >^  %RequestIdentifier, System::Byte %NWKStatus);
    
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual ConfigureStartupAttributeSetResponse^  __gmo__ConfigureStartupAttributeSet(ConfigureStartupAttributeSetRequest^  request) sealed = gmo::ConfigureStartupAttributeSet;
    
    public: System::Byte ConfigureStartupAttributeSet(StartupAttributeInfo^  StartupAttrInfo);
    
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual ReadStartupAttributeSetResponse^  __gmo__ReadStartupAttributeSet(ReadStartupAttributeSetRequest^  request) sealed = gmo::ReadStartupAttributeSet;
    
    public: System::Byte ReadStartupAttributeSet(System::UInt32 StartAttrSetIndex, StartupAttributeInfo^  %StartupAttributeInfo);
    
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual PollResultsResponse^  __gmo__PollResults(PollResultsRequest^  request) sealed = gmo::PollResults;
    
    public: System::Byte PollResults(
                cli::array< System::Byte >^  %RequestIdentifier, 
                DecodeLevel %AppliedDecodeSpecification, 
                PollResultsResponseSendZDPResult^  %SendZDPResult, 
                PollResultsResponseSendZCLResult^  %SendZCLResult, 
                PollResultsResponseSendAPSResult^  %SendAPSResult, 
                PollResultsResponseSendInterPANResult^  %SendInterPANResult);
    
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual CreateAliasAddressResponse^  __gmo__CreateAliasAddress(CreateAliasAddressRequest^  request) sealed = gmo::CreateAliasAddress;
    
    public: System::Byte CreateAliasAddress(System::String^  Alias, System::UInt64 ExtendedAddress);
    
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual DeleteAliasAddressResponse^  __gmo__DeleteAliasAddress(DeleteAliasAddressRequest^  request) sealed = gmo::DeleteAliasAddress;
    
    public: System::Byte DeleteAliasAddress(System::String^  Alias);
    
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual ListAddressesResponse^  __gmo__ListAddresses(ListAddressesRequest^  request) sealed = gmo::ListAddresses;
    
    public: System::Byte ListAddresses(Address^  Address, System::UInt32 %NumOfAddr, cli::array< Address^  >^  %AddrList);
    
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual GmoLeaveResponse^  __gmo__GmoLeave(GmoLeaveRequest^  request) sealed = gmo::GmoLeave;
    
    public: System::Byte GmoLeave(
                System::UInt32 Timeout, 
                System::String^  CallbackDestination, 
                Address^  DeviceAddress, 
                System::Boolean RemoveChildren, 
                System::Boolean Rejoin, 
                cli::array< System::Byte >^  %RequestIdentifier, 
                System::Byte %MgmtCommandStatus);
    
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual PermitJoinResponse^  __gmo__PermitJoin(PermitJoinRequest^  request) sealed = gmo::PermitJoin;
    
    public: System::Byte PermitJoin(
                System::UInt32 Timeout, 
                System::String^  CallbackDestination, 
                Address^  DestinationAddress, 
                System::UInt32 DestinationAddressMode, 
                System::Byte PermitDuration, 
                System::Boolean TCSignificane, 
                cli::array< System::Byte >^  %RequestIdentifier, 
                System::Byte %MgmtCommandStatus);
};

[System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ServiceModel::ServiceContractAttribute(Namespace=L"http://www.zigbee.org/zgd/", ConfigurationName=L"zdp")]
public interface class zdp
{
    
    // CODEGEN: Контракт генерации сообщений с именем CallbackDestination из пространства имен  не отмечен как обнуляемый
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/", ReplyAction=L"*")]
    SendZDPCommandResponse^  SendZDPCommand(SendZDPCommandRequest^  request);
};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(IsWrapped=false)]
public ref class SendZDPCommandRequest
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Name=L"SendZDPCommand", Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    SendZDPCommandRequestBody^  Body;
    
    public: SendZDPCommandRequest();
    public: SendZDPCommandRequest(SendZDPCommandRequestBody^  Body);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::Runtime::Serialization::DataContractAttribute(Namespace=L"")]
public ref class SendZDPCommandRequestBody
{
    
    public: [System::Runtime::Serialization::DataMemberAttribute(Order=0)]
    System::UInt32 Timeout;
    
    public: [System::Runtime::Serialization::DataMemberAttribute(EmitDefaultValue=false, Order=1)]
    System::String^  CallbackDestination;
    
    public: [System::Runtime::Serialization::DataMemberAttribute(EmitDefaultValue=false, Order=2)]
    www::zigbee::org::GWGSchema::ZDPCommand^  Command;
    
    public: SendZDPCommandRequestBody();
    public: SendZDPCommandRequestBody(System::UInt32 Timeout, System::String^  CallbackDestination, www::zigbee::org::GWGSchema::ZDPCommand^  Command);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(IsWrapped=false)]
public ref class SendZDPCommandResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Name=L"SendZDPCommandResponse", Namespace=L"http://www.zigbee.org/zgd/", 
        Order=0)]
    SendZDPCommandResponseBody^  Body;
    
    public: SendZDPCommandResponse();
    public: SendZDPCommandResponse(SendZDPCommandResponseBody^  Body);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::Runtime::Serialization::DataContractAttribute(Namespace=L"")]
public ref class SendZDPCommandResponseBody
{
    
    public: [System::Runtime::Serialization::DataMemberAttribute(Order=0)]
    System::Byte Status;
    
    public: [System::Runtime::Serialization::DataMemberAttribute(EmitDefaultValue=false, Order=1)]
    System::String^  RequestIdentifier;
    
    public: [System::Runtime::Serialization::DataMemberAttribute(EmitDefaultValue=false, Order=2)]
    www::zigbee::org::GWGSchema::ZDPMessage^  Message;
    
    public: SendZDPCommandResponseBody();
    public: SendZDPCommandResponseBody(System::Byte Status, System::String^  RequestIdentifier, www::zigbee::org::GWGSchema::ZDPMessage^  Message);};

[System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0")]
public interface class zdpChannel : public zdp, public System::ServiceModel::IClientChannel
{
};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0")]
public ref class zdpClient : public System::ServiceModel::ClientBase<zdp^ >, public zdp
{
    
    public: zdpClient();
    public: zdpClient(System::String^  endpointConfigurationName);
    public: zdpClient(System::String^  endpointConfigurationName, System::String^  remoteAddress);
    public: zdpClient(System::String^  endpointConfigurationName, System::ServiceModel::EndpointAddress^  remoteAddress);
    public: zdpClient(System::ServiceModel::Channels::Binding^  binding, System::ServiceModel::EndpointAddress^  remoteAddress);
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual SendZDPCommandResponse^  __zdp__SendZDPCommand(SendZDPCommandRequest^  request) sealed = zdp::SendZDPCommand;
    
    public: System::Byte SendZDPCommand(System::UInt32 Timeout, System::String^  CallbackDestination, www::zigbee::org::GWGSchema::ZDPCommand^  Command, 
                System::String^  %RequestIdentifier, www::zigbee::org::GWGSchema::ZDPMessage^  %Message);
};

[System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ServiceModel::ServiceContractAttribute(Namespace=L"http://www.zigbee.org/zgd/", ConfigurationName=L"zdpEvent")]
public interface class zdpEvent
{
    
    // CODEGEN: Контракт генерации сообщений с именем RequestIdentifier из пространства имен  не отмечен как обнуляемый
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/NotifyZDPEvent", ReplyAction=L"*")]
    NotifyZDPEventResponse^  NotifyZDPEvent(NotifyZDPEventRequest^  request);
};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(IsWrapped=false)]
public ref class NotifyZDPEventRequest
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Name=L"NotifyZDPEvent", Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    NotifyZDPEventRequestBody^  Body;
    
    public: NotifyZDPEventRequest();
    public: NotifyZDPEventRequest(NotifyZDPEventRequestBody^  Body);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::Runtime::Serialization::DataContractAttribute(Namespace=L"")]
public ref class NotifyZDPEventRequestBody
{
    
    public: [System::Runtime::Serialization::DataMemberAttribute(Order=0)]
    System::Byte Status;
    
    public: [System::Runtime::Serialization::DataMemberAttribute(EmitDefaultValue=false, Order=1)]
    System::String^  RequestIdentifier;
    
    public: [System::Runtime::Serialization::DataMemberAttribute(EmitDefaultValue=false, Order=2)]
    www::zigbee::org::GWGSchema::ZDPMessage^  Message;
    
    public: NotifyZDPEventRequestBody();
    public: NotifyZDPEventRequestBody(System::Byte Status, System::String^  RequestIdentifier, www::zigbee::org::GWGSchema::ZDPMessage^  Message);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(IsWrapped=false)]
public ref class NotifyZDPEventResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Name=L"NotifyZDPEventResponse", Namespace=L"http://www.zigbee.org/zgd/", 
        Order=0)]
    NotifyZDPEventResponseBody^  Body;
    
    public: NotifyZDPEventResponse();
    public: NotifyZDPEventResponse(NotifyZDPEventResponseBody^  Body);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::Runtime::Serialization::DataContractAttribute(Namespace=L"")]
public ref class NotifyZDPEventResponseBody
{
    
    public: [System::Runtime::Serialization::DataMemberAttribute(Order=0)]
    System::Byte Status;
    
    public: NotifyZDPEventResponseBody();
    public: NotifyZDPEventResponseBody(System::Byte Status);};

[System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0")]
public interface class zdpEventChannel : public zdpEvent, public System::ServiceModel::IClientChannel
{
};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0")]
public ref class zdpEventClient : public System::ServiceModel::ClientBase<zdpEvent^ >, public zdpEvent
{
    
    public: zdpEventClient();
    public: zdpEventClient(System::String^  endpointConfigurationName);
    public: zdpEventClient(System::String^  endpointConfigurationName, System::String^  remoteAddress);
    public: zdpEventClient(System::String^  endpointConfigurationName, System::ServiceModel::EndpointAddress^  remoteAddress);
    public: zdpEventClient(System::ServiceModel::Channels::Binding^  binding, System::ServiceModel::EndpointAddress^  remoteAddress);
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual NotifyZDPEventResponse^  __zdpEvent__NotifyZDPEvent(NotifyZDPEventRequest^  request) sealed = zdpEvent::NotifyZDPEvent;
    
    public: System::Void NotifyZDPEvent(System::Byte %Status, System::String^  RequestIdentifier, www::zigbee::org::GWGSchema::ZDPMessage^  Message);
};

[System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ServiceModel::ServiceContractAttribute(Namespace=L"http://www.zigbee.org/zgd/", ConfigurationName=L"zcl")]
public interface class zcl
{
    
    // CODEGEN: Контракт генерации сообщений с именем CallbackDestination из пространства имен  не отмечен как обнуляемый
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/SendZCLCommand", ReplyAction=L"*")]
    SendZCLCommandResponse^  SendZCLCommand(SendZCLCommandRequest^  request);
};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(IsWrapped=false)]
public ref class SendZCLCommandRequest
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Name=L"SendZCLCommand", Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    SendZCLCommandRequestBody^  Body;
    
    public: SendZCLCommandRequest();
    public: SendZCLCommandRequest(SendZCLCommandRequestBody^  Body);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::Runtime::Serialization::DataContractAttribute(Namespace=L"")]
public ref class SendZCLCommandRequestBody
{
    
    public: [System::Runtime::Serialization::DataMemberAttribute(Order=0)]
    System::UInt32 Timeout;
    
    public: [System::Runtime::Serialization::DataMemberAttribute(EmitDefaultValue=false, Order=1)]
    System::String^  CallbackDestination;
    
    public: [System::Runtime::Serialization::DataMemberAttribute(EmitDefaultValue=false, Order=2)]
    www::zigbee::org::GWGSchema::ZCLCommand^  Command;
    
    public: SendZCLCommandRequestBody();
    public: SendZCLCommandRequestBody(System::UInt32 Timeout, System::String^  CallbackDestination, www::zigbee::org::GWGSchema::ZCLCommand^  Command);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(IsWrapped=false)]
public ref class SendZCLCommandResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Name=L"SendZCLCommandResponse", Namespace=L"http://www.zigbee.org/zgd/", 
        Order=0)]
    SendZCLCommandResponseBody^  Body;
    
    public: SendZCLCommandResponse();
    public: SendZCLCommandResponse(SendZCLCommandResponseBody^  Body);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::Runtime::Serialization::DataContractAttribute(Namespace=L"")]
public ref class SendZCLCommandResponseBody
{
    
    public: [System::Runtime::Serialization::DataMemberAttribute(Order=0)]
    System::Byte Status;
    
    public: [System::Runtime::Serialization::DataMemberAttribute(EmitDefaultValue=false, Order=1)]
    System::String^  RequestIdentifier;
    
    public: [System::Runtime::Serialization::DataMemberAttribute(EmitDefaultValue=false, Order=2)]
    www::zigbee::org::GWGSchema::ZCLMessage^  Message;
    
    public: SendZCLCommandResponseBody();
    public: SendZCLCommandResponseBody(System::Byte Status, System::String^  RequestIdentifier, www::zigbee::org::GWGSchema::ZCLMessage^  Message);};

[System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0")]
public interface class zclChannel : public zcl, public System::ServiceModel::IClientChannel
{
};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0")]
public ref class zclClient : public System::ServiceModel::ClientBase<zcl^ >, public zcl
{
    
    public: zclClient();
    public: zclClient(System::String^  endpointConfigurationName);
    public: zclClient(System::String^  endpointConfigurationName, System::String^  remoteAddress);
    public: zclClient(System::String^  endpointConfigurationName, System::ServiceModel::EndpointAddress^  remoteAddress);
    public: zclClient(System::ServiceModel::Channels::Binding^  binding, System::ServiceModel::EndpointAddress^  remoteAddress);
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual SendZCLCommandResponse^  __zcl__SendZCLCommand(SendZCLCommandRequest^  request) sealed = zcl::SendZCLCommand;
    
    public: System::Byte SendZCLCommand(System::UInt32 Timeout, System::String^  CallbackDestination, www::zigbee::org::GWGSchema::ZCLCommand^  Command, 
                System::String^  %RequestIdentifier, www::zigbee::org::GWGSchema::ZCLMessage^  %Message);
};

[System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ServiceModel::ServiceContractAttribute(Namespace=L"http://www.zigbee.org/zgd/", ConfigurationName=L"zclEvent")]
public interface class zclEvent
{
    
    // CODEGEN: Контракт генерации сообщений с именем Message из пространства имен  не отмечен как обнуляемый
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/NotifyZCLEvent", ReplyAction=L"*")]
    NotifyZCLEventResponse^  NotifyZCLEvent(NotifyZCLEventRequest^  request);
};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(IsWrapped=false)]
public ref class NotifyZCLEventRequest
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Name=L"NotifyZCLEvent", Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    NotifyZCLEventRequestBody^  Body;
    
    public: NotifyZCLEventRequest();
    public: NotifyZCLEventRequest(NotifyZCLEventRequestBody^  Body);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::Runtime::Serialization::DataContractAttribute(Namespace=L"")]
public ref class NotifyZCLEventRequestBody
{
    
    public: [System::Runtime::Serialization::DataMemberAttribute(EmitDefaultValue=false, Order=0)]
    www::zigbee::org::GWGSchema::ZCLMessage^  Message;
    
    public: [System::Runtime::Serialization::DataMemberAttribute(Order=1)]
    System::Byte Status;
    
    public: [System::Runtime::Serialization::DataMemberAttribute(EmitDefaultValue=false, Order=2)]
    System::String^  RequestIdentifier;
    
    public: NotifyZCLEventRequestBody();
    public: NotifyZCLEventRequestBody(www::zigbee::org::GWGSchema::ZCLMessage^  Message, System::Byte Status, System::String^  RequestIdentifier);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(IsWrapped=false)]
public ref class NotifyZCLEventResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Name=L"NotifyZCLEventResponse", Namespace=L"http://www.zigbee.org/zgd/", 
        Order=0)]
    NotifyZCLEventResponseBody^  Body;
    
    public: NotifyZCLEventResponse();
    public: NotifyZCLEventResponse(NotifyZCLEventResponseBody^  Body);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::Runtime::Serialization::DataContractAttribute(Namespace=L"")]
public ref class NotifyZCLEventResponseBody
{
    
    public: [System::Runtime::Serialization::DataMemberAttribute(Order=0)]
    System::Byte Status;
    
    public: NotifyZCLEventResponseBody();
    public: NotifyZCLEventResponseBody(System::Byte Status);};

[System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0")]
public interface class zclEventChannel : public zclEvent, public System::ServiceModel::IClientChannel
{
};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0")]
public ref class zclEventClient : public System::ServiceModel::ClientBase<zclEvent^ >, public zclEvent
{
    
    public: zclEventClient();
    public: zclEventClient(System::String^  endpointConfigurationName);
    public: zclEventClient(System::String^  endpointConfigurationName, System::String^  remoteAddress);
    public: zclEventClient(System::String^  endpointConfigurationName, System::ServiceModel::EndpointAddress^  remoteAddress);
    public: zclEventClient(System::ServiceModel::Channels::Binding^  binding, System::ServiceModel::EndpointAddress^  remoteAddress);
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual NotifyZCLEventResponse^  __zclEvent__NotifyZCLEvent(NotifyZCLEventRequest^  request) sealed = zclEvent::NotifyZCLEvent;
    
    public: System::Void NotifyZCLEvent(www::zigbee::org::GWGSchema::ZCLMessage^  Message, System::Byte %Status, System::String^  RequestIdentifier);
};

[System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ServiceModel::ServiceContractAttribute(Namespace=L"http://www.zigbee.org/zgd/", ConfigurationName=L"aps")]
public interface class aps
{
    
    // CODEGEN: Параметр "Status" требует дополнительной информации о схеме, которую невозможно получить в режиме параметров. Указан атрибут "System.Xml.Serialization.XmlElementAttribute".
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/ConfigureNodeDescriptor", ReplyAction=L"*")]
    [System::ServiceModel::XmlSerializerFormatAttribute]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< Level >::typeid)]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< DecodeLevel >::typeid)]
    [returnvalue: System::ServiceModel::MessageParameterAttribute(Name=L"Status")]
    ConfigureNodeDescriptorResponse^  ConfigureNodeDescriptor(ConfigureNodeDescriptorRequest^  request);
    
    // CODEGEN: Параметр "Status" требует дополнительной информации о схеме, которую невозможно получить в режиме параметров. Указан атрибут "System.Xml.Serialization.XmlElementAttribute".
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/ConfigureUserDescriptor", ReplyAction=L"*")]
    [System::ServiceModel::XmlSerializerFormatAttribute]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< Level >::typeid)]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< DecodeLevel >::typeid)]
    [returnvalue: System::ServiceModel::MessageParameterAttribute(Name=L"Status")]
    ConfigureUserDescriptorResponse^  ConfigureUserDescriptor(ConfigureUserDescriptorRequest^  request);
    
    // CODEGEN: Параметр "Status" требует дополнительной информации о схеме, которую невозможно получить в режиме параметров. Указан атрибут "System.Xml.Serialization.XmlElementAttribute".
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/ConfigureEndpoint", ReplyAction=L"*")]
    [System::ServiceModel::XmlSerializerFormatAttribute]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< Level >::typeid)]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< DecodeLevel >::typeid)]
    [returnvalue: System::ServiceModel::MessageParameterAttribute(Name=L"Status")]
    ConfigureEndpointResponse^  ConfigureEndpoint(ConfigureEndpointRequest^  request);
    
    // CODEGEN: Параметр "Status" требует дополнительной информации о схеме, которую невозможно получить в режиме параметров. Указан атрибут "System.Xml.Serialization.XmlElementAttribute".
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/ClearEndpoint", ReplyAction=L"*")]
    [System::ServiceModel::XmlSerializerFormatAttribute]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< Level >::typeid)]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< DecodeLevel >::typeid)]
    [returnvalue: System::ServiceModel::MessageParameterAttribute(Name=L"Status")]
    ClearEndpointResponse^  ClearEndpoint(ClearEndpointRequest^  request);
    
    // CODEGEN: Параметр "Status" требует дополнительной информации о схеме, которую невозможно получить в режиме параметров. Указан атрибут "System.Xml.Serialization.XmlElementAttribute".
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/SendAPSMessage", ReplyAction=L"*")]
    [System::ServiceModel::XmlSerializerFormatAttribute]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< Level >::typeid)]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< DecodeLevel >::typeid)]
    [returnvalue: System::ServiceModel::MessageParameterAttribute(Name=L"Status")]
    SendAPSMessageResponse^  SendAPSMessage(SendAPSMessageRequest^  request);
    
    // CODEGEN: Параметр "Status" требует дополнительной информации о схеме, которую невозможно получить в режиме параметров. Указан атрибут "System.Xml.Serialization.XmlElementAttribute".
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/AddGroup", ReplyAction=L"*")]
    [System::ServiceModel::XmlSerializerFormatAttribute]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< Level >::typeid)]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< DecodeLevel >::typeid)]
    [returnvalue: System::ServiceModel::MessageParameterAttribute(Name=L"Status")]
    AddGroupResponse^  AddGroup(AddGroupRequest^  request);
    
    // CODEGEN: Параметр "Status" требует дополнительной информации о схеме, которую невозможно получить в режиме параметров. Указан атрибут "System.Xml.Serialization.XmlElementAttribute".
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/RemoveGroup", ReplyAction=L"*")]
    [System::ServiceModel::XmlSerializerFormatAttribute]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< Level >::typeid)]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< DecodeLevel >::typeid)]
    [returnvalue: System::ServiceModel::MessageParameterAttribute(Name=L"Status")]
    RemoveGroupResponse^  RemoveGroup(RemoveGroupRequest^  request);
    
    // CODEGEN: Параметр "Status" требует дополнительной информации о схеме, которую невозможно получить в режиме параметров. Указан атрибут "System.Xml.Serialization.XmlElementAttribute".
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/RemoveAllGroups", ReplyAction=L"*")]
    [System::ServiceModel::XmlSerializerFormatAttribute]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< Level >::typeid)]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< DecodeLevel >::typeid)]
    [returnvalue: System::ServiceModel::MessageParameterAttribute(Name=L"Status")]
    RemoveAllGroupsResponse^  RemoveAllGroups(RemoveAllGroupsRequest^  request);
    
    // CODEGEN: Параметр "Status" требует дополнительной информации о схеме, которую невозможно получить в режиме параметров. Указан атрибут "System.Xml.Serialization.XmlElementAttribute".
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/GetGroupList", ReplyAction=L"*")]
    [System::ServiceModel::XmlSerializerFormatAttribute]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< Level >::typeid)]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< DecodeLevel >::typeid)]
    [returnvalue: System::ServiceModel::MessageParameterAttribute(Name=L"Status")]
    GetGroupListResponse^  GetGroupList(GetGroupListRequest^  request);
    
    // CODEGEN: Параметр "Status" требует дополнительной информации о схеме, которую невозможно получить в режиме параметров. Указан атрибут "System.Xml.Serialization.XmlElementAttribute".
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/GetBindingList", ReplyAction=L"*")]
    [System::ServiceModel::XmlSerializerFormatAttribute]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< Level >::typeid)]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< DecodeLevel >::typeid)]
    [returnvalue: System::ServiceModel::MessageParameterAttribute(Name=L"Status")]
    GetBindingListResponse^  GetBindingList(GetBindingListRequest^  request);
    
    // CODEGEN: Параметр "Status" требует дополнительной информации о схеме, которую невозможно получить в режиме параметров. Указан атрибут "System.Xml.Serialization.XmlElementAttribute".
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/GetNodeDescriptor", ReplyAction=L"*")]
    [System::ServiceModel::XmlSerializerFormatAttribute]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< Level >::typeid)]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< DecodeLevel >::typeid)]
    [returnvalue: System::ServiceModel::MessageParameterAttribute(Name=L"Status")]
    GetNodeDescriptorResponse^  GetNodeDescriptor(GetNodeDescriptorRequest^  request);
    
    // CODEGEN: Параметр "Status" требует дополнительной информации о схеме, которую невозможно получить в режиме параметров. Указан атрибут "System.Xml.Serialization.XmlElementAttribute".
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/GetNodePowerDescriptor", ReplyAction=L"*")]
    [System::ServiceModel::XmlSerializerFormatAttribute]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< Level >::typeid)]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< DecodeLevel >::typeid)]
    [returnvalue: System::ServiceModel::MessageParameterAttribute(Name=L"Status")]
    GetNodePowerDescriptorResponse^  GetNodePowerDescriptor(GetNodePowerDescriptorRequest^  request);
    
    // CODEGEN: Параметр "Status" требует дополнительной информации о схеме, которую невозможно получить в режиме параметров. Указан атрибут "System.Xml.Serialization.XmlElementAttribute".
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/GetUserDescriptor", ReplyAction=L"*")]
    [System::ServiceModel::XmlSerializerFormatAttribute]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< Level >::typeid)]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< DecodeLevel >::typeid)]
    [returnvalue: System::ServiceModel::MessageParameterAttribute(Name=L"Status")]
    GetUserDescriptorResponse^  GetUserDescriptor(GetUserDescriptorRequest^  request);
};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"ConfigureNodeDescriptor", WrapperNamespace=L"http://www.zigbee.org/zgd/", 
IsWrapped=true)]
public ref class ConfigureNodeDescriptorRequest
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    NodeDescriptor^  NodeDescriptor;
    
    public: ConfigureNodeDescriptorRequest();
    public: ConfigureNodeDescriptorRequest(NodeDescriptor^  NodeDescriptor);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"ConfigureNodeDescriptorResponse", WrapperNamespace=L"http://www.zigbee.org/zgd/", 
IsWrapped=true)]
public ref class ConfigureNodeDescriptorResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: ConfigureNodeDescriptorResponse();
    public: ConfigureNodeDescriptorResponse(System::Byte Status);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"ConfigureUserDescriptor", WrapperNamespace=L"http://www.zigbee.org/zgd/", 
IsWrapped=true)]
public ref class ConfigureUserDescriptorRequest
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    UserDescriptor^  UserDescriptor;
    
    public: ConfigureUserDescriptorRequest();
    public: ConfigureUserDescriptorRequest(UserDescriptor^  UserDescriptor);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"ConfigureUserDescriptorResponse", WrapperNamespace=L"http://www.zigbee.org/zgd/", 
IsWrapped=true)]
public ref class ConfigureUserDescriptorResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: ConfigureUserDescriptorResponse();
    public: ConfigureUserDescriptorResponse(System::Byte Status);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"ConfigureEndpoint", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class ConfigureEndpointRequest
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    SimpleDescriptor^  SimpleDescriptor;
    
    public: ConfigureEndpointRequest();
    public: ConfigureEndpointRequest(SimpleDescriptor^  SimpleDescriptor);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"ConfigureEndpointResponse", WrapperNamespace=L"http://www.zigbee.org/zgd/", 
IsWrapped=true)]
public ref class ConfigureEndpointResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: ConfigureEndpointResponse();
    public: ConfigureEndpointResponse(System::Byte Status);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"ClearEndpoint", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class ClearEndpointRequest
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Endpoint;
    
    public: ClearEndpointRequest();
    public: ClearEndpointRequest(System::Byte Endpoint);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"ClearEndpointResponse", WrapperNamespace=L"http://www.zigbee.org/zgd/", 
IsWrapped=true)]
public ref class ClearEndpointResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: ClearEndpointResponse();
    public: ClearEndpointResponse(System::Byte Status);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"SendAPSMessage", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class SendAPSMessageRequest
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    APSMessage^  Request;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::UInt32 Timeout;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=2)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::String^  CallbackDestination;
    
    public: SendAPSMessageRequest();
    public: SendAPSMessageRequest(APSMessage^  Request, System::UInt32 Timeout, System::String^  CallbackDestination);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"SendAPSMessageResponse", WrapperNamespace=L"http://www.zigbee.org/zgd/", 
IsWrapped=true)]
public ref class SendAPSMessageResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified, DataType=L"hexBinary")]
    cli::array< System::Byte >^  RequestIdentifier;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=2)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte ConfirmStatus;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=3)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::UInt32 TxTime;
    
    public: SendAPSMessageResponse();
    public: SendAPSMessageResponse(System::Byte Status, cli::array< System::Byte >^  RequestIdentifier, System::Byte ConfirmStatus, 
                System::UInt32 TxTime);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"AddGroup", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class AddGroupRequest
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    Group^  Group;
    
    public: AddGroupRequest();
    public: AddGroupRequest(Group^  Group);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"AddGroupResponse", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class AddGroupResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: AddGroupResponse();
    public: AddGroupResponse(System::Byte Status);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"RemoveGroup", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class RemoveGroupRequest
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    Group^  Group;
    
    public: RemoveGroupRequest();
    public: RemoveGroupRequest(Group^  Group);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"RemoveGroupResponse", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class RemoveGroupResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: RemoveGroupResponse();
    public: RemoveGroupResponse(System::Byte Status);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"RemoveAllGroups", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class RemoveAllGroupsRequest
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Endpoint;
    
    public: RemoveAllGroupsRequest();
    public: RemoveAllGroupsRequest(System::Byte Endpoint);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"RemoveAllGroupsResponse", WrapperNamespace=L"http://www.zigbee.org/zgd/", 
IsWrapped=true)]
public ref class RemoveAllGroupsResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: RemoveAllGroupsResponse();
    public: RemoveAllGroupsResponse(System::Byte Status);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"GetGroupList", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class GetGroupListRequest
{
    
    public: GetGroupListRequest();};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"GetGroupListResponse", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class GetGroupListResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlArrayAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    [System::Xml::Serialization::XmlArrayItemAttribute(Namespace=L"http://www.zigbee.org/GWGSchema", IsNullable=false)]
    cli::array< Group^  >^  GroupList;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=2)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::UInt32 GroupCount;
    
    public: GetGroupListResponse();
    public: GetGroupListResponse(System::Byte Status, cli::array< Group^  >^  GroupList, System::UInt32 GroupCount);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"GetBindingList", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class GetBindingListRequest
{
    
    public: GetBindingListRequest();};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"GetBindingListResponse", WrapperNamespace=L"http://www.zigbee.org/zgd/", 
IsWrapped=true)]
public ref class GetBindingListResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlArrayAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    [System::Xml::Serialization::XmlArrayItemAttribute(Namespace=L"http://www.zigbee.org/GWGSchema", IsNullable=false)]
    cli::array< Binding^  >^  BindingList;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=2)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::UInt32 BindingCount;
    
    public: GetBindingListResponse();
    public: GetBindingListResponse(System::Byte Status, cli::array< Binding^  >^  BindingList, System::UInt32 BindingCount);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"GetNodeDescriptor", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class GetNodeDescriptorRequest
{
    
    public: GetNodeDescriptorRequest();};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"GetNodeDescriptorResponse", WrapperNamespace=L"http://www.zigbee.org/zgd/", 
IsWrapped=true)]
public ref class GetNodeDescriptorResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    NodeDescriptor^  NodeDescriptor;
    
    public: GetNodeDescriptorResponse();
    public: GetNodeDescriptorResponse(System::Byte Status, NodeDescriptor^  NodeDescriptor);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"GetNodePowerDescriptor", WrapperNamespace=L"http://www.zigbee.org/zgd/", 
IsWrapped=true)]
public ref class GetNodePowerDescriptorRequest
{
    
    public: GetNodePowerDescriptorRequest();};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"GetNodePowerDescriptorResponse", WrapperNamespace=L"http://www.zigbee.org/zgd/", 
IsWrapped=true)]
public ref class GetNodePowerDescriptorResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    PowerDescriptor^  PowerDescriptor;
    
    public: GetNodePowerDescriptorResponse();
    public: GetNodePowerDescriptorResponse(System::Byte Status, PowerDescriptor^  PowerDescriptor);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"GetUserDescriptor", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class GetUserDescriptorRequest
{
    
    public: GetUserDescriptorRequest();};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"GetUserDescriptorResponse", WrapperNamespace=L"http://www.zigbee.org/zgd/", 
IsWrapped=true)]
public ref class GetUserDescriptorResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    UserDescriptor^  UserDescriptor;
    
    public: GetUserDescriptorResponse();
    public: GetUserDescriptorResponse(System::Byte Status, UserDescriptor^  UserDescriptor);};

[System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0")]
public interface class apsChannel : public aps, public System::ServiceModel::IClientChannel
{
};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0")]
public ref class apsClient : public System::ServiceModel::ClientBase<aps^ >, public aps
{
    
    public: apsClient();
    public: apsClient(System::String^  endpointConfigurationName);
    public: apsClient(System::String^  endpointConfigurationName, System::String^  remoteAddress);
    public: apsClient(System::String^  endpointConfigurationName, System::ServiceModel::EndpointAddress^  remoteAddress);
    public: apsClient(System::ServiceModel::Channels::Binding^  binding, System::ServiceModel::EndpointAddress^  remoteAddress);
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual ConfigureNodeDescriptorResponse^  __aps__ConfigureNodeDescriptor(ConfigureNodeDescriptorRequest^  request) sealed = aps::ConfigureNodeDescriptor;
    
    public: System::Byte ConfigureNodeDescriptor(NodeDescriptor^  NodeDescriptor);
    
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual ConfigureUserDescriptorResponse^  __aps__ConfigureUserDescriptor(ConfigureUserDescriptorRequest^  request) sealed = aps::ConfigureUserDescriptor;
    
    public: System::Byte ConfigureUserDescriptor(UserDescriptor^  UserDescriptor);
    
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual ConfigureEndpointResponse^  __aps__ConfigureEndpoint(ConfigureEndpointRequest^  request) sealed = aps::ConfigureEndpoint;
    
    public: System::Byte ConfigureEndpoint(SimpleDescriptor^  SimpleDescriptor);
    
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual ClearEndpointResponse^  __aps__ClearEndpoint(ClearEndpointRequest^  request) sealed = aps::ClearEndpoint;
    
    public: System::Byte ClearEndpoint(System::Byte Endpoint);
    
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual SendAPSMessageResponse^  __aps__SendAPSMessage(SendAPSMessageRequest^  request) sealed = aps::SendAPSMessage;
    
    public: System::Byte SendAPSMessage(
                APSMessage^  Request, 
                System::UInt32 Timeout, 
                System::String^  CallbackDestination, 
                cli::array< System::Byte >^  %RequestIdentifier, 
                System::Byte %ConfirmStatus, 
                System::UInt32 %TxTime);
    
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual AddGroupResponse^  __aps__AddGroup(AddGroupRequest^  request) sealed = aps::AddGroup;
    
    public: System::Byte AddGroup(Group^  Group);
    
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual RemoveGroupResponse^  __aps__RemoveGroup(RemoveGroupRequest^  request) sealed = aps::RemoveGroup;
    
    public: System::Byte RemoveGroup(Group^  Group);
    
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual RemoveAllGroupsResponse^  __aps__RemoveAllGroups(RemoveAllGroupsRequest^  request) sealed = aps::RemoveAllGroups;
    
    public: System::Byte RemoveAllGroups(System::Byte Endpoint);
    
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual GetGroupListResponse^  __aps__GetGroupList(GetGroupListRequest^  request) sealed = aps::GetGroupList;
    
    public: System::Byte GetGroupList(cli::array< Group^  >^  %GroupList, System::UInt32 %GroupCount);
    
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual GetBindingListResponse^  __aps__GetBindingList(GetBindingListRequest^  request) sealed = aps::GetBindingList;
    
    public: System::Byte GetBindingList(cli::array< Binding^  >^  %BindingList, System::UInt32 %BindingCount);
    
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual GetNodeDescriptorResponse^  __aps__GetNodeDescriptor(GetNodeDescriptorRequest^  request) sealed = aps::GetNodeDescriptor;
    
    public: System::Byte GetNodeDescriptor(NodeDescriptor^  %NodeDescriptor);
    
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual GetNodePowerDescriptorResponse^  __aps__GetNodePowerDescriptor(GetNodePowerDescriptorRequest^  request) sealed = aps::GetNodePowerDescriptor;
    
    public: System::Byte GetNodePowerDescriptor(PowerDescriptor^  %PowerDescriptor);
    
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual GetUserDescriptorResponse^  __aps__GetUserDescriptor(GetUserDescriptorRequest^  request) sealed = aps::GetUserDescriptor;
    
    public: System::Byte GetUserDescriptor(UserDescriptor^  %UserDescriptor);
};

[System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ServiceModel::ServiceContractAttribute(Namespace=L"http://www.zigbee.org/zgd/", ConfigurationName=L"apsEvent")]
public interface class apsEvent
{
    
    // CODEGEN: Контракт генерации сообщений с именем Message из пространства имен  не отмечен как обнуляемый
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/NotifyAPSMessageEvent", ReplyAction=L"*")]
    NotifyAPSMessageEventResponse^  NotifyAPSMessageEvent(NotifyAPSMessageEventRequest^  request);
    
    // CODEGEN: Контракт генерации сообщений с именем RequestIdentifier из пространства имен  не отмечен как обнуляемый
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/NotifySendAPSMessageEvent", ReplyAction=L"*")]
    NotifySendAPSMessageEventResponse^  NotifySendAPSMessageEvent(NotifySendAPSMessageEventRequest^  request);
};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(IsWrapped=false)]
public ref class NotifyAPSMessageEventRequest
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Name=L"NotifyAPSMessageEvent", Namespace=L"http://www.zigbee.org/zgd/", 
        Order=0)]
    NotifyAPSMessageEventRequestBody^  Body;
    
    public: NotifyAPSMessageEventRequest();
    public: NotifyAPSMessageEventRequest(NotifyAPSMessageEventRequestBody^  Body);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::Runtime::Serialization::DataContractAttribute(Namespace=L"")]
public ref class NotifyAPSMessageEventRequestBody
{
    
    public: [System::Runtime::Serialization::DataMemberAttribute(EmitDefaultValue=false, Order=0)]
    www::zigbee::org::GWGSchema::APSMessageEvent^  Message;
    
    public: NotifyAPSMessageEventRequestBody();
    public: NotifyAPSMessageEventRequestBody(www::zigbee::org::GWGSchema::APSMessageEvent^  Message);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(IsWrapped=false)]
public ref class NotifyAPSMessageEventResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Name=L"NotifyAPSMessageEventResponse", Namespace=L"http://www.zigbee.org/zgd/", 
        Order=0)]
    NotifyAPSMessageEventResponseBody^  Body;
    
    public: NotifyAPSMessageEventResponse();
    public: NotifyAPSMessageEventResponse(NotifyAPSMessageEventResponseBody^  Body);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::Runtime::Serialization::DataContractAttribute(Namespace=L"")]
public ref class NotifyAPSMessageEventResponseBody
{
    
    public: [System::Runtime::Serialization::DataMemberAttribute(Order=0)]
    System::Byte Status;
    
    public: NotifyAPSMessageEventResponseBody();
    public: NotifyAPSMessageEventResponseBody(System::Byte Status);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(IsWrapped=false)]
public ref class NotifySendAPSMessageEventRequest
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Name=L"NotifySendAPSMessageEvent", Namespace=L"http://www.zigbee.org/zgd/", 
        Order=0)]
    NotifySendAPSMessageEventRequestBody^  Body;
    
    public: NotifySendAPSMessageEventRequest();
    public: NotifySendAPSMessageEventRequest(NotifySendAPSMessageEventRequestBody^  Body);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::Runtime::Serialization::DataContractAttribute(Namespace=L"")]
public ref class NotifySendAPSMessageEventRequestBody
{
    
    public: [System::Runtime::Serialization::DataMemberAttribute(Order=0)]
    System::Byte Status;
    
    public: [System::Runtime::Serialization::DataMemberAttribute(EmitDefaultValue=false, Order=1)]
    System::String^  RequestIdentifier;
    
    public: [System::Runtime::Serialization::DataMemberAttribute(Order=2)]
    System::Byte ConfirmStatus;
    
    public: [System::Runtime::Serialization::DataMemberAttribute(Order=3)]
    System::UInt32 TxTime;
    
    public: NotifySendAPSMessageEventRequestBody();
    public: NotifySendAPSMessageEventRequestBody(System::Byte Status, System::String^  RequestIdentifier, System::Byte ConfirmStatus, 
                System::UInt32 TxTime);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(IsWrapped=false)]
public ref class NotifySendAPSMessageEventResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Name=L"NotifySendAPSMessageEventResponse", Namespace=L"http://www.zigbee.org/zgd/", 
        Order=0)]
    NotifySendAPSMessageEventResponseBody^  Body;
    
    public: NotifySendAPSMessageEventResponse();
    public: NotifySendAPSMessageEventResponse(NotifySendAPSMessageEventResponseBody^  Body);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::Runtime::Serialization::DataContractAttribute(Namespace=L"")]
public ref class NotifySendAPSMessageEventResponseBody
{
    
    public: [System::Runtime::Serialization::DataMemberAttribute(Order=0)]
    System::Byte Status;
    
    public: NotifySendAPSMessageEventResponseBody();
    public: NotifySendAPSMessageEventResponseBody(System::Byte Status);};

[System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0")]
public interface class apsEventChannel : public apsEvent, public System::ServiceModel::IClientChannel
{
};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0")]
public ref class apsEventClient : public System::ServiceModel::ClientBase<apsEvent^ >, public apsEvent
{
    
    public: apsEventClient();
    public: apsEventClient(System::String^  endpointConfigurationName);
    public: apsEventClient(System::String^  endpointConfigurationName, System::String^  remoteAddress);
    public: apsEventClient(System::String^  endpointConfigurationName, System::ServiceModel::EndpointAddress^  remoteAddress);
    public: apsEventClient(System::ServiceModel::Channels::Binding^  binding, System::ServiceModel::EndpointAddress^  remoteAddress);
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual NotifyAPSMessageEventResponse^  __apsEvent__NotifyAPSMessageEvent(NotifyAPSMessageEventRequest^  request) sealed = apsEvent::NotifyAPSMessageEvent;
    
    public: System::Byte NotifyAPSMessageEvent(www::zigbee::org::GWGSchema::APSMessageEvent^  Message);
    
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual NotifySendAPSMessageEventResponse^  __apsEvent__NotifySendAPSMessageEvent(NotifySendAPSMessageEventRequest^  request) sealed = apsEvent::NotifySendAPSMessageEvent;
    
    public: System::Void NotifySendAPSMessageEvent(System::Byte %Status, System::String^  RequestIdentifier, System::Byte ConfirmStatus, 
                System::UInt32 TxTime);
};

[System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ServiceModel::ServiceContractAttribute(Namespace=L"http://www.zigbee.org/zgd/", ConfigurationName=L"nwk")]
public interface class nwk
{
    
    // CODEGEN: Параметр "Status" требует дополнительной информации о схеме, которую невозможно получить в режиме параметров. Указан атрибут "System.Xml.Serialization.XmlElementAttribute".
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/FormNetwork", ReplyAction=L"*")]
    [System::ServiceModel::XmlSerializerFormatAttribute]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< Level >::typeid)]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< DecodeLevel >::typeid)]
    [returnvalue: System::ServiceModel::MessageParameterAttribute(Name=L"Status")]
    FormNetworkResponse^  FormNetwork(FormNetworkRequest^  request);
    
    // CODEGEN: Параметр "Status" требует дополнительной информации о схеме, которую невозможно получить в режиме параметров. Указан атрибут "System.Xml.Serialization.XmlElementAttribute".
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/StartRouter", ReplyAction=L"*")]
    [System::ServiceModel::XmlSerializerFormatAttribute]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< Level >::typeid)]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< DecodeLevel >::typeid)]
    [returnvalue: System::ServiceModel::MessageParameterAttribute(Name=L"Status")]
    StartRouterResponse^  StartRouter(StartRouterRequest^  request);
    
    // CODEGEN: Параметр "Status" требует дополнительной информации о схеме, которую невозможно получить в режиме параметров. Указан атрибут "System.Xml.Serialization.XmlElementAttribute".
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/Join", ReplyAction=L"*")]
    [System::ServiceModel::XmlSerializerFormatAttribute]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< Level >::typeid)]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< DecodeLevel >::typeid)]
    [returnvalue: System::ServiceModel::MessageParameterAttribute(Name=L"Status")]
    JoinResponse^  Join(JoinRequest^  request);
    
    // CODEGEN: Параметр "Status" требует дополнительной информации о схеме, которую невозможно получить в режиме параметров. Указан атрибут "System.Xml.Serialization.XmlElementAttribute".
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/Leave", ReplyAction=L"*")]
    [System::ServiceModel::XmlSerializerFormatAttribute]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< Level >::typeid)]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< DecodeLevel >::typeid)]
    [returnvalue: System::ServiceModel::MessageParameterAttribute(Name=L"Status")]
    LeaveResponse^  Leave(LeaveRequest^  request);
    
    // CODEGEN: Параметр "Status" требует дополнительной информации о схеме, которую невозможно получить в режиме параметров. Указан атрибут "System.Xml.Serialization.XmlElementAttribute".
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/DiscoverNetworks", ReplyAction=L"*")]
    [System::ServiceModel::XmlSerializerFormatAttribute]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< Level >::typeid)]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< DecodeLevel >::typeid)]
    [returnvalue: System::ServiceModel::MessageParameterAttribute(Name=L"Status")]
    DiscoverNetworksResponse^  DiscoverNetworks(DiscoverNetworksRequest^  request);
    
    // CODEGEN: Параметр "Status" требует дополнительной информации о схеме, которую невозможно получить в режиме параметров. Указан атрибут "System.Xml.Serialization.XmlElementAttribute".
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/Reset", ReplyAction=L"*")]
    [System::ServiceModel::XmlSerializerFormatAttribute]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< Level >::typeid)]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< DecodeLevel >::typeid)]
    [returnvalue: System::ServiceModel::MessageParameterAttribute(Name=L"Status")]
    ResetResponse^  Reset(ResetRequest^  request);
    
    // CODEGEN: Параметр "Status" требует дополнительной информации о схеме, которую невозможно получить в режиме параметров. Указан атрибут "System.Xml.Serialization.XmlElementAttribute".
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/PerformEnergyScan", ReplyAction=L"*")]
    [System::ServiceModel::XmlSerializerFormatAttribute]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< Level >::typeid)]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< DecodeLevel >::typeid)]
    [returnvalue: System::ServiceModel::MessageParameterAttribute(Name=L"Status")]
    PerformEnergyScanResponse^  PerformEnergyScan(PerformEnergyScanRequest^  request);
    
    // CODEGEN: Параметр "Status" требует дополнительной информации о схеме, которую невозможно получить в режиме параметров. Указан атрибут "System.Xml.Serialization.XmlElementAttribute".
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/PerformRouteDiscovery", ReplyAction=L"*")]
    [System::ServiceModel::XmlSerializerFormatAttribute]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< Level >::typeid)]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< DecodeLevel >::typeid)]
    [returnvalue: System::ServiceModel::MessageParameterAttribute(Name=L"Status")]
    PerformRouteDiscoveryResponse^  PerformRouteDiscovery(PerformRouteDiscoveryRequest^  request);
    
    // CODEGEN: Параметр "Status" требует дополнительной информации о схеме, которую невозможно получить в режиме параметров. Указан атрибут "System.Xml.Serialization.XmlElementAttribute".
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/SendNWKCommand", ReplyAction=L"*")]
    [System::ServiceModel::XmlSerializerFormatAttribute]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< Level >::typeid)]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< DecodeLevel >::typeid)]
    [returnvalue: System::ServiceModel::MessageParameterAttribute(Name=L"Status")]
    SendNWKCommandResponse^  SendNWKCommand(SendNWKCommandRequest^  request);
};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"FormNetwork", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class FormNetworkRequest
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    NetworkConfiguration^  NetworkConfiguration;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::UInt32 Timeout;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=2)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::String^  CallbackDestination;
    
    public: FormNetworkRequest();
    public: FormNetworkRequest(NetworkConfiguration^  NetworkConfiguration, System::UInt32 Timeout, System::String^  CallbackDestination);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"FormNetworkResponse", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class FormNetworkResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified, DataType=L"hexBinary")]
    cli::array< System::Byte >^  RequestIdentifier;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=2)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    NetworkStatusCode^  NWKStatus;
    
    public: FormNetworkResponse();
    public: FormNetworkResponse(System::Byte Status, cli::array< System::Byte >^  RequestIdentifier, NetworkStatusCode^  NWKStatus);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"StartRouter", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class StartRouterRequest
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::UInt32 Timeout;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::String^  CallBackDestination;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=2)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    NetworkConfiguration^  NetworkConfiguration;
    
    public: StartRouterRequest();
    public: StartRouterRequest(System::UInt32 Timeout, System::String^  CallBackDestination, NetworkConfiguration^  NetworkConfiguration);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"StartRouterResponse", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class StartRouterResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    NetworkStatusCode^  NWKStatus;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=2)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified, DataType=L"hexBinary")]
    cli::array< System::Byte >^  RequestIdentifier;
    
    public: StartRouterResponse();
    public: StartRouterResponse(System::Byte Status, NetworkStatusCode^  NWKStatus, cli::array< System::Byte >^  RequestIdentifier);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"Join", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class JoinRequest
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::UInt32 Timeout;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    JoinConfiguration^  Options;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=2)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::String^  CallbackDestination;
    
    public: JoinRequest();
    public: JoinRequest(System::UInt32 Timeout, JoinConfiguration^  Options, System::String^  CallbackDestination);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"JoinResponse", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class JoinResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    NetworkStatusCode^  NWKStatus;
    
    public: JoinResponse();
    public: JoinResponse(System::Byte Status, NetworkStatusCode^  NWKStatus);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"Leave", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class LeaveRequest
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::UInt32 Timeout;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::String^  CallbackDestination;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=2)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    Address^  DeviceAddress;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=3)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Boolean RemoveChildren;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=4)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Boolean Rejoin;
    
    public: LeaveRequest();
    public: LeaveRequest(System::UInt32 Timeout, System::String^  CallbackDestination, Address^  DeviceAddress, System::Boolean RemoveChildren, 
                System::Boolean Rejoin);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"LeaveResponse", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class LeaveResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    NetworkStatusCode^  NWKStatus;
    
    public: LeaveResponse();
    public: LeaveResponse(System::Byte Status, NetworkStatusCode^  NWKStatus);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"DiscoverNetworks", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class DiscoverNetworksRequest
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::UInt32 Timeout;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::String^  CallbackDestination;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=2)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::String^  ScanChannels;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=3)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::String^  ScanDuration;
    
    public: DiscoverNetworksRequest();
    public: DiscoverNetworksRequest(System::UInt32 Timeout, System::String^  CallbackDestination, System::String^  ScanChannels, 
                System::String^  ScanDuration);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"DiscoverNetworksResponse", WrapperNamespace=L"http://www.zigbee.org/zgd/", 
IsWrapped=true)]
public ref class DiscoverNetworksResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified, DataType=L"hexBinary")]
    cli::array< System::Byte >^  RequestIdentifier;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=2)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    NetworkStatusCode^  NWKStatus;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=3)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    NetworkDescriptorList^  NetworkDescriptors;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=4)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::UInt32 NetworkCount;
    
    public: DiscoverNetworksResponse();
    public: DiscoverNetworksResponse(System::Byte Status, cli::array< System::Byte >^  RequestIdentifier, NetworkStatusCode^  NWKStatus, 
                NetworkDescriptorList^  NetworkDescriptors, System::UInt32 NetworkCount);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"Reset", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class ResetRequest
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::UInt32 Timeout;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::String^  CallbackDestination;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=2)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Boolean WarmStart;
    
    public: ResetRequest();
    public: ResetRequest(System::UInt32 Timeout, System::String^  CallbackDestination, System::Boolean WarmStart);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"ResetResponse", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class ResetResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified, DataType=L"hexBinary")]
    cli::array< System::Byte >^  RequestIdentifier;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=2)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    NetworkStatusCode^  NWKStatus;
    
    public: ResetResponse();
    public: ResetResponse(System::Byte Status, cli::array< System::Byte >^  RequestIdentifier, NetworkStatusCode^  NWKStatus);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"PerformEnergyScan", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class PerformEnergyScanRequest
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::UInt32 Timeout;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::String^  CallbackDestination;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=2)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::UInt32 ScanChannels;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=3)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte ScanDuration;
    
    public: PerformEnergyScanRequest();
    public: PerformEnergyScanRequest(System::UInt32 Timeout, System::String^  CallbackDestination, System::UInt32 ScanChannels, 
                System::Byte ScanDuration);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"PerformEnergyScanResponse", WrapperNamespace=L"http://www.zigbee.org/zgd/", 
IsWrapped=true)]
public ref class PerformEnergyScanResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified, DataType=L"hexBinary")]
    cli::array< System::Byte >^  RequestIdentifier;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=2)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    NetworkStatusCode^  NWKStatus;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=3)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::UInt32 ScanChannels;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=4)]
    [System::Xml::Serialization::XmlElementAttribute(L"EnergyDetectedList", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    cli::array< EnergyScanResult^  >^  EnergyDetectedList;
    
    public: PerformEnergyScanResponse();
    public: PerformEnergyScanResponse(System::Byte Status, cli::array< System::Byte >^  RequestIdentifier, NetworkStatusCode^  NWKStatus, 
                System::UInt32 ScanChannels, cli::array< EnergyScanResult^  >^  EnergyDetectedList);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"PerformRouteDiscovery", WrapperNamespace=L"http://www.zigbee.org/zgd/", 
IsWrapped=true)]
public ref class PerformRouteDiscoveryRequest
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::UInt32 Timeout;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::String^  CallbackDestination;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=2)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    RouteDiscoveryInfo^  Request;
    
    public: PerformRouteDiscoveryRequest();
    public: PerformRouteDiscoveryRequest(System::UInt32 Timeout, System::String^  CallbackDestination, RouteDiscoveryInfo^  Request);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"PerformRouteDiscoveryResponse", WrapperNamespace=L"http://www.zigbee.org/zgd/", 
IsWrapped=true)]
public ref class PerformRouteDiscoveryResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified, DataType=L"hexBinary")]
    cli::array< System::Byte >^  RequestIdentifier;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=2)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    NetworkStatusCode^  NWKStatus;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=3)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    NetworkStatusCode^  NetworkStatusCode;
    
    public: PerformRouteDiscoveryResponse();
    public: PerformRouteDiscoveryResponse(System::Byte Status, cli::array< System::Byte >^  RequestIdentifier, NetworkStatusCode^  NWKStatus, 
                NetworkStatusCode^  NetworkStatusCode);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"SendNWKCommand", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class SendNWKCommandRequest
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::UInt32 Timeout;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::String^  CallbackDestination;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=2)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    NWKMessageEvent^  Message;
    
    public: SendNWKCommandRequest();
    public: SendNWKCommandRequest(System::UInt32 Timeout, System::String^  CallbackDestination, NWKMessageEvent^  Message);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"SendNWKCommandResponse", WrapperNamespace=L"http://www.zigbee.org/zgd/", 
IsWrapped=true)]
public ref class SendNWKCommandResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    NWKMessageResult^  Message;
    
    public: SendNWKCommandResponse();
    public: SendNWKCommandResponse(System::Byte Status, NWKMessageResult^  Message);};

[System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0")]
public interface class nwkChannel : public nwk, public System::ServiceModel::IClientChannel
{
};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0")]
public ref class nwkClient : public System::ServiceModel::ClientBase<nwk^ >, public nwk
{
    
    public: nwkClient();
    public: nwkClient(System::String^  endpointConfigurationName);
    public: nwkClient(System::String^  endpointConfigurationName, System::String^  remoteAddress);
    public: nwkClient(System::String^  endpointConfigurationName, System::ServiceModel::EndpointAddress^  remoteAddress);
    public: nwkClient(System::ServiceModel::Channels::Binding^  binding, System::ServiceModel::EndpointAddress^  remoteAddress);
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual FormNetworkResponse^  __nwk__FormNetwork(FormNetworkRequest^  request) sealed = nwk::FormNetwork;
    
    public: System::Byte FormNetwork(NetworkConfiguration^  NetworkConfiguration, System::UInt32 Timeout, System::String^  CallbackDestination, 
                cli::array< System::Byte >^  %RequestIdentifier, NetworkStatusCode^  %NWKStatus);
    
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual StartRouterResponse^  __nwk__StartRouter(StartRouterRequest^  request) sealed = nwk::StartRouter;
    
    public: System::Byte StartRouter(System::UInt32 Timeout, System::String^  CallBackDestination, NetworkConfiguration^  NetworkConfiguration, 
                NetworkStatusCode^  %NWKStatus, cli::array< System::Byte >^  %RequestIdentifier);
    
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual JoinResponse^  __nwk__Join(JoinRequest^  request) sealed = nwk::Join;
    
    public: System::Byte Join(System::UInt32 Timeout, JoinConfiguration^  Options, System::String^  CallbackDestination, 
                NetworkStatusCode^  %NWKStatus);
    
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual LeaveResponse^  __nwk__Leave(LeaveRequest^  request) sealed = nwk::Leave;
    
    public: System::Byte Leave(
                System::UInt32 Timeout, 
                System::String^  CallbackDestination, 
                Address^  DeviceAddress, 
                System::Boolean RemoveChildren, 
                System::Boolean Rejoin, 
                NetworkStatusCode^  %NWKStatus);
    
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual DiscoverNetworksResponse^  __nwk__DiscoverNetworks(DiscoverNetworksRequest^  request) sealed = nwk::DiscoverNetworks;
    
    public: System::Byte DiscoverNetworks(
                System::UInt32 Timeout, 
                System::String^  CallbackDestination, 
                System::String^  ScanChannels, 
                System::String^  ScanDuration, 
                cli::array< System::Byte >^  %RequestIdentifier, 
                NetworkStatusCode^  %NWKStatus, 
                NetworkDescriptorList^  %NetworkDescriptors, 
                System::UInt32 %NetworkCount);
    
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual ResetResponse^  __nwk__Reset(ResetRequest^  request) sealed = nwk::Reset;
    
    public: System::Byte Reset(System::UInt32 Timeout, System::String^  CallbackDestination, System::Boolean WarmStart, cli::array< System::Byte >^  %RequestIdentifier, 
                NetworkStatusCode^  %NWKStatus);
    
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual PerformEnergyScanResponse^  __nwk__PerformEnergyScan(PerformEnergyScanRequest^  request) sealed = nwk::PerformEnergyScan;
    
    public: System::Byte PerformEnergyScan(
                System::UInt32 Timeout, 
                System::String^  CallbackDestination, 
                System::UInt32 %ScanChannels, 
                System::Byte ScanDuration, 
                cli::array< System::Byte >^  %RequestIdentifier, 
                NetworkStatusCode^  %NWKStatus, 
                cli::array< EnergyScanResult^  >^  %EnergyDetectedList);
    
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual PerformRouteDiscoveryResponse^  __nwk__PerformRouteDiscovery(PerformRouteDiscoveryRequest^  request) sealed = nwk::PerformRouteDiscovery;
    
    public: System::Byte PerformRouteDiscovery(
                System::UInt32 Timeout, 
                System::String^  CallbackDestination, 
                RouteDiscoveryInfo^  Request, 
                cli::array< System::Byte >^  %RequestIdentifier, 
                NetworkStatusCode^  %NWKStatus, 
                NetworkStatusCode^  %NetworkStatusCode);
    
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual SendNWKCommandResponse^  __nwk__SendNWKCommand(SendNWKCommandRequest^  request) sealed = nwk::SendNWKCommand;
    
    public: System::Byte SendNWKCommand(System::UInt32 Timeout, System::String^  CallbackDestination, NWKMessageEvent^  Message, 
                NWKMessageResult^  %Message1);
};

[System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ServiceModel::ServiceContractAttribute(Namespace=L"http://www.zigbee.org/zgd/", ConfigurationName=L"nwkEvent")]
public interface class nwkEvent
{
    
    // CODEGEN: Параметр "Status" требует дополнительной информации о схеме, которую невозможно получить в режиме параметров. Указан атрибут "System.Xml.Serialization.XmlElementAttribute".
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/FormNetworkEvent", ReplyAction=L"*")]
    [System::ServiceModel::XmlSerializerFormatAttribute]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< Level >::typeid)]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< DecodeLevel >::typeid)]
    FormNetworkEventResponse^  FormNetworkEvent(FormNetworkEventRequest^  request);
    
    // CODEGEN: Параметр "Status" требует дополнительной информации о схеме, которую невозможно получить в режиме параметров. Указан атрибут "System.Xml.Serialization.XmlElementAttribute".
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/JoinEvent", ReplyAction=L"*")]
    [System::ServiceModel::XmlSerializerFormatAttribute]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< Level >::typeid)]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< DecodeLevel >::typeid)]
    JoinEventResponse^  JoinEvent(JoinEventRequest^  request);
    
    // CODEGEN: Параметр "Status" требует дополнительной информации о схеме, которую невозможно получить в режиме параметров. Указан атрибут "System.Xml.Serialization.XmlElementAttribute".
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/DiscoverNetworksEvent", ReplyAction=L"*")]
    [System::ServiceModel::XmlSerializerFormatAttribute]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< Level >::typeid)]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< DecodeLevel >::typeid)]
    DiscoverNetworksEventResponse^  DiscoverNetworksEvent(DiscoverNetworksEventRequest^  request);
    
    // CODEGEN: Параметр "Status" требует дополнительной информации о схеме, которую невозможно получить в режиме параметров. Указан атрибут "System.Xml.Serialization.XmlElementAttribute".
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/PerformEnergyScanEvent", ReplyAction=L"*")]
    [System::ServiceModel::XmlSerializerFormatAttribute]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< Level >::typeid)]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< DecodeLevel >::typeid)]
    PerformEnergyScanEventResponse^  PerformEnergyScanEvent(PerformEnergyScanEventRequest^  request);
    
    // CODEGEN: Параметр "Status" требует дополнительной информации о схеме, которую невозможно получить в режиме параметров. Указан атрибут "System.Xml.Serialization.XmlElementAttribute".
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/NetworkStatusEvent", ReplyAction=L"*")]
    [System::ServiceModel::XmlSerializerFormatAttribute]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< Level >::typeid)]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< DecodeLevel >::typeid)]
    NetworkStatusEventResponse^  NetworkStatusEvent(NetworkStatusEventRequest^  request);
    
    // CODEGEN: Параметр "Status" требует дополнительной информации о схеме, которую невозможно получить в режиме параметров. Указан атрибут "System.Xml.Serialization.XmlElementAttribute".
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/PerformRouteDiscoveryEvent", ReplyAction=L"*")]
    [System::ServiceModel::XmlSerializerFormatAttribute]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< Level >::typeid)]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< DecodeLevel >::typeid)]
    PerformRouteDiscoveryEventResponse^  PerformRouteDiscoveryEvent(PerformRouteDiscoveryEventRequest^  request);
    
    // CODEGEN: Параметр "Status" требует дополнительной информации о схеме, которую невозможно получить в режиме параметров. Указан атрибут "System.Xml.Serialization.XmlElementAttribute".
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/StartRouterEvent", ReplyAction=L"*")]
    [System::ServiceModel::XmlSerializerFormatAttribute]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< Level >::typeid)]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< DecodeLevel >::typeid)]
    StartRouterEventResponse^  StartRouterEvent(StartRouterEventRequest^  request);
    
    // CODEGEN: Параметр "Status" требует дополнительной информации о схеме, которую невозможно получить в режиме параметров. Указан атрибут "System.Xml.Serialization.XmlElementAttribute".
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/LeaveEvent", ReplyAction=L"*")]
    [System::ServiceModel::XmlSerializerFormatAttribute]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< Level >::typeid)]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< DecodeLevel >::typeid)]
    LeaveEventResponse^  LeaveEvent(LeaveEventRequest^  request);
    
    // CODEGEN: Параметр "Status" требует дополнительной информации о схеме, которую невозможно получить в режиме параметров. Указан атрибут "System.Xml.Serialization.XmlElementAttribute".
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/ResetEvent", ReplyAction=L"*")]
    [System::ServiceModel::XmlSerializerFormatAttribute]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< Level >::typeid)]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< DecodeLevel >::typeid)]
    ResetEventResponse^  ResetEvent(ResetEventRequest^  request);
    
    // CODEGEN: Параметр "Status" требует дополнительной информации о схеме, которую невозможно получить в режиме параметров. Указан атрибут "System.Xml.Serialization.XmlElementAttribute".
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/NotifyNWKMessageEvent", ReplyAction=L"*")]
    [System::ServiceModel::XmlSerializerFormatAttribute]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< Level >::typeid)]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< DecodeLevel >::typeid)]
    NotifyNWKMessageEventResponse^  NotifyNWKMessageEvent(NotifyNWKMessageEventRequest^  request);
};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"FormNetworkEvent", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class FormNetworkEventRequest
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified, DataType=L"hexBinary")]
    cli::array< System::Byte >^  RequestIdentifier;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=2)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    NetworkStatusCode^  NWKStatus;
    
    public: FormNetworkEventRequest();
    public: FormNetworkEventRequest(System::Byte Status, cli::array< System::Byte >^  RequestIdentifier, NetworkStatusCode^  NWKStatus);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"FormNetworkEventResponse", WrapperNamespace=L"http://www.zigbee.org/zgd/", 
IsWrapped=true)]
public ref class FormNetworkEventResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: FormNetworkEventResponse();
    public: FormNetworkEventResponse(System::Byte Status);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"JoinEvent", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class JoinEventRequest
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    NetworkStatusCode^  NWKStatus;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=2)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified, DataType=L"hexBinary")]
    cli::array< System::Byte >^  RequestIdentifier;
    
    public: JoinEventRequest();
    public: JoinEventRequest(System::Byte Status, NetworkStatusCode^  NWKStatus, cli::array< System::Byte >^  RequestIdentifier);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"JoinEventResponse", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class JoinEventResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: JoinEventResponse();
    public: JoinEventResponse(System::Byte Status);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"DiscoverNetworksEvent", WrapperNamespace=L"http://www.zigbee.org/zgd/", 
IsWrapped=true)]
public ref class DiscoverNetworksEventRequest
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified, DataType=L"hexBinary")]
    cli::array< System::Byte >^  RequestIdentifier;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=2)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    NetworkStatusCode^  NWKStatus;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=3)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    NetworkDescriptorList^  NetworkDescriptors;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=4)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::UInt32 NetworkCount;
    
    public: DiscoverNetworksEventRequest();
    public: DiscoverNetworksEventRequest(System::Byte Status, cli::array< System::Byte >^  RequestIdentifier, NetworkStatusCode^  NWKStatus, 
                NetworkDescriptorList^  NetworkDescriptors, System::UInt32 NetworkCount);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"DiscoverNetworksEventResponse", WrapperNamespace=L"http://www.zigbee.org/zgd/", 
IsWrapped=true)]
public ref class DiscoverNetworksEventResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: DiscoverNetworksEventResponse();
    public: DiscoverNetworksEventResponse(System::Byte Status);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"PerformEnergyScanEvent", WrapperNamespace=L"http://www.zigbee.org/zgd/", 
IsWrapped=true)]
public ref class PerformEnergyScanEventRequest
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified, DataType=L"hexBinary")]
    cli::array< System::Byte >^  RequestIdentifier;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=2)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    NetworkStatusCode^  NWKStatus;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=3)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::UInt32 ScanChannels;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=4)]
    [System::Xml::Serialization::XmlElementAttribute(L"EnergyDetectedList", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    cli::array< EnergyScanResult^  >^  EnergyDetectedList;
    
    public: PerformEnergyScanEventRequest();
    public: PerformEnergyScanEventRequest(System::Byte Status, cli::array< System::Byte >^  RequestIdentifier, NetworkStatusCode^  NWKStatus, 
                System::UInt32 ScanChannels, cli::array< EnergyScanResult^  >^  EnergyDetectedList);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"PerformEnergyScanEventResponse", WrapperNamespace=L"http://www.zigbee.org/zgd/", 
IsWrapped=true)]
public ref class PerformEnergyScanEventResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: PerformEnergyScanEventResponse();
    public: PerformEnergyScanEventResponse(System::Byte Status);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"NetworkStatusEvent", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class NetworkStatusEventRequest
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    NetworkStatusCode^  NWKStatus;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=2)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::UInt16 NetworkAddr;
    
    public: NetworkStatusEventRequest();
    public: NetworkStatusEventRequest(System::Byte Status, NetworkStatusCode^  NWKStatus, System::UInt16 NetworkAddr);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"NetworkStatusEventResponse", WrapperNamespace=L"http://www.zigbee.org/zgd/", 
IsWrapped=true)]
public ref class NetworkStatusEventResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: NetworkStatusEventResponse();
    public: NetworkStatusEventResponse(System::Byte Status);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"PerformRouteDiscoveryEvent", WrapperNamespace=L"http://www.zigbee.org/zgd/", 
IsWrapped=true)]
public ref class PerformRouteDiscoveryEventRequest
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified, DataType=L"hexBinary")]
    cli::array< System::Byte >^  RequestIdentifier;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=2)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    NetworkStatusCode^  NWKStatus;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=3)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    NetworkStatusCode^  NetworkStatusCode;
    
    public: PerformRouteDiscoveryEventRequest();
    public: PerformRouteDiscoveryEventRequest(System::Byte Status, cli::array< System::Byte >^  RequestIdentifier, NetworkStatusCode^  NWKStatus, 
                NetworkStatusCode^  NetworkStatusCode);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"PerformRouteDiscoveryEventResponse", WrapperNamespace=L"http://www.zigbee.org/zgd/", 
IsWrapped=true)]
public ref class PerformRouteDiscoveryEventResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: PerformRouteDiscoveryEventResponse();
    public: PerformRouteDiscoveryEventResponse(System::Byte Status);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"StartRouterEvent", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class StartRouterEventRequest
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    NetworkStatusCode^  NWKStatus;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=2)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified, DataType=L"hexBinary")]
    cli::array< System::Byte >^  RequestIdentifier;
    
    public: StartRouterEventRequest();
    public: StartRouterEventRequest(System::Byte Status, NetworkStatusCode^  NWKStatus, cli::array< System::Byte >^  RequestIdentifier);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"StartRouterEventResponse", WrapperNamespace=L"http://www.zigbee.org/zgd/", 
IsWrapped=true)]
public ref class StartRouterEventResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: StartRouterEventResponse();
    public: StartRouterEventResponse(System::Byte Status);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"LeaveEvent", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class LeaveEventRequest
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    NetworkStatusCode^  NWKStatus;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=2)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified, DataType=L"hexBinary")]
    cli::array< System::Byte >^  RequestIdentifier;
    
    public: LeaveEventRequest();
    public: LeaveEventRequest(System::Byte Status, NetworkStatusCode^  NWKStatus, cli::array< System::Byte >^  RequestIdentifier);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"LeaveEventResponse", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class LeaveEventResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: LeaveEventResponse();
    public: LeaveEventResponse(System::Byte Status);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"ResetEvent", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class ResetEventRequest
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified, DataType=L"hexBinary")]
    cli::array< System::Byte >^  RequestIdentifier;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=2)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    NetworkStatusCode^  NWKStatus;
    
    public: ResetEventRequest();
    public: ResetEventRequest(System::Byte Status, cli::array< System::Byte >^  RequestIdentifier, NetworkStatusCode^  NWKStatus);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"ResetEventResponse", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class ResetEventResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: ResetEventResponse();
    public: ResetEventResponse(System::Byte Status);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"NotifyNWKMessageEvent", WrapperNamespace=L"http://www.zigbee.org/zgd/", 
IsWrapped=true)]
public ref class NotifyNWKMessageEventRequest
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified, DataType=L"hexBinary")]
    cli::array< System::Byte >^  RequestIdentifier;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=2)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    NWKMessageEvent^  Message;
    
    public: NotifyNWKMessageEventRequest();
    public: NotifyNWKMessageEventRequest(System::Byte Status, cli::array< System::Byte >^  RequestIdentifier, NWKMessageEvent^  Message);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"NotifyNWKMessageEventResponse", WrapperNamespace=L"http://www.zigbee.org/zgd/", 
IsWrapped=true)]
public ref class NotifyNWKMessageEventResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: NotifyNWKMessageEventResponse();
    public: NotifyNWKMessageEventResponse(System::Byte Status);};

[System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0")]
public interface class nwkEventChannel : public nwkEvent, public System::ServiceModel::IClientChannel
{
};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0")]
public ref class nwkEventClient : public System::ServiceModel::ClientBase<nwkEvent^ >, public nwkEvent
{
    
    public: nwkEventClient();
    public: nwkEventClient(System::String^  endpointConfigurationName);
    public: nwkEventClient(System::String^  endpointConfigurationName, System::String^  remoteAddress);
    public: nwkEventClient(System::String^  endpointConfigurationName, System::ServiceModel::EndpointAddress^  remoteAddress);
    public: nwkEventClient(System::ServiceModel::Channels::Binding^  binding, System::ServiceModel::EndpointAddress^  remoteAddress);
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual FormNetworkEventResponse^  __nwkEvent__FormNetworkEvent(FormNetworkEventRequest^  request) sealed = nwkEvent::FormNetworkEvent;
    
    public: System::Void FormNetworkEvent(System::Byte %Status, cli::array< System::Byte >^  RequestIdentifier, NetworkStatusCode^  NWKStatus);
    
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual JoinEventResponse^  __nwkEvent__JoinEvent(JoinEventRequest^  request) sealed = nwkEvent::JoinEvent;
    
    public: System::Void JoinEvent(System::Byte %Status, NetworkStatusCode^  NWKStatus, cli::array< System::Byte >^  RequestIdentifier);
    
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual DiscoverNetworksEventResponse^  __nwkEvent__DiscoverNetworksEvent(DiscoverNetworksEventRequest^  request) sealed = nwkEvent::DiscoverNetworksEvent;
    
    public: System::Void DiscoverNetworksEvent(System::Byte %Status, cli::array< System::Byte >^  RequestIdentifier, NetworkStatusCode^  NWKStatus, 
                NetworkDescriptorList^  NetworkDescriptors, System::UInt32 NetworkCount);
    
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual PerformEnergyScanEventResponse^  __nwkEvent__PerformEnergyScanEvent(PerformEnergyScanEventRequest^  request) sealed = nwkEvent::PerformEnergyScanEvent;
    
    public: System::Void PerformEnergyScanEvent(System::Byte %Status, cli::array< System::Byte >^  RequestIdentifier, NetworkStatusCode^  NWKStatus, 
                System::UInt32 ScanChannels, cli::array< EnergyScanResult^  >^  EnergyDetectedList);
    
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual NetworkStatusEventResponse^  __nwkEvent__NetworkStatusEvent(NetworkStatusEventRequest^  request) sealed = nwkEvent::NetworkStatusEvent;
    
    public: System::Void NetworkStatusEvent(System::Byte %Status, NetworkStatusCode^  NWKStatus, System::UInt16 NetworkAddr);
    
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual PerformRouteDiscoveryEventResponse^  __nwkEvent__PerformRouteDiscoveryEvent(PerformRouteDiscoveryEventRequest^  request) sealed = nwkEvent::PerformRouteDiscoveryEvent;
    
    public: System::Void PerformRouteDiscoveryEvent(System::Byte %Status, cli::array< System::Byte >^  RequestIdentifier, 
                NetworkStatusCode^  NWKStatus, NetworkStatusCode^  NetworkStatusCode);
    
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual StartRouterEventResponse^  __nwkEvent__StartRouterEvent(StartRouterEventRequest^  request) sealed = nwkEvent::StartRouterEvent;
    
    public: System::Void StartRouterEvent(System::Byte %Status, NetworkStatusCode^  NWKStatus, cli::array< System::Byte >^  RequestIdentifier);
    
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual LeaveEventResponse^  __nwkEvent__LeaveEvent(LeaveEventRequest^  request) sealed = nwkEvent::LeaveEvent;
    
    public: System::Void LeaveEvent(System::Byte %Status, NetworkStatusCode^  NWKStatus, cli::array< System::Byte >^  RequestIdentifier);
    
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual ResetEventResponse^  __nwkEvent__ResetEvent(ResetEventRequest^  request) sealed = nwkEvent::ResetEvent;
    
    public: System::Void ResetEvent(System::Byte %Status, cli::array< System::Byte >^  RequestIdentifier, NetworkStatusCode^  NWKStatus);
    
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual NotifyNWKMessageEventResponse^  __nwkEvent__NotifyNWKMessageEvent(NotifyNWKMessageEventRequest^  request) sealed = nwkEvent::NotifyNWKMessageEvent;
    
    public: System::Void NotifyNWKMessageEvent(System::Byte %Status, cli::array< System::Byte >^  RequestIdentifier, NWKMessageEvent^  Message);
};

[System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ServiceModel::ServiceContractAttribute(Namespace=L"http://www.zigbee.org/zgd/", ConfigurationName=L"gmoEvent")]
public interface class gmoEvent
{
    
    // CODEGEN: Параметр "Status" требует дополнительной информации о схеме, которую невозможно получить в режиме параметров. Указан атрибут "System.Xml.Serialization.XmlElementAttribute".
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/StartGatewayDeviceEvent", ReplyAction=L"*")]
    [System::ServiceModel::XmlSerializerFormatAttribute]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< Level >::typeid)]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< DecodeLevel >::typeid)]
    StartGatewayDeviceEventResponse^  StartGatewayDeviceEvent(StartGatewayDeviceEventRequest^  request);
    
    // CODEGEN: Параметр "Status" требует дополнительной информации о схеме, которую невозможно получить в режиме параметров. Указан атрибут "System.Xml.Serialization.XmlElementAttribute".
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/NodeDiscoveryEvent", ReplyAction=L"*")]
    [System::ServiceModel::XmlSerializerFormatAttribute]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< Level >::typeid)]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< DecodeLevel >::typeid)]
    [returnvalue: System::ServiceModel::MessageParameterAttribute(Name=L"Status")]
    NodeDiscoveryEventResponse^  NodeDiscoveryEvent(NodeDiscoveryEventRequest^  request);
    
    // CODEGEN: Параметр "Status" требует дополнительной информации о схеме, которую невозможно получить в режиме параметров. Указан атрибут "System.Xml.Serialization.XmlElementAttribute".
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/NodeLeaveEvent", ReplyAction=L"*")]
    [System::ServiceModel::XmlSerializerFormatAttribute]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< Level >::typeid)]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< DecodeLevel >::typeid)]
    [returnvalue: System::ServiceModel::MessageParameterAttribute(Name=L"Status")]
    NodeLeaveEventResponse^  NodeLeaveEvent(NodeLeaveEventRequest^  request);
    
    // CODEGEN: Параметр "Status" требует дополнительной информации о схеме, которую невозможно получить в режиме параметров. Указан атрибут "System.Xml.Serialization.XmlElementAttribute".
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/ServiceDiscoveryEvent", ReplyAction=L"*")]
    [System::ServiceModel::XmlSerializerFormatAttribute]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< Level >::typeid)]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< DecodeLevel >::typeid)]
    [returnvalue: System::ServiceModel::MessageParameterAttribute(Name=L"Status")]
    ServiceDiscoveryEventResponse^  ServiceDiscoveryEvent(ServiceDiscoveryEventRequest^  request);
    
    // CODEGEN: Параметр "Status" требует дополнительной информации о схеме, которую невозможно получить в режиме параметров. Указан атрибут "System.Xml.Serialization.XmlElementAttribute".
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/ServiceDiscriptorEvent", ReplyAction=L"*")]
    [System::ServiceModel::XmlSerializerFormatAttribute]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< Level >::typeid)]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< DecodeLevel >::typeid)]
    [returnvalue: System::ServiceModel::MessageParameterAttribute(Name=L"Status")]
    ServiceDiscriptorEventResponse^  ServiceDiscriptorEvent(ServiceDiscriptorEventRequest^  request);
    
    // CODEGEN: Параметр "Status" требует дополнительной информации о схеме, которую невозможно получить в режиме параметров. Указан атрибут "System.Xml.Serialization.XmlElementAttribute".
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/GmoLeaveEvent", ReplyAction=L"*")]
    [System::ServiceModel::XmlSerializerFormatAttribute]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< Level >::typeid)]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< DecodeLevel >::typeid)]
    GmoLeaveEventResponse^  GmoLeaveEvent(GmoLeaveEventRequest^  request);
    
    // CODEGEN: Параметр "Status" требует дополнительной информации о схеме, которую невозможно получить в режиме параметров. Указан атрибут "System.Xml.Serialization.XmlElementAttribute".
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/PermitJoinEvent", ReplyAction=L"*")]
    [System::ServiceModel::XmlSerializerFormatAttribute]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< Level >::typeid)]
    [System::ServiceModel::ServiceKnownTypeAttribute(cli::array< DecodeLevel >::typeid)]
    PermitJoinEventResponse^  PermitJoinEvent(PermitJoinEventRequest^  request);
};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"StartGatewayDeviceEvent", WrapperNamespace=L"http://www.zigbee.org/zgd/", 
IsWrapped=true)]
public ref class StartGatewayDeviceEventRequest
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified, DataType=L"hexBinary")]
    cli::array< System::Byte >^  RequestIdentifier;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=2)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte NWKStatus;
    
    public: StartGatewayDeviceEventRequest();
    public: StartGatewayDeviceEventRequest(System::Byte Status, cli::array< System::Byte >^  RequestIdentifier, System::Byte NWKStatus);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"StartGatewayDeviceEventResponse", WrapperNamespace=L"http://www.zigbee.org/zgd/", 
IsWrapped=true)]
public ref class StartGatewayDeviceEventResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: StartGatewayDeviceEventResponse();
    public: StartGatewayDeviceEventResponse(System::Byte Status);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"NodeDiscoveryEvent", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class NodeDiscoveryEventRequest
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified, DataType=L"hexBinary")]
    cli::array< System::Byte >^  RequestIdentifier;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    WSNNode^  NodeInfo;
    
    public: NodeDiscoveryEventRequest();
    public: NodeDiscoveryEventRequest(cli::array< System::Byte >^  RequestIdentifier, WSNNode^  NodeInfo);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"NodeDiscoveryEventResponse", WrapperNamespace=L"http://www.zigbee.org/zgd/", 
IsWrapped=true)]
public ref class NodeDiscoveryEventResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: NodeDiscoveryEventResponse();
    public: NodeDiscoveryEventResponse(System::Byte Status);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"NodeLeaveEvent", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class NodeLeaveEventRequest
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified, DataType=L"hexBinary")]
    cli::array< System::Byte >^  RequestIdentifier;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    Address^  Address;
    
    public: NodeLeaveEventRequest();
    public: NodeLeaveEventRequest(cli::array< System::Byte >^  RequestIdentifier, Address^  Address);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"NodeLeaveEventResponse", WrapperNamespace=L"http://www.zigbee.org/zgd/", 
IsWrapped=true)]
public ref class NodeLeaveEventResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: NodeLeaveEventResponse();
    public: NodeLeaveEventResponse(System::Byte Status);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"ServiceDiscoveryEvent", WrapperNamespace=L"http://www.zigbee.org/zgd/", 
IsWrapped=true)]
public ref class ServiceDiscoveryEventRequest
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified, DataType=L"hexBinary")]
    cli::array< System::Byte >^  RequestIdentifier;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    Address^  Address;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=2)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte ActiveEndpoints;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=3)]
    [System::Xml::Serialization::XmlElementAttribute(L"SimpleDescriptors", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    cli::array< SimpleDescriptor^  >^  SimpleDescriptors;
    
    public: ServiceDiscoveryEventRequest();
    public: ServiceDiscoveryEventRequest(cli::array< System::Byte >^  RequestIdentifier, Address^  Address, System::Byte ActiveEndpoints, 
                cli::array< SimpleDescriptor^  >^  SimpleDescriptors);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"ServiceDiscoveryEventResponse", WrapperNamespace=L"http://www.zigbee.org/zgd/", 
IsWrapped=true)]
public ref class ServiceDiscoveryEventResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: ServiceDiscoveryEventResponse();
    public: ServiceDiscoveryEventResponse(System::Byte Status);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"ServiceDiscriptorEvent", WrapperNamespace=L"http://www.zigbee.org/zgd/", 
IsWrapped=true)]
public ref class ServiceDiscriptorEventRequest
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified, DataType=L"hexBinary")]
    cli::array< System::Byte >^  RequestIdentifier;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    Address^  Address;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=2)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte ActiveEndpoints;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=3)]
    [System::Xml::Serialization::XmlElementAttribute(L"SimpleDescriptors", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    cli::array< SimpleDescriptor^  >^  SimpleDescriptors;
    
    public: ServiceDiscriptorEventRequest();
    public: ServiceDiscriptorEventRequest(cli::array< System::Byte >^  RequestIdentifier, Address^  Address, System::Byte ActiveEndpoints, 
                cli::array< SimpleDescriptor^  >^  SimpleDescriptors);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"ServiceDiscriptorEventResponse", WrapperNamespace=L"http://www.zigbee.org/zgd/", 
IsWrapped=true)]
public ref class ServiceDiscriptorEventResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: ServiceDiscriptorEventResponse();
    public: ServiceDiscriptorEventResponse(System::Byte Status);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"GmoLeaveEvent", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class GmoLeaveEventRequest
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified, DataType=L"hexBinary")]
    cli::array< System::Byte >^  RequestIdentifier;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=2)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte MgmtCommandStatus;
    
    public: GmoLeaveEventRequest();
    public: GmoLeaveEventRequest(System::Byte Status, cli::array< System::Byte >^  RequestIdentifier, System::Byte MgmtCommandStatus);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"GmoLeaveEventResponse", WrapperNamespace=L"http://www.zigbee.org/zgd/", 
IsWrapped=true)]
public ref class GmoLeaveEventResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: GmoLeaveEventResponse();
    public: GmoLeaveEventResponse(System::Byte Status);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"PermitJoinEvent", WrapperNamespace=L"http://www.zigbee.org/zgd/", IsWrapped=true)]
public ref class PermitJoinEventRequest
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=1)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified, DataType=L"hexBinary")]
    cli::array< System::Byte >^  RequestIdentifier;
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=2)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte MgmtCommandStatus;
    
    public: PermitJoinEventRequest();
    public: PermitJoinEventRequest(System::Byte Status, cli::array< System::Byte >^  RequestIdentifier, System::Byte MgmtCommandStatus);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(WrapperName=L"PermitJoinEventResponse", WrapperNamespace=L"http://www.zigbee.org/zgd/", 
IsWrapped=true)]
public ref class PermitJoinEventResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Namespace=L"http://www.zigbee.org/zgd/", Order=0)]
    [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    System::Byte Status;
    
    public: PermitJoinEventResponse();
    public: PermitJoinEventResponse(System::Byte Status);};

[System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0")]
public interface class gmoEventChannel : public gmoEvent, public System::ServiceModel::IClientChannel
{
};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0")]
public ref class gmoEventClient : public System::ServiceModel::ClientBase<gmoEvent^ >, public gmoEvent
{
    
    public: gmoEventClient();
    public: gmoEventClient(System::String^  endpointConfigurationName);
    public: gmoEventClient(System::String^  endpointConfigurationName, System::String^  remoteAddress);
    public: gmoEventClient(System::String^  endpointConfigurationName, System::ServiceModel::EndpointAddress^  remoteAddress);
    public: gmoEventClient(System::ServiceModel::Channels::Binding^  binding, System::ServiceModel::EndpointAddress^  remoteAddress);
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual StartGatewayDeviceEventResponse^  __gmoEvent__StartGatewayDeviceEvent(StartGatewayDeviceEventRequest^  request) sealed = gmoEvent::StartGatewayDeviceEvent;
    
    public: System::Void StartGatewayDeviceEvent(System::Byte %Status, cli::array< System::Byte >^  RequestIdentifier, System::Byte NWKStatus);
    
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual NodeDiscoveryEventResponse^  __gmoEvent__NodeDiscoveryEvent(NodeDiscoveryEventRequest^  request) sealed = gmoEvent::NodeDiscoveryEvent;
    
    public: System::Byte NodeDiscoveryEvent(cli::array< System::Byte >^  RequestIdentifier, WSNNode^  NodeInfo);
    
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual NodeLeaveEventResponse^  __gmoEvent__NodeLeaveEvent(NodeLeaveEventRequest^  request) sealed = gmoEvent::NodeLeaveEvent;
    
    public: System::Byte NodeLeaveEvent(cli::array< System::Byte >^  RequestIdentifier, Address^  Address);
    
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual ServiceDiscoveryEventResponse^  __gmoEvent__ServiceDiscoveryEvent(ServiceDiscoveryEventRequest^  request) sealed = gmoEvent::ServiceDiscoveryEvent;
    
    public: System::Byte ServiceDiscoveryEvent(cli::array< System::Byte >^  RequestIdentifier, Address^  Address, System::Byte ActiveEndpoints, 
                cli::array< SimpleDescriptor^  >^  SimpleDescriptors);
    
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual ServiceDiscriptorEventResponse^  __gmoEvent__ServiceDiscriptorEvent(ServiceDiscriptorEventRequest^  request) sealed = gmoEvent::ServiceDiscriptorEvent;
    
    public: System::Byte ServiceDiscriptorEvent(cli::array< System::Byte >^  RequestIdentifier, Address^  Address, System::Byte ActiveEndpoints, 
                cli::array< SimpleDescriptor^  >^  SimpleDescriptors);
    
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual GmoLeaveEventResponse^  __gmoEvent__GmoLeaveEvent(GmoLeaveEventRequest^  request) sealed = gmoEvent::GmoLeaveEvent;
    
    public: System::Void GmoLeaveEvent(System::Byte %Status, cli::array< System::Byte >^  RequestIdentifier, System::Byte MgmtCommandStatus);
    
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual PermitJoinEventResponse^  __gmoEvent__PermitJoinEvent(PermitJoinEventRequest^  request) sealed = gmoEvent::PermitJoinEvent;
    
    public: System::Void PermitJoinEvent(System::Byte %Status, cli::array< System::Byte >^  RequestIdentifier, System::Byte MgmtCommandStatus);
};

[System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ServiceModel::ServiceContractAttribute(Namespace=L"http://www.zigbee.org/zgd/", ConfigurationName=L"interPAN")]
public interface class interPAN
{
    
    // CODEGEN: Контракт генерации сообщений с именем CallbackDestination из пространства имен  не отмечен как обнуляемый
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/SendInterPANMessage", ReplyAction=L"*")]
    SendInterPANMessageResponse^  SendInterPANMessage(SendInterPANMessageRequest^  request);
};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(IsWrapped=false)]
public ref class SendInterPANMessageRequest
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Name=L"SendInterPANMessage", Namespace=L"http://www.zigbee.org/zgd/", 
        Order=0)]
    SendInterPANMessageRequestBody^  Body;
    
    public: SendInterPANMessageRequest();
    public: SendInterPANMessageRequest(SendInterPANMessageRequestBody^  Body);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::Runtime::Serialization::DataContractAttribute(Namespace=L"")]
public ref class SendInterPANMessageRequestBody
{
    
    public: [System::Runtime::Serialization::DataMemberAttribute(Order=0)]
    System::UInt32 Timeout;
    
    public: [System::Runtime::Serialization::DataMemberAttribute(EmitDefaultValue=false, Order=1)]
    System::String^  CallbackDestination;
    
    public: [System::Runtime::Serialization::DataMemberAttribute(EmitDefaultValue=false, Order=2)]
    www::zigbee::org::GWGSchema::InterPANMessage^  Message;
    
    public: SendInterPANMessageRequestBody();
    public: SendInterPANMessageRequestBody(System::UInt32 Timeout, System::String^  CallbackDestination, www::zigbee::org::GWGSchema::InterPANMessage^  Message);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(IsWrapped=false)]
public ref class SendInterPANMessageResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Name=L"SendInterPANMessageResponse", Namespace=L"http://www.zigbee.org/zgd/", 
        Order=0)]
    SendInterPANMessageResponseBody^  Body;
    
    public: SendInterPANMessageResponse();
    public: SendInterPANMessageResponse(SendInterPANMessageResponseBody^  Body);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::Runtime::Serialization::DataContractAttribute(Namespace=L"")]
public ref class SendInterPANMessageResponseBody
{
    
    public: [System::Runtime::Serialization::DataMemberAttribute(Order=0)]
    System::Byte Status;
    
    public: [System::Runtime::Serialization::DataMemberAttribute(Order=1)]
    System::Byte ConfirmStatus;
    
    public: [System::Runtime::Serialization::DataMemberAttribute(Order=2)]
    System::Byte ASDUHandle;
    
    public: SendInterPANMessageResponseBody();
    public: SendInterPANMessageResponseBody(System::Byte Status, System::Byte ConfirmStatus, System::Byte ASDUHandle);};

[System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0")]
public interface class interPANChannel : public interPAN, public System::ServiceModel::IClientChannel
{
};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0")]
public ref class interPANClient : public System::ServiceModel::ClientBase<interPAN^ >, public interPAN
{
    
    public: interPANClient();
    public: interPANClient(System::String^  endpointConfigurationName);
    public: interPANClient(System::String^  endpointConfigurationName, System::String^  remoteAddress);
    public: interPANClient(System::String^  endpointConfigurationName, System::ServiceModel::EndpointAddress^  remoteAddress);
    public: interPANClient(System::ServiceModel::Channels::Binding^  binding, System::ServiceModel::EndpointAddress^  remoteAddress);
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual SendInterPANMessageResponse^  __interPAN__SendInterPANMessage(SendInterPANMessageRequest^  request) sealed = interPAN::SendInterPANMessage;
    
    public: System::Byte SendInterPANMessage(System::UInt32 Timeout, System::String^  CallbackDestination, www::zigbee::org::GWGSchema::InterPANMessage^  Message, 
                System::Byte %ConfirmStatus, System::Byte %ASDUHandle);
};

[System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ServiceModel::ServiceContractAttribute(Namespace=L"http://www.zigbee.org/zgd/", ConfigurationName=L"interPANEvent")]
public interface class interPANEvent
{
    
    // CODEGEN: Контракт генерации сообщений с именем RequestIdentifier из пространства имен  не отмечен как обнуляемый
    [System::ServiceModel::OperationContractAttribute(Action=L"http://www.zigbee.org/zgd/NotifyInterPANMessageEvent", ReplyAction=L"*")]
    NotifyInterPANMessageEventResponse^  NotifyInterPANMessageEvent(NotifyInterPANMessageEventRequest^  request);
};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(IsWrapped=false)]
public ref class NotifyInterPANMessageEventRequest
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Name=L"NotifyInterPANMessageEvent", Namespace=L"http://www.zigbee.org/zgd/", 
        Order=0)]
    NotifyInterPANMessageEventRequestBody^  Body;
    
    public: NotifyInterPANMessageEventRequest();
    public: NotifyInterPANMessageEventRequest(NotifyInterPANMessageEventRequestBody^  Body);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::Runtime::Serialization::DataContractAttribute(Namespace=L"")]
public ref class NotifyInterPANMessageEventRequestBody
{
    
    public: [System::Runtime::Serialization::DataMemberAttribute(EmitDefaultValue=false, Order=0)]
    System::String^  RequestIdentifier;
    
    public: [System::Runtime::Serialization::DataMemberAttribute(EmitDefaultValue=false, Order=1)]
    www::zigbee::org::GWGSchema::InterPANMessage^  Message;
    
    public: NotifyInterPANMessageEventRequestBody();
    public: NotifyInterPANMessageEventRequestBody(System::String^  RequestIdentifier, www::zigbee::org::GWGSchema::InterPANMessage^  Message);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::ServiceModel::MessageContractAttribute(IsWrapped=false)]
public ref class NotifyInterPANMessageEventResponse
{
    
    public: [System::ServiceModel::MessageBodyMemberAttribute(Name=L"NotifyInterPANMessageEventResponse", Namespace=L"http://www.zigbee.org/zgd/", 
        Order=0)]
    NotifyInterPANMessageEventResponseBody^  Body;
    
    public: NotifyInterPANMessageEventResponse();
    public: NotifyInterPANMessageEventResponse(NotifyInterPANMessageEventResponseBody^  Body);};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced), 
System::Runtime::Serialization::DataContractAttribute(Namespace=L"")]
public ref class NotifyInterPANMessageEventResponseBody
{
    
    public: [System::Runtime::Serialization::DataMemberAttribute(Order=0)]
    System::Byte Status;
    
    public: NotifyInterPANMessageEventResponseBody();
    public: NotifyInterPANMessageEventResponseBody(System::Byte Status);};

[System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0")]
public interface class interPANEventChannel : public interPANEvent, public System::ServiceModel::IClientChannel
{
};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0")]
public ref class interPANEventClient : public System::ServiceModel::ClientBase<interPANEvent^ >, public interPANEvent
{
    
    public: interPANEventClient();
    public: interPANEventClient(System::String^  endpointConfigurationName);
    public: interPANEventClient(System::String^  endpointConfigurationName, System::String^  remoteAddress);
    public: interPANEventClient(System::String^  endpointConfigurationName, System::ServiceModel::EndpointAddress^  remoteAddress);
    public: interPANEventClient(System::ServiceModel::Channels::Binding^  binding, System::ServiceModel::EndpointAddress^  remoteAddress);
    private: [System::ComponentModel::EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState::Advanced)]
    virtual NotifyInterPANMessageEventResponse^  __interPANEvent__NotifyInterPANMessageEvent(NotifyInterPANMessageEventRequest^  request) sealed = interPANEvent::NotifyInterPANMessageEvent;
    
    public: System::Byte NotifyInterPANMessageEvent(System::String^  RequestIdentifier, www::zigbee::org::GWGSchema::InterPANMessage^  Message);
};


































inline System::Byte Version::VersionIdentifier::get()
{
    return this->versionIdentifierField;
}
inline System::Void Version::VersionIdentifier::set(System::Byte value)
{
    this->versionIdentifierField = value;
}

inline System::Byte Version::FeatureSetIdentifier::get()
{
    return this->featureSetIdentifierField;
}
inline System::Void Version::FeatureSetIdentifier::set(System::Byte value)
{
    this->featureSetIdentifierField = value;
}

inline cli::array< RPCProtocol >^  Version::RPCProtocol::get()
{
    return this->rPCProtocolField;
}
inline System::Void Version::RPCProtocol::set(cli::array< RPCProtocol >^  value)
{
    this->rPCProtocolField = value;
}

inline System::String^  Version::ManufacturerVersion::get()
{
    return this->manufacturerVersionField;
}
inline System::Void Version::ManufacturerVersion::set(System::String^  value)
{
    this->manufacturerVersionField = value;
}


inline System::UInt16 NWKMessageResult::NWKStatus::get()
{
    return this->nWKStatusField;
}
inline System::Void NWKMessageResult::NWKStatus::set(System::UInt16 value)
{
    this->nWKStatusField = value;
}

inline System::Byte NWKMessageResult::NsduHandle::get()
{
    return this->nsduHandleField;
}
inline System::Void NWKMessageResult::NsduHandle::set(System::Byte value)
{
    this->nsduHandleField = value;
}

inline System::UInt32 NWKMessageResult::TxTime::get()
{
    return this->txTimeField;
}
inline System::Void NWKMessageResult::TxTime::set(System::UInt32 value)
{
    this->txTimeField = value;
}


inline System::Byte NWKMessageEvent::DstAddrMode::get()
{
    return this->dstAddrModeField;
}
inline System::Void NWKMessageEvent::DstAddrMode::set(System::Byte value)
{
    this->dstAddrModeField = value;
}

inline System::UInt16 NWKMessageEvent::DstAddr::get()
{
    return this->dstAddrField;
}
inline System::Void NWKMessageEvent::DstAddr::set(System::UInt16 value)
{
    this->dstAddrField = value;
}

inline System::UInt16 NWKMessageEvent::SrcAddr::get()
{
    return this->srcAddrField;
}
inline System::Void NWKMessageEvent::SrcAddr::set(System::UInt16 value)
{
    this->srcAddrField = value;
}

inline cli::array< System::Byte >^  NWKMessageEvent::Nsdu::get()
{
    return this->nsduField;
}
inline System::Void NWKMessageEvent::Nsdu::set(cli::array< System::Byte >^  value)
{
    this->nsduField = value;
}

inline System::Byte NWKMessageEvent::LinkQuality::get()
{
    return this->linkQualityField;
}
inline System::Void NWKMessageEvent::LinkQuality::set(System::Byte value)
{
    this->linkQualityField = value;
}

inline System::Boolean NWKMessageEvent::LinkQualitySpecified::get()
{
    return this->linkQualityFieldSpecified;
}
inline System::Void NWKMessageEvent::LinkQualitySpecified::set(System::Boolean value)
{
    this->linkQualityFieldSpecified = value;
}

inline System::UInt32 NWKMessageEvent::RxTime::get()
{
    return this->rxTimeField;
}
inline System::Void NWKMessageEvent::RxTime::set(System::UInt32 value)
{
    this->rxTimeField = value;
}

inline System::Boolean NWKMessageEvent::RxTimeSpecified::get()
{
    return this->rxTimeFieldSpecified;
}
inline System::Void NWKMessageEvent::RxTimeSpecified::set(System::Boolean value)
{
    this->rxTimeFieldSpecified = value;
}

inline System::Boolean NWKMessageEvent::SecurityUse::get()
{
    return this->securityUseField;
}
inline System::Void NWKMessageEvent::SecurityUse::set(System::Boolean value)
{
    this->securityUseField = value;
}


inline System::Byte RouteDiscoveryInfo::DstAddrMode::get()
{
    return this->dstAddrModeField;
}
inline System::Void RouteDiscoveryInfo::DstAddrMode::set(System::Byte value)
{
    this->dstAddrModeField = value;
}

inline System::Boolean RouteDiscoveryInfo::DstAddrModeSpecified::get()
{
    return this->dstAddrModeFieldSpecified;
}
inline System::Void RouteDiscoveryInfo::DstAddrModeSpecified::set(System::Boolean value)
{
    this->dstAddrModeFieldSpecified = value;
}

inline Address^  RouteDiscoveryInfo::DstAddr::get()
{
    return this->dstAddrField;
}
inline System::Void RouteDiscoveryInfo::DstAddr::set(Address^  value)
{
    this->dstAddrField = value;
}

inline System::Byte RouteDiscoveryInfo::Radius::get()
{
    return this->radiusField;
}
inline System::Void RouteDiscoveryInfo::Radius::set(System::Byte value)
{
    this->radiusField = value;
}

inline System::Boolean RouteDiscoveryInfo::NoRouteCache::get()
{
    return this->noRouteCacheField;
}
inline System::Void RouteDiscoveryInfo::NoRouteCache::set(System::Boolean value)
{
    this->noRouteCacheField = value;
}

inline System::Boolean RouteDiscoveryInfo::NoRouteCacheSpecified::get()
{
    return this->noRouteCacheFieldSpecified;
}
inline System::Void RouteDiscoveryInfo::NoRouteCacheSpecified::set(System::Boolean value)
{
    this->noRouteCacheFieldSpecified = value;
}


inline System::UInt16 Address::NetworkAddress::get()
{
    return this->networkAddressField;
}
inline System::Void Address::NetworkAddress::set(System::UInt16 value)
{
    this->networkAddressField = value;
}

inline System::Boolean Address::NetworkAddressSpecified::get()
{
    return this->networkAddressFieldSpecified;
}
inline System::Void Address::NetworkAddressSpecified::set(System::Boolean value)
{
    this->networkAddressFieldSpecified = value;
}

inline System::UInt64 Address::IeeeAddress::get()
{
    return this->ieeeAddressField;
}
inline System::Void Address::IeeeAddress::set(System::UInt64 value)
{
    this->ieeeAddressField = value;
}

inline System::Boolean Address::IeeeAddressSpecified::get()
{
    return this->ieeeAddressFieldSpecified;
}
inline System::Void Address::IeeeAddressSpecified::set(System::Boolean value)
{
    this->ieeeAddressFieldSpecified = value;
}

inline System::String^  Address::AliasAddress::get()
{
    return this->aliasAddressField;
}
inline System::Void Address::AliasAddress::set(System::String^  value)
{
    this->aliasAddressField = value;
}


inline cli::array< EnergyScanResultScannedChannel^  >^  EnergyScanResult::ScannedChannel::get()
{
    return this->scannedChannelField;
}
inline System::Void EnergyScanResult::ScannedChannel::set(cli::array< EnergyScanResultScannedChannel^  >^  value)
{
    this->scannedChannelField = value;
}


inline System::Byte EnergyScanResultScannedChannel::Channel::get()
{
    return this->channelField;
}
inline System::Void EnergyScanResultScannedChannel::Channel::set(System::Byte value)
{
    this->channelField = value;
}

inline System::Byte EnergyScanResultScannedChannel::Energy::get()
{
    return this->energyField;
}
inline System::Void EnergyScanResultScannedChannel::Energy::set(System::Byte value)
{
    this->energyField = value;
}


inline System::UInt64 NetworkDescriptor::ExtendedPanId::get()
{
    return this->extendedPanIdField;
}
inline System::Void NetworkDescriptor::ExtendedPanId::set(System::UInt64 value)
{
    this->extendedPanIdField = value;
}

inline System::Boolean NetworkDescriptor::ExtendedPanIdSpecified::get()
{
    return this->extendedPanIdFieldSpecified;
}
inline System::Void NetworkDescriptor::ExtendedPanIdSpecified::set(System::Boolean value)
{
    this->extendedPanIdFieldSpecified = value;
}

inline System::UInt16 NetworkDescriptor::LogicalChannel::get()
{
    return this->logicalChannelField;
}
inline System::Void NetworkDescriptor::LogicalChannel::set(System::UInt16 value)
{
    this->logicalChannelField = value;
}

inline System::Boolean NetworkDescriptor::LogicalChannelSpecified::get()
{
    return this->logicalChannelFieldSpecified;
}
inline System::Void NetworkDescriptor::LogicalChannelSpecified::set(System::Boolean value)
{
    this->logicalChannelFieldSpecified = value;
}

inline System::Byte NetworkDescriptor::StackProfile::get()
{
    return this->stackProfileField;
}
inline System::Void NetworkDescriptor::StackProfile::set(System::Byte value)
{
    this->stackProfileField = value;
}

inline System::Boolean NetworkDescriptor::StackProfileSpecified::get()
{
    return this->stackProfileFieldSpecified;
}
inline System::Void NetworkDescriptor::StackProfileSpecified::set(System::Boolean value)
{
    this->stackProfileFieldSpecified = value;
}

inline System::Byte NetworkDescriptor::ZigBeeVersion::get()
{
    return this->zigBeeVersionField;
}
inline System::Void NetworkDescriptor::ZigBeeVersion::set(System::Byte value)
{
    this->zigBeeVersionField = value;
}

inline System::Boolean NetworkDescriptor::ZigBeeVersionSpecified::get()
{
    return this->zigBeeVersionFieldSpecified;
}
inline System::Void NetworkDescriptor::ZigBeeVersionSpecified::set(System::Boolean value)
{
    this->zigBeeVersionFieldSpecified = value;
}

inline System::Byte NetworkDescriptor::BeaconOrder::get()
{
    return this->beaconOrderField;
}
inline System::Void NetworkDescriptor::BeaconOrder::set(System::Byte value)
{
    this->beaconOrderField = value;
}

inline System::Boolean NetworkDescriptor::BeaconOrderSpecified::get()
{
    return this->beaconOrderFieldSpecified;
}
inline System::Void NetworkDescriptor::BeaconOrderSpecified::set(System::Boolean value)
{
    this->beaconOrderFieldSpecified = value;
}

inline System::Byte NetworkDescriptor::SuperFrameOrder::get()
{
    return this->superFrameOrderField;
}
inline System::Void NetworkDescriptor::SuperFrameOrder::set(System::Byte value)
{
    this->superFrameOrderField = value;
}

inline System::Boolean NetworkDescriptor::SuperFrameOrderSpecified::get()
{
    return this->superFrameOrderFieldSpecified;
}
inline System::Void NetworkDescriptor::SuperFrameOrderSpecified::set(System::Boolean value)
{
    this->superFrameOrderFieldSpecified = value;
}

inline System::Boolean NetworkDescriptor::PermitJoining::get()
{
    return this->permitJoiningField;
}
inline System::Void NetworkDescriptor::PermitJoining::set(System::Boolean value)
{
    this->permitJoiningField = value;
}

inline System::Boolean NetworkDescriptor::PermitJoiningSpecified::get()
{
    return this->permitJoiningFieldSpecified;
}
inline System::Void NetworkDescriptor::PermitJoiningSpecified::set(System::Boolean value)
{
    this->permitJoiningFieldSpecified = value;
}

inline System::Boolean NetworkDescriptor::RouterCapacity::get()
{
    return this->routerCapacityField;
}
inline System::Void NetworkDescriptor::RouterCapacity::set(System::Boolean value)
{
    this->routerCapacityField = value;
}

inline System::Boolean NetworkDescriptor::RouterCapacitySpecified::get()
{
    return this->routerCapacityFieldSpecified;
}
inline System::Void NetworkDescriptor::RouterCapacitySpecified::set(System::Boolean value)
{
    this->routerCapacityFieldSpecified = value;
}

inline System::Boolean NetworkDescriptor::EndDeviceCapacity::get()
{
    return this->endDeviceCapacityField;
}
inline System::Void NetworkDescriptor::EndDeviceCapacity::set(System::Boolean value)
{
    this->endDeviceCapacityField = value;
}

inline System::Boolean NetworkDescriptor::EndDeviceCapacitySpecified::get()
{
    return this->endDeviceCapacityFieldSpecified;
}
inline System::Void NetworkDescriptor::EndDeviceCapacitySpecified::set(System::Boolean value)
{
    this->endDeviceCapacityFieldSpecified = value;
}

inline System::String^  NetworkDescriptor::NWKRootURI::get()
{
    return this->nWKRootURIField;
}
inline System::Void NetworkDescriptor::NWKRootURI::set(System::String^  value)
{
    this->nWKRootURIField = value;
}


inline NetworkDescriptor^  NetworkDescriptorList::NetworkDescriptor::get()
{
    return this->networkDescriptorField;
}
inline System::Void NetworkDescriptorList::NetworkDescriptor::set(NetworkDescriptor^  value)
{
    this->networkDescriptorField = value;
}


inline System::UInt64 JoinConfiguration::ExtendedPanId::get()
{
    return this->extendedPanIdField;
}
inline System::Void JoinConfiguration::ExtendedPanId::set(System::UInt64 value)
{
    this->extendedPanIdField = value;
}

inline System::Byte JoinConfiguration::RejoinNetwork::get()
{
    return this->rejoinNetworkField;
}
inline System::Void JoinConfiguration::RejoinNetwork::set(System::Byte value)
{
    this->rejoinNetworkField = value;
}

inline System::UInt32 JoinConfiguration::ScanChannel::get()
{
    return this->scanChannelField;
}
inline System::Void JoinConfiguration::ScanChannel::set(System::UInt32 value)
{
    this->scanChannelField = value;
}

inline System::Byte JoinConfiguration::ScanDuration::get()
{
    return this->scanDurationField;
}
inline System::Void JoinConfiguration::ScanDuration::set(System::Byte value)
{
    this->scanDurationField = value;
}

inline MACCapability^  JoinConfiguration::CapabilityInformation::get()
{
    return this->capabilityInformationField;
}
inline System::Void JoinConfiguration::CapabilityInformation::set(MACCapability^  value)
{
    this->capabilityInformationField = value;
}

inline System::Boolean JoinConfiguration::SecurityEnable::get()
{
    return this->securityEnableField;
}
inline System::Void JoinConfiguration::SecurityEnable::set(System::Boolean value)
{
    this->securityEnableField = value;
}


inline System::Boolean MACCapability::AlternatePanCoordinator::get()
{
    return this->alternatePanCoordinatorField;
}
inline System::Void MACCapability::AlternatePanCoordinator::set(System::Boolean value)
{
    this->alternatePanCoordinatorField = value;
}

inline System::Boolean MACCapability::DeviceIsFFD::get()
{
    return this->deviceIsFFDField;
}
inline System::Void MACCapability::DeviceIsFFD::set(System::Boolean value)
{
    this->deviceIsFFDField = value;
}

inline System::Boolean MACCapability::MainsPowered::get()
{
    return this->mainsPoweredField;
}
inline System::Void MACCapability::MainsPowered::set(System::Boolean value)
{
    this->mainsPoweredField = value;
}

inline System::Boolean MACCapability::ReceiverOnWhenIdle::get()
{
    return this->receiverOnWhenIdleField;
}
inline System::Void MACCapability::ReceiverOnWhenIdle::set(System::Boolean value)
{
    this->receiverOnWhenIdleField = value;
}

inline System::Boolean MACCapability::SecuritySupported::get()
{
    return this->securitySupportedField;
}
inline System::Void MACCapability::SecuritySupported::set(System::Boolean value)
{
    this->securitySupportedField = value;
}

inline System::Boolean MACCapability::AllocateAddress::get()
{
    return this->allocateAddressField;
}
inline System::Void MACCapability::AllocateAddress::set(System::Boolean value)
{
    this->allocateAddressField = value;
}


inline System::UInt32 NetworkStatusCode::Status::get()
{
    return this->statusField;
}
inline System::Void NetworkStatusCode::Status::set(System::UInt32 value)
{
    this->statusField = value;
}

inline System::UInt32 NetworkStatusCode::NetworkStatusCode1::get()
{
    return this->networkStatusCode1Field;
}
inline System::Void NetworkStatusCode::NetworkStatusCode1::set(System::UInt32 value)
{
    this->networkStatusCode1Field = value;
}

inline System::Boolean NetworkStatusCode::NetworkStatusCode1Specified::get()
{
    return this->networkStatusCode1FieldSpecified;
}
inline System::Void NetworkStatusCode::NetworkStatusCode1Specified::set(System::Boolean value)
{
    this->networkStatusCode1FieldSpecified = value;
}


inline System::UInt32 NetworkConfiguration::ScanChannels::get()
{
    return this->scanChannelsField;
}
inline System::Void NetworkConfiguration::ScanChannels::set(System::UInt32 value)
{
    this->scanChannelsField = value;
}

inline System::Boolean NetworkConfiguration::ScanChannelsSpecified::get()
{
    return this->scanChannelsFieldSpecified;
}
inline System::Void NetworkConfiguration::ScanChannelsSpecified::set(System::Boolean value)
{
    this->scanChannelsFieldSpecified = value;
}

inline System::Byte NetworkConfiguration::ScanDuration::get()
{
    return this->scanDurationField;
}
inline System::Void NetworkConfiguration::ScanDuration::set(System::Byte value)
{
    this->scanDurationField = value;
}

inline System::Boolean NetworkConfiguration::ScanDurationSpecified::get()
{
    return this->scanDurationFieldSpecified;
}
inline System::Void NetworkConfiguration::ScanDurationSpecified::set(System::Boolean value)
{
    this->scanDurationFieldSpecified = value;
}

inline System::Byte NetworkConfiguration::BeaconOrder::get()
{
    return this->beaconOrderField;
}
inline System::Void NetworkConfiguration::BeaconOrder::set(System::Byte value)
{
    this->beaconOrderField = value;
}

inline System::Byte NetworkConfiguration::SuperFrameOrder::get()
{
    return this->superFrameOrderField;
}
inline System::Void NetworkConfiguration::SuperFrameOrder::set(System::Byte value)
{
    this->superFrameOrderField = value;
}

inline System::Boolean NetworkConfiguration::BatteryLifeExtension::get()
{
    return this->batteryLifeExtensionField;
}
inline System::Void NetworkConfiguration::BatteryLifeExtension::set(System::Boolean value)
{
    this->batteryLifeExtensionField = value;
}


inline System::Boolean PowerSources::ConstantMains::get()
{
    return this->constantMainsField;
}
inline System::Void PowerSources::ConstantMains::set(System::Boolean value)
{
    this->constantMainsField = value;
}

inline System::Boolean PowerSources::RechargeableBattery::get()
{
    return this->rechargeableBatteryField;
}
inline System::Void PowerSources::RechargeableBattery::set(System::Boolean value)
{
    this->rechargeableBatteryField = value;
}

inline System::Boolean PowerSources::DisposableBattery::get()
{
    return this->disposableBatteryField;
}
inline System::Void PowerSources::DisposableBattery::set(System::Boolean value)
{
    this->disposableBatteryField = value;
}


inline PowerDescriptorCurrentPowerMode PowerDescriptor::CurrentPowerMode::get()
{
    return this->currentPowerModeField;
}
inline System::Void PowerDescriptor::CurrentPowerMode::set(PowerDescriptorCurrentPowerMode value)
{
    this->currentPowerModeField = value;
}

inline System::Boolean PowerDescriptor::CurrentPowerModeSpecified::get()
{
    return this->currentPowerModeFieldSpecified;
}
inline System::Void PowerDescriptor::CurrentPowerModeSpecified::set(System::Boolean value)
{
    this->currentPowerModeFieldSpecified = value;
}

inline PowerSources^  PowerDescriptor::AvailablePowerSources::get()
{
    return this->availablePowerSourcesField;
}
inline System::Void PowerDescriptor::AvailablePowerSources::set(PowerSources^  value)
{
    this->availablePowerSourcesField = value;
}

inline PowerSources^  PowerDescriptor::CurrentPowerSources::get()
{
    return this->currentPowerSourcesField;
}
inline System::Void PowerDescriptor::CurrentPowerSources::set(PowerSources^  value)
{
    this->currentPowerSourcesField = value;
}

inline PowerDescriptorCurrentPowerSourceLevel PowerDescriptor::CurrentPowerSourceLevel::get()
{
    return this->currentPowerSourceLevelField;
}
inline System::Void PowerDescriptor::CurrentPowerSourceLevel::set(PowerDescriptorCurrentPowerSourceLevel value)
{
    this->currentPowerSourceLevelField = value;
}

inline System::Boolean PowerDescriptor::CurrentPowerSourceLevelSpecified::get()
{
    return this->currentPowerSourceLevelFieldSpecified;
}
inline System::Void PowerDescriptor::CurrentPowerSourceLevelSpecified::set(System::Boolean value)
{
    this->currentPowerSourceLevelFieldSpecified = value;
}


inline System::UInt64 Device::Address::get()
{
    return this->addressField;
}
inline System::Void Device::Address::set(System::UInt64 value)
{
    this->addressField = value;
}

inline System::Byte Device::Endpoint::get()
{
    return this->endpointField;
}
inline System::Void Device::Endpoint::set(System::Byte value)
{
    this->endpointField = value;
}


inline System::UInt64 Binding::SourceIEEEAddress::get()
{
    return this->sourceIEEEAddressField;
}
inline System::Void Binding::SourceIEEEAddress::set(System::UInt64 value)
{
    this->sourceIEEEAddressField = value;
}

inline System::Byte Binding::SourceEndpoint::get()
{
    return this->sourceEndpointField;
}
inline System::Void Binding::SourceEndpoint::set(System::Byte value)
{
    this->sourceEndpointField = value;
}

inline System::UInt16 Binding::ClusterID::get()
{
    return this->clusterIDField;
}
inline System::Void Binding::ClusterID::set(System::UInt16 value)
{
    this->clusterIDField = value;
}

inline cli::array< System::UInt16 >^  Binding::GroupDestination::get()
{
    return this->groupDestinationField;
}
inline System::Void Binding::GroupDestination::set(cli::array< System::UInt16 >^  value)
{
    this->groupDestinationField = value;
}

inline cli::array< Device^  >^  Binding::DeviceDestination::get()
{
    return this->deviceDestinationField;
}
inline System::Void Binding::DeviceDestination::set(cli::array< Device^  >^  value)
{
    this->deviceDestinationField = value;
}


inline System::UInt16 Group::GroupAddress::get()
{
    return this->groupAddressField;
}
inline System::Void Group::GroupAddress::set(System::UInt16 value)
{
    this->groupAddressField = value;
}

inline cli::array< System::Byte >^  Group::Endpoint::get()
{
    return this->endpointField;
}
inline System::Void Group::Endpoint::set(cli::array< System::Byte >^  value)
{
    this->endpointField = value;
}


inline System::Boolean TxOptions::SecurityEnabled::get()
{
    return this->securityEnabledField;
}
inline System::Void TxOptions::SecurityEnabled::set(System::Boolean value)
{
    this->securityEnabledField = value;
}

inline System::Boolean TxOptions::UseNetworkKey::get()
{
    return this->useNetworkKeyField;
}
inline System::Void TxOptions::UseNetworkKey::set(System::Boolean value)
{
    this->useNetworkKeyField = value;
}

inline System::Boolean TxOptions::Acknowledged::get()
{
    return this->acknowledgedField;
}
inline System::Void TxOptions::Acknowledged::set(System::Boolean value)
{
    this->acknowledgedField = value;
}

inline System::Boolean TxOptions::PermitFragmentation::get()
{
    return this->permitFragmentationField;
}
inline System::Void TxOptions::PermitFragmentation::set(System::Boolean value)
{
    this->permitFragmentationField = value;
}


inline System::UInt32 APSMessage::DestinationAddressMode::get()
{
    return this->destinationAddressModeField;
}
inline System::Void APSMessage::DestinationAddressMode::set(System::UInt32 value)
{
    this->destinationAddressModeField = value;
}

inline System::Boolean APSMessage::DestinationAddressModeSpecified::get()
{
    return this->destinationAddressModeFieldSpecified;
}
inline System::Void APSMessage::DestinationAddressModeSpecified::set(System::Boolean value)
{
    this->destinationAddressModeFieldSpecified = value;
}

inline Address^  APSMessage::DestinationAddress::get()
{
    return this->destinationAddressField;
}
inline System::Void APSMessage::DestinationAddress::set(Address^  value)
{
    this->destinationAddressField = value;
}

inline System::Byte APSMessage::DestinationEndpoint::get()
{
    return this->destinationEndpointField;
}
inline System::Void APSMessage::DestinationEndpoint::set(System::Byte value)
{
    this->destinationEndpointField = value;
}

inline System::Byte APSMessage::SourceEndpoint::get()
{
    return this->sourceEndpointField;
}
inline System::Void APSMessage::SourceEndpoint::set(System::Byte value)
{
    this->sourceEndpointField = value;
}

inline System::UInt16 APSMessage::ProfileID::get()
{
    return this->profileIDField;
}
inline System::Void APSMessage::ProfileID::set(System::UInt16 value)
{
    this->profileIDField = value;
}

inline System::Boolean APSMessage::ProfileIDSpecified::get()
{
    return this->profileIDFieldSpecified;
}
inline System::Void APSMessage::ProfileIDSpecified::set(System::Boolean value)
{
    this->profileIDFieldSpecified = value;
}

inline System::UInt16 APSMessage::ClusterID::get()
{
    return this->clusterIDField;
}
inline System::Void APSMessage::ClusterID::set(System::UInt16 value)
{
    this->clusterIDField = value;
}

inline cli::array< System::Byte >^  APSMessage::Data::get()
{
    return this->dataField;
}
inline System::Void APSMessage::Data::set(cli::array< System::Byte >^  value)
{
    this->dataField = value;
}

inline TxOptions^  APSMessage::TxOptions::get()
{
    return this->txOptionsField;
}
inline System::Void APSMessage::TxOptions::set(TxOptions^  value)
{
    this->txOptionsField = value;
}

inline System::Byte APSMessage::Radius::get()
{
    return this->radiusField;
}
inline System::Void APSMessage::Radius::set(System::Byte value)
{
    this->radiusField = value;
}


inline System::String^  UserDescriptor::Description::get()
{
    return this->descriptionField;
}
inline System::Void UserDescriptor::Description::set(System::String^  value)
{
    this->descriptionField = value;
}


inline System::Boolean DescriptorCapability::ExtendedActiveEndpointListAvailable::get()
{
    return this->extendedActiveEndpointListAvailableField;
}
inline System::Void DescriptorCapability::ExtendedActiveEndpointListAvailable::set(System::Boolean value)
{
    this->extendedActiveEndpointListAvailableField = value;
}

inline System::Boolean DescriptorCapability::ExtendedSimpleDescriptorListAvailable::get()
{
    return this->extendedSimpleDescriptorListAvailableField;
}
inline System::Void DescriptorCapability::ExtendedSimpleDescriptorListAvailable::set(System::Boolean value)
{
    this->extendedSimpleDescriptorListAvailableField = value;
}


inline System::Boolean ServerMask::PrimaryTrustCenter::get()
{
    return this->primaryTrustCenterField;
}
inline System::Void ServerMask::PrimaryTrustCenter::set(System::Boolean value)
{
    this->primaryTrustCenterField = value;
}

inline System::Boolean ServerMask::BackupTrustCenter::get()
{
    return this->backupTrustCenterField;
}
inline System::Void ServerMask::BackupTrustCenter::set(System::Boolean value)
{
    this->backupTrustCenterField = value;
}

inline System::Boolean ServerMask::PrimaryBindingTableCache::get()
{
    return this->primaryBindingTableCacheField;
}
inline System::Void ServerMask::PrimaryBindingTableCache::set(System::Boolean value)
{
    this->primaryBindingTableCacheField = value;
}

inline System::Boolean ServerMask::BackupBindingTableCache::get()
{
    return this->backupBindingTableCacheField;
}
inline System::Void ServerMask::BackupBindingTableCache::set(System::Boolean value)
{
    this->backupBindingTableCacheField = value;
}

inline System::Boolean ServerMask::PrimaryDiscoveryCache::get()
{
    return this->primaryDiscoveryCacheField;
}
inline System::Void ServerMask::PrimaryDiscoveryCache::set(System::Boolean value)
{
    this->primaryDiscoveryCacheField = value;
}

inline System::Boolean ServerMask::BackupDiscoveryCache::get()
{
    return this->backupDiscoveryCacheField;
}
inline System::Void ServerMask::BackupDiscoveryCache::set(System::Boolean value)
{
    this->backupDiscoveryCacheField = value;
}

inline System::Boolean ServerMask::NetworkManager::get()
{
    return this->networkManagerField;
}
inline System::Void ServerMask::NetworkManager::set(System::Boolean value)
{
    this->networkManagerField = value;
}


inline LogicalType NodeDescriptor::LogicalType::get()
{
    return this->logicalTypeField;
}
inline System::Void NodeDescriptor::LogicalType::set(LogicalType value)
{
    this->logicalTypeField = value;
}

inline System::Boolean NodeDescriptor::LogicalTypeSpecified::get()
{
    return this->logicalTypeFieldSpecified;
}
inline System::Void NodeDescriptor::LogicalTypeSpecified::set(System::Boolean value)
{
    this->logicalTypeFieldSpecified = value;
}

inline System::Boolean NodeDescriptor::ComplexDescriptorAvailable::get()
{
    return this->complexDescriptorAvailableField;
}
inline System::Void NodeDescriptor::ComplexDescriptorAvailable::set(System::Boolean value)
{
    this->complexDescriptorAvailableField = value;
}

inline System::Boolean NodeDescriptor::ComplexDescriptorAvailableSpecified::get()
{
    return this->complexDescriptorAvailableFieldSpecified;
}
inline System::Void NodeDescriptor::ComplexDescriptorAvailableSpecified::set(System::Boolean value)
{
    this->complexDescriptorAvailableFieldSpecified = value;
}

inline System::Boolean NodeDescriptor::UserDescriptorAvailable::get()
{
    return this->userDescriptorAvailableField;
}
inline System::Void NodeDescriptor::UserDescriptorAvailable::set(System::Boolean value)
{
    this->userDescriptorAvailableField = value;
}

inline System::Boolean NodeDescriptor::UserDescriptorAvailableSpecified::get()
{
    return this->userDescriptorAvailableFieldSpecified;
}
inline System::Void NodeDescriptor::UserDescriptorAvailableSpecified::set(System::Boolean value)
{
    this->userDescriptorAvailableFieldSpecified = value;
}

inline NodeDescriptorFrequencyBand NodeDescriptor::FrequencyBand::get()
{
    return this->frequencyBandField;
}
inline System::Void NodeDescriptor::FrequencyBand::set(NodeDescriptorFrequencyBand value)
{
    this->frequencyBandField = value;
}

inline System::Boolean NodeDescriptor::FrequencyBandSpecified::get()
{
    return this->frequencyBandFieldSpecified;
}
inline System::Void NodeDescriptor::FrequencyBandSpecified::set(System::Boolean value)
{
    this->frequencyBandFieldSpecified = value;
}

inline MACCapability^  NodeDescriptor::MACCapabilityFlag::get()
{
    return this->mACCapabilityFlagField;
}
inline System::Void NodeDescriptor::MACCapabilityFlag::set(MACCapability^  value)
{
    this->mACCapabilityFlagField = value;
}

inline System::UInt16 NodeDescriptor::ManufacturerCode::get()
{
    return this->manufacturerCodeField;
}
inline System::Void NodeDescriptor::ManufacturerCode::set(System::UInt16 value)
{
    this->manufacturerCodeField = value;
}

inline System::Boolean NodeDescriptor::ManufacturerCodeSpecified::get()
{
    return this->manufacturerCodeFieldSpecified;
}
inline System::Void NodeDescriptor::ManufacturerCodeSpecified::set(System::Boolean value)
{
    this->manufacturerCodeFieldSpecified = value;
}

inline System::Byte NodeDescriptor::MaximumBufferSize::get()
{
    return this->maximumBufferSizeField;
}
inline System::Void NodeDescriptor::MaximumBufferSize::set(System::Byte value)
{
    this->maximumBufferSizeField = value;
}

inline System::Boolean NodeDescriptor::MaximumBufferSizeSpecified::get()
{
    return this->maximumBufferSizeFieldSpecified;
}
inline System::Void NodeDescriptor::MaximumBufferSizeSpecified::set(System::Boolean value)
{
    this->maximumBufferSizeFieldSpecified = value;
}

inline System::UInt16 NodeDescriptor::MaximumIncomingTransferSize::get()
{
    return this->maximumIncomingTransferSizeField;
}
inline System::Void NodeDescriptor::MaximumIncomingTransferSize::set(System::UInt16 value)
{
    this->maximumIncomingTransferSizeField = value;
}

inline System::Boolean NodeDescriptor::MaximumIncomingTransferSizeSpecified::get()
{
    return this->maximumIncomingTransferSizeFieldSpecified;
}
inline System::Void NodeDescriptor::MaximumIncomingTransferSizeSpecified::set(System::Boolean value)
{
    this->maximumIncomingTransferSizeFieldSpecified = value;
}

inline ServerMask^  NodeDescriptor::ServerMask::get()
{
    return this->serverMaskField;
}
inline System::Void NodeDescriptor::ServerMask::set(ServerMask^  value)
{
    this->serverMaskField = value;
}

inline System::UInt16 NodeDescriptor::MaximumOutgoingTransferSize::get()
{
    return this->maximumOutgoingTransferSizeField;
}
inline System::Void NodeDescriptor::MaximumOutgoingTransferSize::set(System::UInt16 value)
{
    this->maximumOutgoingTransferSizeField = value;
}

inline System::Boolean NodeDescriptor::MaximumOutgoingTransferSizeSpecified::get()
{
    return this->maximumOutgoingTransferSizeFieldSpecified;
}
inline System::Void NodeDescriptor::MaximumOutgoingTransferSizeSpecified::set(System::Boolean value)
{
    this->maximumOutgoingTransferSizeFieldSpecified = value;
}

inline DescriptorCapability^  NodeDescriptor::DescriptorCapabilityField::get()
{
    return this->descriptorCapabilityFieldField;
}
inline System::Void NodeDescriptor::DescriptorCapabilityField::set(DescriptorCapability^  value)
{
    this->descriptorCapabilityFieldField = value;
}


inline System::Byte StartupAttributeInfo::StartupAttributeSetIndex::get()
{
    return this->startupAttributeSetIndexField;
}
inline System::Void StartupAttributeInfo::StartupAttributeSetIndex::set(System::Byte value)
{
    this->startupAttributeSetIndexField = value;
}

inline LogicalType StartupAttributeInfo::DeviceType::get()
{
    return this->deviceTypeField;
}
inline System::Void StartupAttributeInfo::DeviceType::set(LogicalType value)
{
    this->deviceTypeField = value;
}

inline System::Boolean StartupAttributeInfo::DeviceTypeSpecified::get()
{
    return this->deviceTypeFieldSpecified;
}
inline System::Void StartupAttributeInfo::DeviceTypeSpecified::set(System::Boolean value)
{
    this->deviceTypeFieldSpecified = value;
}

inline System::Byte StartupAttributeInfo::ProtocolVersion::get()
{
    return this->protocolVersionField;
}
inline System::Void StartupAttributeInfo::ProtocolVersion::set(System::Byte value)
{
    this->protocolVersionField = value;
}

inline System::Boolean StartupAttributeInfo::ProtocolVersionSpecified::get()
{
    return this->protocolVersionFieldSpecified;
}
inline System::Void StartupAttributeInfo::ProtocolVersionSpecified::set(System::Boolean value)
{
    this->protocolVersionFieldSpecified = value;
}

inline System::Byte StartupAttributeInfo::StackProfile::get()
{
    return this->stackProfileField;
}
inline System::Void StartupAttributeInfo::StackProfile::set(System::Byte value)
{
    this->stackProfileField = value;
}

inline System::Boolean StartupAttributeInfo::StackProfileSpecified::get()
{
    return this->stackProfileFieldSpecified;
}
inline System::Void StartupAttributeInfo::StackProfileSpecified::set(System::Boolean value)
{
    this->stackProfileFieldSpecified = value;
}

inline System::UInt32 StartupAttributeInfo::ChannelMask::get()
{
    return this->channelMaskField;
}
inline System::Void StartupAttributeInfo::ChannelMask::set(System::UInt32 value)
{
    this->channelMaskField = value;
}

inline System::Boolean StartupAttributeInfo::ChannelMaskSpecified::get()
{
    return this->channelMaskFieldSpecified;
}
inline System::Void StartupAttributeInfo::ChannelMaskSpecified::set(System::Boolean value)
{
    this->channelMaskFieldSpecified = value;
}

inline System::UInt64 StartupAttributeInfo::ExtendedPANId::get()
{
    return this->extendedPANIdField;
}
inline System::Void StartupAttributeInfo::ExtendedPANId::set(System::UInt64 value)
{
    this->extendedPANIdField = value;
}

inline System::Boolean StartupAttributeInfo::ExtendedPANIdSpecified::get()
{
    return this->extendedPANIdFieldSpecified;
}
inline System::Void StartupAttributeInfo::ExtendedPANIdSpecified::set(System::Boolean value)
{
    this->extendedPANIdFieldSpecified = value;
}

inline System::UInt16 StartupAttributeInfo::PANId::get()
{
    return this->pANIdField;
}
inline System::Void StartupAttributeInfo::PANId::set(System::UInt16 value)
{
    this->pANIdField = value;
}

inline System::Boolean StartupAttributeInfo::PANIdSpecified::get()
{
    return this->pANIdFieldSpecified;
}
inline System::Void StartupAttributeInfo::PANIdSpecified::set(System::Boolean value)
{
    this->pANIdFieldSpecified = value;
}

inline System::UInt16 StartupAttributeInfo::ShortAddress::get()
{
    return this->shortAddressField;
}
inline System::Void StartupAttributeInfo::ShortAddress::set(System::UInt16 value)
{
    this->shortAddressField = value;
}

inline System::Boolean StartupAttributeInfo::ShortAddressSpecified::get()
{
    return this->shortAddressFieldSpecified;
}
inline System::Void StartupAttributeInfo::ShortAddressSpecified::set(System::Boolean value)
{
    this->shortAddressFieldSpecified = value;
}

inline System::UInt64 StartupAttributeInfo::TrustCenterAddress::get()
{
    return this->trustCenterAddressField;
}
inline System::Void StartupAttributeInfo::TrustCenterAddress::set(System::UInt64 value)
{
    this->trustCenterAddressField = value;
}

inline System::Boolean StartupAttributeInfo::TrustCenterAddressSpecified::get()
{
    return this->trustCenterAddressFieldSpecified;
}
inline System::Void StartupAttributeInfo::TrustCenterAddressSpecified::set(System::Boolean value)
{
    this->trustCenterAddressFieldSpecified = value;
}

inline cli::array< System::Byte >^  StartupAttributeInfo::TrustCenterMasterKey::get()
{
    return this->trustCenterMasterKeyField;
}
inline System::Void StartupAttributeInfo::TrustCenterMasterKey::set(cli::array< System::Byte >^  value)
{
    this->trustCenterMasterKeyField = value;
}

inline cli::array< System::Byte >^  StartupAttributeInfo::NetworkKey::get()
{
    return this->networkKeyField;
}
inline System::Void StartupAttributeInfo::NetworkKey::set(cli::array< System::Byte >^  value)
{
    this->networkKeyField = value;
}

inline System::Boolean StartupAttributeInfo::UseInsecureJoin::get()
{
    return this->useInsecureJoinField;
}
inline System::Void StartupAttributeInfo::UseInsecureJoin::set(System::Boolean value)
{
    this->useInsecureJoinField = value;
}

inline System::Boolean StartupAttributeInfo::UseInsecureJoinSpecified::get()
{
    return this->useInsecureJoinFieldSpecified;
}
inline System::Void StartupAttributeInfo::UseInsecureJoinSpecified::set(System::Boolean value)
{
    this->useInsecureJoinFieldSpecified = value;
}

inline cli::array< System::Byte >^  StartupAttributeInfo::PreconfiguredLinkKey::get()
{
    return this->preconfiguredLinkKeyField;
}
inline System::Void StartupAttributeInfo::PreconfiguredLinkKey::set(cli::array< System::Byte >^  value)
{
    this->preconfiguredLinkKeyField = value;
}

inline System::Byte StartupAttributeInfo::NetworkKeySeqNum::get()
{
    return this->networkKeySeqNumField;
}
inline System::Void StartupAttributeInfo::NetworkKeySeqNum::set(System::Byte value)
{
    this->networkKeySeqNumField = value;
}

inline System::Boolean StartupAttributeInfo::NetworkKeySeqNumSpecified::get()
{
    return this->networkKeySeqNumFieldSpecified;
}
inline System::Void StartupAttributeInfo::NetworkKeySeqNumSpecified::set(System::Boolean value)
{
    this->networkKeySeqNumFieldSpecified = value;
}

inline KeyType StartupAttributeInfo::NetworkKeyType::get()
{
    return this->networkKeyTypeField;
}
inline System::Void StartupAttributeInfo::NetworkKeyType::set(KeyType value)
{
    this->networkKeyTypeField = value;
}

inline System::Boolean StartupAttributeInfo::NetworkKeyTypeSpecified::get()
{
    return this->networkKeyTypeFieldSpecified;
}
inline System::Void StartupAttributeInfo::NetworkKeyTypeSpecified::set(System::Boolean value)
{
    this->networkKeyTypeFieldSpecified = value;
}

inline System::UInt16 StartupAttributeInfo::NetworkManagerAddress::get()
{
    return this->networkManagerAddressField;
}
inline System::Void StartupAttributeInfo::NetworkManagerAddress::set(System::UInt16 value)
{
    this->networkManagerAddressField = value;
}

inline System::Boolean StartupAttributeInfo::NetworkManagerAddressSpecified::get()
{
    return this->networkManagerAddressFieldSpecified;
}
inline System::Void StartupAttributeInfo::NetworkManagerAddressSpecified::set(System::Boolean value)
{
    this->networkManagerAddressFieldSpecified = value;
}

inline System::Byte StartupAttributeInfo::StartupControl::get()
{
    return this->startupControlField;
}
inline System::Void StartupAttributeInfo::StartupControl::set(System::Byte value)
{
    this->startupControlField = value;
}

inline System::Boolean StartupAttributeInfo::StartupControlSpecified::get()
{
    return this->startupControlFieldSpecified;
}
inline System::Void StartupAttributeInfo::StartupControlSpecified::set(System::Boolean value)
{
    this->startupControlFieldSpecified = value;
}

inline System::Byte StartupAttributeInfo::ScanAttempts::get()
{
    return this->scanAttemptsField;
}
inline System::Void StartupAttributeInfo::ScanAttempts::set(System::Byte value)
{
    this->scanAttemptsField = value;
}

inline System::Boolean StartupAttributeInfo::ScanAttemptsSpecified::get()
{
    return this->scanAttemptsFieldSpecified;
}
inline System::Void StartupAttributeInfo::ScanAttemptsSpecified::set(System::Boolean value)
{
    this->scanAttemptsFieldSpecified = value;
}

inline System::UInt16 StartupAttributeInfo::TimeBetweenScans::get()
{
    return this->timeBetweenScansField;
}
inline System::Void StartupAttributeInfo::TimeBetweenScans::set(System::UInt16 value)
{
    this->timeBetweenScansField = value;
}

inline System::Boolean StartupAttributeInfo::TimeBetweenScansSpecified::get()
{
    return this->timeBetweenScansFieldSpecified;
}
inline System::Void StartupAttributeInfo::TimeBetweenScansSpecified::set(System::Boolean value)
{
    this->timeBetweenScansFieldSpecified = value;
}

inline System::UInt16 StartupAttributeInfo::RejoinInterval::get()
{
    return this->rejoinIntervalField;
}
inline System::Void StartupAttributeInfo::RejoinInterval::set(System::UInt16 value)
{
    this->rejoinIntervalField = value;
}

inline System::Boolean StartupAttributeInfo::RejoinIntervalSpecified::get()
{
    return this->rejoinIntervalFieldSpecified;
}
inline System::Void StartupAttributeInfo::RejoinIntervalSpecified::set(System::Boolean value)
{
    this->rejoinIntervalFieldSpecified = value;
}

inline System::UInt16 StartupAttributeInfo::maxRejoinInterval::get()
{
    return this->maxRejoinIntervalField;
}
inline System::Void StartupAttributeInfo::maxRejoinInterval::set(System::UInt16 value)
{
    this->maxRejoinIntervalField = value;
}

inline System::Boolean StartupAttributeInfo::maxRejoinIntervalSpecified::get()
{
    return this->maxRejoinIntervalFieldSpecified;
}
inline System::Void StartupAttributeInfo::maxRejoinIntervalSpecified::set(System::Boolean value)
{
    this->maxRejoinIntervalFieldSpecified = value;
}

inline System::UInt16 StartupAttributeInfo::IndirectPollRate::get()
{
    return this->indirectPollRateField;
}
inline System::Void StartupAttributeInfo::IndirectPollRate::set(System::UInt16 value)
{
    this->indirectPollRateField = value;
}

inline System::Boolean StartupAttributeInfo::IndirectPollRateSpecified::get()
{
    return this->indirectPollRateFieldSpecified;
}
inline System::Void StartupAttributeInfo::IndirectPollRateSpecified::set(System::Boolean value)
{
    this->indirectPollRateFieldSpecified = value;
}

inline System::Byte StartupAttributeInfo::ParentRetryThreshold::get()
{
    return this->parentRetryThresholdField;
}
inline System::Void StartupAttributeInfo::ParentRetryThreshold::set(System::Byte value)
{
    this->parentRetryThresholdField = value;
}

inline System::Boolean StartupAttributeInfo::ParentRetryThresholdSpecified::get()
{
    return this->parentRetryThresholdFieldSpecified;
}
inline System::Void StartupAttributeInfo::ParentRetryThresholdSpecified::set(System::Boolean value)
{
    this->parentRetryThresholdFieldSpecified = value;
}

inline System::Boolean StartupAttributeInfo::ConcentratorFlag::get()
{
    return this->concentratorFlagField;
}
inline System::Void StartupAttributeInfo::ConcentratorFlag::set(System::Boolean value)
{
    this->concentratorFlagField = value;
}

inline System::Boolean StartupAttributeInfo::ConcentratorFlagSpecified::get()
{
    return this->concentratorFlagFieldSpecified;
}
inline System::Void StartupAttributeInfo::ConcentratorFlagSpecified::set(System::Boolean value)
{
    this->concentratorFlagFieldSpecified = value;
}

inline System::Byte StartupAttributeInfo::ConcentratorRadius::get()
{
    return this->concentratorRadiusField;
}
inline System::Void StartupAttributeInfo::ConcentratorRadius::set(System::Byte value)
{
    this->concentratorRadiusField = value;
}

inline System::Boolean StartupAttributeInfo::ConcentratorRadiusSpecified::get()
{
    return this->concentratorRadiusFieldSpecified;
}
inline System::Void StartupAttributeInfo::ConcentratorRadiusSpecified::set(System::Boolean value)
{
    this->concentratorRadiusFieldSpecified = value;
}

inline System::Byte StartupAttributeInfo::ConcentratorDiscoveryTime::get()
{
    return this->concentratorDiscoveryTimeField;
}
inline System::Void StartupAttributeInfo::ConcentratorDiscoveryTime::set(System::Byte value)
{
    this->concentratorDiscoveryTimeField = value;
}

inline System::Boolean StartupAttributeInfo::ConcentratorDiscoveryTimeSpecified::get()
{
    return this->concentratorDiscoveryTimeFieldSpecified;
}
inline System::Void StartupAttributeInfo::ConcentratorDiscoveryTimeSpecified::set(System::Boolean value)
{
    this->concentratorDiscoveryTimeFieldSpecified = value;
}


inline System::Byte SimpleDescriptor::EndPoint::get()
{
    return this->endPointField;
}
inline System::Void SimpleDescriptor::EndPoint::set(System::Byte value)
{
    this->endPointField = value;
}

inline System::Boolean SimpleDescriptor::EndPointSpecified::get()
{
    return this->endPointFieldSpecified;
}
inline System::Void SimpleDescriptor::EndPointSpecified::set(System::Boolean value)
{
    this->endPointFieldSpecified = value;
}

inline System::UInt16 SimpleDescriptor::ApplicationProfileIdentifier::get()
{
    return this->applicationProfileIdentifierField;
}
inline System::Void SimpleDescriptor::ApplicationProfileIdentifier::set(System::UInt16 value)
{
    this->applicationProfileIdentifierField = value;
}

inline System::Boolean SimpleDescriptor::ApplicationProfileIdentifierSpecified::get()
{
    return this->applicationProfileIdentifierFieldSpecified;
}
inline System::Void SimpleDescriptor::ApplicationProfileIdentifierSpecified::set(System::Boolean value)
{
    this->applicationProfileIdentifierFieldSpecified = value;
}

inline System::UInt16 SimpleDescriptor::ApplicationDeviceIdentifier::get()
{
    return this->applicationDeviceIdentifierField;
}
inline System::Void SimpleDescriptor::ApplicationDeviceIdentifier::set(System::UInt16 value)
{
    this->applicationDeviceIdentifierField = value;
}

inline System::Boolean SimpleDescriptor::ApplicationDeviceIdentifierSpecified::get()
{
    return this->applicationDeviceIdentifierFieldSpecified;
}
inline System::Void SimpleDescriptor::ApplicationDeviceIdentifierSpecified::set(System::Boolean value)
{
    this->applicationDeviceIdentifierFieldSpecified = value;
}

inline System::Byte SimpleDescriptor::ApplicationDeviceVersion::get()
{
    return this->applicationDeviceVersionField;
}
inline System::Void SimpleDescriptor::ApplicationDeviceVersion::set(System::Byte value)
{
    this->applicationDeviceVersionField = value;
}

inline System::Boolean SimpleDescriptor::ApplicationDeviceVersionSpecified::get()
{
    return this->applicationDeviceVersionFieldSpecified;
}
inline System::Void SimpleDescriptor::ApplicationDeviceVersionSpecified::set(System::Boolean value)
{
    this->applicationDeviceVersionFieldSpecified = value;
}

inline cli::array< System::UInt16 >^  SimpleDescriptor::ApplicationInputCluster::get()
{
    return this->applicationInputClusterField;
}
inline System::Void SimpleDescriptor::ApplicationInputCluster::set(cli::array< System::UInt16 >^  value)
{
    this->applicationInputClusterField = value;
}

inline cli::array< System::UInt16 >^  SimpleDescriptor::ApplicationOutputCluster::get()
{
    return this->applicationOutputClusterField;
}
inline System::Void SimpleDescriptor::ApplicationOutputCluster::set(cli::array< System::UInt16 >^  value)
{
    this->applicationOutputClusterField = value;
}


inline Address^  NodeServices::Address::get()
{
    return this->addressField;
}
inline System::Void NodeServices::Address::set(Address^  value)
{
    this->addressField = value;
}

inline cli::array< NodeServicesActiveEndpoints^  >^  NodeServices::ActiveEndpoints::get()
{
    return this->activeEndpointsField;
}
inline System::Void NodeServices::ActiveEndpoints::set(cli::array< NodeServicesActiveEndpoints^  >^  value)
{
    this->activeEndpointsField = value;
}


inline System::Byte NodeServicesActiveEndpoints::EndPoint::get()
{
    return this->endPointField;
}
inline System::Void NodeServicesActiveEndpoints::EndPoint::set(System::Byte value)
{
    this->endPointField = value;
}

inline SimpleDescriptor^  NodeServicesActiveEndpoints::SimpleDescriptor::get()
{
    return this->simpleDescriptorField;
}
inline System::Void NodeServicesActiveEndpoints::SimpleDescriptor::set(SimpleDescriptor^  value)
{
    this->simpleDescriptorField = value;
}


inline System::UInt16 SonNode::ShortAddr::get()
{
    return this->shortAddrField;
}
inline System::Void SonNode::ShortAddr::set(System::UInt16 value)
{
    this->shortAddrField = value;
}

inline System::Boolean SonNode::ShortAddrSpecified::get()
{
    return this->shortAddrFieldSpecified;
}
inline System::Void SonNode::ShortAddrSpecified::set(System::Boolean value)
{
    this->shortAddrFieldSpecified = value;
}


inline cli::array< SonNode^  >^  AssociatedDevices::SonNode::get()
{
    return this->sonNodeField;
}
inline System::Void AssociatedDevices::SonNode::set(cli::array< SonNode^  >^  value)
{
    this->sonNodeField = value;
}

inline System::UInt16 AssociatedDevices::TotalNumber::get()
{
    return this->totalNumberField;
}
inline System::Void AssociatedDevices::TotalNumber::set(System::UInt16 value)
{
    this->totalNumberField = value;
}

inline System::Boolean AssociatedDevices::TotalNumberSpecified::get()
{
    return this->totalNumberFieldSpecified;
}
inline System::Void AssociatedDevices::TotalNumberSpecified::set(System::Boolean value)
{
    this->totalNumberFieldSpecified = value;
}


inline Address^  WSNNode::Address::get()
{
    return this->addressField;
}
inline System::Void WSNNode::Address::set(Address^  value)
{
    this->addressField = value;
}

inline Address^  WSNNode::ParentAddress::get()
{
    return this->parentAddressField;
}
inline System::Void WSNNode::ParentAddress::set(Address^  value)
{
    this->parentAddressField = value;
}

inline System::UInt32 WSNNode::StartIndex::get()
{
    return this->startIndexField;
}
inline System::Void WSNNode::StartIndex::set(System::UInt32 value)
{
    this->startIndexField = value;
}

inline cli::array< AssociatedDevices^  >^  WSNNode::AssociatedDevices::get()
{
    return this->associatedDevicesField;
}
inline System::Void WSNNode::AssociatedDevices::set(cli::array< AssociatedDevices^  >^  value)
{
    this->associatedDevicesField = value;
}

inline MACCapability^  WSNNode::CapabilityInformation::get()
{
    return this->capabilityInformationField;
}
inline System::Void WSNNode::CapabilityInformation::set(MACCapability^  value)
{
    this->capabilityInformationField = value;
}


inline System::UInt32 InterPANMessageEvent::CallbackIdentifier::get()
{
    return this->callbackIdentifierField;
}
inline System::Void InterPANMessageEvent::CallbackIdentifier::set(System::UInt32 value)
{
    this->callbackIdentifierField = value;
}

inline System::Boolean InterPANMessageEvent::CallbackIdentifierSpecified::get()
{
    return this->callbackIdentifierFieldSpecified;
}
inline System::Void InterPANMessageEvent::CallbackIdentifierSpecified::set(System::Boolean value)
{
    this->callbackIdentifierFieldSpecified = value;
}

inline System::UInt32 InterPANMessageEvent::SrcAddressMode::get()
{
    return this->srcAddressModeField;
}
inline System::Void InterPANMessageEvent::SrcAddressMode::set(System::UInt32 value)
{
    this->srcAddressModeField = value;
}

inline Address^  InterPANMessageEvent::SrcAddress::get()
{
    return this->srcAddressField;
}
inline System::Void InterPANMessageEvent::SrcAddress::set(Address^  value)
{
    this->srcAddressField = value;
}

inline System::UInt32 InterPANMessageEvent::DstAddressMode::get()
{
    return this->dstAddressModeField;
}
inline System::Void InterPANMessageEvent::DstAddressMode::set(System::UInt32 value)
{
    this->dstAddressModeField = value;
}

inline Address^  InterPANMessageEvent::DstAddress::get()
{
    return this->dstAddressField;
}
inline System::Void InterPANMessageEvent::DstAddress::set(Address^  value)
{
    this->dstAddressField = value;
}

inline System::UInt16 InterPANMessageEvent::SrcPANID::get()
{
    return this->srcPANIDField;
}
inline System::Void InterPANMessageEvent::SrcPANID::set(System::UInt16 value)
{
    this->srcPANIDField = value;
}

inline System::UInt16 InterPANMessageEvent::DstPANID::get()
{
    return this->dstPANIDField;
}
inline System::Void InterPANMessageEvent::DstPANID::set(System::UInt16 value)
{
    this->dstPANIDField = value;
}

inline System::UInt16 InterPANMessageEvent::ProfileID::get()
{
    return this->profileIDField;
}
inline System::Void InterPANMessageEvent::ProfileID::set(System::UInt16 value)
{
    this->profileIDField = value;
}

inline System::Boolean InterPANMessageEvent::ProfileIDSpecified::get()
{
    return this->profileIDFieldSpecified;
}
inline System::Void InterPANMessageEvent::ProfileIDSpecified::set(System::Boolean value)
{
    this->profileIDFieldSpecified = value;
}

inline System::UInt16 InterPANMessageEvent::ClusterID::get()
{
    return this->clusterIDField;
}
inline System::Void InterPANMessageEvent::ClusterID::set(System::UInt16 value)
{
    this->clusterIDField = value;
}

inline System::UInt32 InterPANMessageEvent::ASDULength::get()
{
    return this->aSDULengthField;
}
inline System::Void InterPANMessageEvent::ASDULength::set(System::UInt32 value)
{
    this->aSDULengthField = value;
}

inline cli::array< System::Byte >^  InterPANMessageEvent::ASDU::get()
{
    return this->aSDUField;
}
inline System::Void InterPANMessageEvent::ASDU::set(cli::array< System::Byte >^  value)
{
    this->aSDUField = value;
}

inline System::Byte InterPANMessageEvent::LinkQuality::get()
{
    return this->linkQualityField;
}
inline System::Void InterPANMessageEvent::LinkQuality::set(System::Byte value)
{
    this->linkQualityField = value;
}

inline System::Boolean InterPANMessageEvent::LinkQualitySpecified::get()
{
    return this->linkQualityFieldSpecified;
}
inline System::Void InterPANMessageEvent::LinkQualitySpecified::set(System::Boolean value)
{
    this->linkQualityFieldSpecified = value;
}


inline System::UInt32 APSMessageEvent::DestinationAddressMode::get()
{
    return this->destinationAddressModeField;
}
inline System::Void APSMessageEvent::DestinationAddressMode::set(System::UInt32 value)
{
    this->destinationAddressModeField = value;
}

inline System::Boolean APSMessageEvent::DestinationAddressModeSpecified::get()
{
    return this->destinationAddressModeFieldSpecified;
}
inline System::Void APSMessageEvent::DestinationAddressModeSpecified::set(System::Boolean value)
{
    this->destinationAddressModeFieldSpecified = value;
}

inline Address^  APSMessageEvent::DestinationAddress::get()
{
    return this->destinationAddressField;
}
inline System::Void APSMessageEvent::DestinationAddress::set(Address^  value)
{
    this->destinationAddressField = value;
}

inline System::Byte APSMessageEvent::DestinationEndpoint::get()
{
    return this->destinationEndpointField;
}
inline System::Void APSMessageEvent::DestinationEndpoint::set(System::Byte value)
{
    this->destinationEndpointField = value;
}

inline Address^  APSMessageEvent::SourceAddress::get()
{
    return this->sourceAddressField;
}
inline System::Void APSMessageEvent::SourceAddress::set(Address^  value)
{
    this->sourceAddressField = value;
}

inline System::UInt32 APSMessageEvent::SourceAddressMode::get()
{
    return this->sourceAddressModeField;
}
inline System::Void APSMessageEvent::SourceAddressMode::set(System::UInt32 value)
{
    this->sourceAddressModeField = value;
}

inline System::Boolean APSMessageEvent::SourceAddressModeSpecified::get()
{
    return this->sourceAddressModeFieldSpecified;
}
inline System::Void APSMessageEvent::SourceAddressModeSpecified::set(System::Boolean value)
{
    this->sourceAddressModeFieldSpecified = value;
}

inline System::Byte APSMessageEvent::SourceEndpoint::get()
{
    return this->sourceEndpointField;
}
inline System::Void APSMessageEvent::SourceEndpoint::set(System::Byte value)
{
    this->sourceEndpointField = value;
}

inline System::UInt16 APSMessageEvent::ProfileID::get()
{
    return this->profileIDField;
}
inline System::Void APSMessageEvent::ProfileID::set(System::UInt16 value)
{
    this->profileIDField = value;
}

inline System::Boolean APSMessageEvent::ProfileIDSpecified::get()
{
    return this->profileIDFieldSpecified;
}
inline System::Void APSMessageEvent::ProfileIDSpecified::set(System::Boolean value)
{
    this->profileIDFieldSpecified = value;
}

inline System::UInt16 APSMessageEvent::ClusterID::get()
{
    return this->clusterIDField;
}
inline System::Void APSMessageEvent::ClusterID::set(System::UInt16 value)
{
    this->clusterIDField = value;
}

inline cli::array< System::Byte >^  APSMessageEvent::Data::get()
{
    return this->dataField;
}
inline System::Void APSMessageEvent::Data::set(cli::array< System::Byte >^  value)
{
    this->dataField = value;
}

inline System::UInt16 APSMessageEvent::APSStatus::get()
{
    return this->aPSStatusField;
}
inline System::Void APSMessageEvent::APSStatus::set(System::UInt16 value)
{
    this->aPSStatusField = value;
}

inline SecurityStatus APSMessageEvent::SecurityStatus::get()
{
    return this->securityStatusField;
}
inline System::Void APSMessageEvent::SecurityStatus::set(SecurityStatus value)
{
    this->securityStatusField = value;
}

inline System::Boolean APSMessageEvent::SecurityStatusSpecified::get()
{
    return this->securityStatusFieldSpecified;
}
inline System::Void APSMessageEvent::SecurityStatusSpecified::set(System::Boolean value)
{
    this->securityStatusFieldSpecified = value;
}

inline System::Byte APSMessageEvent::LinkQuality::get()
{
    return this->linkQualityField;
}
inline System::Void APSMessageEvent::LinkQuality::set(System::Byte value)
{
    this->linkQualityField = value;
}

inline System::Boolean APSMessageEvent::LinkQualitySpecified::get()
{
    return this->linkQualityFieldSpecified;
}
inline System::Void APSMessageEvent::LinkQualitySpecified::set(System::Boolean value)
{
    this->linkQualityFieldSpecified = value;
}

inline System::UInt32 APSMessageEvent::RxTime::get()
{
    return this->rxTimeField;
}
inline System::Void APSMessageEvent::RxTime::set(System::UInt32 value)
{
    this->rxTimeField = value;
}

inline System::Boolean APSMessageEvent::RxTimeSpecified::get()
{
    return this->rxTimeFieldSpecified;
}
inline System::Void APSMessageEvent::RxTimeSpecified::set(System::Boolean value)
{
    this->rxTimeFieldSpecified = value;
}


inline System::UInt32 ZCLMessage::RxTime::get()
{
    return this->rxTimeField;
}
inline System::Void ZCLMessage::RxTime::set(System::UInt32 value)
{
    this->rxTimeField = value;
}

inline System::Byte ZCLMessage::DestinationEndpoint::get()
{
    return this->destinationEndpointField;
}
inline System::Void ZCLMessage::DestinationEndpoint::set(System::Byte value)
{
    this->destinationEndpointField = value;
}

inline Address^  ZCLMessage::SourceAddress::get()
{
    return this->sourceAddressField;
}
inline System::Void ZCLMessage::SourceAddress::set(Address^  value)
{
    this->sourceAddressField = value;
}

inline System::Byte ZCLMessage::SourceEndpoint::get()
{
    return this->sourceEndpointField;
}
inline System::Void ZCLMessage::SourceEndpoint::set(System::Byte value)
{
    this->sourceEndpointField = value;
}

inline System::Boolean ZCLMessage::SourceEndpointSpecified::get()
{
    return this->sourceEndpointFieldSpecified;
}
inline System::Void ZCLMessage::SourceEndpointSpecified::set(System::Boolean value)
{
    this->sourceEndpointFieldSpecified = value;
}

inline System::UInt16 ZCLMessage::ProfileID::get()
{
    return this->profileIDField;
}
inline System::Void ZCLMessage::ProfileID::set(System::UInt16 value)
{
    this->profileIDField = value;
}

inline System::Boolean ZCLMessage::ProfileIDSpecified::get()
{
    return this->profileIDFieldSpecified;
}
inline System::Void ZCLMessage::ProfileIDSpecified::set(System::Boolean value)
{
    this->profileIDFieldSpecified = value;
}

inline System::UInt16 ZCLMessage::ClusterID::get()
{
    return this->clusterIDField;
}
inline System::Void ZCLMessage::ClusterID::set(System::UInt16 value)
{
    this->clusterIDField = value;
}

inline cli::array< System::Byte >^  ZCLMessage::ZCLPayload::get()
{
    return this->zCLPayloadField;
}
inline System::Void ZCLMessage::ZCLPayload::set(cli::array< System::Byte >^  value)
{
    this->zCLPayloadField = value;
}

inline System::UInt32 ZCLMessage::APSStatus::get()
{
    return this->aPSStatusField;
}
inline System::Void ZCLMessage::APSStatus::set(System::UInt32 value)
{
    this->aPSStatusField = value;
}

inline System::UInt32 ZCLMessage::SourceAddressMode::get()
{
    return this->sourceAddressModeField;
}
inline System::Void ZCLMessage::SourceAddressMode::set(System::UInt32 value)
{
    this->sourceAddressModeField = value;
}

inline cli::array< System::Byte >^  ZCLMessage::ZCLHeader::get()
{
    return this->zCLHeaderField;
}
inline System::Void ZCLMessage::ZCLHeader::set(cli::array< System::Byte >^  value)
{
    this->zCLHeaderField = value;
}


inline Address^  ZDPMessage::SourceAddress::get()
{
    return this->sourceAddressField;
}
inline System::Void ZDPMessage::SourceAddress::set(Address^  value)
{
    this->sourceAddressField = value;
}

inline System::UInt32 ZDPMessage::SourceAddressMode::get()
{
    return this->sourceAddressModeField;
}
inline System::Void ZDPMessage::SourceAddressMode::set(System::UInt32 value)
{
    this->sourceAddressModeField = value;
}

inline SecurityStatus ZDPMessage::SecurityStatus::get()
{
    return this->securityStatusField;
}
inline System::Void ZDPMessage::SecurityStatus::set(SecurityStatus value)
{
    this->securityStatusField = value;
}

inline System::Boolean ZDPMessage::SecurityStatusSpecified::get()
{
    return this->securityStatusFieldSpecified;
}
inline System::Void ZDPMessage::SecurityStatusSpecified::set(System::Boolean value)
{
    this->securityStatusFieldSpecified = value;
}

inline System::Byte ZDPMessage::LinkQuality::get()
{
    return this->linkQualityField;
}
inline System::Void ZDPMessage::LinkQuality::set(System::Byte value)
{
    this->linkQualityField = value;
}

inline System::Boolean ZDPMessage::LinkQualitySpecified::get()
{
    return this->linkQualityFieldSpecified;
}
inline System::Void ZDPMessage::LinkQualitySpecified::set(System::Boolean value)
{
    this->linkQualityFieldSpecified = value;
}

inline System::UInt32 ZDPMessage::RxTime::get()
{
    return this->rxTimeField;
}
inline System::Void ZDPMessage::RxTime::set(System::UInt32 value)
{
    this->rxTimeField = value;
}

inline System::Boolean ZDPMessage::RxTimeSpecified::get()
{
    return this->rxTimeFieldSpecified;
}
inline System::Void ZDPMessage::RxTimeSpecified::set(System::Boolean value)
{
    this->rxTimeFieldSpecified = value;
}

inline System::UInt16 ZDPMessage::ClusterID::get()
{
    return this->clusterIDField;
}
inline System::Void ZDPMessage::ClusterID::set(System::UInt16 value)
{
    this->clusterIDField = value;
}

inline System::Boolean ZDPMessage::ClusterIDSpecified::get()
{
    return this->clusterIDFieldSpecified;
}
inline System::Void ZDPMessage::ClusterIDSpecified::set(System::Boolean value)
{
    this->clusterIDFieldSpecified = value;
}

inline cli::array< System::Byte >^  ZDPMessage::Command::get()
{
    return this->commandField;
}
inline System::Void ZDPMessage::Command::set(cli::array< System::Byte >^  value)
{
    this->commandField = value;
}


inline cli::array< DecodeLevel >^  Action::DecodeSpecification::get()
{
    return this->decodeSpecificationField;
}
inline System::Void Action::DecodeSpecification::set(cli::array< DecodeLevel >^  value)
{
    this->decodeSpecificationField = value;
}

inline System::String^  Action::ForwardingSpecification::get()
{
    return this->forwardingSpecificationField;
}
inline System::Void Action::ForwardingSpecification::set(System::String^  value)
{
    this->forwardingSpecificationField = value;
}


inline cli::array< Level >^  Filter::LevelSpecification::get()
{
    return this->levelSpecificationField;
}
inline System::Void Filter::LevelSpecification::set(cli::array< Level >^  value)
{
    this->levelSpecificationField = value;
}

inline cli::array< FilterAddressSpecification^  >^  Filter::AddressSpecification::get()
{
    return this->addressSpecificationField;
}
inline System::Void Filter::AddressSpecification::set(cli::array< FilterAddressSpecification^  >^  value)
{
    this->addressSpecificationField = value;
}

inline cli::array< FilterMessageSpecification^  >^  Filter::MessageSpecification::get()
{
    return this->messageSpecificationField;
}
inline System::Void Filter::MessageSpecification::set(cli::array< FilterMessageSpecification^  >^  value)
{
    this->messageSpecificationField = value;
}


inline Address^  FilterAddressSpecification::NWKSourceAddress::get()
{
    return this->nWKSourceAddressField;
}
inline System::Void FilterAddressSpecification::NWKSourceAddress::set(Address^  value)
{
    this->nWKSourceAddressField = value;
}

inline System::Byte FilterAddressSpecification::APSSourceEndpoint::get()
{
    return this->aPSSourceEndpointField;
}
inline System::Void FilterAddressSpecification::APSSourceEndpoint::set(System::Byte value)
{
    this->aPSSourceEndpointField = value;
}

inline System::Boolean FilterAddressSpecification::APSSourceEndpointSpecified::get()
{
    return this->aPSSourceEndpointFieldSpecified;
}
inline System::Void FilterAddressSpecification::APSSourceEndpointSpecified::set(System::Boolean value)
{
    this->aPSSourceEndpointFieldSpecified = value;
}

inline System::Byte FilterAddressSpecification::APSDestinationEndpoint::get()
{
    return this->aPSDestinationEndpointField;
}
inline System::Void FilterAddressSpecification::APSDestinationEndpoint::set(System::Byte value)
{
    this->aPSDestinationEndpointField = value;
}

inline System::Boolean FilterAddressSpecification::APSDestinationEndpointSpecified::get()
{
    return this->aPSDestinationEndpointFieldSpecified;
}
inline System::Void FilterAddressSpecification::APSDestinationEndpointSpecified::set(System::Boolean value)
{
    this->aPSDestinationEndpointFieldSpecified = value;
}


inline System::UInt16 FilterMessageSpecification::APSClusterIdentifier::get()
{
    return this->aPSClusterIdentifierField;
}
inline System::Void FilterMessageSpecification::APSClusterIdentifier::set(System::UInt16 value)
{
    this->aPSClusterIdentifierField = value;
}

inline System::Boolean FilterMessageSpecification::APSClusterIdentifierSpecified::get()
{
    return this->aPSClusterIdentifierFieldSpecified;
}
inline System::Void FilterMessageSpecification::APSClusterIdentifierSpecified::set(System::Boolean value)
{
    this->aPSClusterIdentifierFieldSpecified = value;
}

inline System::String^  FilterMessageSpecification::APSClusterGroup::get()
{
    return this->aPSClusterGroupField;
}
inline System::Void FilterMessageSpecification::APSClusterGroup::set(System::String^  value)
{
    this->aPSClusterGroupField = value;
}


inline GetVersionRequest::GetVersionRequest()
{
}


inline GetVersionResponse::GetVersionResponse()
{
}

inline GetVersionResponse::GetVersionResponse(System::Byte Status, Version^  Version)
{
    this->Status = Status;
    this->Version = Version;
}


inline CreateCallbackRequest::CreateCallbackRequest()
{
}

inline CreateCallbackRequest::CreateCallbackRequest(Filter^  Filter, Action^  Action)
{
    this->Filter = Filter;
    this->Action = Action;
}


inline CreateCallbackResponse::CreateCallbackResponse()
{
}

inline CreateCallbackResponse::CreateCallbackResponse(System::Byte Status, System::UInt32 CallbackIdentifier)
{
    this->Status = Status;
    this->CallbackIdentifier = CallbackIdentifier;
}


inline GetRequest::GetRequest()
{
}

inline GetRequest::GetRequest(System::String^  attrId)
{
    this->attrId = attrId;
}


inline GetResponse::GetResponse()
{
}

inline GetResponse::GetResponse(System::Byte Status, cli::array< System::Byte >^  __identifier(value))
{
    this->Status = Status;
    this->__identifier(value) = __identifier(value);
}


inline SetRequest::SetRequest()
{
}

inline SetRequest::SetRequest(System::String^  attrId, cli::array< System::Byte >^  __identifier(value))
{
    this->attrId = attrId;
    this->__identifier(value) = __identifier(value);
}


inline SetResponse::SetResponse()
{
}

inline SetResponse::SetResponse(System::Byte Status)
{
    this->Status = Status;
}


inline DeleteCallbackRequest::DeleteCallbackRequest()
{
}

inline DeleteCallbackRequest::DeleteCallbackRequest(System::UInt32 CallbackIdentifier)
{
    this->CallbackIdentifier = CallbackIdentifier;
}


inline DeleteCallbackResponse::DeleteCallbackResponse()
{
}

inline DeleteCallbackResponse::DeleteCallbackResponse(System::Byte Status)
{
    this->Status = Status;
}


inline ListCallbacksRequest::ListCallbacksRequest()
{
}


inline ListCallbacksResponse::ListCallbacksResponse()
{
}

inline ListCallbacksResponse::ListCallbacksResponse(System::Byte Status, cli::array< System::UInt32 >^  CallbackIdentiferList)
{
    this->Status = Status;
    this->CallbackIdentiferList = CallbackIdentiferList;
}


inline UpdateTimeoutRequest::UpdateTimeoutRequest()
{
}

inline UpdateTimeoutRequest::UpdateTimeoutRequest(cli::array< System::Byte >^  RequestIdentifier, System::UInt32 Timeout)
{
    this->RequestIdentifier = RequestIdentifier;
    this->Timeout = Timeout;
}


inline UpdateTimeoutResponse::UpdateTimeoutResponse()
{
}

inline UpdateTimeoutResponse::UpdateTimeoutResponse(System::Byte Status)
{
    this->Status = Status;
}


inline ZDPMessage^  PollCallbackResponseSendZDPResult::ZDPMessage::get()
{
    return this->zDPMessageField;
}
inline System::Void PollCallbackResponseSendZDPResult::ZDPMessage::set(ZDPMessage^  value)
{
    this->zDPMessageField = value;
}


inline ZCLMessage^  PollCallbackResponseSendZCLResult::ZCLMessage::get()
{
    return this->zCLMessageField;
}
inline System::Void PollCallbackResponseSendZCLResult::ZCLMessage::set(ZCLMessage^  value)
{
    this->zCLMessageField = value;
}


inline APSMessageEvent^  PollCallbackResponseSendAPSResult::APSMessage::get()
{
    return this->aPSMessageField;
}
inline System::Void PollCallbackResponseSendAPSResult::APSMessage::set(APSMessageEvent^  value)
{
    this->aPSMessageField = value;
}


inline InterPANMessageEvent^  PollCallbackResponseSendInterPANResult::InterPANMessage::get()
{
    return this->interPANMessageField;
}
inline System::Void PollCallbackResponseSendInterPANResult::InterPANMessage::set(InterPANMessageEvent^  value)
{
    this->interPANMessageField = value;
}


inline PollCallbackRequest::PollCallbackRequest()
{
}

inline PollCallbackRequest::PollCallbackRequest(System::UInt32 CallbackIdentifier)
{
    this->CallbackIdentifier = CallbackIdentifier;
}


inline PollCallbackResponse::PollCallbackResponse()
{
}

inline PollCallbackResponse::PollCallbackResponse(
            System::Byte Status, 
            DecodeLevel AppliedDecodeSpecification, 
            PollCallbackResponseSendZDPResult^  SendZDPResult, 
            PollCallbackResponseSendZCLResult^  SendZCLResult, 
            PollCallbackResponseSendAPSResult^  SendAPSResult, 
            PollCallbackResponseSendInterPANResult^  SendInterPANResult)
{
    this->Status = Status;
    this->AppliedDecodeSpecification = AppliedDecodeSpecification;
    this->SendZDPResult = SendZDPResult;
    this->SendZCLResult = SendZCLResult;
    this->SendAPSResult = SendAPSResult;
    this->SendInterPANResult = SendInterPANResult;
}


inline StartNodeDiscoveryRequest::StartNodeDiscoveryRequest()
{
}

inline StartNodeDiscoveryRequest::StartNodeDiscoveryRequest(System::String^  CallbackDestination, System::UInt32 Timeout, 
            System::Boolean ReportOnExistingNodes, System::Boolean ReportAnnouncements, System::Boolean ReportLeave)
{
    this->CallbackDestination = CallbackDestination;
    this->Timeout = Timeout;
    this->ReportOnExistingNodes = ReportOnExistingNodes;
    this->ReportAnnouncements = ReportAnnouncements;
    this->ReportLeave = ReportLeave;
}


inline StartNodeDiscoveryResponse::StartNodeDiscoveryResponse()
{
}

inline StartNodeDiscoveryResponse::StartNodeDiscoveryResponse(System::Byte Status, cli::array< System::Byte >^  RequestIdentifier)
{
    this->Status = Status;
    this->RequestIdentifier = RequestIdentifier;
}


inline ReadNodeCacheRequest::ReadNodeCacheRequest()
{
}


inline ReadNodeCacheResponse::ReadNodeCacheResponse()
{
}

inline ReadNodeCacheResponse::ReadNodeCacheResponse(System::Byte Status, cli::array< WSNNode^  >^  NodeInformation, System::UInt32 Node)
{
    this->Status = Status;
    this->NodeInformation = NodeInformation;
    this->Node = Node;
}


inline StartServiceDiscoveryRequest::StartServiceDiscoveryRequest()
{
}

inline StartServiceDiscoveryRequest::StartServiceDiscoveryRequest(System::UInt32 Timeout, System::String^  CallbackDestination, 
            System::UInt16 AddressOfInterest)
{
    this->Timeout = Timeout;
    this->CallbackDestination = CallbackDestination;
    this->AddressOfInterest = AddressOfInterest;
}


inline StartServiceDiscoveryResponse::StartServiceDiscoveryResponse()
{
}

inline StartServiceDiscoveryResponse::StartServiceDiscoveryResponse(System::Byte Status, cli::array< System::Byte >^  RequestIdentifier)
{
    this->Status = Status;
    this->RequestIdentifier = RequestIdentifier;
}


inline GetServiceDescriptorRequest::GetServiceDescriptorRequest()
{
}

inline GetServiceDescriptorRequest::GetServiceDescriptorRequest(System::UInt32 Timeout, System::String^  CallbackDestination, 
            Address^  Address)
{
    this->Timeout = Timeout;
    this->CallbackDestination = CallbackDestination;
    this->Address = Address;
}


inline GetServiceDescriptorResponse::GetServiceDescriptorResponse()
{
}

inline GetServiceDescriptorResponse::GetServiceDescriptorResponse(System::Byte Status, cli::array< System::Byte >^  RequestIdentifier)
{
    this->Status = Status;
    this->RequestIdentifier = RequestIdentifier;
}


inline ReadServiceCacheRequest::ReadServiceCacheRequest()
{
}


inline ReadServiceCacheResponse::ReadServiceCacheResponse()
{
}

inline ReadServiceCacheResponse::ReadServiceCacheResponse(System::Byte Status, cli::array< NodeServices^  >^  ServiceInformation, 
            System::UInt32 Node)
{
    this->Status = Status;
    this->ServiceInformation = ServiceInformation;
    this->Node = Node;
}


inline StartGatewayDeviceRequest::StartGatewayDeviceRequest()
{
}

inline StartGatewayDeviceRequest::StartGatewayDeviceRequest(StartupAttributeInfo^  Request, System::UInt32 Timeout, System::String^  CallbackDestination)
{
    this->Request = Request;
    this->Timeout = Timeout;
    this->CallbackDestination = CallbackDestination;
}


inline StartGatewayDeviceResponse::StartGatewayDeviceResponse()
{
}

inline StartGatewayDeviceResponse::StartGatewayDeviceResponse(System::Byte Status, cli::array< System::Byte >^  RequestIdentifier, 
            System::Byte NWKStatus)
{
    this->Status = Status;
    this->RequestIdentifier = RequestIdentifier;
    this->NWKStatus = NWKStatus;
}


inline ConfigureStartupAttributeSetRequest::ConfigureStartupAttributeSetRequest()
{
}

inline ConfigureStartupAttributeSetRequest::ConfigureStartupAttributeSetRequest(StartupAttributeInfo^  StartupAttrInfo)
{
    this->StartupAttrInfo = StartupAttrInfo;
}


inline ConfigureStartupAttributeSetResponse::ConfigureStartupAttributeSetResponse()
{
}

inline ConfigureStartupAttributeSetResponse::ConfigureStartupAttributeSetResponse(System::Byte Status)
{
    this->Status = Status;
}


inline ReadStartupAttributeSetRequest::ReadStartupAttributeSetRequest()
{
}

inline ReadStartupAttributeSetRequest::ReadStartupAttributeSetRequest(System::UInt32 StartAttrSetIndex)
{
    this->StartAttrSetIndex = StartAttrSetIndex;
}


inline ReadStartupAttributeSetResponse::ReadStartupAttributeSetResponse()
{
}

inline ReadStartupAttributeSetResponse::ReadStartupAttributeSetResponse(System::Byte Status, StartupAttributeInfo^  StartupAttributeInfo)
{
    this->Status = Status;
    this->StartupAttributeInfo = StartupAttributeInfo;
}


inline ZDPMessage^  PollResultsResponseSendZDPResult::ZDPMessage::get()
{
    return this->zDPMessageField;
}
inline System::Void PollResultsResponseSendZDPResult::ZDPMessage::set(ZDPMessage^  value)
{
    this->zDPMessageField = value;
}


inline ZCLMessage^  PollResultsResponseSendZCLResult::ZCLMessage::get()
{
    return this->zCLMessageField;
}
inline System::Void PollResultsResponseSendZCLResult::ZCLMessage::set(ZCLMessage^  value)
{
    this->zCLMessageField = value;
}


inline APSMessageEvent^  PollResultsResponseSendAPSResult::APSMessageEvent::get()
{
    return this->aPSMessageEventField;
}
inline System::Void PollResultsResponseSendAPSResult::APSMessageEvent::set(APSMessageEvent^  value)
{
    this->aPSMessageEventField = value;
}


inline InterPANMessageEvent^  PollResultsResponseSendInterPANResult::InterPANMessageEvent::get()
{
    return this->interPANMessageEventField;
}
inline System::Void PollResultsResponseSendInterPANResult::InterPANMessageEvent::set(InterPANMessageEvent^  value)
{
    this->interPANMessageEventField = value;
}


inline PollResultsRequest::PollResultsRequest()
{
}

inline PollResultsRequest::PollResultsRequest(cli::array< System::Byte >^  RequestIdentifier)
{
    this->RequestIdentifier = RequestIdentifier;
}


inline PollResultsResponse::PollResultsResponse()
{
}

inline PollResultsResponse::PollResultsResponse(
            System::Byte Status, 
            cli::array< System::Byte >^  RequestIdentifier, 
            DecodeLevel AppliedDecodeSpecification, 
            PollResultsResponseSendZDPResult^  SendZDPResult, 
            PollResultsResponseSendZCLResult^  SendZCLResult, 
            PollResultsResponseSendAPSResult^  SendAPSResult, 
            PollResultsResponseSendInterPANResult^  SendInterPANResult)
{
    this->Status = Status;
    this->RequestIdentifier = RequestIdentifier;
    this->AppliedDecodeSpecification = AppliedDecodeSpecification;
    this->SendZDPResult = SendZDPResult;
    this->SendZCLResult = SendZCLResult;
    this->SendAPSResult = SendAPSResult;
    this->SendInterPANResult = SendInterPANResult;
}


inline CreateAliasAddressRequest::CreateAliasAddressRequest()
{
}

inline CreateAliasAddressRequest::CreateAliasAddressRequest(System::String^  Alias, System::UInt64 ExtendedAddress)
{
    this->Alias = Alias;
    this->ExtendedAddress = ExtendedAddress;
}


inline CreateAliasAddressResponse::CreateAliasAddressResponse()
{
}

inline CreateAliasAddressResponse::CreateAliasAddressResponse(System::Byte Status)
{
    this->Status = Status;
}


inline DeleteAliasAddressRequest::DeleteAliasAddressRequest()
{
}

inline DeleteAliasAddressRequest::DeleteAliasAddressRequest(System::String^  Alias)
{
    this->Alias = Alias;
}


inline DeleteAliasAddressResponse::DeleteAliasAddressResponse()
{
}

inline DeleteAliasAddressResponse::DeleteAliasAddressResponse(System::Byte Status)
{
    this->Status = Status;
}


inline ListAddressesRequest::ListAddressesRequest()
{
}

inline ListAddressesRequest::ListAddressesRequest(Address^  Address)
{
    this->Address = Address;
}


inline ListAddressesResponse::ListAddressesResponse()
{
}

inline ListAddressesResponse::ListAddressesResponse(System::Byte Status, System::UInt32 NumOfAddr, cli::array< Address^  >^  AddrList)
{
    this->Status = Status;
    this->NumOfAddr = NumOfAddr;
    this->AddrList = AddrList;
}


inline GmoLeaveRequest::GmoLeaveRequest()
{
}

inline GmoLeaveRequest::GmoLeaveRequest(System::UInt32 Timeout, System::String^  CallbackDestination, Address^  DeviceAddress, 
            System::Boolean RemoveChildren, System::Boolean Rejoin)
{
    this->Timeout = Timeout;
    this->CallbackDestination = CallbackDestination;
    this->DeviceAddress = DeviceAddress;
    this->RemoveChildren = RemoveChildren;
    this->Rejoin = Rejoin;
}


inline GmoLeaveResponse::GmoLeaveResponse()
{
}

inline GmoLeaveResponse::GmoLeaveResponse(System::Byte Status, cli::array< System::Byte >^  RequestIdentifier, System::Byte MgmtCommandStatus)
{
    this->Status = Status;
    this->RequestIdentifier = RequestIdentifier;
    this->MgmtCommandStatus = MgmtCommandStatus;
}


inline PermitJoinRequest::PermitJoinRequest()
{
}

inline PermitJoinRequest::PermitJoinRequest(
            System::UInt32 Timeout, 
            System::String^  CallbackDestination, 
            Address^  DestinationAddress, 
            System::UInt32 DestinationAddressMode, 
            System::Byte PermitDuration, 
            System::Boolean TCSignificane)
{
    this->Timeout = Timeout;
    this->CallbackDestination = CallbackDestination;
    this->DestinationAddress = DestinationAddress;
    this->DestinationAddressMode = DestinationAddressMode;
    this->PermitDuration = PermitDuration;
    this->TCSignificane = TCSignificane;
}


inline PermitJoinResponse::PermitJoinResponse()
{
}

inline PermitJoinResponse::PermitJoinResponse(System::Byte Status, cli::array< System::Byte >^  RequestIdentifier, System::Byte MgmtCommandStatus)
{
    this->Status = Status;
    this->RequestIdentifier = RequestIdentifier;
    this->MgmtCommandStatus = MgmtCommandStatus;
}



inline gmoClient::gmoClient()
{
}

inline gmoClient::gmoClient(System::String^  endpointConfigurationName) : 
        System::ServiceModel::ClientBase<gmo^ >(endpointConfigurationName)
{
}

inline gmoClient::gmoClient(System::String^  endpointConfigurationName, System::String^  remoteAddress) : 
        System::ServiceModel::ClientBase<gmo^ >(endpointConfigurationName, remoteAddress)
{
}

inline gmoClient::gmoClient(System::String^  endpointConfigurationName, System::ServiceModel::EndpointAddress^  remoteAddress) : 
        System::ServiceModel::ClientBase<gmo^ >(endpointConfigurationName, remoteAddress)
{
}

inline gmoClient::gmoClient(System::ServiceModel::Channels::Binding^  binding, System::ServiceModel::EndpointAddress^  remoteAddress) : 
        System::ServiceModel::ClientBase<gmo^ >(binding, remoteAddress)
{
}

inline GetVersionResponse^  gmoClient::__gmo__GetVersion(GetVersionRequest^  request)
{
    return __super::Channel->GetVersion(request);
}

inline System::Byte gmoClient::GetVersion(Version^  %Version)
{
    GetVersionRequest^  inValue = (gcnew GetVersionRequest());
    GetVersionResponse^  retVal = (cli::safe_cast<gmo^  >(this))->GetVersion(inValue);
    Version = retVal->Version;
    return retVal->Status;
}

inline CreateCallbackResponse^  gmoClient::__gmo__CreateCallback(CreateCallbackRequest^  request)
{
    return __super::Channel->CreateCallback(request);
}

inline System::Byte gmoClient::CreateCallback(Filter^  Filter, Action^  Action, System::UInt32 %CallbackIdentifier)
{
    CreateCallbackRequest^  inValue = (gcnew CreateCallbackRequest());
    inValue->Filter = Filter;
    inValue->Action = Action;
    CreateCallbackResponse^  retVal = (cli::safe_cast<gmo^  >(this))->CreateCallback(inValue);
    CallbackIdentifier = retVal->CallbackIdentifier;
    return retVal->Status;
}

inline GetResponse^  gmoClient::__gmo__Get(GetRequest^  request)
{
    return __super::Channel->Get(request);
}

inline System::Byte gmoClient::Get(System::String^  attrId, cli::array< System::Byte >^  %__identifier(value))
{
    GetRequest^  inValue = (gcnew GetRequest());
    inValue->attrId = attrId;
    GetResponse^  retVal = (cli::safe_cast<gmo^  >(this))->Get(inValue);
    __identifier(value) = retVal->__identifier(value);
    return retVal->Status;
}

inline SetResponse^  gmoClient::__gmo__Set(SetRequest^  request)
{
    return __super::Channel->Set(request);
}

inline System::Byte gmoClient::Set(System::String^  attrId, cli::array< System::Byte >^  __identifier(value))
{
    SetRequest^  inValue = (gcnew SetRequest());
    inValue->attrId = attrId;
    inValue->__identifier(value) = __identifier(value);
    SetResponse^  retVal = (cli::safe_cast<gmo^  >(this))->Set(inValue);
    return retVal->Status;
}

inline DeleteCallbackResponse^  gmoClient::__gmo__DeleteCallback(DeleteCallbackRequest^  request)
{
    return __super::Channel->DeleteCallback(request);
}

inline System::Byte gmoClient::DeleteCallback(System::UInt32 CallbackIdentifier)
{
    DeleteCallbackRequest^  inValue = (gcnew DeleteCallbackRequest());
    inValue->CallbackIdentifier = CallbackIdentifier;
    DeleteCallbackResponse^  retVal = (cli::safe_cast<gmo^  >(this))->DeleteCallback(inValue);
    return retVal->Status;
}

inline ListCallbacksResponse^  gmoClient::__gmo__ListCallbacks(ListCallbacksRequest^  request)
{
    return __super::Channel->ListCallbacks(request);
}

inline System::Byte gmoClient::ListCallbacks(cli::array< System::UInt32 >^  %CallbackIdentiferList)
{
    ListCallbacksRequest^  inValue = (gcnew ListCallbacksRequest());
    ListCallbacksResponse^  retVal = (cli::safe_cast<gmo^  >(this))->ListCallbacks(inValue);
    CallbackIdentiferList = retVal->CallbackIdentiferList;
    return retVal->Status;
}

inline UpdateTimeoutResponse^  gmoClient::__gmo__UpdateTimeout(UpdateTimeoutRequest^  request)
{
    return __super::Channel->UpdateTimeout(request);
}

inline System::Byte gmoClient::UpdateTimeout(cli::array< System::Byte >^  RequestIdentifier, System::UInt32 Timeout)
{
    UpdateTimeoutRequest^  inValue = (gcnew UpdateTimeoutRequest());
    inValue->RequestIdentifier = RequestIdentifier;
    inValue->Timeout = Timeout;
    UpdateTimeoutResponse^  retVal = (cli::safe_cast<gmo^  >(this))->UpdateTimeout(inValue);
    return retVal->Status;
}

inline PollCallbackResponse^  gmoClient::__gmo__PollCallback(PollCallbackRequest^  request)
{
    return __super::Channel->PollCallback(request);
}

inline System::Byte gmoClient::PollCallback(
            System::UInt32 CallbackIdentifier, 
            DecodeLevel %AppliedDecodeSpecification, 
            PollCallbackResponseSendZDPResult^  %SendZDPResult, 
            PollCallbackResponseSendZCLResult^  %SendZCLResult, 
            PollCallbackResponseSendAPSResult^  %SendAPSResult, 
            PollCallbackResponseSendInterPANResult^  %SendInterPANResult)
{
    PollCallbackRequest^  inValue = (gcnew PollCallbackRequest());
    inValue->CallbackIdentifier = CallbackIdentifier;
    PollCallbackResponse^  retVal = (cli::safe_cast<gmo^  >(this))->PollCallback(inValue);
    AppliedDecodeSpecification = retVal->AppliedDecodeSpecification;
    SendZDPResult = retVal->SendZDPResult;
    SendZCLResult = retVal->SendZCLResult;
    SendAPSResult = retVal->SendAPSResult;
    SendInterPANResult = retVal->SendInterPANResult;
    return retVal->Status;
}

inline StartNodeDiscoveryResponse^  gmoClient::__gmo__StartNodeDiscovery(StartNodeDiscoveryRequest^  request)
{
    return __super::Channel->StartNodeDiscovery(request);
}

inline System::Byte gmoClient::StartNodeDiscovery(
            System::String^  CallbackDestination, 
            System::UInt32 Timeout, 
            System::Boolean ReportOnExistingNodes, 
            System::Boolean ReportAnnouncements, 
            System::Boolean ReportLeave, 
            cli::array< System::Byte >^  %RequestIdentifier)
{
    StartNodeDiscoveryRequest^  inValue = (gcnew StartNodeDiscoveryRequest());
    inValue->CallbackDestination = CallbackDestination;
    inValue->Timeout = Timeout;
    inValue->ReportOnExistingNodes = ReportOnExistingNodes;
    inValue->ReportAnnouncements = ReportAnnouncements;
    inValue->ReportLeave = ReportLeave;
    StartNodeDiscoveryResponse^  retVal = (cli::safe_cast<gmo^  >(this))->StartNodeDiscovery(inValue);
    RequestIdentifier = retVal->RequestIdentifier;
    return retVal->Status;
}

inline ReadNodeCacheResponse^  gmoClient::__gmo__ReadNodeCache(ReadNodeCacheRequest^  request)
{
    return __super::Channel->ReadNodeCache(request);
}

inline System::Byte gmoClient::ReadNodeCache(cli::array< WSNNode^  >^  %NodeInformation, System::UInt32 %Node)
{
    ReadNodeCacheRequest^  inValue = (gcnew ReadNodeCacheRequest());
    ReadNodeCacheResponse^  retVal = (cli::safe_cast<gmo^  >(this))->ReadNodeCache(inValue);
    NodeInformation = retVal->NodeInformation;
    Node = retVal->Node;
    return retVal->Status;
}

inline StartServiceDiscoveryResponse^  gmoClient::__gmo__StartServiceDiscovery(StartServiceDiscoveryRequest^  request)
{
    return __super::Channel->StartServiceDiscovery(request);
}

inline System::Byte gmoClient::StartServiceDiscovery(System::UInt32 Timeout, System::String^  CallbackDestination, System::UInt16 AddressOfInterest, 
            cli::array< System::Byte >^  %RequestIdentifier)
{
    StartServiceDiscoveryRequest^  inValue = (gcnew StartServiceDiscoveryRequest());
    inValue->Timeout = Timeout;
    inValue->CallbackDestination = CallbackDestination;
    inValue->AddressOfInterest = AddressOfInterest;
    StartServiceDiscoveryResponse^  retVal = (cli::safe_cast<gmo^  >(this))->StartServiceDiscovery(inValue);
    RequestIdentifier = retVal->RequestIdentifier;
    return retVal->Status;
}

inline GetServiceDescriptorResponse^  gmoClient::__gmo__GetServiceDescriptor(GetServiceDescriptorRequest^  request)
{
    return __super::Channel->GetServiceDescriptor(request);
}

inline System::Byte gmoClient::GetServiceDescriptor(System::UInt32 Timeout, System::String^  CallbackDestination, Address^  Address, 
            cli::array< System::Byte >^  %RequestIdentifier)
{
    GetServiceDescriptorRequest^  inValue = (gcnew GetServiceDescriptorRequest());
    inValue->Timeout = Timeout;
    inValue->CallbackDestination = CallbackDestination;
    inValue->Address = Address;
    GetServiceDescriptorResponse^  retVal = (cli::safe_cast<gmo^  >(this))->GetServiceDescriptor(inValue);
    RequestIdentifier = retVal->RequestIdentifier;
    return retVal->Status;
}

inline ReadServiceCacheResponse^  gmoClient::__gmo__ReadServiceCache(ReadServiceCacheRequest^  request)
{
    return __super::Channel->ReadServiceCache(request);
}

inline System::Byte gmoClient::ReadServiceCache(cli::array< NodeServices^  >^  %ServiceInformation, System::UInt32 %Node)
{
    ReadServiceCacheRequest^  inValue = (gcnew ReadServiceCacheRequest());
    ReadServiceCacheResponse^  retVal = (cli::safe_cast<gmo^  >(this))->ReadServiceCache(inValue);
    ServiceInformation = retVal->ServiceInformation;
    Node = retVal->Node;
    return retVal->Status;
}

inline StartGatewayDeviceResponse^  gmoClient::__gmo__StartGatewayDevice(StartGatewayDeviceRequest^  request)
{
    return __super::Channel->StartGatewayDevice(request);
}

inline System::Byte gmoClient::StartGatewayDevice(StartupAttributeInfo^  Request, System::UInt32 Timeout, System::String^  CallbackDestination, 
            cli::array< System::Byte >^  %RequestIdentifier, System::Byte %NWKStatus)
{
    StartGatewayDeviceRequest^  inValue = (gcnew StartGatewayDeviceRequest());
    inValue->Request = Request;
    inValue->Timeout = Timeout;
    inValue->CallbackDestination = CallbackDestination;
    StartGatewayDeviceResponse^  retVal = (cli::safe_cast<gmo^  >(this))->StartGatewayDevice(inValue);
    RequestIdentifier = retVal->RequestIdentifier;
    NWKStatus = retVal->NWKStatus;
    return retVal->Status;
}

inline ConfigureStartupAttributeSetResponse^  gmoClient::__gmo__ConfigureStartupAttributeSet(ConfigureStartupAttributeSetRequest^  request)
{
    return __super::Channel->ConfigureStartupAttributeSet(request);
}

inline System::Byte gmoClient::ConfigureStartupAttributeSet(StartupAttributeInfo^  StartupAttrInfo)
{
    ConfigureStartupAttributeSetRequest^  inValue = (gcnew ConfigureStartupAttributeSetRequest());
    inValue->StartupAttrInfo = StartupAttrInfo;
    ConfigureStartupAttributeSetResponse^  retVal = (cli::safe_cast<gmo^  >(this))->ConfigureStartupAttributeSet(inValue);
    return retVal->Status;
}

inline ReadStartupAttributeSetResponse^  gmoClient::__gmo__ReadStartupAttributeSet(ReadStartupAttributeSetRequest^  request)
{
    return __super::Channel->ReadStartupAttributeSet(request);
}

inline System::Byte gmoClient::ReadStartupAttributeSet(System::UInt32 StartAttrSetIndex, StartupAttributeInfo^  %StartupAttributeInfo)
{
    ReadStartupAttributeSetRequest^  inValue = (gcnew ReadStartupAttributeSetRequest());
    inValue->StartAttrSetIndex = StartAttrSetIndex;
    ReadStartupAttributeSetResponse^  retVal = (cli::safe_cast<gmo^  >(this))->ReadStartupAttributeSet(inValue);
    StartupAttributeInfo = retVal->StartupAttributeInfo;
    return retVal->Status;
}

inline PollResultsResponse^  gmoClient::__gmo__PollResults(PollResultsRequest^  request)
{
    return __super::Channel->PollResults(request);
}

inline System::Byte gmoClient::PollResults(
            cli::array< System::Byte >^  %RequestIdentifier, 
            DecodeLevel %AppliedDecodeSpecification, 
            PollResultsResponseSendZDPResult^  %SendZDPResult, 
            PollResultsResponseSendZCLResult^  %SendZCLResult, 
            PollResultsResponseSendAPSResult^  %SendAPSResult, 
            PollResultsResponseSendInterPANResult^  %SendInterPANResult)
{
    PollResultsRequest^  inValue = (gcnew PollResultsRequest());
    inValue->RequestIdentifier = RequestIdentifier;
    PollResultsResponse^  retVal = (cli::safe_cast<gmo^  >(this))->PollResults(inValue);
    RequestIdentifier = retVal->RequestIdentifier;
    AppliedDecodeSpecification = retVal->AppliedDecodeSpecification;
    SendZDPResult = retVal->SendZDPResult;
    SendZCLResult = retVal->SendZCLResult;
    SendAPSResult = retVal->SendAPSResult;
    SendInterPANResult = retVal->SendInterPANResult;
    return retVal->Status;
}

inline CreateAliasAddressResponse^  gmoClient::__gmo__CreateAliasAddress(CreateAliasAddressRequest^  request)
{
    return __super::Channel->CreateAliasAddress(request);
}

inline System::Byte gmoClient::CreateAliasAddress(System::String^  Alias, System::UInt64 ExtendedAddress)
{
    CreateAliasAddressRequest^  inValue = (gcnew CreateAliasAddressRequest());
    inValue->Alias = Alias;
    inValue->ExtendedAddress = ExtendedAddress;
    CreateAliasAddressResponse^  retVal = (cli::safe_cast<gmo^  >(this))->CreateAliasAddress(inValue);
    return retVal->Status;
}

inline DeleteAliasAddressResponse^  gmoClient::__gmo__DeleteAliasAddress(DeleteAliasAddressRequest^  request)
{
    return __super::Channel->DeleteAliasAddress(request);
}

inline System::Byte gmoClient::DeleteAliasAddress(System::String^  Alias)
{
    DeleteAliasAddressRequest^  inValue = (gcnew DeleteAliasAddressRequest());
    inValue->Alias = Alias;
    DeleteAliasAddressResponse^  retVal = (cli::safe_cast<gmo^  >(this))->DeleteAliasAddress(inValue);
    return retVal->Status;
}

inline ListAddressesResponse^  gmoClient::__gmo__ListAddresses(ListAddressesRequest^  request)
{
    return __super::Channel->ListAddresses(request);
}

inline System::Byte gmoClient::ListAddresses(Address^  Address, System::UInt32 %NumOfAddr, cli::array< Address^  >^  %AddrList)
{
    ListAddressesRequest^  inValue = (gcnew ListAddressesRequest());
    inValue->Address = Address;
    ListAddressesResponse^  retVal = (cli::safe_cast<gmo^  >(this))->ListAddresses(inValue);
    NumOfAddr = retVal->NumOfAddr;
    AddrList = retVal->AddrList;
    return retVal->Status;
}

inline GmoLeaveResponse^  gmoClient::__gmo__GmoLeave(GmoLeaveRequest^  request)
{
    return __super::Channel->GmoLeave(request);
}

inline System::Byte gmoClient::GmoLeave(
            System::UInt32 Timeout, 
            System::String^  CallbackDestination, 
            Address^  DeviceAddress, 
            System::Boolean RemoveChildren, 
            System::Boolean Rejoin, 
            cli::array< System::Byte >^  %RequestIdentifier, 
            System::Byte %MgmtCommandStatus)
{
    GmoLeaveRequest^  inValue = (gcnew GmoLeaveRequest());
    inValue->Timeout = Timeout;
    inValue->CallbackDestination = CallbackDestination;
    inValue->DeviceAddress = DeviceAddress;
    inValue->RemoveChildren = RemoveChildren;
    inValue->Rejoin = Rejoin;
    GmoLeaveResponse^  retVal = (cli::safe_cast<gmo^  >(this))->GmoLeave(inValue);
    RequestIdentifier = retVal->RequestIdentifier;
    MgmtCommandStatus = retVal->MgmtCommandStatus;
    return retVal->Status;
}

inline PermitJoinResponse^  gmoClient::__gmo__PermitJoin(PermitJoinRequest^  request)
{
    return __super::Channel->PermitJoin(request);
}

inline System::Byte gmoClient::PermitJoin(
            System::UInt32 Timeout, 
            System::String^  CallbackDestination, 
            Address^  DestinationAddress, 
            System::UInt32 DestinationAddressMode, 
            System::Byte PermitDuration, 
            System::Boolean TCSignificane, 
            cli::array< System::Byte >^  %RequestIdentifier, 
            System::Byte %MgmtCommandStatus)
{
    PermitJoinRequest^  inValue = (gcnew PermitJoinRequest());
    inValue->Timeout = Timeout;
    inValue->CallbackDestination = CallbackDestination;
    inValue->DestinationAddress = DestinationAddress;
    inValue->DestinationAddressMode = DestinationAddressMode;
    inValue->PermitDuration = PermitDuration;
    inValue->TCSignificane = TCSignificane;
    PermitJoinResponse^  retVal = (cli::safe_cast<gmo^  >(this))->PermitJoin(inValue);
    RequestIdentifier = retVal->RequestIdentifier;
    MgmtCommandStatus = retVal->MgmtCommandStatus;
    return retVal->Status;
}




inline SendZDPCommandRequest::SendZDPCommandRequest()
{
}

inline SendZDPCommandRequest::SendZDPCommandRequest(SendZDPCommandRequestBody^  Body)
{
    this->Body = Body;
}


inline SendZDPCommandRequestBody::SendZDPCommandRequestBody()
{
}

inline SendZDPCommandRequestBody::SendZDPCommandRequestBody(System::UInt32 Timeout, System::String^  CallbackDestination, 
            www::zigbee::org::GWGSchema::ZDPCommand^  Command)
{
    this->Timeout = Timeout;
    this->CallbackDestination = CallbackDestination;
    this->Command = Command;
}


inline SendZDPCommandResponse::SendZDPCommandResponse()
{
}

inline SendZDPCommandResponse::SendZDPCommandResponse(SendZDPCommandResponseBody^  Body)
{
    this->Body = Body;
}


inline SendZDPCommandResponseBody::SendZDPCommandResponseBody()
{
}

inline SendZDPCommandResponseBody::SendZDPCommandResponseBody(System::Byte Status, System::String^  RequestIdentifier, www::zigbee::org::GWGSchema::ZDPMessage^  Message)
{
    this->Status = Status;
    this->RequestIdentifier = RequestIdentifier;
    this->Message = Message;
}



inline zdpClient::zdpClient()
{
}

inline zdpClient::zdpClient(System::String^  endpointConfigurationName) : 
        System::ServiceModel::ClientBase<zdp^ >(endpointConfigurationName)
{
}

inline zdpClient::zdpClient(System::String^  endpointConfigurationName, System::String^  remoteAddress) : 
        System::ServiceModel::ClientBase<zdp^ >(endpointConfigurationName, remoteAddress)
{
}

inline zdpClient::zdpClient(System::String^  endpointConfigurationName, System::ServiceModel::EndpointAddress^  remoteAddress) : 
        System::ServiceModel::ClientBase<zdp^ >(endpointConfigurationName, remoteAddress)
{
}

inline zdpClient::zdpClient(System::ServiceModel::Channels::Binding^  binding, System::ServiceModel::EndpointAddress^  remoteAddress) : 
        System::ServiceModel::ClientBase<zdp^ >(binding, remoteAddress)
{
}

inline SendZDPCommandResponse^  zdpClient::__zdp__SendZDPCommand(SendZDPCommandRequest^  request)
{
    return __super::Channel->SendZDPCommand(request);
}

inline System::Byte zdpClient::SendZDPCommand(System::UInt32 Timeout, System::String^  CallbackDestination, www::zigbee::org::GWGSchema::ZDPCommand^  Command, 
            System::String^  %RequestIdentifier, www::zigbee::org::GWGSchema::ZDPMessage^  %Message)
{
    SendZDPCommandRequest^  inValue = (gcnew SendZDPCommandRequest());
    inValue->Body = (gcnew SendZDPCommandRequestBody());
    inValue->Body->Timeout = Timeout;
    inValue->Body->CallbackDestination = CallbackDestination;
    inValue->Body->Command = Command;
    SendZDPCommandResponse^  retVal = (cli::safe_cast<zdp^  >(this))->SendZDPCommand(inValue);
    RequestIdentifier = retVal->Body->RequestIdentifier;
    Message = retVal->Body->Message;
    return retVal->Body->Status;
}




inline NotifyZDPEventRequest::NotifyZDPEventRequest()
{
}

inline NotifyZDPEventRequest::NotifyZDPEventRequest(NotifyZDPEventRequestBody^  Body)
{
    this->Body = Body;
}


inline NotifyZDPEventRequestBody::NotifyZDPEventRequestBody()
{
}

inline NotifyZDPEventRequestBody::NotifyZDPEventRequestBody(System::Byte Status, System::String^  RequestIdentifier, www::zigbee::org::GWGSchema::ZDPMessage^  Message)
{
    this->Status = Status;
    this->RequestIdentifier = RequestIdentifier;
    this->Message = Message;
}


inline NotifyZDPEventResponse::NotifyZDPEventResponse()
{
}

inline NotifyZDPEventResponse::NotifyZDPEventResponse(NotifyZDPEventResponseBody^  Body)
{
    this->Body = Body;
}


inline NotifyZDPEventResponseBody::NotifyZDPEventResponseBody()
{
}

inline NotifyZDPEventResponseBody::NotifyZDPEventResponseBody(System::Byte Status)
{
    this->Status = Status;
}



inline zdpEventClient::zdpEventClient()
{
}

inline zdpEventClient::zdpEventClient(System::String^  endpointConfigurationName) : 
        System::ServiceModel::ClientBase<zdpEvent^ >(endpointConfigurationName)
{
}

inline zdpEventClient::zdpEventClient(System::String^  endpointConfigurationName, System::String^  remoteAddress) : 
        System::ServiceModel::ClientBase<zdpEvent^ >(endpointConfigurationName, remoteAddress)
{
}

inline zdpEventClient::zdpEventClient(System::String^  endpointConfigurationName, System::ServiceModel::EndpointAddress^  remoteAddress) : 
        System::ServiceModel::ClientBase<zdpEvent^ >(endpointConfigurationName, remoteAddress)
{
}

inline zdpEventClient::zdpEventClient(System::ServiceModel::Channels::Binding^  binding, System::ServiceModel::EndpointAddress^  remoteAddress) : 
        System::ServiceModel::ClientBase<zdpEvent^ >(binding, remoteAddress)
{
}

inline NotifyZDPEventResponse^  zdpEventClient::__zdpEvent__NotifyZDPEvent(NotifyZDPEventRequest^  request)
{
    return __super::Channel->NotifyZDPEvent(request);
}

inline System::Void zdpEventClient::NotifyZDPEvent(System::Byte %Status, System::String^  RequestIdentifier, www::zigbee::org::GWGSchema::ZDPMessage^  Message)
{
    NotifyZDPEventRequest^  inValue = (gcnew NotifyZDPEventRequest());
    inValue->Body = (gcnew NotifyZDPEventRequestBody());
    inValue->Body->Status = Status;
    inValue->Body->RequestIdentifier = RequestIdentifier;
    inValue->Body->Message = Message;
    NotifyZDPEventResponse^  retVal = (cli::safe_cast<zdpEvent^  >(this))->NotifyZDPEvent(inValue);
    Status = retVal->Body->Status;
}




inline SendZCLCommandRequest::SendZCLCommandRequest()
{
}

inline SendZCLCommandRequest::SendZCLCommandRequest(SendZCLCommandRequestBody^  Body)
{
    this->Body = Body;
}


inline SendZCLCommandRequestBody::SendZCLCommandRequestBody()
{
}

inline SendZCLCommandRequestBody::SendZCLCommandRequestBody(System::UInt32 Timeout, System::String^  CallbackDestination, 
            www::zigbee::org::GWGSchema::ZCLCommand^  Command)
{
    this->Timeout = Timeout;
    this->CallbackDestination = CallbackDestination;
    this->Command = Command;
}


inline SendZCLCommandResponse::SendZCLCommandResponse()
{
}

inline SendZCLCommandResponse::SendZCLCommandResponse(SendZCLCommandResponseBody^  Body)
{
    this->Body = Body;
}


inline SendZCLCommandResponseBody::SendZCLCommandResponseBody()
{
}

inline SendZCLCommandResponseBody::SendZCLCommandResponseBody(System::Byte Status, System::String^  RequestIdentifier, www::zigbee::org::GWGSchema::ZCLMessage^  Message)
{
    this->Status = Status;
    this->RequestIdentifier = RequestIdentifier;
    this->Message = Message;
}



inline zclClient::zclClient()
{
}

inline zclClient::zclClient(System::String^  endpointConfigurationName) : 
        System::ServiceModel::ClientBase<zcl^ >(endpointConfigurationName)
{
}

inline zclClient::zclClient(System::String^  endpointConfigurationName, System::String^  remoteAddress) : 
        System::ServiceModel::ClientBase<zcl^ >(endpointConfigurationName, remoteAddress)
{
}

inline zclClient::zclClient(System::String^  endpointConfigurationName, System::ServiceModel::EndpointAddress^  remoteAddress) : 
        System::ServiceModel::ClientBase<zcl^ >(endpointConfigurationName, remoteAddress)
{
}

inline zclClient::zclClient(System::ServiceModel::Channels::Binding^  binding, System::ServiceModel::EndpointAddress^  remoteAddress) : 
        System::ServiceModel::ClientBase<zcl^ >(binding, remoteAddress)
{
}

inline SendZCLCommandResponse^  zclClient::__zcl__SendZCLCommand(SendZCLCommandRequest^  request)
{
    return __super::Channel->SendZCLCommand(request);
}

inline System::Byte zclClient::SendZCLCommand(System::UInt32 Timeout, System::String^  CallbackDestination, www::zigbee::org::GWGSchema::ZCLCommand^  Command, 
            System::String^  %RequestIdentifier, www::zigbee::org::GWGSchema::ZCLMessage^  %Message)
{
    SendZCLCommandRequest^  inValue = (gcnew SendZCLCommandRequest());
    inValue->Body = (gcnew SendZCLCommandRequestBody());
    inValue->Body->Timeout = Timeout;
    inValue->Body->CallbackDestination = CallbackDestination;
    inValue->Body->Command = Command;
    SendZCLCommandResponse^  retVal = (cli::safe_cast<zcl^  >(this))->SendZCLCommand(inValue);
    RequestIdentifier = retVal->Body->RequestIdentifier;
    Message = retVal->Body->Message;
    return retVal->Body->Status;
}




inline NotifyZCLEventRequest::NotifyZCLEventRequest()
{
}

inline NotifyZCLEventRequest::NotifyZCLEventRequest(NotifyZCLEventRequestBody^  Body)
{
    this->Body = Body;
}


inline NotifyZCLEventRequestBody::NotifyZCLEventRequestBody()
{
}

inline NotifyZCLEventRequestBody::NotifyZCLEventRequestBody(www::zigbee::org::GWGSchema::ZCLMessage^  Message, System::Byte Status, 
            System::String^  RequestIdentifier)
{
    this->Message = Message;
    this->Status = Status;
    this->RequestIdentifier = RequestIdentifier;
}


inline NotifyZCLEventResponse::NotifyZCLEventResponse()
{
}

inline NotifyZCLEventResponse::NotifyZCLEventResponse(NotifyZCLEventResponseBody^  Body)
{
    this->Body = Body;
}


inline NotifyZCLEventResponseBody::NotifyZCLEventResponseBody()
{
}

inline NotifyZCLEventResponseBody::NotifyZCLEventResponseBody(System::Byte Status)
{
    this->Status = Status;
}



inline zclEventClient::zclEventClient()
{
}

inline zclEventClient::zclEventClient(System::String^  endpointConfigurationName) : 
        System::ServiceModel::ClientBase<zclEvent^ >(endpointConfigurationName)
{
}

inline zclEventClient::zclEventClient(System::String^  endpointConfigurationName, System::String^  remoteAddress) : 
        System::ServiceModel::ClientBase<zclEvent^ >(endpointConfigurationName, remoteAddress)
{
}

inline zclEventClient::zclEventClient(System::String^  endpointConfigurationName, System::ServiceModel::EndpointAddress^  remoteAddress) : 
        System::ServiceModel::ClientBase<zclEvent^ >(endpointConfigurationName, remoteAddress)
{
}

inline zclEventClient::zclEventClient(System::ServiceModel::Channels::Binding^  binding, System::ServiceModel::EndpointAddress^  remoteAddress) : 
        System::ServiceModel::ClientBase<zclEvent^ >(binding, remoteAddress)
{
}

inline NotifyZCLEventResponse^  zclEventClient::__zclEvent__NotifyZCLEvent(NotifyZCLEventRequest^  request)
{
    return __super::Channel->NotifyZCLEvent(request);
}

inline System::Void zclEventClient::NotifyZCLEvent(www::zigbee::org::GWGSchema::ZCLMessage^  Message, System::Byte %Status, 
            System::String^  RequestIdentifier)
{
    NotifyZCLEventRequest^  inValue = (gcnew NotifyZCLEventRequest());
    inValue->Body = (gcnew NotifyZCLEventRequestBody());
    inValue->Body->Message = Message;
    inValue->Body->Status = Status;
    inValue->Body->RequestIdentifier = RequestIdentifier;
    NotifyZCLEventResponse^  retVal = (cli::safe_cast<zclEvent^  >(this))->NotifyZCLEvent(inValue);
    Status = retVal->Body->Status;
}
















inline ConfigureNodeDescriptorRequest::ConfigureNodeDescriptorRequest()
{
}

inline ConfigureNodeDescriptorRequest::ConfigureNodeDescriptorRequest(NodeDescriptor^  NodeDescriptor)
{
    this->NodeDescriptor = NodeDescriptor;
}


inline ConfigureNodeDescriptorResponse::ConfigureNodeDescriptorResponse()
{
}

inline ConfigureNodeDescriptorResponse::ConfigureNodeDescriptorResponse(System::Byte Status)
{
    this->Status = Status;
}


inline ConfigureUserDescriptorRequest::ConfigureUserDescriptorRequest()
{
}

inline ConfigureUserDescriptorRequest::ConfigureUserDescriptorRequest(UserDescriptor^  UserDescriptor)
{
    this->UserDescriptor = UserDescriptor;
}


inline ConfigureUserDescriptorResponse::ConfigureUserDescriptorResponse()
{
}

inline ConfigureUserDescriptorResponse::ConfigureUserDescriptorResponse(System::Byte Status)
{
    this->Status = Status;
}


inline ConfigureEndpointRequest::ConfigureEndpointRequest()
{
}

inline ConfigureEndpointRequest::ConfigureEndpointRequest(SimpleDescriptor^  SimpleDescriptor)
{
    this->SimpleDescriptor = SimpleDescriptor;
}


inline ConfigureEndpointResponse::ConfigureEndpointResponse()
{
}

inline ConfigureEndpointResponse::ConfigureEndpointResponse(System::Byte Status)
{
    this->Status = Status;
}


inline ClearEndpointRequest::ClearEndpointRequest()
{
}

inline ClearEndpointRequest::ClearEndpointRequest(System::Byte Endpoint)
{
    this->Endpoint = Endpoint;
}


inline ClearEndpointResponse::ClearEndpointResponse()
{
}

inline ClearEndpointResponse::ClearEndpointResponse(System::Byte Status)
{
    this->Status = Status;
}


inline SendAPSMessageRequest::SendAPSMessageRequest()
{
}

inline SendAPSMessageRequest::SendAPSMessageRequest(APSMessage^  Request, System::UInt32 Timeout, System::String^  CallbackDestination)
{
    this->Request = Request;
    this->Timeout = Timeout;
    this->CallbackDestination = CallbackDestination;
}


inline SendAPSMessageResponse::SendAPSMessageResponse()
{
}

inline SendAPSMessageResponse::SendAPSMessageResponse(System::Byte Status, cli::array< System::Byte >^  RequestIdentifier, 
            System::Byte ConfirmStatus, System::UInt32 TxTime)
{
    this->Status = Status;
    this->RequestIdentifier = RequestIdentifier;
    this->ConfirmStatus = ConfirmStatus;
    this->TxTime = TxTime;
}


inline AddGroupRequest::AddGroupRequest()
{
}

inline AddGroupRequest::AddGroupRequest(Group^  Group)
{
    this->Group = Group;
}


inline AddGroupResponse::AddGroupResponse()
{
}

inline AddGroupResponse::AddGroupResponse(System::Byte Status)
{
    this->Status = Status;
}


inline RemoveGroupRequest::RemoveGroupRequest()
{
}

inline RemoveGroupRequest::RemoveGroupRequest(Group^  Group)
{
    this->Group = Group;
}


inline RemoveGroupResponse::RemoveGroupResponse()
{
}

inline RemoveGroupResponse::RemoveGroupResponse(System::Byte Status)
{
    this->Status = Status;
}


inline RemoveAllGroupsRequest::RemoveAllGroupsRequest()
{
}

inline RemoveAllGroupsRequest::RemoveAllGroupsRequest(System::Byte Endpoint)
{
    this->Endpoint = Endpoint;
}


inline RemoveAllGroupsResponse::RemoveAllGroupsResponse()
{
}

inline RemoveAllGroupsResponse::RemoveAllGroupsResponse(System::Byte Status)
{
    this->Status = Status;
}


inline GetGroupListRequest::GetGroupListRequest()
{
}


inline GetGroupListResponse::GetGroupListResponse()
{
}

inline GetGroupListResponse::GetGroupListResponse(System::Byte Status, cli::array< Group^  >^  GroupList, System::UInt32 GroupCount)
{
    this->Status = Status;
    this->GroupList = GroupList;
    this->GroupCount = GroupCount;
}


inline GetBindingListRequest::GetBindingListRequest()
{
}


inline GetBindingListResponse::GetBindingListResponse()
{
}

inline GetBindingListResponse::GetBindingListResponse(System::Byte Status, cli::array< Binding^  >^  BindingList, System::UInt32 BindingCount)
{
    this->Status = Status;
    this->BindingList = BindingList;
    this->BindingCount = BindingCount;
}


inline GetNodeDescriptorRequest::GetNodeDescriptorRequest()
{
}


inline GetNodeDescriptorResponse::GetNodeDescriptorResponse()
{
}

inline GetNodeDescriptorResponse::GetNodeDescriptorResponse(System::Byte Status, NodeDescriptor^  NodeDescriptor)
{
    this->Status = Status;
    this->NodeDescriptor = NodeDescriptor;
}


inline GetNodePowerDescriptorRequest::GetNodePowerDescriptorRequest()
{
}


inline GetNodePowerDescriptorResponse::GetNodePowerDescriptorResponse()
{
}

inline GetNodePowerDescriptorResponse::GetNodePowerDescriptorResponse(System::Byte Status, PowerDescriptor^  PowerDescriptor)
{
    this->Status = Status;
    this->PowerDescriptor = PowerDescriptor;
}


inline GetUserDescriptorRequest::GetUserDescriptorRequest()
{
}


inline GetUserDescriptorResponse::GetUserDescriptorResponse()
{
}

inline GetUserDescriptorResponse::GetUserDescriptorResponse(System::Byte Status, UserDescriptor^  UserDescriptor)
{
    this->Status = Status;
    this->UserDescriptor = UserDescriptor;
}



inline apsClient::apsClient()
{
}

inline apsClient::apsClient(System::String^  endpointConfigurationName) : 
        System::ServiceModel::ClientBase<aps^ >(endpointConfigurationName)
{
}

inline apsClient::apsClient(System::String^  endpointConfigurationName, System::String^  remoteAddress) : 
        System::ServiceModel::ClientBase<aps^ >(endpointConfigurationName, remoteAddress)
{
}

inline apsClient::apsClient(System::String^  endpointConfigurationName, System::ServiceModel::EndpointAddress^  remoteAddress) : 
        System::ServiceModel::ClientBase<aps^ >(endpointConfigurationName, remoteAddress)
{
}

inline apsClient::apsClient(System::ServiceModel::Channels::Binding^  binding, System::ServiceModel::EndpointAddress^  remoteAddress) : 
        System::ServiceModel::ClientBase<aps^ >(binding, remoteAddress)
{
}

inline ConfigureNodeDescriptorResponse^  apsClient::__aps__ConfigureNodeDescriptor(ConfigureNodeDescriptorRequest^  request)
{
    return __super::Channel->ConfigureNodeDescriptor(request);
}

inline System::Byte apsClient::ConfigureNodeDescriptor(NodeDescriptor^  NodeDescriptor)
{
    ConfigureNodeDescriptorRequest^  inValue = (gcnew ConfigureNodeDescriptorRequest());
    inValue->NodeDescriptor = NodeDescriptor;
    ConfigureNodeDescriptorResponse^  retVal = (cli::safe_cast<aps^  >(this))->ConfigureNodeDescriptor(inValue);
    return retVal->Status;
}

inline ConfigureUserDescriptorResponse^  apsClient::__aps__ConfigureUserDescriptor(ConfigureUserDescriptorRequest^  request)
{
    return __super::Channel->ConfigureUserDescriptor(request);
}

inline System::Byte apsClient::ConfigureUserDescriptor(UserDescriptor^  UserDescriptor)
{
    ConfigureUserDescriptorRequest^  inValue = (gcnew ConfigureUserDescriptorRequest());
    inValue->UserDescriptor = UserDescriptor;
    ConfigureUserDescriptorResponse^  retVal = (cli::safe_cast<aps^  >(this))->ConfigureUserDescriptor(inValue);
    return retVal->Status;
}

inline ConfigureEndpointResponse^  apsClient::__aps__ConfigureEndpoint(ConfigureEndpointRequest^  request)
{
    return __super::Channel->ConfigureEndpoint(request);
}

inline System::Byte apsClient::ConfigureEndpoint(SimpleDescriptor^  SimpleDescriptor)
{
    ConfigureEndpointRequest^  inValue = (gcnew ConfigureEndpointRequest());
    inValue->SimpleDescriptor = SimpleDescriptor;
    ConfigureEndpointResponse^  retVal = (cli::safe_cast<aps^  >(this))->ConfigureEndpoint(inValue);
    return retVal->Status;
}

inline ClearEndpointResponse^  apsClient::__aps__ClearEndpoint(ClearEndpointRequest^  request)
{
    return __super::Channel->ClearEndpoint(request);
}

inline System::Byte apsClient::ClearEndpoint(System::Byte Endpoint)
{
    ClearEndpointRequest^  inValue = (gcnew ClearEndpointRequest());
    inValue->Endpoint = Endpoint;
    ClearEndpointResponse^  retVal = (cli::safe_cast<aps^  >(this))->ClearEndpoint(inValue);
    return retVal->Status;
}

inline SendAPSMessageResponse^  apsClient::__aps__SendAPSMessage(SendAPSMessageRequest^  request)
{
    return __super::Channel->SendAPSMessage(request);
}

inline System::Byte apsClient::SendAPSMessage(
            APSMessage^  Request, 
            System::UInt32 Timeout, 
            System::String^  CallbackDestination, 
            cli::array< System::Byte >^  %RequestIdentifier, 
            System::Byte %ConfirmStatus, 
            System::UInt32 %TxTime)
{
    SendAPSMessageRequest^  inValue = (gcnew SendAPSMessageRequest());
    inValue->Request = Request;
    inValue->Timeout = Timeout;
    inValue->CallbackDestination = CallbackDestination;
    SendAPSMessageResponse^  retVal = (cli::safe_cast<aps^  >(this))->SendAPSMessage(inValue);
    RequestIdentifier = retVal->RequestIdentifier;
    ConfirmStatus = retVal->ConfirmStatus;
    TxTime = retVal->TxTime;
    return retVal->Status;
}

inline AddGroupResponse^  apsClient::__aps__AddGroup(AddGroupRequest^  request)
{
    return __super::Channel->AddGroup(request);
}

inline System::Byte apsClient::AddGroup(Group^  Group)
{
    AddGroupRequest^  inValue = (gcnew AddGroupRequest());
    inValue->Group = Group;
    AddGroupResponse^  retVal = (cli::safe_cast<aps^  >(this))->AddGroup(inValue);
    return retVal->Status;
}

inline RemoveGroupResponse^  apsClient::__aps__RemoveGroup(RemoveGroupRequest^  request)
{
    return __super::Channel->RemoveGroup(request);
}

inline System::Byte apsClient::RemoveGroup(Group^  Group)
{
    RemoveGroupRequest^  inValue = (gcnew RemoveGroupRequest());
    inValue->Group = Group;
    RemoveGroupResponse^  retVal = (cli::safe_cast<aps^  >(this))->RemoveGroup(inValue);
    return retVal->Status;
}

inline RemoveAllGroupsResponse^  apsClient::__aps__RemoveAllGroups(RemoveAllGroupsRequest^  request)
{
    return __super::Channel->RemoveAllGroups(request);
}

inline System::Byte apsClient::RemoveAllGroups(System::Byte Endpoint)
{
    RemoveAllGroupsRequest^  inValue = (gcnew RemoveAllGroupsRequest());
    inValue->Endpoint = Endpoint;
    RemoveAllGroupsResponse^  retVal = (cli::safe_cast<aps^  >(this))->RemoveAllGroups(inValue);
    return retVal->Status;
}

inline GetGroupListResponse^  apsClient::__aps__GetGroupList(GetGroupListRequest^  request)
{
    return __super::Channel->GetGroupList(request);
}

inline System::Byte apsClient::GetGroupList(cli::array< Group^  >^  %GroupList, System::UInt32 %GroupCount)
{
    GetGroupListRequest^  inValue = (gcnew GetGroupListRequest());
    GetGroupListResponse^  retVal = (cli::safe_cast<aps^  >(this))->GetGroupList(inValue);
    GroupList = retVal->GroupList;
    GroupCount = retVal->GroupCount;
    return retVal->Status;
}

inline GetBindingListResponse^  apsClient::__aps__GetBindingList(GetBindingListRequest^  request)
{
    return __super::Channel->GetBindingList(request);
}

inline System::Byte apsClient::GetBindingList(cli::array< Binding^  >^  %BindingList, System::UInt32 %BindingCount)
{
    GetBindingListRequest^  inValue = (gcnew GetBindingListRequest());
    GetBindingListResponse^  retVal = (cli::safe_cast<aps^  >(this))->GetBindingList(inValue);
    BindingList = retVal->BindingList;
    BindingCount = retVal->BindingCount;
    return retVal->Status;
}

inline GetNodeDescriptorResponse^  apsClient::__aps__GetNodeDescriptor(GetNodeDescriptorRequest^  request)
{
    return __super::Channel->GetNodeDescriptor(request);
}

inline System::Byte apsClient::GetNodeDescriptor(NodeDescriptor^  %NodeDescriptor)
{
    GetNodeDescriptorRequest^  inValue = (gcnew GetNodeDescriptorRequest());
    GetNodeDescriptorResponse^  retVal = (cli::safe_cast<aps^  >(this))->GetNodeDescriptor(inValue);
    NodeDescriptor = retVal->NodeDescriptor;
    return retVal->Status;
}

inline GetNodePowerDescriptorResponse^  apsClient::__aps__GetNodePowerDescriptor(GetNodePowerDescriptorRequest^  request)
{
    return __super::Channel->GetNodePowerDescriptor(request);
}

inline System::Byte apsClient::GetNodePowerDescriptor(PowerDescriptor^  %PowerDescriptor)
{
    GetNodePowerDescriptorRequest^  inValue = (gcnew GetNodePowerDescriptorRequest());
    GetNodePowerDescriptorResponse^  retVal = (cli::safe_cast<aps^  >(this))->GetNodePowerDescriptor(inValue);
    PowerDescriptor = retVal->PowerDescriptor;
    return retVal->Status;
}

inline GetUserDescriptorResponse^  apsClient::__aps__GetUserDescriptor(GetUserDescriptorRequest^  request)
{
    return __super::Channel->GetUserDescriptor(request);
}

inline System::Byte apsClient::GetUserDescriptor(UserDescriptor^  %UserDescriptor)
{
    GetUserDescriptorRequest^  inValue = (gcnew GetUserDescriptorRequest());
    GetUserDescriptorResponse^  retVal = (cli::safe_cast<aps^  >(this))->GetUserDescriptor(inValue);
    UserDescriptor = retVal->UserDescriptor;
    return retVal->Status;
}





inline NotifyAPSMessageEventRequest::NotifyAPSMessageEventRequest()
{
}

inline NotifyAPSMessageEventRequest::NotifyAPSMessageEventRequest(NotifyAPSMessageEventRequestBody^  Body)
{
    this->Body = Body;
}


inline NotifyAPSMessageEventRequestBody::NotifyAPSMessageEventRequestBody()
{
}

inline NotifyAPSMessageEventRequestBody::NotifyAPSMessageEventRequestBody(www::zigbee::org::GWGSchema::APSMessageEvent^  Message)
{
    this->Message = Message;
}


inline NotifyAPSMessageEventResponse::NotifyAPSMessageEventResponse()
{
}

inline NotifyAPSMessageEventResponse::NotifyAPSMessageEventResponse(NotifyAPSMessageEventResponseBody^  Body)
{
    this->Body = Body;
}


inline NotifyAPSMessageEventResponseBody::NotifyAPSMessageEventResponseBody()
{
}

inline NotifyAPSMessageEventResponseBody::NotifyAPSMessageEventResponseBody(System::Byte Status)
{
    this->Status = Status;
}


inline NotifySendAPSMessageEventRequest::NotifySendAPSMessageEventRequest()
{
}

inline NotifySendAPSMessageEventRequest::NotifySendAPSMessageEventRequest(NotifySendAPSMessageEventRequestBody^  Body)
{
    this->Body = Body;
}


inline NotifySendAPSMessageEventRequestBody::NotifySendAPSMessageEventRequestBody()
{
}

inline NotifySendAPSMessageEventRequestBody::NotifySendAPSMessageEventRequestBody(System::Byte Status, System::String^  RequestIdentifier, 
            System::Byte ConfirmStatus, System::UInt32 TxTime)
{
    this->Status = Status;
    this->RequestIdentifier = RequestIdentifier;
    this->ConfirmStatus = ConfirmStatus;
    this->TxTime = TxTime;
}


inline NotifySendAPSMessageEventResponse::NotifySendAPSMessageEventResponse()
{
}

inline NotifySendAPSMessageEventResponse::NotifySendAPSMessageEventResponse(NotifySendAPSMessageEventResponseBody^  Body)
{
    this->Body = Body;
}


inline NotifySendAPSMessageEventResponseBody::NotifySendAPSMessageEventResponseBody()
{
}

inline NotifySendAPSMessageEventResponseBody::NotifySendAPSMessageEventResponseBody(System::Byte Status)
{
    this->Status = Status;
}



inline apsEventClient::apsEventClient()
{
}

inline apsEventClient::apsEventClient(System::String^  endpointConfigurationName) : 
        System::ServiceModel::ClientBase<apsEvent^ >(endpointConfigurationName)
{
}

inline apsEventClient::apsEventClient(System::String^  endpointConfigurationName, System::String^  remoteAddress) : 
        System::ServiceModel::ClientBase<apsEvent^ >(endpointConfigurationName, remoteAddress)
{
}

inline apsEventClient::apsEventClient(System::String^  endpointConfigurationName, System::ServiceModel::EndpointAddress^  remoteAddress) : 
        System::ServiceModel::ClientBase<apsEvent^ >(endpointConfigurationName, remoteAddress)
{
}

inline apsEventClient::apsEventClient(System::ServiceModel::Channels::Binding^  binding, System::ServiceModel::EndpointAddress^  remoteAddress) : 
        System::ServiceModel::ClientBase<apsEvent^ >(binding, remoteAddress)
{
}

inline NotifyAPSMessageEventResponse^  apsEventClient::__apsEvent__NotifyAPSMessageEvent(NotifyAPSMessageEventRequest^  request)
{
    return __super::Channel->NotifyAPSMessageEvent(request);
}

inline System::Byte apsEventClient::NotifyAPSMessageEvent(www::zigbee::org::GWGSchema::APSMessageEvent^  Message)
{
    NotifyAPSMessageEventRequest^  inValue = (gcnew NotifyAPSMessageEventRequest());
    inValue->Body = (gcnew NotifyAPSMessageEventRequestBody());
    inValue->Body->Message = Message;
    NotifyAPSMessageEventResponse^  retVal = (cli::safe_cast<apsEvent^  >(this))->NotifyAPSMessageEvent(inValue);
    return retVal->Body->Status;
}

inline NotifySendAPSMessageEventResponse^  apsEventClient::__apsEvent__NotifySendAPSMessageEvent(NotifySendAPSMessageEventRequest^  request)
{
    return __super::Channel->NotifySendAPSMessageEvent(request);
}

inline System::Void apsEventClient::NotifySendAPSMessageEvent(System::Byte %Status, System::String^  RequestIdentifier, System::Byte ConfirmStatus, 
            System::UInt32 TxTime)
{
    NotifySendAPSMessageEventRequest^  inValue = (gcnew NotifySendAPSMessageEventRequest());
    inValue->Body = (gcnew NotifySendAPSMessageEventRequestBody());
    inValue->Body->Status = Status;
    inValue->Body->RequestIdentifier = RequestIdentifier;
    inValue->Body->ConfirmStatus = ConfirmStatus;
    inValue->Body->TxTime = TxTime;
    NotifySendAPSMessageEventResponse^  retVal = (cli::safe_cast<apsEvent^  >(this))->NotifySendAPSMessageEvent(inValue);
    Status = retVal->Body->Status;
}












inline FormNetworkRequest::FormNetworkRequest()
{
}

inline FormNetworkRequest::FormNetworkRequest(NetworkConfiguration^  NetworkConfiguration, System::UInt32 Timeout, System::String^  CallbackDestination)
{
    this->NetworkConfiguration = NetworkConfiguration;
    this->Timeout = Timeout;
    this->CallbackDestination = CallbackDestination;
}


inline FormNetworkResponse::FormNetworkResponse()
{
}

inline FormNetworkResponse::FormNetworkResponse(System::Byte Status, cli::array< System::Byte >^  RequestIdentifier, NetworkStatusCode^  NWKStatus)
{
    this->Status = Status;
    this->RequestIdentifier = RequestIdentifier;
    this->NWKStatus = NWKStatus;
}


inline StartRouterRequest::StartRouterRequest()
{
}

inline StartRouterRequest::StartRouterRequest(System::UInt32 Timeout, System::String^  CallBackDestination, NetworkConfiguration^  NetworkConfiguration)
{
    this->Timeout = Timeout;
    this->CallBackDestination = CallBackDestination;
    this->NetworkConfiguration = NetworkConfiguration;
}


inline StartRouterResponse::StartRouterResponse()
{
}

inline StartRouterResponse::StartRouterResponse(System::Byte Status, NetworkStatusCode^  NWKStatus, cli::array< System::Byte >^  RequestIdentifier)
{
    this->Status = Status;
    this->NWKStatus = NWKStatus;
    this->RequestIdentifier = RequestIdentifier;
}


inline JoinRequest::JoinRequest()
{
}

inline JoinRequest::JoinRequest(System::UInt32 Timeout, JoinConfiguration^  Options, System::String^  CallbackDestination)
{
    this->Timeout = Timeout;
    this->Options = Options;
    this->CallbackDestination = CallbackDestination;
}


inline JoinResponse::JoinResponse()
{
}

inline JoinResponse::JoinResponse(System::Byte Status, NetworkStatusCode^  NWKStatus)
{
    this->Status = Status;
    this->NWKStatus = NWKStatus;
}


inline LeaveRequest::LeaveRequest()
{
}

inline LeaveRequest::LeaveRequest(System::UInt32 Timeout, System::String^  CallbackDestination, Address^  DeviceAddress, 
            System::Boolean RemoveChildren, System::Boolean Rejoin)
{
    this->Timeout = Timeout;
    this->CallbackDestination = CallbackDestination;
    this->DeviceAddress = DeviceAddress;
    this->RemoveChildren = RemoveChildren;
    this->Rejoin = Rejoin;
}


inline LeaveResponse::LeaveResponse()
{
}

inline LeaveResponse::LeaveResponse(System::Byte Status, NetworkStatusCode^  NWKStatus)
{
    this->Status = Status;
    this->NWKStatus = NWKStatus;
}


inline DiscoverNetworksRequest::DiscoverNetworksRequest()
{
}

inline DiscoverNetworksRequest::DiscoverNetworksRequest(System::UInt32 Timeout, System::String^  CallbackDestination, System::String^  ScanChannels, 
            System::String^  ScanDuration)
{
    this->Timeout = Timeout;
    this->CallbackDestination = CallbackDestination;
    this->ScanChannels = ScanChannels;
    this->ScanDuration = ScanDuration;
}


inline DiscoverNetworksResponse::DiscoverNetworksResponse()
{
}

inline DiscoverNetworksResponse::DiscoverNetworksResponse(System::Byte Status, cli::array< System::Byte >^  RequestIdentifier, 
            NetworkStatusCode^  NWKStatus, NetworkDescriptorList^  NetworkDescriptors, System::UInt32 NetworkCount)
{
    this->Status = Status;
    this->RequestIdentifier = RequestIdentifier;
    this->NWKStatus = NWKStatus;
    this->NetworkDescriptors = NetworkDescriptors;
    this->NetworkCount = NetworkCount;
}


inline ResetRequest::ResetRequest()
{
}

inline ResetRequest::ResetRequest(System::UInt32 Timeout, System::String^  CallbackDestination, System::Boolean WarmStart)
{
    this->Timeout = Timeout;
    this->CallbackDestination = CallbackDestination;
    this->WarmStart = WarmStart;
}


inline ResetResponse::ResetResponse()
{
}

inline ResetResponse::ResetResponse(System::Byte Status, cli::array< System::Byte >^  RequestIdentifier, NetworkStatusCode^  NWKStatus)
{
    this->Status = Status;
    this->RequestIdentifier = RequestIdentifier;
    this->NWKStatus = NWKStatus;
}


inline PerformEnergyScanRequest::PerformEnergyScanRequest()
{
}

inline PerformEnergyScanRequest::PerformEnergyScanRequest(System::UInt32 Timeout, System::String^  CallbackDestination, System::UInt32 ScanChannels, 
            System::Byte ScanDuration)
{
    this->Timeout = Timeout;
    this->CallbackDestination = CallbackDestination;
    this->ScanChannels = ScanChannels;
    this->ScanDuration = ScanDuration;
}


inline PerformEnergyScanResponse::PerformEnergyScanResponse()
{
}

inline PerformEnergyScanResponse::PerformEnergyScanResponse(System::Byte Status, cli::array< System::Byte >^  RequestIdentifier, 
            NetworkStatusCode^  NWKStatus, System::UInt32 ScanChannels, cli::array< EnergyScanResult^  >^  EnergyDetectedList)
{
    this->Status = Status;
    this->RequestIdentifier = RequestIdentifier;
    this->NWKStatus = NWKStatus;
    this->ScanChannels = ScanChannels;
    this->EnergyDetectedList = EnergyDetectedList;
}


inline PerformRouteDiscoveryRequest::PerformRouteDiscoveryRequest()
{
}

inline PerformRouteDiscoveryRequest::PerformRouteDiscoveryRequest(System::UInt32 Timeout, System::String^  CallbackDestination, 
            RouteDiscoveryInfo^  Request)
{
    this->Timeout = Timeout;
    this->CallbackDestination = CallbackDestination;
    this->Request = Request;
}


inline PerformRouteDiscoveryResponse::PerformRouteDiscoveryResponse()
{
}

inline PerformRouteDiscoveryResponse::PerformRouteDiscoveryResponse(System::Byte Status, cli::array< System::Byte >^  RequestIdentifier, 
            NetworkStatusCode^  NWKStatus, NetworkStatusCode^  NetworkStatusCode)
{
    this->Status = Status;
    this->RequestIdentifier = RequestIdentifier;
    this->NWKStatus = NWKStatus;
    this->NetworkStatusCode = NetworkStatusCode;
}


inline SendNWKCommandRequest::SendNWKCommandRequest()
{
}

inline SendNWKCommandRequest::SendNWKCommandRequest(System::UInt32 Timeout, System::String^  CallbackDestination, NWKMessageEvent^  Message)
{
    this->Timeout = Timeout;
    this->CallbackDestination = CallbackDestination;
    this->Message = Message;
}


inline SendNWKCommandResponse::SendNWKCommandResponse()
{
}

inline SendNWKCommandResponse::SendNWKCommandResponse(System::Byte Status, NWKMessageResult^  Message)
{
    this->Status = Status;
    this->Message = Message;
}



inline nwkClient::nwkClient()
{
}

inline nwkClient::nwkClient(System::String^  endpointConfigurationName) : 
        System::ServiceModel::ClientBase<nwk^ >(endpointConfigurationName)
{
}

inline nwkClient::nwkClient(System::String^  endpointConfigurationName, System::String^  remoteAddress) : 
        System::ServiceModel::ClientBase<nwk^ >(endpointConfigurationName, remoteAddress)
{
}

inline nwkClient::nwkClient(System::String^  endpointConfigurationName, System::ServiceModel::EndpointAddress^  remoteAddress) : 
        System::ServiceModel::ClientBase<nwk^ >(endpointConfigurationName, remoteAddress)
{
}

inline nwkClient::nwkClient(System::ServiceModel::Channels::Binding^  binding, System::ServiceModel::EndpointAddress^  remoteAddress) : 
        System::ServiceModel::ClientBase<nwk^ >(binding, remoteAddress)
{
}

inline FormNetworkResponse^  nwkClient::__nwk__FormNetwork(FormNetworkRequest^  request)
{
    return __super::Channel->FormNetwork(request);
}

inline System::Byte nwkClient::FormNetwork(NetworkConfiguration^  NetworkConfiguration, System::UInt32 Timeout, System::String^  CallbackDestination, 
            cli::array< System::Byte >^  %RequestIdentifier, NetworkStatusCode^  %NWKStatus)
{
    FormNetworkRequest^  inValue = (gcnew FormNetworkRequest());
    inValue->NetworkConfiguration = NetworkConfiguration;
    inValue->Timeout = Timeout;
    inValue->CallbackDestination = CallbackDestination;
    FormNetworkResponse^  retVal = (cli::safe_cast<nwk^  >(this))->FormNetwork(inValue);
    RequestIdentifier = retVal->RequestIdentifier;
    NWKStatus = retVal->NWKStatus;
    return retVal->Status;
}

inline StartRouterResponse^  nwkClient::__nwk__StartRouter(StartRouterRequest^  request)
{
    return __super::Channel->StartRouter(request);
}

inline System::Byte nwkClient::StartRouter(System::UInt32 Timeout, System::String^  CallBackDestination, NetworkConfiguration^  NetworkConfiguration, 
            NetworkStatusCode^  %NWKStatus, cli::array< System::Byte >^  %RequestIdentifier)
{
    StartRouterRequest^  inValue = (gcnew StartRouterRequest());
    inValue->Timeout = Timeout;
    inValue->CallBackDestination = CallBackDestination;
    inValue->NetworkConfiguration = NetworkConfiguration;
    StartRouterResponse^  retVal = (cli::safe_cast<nwk^  >(this))->StartRouter(inValue);
    NWKStatus = retVal->NWKStatus;
    RequestIdentifier = retVal->RequestIdentifier;
    return retVal->Status;
}

inline JoinResponse^  nwkClient::__nwk__Join(JoinRequest^  request)
{
    return __super::Channel->Join(request);
}

inline System::Byte nwkClient::Join(System::UInt32 Timeout, JoinConfiguration^  Options, System::String^  CallbackDestination, 
            NetworkStatusCode^  %NWKStatus)
{
    JoinRequest^  inValue = (gcnew JoinRequest());
    inValue->Timeout = Timeout;
    inValue->Options = Options;
    inValue->CallbackDestination = CallbackDestination;
    JoinResponse^  retVal = (cli::safe_cast<nwk^  >(this))->Join(inValue);
    NWKStatus = retVal->NWKStatus;
    return retVal->Status;
}

inline LeaveResponse^  nwkClient::__nwk__Leave(LeaveRequest^  request)
{
    return __super::Channel->Leave(request);
}

inline System::Byte nwkClient::Leave(
            System::UInt32 Timeout, 
            System::String^  CallbackDestination, 
            Address^  DeviceAddress, 
            System::Boolean RemoveChildren, 
            System::Boolean Rejoin, 
            NetworkStatusCode^  %NWKStatus)
{
    LeaveRequest^  inValue = (gcnew LeaveRequest());
    inValue->Timeout = Timeout;
    inValue->CallbackDestination = CallbackDestination;
    inValue->DeviceAddress = DeviceAddress;
    inValue->RemoveChildren = RemoveChildren;
    inValue->Rejoin = Rejoin;
    LeaveResponse^  retVal = (cli::safe_cast<nwk^  >(this))->Leave(inValue);
    NWKStatus = retVal->NWKStatus;
    return retVal->Status;
}

inline DiscoverNetworksResponse^  nwkClient::__nwk__DiscoverNetworks(DiscoverNetworksRequest^  request)
{
    return __super::Channel->DiscoverNetworks(request);
}

inline System::Byte nwkClient::DiscoverNetworks(
            System::UInt32 Timeout, 
            System::String^  CallbackDestination, 
            System::String^  ScanChannels, 
            System::String^  ScanDuration, 
            cli::array< System::Byte >^  %RequestIdentifier, 
            NetworkStatusCode^  %NWKStatus, 
            NetworkDescriptorList^  %NetworkDescriptors, 
            System::UInt32 %NetworkCount)
{
    DiscoverNetworksRequest^  inValue = (gcnew DiscoverNetworksRequest());
    inValue->Timeout = Timeout;
    inValue->CallbackDestination = CallbackDestination;
    inValue->ScanChannels = ScanChannels;
    inValue->ScanDuration = ScanDuration;
    DiscoverNetworksResponse^  retVal = (cli::safe_cast<nwk^  >(this))->DiscoverNetworks(inValue);
    RequestIdentifier = retVal->RequestIdentifier;
    NWKStatus = retVal->NWKStatus;
    NetworkDescriptors = retVal->NetworkDescriptors;
    NetworkCount = retVal->NetworkCount;
    return retVal->Status;
}

inline ResetResponse^  nwkClient::__nwk__Reset(ResetRequest^  request)
{
    return __super::Channel->Reset(request);
}

inline System::Byte nwkClient::Reset(System::UInt32 Timeout, System::String^  CallbackDestination, System::Boolean WarmStart, 
            cli::array< System::Byte >^  %RequestIdentifier, NetworkStatusCode^  %NWKStatus)
{
    ResetRequest^  inValue = (gcnew ResetRequest());
    inValue->Timeout = Timeout;
    inValue->CallbackDestination = CallbackDestination;
    inValue->WarmStart = WarmStart;
    ResetResponse^  retVal = (cli::safe_cast<nwk^  >(this))->Reset(inValue);
    RequestIdentifier = retVal->RequestIdentifier;
    NWKStatus = retVal->NWKStatus;
    return retVal->Status;
}

inline PerformEnergyScanResponse^  nwkClient::__nwk__PerformEnergyScan(PerformEnergyScanRequest^  request)
{
    return __super::Channel->PerformEnergyScan(request);
}

inline System::Byte nwkClient::PerformEnergyScan(
            System::UInt32 Timeout, 
            System::String^  CallbackDestination, 
            System::UInt32 %ScanChannels, 
            System::Byte ScanDuration, 
            cli::array< System::Byte >^  %RequestIdentifier, 
            NetworkStatusCode^  %NWKStatus, 
            cli::array< EnergyScanResult^  >^  %EnergyDetectedList)
{
    PerformEnergyScanRequest^  inValue = (gcnew PerformEnergyScanRequest());
    inValue->Timeout = Timeout;
    inValue->CallbackDestination = CallbackDestination;
    inValue->ScanChannels = ScanChannels;
    inValue->ScanDuration = ScanDuration;
    PerformEnergyScanResponse^  retVal = (cli::safe_cast<nwk^  >(this))->PerformEnergyScan(inValue);
    RequestIdentifier = retVal->RequestIdentifier;
    NWKStatus = retVal->NWKStatus;
    ScanChannels = retVal->ScanChannels;
    EnergyDetectedList = retVal->EnergyDetectedList;
    return retVal->Status;
}

inline PerformRouteDiscoveryResponse^  nwkClient::__nwk__PerformRouteDiscovery(PerformRouteDiscoveryRequest^  request)
{
    return __super::Channel->PerformRouteDiscovery(request);
}

inline System::Byte nwkClient::PerformRouteDiscovery(
            System::UInt32 Timeout, 
            System::String^  CallbackDestination, 
            RouteDiscoveryInfo^  Request, 
            cli::array< System::Byte >^  %RequestIdentifier, 
            NetworkStatusCode^  %NWKStatus, 
            NetworkStatusCode^  %NetworkStatusCode)
{
    PerformRouteDiscoveryRequest^  inValue = (gcnew PerformRouteDiscoveryRequest());
    inValue->Timeout = Timeout;
    inValue->CallbackDestination = CallbackDestination;
    inValue->Request = Request;
    PerformRouteDiscoveryResponse^  retVal = (cli::safe_cast<nwk^  >(this))->PerformRouteDiscovery(inValue);
    RequestIdentifier = retVal->RequestIdentifier;
    NWKStatus = retVal->NWKStatus;
    NetworkStatusCode = retVal->NetworkStatusCode;
    return retVal->Status;
}

inline SendNWKCommandResponse^  nwkClient::__nwk__SendNWKCommand(SendNWKCommandRequest^  request)
{
    return __super::Channel->SendNWKCommand(request);
}

inline System::Byte nwkClient::SendNWKCommand(System::UInt32 Timeout, System::String^  CallbackDestination, NWKMessageEvent^  Message, 
            NWKMessageResult^  %Message1)
{
    SendNWKCommandRequest^  inValue = (gcnew SendNWKCommandRequest());
    inValue->Timeout = Timeout;
    inValue->CallbackDestination = CallbackDestination;
    inValue->Message = Message;
    SendNWKCommandResponse^  retVal = (cli::safe_cast<nwk^  >(this))->SendNWKCommand(inValue);
    Message1 = retVal->Message;
    return retVal->Status;
}













inline FormNetworkEventRequest::FormNetworkEventRequest()
{
}

inline FormNetworkEventRequest::FormNetworkEventRequest(System::Byte Status, cli::array< System::Byte >^  RequestIdentifier, 
            NetworkStatusCode^  NWKStatus)
{
    this->Status = Status;
    this->RequestIdentifier = RequestIdentifier;
    this->NWKStatus = NWKStatus;
}


inline FormNetworkEventResponse::FormNetworkEventResponse()
{
}

inline FormNetworkEventResponse::FormNetworkEventResponse(System::Byte Status)
{
    this->Status = Status;
}


inline JoinEventRequest::JoinEventRequest()
{
}

inline JoinEventRequest::JoinEventRequest(System::Byte Status, NetworkStatusCode^  NWKStatus, cli::array< System::Byte >^  RequestIdentifier)
{
    this->Status = Status;
    this->NWKStatus = NWKStatus;
    this->RequestIdentifier = RequestIdentifier;
}


inline JoinEventResponse::JoinEventResponse()
{
}

inline JoinEventResponse::JoinEventResponse(System::Byte Status)
{
    this->Status = Status;
}


inline DiscoverNetworksEventRequest::DiscoverNetworksEventRequest()
{
}

inline DiscoverNetworksEventRequest::DiscoverNetworksEventRequest(System::Byte Status, cli::array< System::Byte >^  RequestIdentifier, 
            NetworkStatusCode^  NWKStatus, NetworkDescriptorList^  NetworkDescriptors, System::UInt32 NetworkCount)
{
    this->Status = Status;
    this->RequestIdentifier = RequestIdentifier;
    this->NWKStatus = NWKStatus;
    this->NetworkDescriptors = NetworkDescriptors;
    this->NetworkCount = NetworkCount;
}


inline DiscoverNetworksEventResponse::DiscoverNetworksEventResponse()
{
}

inline DiscoverNetworksEventResponse::DiscoverNetworksEventResponse(System::Byte Status)
{
    this->Status = Status;
}


inline PerformEnergyScanEventRequest::PerformEnergyScanEventRequest()
{
}

inline PerformEnergyScanEventRequest::PerformEnergyScanEventRequest(System::Byte Status, cli::array< System::Byte >^  RequestIdentifier, 
            NetworkStatusCode^  NWKStatus, System::UInt32 ScanChannels, cli::array< EnergyScanResult^  >^  EnergyDetectedList)
{
    this->Status = Status;
    this->RequestIdentifier = RequestIdentifier;
    this->NWKStatus = NWKStatus;
    this->ScanChannels = ScanChannels;
    this->EnergyDetectedList = EnergyDetectedList;
}


inline PerformEnergyScanEventResponse::PerformEnergyScanEventResponse()
{
}

inline PerformEnergyScanEventResponse::PerformEnergyScanEventResponse(System::Byte Status)
{
    this->Status = Status;
}


inline NetworkStatusEventRequest::NetworkStatusEventRequest()
{
}

inline NetworkStatusEventRequest::NetworkStatusEventRequest(System::Byte Status, NetworkStatusCode^  NWKStatus, System::UInt16 NetworkAddr)
{
    this->Status = Status;
    this->NWKStatus = NWKStatus;
    this->NetworkAddr = NetworkAddr;
}


inline NetworkStatusEventResponse::NetworkStatusEventResponse()
{
}

inline NetworkStatusEventResponse::NetworkStatusEventResponse(System::Byte Status)
{
    this->Status = Status;
}


inline PerformRouteDiscoveryEventRequest::PerformRouteDiscoveryEventRequest()
{
}

inline PerformRouteDiscoveryEventRequest::PerformRouteDiscoveryEventRequest(System::Byte Status, cli::array< System::Byte >^  RequestIdentifier, 
            NetworkStatusCode^  NWKStatus, NetworkStatusCode^  NetworkStatusCode)
{
    this->Status = Status;
    this->RequestIdentifier = RequestIdentifier;
    this->NWKStatus = NWKStatus;
    this->NetworkStatusCode = NetworkStatusCode;
}


inline PerformRouteDiscoveryEventResponse::PerformRouteDiscoveryEventResponse()
{
}

inline PerformRouteDiscoveryEventResponse::PerformRouteDiscoveryEventResponse(System::Byte Status)
{
    this->Status = Status;
}


inline StartRouterEventRequest::StartRouterEventRequest()
{
}

inline StartRouterEventRequest::StartRouterEventRequest(System::Byte Status, NetworkStatusCode^  NWKStatus, cli::array< System::Byte >^  RequestIdentifier)
{
    this->Status = Status;
    this->NWKStatus = NWKStatus;
    this->RequestIdentifier = RequestIdentifier;
}


inline StartRouterEventResponse::StartRouterEventResponse()
{
}

inline StartRouterEventResponse::StartRouterEventResponse(System::Byte Status)
{
    this->Status = Status;
}


inline LeaveEventRequest::LeaveEventRequest()
{
}

inline LeaveEventRequest::LeaveEventRequest(System::Byte Status, NetworkStatusCode^  NWKStatus, cli::array< System::Byte >^  RequestIdentifier)
{
    this->Status = Status;
    this->NWKStatus = NWKStatus;
    this->RequestIdentifier = RequestIdentifier;
}


inline LeaveEventResponse::LeaveEventResponse()
{
}

inline LeaveEventResponse::LeaveEventResponse(System::Byte Status)
{
    this->Status = Status;
}


inline ResetEventRequest::ResetEventRequest()
{
}

inline ResetEventRequest::ResetEventRequest(System::Byte Status, cli::array< System::Byte >^  RequestIdentifier, NetworkStatusCode^  NWKStatus)
{
    this->Status = Status;
    this->RequestIdentifier = RequestIdentifier;
    this->NWKStatus = NWKStatus;
}


inline ResetEventResponse::ResetEventResponse()
{
}

inline ResetEventResponse::ResetEventResponse(System::Byte Status)
{
    this->Status = Status;
}


inline NotifyNWKMessageEventRequest::NotifyNWKMessageEventRequest()
{
}

inline NotifyNWKMessageEventRequest::NotifyNWKMessageEventRequest(System::Byte Status, cli::array< System::Byte >^  RequestIdentifier, 
            NWKMessageEvent^  Message)
{
    this->Status = Status;
    this->RequestIdentifier = RequestIdentifier;
    this->Message = Message;
}


inline NotifyNWKMessageEventResponse::NotifyNWKMessageEventResponse()
{
}

inline NotifyNWKMessageEventResponse::NotifyNWKMessageEventResponse(System::Byte Status)
{
    this->Status = Status;
}



inline nwkEventClient::nwkEventClient()
{
}

inline nwkEventClient::nwkEventClient(System::String^  endpointConfigurationName) : 
        System::ServiceModel::ClientBase<nwkEvent^ >(endpointConfigurationName)
{
}

inline nwkEventClient::nwkEventClient(System::String^  endpointConfigurationName, System::String^  remoteAddress) : 
        System::ServiceModel::ClientBase<nwkEvent^ >(endpointConfigurationName, remoteAddress)
{
}

inline nwkEventClient::nwkEventClient(System::String^  endpointConfigurationName, System::ServiceModel::EndpointAddress^  remoteAddress) : 
        System::ServiceModel::ClientBase<nwkEvent^ >(endpointConfigurationName, remoteAddress)
{
}

inline nwkEventClient::nwkEventClient(System::ServiceModel::Channels::Binding^  binding, System::ServiceModel::EndpointAddress^  remoteAddress) : 
        System::ServiceModel::ClientBase<nwkEvent^ >(binding, remoteAddress)
{
}

inline FormNetworkEventResponse^  nwkEventClient::__nwkEvent__FormNetworkEvent(FormNetworkEventRequest^  request)
{
    return __super::Channel->FormNetworkEvent(request);
}

inline System::Void nwkEventClient::FormNetworkEvent(System::Byte %Status, cli::array< System::Byte >^  RequestIdentifier, 
            NetworkStatusCode^  NWKStatus)
{
    FormNetworkEventRequest^  inValue = (gcnew FormNetworkEventRequest());
    inValue->Status = Status;
    inValue->RequestIdentifier = RequestIdentifier;
    inValue->NWKStatus = NWKStatus;
    FormNetworkEventResponse^  retVal = (cli::safe_cast<nwkEvent^  >(this))->FormNetworkEvent(inValue);
    Status = retVal->Status;
}

inline JoinEventResponse^  nwkEventClient::__nwkEvent__JoinEvent(JoinEventRequest^  request)
{
    return __super::Channel->JoinEvent(request);
}

inline System::Void nwkEventClient::JoinEvent(System::Byte %Status, NetworkStatusCode^  NWKStatus, cli::array< System::Byte >^  RequestIdentifier)
{
    JoinEventRequest^  inValue = (gcnew JoinEventRequest());
    inValue->Status = Status;
    inValue->NWKStatus = NWKStatus;
    inValue->RequestIdentifier = RequestIdentifier;
    JoinEventResponse^  retVal = (cli::safe_cast<nwkEvent^  >(this))->JoinEvent(inValue);
    Status = retVal->Status;
}

inline DiscoverNetworksEventResponse^  nwkEventClient::__nwkEvent__DiscoverNetworksEvent(DiscoverNetworksEventRequest^  request)
{
    return __super::Channel->DiscoverNetworksEvent(request);
}

inline System::Void nwkEventClient::DiscoverNetworksEvent(System::Byte %Status, cli::array< System::Byte >^  RequestIdentifier, 
            NetworkStatusCode^  NWKStatus, NetworkDescriptorList^  NetworkDescriptors, System::UInt32 NetworkCount)
{
    DiscoverNetworksEventRequest^  inValue = (gcnew DiscoverNetworksEventRequest());
    inValue->Status = Status;
    inValue->RequestIdentifier = RequestIdentifier;
    inValue->NWKStatus = NWKStatus;
    inValue->NetworkDescriptors = NetworkDescriptors;
    inValue->NetworkCount = NetworkCount;
    DiscoverNetworksEventResponse^  retVal = (cli::safe_cast<nwkEvent^  >(this))->DiscoverNetworksEvent(inValue);
    Status = retVal->Status;
}

inline PerformEnergyScanEventResponse^  nwkEventClient::__nwkEvent__PerformEnergyScanEvent(PerformEnergyScanEventRequest^  request)
{
    return __super::Channel->PerformEnergyScanEvent(request);
}

inline System::Void nwkEventClient::PerformEnergyScanEvent(System::Byte %Status, cli::array< System::Byte >^  RequestIdentifier, 
            NetworkStatusCode^  NWKStatus, System::UInt32 ScanChannels, cli::array< EnergyScanResult^  >^  EnergyDetectedList)
{
    PerformEnergyScanEventRequest^  inValue = (gcnew PerformEnergyScanEventRequest());
    inValue->Status = Status;
    inValue->RequestIdentifier = RequestIdentifier;
    inValue->NWKStatus = NWKStatus;
    inValue->ScanChannels = ScanChannels;
    inValue->EnergyDetectedList = EnergyDetectedList;
    PerformEnergyScanEventResponse^  retVal = (cli::safe_cast<nwkEvent^  >(this))->PerformEnergyScanEvent(inValue);
    Status = retVal->Status;
}

inline NetworkStatusEventResponse^  nwkEventClient::__nwkEvent__NetworkStatusEvent(NetworkStatusEventRequest^  request)
{
    return __super::Channel->NetworkStatusEvent(request);
}

inline System::Void nwkEventClient::NetworkStatusEvent(System::Byte %Status, NetworkStatusCode^  NWKStatus, System::UInt16 NetworkAddr)
{
    NetworkStatusEventRequest^  inValue = (gcnew NetworkStatusEventRequest());
    inValue->Status = Status;
    inValue->NWKStatus = NWKStatus;
    inValue->NetworkAddr = NetworkAddr;
    NetworkStatusEventResponse^  retVal = (cli::safe_cast<nwkEvent^  >(this))->NetworkStatusEvent(inValue);
    Status = retVal->Status;
}

inline PerformRouteDiscoveryEventResponse^  nwkEventClient::__nwkEvent__PerformRouteDiscoveryEvent(PerformRouteDiscoveryEventRequest^  request)
{
    return __super::Channel->PerformRouteDiscoveryEvent(request);
}

inline System::Void nwkEventClient::PerformRouteDiscoveryEvent(System::Byte %Status, cli::array< System::Byte >^  RequestIdentifier, 
            NetworkStatusCode^  NWKStatus, NetworkStatusCode^  NetworkStatusCode)
{
    PerformRouteDiscoveryEventRequest^  inValue = (gcnew PerformRouteDiscoveryEventRequest());
    inValue->Status = Status;
    inValue->RequestIdentifier = RequestIdentifier;
    inValue->NWKStatus = NWKStatus;
    inValue->NetworkStatusCode = NetworkStatusCode;
    PerformRouteDiscoveryEventResponse^  retVal = (cli::safe_cast<nwkEvent^  >(this))->PerformRouteDiscoveryEvent(inValue);
    Status = retVal->Status;
}

inline StartRouterEventResponse^  nwkEventClient::__nwkEvent__StartRouterEvent(StartRouterEventRequest^  request)
{
    return __super::Channel->StartRouterEvent(request);
}

inline System::Void nwkEventClient::StartRouterEvent(System::Byte %Status, NetworkStatusCode^  NWKStatus, cli::array< System::Byte >^  RequestIdentifier)
{
    StartRouterEventRequest^  inValue = (gcnew StartRouterEventRequest());
    inValue->Status = Status;
    inValue->NWKStatus = NWKStatus;
    inValue->RequestIdentifier = RequestIdentifier;
    StartRouterEventResponse^  retVal = (cli::safe_cast<nwkEvent^  >(this))->StartRouterEvent(inValue);
    Status = retVal->Status;
}

inline LeaveEventResponse^  nwkEventClient::__nwkEvent__LeaveEvent(LeaveEventRequest^  request)
{
    return __super::Channel->LeaveEvent(request);
}

inline System::Void nwkEventClient::LeaveEvent(System::Byte %Status, NetworkStatusCode^  NWKStatus, cli::array< System::Byte >^  RequestIdentifier)
{
    LeaveEventRequest^  inValue = (gcnew LeaveEventRequest());
    inValue->Status = Status;
    inValue->NWKStatus = NWKStatus;
    inValue->RequestIdentifier = RequestIdentifier;
    LeaveEventResponse^  retVal = (cli::safe_cast<nwkEvent^  >(this))->LeaveEvent(inValue);
    Status = retVal->Status;
}

inline ResetEventResponse^  nwkEventClient::__nwkEvent__ResetEvent(ResetEventRequest^  request)
{
    return __super::Channel->ResetEvent(request);
}

inline System::Void nwkEventClient::ResetEvent(System::Byte %Status, cli::array< System::Byte >^  RequestIdentifier, NetworkStatusCode^  NWKStatus)
{
    ResetEventRequest^  inValue = (gcnew ResetEventRequest());
    inValue->Status = Status;
    inValue->RequestIdentifier = RequestIdentifier;
    inValue->NWKStatus = NWKStatus;
    ResetEventResponse^  retVal = (cli::safe_cast<nwkEvent^  >(this))->ResetEvent(inValue);
    Status = retVal->Status;
}

inline NotifyNWKMessageEventResponse^  nwkEventClient::__nwkEvent__NotifyNWKMessageEvent(NotifyNWKMessageEventRequest^  request)
{
    return __super::Channel->NotifyNWKMessageEvent(request);
}

inline System::Void nwkEventClient::NotifyNWKMessageEvent(System::Byte %Status, cli::array< System::Byte >^  RequestIdentifier, 
            NWKMessageEvent^  Message)
{
    NotifyNWKMessageEventRequest^  inValue = (gcnew NotifyNWKMessageEventRequest());
    inValue->Status = Status;
    inValue->RequestIdentifier = RequestIdentifier;
    inValue->Message = Message;
    NotifyNWKMessageEventResponse^  retVal = (cli::safe_cast<nwkEvent^  >(this))->NotifyNWKMessageEvent(inValue);
    Status = retVal->Status;
}










inline StartGatewayDeviceEventRequest::StartGatewayDeviceEventRequest()
{
}

inline StartGatewayDeviceEventRequest::StartGatewayDeviceEventRequest(System::Byte Status, cli::array< System::Byte >^  RequestIdentifier, 
            System::Byte NWKStatus)
{
    this->Status = Status;
    this->RequestIdentifier = RequestIdentifier;
    this->NWKStatus = NWKStatus;
}


inline StartGatewayDeviceEventResponse::StartGatewayDeviceEventResponse()
{
}

inline StartGatewayDeviceEventResponse::StartGatewayDeviceEventResponse(System::Byte Status)
{
    this->Status = Status;
}


inline NodeDiscoveryEventRequest::NodeDiscoveryEventRequest()
{
}

inline NodeDiscoveryEventRequest::NodeDiscoveryEventRequest(cli::array< System::Byte >^  RequestIdentifier, WSNNode^  NodeInfo)
{
    this->RequestIdentifier = RequestIdentifier;
    this->NodeInfo = NodeInfo;
}


inline NodeDiscoveryEventResponse::NodeDiscoveryEventResponse()
{
}

inline NodeDiscoveryEventResponse::NodeDiscoveryEventResponse(System::Byte Status)
{
    this->Status = Status;
}


inline NodeLeaveEventRequest::NodeLeaveEventRequest()
{
}

inline NodeLeaveEventRequest::NodeLeaveEventRequest(cli::array< System::Byte >^  RequestIdentifier, Address^  Address)
{
    this->RequestIdentifier = RequestIdentifier;
    this->Address = Address;
}


inline NodeLeaveEventResponse::NodeLeaveEventResponse()
{
}

inline NodeLeaveEventResponse::NodeLeaveEventResponse(System::Byte Status)
{
    this->Status = Status;
}


inline ServiceDiscoveryEventRequest::ServiceDiscoveryEventRequest()
{
}

inline ServiceDiscoveryEventRequest::ServiceDiscoveryEventRequest(cli::array< System::Byte >^  RequestIdentifier, Address^  Address, 
            System::Byte ActiveEndpoints, cli::array< SimpleDescriptor^  >^  SimpleDescriptors)
{
    this->RequestIdentifier = RequestIdentifier;
    this->Address = Address;
    this->ActiveEndpoints = ActiveEndpoints;
    this->SimpleDescriptors = SimpleDescriptors;
}


inline ServiceDiscoveryEventResponse::ServiceDiscoveryEventResponse()
{
}

inline ServiceDiscoveryEventResponse::ServiceDiscoveryEventResponse(System::Byte Status)
{
    this->Status = Status;
}


inline ServiceDiscriptorEventRequest::ServiceDiscriptorEventRequest()
{
}

inline ServiceDiscriptorEventRequest::ServiceDiscriptorEventRequest(cli::array< System::Byte >^  RequestIdentifier, Address^  Address, 
            System::Byte ActiveEndpoints, cli::array< SimpleDescriptor^  >^  SimpleDescriptors)
{
    this->RequestIdentifier = RequestIdentifier;
    this->Address = Address;
    this->ActiveEndpoints = ActiveEndpoints;
    this->SimpleDescriptors = SimpleDescriptors;
}


inline ServiceDiscriptorEventResponse::ServiceDiscriptorEventResponse()
{
}

inline ServiceDiscriptorEventResponse::ServiceDiscriptorEventResponse(System::Byte Status)
{
    this->Status = Status;
}


inline GmoLeaveEventRequest::GmoLeaveEventRequest()
{
}

inline GmoLeaveEventRequest::GmoLeaveEventRequest(System::Byte Status, cli::array< System::Byte >^  RequestIdentifier, System::Byte MgmtCommandStatus)
{
    this->Status = Status;
    this->RequestIdentifier = RequestIdentifier;
    this->MgmtCommandStatus = MgmtCommandStatus;
}


inline GmoLeaveEventResponse::GmoLeaveEventResponse()
{
}

inline GmoLeaveEventResponse::GmoLeaveEventResponse(System::Byte Status)
{
    this->Status = Status;
}


inline PermitJoinEventRequest::PermitJoinEventRequest()
{
}

inline PermitJoinEventRequest::PermitJoinEventRequest(System::Byte Status, cli::array< System::Byte >^  RequestIdentifier, 
            System::Byte MgmtCommandStatus)
{
    this->Status = Status;
    this->RequestIdentifier = RequestIdentifier;
    this->MgmtCommandStatus = MgmtCommandStatus;
}


inline PermitJoinEventResponse::PermitJoinEventResponse()
{
}

inline PermitJoinEventResponse::PermitJoinEventResponse(System::Byte Status)
{
    this->Status = Status;
}



inline gmoEventClient::gmoEventClient()
{
}

inline gmoEventClient::gmoEventClient(System::String^  endpointConfigurationName) : 
        System::ServiceModel::ClientBase<gmoEvent^ >(endpointConfigurationName)
{
}

inline gmoEventClient::gmoEventClient(System::String^  endpointConfigurationName, System::String^  remoteAddress) : 
        System::ServiceModel::ClientBase<gmoEvent^ >(endpointConfigurationName, remoteAddress)
{
}

inline gmoEventClient::gmoEventClient(System::String^  endpointConfigurationName, System::ServiceModel::EndpointAddress^  remoteAddress) : 
        System::ServiceModel::ClientBase<gmoEvent^ >(endpointConfigurationName, remoteAddress)
{
}

inline gmoEventClient::gmoEventClient(System::ServiceModel::Channels::Binding^  binding, System::ServiceModel::EndpointAddress^  remoteAddress) : 
        System::ServiceModel::ClientBase<gmoEvent^ >(binding, remoteAddress)
{
}

inline StartGatewayDeviceEventResponse^  gmoEventClient::__gmoEvent__StartGatewayDeviceEvent(StartGatewayDeviceEventRequest^  request)
{
    return __super::Channel->StartGatewayDeviceEvent(request);
}

inline System::Void gmoEventClient::StartGatewayDeviceEvent(System::Byte %Status, cli::array< System::Byte >^  RequestIdentifier, 
            System::Byte NWKStatus)
{
    StartGatewayDeviceEventRequest^  inValue = (gcnew StartGatewayDeviceEventRequest());
    inValue->Status = Status;
    inValue->RequestIdentifier = RequestIdentifier;
    inValue->NWKStatus = NWKStatus;
    StartGatewayDeviceEventResponse^  retVal = (cli::safe_cast<gmoEvent^  >(this))->StartGatewayDeviceEvent(inValue);
    Status = retVal->Status;
}

inline NodeDiscoveryEventResponse^  gmoEventClient::__gmoEvent__NodeDiscoveryEvent(NodeDiscoveryEventRequest^  request)
{
    return __super::Channel->NodeDiscoveryEvent(request);
}

inline System::Byte gmoEventClient::NodeDiscoveryEvent(cli::array< System::Byte >^  RequestIdentifier, WSNNode^  NodeInfo)
{
    NodeDiscoveryEventRequest^  inValue = (gcnew NodeDiscoveryEventRequest());
    inValue->RequestIdentifier = RequestIdentifier;
    inValue->NodeInfo = NodeInfo;
    NodeDiscoveryEventResponse^  retVal = (cli::safe_cast<gmoEvent^  >(this))->NodeDiscoveryEvent(inValue);
    return retVal->Status;
}

inline NodeLeaveEventResponse^  gmoEventClient::__gmoEvent__NodeLeaveEvent(NodeLeaveEventRequest^  request)
{
    return __super::Channel->NodeLeaveEvent(request);
}

inline System::Byte gmoEventClient::NodeLeaveEvent(cli::array< System::Byte >^  RequestIdentifier, Address^  Address)
{
    NodeLeaveEventRequest^  inValue = (gcnew NodeLeaveEventRequest());
    inValue->RequestIdentifier = RequestIdentifier;
    inValue->Address = Address;
    NodeLeaveEventResponse^  retVal = (cli::safe_cast<gmoEvent^  >(this))->NodeLeaveEvent(inValue);
    return retVal->Status;
}

inline ServiceDiscoveryEventResponse^  gmoEventClient::__gmoEvent__ServiceDiscoveryEvent(ServiceDiscoveryEventRequest^  request)
{
    return __super::Channel->ServiceDiscoveryEvent(request);
}

inline System::Byte gmoEventClient::ServiceDiscoveryEvent(cli::array< System::Byte >^  RequestIdentifier, Address^  Address, 
            System::Byte ActiveEndpoints, cli::array< SimpleDescriptor^  >^  SimpleDescriptors)
{
    ServiceDiscoveryEventRequest^  inValue = (gcnew ServiceDiscoveryEventRequest());
    inValue->RequestIdentifier = RequestIdentifier;
    inValue->Address = Address;
    inValue->ActiveEndpoints = ActiveEndpoints;
    inValue->SimpleDescriptors = SimpleDescriptors;
    ServiceDiscoveryEventResponse^  retVal = (cli::safe_cast<gmoEvent^  >(this))->ServiceDiscoveryEvent(inValue);
    return retVal->Status;
}

inline ServiceDiscriptorEventResponse^  gmoEventClient::__gmoEvent__ServiceDiscriptorEvent(ServiceDiscriptorEventRequest^  request)
{
    return __super::Channel->ServiceDiscriptorEvent(request);
}

inline System::Byte gmoEventClient::ServiceDiscriptorEvent(cli::array< System::Byte >^  RequestIdentifier, Address^  Address, 
            System::Byte ActiveEndpoints, cli::array< SimpleDescriptor^  >^  SimpleDescriptors)
{
    ServiceDiscriptorEventRequest^  inValue = (gcnew ServiceDiscriptorEventRequest());
    inValue->RequestIdentifier = RequestIdentifier;
    inValue->Address = Address;
    inValue->ActiveEndpoints = ActiveEndpoints;
    inValue->SimpleDescriptors = SimpleDescriptors;
    ServiceDiscriptorEventResponse^  retVal = (cli::safe_cast<gmoEvent^  >(this))->ServiceDiscriptorEvent(inValue);
    return retVal->Status;
}

inline GmoLeaveEventResponse^  gmoEventClient::__gmoEvent__GmoLeaveEvent(GmoLeaveEventRequest^  request)
{
    return __super::Channel->GmoLeaveEvent(request);
}

inline System::Void gmoEventClient::GmoLeaveEvent(System::Byte %Status, cli::array< System::Byte >^  RequestIdentifier, System::Byte MgmtCommandStatus)
{
    GmoLeaveEventRequest^  inValue = (gcnew GmoLeaveEventRequest());
    inValue->Status = Status;
    inValue->RequestIdentifier = RequestIdentifier;
    inValue->MgmtCommandStatus = MgmtCommandStatus;
    GmoLeaveEventResponse^  retVal = (cli::safe_cast<gmoEvent^  >(this))->GmoLeaveEvent(inValue);
    Status = retVal->Status;
}

inline PermitJoinEventResponse^  gmoEventClient::__gmoEvent__PermitJoinEvent(PermitJoinEventRequest^  request)
{
    return __super::Channel->PermitJoinEvent(request);
}

inline System::Void gmoEventClient::PermitJoinEvent(System::Byte %Status, cli::array< System::Byte >^  RequestIdentifier, 
            System::Byte MgmtCommandStatus)
{
    PermitJoinEventRequest^  inValue = (gcnew PermitJoinEventRequest());
    inValue->Status = Status;
    inValue->RequestIdentifier = RequestIdentifier;
    inValue->MgmtCommandStatus = MgmtCommandStatus;
    PermitJoinEventResponse^  retVal = (cli::safe_cast<gmoEvent^  >(this))->PermitJoinEvent(inValue);
    Status = retVal->Status;
}




inline SendInterPANMessageRequest::SendInterPANMessageRequest()
{
}

inline SendInterPANMessageRequest::SendInterPANMessageRequest(SendInterPANMessageRequestBody^  Body)
{
    this->Body = Body;
}


inline SendInterPANMessageRequestBody::SendInterPANMessageRequestBody()
{
}

inline SendInterPANMessageRequestBody::SendInterPANMessageRequestBody(System::UInt32 Timeout, System::String^  CallbackDestination, 
            www::zigbee::org::GWGSchema::InterPANMessage^  Message)
{
    this->Timeout = Timeout;
    this->CallbackDestination = CallbackDestination;
    this->Message = Message;
}


inline SendInterPANMessageResponse::SendInterPANMessageResponse()
{
}

inline SendInterPANMessageResponse::SendInterPANMessageResponse(SendInterPANMessageResponseBody^  Body)
{
    this->Body = Body;
}


inline SendInterPANMessageResponseBody::SendInterPANMessageResponseBody()
{
}

inline SendInterPANMessageResponseBody::SendInterPANMessageResponseBody(System::Byte Status, System::Byte ConfirmStatus, 
            System::Byte ASDUHandle)
{
    this->Status = Status;
    this->ConfirmStatus = ConfirmStatus;
    this->ASDUHandle = ASDUHandle;
}



inline interPANClient::interPANClient()
{
}

inline interPANClient::interPANClient(System::String^  endpointConfigurationName) : 
        System::ServiceModel::ClientBase<interPAN^ >(endpointConfigurationName)
{
}

inline interPANClient::interPANClient(System::String^  endpointConfigurationName, System::String^  remoteAddress) : 
        System::ServiceModel::ClientBase<interPAN^ >(endpointConfigurationName, remoteAddress)
{
}

inline interPANClient::interPANClient(System::String^  endpointConfigurationName, System::ServiceModel::EndpointAddress^  remoteAddress) : 
        System::ServiceModel::ClientBase<interPAN^ >(endpointConfigurationName, remoteAddress)
{
}

inline interPANClient::interPANClient(System::ServiceModel::Channels::Binding^  binding, System::ServiceModel::EndpointAddress^  remoteAddress) : 
        System::ServiceModel::ClientBase<interPAN^ >(binding, remoteAddress)
{
}

inline SendInterPANMessageResponse^  interPANClient::__interPAN__SendInterPANMessage(SendInterPANMessageRequest^  request)
{
    return __super::Channel->SendInterPANMessage(request);
}

inline System::Byte interPANClient::SendInterPANMessage(System::UInt32 Timeout, System::String^  CallbackDestination, www::zigbee::org::GWGSchema::InterPANMessage^  Message, 
            System::Byte %ConfirmStatus, System::Byte %ASDUHandle)
{
    SendInterPANMessageRequest^  inValue = (gcnew SendInterPANMessageRequest());
    inValue->Body = (gcnew SendInterPANMessageRequestBody());
    inValue->Body->Timeout = Timeout;
    inValue->Body->CallbackDestination = CallbackDestination;
    inValue->Body->Message = Message;
    SendInterPANMessageResponse^  retVal = (cli::safe_cast<interPAN^  >(this))->SendInterPANMessage(inValue);
    ConfirmStatus = retVal->Body->ConfirmStatus;
    ASDUHandle = retVal->Body->ASDUHandle;
    return retVal->Body->Status;
}




inline NotifyInterPANMessageEventRequest::NotifyInterPANMessageEventRequest()
{
}

inline NotifyInterPANMessageEventRequest::NotifyInterPANMessageEventRequest(NotifyInterPANMessageEventRequestBody^  Body)
{
    this->Body = Body;
}


inline NotifyInterPANMessageEventRequestBody::NotifyInterPANMessageEventRequestBody()
{
}

inline NotifyInterPANMessageEventRequestBody::NotifyInterPANMessageEventRequestBody(System::String^  RequestIdentifier, www::zigbee::org::GWGSchema::InterPANMessage^  Message)
{
    this->RequestIdentifier = RequestIdentifier;
    this->Message = Message;
}


inline NotifyInterPANMessageEventResponse::NotifyInterPANMessageEventResponse()
{
}

inline NotifyInterPANMessageEventResponse::NotifyInterPANMessageEventResponse(NotifyInterPANMessageEventResponseBody^  Body)
{
    this->Body = Body;
}


inline NotifyInterPANMessageEventResponseBody::NotifyInterPANMessageEventResponseBody()
{
}

inline NotifyInterPANMessageEventResponseBody::NotifyInterPANMessageEventResponseBody(System::Byte Status)
{
    this->Status = Status;
}



inline interPANEventClient::interPANEventClient()
{
}

inline interPANEventClient::interPANEventClient(System::String^  endpointConfigurationName) : 
        System::ServiceModel::ClientBase<interPANEvent^ >(endpointConfigurationName)
{
}

inline interPANEventClient::interPANEventClient(System::String^  endpointConfigurationName, System::String^  remoteAddress) : 
        System::ServiceModel::ClientBase<interPANEvent^ >(endpointConfigurationName, remoteAddress)
{
}

inline interPANEventClient::interPANEventClient(System::String^  endpointConfigurationName, System::ServiceModel::EndpointAddress^  remoteAddress) : 
        System::ServiceModel::ClientBase<interPANEvent^ >(endpointConfigurationName, remoteAddress)
{
}

inline interPANEventClient::interPANEventClient(System::ServiceModel::Channels::Binding^  binding, System::ServiceModel::EndpointAddress^  remoteAddress) : 
        System::ServiceModel::ClientBase<interPANEvent^ >(binding, remoteAddress)
{
}

inline NotifyInterPANMessageEventResponse^  interPANEventClient::__interPANEvent__NotifyInterPANMessageEvent(NotifyInterPANMessageEventRequest^  request)
{
    return __super::Channel->NotifyInterPANMessageEvent(request);
}

inline System::Byte interPANEventClient::NotifyInterPANMessageEvent(System::String^  RequestIdentifier, www::zigbee::org::GWGSchema::InterPANMessage^  Message)
{
    NotifyInterPANMessageEventRequest^  inValue = (gcnew NotifyInterPANMessageEventRequest());
    inValue->Body = (gcnew NotifyInterPANMessageEventRequestBody());
    inValue->Body->RequestIdentifier = RequestIdentifier;
    inValue->Body->Message = Message;
    NotifyInterPANMessageEventResponse^  retVal = (cli::safe_cast<interPANEvent^  >(this))->NotifyInterPANMessageEvent(inValue);
    return retVal->Body->Status;
}
namespace www {
    namespace zigbee {
        namespace org {
            namespace GWGSchema {
    using namespace System::Runtime::Serialization;
    using namespace System;
    ref class ZDPCommand;
    ref class Address;
    ref class TxOptions;
    ref class ZDPMessage;
    ref class ZCLCommand;
    ref class ZCLMessage;
    ref class NodeDescriptor;
    ref class MACCapability;
    ref class ServerMask;
    ref class DescriptorCapability;
    ref class UserDescriptor;
    ref class NetworkConfiguration;
    ref class NetworkStatusCode;
    ref class JoinConfiguration;
    ref class NetworkDescriptorList;
    ref class NetworkDescriptor;
    ref class InterPANMessage;
    ref class APSMessageEvent;
    
    
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Runtime.Serialization", L"4.0.0.0"), 
    System::Runtime::Serialization::DataContractAttribute(Name=L"SecurityStatus", Namespace=L"http://www.zigbee.org/GWGSchema")]
    public enum class SecurityStatus : System::Int32
    {
        
        [System::Runtime::Serialization::EnumMemberAttribute]
        Unsecured = 0,
        
        [System::Runtime::Serialization::EnumMemberAttribute]
        SecuredNwkKey = 1,
        
        [System::Runtime::Serialization::EnumMemberAttribute]
        SecuredLinkKey = 2,
    };
    
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Runtime.Serialization", L"4.0.0.0"), 
    System::Runtime::Serialization::DataContractAttribute(Name=L"LogicalType", Namespace=L"http://www.zigbee.org/GWGSchema")]
    public enum class LogicalType : System::Int32
    {
        
        [System::Runtime::Serialization::EnumMemberAttribute]
        Current = 0,
        
        [System::Runtime::Serialization::EnumMemberAttribute]
        Coordinator = 1,
        
        [System::Runtime::Serialization::EnumMemberAttribute]
        Router = 2,
        
        [System::Runtime::Serialization::EnumMemberAttribute]
        EndDevice = 3,
    };
    
    [System::Diagnostics::DebuggerStepThroughAttribute, 
    System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Runtime.Serialization", L"4.0.0.0"), 
    System::Runtime::Serialization::DataContractAttribute(Name=L"ZDPCommand", Namespace=L"http://www.zigbee.org/GWGSchema")]
    public ref class ZDPCommand : public System::Object, public System::Runtime::Serialization::IExtensibleDataObject
    {
        
        private: System::Runtime::Serialization::ExtensionDataObject^  extensionDataField;
        
        private: www::zigbee::org::GWGSchema::Address^  DestinationField;
        
        private: www::zigbee::org::GWGSchema::TxOptions^  TxOptionsField;
        
        private: System::Byte RadiusField;
        
        private: System::UInt16 ClusterIDField;
        
        private: System::String^  CommandField;
        
        private: System::UInt32 DestinationAddrModeField;
        
        public: virtual property System::Runtime::Serialization::ExtensionDataObject^  ExtensionData
        {
            System::Runtime::Serialization::ExtensionDataObject^  get() sealed;
            System::Void set(System::Runtime::Serialization::ExtensionDataObject^  value) sealed;
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true, EmitDefaultValue=false)]
        property www::zigbee::org::GWGSchema::Address^  Destination
        {
            www::zigbee::org::GWGSchema::Address^  get();
            System::Void set(www::zigbee::org::GWGSchema::Address^  value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(EmitDefaultValue=false)]
        property www::zigbee::org::GWGSchema::TxOptions^  TxOptions
        {
            www::zigbee::org::GWGSchema::TxOptions^  get();
            System::Void set(www::zigbee::org::GWGSchema::TxOptions^  value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(Order=2)]
        property System::Byte Radius
        {
            System::Byte get();
            System::Void set(System::Byte value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true, Order=3)]
        property System::UInt16 ClusterID
        {
            System::UInt16 get();
            System::Void set(System::UInt16 value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true, EmitDefaultValue=false, Order=4)]
        property System::String^  Command
        {
            System::String^  get();
            System::Void set(System::String^  value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true, Order=5)]
        property System::UInt32 DestinationAddrMode
        {
            System::UInt32 get();
            System::Void set(System::UInt32 value);
        }
    };
    
    [System::Diagnostics::DebuggerStepThroughAttribute, 
    System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Runtime.Serialization", L"4.0.0.0"), 
    System::Runtime::Serialization::DataContractAttribute(Name=L"Address", Namespace=L"http://www.zigbee.org/GWGSchema")]
    public ref class Address : public System::Object, public System::Runtime::Serialization::IExtensibleDataObject
    {
        
        private: System::Runtime::Serialization::ExtensionDataObject^  extensionDataField;
        
        private: System::UInt16 NetworkAddressField;
        
        private: System::UInt64 IeeeAddressField;
        
        private: System::String^  AliasAddressField;
        
        public: virtual property System::Runtime::Serialization::ExtensionDataObject^  ExtensionData
        {
            System::Runtime::Serialization::ExtensionDataObject^  get() sealed;
            System::Void set(System::Runtime::Serialization::ExtensionDataObject^  value) sealed;
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute]
        property System::UInt16 NetworkAddress
        {
            System::UInt16 get();
            System::Void set(System::UInt16 value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(Order=1)]
        property System::UInt64 IeeeAddress
        {
            System::UInt64 get();
            System::Void set(System::UInt64 value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(EmitDefaultValue=false, Order=2)]
        property System::String^  AliasAddress
        {
            System::String^  get();
            System::Void set(System::String^  value);
        }
    };
    
    [System::Diagnostics::DebuggerStepThroughAttribute, 
    System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Runtime.Serialization", L"4.0.0.0"), 
    System::Runtime::Serialization::DataContractAttribute(Name=L"TxOptions", Namespace=L"http://www.zigbee.org/GWGSchema")]
    public ref class TxOptions : public System::Object, public System::Runtime::Serialization::IExtensibleDataObject
    {
        
        private: System::Runtime::Serialization::ExtensionDataObject^  extensionDataField;
        
        private: System::Boolean SecurityEnabledField;
        
        private: System::Boolean UseNetworkKeyField;
        
        private: System::Boolean AcknowledgedField;
        
        private: System::Boolean PermitFragmentationField;
        
        public: virtual property System::Runtime::Serialization::ExtensionDataObject^  ExtensionData
        {
            System::Runtime::Serialization::ExtensionDataObject^  get() sealed;
            System::Void set(System::Runtime::Serialization::ExtensionDataObject^  value) sealed;
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true)]
        property System::Boolean SecurityEnabled
        {
            System::Boolean get();
            System::Void set(System::Boolean value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true)]
        property System::Boolean UseNetworkKey
        {
            System::Boolean get();
            System::Void set(System::Boolean value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true, Order=2)]
        property System::Boolean Acknowledged
        {
            System::Boolean get();
            System::Void set(System::Boolean value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true, Order=3)]
        property System::Boolean PermitFragmentation
        {
            System::Boolean get();
            System::Void set(System::Boolean value);
        }
    };
    
    [System::Diagnostics::DebuggerStepThroughAttribute, 
    System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Runtime.Serialization", L"4.0.0.0"), 
    System::Runtime::Serialization::DataContractAttribute(Name=L"ZDPMessage", Namespace=L"http://www.zigbee.org/GWGSchema")]
    public ref class ZDPMessage : public System::Object, public System::Runtime::Serialization::IExtensibleDataObject
    {
        
        private: System::Runtime::Serialization::ExtensionDataObject^  extensionDataField;
        
        private: www::zigbee::org::GWGSchema::Address^  SourceAddressField;
        
        private: System::UInt32 SourceAddressModeField;
        
        private: www::zigbee::org::GWGSchema::SecurityStatus SecurityStatusField;
        
        private: System::Byte LinkQualityField;
        
        private: System::UInt32 RxTimeField;
        
        private: System::UInt16 ClusterIDField;
        
        private: System::String^  CommandField;
        
        public: virtual property System::Runtime::Serialization::ExtensionDataObject^  ExtensionData
        {
            System::Runtime::Serialization::ExtensionDataObject^  get() sealed;
            System::Void set(System::Runtime::Serialization::ExtensionDataObject^  value) sealed;
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(EmitDefaultValue=false)]
        property www::zigbee::org::GWGSchema::Address^  SourceAddress
        {
            www::zigbee::org::GWGSchema::Address^  get();
            System::Void set(www::zigbee::org::GWGSchema::Address^  value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true)]
        property System::UInt32 SourceAddressMode
        {
            System::UInt32 get();
            System::Void set(System::UInt32 value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(Order=2)]
        property www::zigbee::org::GWGSchema::SecurityStatus SecurityStatus
        {
            www::zigbee::org::GWGSchema::SecurityStatus get();
            System::Void set(www::zigbee::org::GWGSchema::SecurityStatus value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(Order=3)]
        property System::Byte LinkQuality
        {
            System::Byte get();
            System::Void set(System::Byte value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(Order=4)]
        property System::UInt32 RxTime
        {
            System::UInt32 get();
            System::Void set(System::UInt32 value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(Order=5)]
        property System::UInt16 ClusterID
        {
            System::UInt16 get();
            System::Void set(System::UInt16 value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true, EmitDefaultValue=false, Order=6)]
        property System::String^  Command
        {
            System::String^  get();
            System::Void set(System::String^  value);
        }
    };
    
    [System::Diagnostics::DebuggerStepThroughAttribute, 
    System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Runtime.Serialization", L"4.0.0.0"), 
    System::Runtime::Serialization::DataContractAttribute(Name=L"ZCLCommand", Namespace=L"http://www.zigbee.org/GWGSchema")]
    public ref class ZCLCommand : public System::Object, public System::Runtime::Serialization::IExtensibleDataObject
    {
        
        private: System::Runtime::Serialization::ExtensionDataObject^  extensionDataField;
        
        private: System::UInt32 DestinationAddressModeField;
        
        private: www::zigbee::org::GWGSchema::Address^  DestinationAddressField;
        
        private: System::Byte DestinationEndpointField;
        
        private: System::UInt16 ProfileIDField;
        
        private: System::UInt16 ClusterIDField;
        
        private: System::Byte SourceEndpointField;
        
        private: www::zigbee::org::GWGSchema::TxOptions^  TxOptionsField;
        
        private: System::Byte RadiusField;
        
        private: System::String^  ZCLPayloadField;
        
        private: System::String^  ZCLHeaderField;
        
        public: virtual property System::Runtime::Serialization::ExtensionDataObject^  ExtensionData
        {
            System::Runtime::Serialization::ExtensionDataObject^  get() sealed;
            System::Void set(System::Runtime::Serialization::ExtensionDataObject^  value) sealed;
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true)]
        property System::UInt32 DestinationAddressMode
        {
            System::UInt32 get();
            System::Void set(System::UInt32 value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(EmitDefaultValue=false, Order=1)]
        property www::zigbee::org::GWGSchema::Address^  DestinationAddress
        {
            www::zigbee::org::GWGSchema::Address^  get();
            System::Void set(www::zigbee::org::GWGSchema::Address^  value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(Order=2)]
        property System::Byte DestinationEndpoint
        {
            System::Byte get();
            System::Void set(System::Byte value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(Order=3)]
        property System::UInt16 ProfileID
        {
            System::UInt16 get();
            System::Void set(System::UInt16 value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true, Order=4)]
        property System::UInt16 ClusterID
        {
            System::UInt16 get();
            System::Void set(System::UInt16 value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(Order=5)]
        property System::Byte SourceEndpoint
        {
            System::Byte get();
            System::Void set(System::Byte value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true, EmitDefaultValue=false, Order=6)]
        property www::zigbee::org::GWGSchema::TxOptions^  TxOptions
        {
            www::zigbee::org::GWGSchema::TxOptions^  get();
            System::Void set(www::zigbee::org::GWGSchema::TxOptions^  value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true, Order=7)]
        property System::Byte Radius
        {
            System::Byte get();
            System::Void set(System::Byte value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true, EmitDefaultValue=false, Order=8)]
        property System::String^  ZCLPayload
        {
            System::String^  get();
            System::Void set(System::String^  value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true, EmitDefaultValue=false, Order=9)]
        property System::String^  ZCLHeader
        {
            System::String^  get();
            System::Void set(System::String^  value);
        }
    };
    
    [System::Diagnostics::DebuggerStepThroughAttribute, 
    System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Runtime.Serialization", L"4.0.0.0"), 
    System::Runtime::Serialization::DataContractAttribute(Name=L"ZCLMessage", Namespace=L"http://www.zigbee.org/GWGSchema")]
    public ref class ZCLMessage : public System::Object, public System::Runtime::Serialization::IExtensibleDataObject
    {
        
        private: System::Runtime::Serialization::ExtensionDataObject^  extensionDataField;
        
        private: System::UInt32 RxTimeField;
        
        private: System::Byte DestinationEndpointField;
        
        private: www::zigbee::org::GWGSchema::Address^  SourceAddressField;
        
        private: System::Byte SourceEndpointField;
        
        private: System::UInt16 ProfileIDField;
        
        private: System::UInt16 ClusterIDField;
        
        private: System::String^  ZCLPayloadField;
        
        private: System::UInt32 APSStatusField;
        
        private: System::UInt32 SourceAddressModeField;
        
        private: System::String^  ZCLHeaderField;
        
        public: virtual property System::Runtime::Serialization::ExtensionDataObject^  ExtensionData
        {
            System::Runtime::Serialization::ExtensionDataObject^  get() sealed;
            System::Void set(System::Runtime::Serialization::ExtensionDataObject^  value) sealed;
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true)]
        property System::UInt32 RxTime
        {
            System::UInt32 get();
            System::Void set(System::UInt32 value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true, Order=1)]
        property System::Byte DestinationEndpoint
        {
            System::Byte get();
            System::Void set(System::Byte value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(EmitDefaultValue=false, Order=2)]
        property www::zigbee::org::GWGSchema::Address^  SourceAddress
        {
            www::zigbee::org::GWGSchema::Address^  get();
            System::Void set(www::zigbee::org::GWGSchema::Address^  value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(Order=3)]
        property System::Byte SourceEndpoint
        {
            System::Byte get();
            System::Void set(System::Byte value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(Order=4)]
        property System::UInt16 ProfileID
        {
            System::UInt16 get();
            System::Void set(System::UInt16 value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true, Order=5)]
        property System::UInt16 ClusterID
        {
            System::UInt16 get();
            System::Void set(System::UInt16 value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true, EmitDefaultValue=false, Order=6)]
        property System::String^  ZCLPayload
        {
            System::String^  get();
            System::Void set(System::String^  value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true, Order=7)]
        property System::UInt32 APSStatus
        {
            System::UInt32 get();
            System::Void set(System::UInt32 value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true, Order=8)]
        property System::UInt32 SourceAddressMode
        {
            System::UInt32 get();
            System::Void set(System::UInt32 value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true, EmitDefaultValue=false, Order=9)]
        property System::String^  ZCLHeader
        {
            System::String^  get();
            System::Void set(System::String^  value);
        }
    };
    
    [System::Diagnostics::DebuggerStepThroughAttribute, 
    System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Runtime.Serialization", L"4.0.0.0"), 
    System::Runtime::Serialization::DataContractAttribute(Name=L"NodeDescriptor", Namespace=L"http://www.zigbee.org/GWGSchema")]
    public ref class NodeDescriptor : public System::Object, public System::Runtime::Serialization::IExtensibleDataObject
    {
        
        public : [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Runtime.Serialization", L"4.0.0.0"), 
        System::Runtime::Serialization::DataContractAttribute(Name=L"NodeDescriptor.FrequencyBandType", Namespace=L"http://www.zigbee.org/GWGSchema")]
        enum class FrequencyBandType : System::Int32
        {
            
            [System::Runtime::Serialization::EnumMemberAttribute(Value=L"868MHz")]
            _868MHz = 0,
            
            [System::Runtime::Serialization::EnumMemberAttribute(Value=L"900MHz")]
            _900MHz = 1,
            
            [System::Runtime::Serialization::EnumMemberAttribute(Value=L"2400MHz")]
            _2400MHz = 2,
        };
        
        private: System::Runtime::Serialization::ExtensionDataObject^  extensionDataField;
        
        private: www::zigbee::org::GWGSchema::LogicalType LogicalTypeField;
        
        private: System::Boolean ComplexDescriptorAvailableField;
        
        private: System::Boolean UserDescriptorAvailableField;
        
        private: www::zigbee::org::GWGSchema::NodeDescriptor::FrequencyBandType^  FrequencyBandField;
        
        private: www::zigbee::org::GWGSchema::MACCapability^  MACCapabilityFlagField;
        
        private: System::UInt16 ManufacturerCodeField;
        
        private: System::Byte MaximumBufferSizeField;
        
        private: System::UInt16 MaximumIncomingTransferSizeField;
        
        private: www::zigbee::org::GWGSchema::ServerMask^  ServerMaskField;
        
        private: System::UInt16 MaximumOutgoingTransferSizeField;
        
        private: www::zigbee::org::GWGSchema::DescriptorCapability^  DescriptorCapabilityFieldField;
        
        public: virtual property System::Runtime::Serialization::ExtensionDataObject^  ExtensionData
        {
            System::Runtime::Serialization::ExtensionDataObject^  get() sealed;
            System::Void set(System::Runtime::Serialization::ExtensionDataObject^  value) sealed;
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute]
        property www::zigbee::org::GWGSchema::LogicalType LogicalType
        {
            www::zigbee::org::GWGSchema::LogicalType get();
            System::Void set(www::zigbee::org::GWGSchema::LogicalType value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(Order=1)]
        property System::Boolean ComplexDescriptorAvailable
        {
            System::Boolean get();
            System::Void set(System::Boolean value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(Order=2)]
        property System::Boolean UserDescriptorAvailable
        {
            System::Boolean get();
            System::Void set(System::Boolean value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(Order=3)]
        property www::zigbee::org::GWGSchema::NodeDescriptor::FrequencyBandType^  FrequencyBand
        {
            www::zigbee::org::GWGSchema::NodeDescriptor::FrequencyBandType^  get();
            System::Void set(www::zigbee::org::GWGSchema::NodeDescriptor::FrequencyBandType^  value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(EmitDefaultValue=false, Order=4)]
        property www::zigbee::org::GWGSchema::MACCapability^  MACCapabilityFlag
        {
            www::zigbee::org::GWGSchema::MACCapability^  get();
            System::Void set(www::zigbee::org::GWGSchema::MACCapability^  value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(Order=5)]
        property System::UInt16 ManufacturerCode
        {
            System::UInt16 get();
            System::Void set(System::UInt16 value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(Order=6)]
        property System::Byte MaximumBufferSize
        {
            System::Byte get();
            System::Void set(System::Byte value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(Order=7)]
        property System::UInt16 MaximumIncomingTransferSize
        {
            System::UInt16 get();
            System::Void set(System::UInt16 value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(EmitDefaultValue=false, Order=8)]
        property www::zigbee::org::GWGSchema::ServerMask^  ServerMask
        {
            www::zigbee::org::GWGSchema::ServerMask^  get();
            System::Void set(www::zigbee::org::GWGSchema::ServerMask^  value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(Order=9)]
        property System::UInt16 MaximumOutgoingTransferSize
        {
            System::UInt16 get();
            System::Void set(System::UInt16 value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(EmitDefaultValue=false, Order=10)]
        property www::zigbee::org::GWGSchema::DescriptorCapability^  DescriptorCapabilityField
        {
            www::zigbee::org::GWGSchema::DescriptorCapability^  get();
            System::Void set(www::zigbee::org::GWGSchema::DescriptorCapability^  value);
        }
    };
    
    [System::Diagnostics::DebuggerStepThroughAttribute, 
    System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Runtime.Serialization", L"4.0.0.0"), 
    System::Runtime::Serialization::DataContractAttribute(Name=L"MACCapability", Namespace=L"http://www.zigbee.org/GWGSchema")]
    public ref class MACCapability : public System::Object, public System::Runtime::Serialization::IExtensibleDataObject
    {
        
        private: System::Runtime::Serialization::ExtensionDataObject^  extensionDataField;
        
        private: System::Boolean AlternatePanCoordinatorField;
        
        private: System::Boolean DeviceIsFFDField;
        
        private: System::Boolean MainsPoweredField;
        
        private: System::Boolean ReceiverOnWhenIdleField;
        
        private: System::Boolean SecuritySupportedField;
        
        private: System::Boolean AllocateAddressField;
        
        public: virtual property System::Runtime::Serialization::ExtensionDataObject^  ExtensionData
        {
            System::Runtime::Serialization::ExtensionDataObject^  get() sealed;
            System::Void set(System::Runtime::Serialization::ExtensionDataObject^  value) sealed;
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true)]
        property System::Boolean AlternatePanCoordinator
        {
            System::Boolean get();
            System::Void set(System::Boolean value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true)]
        property System::Boolean DeviceIsFFD
        {
            System::Boolean get();
            System::Void set(System::Boolean value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true)]
        property System::Boolean MainsPowered
        {
            System::Boolean get();
            System::Void set(System::Boolean value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true)]
        property System::Boolean ReceiverOnWhenIdle
        {
            System::Boolean get();
            System::Void set(System::Boolean value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true)]
        property System::Boolean SecuritySupported
        {
            System::Boolean get();
            System::Void set(System::Boolean value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true, Order=5)]
        property System::Boolean AllocateAddress
        {
            System::Boolean get();
            System::Void set(System::Boolean value);
        }
    };
    
    [System::Diagnostics::DebuggerStepThroughAttribute, 
    System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Runtime.Serialization", L"4.0.0.0"), 
    System::Runtime::Serialization::DataContractAttribute(Name=L"ServerMask", Namespace=L"http://www.zigbee.org/GWGSchema")]
    public ref class ServerMask : public System::Object, public System::Runtime::Serialization::IExtensibleDataObject
    {
        
        private: System::Runtime::Serialization::ExtensionDataObject^  extensionDataField;
        
        private: System::Boolean PrimaryTrustCenterField;
        
        private: System::Boolean BackupTrustCenterField;
        
        private: System::Boolean PrimaryBindingTableCacheField;
        
        private: System::Boolean BackupBindingTableCacheField;
        
        private: System::Boolean PrimaryDiscoveryCacheField;
        
        private: System::Boolean BackupDiscoveryCacheField;
        
        private: System::Boolean NetworkManagerField;
        
        public: virtual property System::Runtime::Serialization::ExtensionDataObject^  ExtensionData
        {
            System::Runtime::Serialization::ExtensionDataObject^  get() sealed;
            System::Void set(System::Runtime::Serialization::ExtensionDataObject^  value) sealed;
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true)]
        property System::Boolean PrimaryTrustCenter
        {
            System::Boolean get();
            System::Void set(System::Boolean value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true, Order=1)]
        property System::Boolean BackupTrustCenter
        {
            System::Boolean get();
            System::Void set(System::Boolean value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true, Order=2)]
        property System::Boolean PrimaryBindingTableCache
        {
            System::Boolean get();
            System::Void set(System::Boolean value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true, Order=3)]
        property System::Boolean BackupBindingTableCache
        {
            System::Boolean get();
            System::Void set(System::Boolean value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true, Order=4)]
        property System::Boolean PrimaryDiscoveryCache
        {
            System::Boolean get();
            System::Void set(System::Boolean value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true, Order=5)]
        property System::Boolean BackupDiscoveryCache
        {
            System::Boolean get();
            System::Void set(System::Boolean value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true, Order=6)]
        property System::Boolean NetworkManager
        {
            System::Boolean get();
            System::Void set(System::Boolean value);
        }
    };
    
    [System::Diagnostics::DebuggerStepThroughAttribute, 
    System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Runtime.Serialization", L"4.0.0.0"), 
    System::Runtime::Serialization::DataContractAttribute(Name=L"DescriptorCapability", Namespace=L"http://www.zigbee.org/GWGSchema")]
    public ref class DescriptorCapability : public System::Object, public System::Runtime::Serialization::IExtensibleDataObject
    {
        
        private: System::Runtime::Serialization::ExtensionDataObject^  extensionDataField;
        
        private: System::Boolean ExtendedActiveEndpointListAvailableField;
        
        private: System::Boolean ExtendedSimpleDescriptorListAvailableField;
        
        public: virtual property System::Runtime::Serialization::ExtensionDataObject^  ExtensionData
        {
            System::Runtime::Serialization::ExtensionDataObject^  get() sealed;
            System::Void set(System::Runtime::Serialization::ExtensionDataObject^  value) sealed;
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true)]
        property System::Boolean ExtendedActiveEndpointListAvailable
        {
            System::Boolean get();
            System::Void set(System::Boolean value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true)]
        property System::Boolean ExtendedSimpleDescriptorListAvailable
        {
            System::Boolean get();
            System::Void set(System::Boolean value);
        }
    };
    
    [System::Diagnostics::DebuggerStepThroughAttribute, 
    System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Runtime.Serialization", L"4.0.0.0"), 
    System::Runtime::Serialization::DataContractAttribute(Name=L"UserDescriptor", Namespace=L"http://www.zigbee.org/GWGSchema")]
    public ref class UserDescriptor : public System::Object, public System::Runtime::Serialization::IExtensibleDataObject
    {
        
        private: System::Runtime::Serialization::ExtensionDataObject^  extensionDataField;
        
        private: System::String^  DescriptionField;
        
        public: virtual property System::Runtime::Serialization::ExtensionDataObject^  ExtensionData
        {
            System::Runtime::Serialization::ExtensionDataObject^  get() sealed;
            System::Void set(System::Runtime::Serialization::ExtensionDataObject^  value) sealed;
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true, EmitDefaultValue=false)]
        property System::String^  Description
        {
            System::String^  get();
            System::Void set(System::String^  value);
        }
    };
    
    [System::Diagnostics::DebuggerStepThroughAttribute, 
    System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Runtime.Serialization", L"4.0.0.0"), 
    System::Runtime::Serialization::DataContractAttribute(Name=L"NetworkConfiguration", Namespace=L"http://www.zigbee.org/GWGSchema")]
    public ref class NetworkConfiguration : public System::Object, public System::Runtime::Serialization::IExtensibleDataObject
    {
        
        private: System::Runtime::Serialization::ExtensionDataObject^  extensionDataField;
        
        private: System::UInt32 ScanChannelsField;
        
        private: System::Byte ScanDurationField;
        
        private: System::Byte BeaconOrderField;
        
        private: System::Byte SuperFrameOrderField;
        
        private: System::Boolean BatteryLifeExtensionField;
        
        public: virtual property System::Runtime::Serialization::ExtensionDataObject^  ExtensionData
        {
            System::Runtime::Serialization::ExtensionDataObject^  get() sealed;
            System::Void set(System::Runtime::Serialization::ExtensionDataObject^  value) sealed;
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute]
        property System::UInt32 ScanChannels
        {
            System::UInt32 get();
            System::Void set(System::UInt32 value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute]
        property System::Byte ScanDuration
        {
            System::Byte get();
            System::Void set(System::Byte value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true, Order=2)]
        property System::Byte BeaconOrder
        {
            System::Byte get();
            System::Void set(System::Byte value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true, Order=3)]
        property System::Byte SuperFrameOrder
        {
            System::Byte get();
            System::Void set(System::Byte value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true, Order=4)]
        property System::Boolean BatteryLifeExtension
        {
            System::Boolean get();
            System::Void set(System::Boolean value);
        }
    };
    
    [System::Diagnostics::DebuggerStepThroughAttribute, 
    System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Runtime.Serialization", L"4.0.0.0"), 
    System::Runtime::Serialization::DataContractAttribute(Name=L"NetworkStatusCode", Namespace=L"http://www.zigbee.org/GWGSchema")]
    public ref class NetworkStatusCode : public System::Object, public System::Runtime::Serialization::IExtensibleDataObject
    {
        
        private: System::Runtime::Serialization::ExtensionDataObject^  extensionDataField;
        
        private: System::UInt32 StatusField;
        
        private: System::UInt32 NetworkStatusCodeMemberField;
        
        public: virtual property System::Runtime::Serialization::ExtensionDataObject^  ExtensionData
        {
            System::Runtime::Serialization::ExtensionDataObject^  get() sealed;
            System::Void set(System::Runtime::Serialization::ExtensionDataObject^  value) sealed;
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true)]
        property System::UInt32 Status
        {
            System::UInt32 get();
            System::Void set(System::UInt32 value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(Name=L"NetworkStatusCode", Order=1)]
        property System::UInt32 NetworkStatusCodeMember
        {
            System::UInt32 get();
            System::Void set(System::UInt32 value);
        }
    };
    
    [System::Diagnostics::DebuggerStepThroughAttribute, 
    System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Runtime.Serialization", L"4.0.0.0"), 
    System::Runtime::Serialization::DataContractAttribute(Name=L"JoinConfiguration", Namespace=L"http://www.zigbee.org/GWGSchema")]
    public ref class JoinConfiguration : public System::Object, public System::Runtime::Serialization::IExtensibleDataObject
    {
        
        private: System::Runtime::Serialization::ExtensionDataObject^  extensionDataField;
        
        private: System::UInt64 ExtendedPanIdField;
        
        private: System::Byte RejoinNetworkField;
        
        private: System::UInt32 ScanChannelField;
        
        private: System::Byte ScanDurationField;
        
        private: www::zigbee::org::GWGSchema::MACCapability^  CapabilityInformationField;
        
        private: System::Boolean SecurityEnableField;
        
        public: virtual property System::Runtime::Serialization::ExtensionDataObject^  ExtensionData
        {
            System::Runtime::Serialization::ExtensionDataObject^  get() sealed;
            System::Void set(System::Runtime::Serialization::ExtensionDataObject^  value) sealed;
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true)]
        property System::UInt64 ExtendedPanId
        {
            System::UInt64 get();
            System::Void set(System::UInt64 value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true)]
        property System::Byte RejoinNetwork
        {
            System::Byte get();
            System::Void set(System::Byte value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true)]
        property System::UInt32 ScanChannel
        {
            System::UInt32 get();
            System::Void set(System::UInt32 value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true)]
        property System::Byte ScanDuration
        {
            System::Byte get();
            System::Void set(System::Byte value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true, EmitDefaultValue=false, Order=4)]
        property www::zigbee::org::GWGSchema::MACCapability^  CapabilityInformation
        {
            www::zigbee::org::GWGSchema::MACCapability^  get();
            System::Void set(www::zigbee::org::GWGSchema::MACCapability^  value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true, Order=5)]
        property System::Boolean SecurityEnable
        {
            System::Boolean get();
            System::Void set(System::Boolean value);
        }
    };
    
    [System::Diagnostics::DebuggerStepThroughAttribute, 
    System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Runtime.Serialization", L"4.0.0.0"), 
    System::Runtime::Serialization::DataContractAttribute(Name=L"NetworkDescriptorList", Namespace=L"http://www.zigbee.org/GWGSchema")]
    public ref class NetworkDescriptorList : public System::Object, public System::Runtime::Serialization::IExtensibleDataObject
    {
        
        private: System::Runtime::Serialization::ExtensionDataObject^  extensionDataField;
        
        private: www::zigbee::org::GWGSchema::NetworkDescriptor^  NetworkDescriptorField;
        
        public: virtual property System::Runtime::Serialization::ExtensionDataObject^  ExtensionData
        {
            System::Runtime::Serialization::ExtensionDataObject^  get() sealed;
            System::Void set(System::Runtime::Serialization::ExtensionDataObject^  value) sealed;
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true, EmitDefaultValue=false)]
        property www::zigbee::org::GWGSchema::NetworkDescriptor^  NetworkDescriptor
        {
            www::zigbee::org::GWGSchema::NetworkDescriptor^  get();
            System::Void set(www::zigbee::org::GWGSchema::NetworkDescriptor^  value);
        }
    };
    
    [System::Diagnostics::DebuggerStepThroughAttribute, 
    System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Runtime.Serialization", L"4.0.0.0"), 
    System::Runtime::Serialization::DataContractAttribute(Name=L"NetworkDescriptor", Namespace=L"http://www.zigbee.org/GWGSchema")]
    public ref class NetworkDescriptor : public System::Object, public System::Runtime::Serialization::IExtensibleDataObject
    {
        
        private: System::Runtime::Serialization::ExtensionDataObject^  extensionDataField;
        
        private: System::UInt64 ExtendedPanIdField;
        
        private: System::UInt16 LogicalChannelField;
        
        private: System::Byte StackProfileField;
        
        private: System::Byte ZigBeeVersionField;
        
        private: System::Byte BeaconOrderField;
        
        private: System::Byte SuperFrameOrderField;
        
        private: System::Boolean PermitJoiningField;
        
        private: System::Boolean RouterCapacityField;
        
        private: System::Boolean EndDeviceCapacityField;
        
        private: System::Uri^  NWKRootURIField;
        
        public: virtual property System::Runtime::Serialization::ExtensionDataObject^  ExtensionData
        {
            System::Runtime::Serialization::ExtensionDataObject^  get() sealed;
            System::Void set(System::Runtime::Serialization::ExtensionDataObject^  value) sealed;
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute]
        property System::UInt64 ExtendedPanId
        {
            System::UInt64 get();
            System::Void set(System::UInt64 value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute]
        property System::UInt16 LogicalChannel
        {
            System::UInt16 get();
            System::Void set(System::UInt16 value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute]
        property System::Byte StackProfile
        {
            System::Byte get();
            System::Void set(System::Byte value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute]
        property System::Byte ZigBeeVersion
        {
            System::Byte get();
            System::Void set(System::Byte value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(Order=4)]
        property System::Byte BeaconOrder
        {
            System::Byte get();
            System::Void set(System::Byte value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(Order=5)]
        property System::Byte SuperFrameOrder
        {
            System::Byte get();
            System::Void set(System::Byte value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(Order=6)]
        property System::Boolean PermitJoining
        {
            System::Boolean get();
            System::Void set(System::Boolean value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(Order=7)]
        property System::Boolean RouterCapacity
        {
            System::Boolean get();
            System::Void set(System::Boolean value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(Order=8)]
        property System::Boolean EndDeviceCapacity
        {
            System::Boolean get();
            System::Void set(System::Boolean value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(EmitDefaultValue=false, Order=9)]
        property System::Uri^  NWKRootURI
        {
            System::Uri^  get();
            System::Void set(System::Uri^  value);
        }
    };
    
    [System::Diagnostics::DebuggerStepThroughAttribute, 
    System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Runtime.Serialization", L"4.0.0.0"), 
    System::Runtime::Serialization::DataContractAttribute(Name=L"InterPANMessage", Namespace=L"http://www.zigbee.org/GWGSchema")]
    public ref class InterPANMessage : public System::Object, public System::Runtime::Serialization::IExtensibleDataObject
    {
        
        private: System::Runtime::Serialization::ExtensionDataObject^  extensionDataField;
        
        private: System::UInt32 SrcAddressModeField;
        
        private: www::zigbee::org::GWGSchema::Address^  SrcAddressField;
        
        private: System::UInt16 SrcPANIDField;
        
        private: System::UInt32 DstAddressModeField;
        
        private: www::zigbee::org::GWGSchema::Address^  DestinationAddressField;
        
        private: System::UInt16 DestPANIDField;
        
        private: System::UInt16 ProfileIDField;
        
        private: System::UInt16 ClusterIDField;
        
        private: System::UInt32 ASDULengthField;
        
        private: System::String^  ASDUField;
        
        private: System::Byte ASDUHandleField;
        
        public: virtual property System::Runtime::Serialization::ExtensionDataObject^  ExtensionData
        {
            System::Runtime::Serialization::ExtensionDataObject^  get() sealed;
            System::Void set(System::Runtime::Serialization::ExtensionDataObject^  value) sealed;
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true)]
        property System::UInt32 SrcAddressMode
        {
            System::UInt32 get();
            System::Void set(System::UInt32 value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true, EmitDefaultValue=false, Order=1)]
        property www::zigbee::org::GWGSchema::Address^  SrcAddress
        {
            www::zigbee::org::GWGSchema::Address^  get();
            System::Void set(www::zigbee::org::GWGSchema::Address^  value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true, Order=2)]
        property System::UInt16 SrcPANID
        {
            System::UInt16 get();
            System::Void set(System::UInt16 value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true, Order=3)]
        property System::UInt32 DstAddressMode
        {
            System::UInt32 get();
            System::Void set(System::UInt32 value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true, EmitDefaultValue=false, Order=4)]
        property www::zigbee::org::GWGSchema::Address^  DestinationAddress
        {
            www::zigbee::org::GWGSchema::Address^  get();
            System::Void set(www::zigbee::org::GWGSchema::Address^  value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true, Order=5)]
        property System::UInt16 DestPANID
        {
            System::UInt16 get();
            System::Void set(System::UInt16 value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(Order=6)]
        property System::UInt16 ProfileID
        {
            System::UInt16 get();
            System::Void set(System::UInt16 value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true, Order=7)]
        property System::UInt16 ClusterID
        {
            System::UInt16 get();
            System::Void set(System::UInt16 value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true, Order=8)]
        property System::UInt32 ASDULength
        {
            System::UInt32 get();
            System::Void set(System::UInt32 value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true, EmitDefaultValue=false, Order=9)]
        property System::String^  ASDU
        {
            System::String^  get();
            System::Void set(System::String^  value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true, Order=10)]
        property System::Byte ASDUHandle
        {
            System::Byte get();
            System::Void set(System::Byte value);
        }
    };
    
    [System::Diagnostics::DebuggerStepThroughAttribute, 
    System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Runtime.Serialization", L"4.0.0.0"), 
    System::Runtime::Serialization::DataContractAttribute(Name=L"APSMessageEvent", Namespace=L"http://www.zigbee.org/GWGSchema")]
    public ref class APSMessageEvent : public System::Object, public System::Runtime::Serialization::IExtensibleDataObject
    {
        
        private: System::Runtime::Serialization::ExtensionDataObject^  extensionDataField;
        
        private: System::UInt32 DestinationAddressModeField;
        
        private: www::zigbee::org::GWGSchema::Address^  DestinationAddressField;
        
        private: System::Byte DestinationEndpointField;
        
        private: www::zigbee::org::GWGSchema::Address^  SourceAddressField;
        
        private: System::UInt32 SourceAddressModeField;
        
        private: System::Byte SourceEndpointField;
        
        private: System::UInt16 ProfileIDField;
        
        private: System::UInt16 ClusterIDField;
        
        private: System::String^  DataField;
        
        private: System::UInt16 APSStatusField;
        
        private: www::zigbee::org::GWGSchema::SecurityStatus SecurityStatusField;
        
        private: System::Byte LinkQualityField;
        
        private: System::UInt32 RxTimeField;
        
        public: virtual property System::Runtime::Serialization::ExtensionDataObject^  ExtensionData
        {
            System::Runtime::Serialization::ExtensionDataObject^  get() sealed;
            System::Void set(System::Runtime::Serialization::ExtensionDataObject^  value) sealed;
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute]
        property System::UInt32 DestinationAddressMode
        {
            System::UInt32 get();
            System::Void set(System::UInt32 value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true, EmitDefaultValue=false, Order=1)]
        property www::zigbee::org::GWGSchema::Address^  DestinationAddress
        {
            www::zigbee::org::GWGSchema::Address^  get();
            System::Void set(www::zigbee::org::GWGSchema::Address^  value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true, Order=2)]
        property System::Byte DestinationEndpoint
        {
            System::Byte get();
            System::Void set(System::Byte value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true, EmitDefaultValue=false, Order=3)]
        property www::zigbee::org::GWGSchema::Address^  SourceAddress
        {
            www::zigbee::org::GWGSchema::Address^  get();
            System::Void set(www::zigbee::org::GWGSchema::Address^  value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(Order=4)]
        property System::UInt32 SourceAddressMode
        {
            System::UInt32 get();
            System::Void set(System::UInt32 value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true, Order=5)]
        property System::Byte SourceEndpoint
        {
            System::Byte get();
            System::Void set(System::Byte value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(Order=6)]
        property System::UInt16 ProfileID
        {
            System::UInt16 get();
            System::Void set(System::UInt16 value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true, Order=7)]
        property System::UInt16 ClusterID
        {
            System::UInt16 get();
            System::Void set(System::UInt16 value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true, EmitDefaultValue=false, Order=8)]
        property System::String^  Data
        {
            System::String^  get();
            System::Void set(System::String^  value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(IsRequired=true, Order=9)]
        property System::UInt16 APSStatus
        {
            System::UInt16 get();
            System::Void set(System::UInt16 value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(Order=10)]
        property www::zigbee::org::GWGSchema::SecurityStatus SecurityStatus
        {
            www::zigbee::org::GWGSchema::SecurityStatus get();
            System::Void set(www::zigbee::org::GWGSchema::SecurityStatus value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(Order=11)]
        property System::Byte LinkQuality
        {
            System::Byte get();
            System::Void set(System::Byte value);
        }
        
        public: [System::Runtime::Serialization::DataMemberAttribute(Order=12)]
        property System::UInt32 RxTime
        {
            System::UInt32 get();
            System::Void set(System::UInt32 value);
        }
    };
            }
        }
    }
}
namespace www {
    namespace zigbee {
        namespace org {
            namespace GWGSchema {
    
    
    
    
    inline System::Runtime::Serialization::ExtensionDataObject^  ZDPCommand::ExtensionData::get()
    {
        return this->extensionDataField;
    }
    inline System::Void ZDPCommand::ExtensionData::set(System::Runtime::Serialization::ExtensionDataObject^  value)
    {
        this->extensionDataField = value;
    }
    
    inline www::zigbee::org::GWGSchema::Address^  ZDPCommand::Destination::get()
    {
        return this->DestinationField;
    }
    inline System::Void ZDPCommand::Destination::set(www::zigbee::org::GWGSchema::Address^  value)
    {
        this->DestinationField = value;
    }
    
    inline www::zigbee::org::GWGSchema::TxOptions^  ZDPCommand::TxOptions::get()
    {
        return this->TxOptionsField;
    }
    inline System::Void ZDPCommand::TxOptions::set(www::zigbee::org::GWGSchema::TxOptions^  value)
    {
        this->TxOptionsField = value;
    }
    
    inline System::Byte ZDPCommand::Radius::get()
    {
        return this->RadiusField;
    }
    inline System::Void ZDPCommand::Radius::set(System::Byte value)
    {
        this->RadiusField = value;
    }
    
    inline System::UInt16 ZDPCommand::ClusterID::get()
    {
        return this->ClusterIDField;
    }
    inline System::Void ZDPCommand::ClusterID::set(System::UInt16 value)
    {
        this->ClusterIDField = value;
    }
    
    inline System::String^  ZDPCommand::Command::get()
    {
        return this->CommandField;
    }
    inline System::Void ZDPCommand::Command::set(System::String^  value)
    {
        this->CommandField = value;
    }
    
    inline System::UInt32 ZDPCommand::DestinationAddrMode::get()
    {
        return this->DestinationAddrModeField;
    }
    inline System::Void ZDPCommand::DestinationAddrMode::set(System::UInt32 value)
    {
        this->DestinationAddrModeField = value;
    }
    
    
    inline System::Runtime::Serialization::ExtensionDataObject^  Address::ExtensionData::get()
    {
        return this->extensionDataField;
    }
    inline System::Void Address::ExtensionData::set(System::Runtime::Serialization::ExtensionDataObject^  value)
    {
        this->extensionDataField = value;
    }
    
    inline System::UInt16 Address::NetworkAddress::get()
    {
        return this->NetworkAddressField;
    }
    inline System::Void Address::NetworkAddress::set(System::UInt16 value)
    {
        this->NetworkAddressField = value;
    }
    
    inline System::UInt64 Address::IeeeAddress::get()
    {
        return this->IeeeAddressField;
    }
    inline System::Void Address::IeeeAddress::set(System::UInt64 value)
    {
        this->IeeeAddressField = value;
    }
    
    inline System::String^  Address::AliasAddress::get()
    {
        return this->AliasAddressField;
    }
    inline System::Void Address::AliasAddress::set(System::String^  value)
    {
        this->AliasAddressField = value;
    }
    
    
    inline System::Runtime::Serialization::ExtensionDataObject^  TxOptions::ExtensionData::get()
    {
        return this->extensionDataField;
    }
    inline System::Void TxOptions::ExtensionData::set(System::Runtime::Serialization::ExtensionDataObject^  value)
    {
        this->extensionDataField = value;
    }
    
    inline System::Boolean TxOptions::SecurityEnabled::get()
    {
        return this->SecurityEnabledField;
    }
    inline System::Void TxOptions::SecurityEnabled::set(System::Boolean value)
    {
        this->SecurityEnabledField = value;
    }
    
    inline System::Boolean TxOptions::UseNetworkKey::get()
    {
        return this->UseNetworkKeyField;
    }
    inline System::Void TxOptions::UseNetworkKey::set(System::Boolean value)
    {
        this->UseNetworkKeyField = value;
    }
    
    inline System::Boolean TxOptions::Acknowledged::get()
    {
        return this->AcknowledgedField;
    }
    inline System::Void TxOptions::Acknowledged::set(System::Boolean value)
    {
        this->AcknowledgedField = value;
    }
    
    inline System::Boolean TxOptions::PermitFragmentation::get()
    {
        return this->PermitFragmentationField;
    }
    inline System::Void TxOptions::PermitFragmentation::set(System::Boolean value)
    {
        this->PermitFragmentationField = value;
    }
    
    
    inline System::Runtime::Serialization::ExtensionDataObject^  ZDPMessage::ExtensionData::get()
    {
        return this->extensionDataField;
    }
    inline System::Void ZDPMessage::ExtensionData::set(System::Runtime::Serialization::ExtensionDataObject^  value)
    {
        this->extensionDataField = value;
    }
    
    inline www::zigbee::org::GWGSchema::Address^  ZDPMessage::SourceAddress::get()
    {
        return this->SourceAddressField;
    }
    inline System::Void ZDPMessage::SourceAddress::set(www::zigbee::org::GWGSchema::Address^  value)
    {
        this->SourceAddressField = value;
    }
    
    inline System::UInt32 ZDPMessage::SourceAddressMode::get()
    {
        return this->SourceAddressModeField;
    }
    inline System::Void ZDPMessage::SourceAddressMode::set(System::UInt32 value)
    {
        this->SourceAddressModeField = value;
    }
    
    inline www::zigbee::org::GWGSchema::SecurityStatus ZDPMessage::SecurityStatus::get()
    {
        return this->SecurityStatusField;
    }
    inline System::Void ZDPMessage::SecurityStatus::set(www::zigbee::org::GWGSchema::SecurityStatus value)
    {
        this->SecurityStatusField = value;
    }
    
    inline System::Byte ZDPMessage::LinkQuality::get()
    {
        return this->LinkQualityField;
    }
    inline System::Void ZDPMessage::LinkQuality::set(System::Byte value)
    {
        this->LinkQualityField = value;
    }
    
    inline System::UInt32 ZDPMessage::RxTime::get()
    {
        return this->RxTimeField;
    }
    inline System::Void ZDPMessage::RxTime::set(System::UInt32 value)
    {
        this->RxTimeField = value;
    }
    
    inline System::UInt16 ZDPMessage::ClusterID::get()
    {
        return this->ClusterIDField;
    }
    inline System::Void ZDPMessage::ClusterID::set(System::UInt16 value)
    {
        this->ClusterIDField = value;
    }
    
    inline System::String^  ZDPMessage::Command::get()
    {
        return this->CommandField;
    }
    inline System::Void ZDPMessage::Command::set(System::String^  value)
    {
        this->CommandField = value;
    }
    
    
    inline System::Runtime::Serialization::ExtensionDataObject^  ZCLCommand::ExtensionData::get()
    {
        return this->extensionDataField;
    }
    inline System::Void ZCLCommand::ExtensionData::set(System::Runtime::Serialization::ExtensionDataObject^  value)
    {
        this->extensionDataField = value;
    }
    
    inline System::UInt32 ZCLCommand::DestinationAddressMode::get()
    {
        return this->DestinationAddressModeField;
    }
    inline System::Void ZCLCommand::DestinationAddressMode::set(System::UInt32 value)
    {
        this->DestinationAddressModeField = value;
    }
    
    inline www::zigbee::org::GWGSchema::Address^  ZCLCommand::DestinationAddress::get()
    {
        return this->DestinationAddressField;
    }
    inline System::Void ZCLCommand::DestinationAddress::set(www::zigbee::org::GWGSchema::Address^  value)
    {
        this->DestinationAddressField = value;
    }
    
    inline System::Byte ZCLCommand::DestinationEndpoint::get()
    {
        return this->DestinationEndpointField;
    }
    inline System::Void ZCLCommand::DestinationEndpoint::set(System::Byte value)
    {
        this->DestinationEndpointField = value;
    }
    
    inline System::UInt16 ZCLCommand::ProfileID::get()
    {
        return this->ProfileIDField;
    }
    inline System::Void ZCLCommand::ProfileID::set(System::UInt16 value)
    {
        this->ProfileIDField = value;
    }
    
    inline System::UInt16 ZCLCommand::ClusterID::get()
    {
        return this->ClusterIDField;
    }
    inline System::Void ZCLCommand::ClusterID::set(System::UInt16 value)
    {
        this->ClusterIDField = value;
    }
    
    inline System::Byte ZCLCommand::SourceEndpoint::get()
    {
        return this->SourceEndpointField;
    }
    inline System::Void ZCLCommand::SourceEndpoint::set(System::Byte value)
    {
        this->SourceEndpointField = value;
    }
    
    inline www::zigbee::org::GWGSchema::TxOptions^  ZCLCommand::TxOptions::get()
    {
        return this->TxOptionsField;
    }
    inline System::Void ZCLCommand::TxOptions::set(www::zigbee::org::GWGSchema::TxOptions^  value)
    {
        this->TxOptionsField = value;
    }
    
    inline System::Byte ZCLCommand::Radius::get()
    {
        return this->RadiusField;
    }
    inline System::Void ZCLCommand::Radius::set(System::Byte value)
    {
        this->RadiusField = value;
    }
    
    inline System::String^  ZCLCommand::ZCLPayload::get()
    {
        return this->ZCLPayloadField;
    }
    inline System::Void ZCLCommand::ZCLPayload::set(System::String^  value)
    {
        this->ZCLPayloadField = value;
    }
    
    inline System::String^  ZCLCommand::ZCLHeader::get()
    {
        return this->ZCLHeaderField;
    }
    inline System::Void ZCLCommand::ZCLHeader::set(System::String^  value)
    {
        this->ZCLHeaderField = value;
    }
    
    
    inline System::Runtime::Serialization::ExtensionDataObject^  ZCLMessage::ExtensionData::get()
    {
        return this->extensionDataField;
    }
    inline System::Void ZCLMessage::ExtensionData::set(System::Runtime::Serialization::ExtensionDataObject^  value)
    {
        this->extensionDataField = value;
    }
    
    inline System::UInt32 ZCLMessage::RxTime::get()
    {
        return this->RxTimeField;
    }
    inline System::Void ZCLMessage::RxTime::set(System::UInt32 value)
    {
        this->RxTimeField = value;
    }
    
    inline System::Byte ZCLMessage::DestinationEndpoint::get()
    {
        return this->DestinationEndpointField;
    }
    inline System::Void ZCLMessage::DestinationEndpoint::set(System::Byte value)
    {
        this->DestinationEndpointField = value;
    }
    
    inline www::zigbee::org::GWGSchema::Address^  ZCLMessage::SourceAddress::get()
    {
        return this->SourceAddressField;
    }
    inline System::Void ZCLMessage::SourceAddress::set(www::zigbee::org::GWGSchema::Address^  value)
    {
        this->SourceAddressField = value;
    }
    
    inline System::Byte ZCLMessage::SourceEndpoint::get()
    {
        return this->SourceEndpointField;
    }
    inline System::Void ZCLMessage::SourceEndpoint::set(System::Byte value)
    {
        this->SourceEndpointField = value;
    }
    
    inline System::UInt16 ZCLMessage::ProfileID::get()
    {
        return this->ProfileIDField;
    }
    inline System::Void ZCLMessage::ProfileID::set(System::UInt16 value)
    {
        this->ProfileIDField = value;
    }
    
    inline System::UInt16 ZCLMessage::ClusterID::get()
    {
        return this->ClusterIDField;
    }
    inline System::Void ZCLMessage::ClusterID::set(System::UInt16 value)
    {
        this->ClusterIDField = value;
    }
    
    inline System::String^  ZCLMessage::ZCLPayload::get()
    {
        return this->ZCLPayloadField;
    }
    inline System::Void ZCLMessage::ZCLPayload::set(System::String^  value)
    {
        this->ZCLPayloadField = value;
    }
    
    inline System::UInt32 ZCLMessage::APSStatus::get()
    {
        return this->APSStatusField;
    }
    inline System::Void ZCLMessage::APSStatus::set(System::UInt32 value)
    {
        this->APSStatusField = value;
    }
    
    inline System::UInt32 ZCLMessage::SourceAddressMode::get()
    {
        return this->SourceAddressModeField;
    }
    inline System::Void ZCLMessage::SourceAddressMode::set(System::UInt32 value)
    {
        this->SourceAddressModeField = value;
    }
    
    inline System::String^  ZCLMessage::ZCLHeader::get()
    {
        return this->ZCLHeaderField;
    }
    inline System::Void ZCLMessage::ZCLHeader::set(System::String^  value)
    {
        this->ZCLHeaderField = value;
    }
    
    
    inline System::Runtime::Serialization::ExtensionDataObject^  NodeDescriptor::ExtensionData::get()
    {
        return this->extensionDataField;
    }
    inline System::Void NodeDescriptor::ExtensionData::set(System::Runtime::Serialization::ExtensionDataObject^  value)
    {
        this->extensionDataField = value;
    }
    
    inline www::zigbee::org::GWGSchema::LogicalType NodeDescriptor::LogicalType::get()
    {
        return this->LogicalTypeField;
    }
    inline System::Void NodeDescriptor::LogicalType::set(www::zigbee::org::GWGSchema::LogicalType value)
    {
        this->LogicalTypeField = value;
    }
    
    inline System::Boolean NodeDescriptor::ComplexDescriptorAvailable::get()
    {
        return this->ComplexDescriptorAvailableField;
    }
    inline System::Void NodeDescriptor::ComplexDescriptorAvailable::set(System::Boolean value)
    {
        this->ComplexDescriptorAvailableField = value;
    }
    
    inline System::Boolean NodeDescriptor::UserDescriptorAvailable::get()
    {
        return this->UserDescriptorAvailableField;
    }
    inline System::Void NodeDescriptor::UserDescriptorAvailable::set(System::Boolean value)
    {
        this->UserDescriptorAvailableField = value;
    }
    
    inline www::zigbee::org::GWGSchema::NodeDescriptor::FrequencyBandType^  NodeDescriptor::FrequencyBand::get()
    {
        return this->FrequencyBandField;
    }
    inline System::Void NodeDescriptor::FrequencyBand::set(www::zigbee::org::GWGSchema::NodeDescriptor::FrequencyBandType^  value)
    {
        this->FrequencyBandField = value;
    }
    
    inline www::zigbee::org::GWGSchema::MACCapability^  NodeDescriptor::MACCapabilityFlag::get()
    {
        return this->MACCapabilityFlagField;
    }
    inline System::Void NodeDescriptor::MACCapabilityFlag::set(www::zigbee::org::GWGSchema::MACCapability^  value)
    {
        this->MACCapabilityFlagField = value;
    }
    
    inline System::UInt16 NodeDescriptor::ManufacturerCode::get()
    {
        return this->ManufacturerCodeField;
    }
    inline System::Void NodeDescriptor::ManufacturerCode::set(System::UInt16 value)
    {
        this->ManufacturerCodeField = value;
    }
    
    inline System::Byte NodeDescriptor::MaximumBufferSize::get()
    {
        return this->MaximumBufferSizeField;
    }
    inline System::Void NodeDescriptor::MaximumBufferSize::set(System::Byte value)
    {
        this->MaximumBufferSizeField = value;
    }
    
    inline System::UInt16 NodeDescriptor::MaximumIncomingTransferSize::get()
    {
        return this->MaximumIncomingTransferSizeField;
    }
    inline System::Void NodeDescriptor::MaximumIncomingTransferSize::set(System::UInt16 value)
    {
        this->MaximumIncomingTransferSizeField = value;
    }
    
    inline www::zigbee::org::GWGSchema::ServerMask^  NodeDescriptor::ServerMask::get()
    {
        return this->ServerMaskField;
    }
    inline System::Void NodeDescriptor::ServerMask::set(www::zigbee::org::GWGSchema::ServerMask^  value)
    {
        this->ServerMaskField = value;
    }
    
    inline System::UInt16 NodeDescriptor::MaximumOutgoingTransferSize::get()
    {
        return this->MaximumOutgoingTransferSizeField;
    }
    inline System::Void NodeDescriptor::MaximumOutgoingTransferSize::set(System::UInt16 value)
    {
        this->MaximumOutgoingTransferSizeField = value;
    }
    
    inline www::zigbee::org::GWGSchema::DescriptorCapability^  NodeDescriptor::DescriptorCapabilityField::get()
    {
        return this->DescriptorCapabilityFieldField;
    }
    inline System::Void NodeDescriptor::DescriptorCapabilityField::set(www::zigbee::org::GWGSchema::DescriptorCapability^  value)
    {
        this->DescriptorCapabilityFieldField = value;
    }
    
    
    inline System::Runtime::Serialization::ExtensionDataObject^  MACCapability::ExtensionData::get()
    {
        return this->extensionDataField;
    }
    inline System::Void MACCapability::ExtensionData::set(System::Runtime::Serialization::ExtensionDataObject^  value)
    {
        this->extensionDataField = value;
    }
    
    inline System::Boolean MACCapability::AlternatePanCoordinator::get()
    {
        return this->AlternatePanCoordinatorField;
    }
    inline System::Void MACCapability::AlternatePanCoordinator::set(System::Boolean value)
    {
        this->AlternatePanCoordinatorField = value;
    }
    
    inline System::Boolean MACCapability::DeviceIsFFD::get()
    {
        return this->DeviceIsFFDField;
    }
    inline System::Void MACCapability::DeviceIsFFD::set(System::Boolean value)
    {
        this->DeviceIsFFDField = value;
    }
    
    inline System::Boolean MACCapability::MainsPowered::get()
    {
        return this->MainsPoweredField;
    }
    inline System::Void MACCapability::MainsPowered::set(System::Boolean value)
    {
        this->MainsPoweredField = value;
    }
    
    inline System::Boolean MACCapability::ReceiverOnWhenIdle::get()
    {
        return this->ReceiverOnWhenIdleField;
    }
    inline System::Void MACCapability::ReceiverOnWhenIdle::set(System::Boolean value)
    {
        this->ReceiverOnWhenIdleField = value;
    }
    
    inline System::Boolean MACCapability::SecuritySupported::get()
    {
        return this->SecuritySupportedField;
    }
    inline System::Void MACCapability::SecuritySupported::set(System::Boolean value)
    {
        this->SecuritySupportedField = value;
    }
    
    inline System::Boolean MACCapability::AllocateAddress::get()
    {
        return this->AllocateAddressField;
    }
    inline System::Void MACCapability::AllocateAddress::set(System::Boolean value)
    {
        this->AllocateAddressField = value;
    }
    
    
    inline System::Runtime::Serialization::ExtensionDataObject^  ServerMask::ExtensionData::get()
    {
        return this->extensionDataField;
    }
    inline System::Void ServerMask::ExtensionData::set(System::Runtime::Serialization::ExtensionDataObject^  value)
    {
        this->extensionDataField = value;
    }
    
    inline System::Boolean ServerMask::PrimaryTrustCenter::get()
    {
        return this->PrimaryTrustCenterField;
    }
    inline System::Void ServerMask::PrimaryTrustCenter::set(System::Boolean value)
    {
        this->PrimaryTrustCenterField = value;
    }
    
    inline System::Boolean ServerMask::BackupTrustCenter::get()
    {
        return this->BackupTrustCenterField;
    }
    inline System::Void ServerMask::BackupTrustCenter::set(System::Boolean value)
    {
        this->BackupTrustCenterField = value;
    }
    
    inline System::Boolean ServerMask::PrimaryBindingTableCache::get()
    {
        return this->PrimaryBindingTableCacheField;
    }
    inline System::Void ServerMask::PrimaryBindingTableCache::set(System::Boolean value)
    {
        this->PrimaryBindingTableCacheField = value;
    }
    
    inline System::Boolean ServerMask::BackupBindingTableCache::get()
    {
        return this->BackupBindingTableCacheField;
    }
    inline System::Void ServerMask::BackupBindingTableCache::set(System::Boolean value)
    {
        this->BackupBindingTableCacheField = value;
    }
    
    inline System::Boolean ServerMask::PrimaryDiscoveryCache::get()
    {
        return this->PrimaryDiscoveryCacheField;
    }
    inline System::Void ServerMask::PrimaryDiscoveryCache::set(System::Boolean value)
    {
        this->PrimaryDiscoveryCacheField = value;
    }
    
    inline System::Boolean ServerMask::BackupDiscoveryCache::get()
    {
        return this->BackupDiscoveryCacheField;
    }
    inline System::Void ServerMask::BackupDiscoveryCache::set(System::Boolean value)
    {
        this->BackupDiscoveryCacheField = value;
    }
    
    inline System::Boolean ServerMask::NetworkManager::get()
    {
        return this->NetworkManagerField;
    }
    inline System::Void ServerMask::NetworkManager::set(System::Boolean value)
    {
        this->NetworkManagerField = value;
    }
    
    
    inline System::Runtime::Serialization::ExtensionDataObject^  DescriptorCapability::ExtensionData::get()
    {
        return this->extensionDataField;
    }
    inline System::Void DescriptorCapability::ExtensionData::set(System::Runtime::Serialization::ExtensionDataObject^  value)
    {
        this->extensionDataField = value;
    }
    
    inline System::Boolean DescriptorCapability::ExtendedActiveEndpointListAvailable::get()
    {
        return this->ExtendedActiveEndpointListAvailableField;
    }
    inline System::Void DescriptorCapability::ExtendedActiveEndpointListAvailable::set(System::Boolean value)
    {
        this->ExtendedActiveEndpointListAvailableField = value;
    }
    
    inline System::Boolean DescriptorCapability::ExtendedSimpleDescriptorListAvailable::get()
    {
        return this->ExtendedSimpleDescriptorListAvailableField;
    }
    inline System::Void DescriptorCapability::ExtendedSimpleDescriptorListAvailable::set(System::Boolean value)
    {
        this->ExtendedSimpleDescriptorListAvailableField = value;
    }
    
    
    inline System::Runtime::Serialization::ExtensionDataObject^  UserDescriptor::ExtensionData::get()
    {
        return this->extensionDataField;
    }
    inline System::Void UserDescriptor::ExtensionData::set(System::Runtime::Serialization::ExtensionDataObject^  value)
    {
        this->extensionDataField = value;
    }
    
    inline System::String^  UserDescriptor::Description::get()
    {
        return this->DescriptionField;
    }
    inline System::Void UserDescriptor::Description::set(System::String^  value)
    {
        this->DescriptionField = value;
    }
    
    
    inline System::Runtime::Serialization::ExtensionDataObject^  NetworkConfiguration::ExtensionData::get()
    {
        return this->extensionDataField;
    }
    inline System::Void NetworkConfiguration::ExtensionData::set(System::Runtime::Serialization::ExtensionDataObject^  value)
    {
        this->extensionDataField = value;
    }
    
    inline System::UInt32 NetworkConfiguration::ScanChannels::get()
    {
        return this->ScanChannelsField;
    }
    inline System::Void NetworkConfiguration::ScanChannels::set(System::UInt32 value)
    {
        this->ScanChannelsField = value;
    }
    
    inline System::Byte NetworkConfiguration::ScanDuration::get()
    {
        return this->ScanDurationField;
    }
    inline System::Void NetworkConfiguration::ScanDuration::set(System::Byte value)
    {
        this->ScanDurationField = value;
    }
    
    inline System::Byte NetworkConfiguration::BeaconOrder::get()
    {
        return this->BeaconOrderField;
    }
    inline System::Void NetworkConfiguration::BeaconOrder::set(System::Byte value)
    {
        this->BeaconOrderField = value;
    }
    
    inline System::Byte NetworkConfiguration::SuperFrameOrder::get()
    {
        return this->SuperFrameOrderField;
    }
    inline System::Void NetworkConfiguration::SuperFrameOrder::set(System::Byte value)
    {
        this->SuperFrameOrderField = value;
    }
    
    inline System::Boolean NetworkConfiguration::BatteryLifeExtension::get()
    {
        return this->BatteryLifeExtensionField;
    }
    inline System::Void NetworkConfiguration::BatteryLifeExtension::set(System::Boolean value)
    {
        this->BatteryLifeExtensionField = value;
    }
    
    
    inline System::Runtime::Serialization::ExtensionDataObject^  NetworkStatusCode::ExtensionData::get()
    {
        return this->extensionDataField;
    }
    inline System::Void NetworkStatusCode::ExtensionData::set(System::Runtime::Serialization::ExtensionDataObject^  value)
    {
        this->extensionDataField = value;
    }
    
    inline System::UInt32 NetworkStatusCode::Status::get()
    {
        return this->StatusField;
    }
    inline System::Void NetworkStatusCode::Status::set(System::UInt32 value)
    {
        this->StatusField = value;
    }
    
    inline System::UInt32 NetworkStatusCode::NetworkStatusCodeMember::get()
    {
        return this->NetworkStatusCodeMemberField;
    }
    inline System::Void NetworkStatusCode::NetworkStatusCodeMember::set(System::UInt32 value)
    {
        this->NetworkStatusCodeMemberField = value;
    }
    
    
    inline System::Runtime::Serialization::ExtensionDataObject^  JoinConfiguration::ExtensionData::get()
    {
        return this->extensionDataField;
    }
    inline System::Void JoinConfiguration::ExtensionData::set(System::Runtime::Serialization::ExtensionDataObject^  value)
    {
        this->extensionDataField = value;
    }
    
    inline System::UInt64 JoinConfiguration::ExtendedPanId::get()
    {
        return this->ExtendedPanIdField;
    }
    inline System::Void JoinConfiguration::ExtendedPanId::set(System::UInt64 value)
    {
        this->ExtendedPanIdField = value;
    }
    
    inline System::Byte JoinConfiguration::RejoinNetwork::get()
    {
        return this->RejoinNetworkField;
    }
    inline System::Void JoinConfiguration::RejoinNetwork::set(System::Byte value)
    {
        this->RejoinNetworkField = value;
    }
    
    inline System::UInt32 JoinConfiguration::ScanChannel::get()
    {
        return this->ScanChannelField;
    }
    inline System::Void JoinConfiguration::ScanChannel::set(System::UInt32 value)
    {
        this->ScanChannelField = value;
    }
    
    inline System::Byte JoinConfiguration::ScanDuration::get()
    {
        return this->ScanDurationField;
    }
    inline System::Void JoinConfiguration::ScanDuration::set(System::Byte value)
    {
        this->ScanDurationField = value;
    }
    
    inline www::zigbee::org::GWGSchema::MACCapability^  JoinConfiguration::CapabilityInformation::get()
    {
        return this->CapabilityInformationField;
    }
    inline System::Void JoinConfiguration::CapabilityInformation::set(www::zigbee::org::GWGSchema::MACCapability^  value)
    {
        this->CapabilityInformationField = value;
    }
    
    inline System::Boolean JoinConfiguration::SecurityEnable::get()
    {
        return this->SecurityEnableField;
    }
    inline System::Void JoinConfiguration::SecurityEnable::set(System::Boolean value)
    {
        this->SecurityEnableField = value;
    }
    
    
    inline System::Runtime::Serialization::ExtensionDataObject^  NetworkDescriptorList::ExtensionData::get()
    {
        return this->extensionDataField;
    }
    inline System::Void NetworkDescriptorList::ExtensionData::set(System::Runtime::Serialization::ExtensionDataObject^  value)
    {
        this->extensionDataField = value;
    }
    
    inline www::zigbee::org::GWGSchema::NetworkDescriptor^  NetworkDescriptorList::NetworkDescriptor::get()
    {
        return this->NetworkDescriptorField;
    }
    inline System::Void NetworkDescriptorList::NetworkDescriptor::set(www::zigbee::org::GWGSchema::NetworkDescriptor^  value)
    {
        this->NetworkDescriptorField = value;
    }
    
    
    inline System::Runtime::Serialization::ExtensionDataObject^  NetworkDescriptor::ExtensionData::get()
    {
        return this->extensionDataField;
    }
    inline System::Void NetworkDescriptor::ExtensionData::set(System::Runtime::Serialization::ExtensionDataObject^  value)
    {
        this->extensionDataField = value;
    }
    
    inline System::UInt64 NetworkDescriptor::ExtendedPanId::get()
    {
        return this->ExtendedPanIdField;
    }
    inline System::Void NetworkDescriptor::ExtendedPanId::set(System::UInt64 value)
    {
        this->ExtendedPanIdField = value;
    }
    
    inline System::UInt16 NetworkDescriptor::LogicalChannel::get()
    {
        return this->LogicalChannelField;
    }
    inline System::Void NetworkDescriptor::LogicalChannel::set(System::UInt16 value)
    {
        this->LogicalChannelField = value;
    }
    
    inline System::Byte NetworkDescriptor::StackProfile::get()
    {
        return this->StackProfileField;
    }
    inline System::Void NetworkDescriptor::StackProfile::set(System::Byte value)
    {
        this->StackProfileField = value;
    }
    
    inline System::Byte NetworkDescriptor::ZigBeeVersion::get()
    {
        return this->ZigBeeVersionField;
    }
    inline System::Void NetworkDescriptor::ZigBeeVersion::set(System::Byte value)
    {
        this->ZigBeeVersionField = value;
    }
    
    inline System::Byte NetworkDescriptor::BeaconOrder::get()
    {
        return this->BeaconOrderField;
    }
    inline System::Void NetworkDescriptor::BeaconOrder::set(System::Byte value)
    {
        this->BeaconOrderField = value;
    }
    
    inline System::Byte NetworkDescriptor::SuperFrameOrder::get()
    {
        return this->SuperFrameOrderField;
    }
    inline System::Void NetworkDescriptor::SuperFrameOrder::set(System::Byte value)
    {
        this->SuperFrameOrderField = value;
    }
    
    inline System::Boolean NetworkDescriptor::PermitJoining::get()
    {
        return this->PermitJoiningField;
    }
    inline System::Void NetworkDescriptor::PermitJoining::set(System::Boolean value)
    {
        this->PermitJoiningField = value;
    }
    
    inline System::Boolean NetworkDescriptor::RouterCapacity::get()
    {
        return this->RouterCapacityField;
    }
    inline System::Void NetworkDescriptor::RouterCapacity::set(System::Boolean value)
    {
        this->RouterCapacityField = value;
    }
    
    inline System::Boolean NetworkDescriptor::EndDeviceCapacity::get()
    {
        return this->EndDeviceCapacityField;
    }
    inline System::Void NetworkDescriptor::EndDeviceCapacity::set(System::Boolean value)
    {
        this->EndDeviceCapacityField = value;
    }
    
    inline System::Uri^  NetworkDescriptor::NWKRootURI::get()
    {
        return this->NWKRootURIField;
    }
    inline System::Void NetworkDescriptor::NWKRootURI::set(System::Uri^  value)
    {
        this->NWKRootURIField = value;
    }
    
    
    inline System::Runtime::Serialization::ExtensionDataObject^  InterPANMessage::ExtensionData::get()
    {
        return this->extensionDataField;
    }
    inline System::Void InterPANMessage::ExtensionData::set(System::Runtime::Serialization::ExtensionDataObject^  value)
    {
        this->extensionDataField = value;
    }
    
    inline System::UInt32 InterPANMessage::SrcAddressMode::get()
    {
        return this->SrcAddressModeField;
    }
    inline System::Void InterPANMessage::SrcAddressMode::set(System::UInt32 value)
    {
        this->SrcAddressModeField = value;
    }
    
    inline www::zigbee::org::GWGSchema::Address^  InterPANMessage::SrcAddress::get()
    {
        return this->SrcAddressField;
    }
    inline System::Void InterPANMessage::SrcAddress::set(www::zigbee::org::GWGSchema::Address^  value)
    {
        this->SrcAddressField = value;
    }
    
    inline System::UInt16 InterPANMessage::SrcPANID::get()
    {
        return this->SrcPANIDField;
    }
    inline System::Void InterPANMessage::SrcPANID::set(System::UInt16 value)
    {
        this->SrcPANIDField = value;
    }
    
    inline System::UInt32 InterPANMessage::DstAddressMode::get()
    {
        return this->DstAddressModeField;
    }
    inline System::Void InterPANMessage::DstAddressMode::set(System::UInt32 value)
    {
        this->DstAddressModeField = value;
    }
    
    inline www::zigbee::org::GWGSchema::Address^  InterPANMessage::DestinationAddress::get()
    {
        return this->DestinationAddressField;
    }
    inline System::Void InterPANMessage::DestinationAddress::set(www::zigbee::org::GWGSchema::Address^  value)
    {
        this->DestinationAddressField = value;
    }
    
    inline System::UInt16 InterPANMessage::DestPANID::get()
    {
        return this->DestPANIDField;
    }
    inline System::Void InterPANMessage::DestPANID::set(System::UInt16 value)
    {
        this->DestPANIDField = value;
    }
    
    inline System::UInt16 InterPANMessage::ProfileID::get()
    {
        return this->ProfileIDField;
    }
    inline System::Void InterPANMessage::ProfileID::set(System::UInt16 value)
    {
        this->ProfileIDField = value;
    }
    
    inline System::UInt16 InterPANMessage::ClusterID::get()
    {
        return this->ClusterIDField;
    }
    inline System::Void InterPANMessage::ClusterID::set(System::UInt16 value)
    {
        this->ClusterIDField = value;
    }
    
    inline System::UInt32 InterPANMessage::ASDULength::get()
    {
        return this->ASDULengthField;
    }
    inline System::Void InterPANMessage::ASDULength::set(System::UInt32 value)
    {
        this->ASDULengthField = value;
    }
    
    inline System::String^  InterPANMessage::ASDU::get()
    {
        return this->ASDUField;
    }
    inline System::Void InterPANMessage::ASDU::set(System::String^  value)
    {
        this->ASDUField = value;
    }
    
    inline System::Byte InterPANMessage::ASDUHandle::get()
    {
        return this->ASDUHandleField;
    }
    inline System::Void InterPANMessage::ASDUHandle::set(System::Byte value)
    {
        this->ASDUHandleField = value;
    }
    
    
    inline System::Runtime::Serialization::ExtensionDataObject^  APSMessageEvent::ExtensionData::get()
    {
        return this->extensionDataField;
    }
    inline System::Void APSMessageEvent::ExtensionData::set(System::Runtime::Serialization::ExtensionDataObject^  value)
    {
        this->extensionDataField = value;
    }
    
    inline System::UInt32 APSMessageEvent::DestinationAddressMode::get()
    {
        return this->DestinationAddressModeField;
    }
    inline System::Void APSMessageEvent::DestinationAddressMode::set(System::UInt32 value)
    {
        this->DestinationAddressModeField = value;
    }
    
    inline www::zigbee::org::GWGSchema::Address^  APSMessageEvent::DestinationAddress::get()
    {
        return this->DestinationAddressField;
    }
    inline System::Void APSMessageEvent::DestinationAddress::set(www::zigbee::org::GWGSchema::Address^  value)
    {
        this->DestinationAddressField = value;
    }
    
    inline System::Byte APSMessageEvent::DestinationEndpoint::get()
    {
        return this->DestinationEndpointField;
    }
    inline System::Void APSMessageEvent::DestinationEndpoint::set(System::Byte value)
    {
        this->DestinationEndpointField = value;
    }
    
    inline www::zigbee::org::GWGSchema::Address^  APSMessageEvent::SourceAddress::get()
    {
        return this->SourceAddressField;
    }
    inline System::Void APSMessageEvent::SourceAddress::set(www::zigbee::org::GWGSchema::Address^  value)
    {
        this->SourceAddressField = value;
    }
    
    inline System::UInt32 APSMessageEvent::SourceAddressMode::get()
    {
        return this->SourceAddressModeField;
    }
    inline System::Void APSMessageEvent::SourceAddressMode::set(System::UInt32 value)
    {
        this->SourceAddressModeField = value;
    }
    
    inline System::Byte APSMessageEvent::SourceEndpoint::get()
    {
        return this->SourceEndpointField;
    }
    inline System::Void APSMessageEvent::SourceEndpoint::set(System::Byte value)
    {
        this->SourceEndpointField = value;
    }
    
    inline System::UInt16 APSMessageEvent::ProfileID::get()
    {
        return this->ProfileIDField;
    }
    inline System::Void APSMessageEvent::ProfileID::set(System::UInt16 value)
    {
        this->ProfileIDField = value;
    }
    
    inline System::UInt16 APSMessageEvent::ClusterID::get()
    {
        return this->ClusterIDField;
    }
    inline System::Void APSMessageEvent::ClusterID::set(System::UInt16 value)
    {
        this->ClusterIDField = value;
    }
    
    inline System::String^  APSMessageEvent::Data::get()
    {
        return this->DataField;
    }
    inline System::Void APSMessageEvent::Data::set(System::String^  value)
    {
        this->DataField = value;
    }
    
    inline System::UInt16 APSMessageEvent::APSStatus::get()
    {
        return this->APSStatusField;
    }
    inline System::Void APSMessageEvent::APSStatus::set(System::UInt16 value)
    {
        this->APSStatusField = value;
    }
    
    inline www::zigbee::org::GWGSchema::SecurityStatus APSMessageEvent::SecurityStatus::get()
    {
        return this->SecurityStatusField;
    }
    inline System::Void APSMessageEvent::SecurityStatus::set(www::zigbee::org::GWGSchema::SecurityStatus value)
    {
        this->SecurityStatusField = value;
    }
    
    inline System::Byte APSMessageEvent::LinkQuality::get()
    {
        return this->LinkQualityField;
    }
    inline System::Void APSMessageEvent::LinkQuality::set(System::Byte value)
    {
        this->LinkQualityField = value;
    }
    
    inline System::UInt32 APSMessageEvent::RxTime::get()
    {
        return this->RxTimeField;
    }
    inline System::Void APSMessageEvent::RxTime::set(System::UInt32 value)
    {
        this->RxTimeField = value;
    }
            }
        }
    }
}
