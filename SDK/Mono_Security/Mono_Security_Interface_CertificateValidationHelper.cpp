#include "Mono_Security_Interface_CertificateValidationHelper.h"

IL2CPP::Il2CppClass* Mono_Security::Mono::Security::Interface::CertificateValidationHelper::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Mono.Security.dll", "Mono.Security.Interface", "CertificateValidationHelper");
	return il2cppclass;
}
mscorlib::System::Type* Mono_Security::Mono::Security::Interface::CertificateValidationHelper::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Mono_Security::Mono::Security::Interface::CertificateValidationHelper::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
Mono_Security::Mono::Security::Interface::ICertificateValidator2* Mono_Security::Mono::Security::Interface::CertificateValidationHelper::GetInternalValidator(Mono_Security::Mono::Security::Interface::MonoTlsSettings* settings, Mono_Security::Mono::Security::Interface::MonoTlsProvider* provider)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetInternalValidator", std::vector<std::string> { "Mono.Security.Interface.MonoTlsSettings", "Mono.Security.Interface.MonoTlsProvider" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)settings;
	params[1] = (intptr_t)provider;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Mono_Security::Mono::Security::Interface::ICertificateValidator2*)returnValue;
}
