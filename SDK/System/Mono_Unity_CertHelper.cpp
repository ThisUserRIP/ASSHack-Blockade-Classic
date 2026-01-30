#include "Mono_Unity_CertHelper.h"

IL2CPP::Il2CppClass* System::Mono::Unity::CertHelper::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "Mono.Unity", "CertHelper");
	return il2cppclass;
}
mscorlib::System::Type* System::Mono::Unity::CertHelper::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::Mono::Unity::CertHelper::AddCertificatesToNativeChain(System::Mono::Unity::UnityTls_unitytls_x509list* nativeCertificateChain, System::Security::Cryptography::X509Certificates::X509CertificateCollection* certificates, System::Mono::Unity::UnityTls_unitytls_errorstate* errorState)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddCertificatesToNativeChain", std::vector<std::string> { "Mono.Unity.UnityTls/unitytls_x509list*", "System.Security.Cryptography.X509Certificates.X509CertificateCollection", "Mono.Unity.UnityTls/unitytls_errorstate*" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)nativeCertificateChain;
	params[1] = (intptr_t)certificates;
	params[2] = (intptr_t)errorState;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::Mono::Unity::CertHelper::AddCertificateToNativeChain(System::Mono::Unity::UnityTls_unitytls_x509list* nativeCertificateChain, mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* certificate, System::Mono::Unity::UnityTls_unitytls_errorstate* errorState)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddCertificateToNativeChain", std::vector<std::string> { "Mono.Unity.UnityTls/unitytls_x509list*", "System.Security.Cryptography.X509Certificates.X509Certificate", "Mono.Unity.UnityTls/unitytls_errorstate*" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)nativeCertificateChain;
	params[1] = (intptr_t)certificate;
	params[2] = (intptr_t)errorState;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
