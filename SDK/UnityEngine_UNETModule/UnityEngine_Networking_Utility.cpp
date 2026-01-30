#include "UnityEngine_Networking_Utility.h"

IL2CPP::Il2CppClass* UnityEngine_UNETModule::UnityEngine::Networking::Utility::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.UNETModule.dll", "UnityEngine.Networking", "Utility");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_UNETModule::UnityEngine::Networking::Utility::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_UNETModule::UnityEngine::Networking::Types::SourceID UnityEngine_UNETModule::UnityEngine::Networking::Utility::GetSourceID()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSourceID");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_UNETModule::UnityEngine::Networking::Types::SourceID ret;
		std::memset(&ret, 0, sizeof(UnityEngine_UNETModule::UnityEngine::Networking::Types::SourceID));
		return ret;
	}
	return static_cast<UnityEngine_UNETModule::UnityEngine::Networking::Types::SourceID>(*(UnityEngine_UNETModule::UnityEngine::Networking::Types::SourceID*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_UNETModule::UnityEngine::Networking::Utility::SetAccessTokenForNetwork(UnityEngine_UNETModule::UnityEngine::Networking::Types::NetworkID netId, UnityEngine_UNETModule::UnityEngine::Networking::Types::NetworkAccessToken* accessToken)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetAccessTokenForNetwork", std::vector<std::string> { "UnityEngine.Networking.Types.NetworkID", "UnityEngine.Networking.Types.NetworkAccessToken" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&netId;
	params[1] = (intptr_t)accessToken;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_UNETModule::UnityEngine::Networking::Types::NetworkAccessToken* UnityEngine_UNETModule::UnityEngine::Networking::Utility::GetAccessTokenForNetwork(UnityEngine_UNETModule::UnityEngine::Networking::Types::NetworkID netId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAccessTokenForNetwork", std::vector<std::string> { "UnityEngine.Networking.Types.NetworkID" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&netId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UNETModule::UnityEngine::Networking::Types::NetworkAccessToken*)returnValue;
}
void UnityEngine_UNETModule::UnityEngine::Networking::Utility::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
