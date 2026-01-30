#include "Mono_Net_Security_SystemCertificateValidator.h"

IL2CPP::Il2CppClass* System::Mono::Net::Security::SystemCertificateValidator::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "Mono.Net.Security", "SystemCertificateValidator");
	return il2cppclass;
}
mscorlib::System::Type* System::Mono::Net::Security::SystemCertificateValidator::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::Mono::Net::Security::SystemCertificateValidator::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
System::System::Security::Cryptography::X509Certificates::X509Chain* System::Mono::Net::Security::SystemCertificateValidator::CreateX509Chain(System::Security::Cryptography::X509Certificates::X509CertificateCollection* certs)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateX509Chain", std::vector<std::string> { "System.Security.Cryptography.X509Certificates.X509CertificateCollection" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)certs;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::Security::Cryptography::X509Certificates::X509Chain*)returnValue;
}
bool System::Mono::Net::Security::SystemCertificateValidator::NeedsChain(Mono_Security::Mono::Security::Interface::MonoTlsSettings* settings)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "NeedsChain", std::vector<std::string> { "Mono.Security.Interface.MonoTlsSettings" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)settings;
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
