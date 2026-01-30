#include "Mono_Net_Security_ChainValidationHelper.h"

IL2CPP::Il2CppClass* System::Mono::Net::Security::ChainValidationHelper::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "Mono.Net.Security", "ChainValidationHelper");
	return il2cppclass;
}
mscorlib::System::Type* System::Mono::Net::Security::ChainValidationHelper::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Mono_Security::Mono::Security::Interface::ICertificateValidator* System::Mono::Net::Security::ChainValidationHelper::GetInternalValidator(Mono_Security::Mono::Security::Interface::MonoTlsProvider* provider, Mono_Security::Mono::Security::Interface::MonoTlsSettings* settings)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetInternalValidator", std::vector<std::string> { "Mono.Security.Interface.MonoTlsProvider", "Mono.Security.Interface.MonoTlsSettings" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)provider;
	params[1] = (intptr_t)settings;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Mono_Security::Mono::Security::Interface::ICertificateValidator*)returnValue;
}
System::Mono::Net::Security::ChainValidationHelper* System::Mono::Net::Security::ChainValidationHelper::Create(Mono_Security::Mono::Security::Interface::MonoTlsProvider* provider, Mono_Security::Mono::Security::Interface::MonoTlsSettings& settings, System::Mono::Net::Security::MonoTlsStream* stream)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Create", std::vector<std::string> { "Mono.Security.Interface.MonoTlsProvider", "Mono.Security.Interface.MonoTlsSettings&", "Mono.Net.Security.MonoTlsStream" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)provider;
	params[1] = (intptr_t)&settings;
	params[2] = (intptr_t)stream;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::Mono::Net::Security::ChainValidationHelper*)returnValue;
}
void System::Mono::Net::Security::ChainValidationHelper::_ctor(Mono_Security::Mono::Security::Interface::MonoTlsProvider* provider, Mono_Security::Mono::Security::Interface::MonoTlsSettings* settings, bool cloneSettings, System::Mono::Net::Security::MonoTlsStream* stream, System::Mono::Net::Security::ServerCertValidationCallbackWrapper* callbackWrapper)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Mono.Security.Interface.MonoTlsProvider", "Mono.Security.Interface.MonoTlsSettings", "System.Boolean", "Mono.Net.Security.MonoTlsStream", "Mono.Net.Security.ServerCertValidationCallbackWrapper" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)provider;
	params[1] = (intptr_t)settings;
	params[2] = (intptr_t)&cloneSettings;
	params[3] = (intptr_t)stream;
	params[4] = (intptr_t)callbackWrapper;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* System::Mono::Net::Security::ChainValidationHelper::DefaultSelectionCallback(mscorlib::System::String* targetHost, System::Security::Cryptography::X509Certificates::X509CertificateCollection* localCertificates, mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* remoteCertificate, IL2CPP::Array<mscorlib::System::String*>* acceptableIssuers)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DefaultSelectionCallback", std::vector<std::string> { "System.String", "System.Security.Cryptography.X509Certificates.X509CertificateCollection", "System.Security.Cryptography.X509Certificates.X509Certificate", "System.String[]" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)targetHost;
	params[1] = (intptr_t)localCertificates;
	params[2] = (intptr_t)remoteCertificate;
	params[3] = (intptr_t)acceptableIssuers;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate*)returnValue;
}
Mono_Security::Mono::Security::Interface::MonoTlsSettings* System::Mono::Net::Security::ChainValidationHelper::get_Settings()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Settings");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Mono_Security::Mono::Security::Interface::MonoTlsSettings*)returnValue;
}
bool System::Mono::Net::Security::ChainValidationHelper::SelectClientCertificate(mscorlib::System::String* targetHost, System::Security::Cryptography::X509Certificates::X509CertificateCollection* localCertificates, mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* remoteCertificate, IL2CPP::Array<mscorlib::System::String*>* acceptableIssuers, mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate& clientCertificate)
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
Mono_Security::Mono::Security::Interface::ValidationResult* System::Mono::Net::Security::ChainValidationHelper::ValidateCertificate(mscorlib::System::String* host, bool serverMode, mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* leaf, System::Security::Cryptography::X509Certificates::X509Chain* chain)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ValidateCertificate", std::vector<std::string> { "System.String", "System.Boolean", "System.Security.Cryptography.X509Certificates.X509Certificate", "System.Security.Cryptography.X509Certificates.X509Chain" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)host;
	params[1] = (intptr_t)&serverMode;
	params[2] = (intptr_t)leaf;
	params[3] = (intptr_t)chain;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Mono_Security::Mono::Security::Interface::ValidationResult*)returnValue;
}
Mono_Security::Mono::Security::Interface::ValidationResult* System::Mono::Net::Security::ChainValidationHelper::ValidateChain(mscorlib::System::String* host, bool server, mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* leaf, System::Security::Cryptography::X509Certificates::X509Chain* chain, System::Security::Cryptography::X509Certificates::X509CertificateCollection* certs, System::Net::Security::SslPolicyErrors errors)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ValidateChain", std::vector<std::string> { "System.String", "System.Boolean", "System.Security.Cryptography.X509Certificates.X509Certificate", "System.Security.Cryptography.X509Certificates.X509Chain", "System.Security.Cryptography.X509Certificates.X509CertificateCollection", "System.Net.Security.SslPolicyErrors" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)host;
	params[1] = (intptr_t)&server;
	params[2] = (intptr_t)leaf;
	params[3] = (intptr_t)chain;
	params[4] = (intptr_t)certs;
	params[5] = (intptr_t)&errors;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Mono_Security::Mono::Security::Interface::ValidationResult*)returnValue;
}
Mono_Security::Mono::Security::Interface::ValidationResult* System::Mono::Net::Security::ChainValidationHelper::ValidateChain(mscorlib::System::String* host, bool server, mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* leaf, System::Security::Cryptography::X509Certificates::X509Chain& chain, System::Security::Cryptography::X509Certificates::X509CertificateCollection* certs, System::Net::Security::SslPolicyErrors errors)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ValidateChain", std::vector<std::string> { "System.String", "System.Boolean", "System.Security.Cryptography.X509Certificates.X509Certificate", "System.Security.Cryptography.X509Certificates.X509Chain&", "System.Security.Cryptography.X509Certificates.X509CertificateCollection", "System.Net.Security.SslPolicyErrors" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)host;
	params[1] = (intptr_t)&server;
	params[2] = (intptr_t)leaf;
	params[3] = (intptr_t)&chain;
	params[4] = (intptr_t)certs;
	params[5] = (intptr_t)&errors;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Mono_Security::Mono::Security::Interface::ValidationResult*)returnValue;
}
