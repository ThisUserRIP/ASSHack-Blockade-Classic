#include "UnityEngine_Networking_DefaultNetworkTransport.h"

IL2CPP::Il2CppClass* com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::DefaultNetworkTransport::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("com.unity.multiplayer-hlapi.Runtime.dll", "UnityEngine.Networking", "DefaultNetworkTransport");
	return il2cppclass;
}
mscorlib::System::Type* com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::DefaultNetworkTransport::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::DefaultNetworkTransport::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::DefaultNetworkTransport::get_IsStarted()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_IsStarted");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
int32_t com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::DefaultNetworkTransport::AddHost(UnityEngine_UNETModule::UnityEngine::Networking::HostTopology* topology, int32_t port, mscorlib::System::String* ip)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddHost", std::vector<std::string> { "UnityEngine.Networking.HostTopology", "System.Int32", "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)topology;
	params[1] = (intptr_t)&port;
	params[2] = (intptr_t)ip;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::DefaultNetworkTransport::AddHostWithSimulator(UnityEngine_UNETModule::UnityEngine::Networking::HostTopology* topology, int32_t minTimeout, int32_t maxTimeout, int32_t port)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddHostWithSimulator", std::vector<std::string> { "UnityEngine.Networking.HostTopology", "System.Int32", "System.Int32", "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)topology;
	params[1] = (intptr_t)&minTimeout;
	params[2] = (intptr_t)&maxTimeout;
	params[3] = (intptr_t)&port;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::DefaultNetworkTransport::AddWebsocketHost(UnityEngine_UNETModule::UnityEngine::Networking::HostTopology* topology, int32_t port, mscorlib::System::String* ip)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddWebsocketHost", std::vector<std::string> { "UnityEngine.Networking.HostTopology", "System.Int32", "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)topology;
	params[1] = (intptr_t)&port;
	params[2] = (intptr_t)ip;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::DefaultNetworkTransport::Connect(int32_t hostId, mscorlib::System::String* address, int32_t port, int32_t specialConnectionId, uint8_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Connect", std::vector<std::string> { "System.Int32", "System.String", "System.Int32", "System.Int32", "System.Byte&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&hostId;
	params[1] = (intptr_t)address;
	params[2] = (intptr_t)&port;
	params[3] = (intptr_t)&specialConnectionId;
	params[4] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::DefaultNetworkTransport::ConnectAsNetworkHost(int32_t hostId, mscorlib::System::String* address, int32_t port, UnityEngine_UNETModule::UnityEngine::Networking::Types::NetworkID network, UnityEngine_UNETModule::UnityEngine::Networking::Types::SourceID source, UnityEngine_UNETModule::UnityEngine::Networking::Types::NodeID node, uint8_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ConnectAsNetworkHost", std::vector<std::string> { "System.Int32", "System.String", "System.Int32", "UnityEngine.Networking.Types.NetworkID", "UnityEngine.Networking.Types.SourceID", "UnityEngine.Networking.Types.NodeID", "System.Byte&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&hostId;
	params[1] = (intptr_t)address;
	params[2] = (intptr_t)&port;
	params[3] = (intptr_t)&network;
	params[4] = (intptr_t)&source;
	params[5] = (intptr_t)&node;
	params[6] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::DefaultNetworkTransport::ConnectEndPoint(int32_t hostId, System::System::Net::EndPoint* endPoint, int32_t specialConnectionId, uint8_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ConnectEndPoint", std::vector<std::string> { "System.Int32", "System.Net.EndPoint", "System.Int32", "System.Byte&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&hostId;
	params[1] = (intptr_t)endPoint;
	params[2] = (intptr_t)&specialConnectionId;
	params[3] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::DefaultNetworkTransport::ConnectToNetworkPeer(int32_t hostId, mscorlib::System::String* address, int32_t port, int32_t specialConnectionId, int32_t relaySlotId, UnityEngine_UNETModule::UnityEngine::Networking::Types::NetworkID network, UnityEngine_UNETModule::UnityEngine::Networking::Types::SourceID source, UnityEngine_UNETModule::UnityEngine::Networking::Types::NodeID node, uint8_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ConnectToNetworkPeer", std::vector<std::string> { "System.Int32", "System.String", "System.Int32", "System.Int32", "System.Int32", "UnityEngine.Networking.Types.NetworkID", "UnityEngine.Networking.Types.SourceID", "UnityEngine.Networking.Types.NodeID", "System.Byte&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)&hostId;
	params[1] = (intptr_t)address;
	params[2] = (intptr_t)&port;
	params[3] = (intptr_t)&specialConnectionId;
	params[4] = (intptr_t)&relaySlotId;
	params[5] = (intptr_t)&network;
	params[6] = (intptr_t)&source;
	params[7] = (intptr_t)&node;
	params[8] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::DefaultNetworkTransport::ConnectWithSimulator(int32_t hostId, mscorlib::System::String* address, int32_t port, int32_t specialConnectionId, uint8_t& error, UnityEngine_UNETModule::UnityEngine::Networking::ConnectionSimulatorConfig* conf)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ConnectWithSimulator", std::vector<std::string> { "System.Int32", "System.String", "System.Int32", "System.Int32", "System.Byte&", "UnityEngine.Networking.ConnectionSimulatorConfig" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&hostId;
	params[1] = (intptr_t)address;
	params[2] = (intptr_t)&port;
	params[3] = (intptr_t)&specialConnectionId;
	params[4] = (intptr_t)&error;
	params[5] = (intptr_t)conf;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
bool com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::DefaultNetworkTransport::Disconnect(int32_t hostId, int32_t connectionId, uint8_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Disconnect", std::vector<std::string> { "System.Int32", "System.Int32", "System.Byte&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&hostId;
	params[1] = (intptr_t)&connectionId;
	params[2] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::DefaultNetworkTransport::DoesEndPointUsePlatformProtocols(System::System::Net::EndPoint* endPoint)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoesEndPointUsePlatformProtocols", std::vector<std::string> { "System.Net.EndPoint" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)endPoint;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::DefaultNetworkTransport::GetBroadcastConnectionInfo(int32_t hostId, mscorlib::System::String& address, int32_t& port, uint8_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetBroadcastConnectionInfo", std::vector<std::string> { "System.Int32", "System.String&", "System.Int32&", "System.Byte&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&hostId;
	params[1] = (intptr_t)&address;
	params[2] = (intptr_t)&port;
	params[3] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::DefaultNetworkTransport::GetBroadcastConnectionMessage(int32_t hostId, IL2CPP::Array<uint8_t>* buffer, int32_t bufferSize, int32_t& receivedSize, uint8_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetBroadcastConnectionMessage", std::vector<std::string> { "System.Int32", "System.Byte[]", "System.Int32", "System.Int32&", "System.Byte&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&hostId;
	params[1] = (intptr_t)buffer;
	params[2] = (intptr_t)&bufferSize;
	params[3] = (intptr_t)&receivedSize;
	params[4] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::DefaultNetworkTransport::GetConnectionInfo(int32_t hostId, int32_t connectionId, mscorlib::System::String& address, int32_t& port, UnityEngine_UNETModule::UnityEngine::Networking::Types::NetworkID& network, UnityEngine_UNETModule::UnityEngine::Networking::Types::NodeID& dstNode, uint8_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetConnectionInfo", std::vector<std::string> { "System.Int32", "System.Int32", "System.String&", "System.Int32&", "UnityEngine.Networking.Types.NetworkID&", "UnityEngine.Networking.Types.NodeID&", "System.Byte&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&hostId;
	params[1] = (intptr_t)&connectionId;
	params[2] = (intptr_t)&address;
	params[3] = (intptr_t)&port;
	params[4] = (intptr_t)&network;
	params[5] = (intptr_t)&dstNode;
	params[6] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::DefaultNetworkTransport::GetCurrentRTT(int32_t hostId, int32_t connectionId, uint8_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCurrentRTT", std::vector<std::string> { "System.Int32", "System.Int32", "System.Byte&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&hostId;
	params[1] = (intptr_t)&connectionId;
	params[2] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::DefaultNetworkTransport::Init()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Init");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::DefaultNetworkTransport::Init(UnityEngine_UNETModule::UnityEngine::Networking::GlobalConfig* config)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Init", std::vector<std::string> { "UnityEngine.Networking.GlobalConfig" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)config;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_UNETModule::UnityEngine::Networking::NetworkEventType com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::DefaultNetworkTransport::Receive(int32_t& hostId, int32_t& connectionId, int32_t& channelId, IL2CPP::Array<uint8_t>* buffer, int32_t bufferSize, int32_t& receivedSize, uint8_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Receive", std::vector<std::string> { "System.Int32&", "System.Int32&", "System.Int32&", "System.Byte[]", "System.Int32", "System.Int32&", "System.Byte&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&hostId;
	params[1] = (intptr_t)&connectionId;
	params[2] = (intptr_t)&channelId;
	params[3] = (intptr_t)buffer;
	params[4] = (intptr_t)&bufferSize;
	params[5] = (intptr_t)&receivedSize;
	params[6] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_UNETModule::UnityEngine::Networking::NetworkEventType ret;
		std::memset(&ret, 0, sizeof(UnityEngine_UNETModule::UnityEngine::Networking::NetworkEventType));
		return ret;
	}
	return static_cast<UnityEngine_UNETModule::UnityEngine::Networking::NetworkEventType>(*(UnityEngine_UNETModule::UnityEngine::Networking::NetworkEventType*)il2cpp_object_unbox(returnValue));
}
UnityEngine_UNETModule::UnityEngine::Networking::NetworkEventType com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::DefaultNetworkTransport::ReceiveFromHost(int32_t hostId, int32_t& connectionId, int32_t& channelId, IL2CPP::Array<uint8_t>* buffer, int32_t bufferSize, int32_t& receivedSize, uint8_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReceiveFromHost", std::vector<std::string> { "System.Int32", "System.Int32&", "System.Int32&", "System.Byte[]", "System.Int32", "System.Int32&", "System.Byte&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&hostId;
	params[1] = (intptr_t)&connectionId;
	params[2] = (intptr_t)&channelId;
	params[3] = (intptr_t)buffer;
	params[4] = (intptr_t)&bufferSize;
	params[5] = (intptr_t)&receivedSize;
	params[6] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_UNETModule::UnityEngine::Networking::NetworkEventType ret;
		std::memset(&ret, 0, sizeof(UnityEngine_UNETModule::UnityEngine::Networking::NetworkEventType));
		return ret;
	}
	return static_cast<UnityEngine_UNETModule::UnityEngine::Networking::NetworkEventType>(*(UnityEngine_UNETModule::UnityEngine::Networking::NetworkEventType*)il2cpp_object_unbox(returnValue));
}
UnityEngine_UNETModule::UnityEngine::Networking::NetworkEventType com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::DefaultNetworkTransport::ReceiveRelayEventFromHost(int32_t hostId, uint8_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReceiveRelayEventFromHost", std::vector<std::string> { "System.Int32", "System.Byte&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&hostId;
	params[1] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_UNETModule::UnityEngine::Networking::NetworkEventType ret;
		std::memset(&ret, 0, sizeof(UnityEngine_UNETModule::UnityEngine::Networking::NetworkEventType));
		return ret;
	}
	return static_cast<UnityEngine_UNETModule::UnityEngine::Networking::NetworkEventType>(*(UnityEngine_UNETModule::UnityEngine::Networking::NetworkEventType*)il2cpp_object_unbox(returnValue));
}
bool com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::DefaultNetworkTransport::RemoveHost(int32_t hostId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveHost", std::vector<std::string> { "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&hostId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::DefaultNetworkTransport::Send(int32_t hostId, int32_t connectionId, int32_t channelId, IL2CPP::Array<uint8_t>* buffer, int32_t size, uint8_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Send", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "System.Byte[]", "System.Int32", "System.Byte&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&hostId;
	params[1] = (intptr_t)&connectionId;
	params[2] = (intptr_t)&channelId;
	params[3] = (intptr_t)buffer;
	params[4] = (intptr_t)&size;
	params[5] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::DefaultNetworkTransport::SetBroadcastCredentials(int32_t hostId, int32_t key, int32_t version, int32_t subversion, uint8_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetBroadcastCredentials", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Byte&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&hostId;
	params[1] = (intptr_t)&key;
	params[2] = (intptr_t)&version;
	params[3] = (intptr_t)&subversion;
	params[4] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::DefaultNetworkTransport::SetPacketStat(int32_t direction, int32_t packetStatId, int32_t numMsgs, int32_t numBytes)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetPacketStat", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&direction;
	params[1] = (intptr_t)&packetStatId;
	params[2] = (intptr_t)&numMsgs;
	params[3] = (intptr_t)&numBytes;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::DefaultNetworkTransport::Shutdown()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Shutdown");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::DefaultNetworkTransport::StartBroadcastDiscovery(int32_t hostId, int32_t broadcastPort, int32_t key, int32_t version, int32_t subversion, IL2CPP::Array<uint8_t>* buffer, int32_t size, int32_t timeout, uint8_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StartBroadcastDiscovery", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Byte[]", "System.Int32", "System.Int32", "System.Byte&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)&hostId;
	params[1] = (intptr_t)&broadcastPort;
	params[2] = (intptr_t)&key;
	params[3] = (intptr_t)&version;
	params[4] = (intptr_t)&subversion;
	params[5] = (intptr_t)buffer;
	params[6] = (intptr_t)&size;
	params[7] = (intptr_t)&timeout;
	params[8] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::DefaultNetworkTransport::StopBroadcastDiscovery()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StopBroadcastDiscovery");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
