#include "Mono_Security_Interface_ICertificateValidator2.h"

IL2CPP::Il2CppClass* Mono_Security::Mono::Security::Interface::ICertificateValidator2::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Mono.Security.dll", "Mono.Security.Interface", "ICertificateValidator2");
	return il2cppclass;
}
mscorlib::System::Type* Mono_Security::Mono::Security::Interface::ICertificateValidator2::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Mono_Security::Mono::Security::Interface::ValidationResult* Mono_Security::Mono::Security::Interface::ICertificateValidator2::ValidateCertificate(mscorlib::System::String* targetHost, bool serverMode, mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* leaf, System::System::Security::Cryptography::X509Certificates::X509Chain* chain)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ValidateCertificate", std::vector<std::string> { "System.String", "System.Boolean", "System.Security.Cryptography.X509Certificates.X509Certificate", "System.Security.Cryptography.X509Certificates.X509Chain" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)targetHost;
	params[1] = (intptr_t)&serverMode;
	params[2] = (intptr_t)leaf;
	params[3] = (intptr_t)chain;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Mono_Security::Mono::Security::Interface::ValidationResult*)returnValue;
}
