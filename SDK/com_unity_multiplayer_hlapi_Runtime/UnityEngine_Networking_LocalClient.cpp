#include "UnityEngine_Networking_LocalClient.h"

IL2CPP::Il2CppClass* com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::LocalClient::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("com.unity.multiplayer-hlapi.Runtime.dll", "UnityEngine.Networking", "LocalClient");
	return il2cppclass;
}
mscorlib::System::Type* com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::LocalClient::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::LocalClient::Disconnect()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Disconnect");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::LocalClient::InternalConnectLocalServer(bool generateConnectMsg)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalConnectLocalServer", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&generateConnectMsg;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::LocalClient::Update()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Update");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::LocalClient::AddLocalPlayer(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::PlayerController* localPlayer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddLocalPlayer", std::vector<std::string> { "UnityEngine.Networking.PlayerController" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)localPlayer;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::LocalClient::PostInternalMessage(IL2CPP::Array<uint8_t>* buffer, int32_t channelId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PostInternalMessage", std::vector<std::string> { "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)buffer;
	params[1] = (intptr_t)&channelId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::LocalClient::PostInternalMessage(int16_t msgType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PostInternalMessage", std::vector<std::string> { "System.Int16" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&msgType;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::LocalClient::ProcessInternalMessages()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessInternalMessages");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::LocalClient::InvokeHandlerOnClient(int16_t msgType, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::MessageBase* msg, int32_t channelId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InvokeHandlerOnClient", std::vector<std::string> { "System.Int16", "UnityEngine.Networking.MessageBase", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&msgType;
	params[1] = (intptr_t)msg;
	params[2] = (intptr_t)&channelId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::LocalClient::InvokeBytesOnClient(IL2CPP::Array<uint8_t>* buffer, int32_t channelId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InvokeBytesOnClient", std::vector<std::string> { "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)buffer;
	params[1] = (intptr_t)&channelId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::LocalClient::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
