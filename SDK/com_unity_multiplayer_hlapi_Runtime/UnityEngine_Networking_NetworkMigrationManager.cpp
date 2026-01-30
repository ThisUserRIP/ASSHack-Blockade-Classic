#include "UnityEngine_Networking_NetworkMigrationManager.h"

IL2CPP::Il2CppClass* com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMigrationManager::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("com.unity.multiplayer-hlapi.Runtime.dll", "UnityEngine.Networking", "NetworkMigrationManager");
	return il2cppclass;
}
mscorlib::System::Type* com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMigrationManager::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMigrationManager::AddPendingPlayer(UnityEngine_CoreModule::UnityEngine::GameObject* obj, int32_t connectionId, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkInstanceId netId, int16_t playerControllerId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddPendingPlayer", std::vector<std::string> { "UnityEngine.GameObject", "System.Int32", "UnityEngine.Networking.NetworkInstanceId", "System.Int16" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)obj;
	params[1] = (intptr_t)&connectionId;
	params[2] = (intptr_t)&netId;
	params[3] = (intptr_t)&playerControllerId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::GameObject* com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMigrationManager::FindPendingPlayer(int32_t connectionId, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkInstanceId netId, int16_t playerControllerId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindPendingPlayer", std::vector<std::string> { "System.Int32", "UnityEngine.Networking.NetworkInstanceId", "System.Int16" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&connectionId;
	params[1] = (intptr_t)&netId;
	params[2] = (intptr_t)&playerControllerId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::GameObject*)returnValue;
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMigrationManager::RemovePendingPlayer(int32_t connectionId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemovePendingPlayer", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&connectionId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMigrationManager::get_hostMigration()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_hostMigration");
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
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMigrationManager::set_hostMigration(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_hostMigration", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMigrationManager::get_showGUI()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_showGUI");
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
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMigrationManager::set_showGUI(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_showGUI", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMigrationManager::get_offsetX()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_offsetX");
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
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMigrationManager::set_offsetX(int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_offsetX", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMigrationManager::get_offsetY()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_offsetY");
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
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMigrationManager::set_offsetY(int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_offsetY", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient* com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMigrationManager::get_client()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_client");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient*)returnValue;
}
bool com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMigrationManager::get_waitingToBecomeNewHost()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_waitingToBecomeNewHost");
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
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMigrationManager::set_waitingToBecomeNewHost(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_waitingToBecomeNewHost", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMigrationManager::get_waitingReconnectToNewHost()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_waitingReconnectToNewHost");
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
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMigrationManager::set_waitingReconnectToNewHost(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_waitingReconnectToNewHost", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMigrationManager::get_disconnectedFromHost()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_disconnectedFromHost");
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
bool com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMigrationManager::get_hostWasShutdown()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_hostWasShutdown");
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
UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfo* com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMigrationManager::get_matchInfo()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_matchInfo");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfo*)returnValue;
}
int32_t com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMigrationManager::get_oldServerConnectionId()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_oldServerConnectionId");
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
mscorlib::System::String* com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMigrationManager::get_newHostAddress()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_newHostAddress");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMigrationManager::set_newHostAddress(mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_newHostAddress", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem::PeerInfoMessage*>* com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMigrationManager::get_peers()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_peers");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem::PeerInfoMessage*>*)returnValue;
}
mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMigrationManager_ConnectionPendingPlayers>* com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMigrationManager::get_pendingPlayers()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_pendingPlayers");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMigrationManager_ConnectionPendingPlayers>*)returnValue;
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMigrationManager::Start()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Start");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMigrationManager::Reset(int32_t reconnectId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Reset", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&reconnectId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMigrationManager::AssignAuthorityCallback(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkIdentity* uv, bool authorityState)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AssignAuthorityCallback", std::vector<std::string> { "UnityEngine.Networking.NetworkConnection", "UnityEngine.Networking.NetworkIdentity", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)conn;
	params[1] = (intptr_t)uv;
	params[2] = (intptr_t)&authorityState;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMigrationManager::Initialize(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient* newClient, UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfo* newMatchInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Initialize", std::vector<std::string> { "UnityEngine.Networking.NetworkClient", "UnityEngine.Networking.Match.MatchInfo" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)newClient;
	params[1] = (intptr_t)newMatchInfo;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMigrationManager::DisablePlayerObjects()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DisablePlayerObjects");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMigrationManager::SendPeerInfo()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SendPeerInfo");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMigrationManager::OnPeerClientAuthority(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessage* netMsg)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnPeerClientAuthority", std::vector<std::string> { "UnityEngine.Networking.NetworkMessage" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)netMsg;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMigrationManager::OnPeerInfo(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessage* netMsg)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnPeerInfo", std::vector<std::string> { "UnityEngine.Networking.NetworkMessage" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)netMsg;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMigrationManager::OnServerReconnectPlayerMessage(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessage* netMsg)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnServerReconnectPlayerMessage", std::vector<std::string> { "UnityEngine.Networking.NetworkMessage" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)netMsg;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMigrationManager::ReconnectObjectForConnection(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* newConnection, UnityEngine_CoreModule::UnityEngine::GameObject* oldObject, int32_t oldConnectionId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReconnectObjectForConnection", std::vector<std::string> { "UnityEngine.Networking.NetworkConnection", "UnityEngine.GameObject", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)newConnection;
	params[1] = (intptr_t)oldObject;
	params[2] = (intptr_t)&oldConnectionId;
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
bool com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMigrationManager::ReconnectPlayerForConnection(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* newConnection, UnityEngine_CoreModule::UnityEngine::GameObject* oldPlayer, int32_t oldConnectionId, int16_t playerControllerId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReconnectPlayerForConnection", std::vector<std::string> { "UnityEngine.Networking.NetworkConnection", "UnityEngine.GameObject", "System.Int32", "System.Int16" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)newConnection;
	params[1] = (intptr_t)oldPlayer;
	params[2] = (intptr_t)&oldConnectionId;
	params[3] = (intptr_t)&playerControllerId;
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
bool com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMigrationManager::LostHostOnClient(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LostHostOnClient", std::vector<std::string> { "UnityEngine.Networking.NetworkConnection" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)conn;
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
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMigrationManager::LostHostOnHost()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LostHostOnHost");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMigrationManager::BecomeNewHost(int32_t port)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BecomeNewHost", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&port;
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
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMigrationManager::OnClientDisconnectedFromHost(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMigrationManager_SceneChangeOption& sceneChange)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnClientDisconnectedFromHost", std::vector<std::string> { "UnityEngine.Networking.NetworkConnection", "UnityEngine.Networking.NetworkMigrationManager/SceneChangeOption&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)conn;
	params[1] = (intptr_t)&sceneChange;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMigrationManager::OnServerHostShutdown()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnServerHostShutdown");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMigrationManager::OnServerReconnectPlayer(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* newConnection, UnityEngine_CoreModule::UnityEngine::GameObject* oldPlayer, int32_t oldConnectionId, int16_t playerControllerId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnServerReconnectPlayer", std::vector<std::string> { "UnityEngine.Networking.NetworkConnection", "UnityEngine.GameObject", "System.Int32", "System.Int16" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)newConnection;
	params[1] = (intptr_t)oldPlayer;
	params[2] = (intptr_t)&oldConnectionId;
	params[3] = (intptr_t)&playerControllerId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMigrationManager::OnServerReconnectPlayer(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* newConnection, UnityEngine_CoreModule::UnityEngine::GameObject* oldPlayer, int32_t oldConnectionId, int16_t playerControllerId, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkReader* extraMessageReader)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnServerReconnectPlayer", std::vector<std::string> { "UnityEngine.Networking.NetworkConnection", "UnityEngine.GameObject", "System.Int32", "System.Int16", "UnityEngine.Networking.NetworkReader" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)newConnection;
	params[1] = (intptr_t)oldPlayer;
	params[2] = (intptr_t)&oldConnectionId;
	params[3] = (intptr_t)&playerControllerId;
	params[4] = (intptr_t)extraMessageReader;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMigrationManager::OnServerReconnectObject(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* newConnection, UnityEngine_CoreModule::UnityEngine::GameObject* oldObject, int32_t oldConnectionId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnServerReconnectObject", std::vector<std::string> { "UnityEngine.Networking.NetworkConnection", "UnityEngine.GameObject", "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)newConnection;
	params[1] = (intptr_t)oldObject;
	params[2] = (intptr_t)&oldConnectionId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMigrationManager::OnPeersUpdated(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem::PeerListMessage* peers)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnPeersUpdated", std::vector<std::string> { "UnityEngine.Networking.NetworkSystem.PeerListMessage" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)peers;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMigrationManager::OnAuthorityUpdated(UnityEngine_CoreModule::UnityEngine::GameObject* go, int32_t connectionId, bool authorityState)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnAuthorityUpdated", std::vector<std::string> { "UnityEngine.GameObject", "System.Int32", "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)go;
	params[1] = (intptr_t)&connectionId;
	params[2] = (intptr_t)&authorityState;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMigrationManager::FindNewHost(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem::PeerInfoMessage& newHostInfo, bool& youAreNewHost)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindNewHost", std::vector<std::string> { "UnityEngine.Networking.NetworkSystem.PeerInfoMessage&", "System.Boolean&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&newHostInfo;
	params[1] = (intptr_t)&youAreNewHost;
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
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMigrationManager::OnGUIHost()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnGUIHost");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMigrationManager::OnGUIClient()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnGUIClient");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMigrationManager::OnGUI()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnGUI");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMigrationManager::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
