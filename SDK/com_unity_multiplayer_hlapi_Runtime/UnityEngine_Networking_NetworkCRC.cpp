#include "UnityEngine_Networking_NetworkCRC.h"

IL2CPP::Il2CppClass* com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkCRC::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("com.unity.multiplayer-hlapi.Runtime.dll", "UnityEngine.Networking", "NetworkCRC");
	return il2cppclass;
}
mscorlib::System::Type* com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkCRC::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkCRC* com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkCRC::get_singleton()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_singleton");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkCRC*)returnValue;
}
mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Int32>* com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkCRC::get_scripts()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_scripts");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Int32>*)returnValue;
}
bool com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkCRC::get_scriptCRCCheck()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_scriptCRCCheck");
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
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkCRC::set_scriptCRCCheck(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_scriptCRCCheck", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkCRC::ReinitializeScriptCRCs(mscorlib::System::Reflection::Assembly* callingAssembly)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReinitializeScriptCRCs", std::vector<std::string> { "System.Reflection.Assembly" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)callingAssembly;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkCRC::RegisterBehaviour(mscorlib::System::String* name, int32_t channel)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegisterBehaviour", std::vector<std::string> { "System.String", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)&channel;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkCRC::Validate(IL2CPP::Array<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem::CRCMessageEntry>* scripts, int32_t numChannels)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Validate", std::vector<std::string> { "UnityEngine.Networking.NetworkSystem.CRCMessageEntry[]", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)scripts;
	params[1] = (intptr_t)&numChannels;
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
bool com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkCRC::ValidateInternal(IL2CPP::Array<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem::CRCMessageEntry>* remoteScripts, int32_t numChannels)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ValidateInternal", std::vector<std::string> { "UnityEngine.Networking.NetworkSystem.CRCMessageEntry[]", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)remoteScripts;
	params[1] = (intptr_t)&numChannels;
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
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkCRC::Dump(IL2CPP::Array<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem::CRCMessageEntry>* remoteScripts)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dump", std::vector<std::string> { "UnityEngine.Networking.NetworkSystem.CRCMessageEntry[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)remoteScripts;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkCRC::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
