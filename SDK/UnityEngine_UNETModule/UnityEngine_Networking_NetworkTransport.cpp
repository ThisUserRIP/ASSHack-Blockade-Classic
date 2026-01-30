#include "UnityEngine_Networking_NetworkTransport.h"

IL2CPP::Il2CppClass* UnityEngine_UNETModule::UnityEngine::Networking::NetworkTransport::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.UNETModule.dll", "UnityEngine.Networking", "NetworkTransport");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_UNETModule::UnityEngine::Networking::NetworkTransport::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool UnityEngine_UNETModule::UnityEngine::Networking::NetworkTransport::DoesEndPointUsePlatformProtocols(System::System::Net::EndPoint* endPoint)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoesEndPointUsePlatformProtocols", std::vector<std::string> { "System.Net.EndPoint" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)endPoint;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
int32_t UnityEngine_UNETModule::UnityEngine::Networking::NetworkTransport::ConnectEndPoint(int32_t hostId, System::System::Net::EndPoint* endPoint, int32_t exceptionConnectionId, uint8_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ConnectEndPoint", std::vector<std::string> { "System.Int32", "System.Net.EndPoint", "System.Int32", "System.Byte&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&hostId;
	params[1] = (intptr_t)endPoint;
	params[2] = (intptr_t)&exceptionConnectionId;
	params[3] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
void UnityEngine_UNETModule::UnityEngine::Networking::NetworkTransport::Init()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Init");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UNETModule::UnityEngine::Networking::NetworkTransport::Init(UnityEngine_UNETModule::UnityEngine::Networking::GlobalConfig* config)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Init", std::vector<std::string> { "UnityEngine.Networking.GlobalConfig" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)config;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UNETModule::UnityEngine::Networking::NetworkTransport::InitializeClass()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitializeClass");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UNETModule::UnityEngine::Networking::NetworkTransport::InitializeClassWithConfig(UnityEngine_UNETModule::UnityEngine::Networking::GlobalConfigInternal* config)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitializeClassWithConfig", std::vector<std::string> { "UnityEngine.Networking.GlobalConfigInternal" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)config;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UNETModule::UnityEngine::Networking::NetworkTransport::Shutdown()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Shutdown");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
int32_t UnityEngine_UNETModule::UnityEngine::Networking::NetworkTransport::AddHostWithSimulator(UnityEngine_UNETModule::UnityEngine::Networking::HostTopology* topology, int32_t minTimeout, int32_t maxTimeout, int32_t port, mscorlib::System::String* ip)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddHostWithSimulator", std::vector<std::string> { "UnityEngine.Networking.HostTopology", "System.Int32", "System.Int32", "System.Int32", "System.String" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)topology;
	params[1] = (intptr_t)&minTimeout;
	params[2] = (intptr_t)&maxTimeout;
	params[3] = (intptr_t)&port;
	params[4] = (intptr_t)ip;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
int32_t UnityEngine_UNETModule::UnityEngine::Networking::NetworkTransport::AddHostWithSimulator(UnityEngine_UNETModule::UnityEngine::Networking::HostTopology* topology, int32_t minTimeout, int32_t maxTimeout, int32_t port)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddHostWithSimulator", std::vector<std::string> { "UnityEngine.Networking.HostTopology", "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)topology;
	params[1] = (intptr_t)&minTimeout;
	params[2] = (intptr_t)&maxTimeout;
	params[3] = (intptr_t)&port;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
int32_t UnityEngine_UNETModule::UnityEngine::Networking::NetworkTransport::AddHost(UnityEngine_UNETModule::UnityEngine::Networking::HostTopology* topology, int32_t port, mscorlib::System::String* ip)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddHost", std::vector<std::string> { "UnityEngine.Networking.HostTopology", "System.Int32", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)topology;
	params[1] = (intptr_t)&port;
	params[2] = (intptr_t)ip;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
int32_t UnityEngine_UNETModule::UnityEngine::Networking::NetworkTransport::AddHostInternal(UnityEngine_UNETModule::UnityEngine::Networking::HostTopologyInternal* topologyInt, mscorlib::System::String* ip, int32_t port, int32_t minTimeout, int32_t maxTimeout)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddHostInternal", std::vector<std::string> { "UnityEngine.Networking.HostTopologyInternal", "System.String", "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)topologyInt;
	params[1] = (intptr_t)ip;
	params[2] = (intptr_t)&port;
	params[3] = (intptr_t)&minTimeout;
	params[4] = (intptr_t)&maxTimeout;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
int32_t UnityEngine_UNETModule::UnityEngine::Networking::NetworkTransport::AddWebsocketHost(UnityEngine_UNETModule::UnityEngine::Networking::HostTopology* topology, int32_t port, mscorlib::System::String* ip)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddWebsocketHost", std::vector<std::string> { "UnityEngine.Networking.HostTopology", "System.Int32", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)topology;
	params[1] = (intptr_t)&port;
	params[2] = (intptr_t)ip;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
int32_t UnityEngine_UNETModule::UnityEngine::Networking::NetworkTransport::AddWsHostInternal(UnityEngine_UNETModule::UnityEngine::Networking::HostTopologyInternal* topologyInt, mscorlib::System::String* ip, int32_t port)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddWsHostInternal", std::vector<std::string> { "UnityEngine.Networking.HostTopologyInternal", "System.String", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)topologyInt;
	params[1] = (intptr_t)ip;
	params[2] = (intptr_t)&port;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool UnityEngine_UNETModule::UnityEngine::Networking::NetworkTransport::IsPortOpen(mscorlib::System::String* ip, int32_t port)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsPortOpen", std::vector<std::string> { "System.String", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)ip;
	params[1] = (intptr_t)&port;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
void UnityEngine_UNETModule::UnityEngine::Networking::NetworkTransport::ConnectAsNetworkHost(int32_t hostId, mscorlib::System::String* address, int32_t port, UnityEngine_UNETModule::UnityEngine::Networking::Types::NetworkID network, UnityEngine_UNETModule::UnityEngine::Networking::Types::SourceID source, UnityEngine_UNETModule::UnityEngine::Networking::Types::NodeID node, uint8_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ConnectAsNetworkHost", std::vector<std::string> { "System.Int32", "System.String", "System.Int32", "UnityEngine.Networking.Types.NetworkID", "UnityEngine.Networking.Types.SourceID", "UnityEngine.Networking.Types.NodeID", "System.Byte&" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&hostId;
	params[1] = (intptr_t)address;
	params[2] = (intptr_t)&port;
	params[3] = (intptr_t)&network;
	params[4] = (intptr_t)&source;
	params[5] = (intptr_t)&node;
	params[6] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UNETModule::UnityEngine::Networking::NetworkTransport::ConnectAsNetworkHostInternal(int32_t hostId, mscorlib::System::String* address, int32_t port, uint64_t network, uint64_t source, uint16_t node, uint8_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ConnectAsNetworkHostInternal", std::vector<std::string> { "System.Int32", "System.String", "System.Int32", "System.UInt64", "System.UInt64", "System.UInt16", "System.Byte&" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&hostId;
	params[1] = (intptr_t)address;
	params[2] = (intptr_t)&port;
	params[3] = (intptr_t)&network;
	params[4] = (intptr_t)&source;
	params[5] = (intptr_t)&node;
	params[6] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_UNETModule::UnityEngine::Networking::NetworkEventType UnityEngine_UNETModule::UnityEngine::Networking::NetworkTransport::ReceiveRelayEventFromHost(int32_t hostId, uint8_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReceiveRelayEventFromHost", std::vector<std::string> { "System.Int32", "System.Byte&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&hostId;
	params[1] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
int32_t UnityEngine_UNETModule::UnityEngine::Networking::NetworkTransport::ReceiveRelayEventFromHostInternal(int32_t hostId, uint8_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReceiveRelayEventFromHostInternal", std::vector<std::string> { "System.Int32", "System.Byte&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&hostId;
	params[1] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
int32_t UnityEngine_UNETModule::UnityEngine::Networking::NetworkTransport::ConnectToNetworkPeer(int32_t hostId, mscorlib::System::String* address, int32_t port, int32_t exceptionConnectionId, int32_t relaySlotId, UnityEngine_UNETModule::UnityEngine::Networking::Types::NetworkID network, UnityEngine_UNETModule::UnityEngine::Networking::Types::SourceID source, UnityEngine_UNETModule::UnityEngine::Networking::Types::NodeID node, int32_t bytesPerSec, float bucketSizeFactor, uint8_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ConnectToNetworkPeer", std::vector<std::string> { "System.Int32", "System.String", "System.Int32", "System.Int32", "System.Int32", "UnityEngine.Networking.Types.NetworkID", "UnityEngine.Networking.Types.SourceID", "UnityEngine.Networking.Types.NodeID", "System.Int32", "System.Single", "System.Byte&" });
	intptr_t* params = new intptr_t[11];
	params[0] = (intptr_t)&hostId;
	params[1] = (intptr_t)address;
	params[2] = (intptr_t)&port;
	params[3] = (intptr_t)&exceptionConnectionId;
	params[4] = (intptr_t)&relaySlotId;
	params[5] = (intptr_t)&network;
	params[6] = (intptr_t)&source;
	params[7] = (intptr_t)&node;
	params[8] = (intptr_t)&bytesPerSec;
	params[9] = (intptr_t)&bucketSizeFactor;
	params[10] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
int32_t UnityEngine_UNETModule::UnityEngine::Networking::NetworkTransport::ConnectToNetworkPeer(int32_t hostId, mscorlib::System::String* address, int32_t port, int32_t exceptionConnectionId, int32_t relaySlotId, UnityEngine_UNETModule::UnityEngine::Networking::Types::NetworkID network, UnityEngine_UNETModule::UnityEngine::Networking::Types::SourceID source, UnityEngine_UNETModule::UnityEngine::Networking::Types::NodeID node, uint8_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ConnectToNetworkPeer", std::vector<std::string> { "System.Int32", "System.String", "System.Int32", "System.Int32", "System.Int32", "UnityEngine.Networking.Types.NetworkID", "UnityEngine.Networking.Types.SourceID", "UnityEngine.Networking.Types.NodeID", "System.Byte&" });
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)&hostId;
	params[1] = (intptr_t)address;
	params[2] = (intptr_t)&port;
	params[3] = (intptr_t)&exceptionConnectionId;
	params[4] = (intptr_t)&relaySlotId;
	params[5] = (intptr_t)&network;
	params[6] = (intptr_t)&source;
	params[7] = (intptr_t)&node;
	params[8] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
int32_t UnityEngine_UNETModule::UnityEngine::Networking::NetworkTransport::ConnectToNetworkPeerInternal(int32_t hostId, mscorlib::System::String* address, int32_t port, int32_t exceptionConnectionId, int32_t relaySlotId, uint64_t network, uint64_t source, uint16_t node, int32_t bytesPerSec, float bucketSizeFactor, uint8_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ConnectToNetworkPeerInternal", std::vector<std::string> { "System.Int32", "System.String", "System.Int32", "System.Int32", "System.Int32", "System.UInt64", "System.UInt64", "System.UInt16", "System.Int32", "System.Single", "System.Byte&" });
	intptr_t* params = new intptr_t[11];
	params[0] = (intptr_t)&hostId;
	params[1] = (intptr_t)address;
	params[2] = (intptr_t)&port;
	params[3] = (intptr_t)&exceptionConnectionId;
	params[4] = (intptr_t)&relaySlotId;
	params[5] = (intptr_t)&network;
	params[6] = (intptr_t)&source;
	params[7] = (intptr_t)&node;
	params[8] = (intptr_t)&bytesPerSec;
	params[9] = (intptr_t)&bucketSizeFactor;
	params[10] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
int32_t UnityEngine_UNETModule::UnityEngine::Networking::NetworkTransport::GetCurrentRTT(int32_t hostId, int32_t connectionId, uint8_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCurrentRTT", std::vector<std::string> { "System.Int32", "System.Int32", "System.Byte&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&hostId;
	params[1] = (intptr_t)&connectionId;
	params[2] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
mscorlib::System::String* UnityEngine_UNETModule::UnityEngine::Networking::NetworkTransport::GetConnectionInfo(int32_t hostId, int32_t connectionId, int32_t& port, uint64_t& network, uint16_t& dstNode, uint8_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetConnectionInfo", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32&", "System.UInt64&", "System.UInt16&", "System.Byte&" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&hostId;
	params[1] = (intptr_t)&connectionId;
	params[2] = (intptr_t)&port;
	params[3] = (intptr_t)&network;
	params[4] = (intptr_t)&dstNode;
	params[5] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void UnityEngine_UNETModule::UnityEngine::Networking::NetworkTransport::GetConnectionInfo(int32_t hostId, int32_t connectionId, mscorlib::System::String& address, int32_t& port, UnityEngine_UNETModule::UnityEngine::Networking::Types::NetworkID& network, UnityEngine_UNETModule::UnityEngine::Networking::Types::NodeID& dstNode, uint8_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetConnectionInfo", std::vector<std::string> { "System.Int32", "System.Int32", "System.String&", "System.Int32&", "UnityEngine.Networking.Types.NetworkID&", "UnityEngine.Networking.Types.NodeID&", "System.Byte&" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&hostId;
	params[1] = (intptr_t)&connectionId;
	params[2] = (intptr_t)&address;
	params[3] = (intptr_t)&port;
	params[4] = (intptr_t)&network;
	params[5] = (intptr_t)&dstNode;
	params[6] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t UnityEngine_UNETModule::UnityEngine::Networking::NetworkTransport::GetMaxPacketSize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMaxPacketSize");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
bool UnityEngine_UNETModule::UnityEngine::Networking::NetworkTransport::RemoveHost(int32_t hostId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveHost", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&hostId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool UnityEngine_UNETModule::UnityEngine::Networking::NetworkTransport::get_IsStarted()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_IsStarted");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool UnityEngine_UNETModule::UnityEngine::Networking::NetworkTransport::IsStartedInternal()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsStartedInternal");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
int32_t UnityEngine_UNETModule::UnityEngine::Networking::NetworkTransport::Connect(int32_t hostId, mscorlib::System::String* address, int32_t port, int32_t exeptionConnectionId, uint8_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Connect", std::vector<std::string> { "System.Int32", "System.String", "System.Int32", "System.Int32", "System.Byte&" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&hostId;
	params[1] = (intptr_t)address;
	params[2] = (intptr_t)&port;
	params[3] = (intptr_t)&exeptionConnectionId;
	params[4] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
int32_t UnityEngine_UNETModule::UnityEngine::Networking::NetworkTransport::ConnectWithSimulatorInternal(int32_t hostId, mscorlib::System::String* address, int32_t port, int32_t exeptionConnectionId, uint8_t& error, UnityEngine_UNETModule::UnityEngine::Networking::ConnectionSimulatorConfigInternal* conf)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ConnectWithSimulatorInternal", std::vector<std::string> { "System.Int32", "System.String", "System.Int32", "System.Int32", "System.Byte&", "UnityEngine.Networking.ConnectionSimulatorConfigInternal" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&hostId;
	params[1] = (intptr_t)address;
	params[2] = (intptr_t)&port;
	params[3] = (intptr_t)&exeptionConnectionId;
	params[4] = (intptr_t)&error;
	params[5] = (intptr_t)conf;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
int32_t UnityEngine_UNETModule::UnityEngine::Networking::NetworkTransport::ConnectWithSimulator(int32_t hostId, mscorlib::System::String* address, int32_t port, int32_t exeptionConnectionId, uint8_t& error, UnityEngine_UNETModule::UnityEngine::Networking::ConnectionSimulatorConfig* conf)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ConnectWithSimulator", std::vector<std::string> { "System.Int32", "System.String", "System.Int32", "System.Int32", "System.Byte&", "UnityEngine.Networking.ConnectionSimulatorConfig" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&hostId;
	params[1] = (intptr_t)address;
	params[2] = (intptr_t)&port;
	params[3] = (intptr_t)&exeptionConnectionId;
	params[4] = (intptr_t)&error;
	params[5] = (intptr_t)conf;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool UnityEngine_UNETModule::UnityEngine::Networking::NetworkTransport::Disconnect(int32_t hostId, int32_t connectionId, uint8_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Disconnect", std::vector<std::string> { "System.Int32", "System.Int32", "System.Byte&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&hostId;
	params[1] = (intptr_t)&connectionId;
	params[2] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
int32_t UnityEngine_UNETModule::UnityEngine::Networking::NetworkTransport::Internal_ConnectEndPoint(int32_t hostId, IL2CPP::Array<uint8_t>* sockAddrStorage, int32_t sockAddrStorageLen, int32_t exceptionConnectionId, uint8_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_ConnectEndPoint", std::vector<std::string> { "System.Int32", "System.Byte[]", "System.Int32", "System.Int32", "System.Byte&" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&hostId;
	params[1] = (intptr_t)sockAddrStorage;
	params[2] = (intptr_t)&sockAddrStorageLen;
	params[3] = (intptr_t)&exceptionConnectionId;
	params[4] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool UnityEngine_UNETModule::UnityEngine::Networking::NetworkTransport::Send(int32_t hostId, int32_t connectionId, int32_t channelId, IL2CPP::Array<uint8_t>* buffer, int32_t size, uint8_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Send", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "System.Byte[]", "System.Int32", "System.Byte&" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&hostId;
	params[1] = (intptr_t)&connectionId;
	params[2] = (intptr_t)&channelId;
	params[3] = (intptr_t)buffer;
	params[4] = (intptr_t)&size;
	params[5] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool UnityEngine_UNETModule::UnityEngine::Networking::NetworkTransport::SendWrapper(int32_t hostId, int32_t connectionId, int32_t channelId, IL2CPP::Array<uint8_t>* buffer, int32_t size, uint8_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SendWrapper", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "System.Byte[]", "System.Int32", "System.Byte&" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&hostId;
	params[1] = (intptr_t)&connectionId;
	params[2] = (intptr_t)&channelId;
	params[3] = (intptr_t)buffer;
	params[4] = (intptr_t)&size;
	params[5] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
UnityEngine_UNETModule::UnityEngine::Networking::NetworkEventType UnityEngine_UNETModule::UnityEngine::Networking::NetworkTransport::Receive(int32_t& hostId, int32_t& connectionId, int32_t& channelId, IL2CPP::Array<uint8_t>* buffer, int32_t bufferSize, int32_t& receivedSize, uint8_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Receive", std::vector<std::string> { "System.Int32&", "System.Int32&", "System.Int32&", "System.Byte[]", "System.Int32", "System.Int32&", "System.Byte&" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&hostId;
	params[1] = (intptr_t)&connectionId;
	params[2] = (intptr_t)&channelId;
	params[3] = (intptr_t)buffer;
	params[4] = (intptr_t)&bufferSize;
	params[5] = (intptr_t)&receivedSize;
	params[6] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
int32_t UnityEngine_UNETModule::UnityEngine::Networking::NetworkTransport::PopData(int32_t& hostId, int32_t& connectionId, int32_t& channelId, IL2CPP::Array<uint8_t>* buffer, int32_t bufferSize, int32_t& receivedSize, uint8_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PopData", std::vector<std::string> { "System.Int32&", "System.Int32&", "System.Int32&", "System.Byte[]", "System.Int32", "System.Int32&", "System.Byte&" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&hostId;
	params[1] = (intptr_t)&connectionId;
	params[2] = (intptr_t)&channelId;
	params[3] = (intptr_t)buffer;
	params[4] = (intptr_t)&bufferSize;
	params[5] = (intptr_t)&receivedSize;
	params[6] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
UnityEngine_UNETModule::UnityEngine::Networking::NetworkEventType UnityEngine_UNETModule::UnityEngine::Networking::NetworkTransport::ReceiveFromHost(int32_t hostId, int32_t& connectionId, int32_t& channelId, IL2CPP::Array<uint8_t>* buffer, int32_t bufferSize, int32_t& receivedSize, uint8_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReceiveFromHost", std::vector<std::string> { "System.Int32", "System.Int32&", "System.Int32&", "System.Byte[]", "System.Int32", "System.Int32&", "System.Byte&" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&hostId;
	params[1] = (intptr_t)&connectionId;
	params[2] = (intptr_t)&channelId;
	params[3] = (intptr_t)buffer;
	params[4] = (intptr_t)&bufferSize;
	params[5] = (intptr_t)&receivedSize;
	params[6] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
int32_t UnityEngine_UNETModule::UnityEngine::Networking::NetworkTransport::PopDataFromHost(int32_t hostId, int32_t& connectionId, int32_t& channelId, IL2CPP::Array<uint8_t>* buffer, int32_t bufferSize, int32_t& receivedSize, uint8_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PopDataFromHost", std::vector<std::string> { "System.Int32", "System.Int32&", "System.Int32&", "System.Byte[]", "System.Int32", "System.Int32&", "System.Byte&" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&hostId;
	params[1] = (intptr_t)&connectionId;
	params[2] = (intptr_t)&channelId;
	params[3] = (intptr_t)buffer;
	params[4] = (intptr_t)&bufferSize;
	params[5] = (intptr_t)&receivedSize;
	params[6] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
void UnityEngine_UNETModule::UnityEngine::Networking::NetworkTransport::SetPacketStat(int32_t direction, int32_t packetStatId, int32_t numMsgs, int32_t numBytes)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetPacketStat", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&direction;
	params[1] = (intptr_t)&packetStatId;
	params[2] = (intptr_t)&numMsgs;
	params[3] = (intptr_t)&numBytes;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UNETModule::UnityEngine::Networking::NetworkTransport::SetNetworkEventAvailableCallback(mscorlib::System::Action_1<mscorlib::System::Int32>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetNetworkEventAvailableCallback", std::vector<std::string> { "System.Action`1<System.Int32>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UNETModule::UnityEngine::Networking::NetworkTransport::Cleanup()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Cleanup");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UNETModule::UnityEngine::Networking::NetworkTransport::SetConnectionReadyForSendCallback(mscorlib::System::Action_2<mscorlib::System::Int32, mscorlib::System::Int32>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetConnectionReadyForSendCallback", std::vector<std::string> { "System.Action`2<System.Int32,System.Int32>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_UNETModule::UnityEngine::Networking::NetworkTransport::StartBroadcastDiscoveryWithData(int32_t hostId, int32_t broadcastPort, int32_t key, int32_t version, int32_t subversion, IL2CPP::Array<uint8_t>* buffer, int32_t size, int32_t timeout, uint8_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StartBroadcastDiscoveryWithData", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Byte[]", "System.Int32", "System.Int32", "System.Byte&" });
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
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool UnityEngine_UNETModule::UnityEngine::Networking::NetworkTransport::StartBroadcastDiscoveryWithoutData(int32_t hostId, int32_t broadcastPort, int32_t key, int32_t version, int32_t subversion, int32_t timeout, uint8_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StartBroadcastDiscoveryWithoutData", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Byte&" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&hostId;
	params[1] = (intptr_t)&broadcastPort;
	params[2] = (intptr_t)&key;
	params[3] = (intptr_t)&version;
	params[4] = (intptr_t)&subversion;
	params[5] = (intptr_t)&timeout;
	params[6] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool UnityEngine_UNETModule::UnityEngine::Networking::NetworkTransport::StartBroadcastDiscovery(int32_t hostId, int32_t broadcastPort, int32_t key, int32_t version, int32_t subversion, IL2CPP::Array<uint8_t>* buffer, int32_t size, int32_t timeout, uint8_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StartBroadcastDiscovery", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Byte[]", "System.Int32", "System.Int32", "System.Byte&" });
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
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
void UnityEngine_UNETModule::UnityEngine::Networking::NetworkTransport::StopBroadcastDiscovery()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StopBroadcastDiscovery");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UNETModule::UnityEngine::Networking::NetworkTransport::SetBroadcastCredentials(int32_t hostId, int32_t key, int32_t version, int32_t subversion, uint8_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetBroadcastCredentials", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Byte&" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&hostId;
	params[1] = (intptr_t)&key;
	params[2] = (intptr_t)&version;
	params[3] = (intptr_t)&subversion;
	params[4] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* UnityEngine_UNETModule::UnityEngine::Networking::NetworkTransport::GetBroadcastConnectionInfo(int32_t hostId, int32_t& port, uint8_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetBroadcastConnectionInfo", std::vector<std::string> { "System.Int32", "System.Int32&", "System.Byte&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&hostId;
	params[1] = (intptr_t)&port;
	params[2] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void UnityEngine_UNETModule::UnityEngine::Networking::NetworkTransport::GetBroadcastConnectionInfo(int32_t hostId, mscorlib::System::String& address, int32_t& port, uint8_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetBroadcastConnectionInfo", std::vector<std::string> { "System.Int32", "System.String&", "System.Int32&", "System.Byte&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&hostId;
	params[1] = (intptr_t)&address;
	params[2] = (intptr_t)&port;
	params[3] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UNETModule::UnityEngine::Networking::NetworkTransport::GetBroadcastConnectionMessage(int32_t hostId, IL2CPP::Array<uint8_t>* buffer, int32_t bufferSize, int32_t& receivedSize, uint8_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetBroadcastConnectionMessage", std::vector<std::string> { "System.Int32", "System.Byte[]", "System.Int32", "System.Int32&", "System.Byte&" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&hostId;
	params[1] = (intptr_t)buffer;
	params[2] = (intptr_t)&bufferSize;
	params[3] = (intptr_t)&receivedSize;
	params[4] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UNETModule::UnityEngine::Networking::NetworkTransport::SetMulticastLock(bool enabled)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetMulticastLock", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&enabled;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UNETModule::UnityEngine::Networking::NetworkTransport::GetBroadcastConnectionMessageInternal(int32_t hostId, IL2CPP::Array<uint8_t>* buffer, int32_t bufferSize, int32_t& receivedSize, uint8_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetBroadcastConnectionMessageInternal", std::vector<std::string> { "System.Int32", "System.Byte[]", "System.Int32", "System.Int32&", "System.Byte&" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&hostId;
	params[1] = (intptr_t)buffer;
	params[2] = (intptr_t)&bufferSize;
	params[3] = (intptr_t)&receivedSize;
	params[4] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UNETModule::UnityEngine::Networking::NetworkTransport::CheckTopology(UnityEngine_UNETModule::UnityEngine::Networking::HostTopology* topology)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckTopology", std::vector<std::string> { "UnityEngine.Networking.HostTopology" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)topology;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UNETModule::UnityEngine::Networking::NetworkTransport::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
