#include "Mono_Security_Interface_ValidationResult.h"

IL2CPP::Il2CppClass* Mono_Security::Mono::Security::Interface::ValidationResult::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Mono.Security.dll", "Mono.Security.Interface", "ValidationResult");
	return il2cppclass;
}
mscorlib::System::Type* Mono_Security::Mono::Security::Interface::ValidationResult::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Mono_Security::Mono::Security::Interface::ValidationResult::_ctor(bool trusted, bool user_denied, int32_t error_code, mscorlib::System::Nullable_1<Mono_Security::Mono::Security::Interface::MonoSslPolicyErrors> policy_errors)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Boolean", "System.Boolean", "System.Int32", "System.Nullable`1<Mono.Security.Interface.MonoSslPolicyErrors>" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&trusted;
	params[1] = (intptr_t)&user_denied;
	params[2] = (intptr_t)&error_code;
	params[3] = (intptr_t)&policy_errors;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Mono_Security::Mono::Security::Interface::ValidationResult::get_Trusted()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Trusted");
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
bool Mono_Security::Mono::Security::Interface::ValidationResult::get_UserDenied()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_UserDenied");
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
