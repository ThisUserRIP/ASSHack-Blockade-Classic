#include "Mono_Security_Interface_ICertificateValidator.h"

IL2CPP::Il2CppClass* Mono_Security::Mono::Security::Interface::ICertificateValidator::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Mono.Security.dll", "Mono.Security.Interface", "ICertificateValidator");
	return il2cppclass;
}
mscorlib::System::Type* Mono_Security::Mono::Security::Interface::ICertificateValidator::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Mono_Security::Mono::Security::Interface::MonoTlsSettings* Mono_Security::Mono::Security::Interface::ICertificateValidator::get_Settings()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Settings");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Mono_Security::Mono::Security::Interface::MonoTlsSettings*)returnValue;
}
bool Mono_Security::Mono::Security::Interface::ICertificateValidator::SelectClientCertificate(mscorlib::System::String* targetHost, System::System::Security::Cryptography::X509Certificates::X509CertificateCollection* localCertificates, mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* remoteCertificate, IL2CPP::Array<mscorlib::System::String*>* acceptableIssuers, mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate& clientCertificate)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SelectClientCertificate", std::vector<std::string> { "System.String", "System.Security.Cryptography.X509Certificates.X509CertificateCollection", "System.Security.Cryptography.X509Certificates.X509Certificate", "System.String[]", "System.Security.Cryptography.X509Certificates.X509Certificate&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)targetHost;
	params[1] = (intptr_t)localCertificates;
	params[2] = (intptr_t)remoteCertificate;
	params[3] = (intptr_t)acceptableIssuers;
	params[4] = (intptr_t)&clientCertificate;
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
