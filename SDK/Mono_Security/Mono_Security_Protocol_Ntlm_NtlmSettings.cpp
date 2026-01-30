#include "Mono_Security_Protocol_Ntlm_NtlmSettings.h"

IL2CPP::Il2CppClass* Mono_Security::Mono::Security::Protocol::Ntlm::NtlmSettings::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Mono.Security.dll", "Mono.Security.Protocol.Ntlm", "NtlmSettings");
	return il2cppclass;
}
mscorlib::System::Type* Mono_Security::Mono::Security::Protocol::Ntlm::NtlmSettings::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Mono_Security::Mono::Security::Protocol::Ntlm::NtlmAuthLevel Mono_Security::Mono::Security::Protocol::Ntlm::NtlmSettings::get_DefaultAuthLevel()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_DefaultAuthLevel");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Mono_Security::Mono::Security::Protocol::Ntlm::NtlmAuthLevel ret;
		std::memset(&ret, 0, sizeof(Mono_Security::Mono::Security::Protocol::Ntlm::NtlmAuthLevel));
		return ret;
	}
	return static_cast<Mono_Security::Mono::Security::Protocol::Ntlm::NtlmAuthLevel>(*(Mono_Security::Mono::Security::Protocol::Ntlm::NtlmAuthLevel*)il2cpp_object_unbox(returnValue));
}
void Mono_Security::Mono::Security::Protocol::Ntlm::NtlmSettings::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
