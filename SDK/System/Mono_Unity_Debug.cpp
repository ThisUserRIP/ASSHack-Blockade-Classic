#include "Mono_Unity_Debug.h"

IL2CPP::Il2CppClass* System::Mono::Unity::Debug::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "Mono.Unity", "Debug");
	return il2cppclass;
}
mscorlib::System::Type* System::Mono::Unity::Debug::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::Mono::Unity::Debug::CheckAndThrow(System::Mono::Unity::UnityTls_unitytls_errorstate errorState, mscorlib::System::String* context, Mono_Security::Mono::Security::Interface::AlertDescription defaultAlert)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckAndThrow", std::vector<std::string> { "Mono.Unity.UnityTls/unitytls_errorstate", "System.String", "Mono.Security.Interface.AlertDescription" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&errorState;
	params[1] = (intptr_t)context;
	params[2] = (intptr_t)&defaultAlert;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::Mono::Unity::Debug::CheckAndThrow(System::Mono::Unity::UnityTls_unitytls_errorstate errorState, System::Mono::Unity::UnityTls_unitytls_x509verify_result verifyResult, mscorlib::System::String* context, Mono_Security::Mono::Security::Interface::AlertDescription defaultAlert)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckAndThrow", std::vector<std::string> { "Mono.Unity.UnityTls/unitytls_errorstate", "Mono.Unity.UnityTls/unitytls_x509verify_result", "System.String", "Mono.Security.Interface.AlertDescription" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&errorState;
	params[1] = (intptr_t)&verifyResult;
	params[2] = (intptr_t)context;
	params[3] = (intptr_t)&defaultAlert;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
