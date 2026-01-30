#include "UnityEngine_Networking_NetworkScene.h"

IL2CPP::Il2CppClass* com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkScene::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("com.unity.multiplayer-hlapi.Runtime.dll", "UnityEngine.Networking", "NetworkScene");
	return il2cppclass;
}
mscorlib::System::Type* com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkScene::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Collections::Generic::Dictionary_2<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkInstanceId, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkIdentity>* com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkScene::get_localObjects()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_localObjects");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::Dictionary_2<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkInstanceId, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkIdentity>*)returnValue;
}
mscorlib::System::Collections::Generic::Dictionary_2<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkHash128, UnityEngine_CoreModule::UnityEngine::GameObject>* com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkScene::get_guidToPrefab()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_guidToPrefab");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::Dictionary_2<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkHash128, UnityEngine_CoreModule::UnityEngine::GameObject>*)returnValue;
}
mscorlib::System::Collections::Generic::Dictionary_2<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkHash128, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::SpawnDelegate>* com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkScene::get_spawnHandlers()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_spawnHandlers");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::Dictionary_2<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkHash128, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::SpawnDelegate>*)returnValue;
}
mscorlib::System::Collections::Generic::Dictionary_2<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkHash128, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::UnSpawnDelegate>* com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkScene::get_unspawnHandlers()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_unspawnHandlers");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::Dictionary_2<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkHash128, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::UnSpawnDelegate>*)returnValue;
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkScene::Shutdown()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Shutdown");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkScene::SetLocalObject(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkInstanceId netId, UnityEngine_CoreModule::UnityEngine::GameObject* obj, bool isClient, bool isServer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetLocalObject", std::vector<std::string> { "UnityEngine.Networking.NetworkInstanceId", "UnityEngine.GameObject", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&netId;
	params[1] = (intptr_t)obj;
	params[2] = (intptr_t)&isClient;
	params[3] = (intptr_t)&isServer;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::GameObject* com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkScene::FindLocalObject(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkInstanceId netId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindLocalObject", std::vector<std::string> { "UnityEngine.Networking.NetworkInstanceId" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&netId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::GameObject*)returnValue;
}
bool com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkScene::GetNetworkIdentity(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkInstanceId netId, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkIdentity& uv)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetNetworkIdentity", std::vector<std::string> { "UnityEngine.Networking.NetworkInstanceId", "UnityEngine.Networking.NetworkIdentity&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&netId;
	params[1] = (intptr_t)&uv;
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
bool com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkScene::RemoveLocalObject(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkInstanceId netId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveLocalObject", std::vector<std::string> { "UnityEngine.Networking.NetworkInstanceId" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&netId;
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
bool com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkScene::RemoveLocalObjectAndDestroy(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkInstanceId netId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveLocalObjectAndDestroy", std::vector<std::string> { "UnityEngine.Networking.NetworkInstanceId" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&netId;
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
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkScene::ClearLocalObjects()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearLocalObjects");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkScene::RegisterPrefab(UnityEngine_CoreModule::UnityEngine::GameObject* prefab, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkHash128 newAssetId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegisterPrefab", std::vector<std::string> { "UnityEngine.GameObject", "UnityEngine.Networking.NetworkHash128" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)prefab;
	params[1] = (intptr_t)&newAssetId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkScene::RegisterPrefab(UnityEngine_CoreModule::UnityEngine::GameObject* prefab)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegisterPrefab", std::vector<std::string> { "UnityEngine.GameObject" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)prefab;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkScene::GetPrefab(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkHash128 assetId, UnityEngine_CoreModule::UnityEngine::GameObject& prefab)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPrefab", std::vector<std::string> { "UnityEngine.Networking.NetworkHash128", "UnityEngine.GameObject&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&assetId;
	params[1] = (intptr_t)&prefab;
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
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkScene::ClearSpawners()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearSpawners");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkScene::UnregisterSpawnHandler(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkHash128 assetId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnregisterSpawnHandler", std::vector<std::string> { "UnityEngine.Networking.NetworkHash128" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&assetId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkScene::RegisterSpawnHandler(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkHash128 assetId, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::SpawnDelegate* spawnHandler, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::UnSpawnDelegate* unspawnHandler)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegisterSpawnHandler", std::vector<std::string> { "UnityEngine.Networking.NetworkHash128", "UnityEngine.Networking.SpawnDelegate", "UnityEngine.Networking.UnSpawnDelegate" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&assetId;
	params[1] = (intptr_t)spawnHandler;
	params[2] = (intptr_t)unspawnHandler;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkScene::UnregisterPrefab(UnityEngine_CoreModule::UnityEngine::GameObject* prefab)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnregisterPrefab", std::vector<std::string> { "UnityEngine.GameObject" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)prefab;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkScene::RegisterPrefab(UnityEngine_CoreModule::UnityEngine::GameObject* prefab, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::SpawnDelegate* spawnHandler, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::UnSpawnDelegate* unspawnHandler)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegisterPrefab", std::vector<std::string> { "UnityEngine.GameObject", "UnityEngine.Networking.SpawnDelegate", "UnityEngine.Networking.UnSpawnDelegate" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)prefab;
	params[1] = (intptr_t)spawnHandler;
	params[2] = (intptr_t)unspawnHandler;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkScene::GetSpawnHandler(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkHash128 assetId, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::SpawnDelegate& handler)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSpawnHandler", std::vector<std::string> { "UnityEngine.Networking.NetworkHash128", "UnityEngine.Networking.SpawnDelegate&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&assetId;
	params[1] = (intptr_t)&handler;
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
bool com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkScene::InvokeUnSpawnHandler(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkHash128 assetId, UnityEngine_CoreModule::UnityEngine::GameObject* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InvokeUnSpawnHandler", std::vector<std::string> { "UnityEngine.Networking.NetworkHash128", "UnityEngine.GameObject" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&assetId;
	params[1] = (intptr_t)obj;
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
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkScene::DestroyAllClientObjects()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DestroyAllClientObjects");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkScene::DumpAllClientObjects()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DumpAllClientObjects");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkScene::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkScene::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
