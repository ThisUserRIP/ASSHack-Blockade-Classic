#include "UnityEngine_Networking_NetworkClient.h"

IL2CPP::Il2CppClass* com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("com.unity.multiplayer-hlapi.Runtime.dll", "UnityEngine.Networking", "NetworkClient");
	return il2cppclass;
}
mscorlib::System::Type* com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Collections::Generic::List_1<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient>* com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::get_allClients()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_allClients");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient>*)returnValue;
}
bool com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::get_active()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_active");
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
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::SetHandlers(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetHandlers", std::vector<std::string> { "UnityEngine.Networking.NetworkConnection" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)conn;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::get_serverIp()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_serverIp");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
int32_t com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::get_serverPort()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_serverPort");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::get_connection()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_connection");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection*)returnValue;
}
IL2CPP::Array<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem::PeerInfoMessage*>* com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::get_peers()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_peers");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem::PeerInfoMessage*>*)returnValue;
}
int32_t com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::get_hostId()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_hostId");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int16, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessageDelegate>* com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::get_handlers()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_handlers");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int16, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessageDelegate>*)returnValue;
}
int32_t com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::get_numChannels()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_numChannels");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
UnityEngine_UNETModule::UnityEngine::Networking::HostTopology* com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::get_hostTopology()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_hostTopology");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UNETModule::UnityEngine::Networking::HostTopology*)returnValue;
}
int32_t com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::get_hostPort()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_hostPort");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::set_hostPort(int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_hostPort", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::get_isConnected()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_isConnected");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Type* com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::get_networkConnectionClass()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_networkConnectionClass");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Type*)returnValue;
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::_ctor(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.Networking.NetworkConnection" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)conn;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::Configure(UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfig* config, int32_t maxConnections)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Configure", std::vector<std::string> { "UnityEngine.Networking.ConnectionConfig", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)config;
	params[1] = (intptr_t)&maxConnections;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
bool com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::Configure(UnityEngine_UNETModule::UnityEngine::Networking::HostTopology* topology)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Configure", std::vector<std::string> { "UnityEngine.Networking.HostTopology" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)topology;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::Connect(UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfo* matchInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Connect", std::vector<std::string> { "UnityEngine.Networking.Match.MatchInfo" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)matchInfo;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::ReconnectToNewHost(mscorlib::System::String* serverIp, int32_t serverPort)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReconnectToNewHost", std::vector<std::string> { "System.String", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)serverIp;
	params[1] = (intptr_t)&serverPort;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
bool com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::ReconnectToNewHost(System::System::Net::EndPoint* secureTunnelEndPoint)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReconnectToNewHost", std::vector<std::string> { "System.Net.EndPoint" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)secureTunnelEndPoint;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::ConnectWithSimulator(mscorlib::System::String* serverIp, int32_t serverPort, int32_t latency, float packetLoss)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ConnectWithSimulator", std::vector<std::string> { "System.String", "System.Int32", "System.Int32", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)serverIp;
	params[1] = (intptr_t)&serverPort;
	params[2] = (intptr_t)&latency;
	params[3] = (intptr_t)&packetLoss;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::IsValidIpV6(mscorlib::System::String* address)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsValidIpV6", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)address;
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
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::Connect(mscorlib::System::String* serverIp, int32_t serverPort)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Connect", std::vector<std::string> { "System.String", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)serverIp;
	params[1] = (intptr_t)&serverPort;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::Connect(System::System::Net::EndPoint* secureTunnelEndPoint)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Connect", std::vector<std::string> { "System.Net.EndPoint" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)secureTunnelEndPoint;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::PrepareForConnect()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PrepareForConnect");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::PrepareForConnect(bool usePlatformSpecificProtocols)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PrepareForConnect", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&usePlatformSpecificProtocols;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::GetHostAddressesCallback(mscorlib::System::IAsyncResult* ar)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetHostAddressesCallback", std::vector<std::string> { "System.IAsyncResult" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)ar;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::ContinueConnect()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ContinueConnect");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::ConnectWithRelay(UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfo* info)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ConnectWithRelay", std::vector<std::string> { "UnityEngine.Networking.Match.MatchInfo" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)info;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::Disconnect()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Disconnect");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::Send(int16_t msgType, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::MessageBase* msg)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Send", std::vector<std::string> { "System.Int16", "UnityEngine.Networking.MessageBase" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&msgType;
	params[1] = (intptr_t)msg;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
bool com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::SendWriter(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkWriter* writer, int32_t channelId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SendWriter", std::vector<std::string> { "UnityEngine.Networking.NetworkWriter", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)writer;
	params[1] = (intptr_t)&channelId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
bool com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::SendBytes(IL2CPP::Array<uint8_t>* data, int32_t numBytes, int32_t channelId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SendBytes", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)data;
	params[1] = (intptr_t)&numBytes;
	params[2] = (intptr_t)&channelId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
bool com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::SendUnreliable(int16_t msgType, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::MessageBase* msg)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SendUnreliable", std::vector<std::string> { "System.Int16", "UnityEngine.Networking.MessageBase" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&msgType;
	params[1] = (intptr_t)msg;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
bool com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::SendByChannel(int16_t msgType, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::MessageBase* msg, int32_t channelId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SendByChannel", std::vector<std::string> { "System.Int16", "UnityEngine.Networking.MessageBase", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&msgType;
	params[1] = (intptr_t)msg;
	params[2] = (intptr_t)&channelId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::SetMaxDelay(float seconds)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetMaxDelay", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&seconds;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::Shutdown()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Shutdown");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::Update()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Update");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::GenerateConnectError(int32_t error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GenerateConnectError", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::GenerateDataError(int32_t error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GenerateDataError", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::GenerateDisconnectError(int32_t error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GenerateDisconnectError", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::GenerateError(int32_t error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GenerateError", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::GetStatsOut(int32_t& numMsgs, int32_t& numBufferedMsgs, int32_t& numBytes, int32_t& lastBufferedPerSecond)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetStatsOut", std::vector<std::string> { "System.Int32&", "System.Int32&", "System.Int32&", "System.Int32&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&numMsgs;
	params[1] = (intptr_t)&numBufferedMsgs;
	params[2] = (intptr_t)&numBytes;
	params[3] = (intptr_t)&lastBufferedPerSecond;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::GetStatsIn(int32_t& numMsgs, int32_t& numBytes)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetStatsIn", std::vector<std::string> { "System.Int32&", "System.Int32&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&numMsgs;
	params[1] = (intptr_t)&numBytes;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int16, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection_PacketStat>* com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::GetConnectionStats()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetConnectionStats");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int16, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection_PacketStat>*)returnValue;
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::ResetConnectionStats()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ResetConnectionStats");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
int32_t com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::GetRTT()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetRTT");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::RegisterSystemHandlers(bool localClient)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegisterSystemHandlers", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&localClient;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::OnCRC(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessage* netMsg)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnCRC", std::vector<std::string> { "UnityEngine.Networking.NetworkMessage" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)netMsg;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::RegisterHandler(int16_t msgType, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessageDelegate* handler)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegisterHandler", std::vector<std::string> { "System.Int16", "UnityEngine.Networking.NetworkMessageDelegate" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&msgType;
	params[1] = (intptr_t)handler;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::RegisterHandlerSafe(int16_t msgType, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessageDelegate* handler)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegisterHandlerSafe", std::vector<std::string> { "System.Int16", "UnityEngine.Networking.NetworkMessageDelegate" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&msgType;
	params[1] = (intptr_t)handler;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::UnregisterHandler(int16_t msgType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnregisterHandler", std::vector<std::string> { "System.Int16" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&msgType;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int16, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection_PacketStat>* com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::GetTotalConnectionStats()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTotalConnectionStats");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int16, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection_PacketStat>*)returnValue;
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::AddClient(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient* client)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddClient", std::vector<std::string> { "UnityEngine.Networking.NetworkClient" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)client;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::RemoveClient(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient* client)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveClient", std::vector<std::string> { "UnityEngine.Networking.NetworkClient" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)client;
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
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::UpdateClients()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpdateClients");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::ShutdownAll()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ShutdownAll");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::SetActive(bool state)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetActive", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&state;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
