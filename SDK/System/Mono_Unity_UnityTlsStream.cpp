#include "Mono_Unity_UnityTlsStream.h"

IL2CPP::Il2CppClass* System::Mono::Unity::UnityTlsStream::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "Mono.Unity", "UnityTlsStream");
	return il2cppclass;
}
mscorlib::System::Type* System::Mono::Unity::UnityTlsStream::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::Mono::Unity::UnityTlsStream::_ctor(mscorlib::System::IO::Stream* innerStream, bool leaveInnerStreamOpen, System::Net::Security::SslStream* owner, Mono_Security::Mono::Security::Interface::MonoTlsSettings* settings, Mono_Security::Mono::Security::Interface::MonoTlsProvider* provider)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.IO.Stream", "System.Boolean", "System.Net.Security.SslStream", "Mono.Security.Interface.MonoTlsSettings", "Mono.Security.Interface.MonoTlsProvider" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)innerStream;
	params[1] = (intptr_t)&leaveInnerStreamOpen;
	params[2] = (intptr_t)owner;
	params[3] = (intptr_t)settings;
	params[4] = (intptr_t)provider;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System::Mono::Net::Security::MobileTlsContext* System::Mono::Unity::UnityTlsStream::CreateContext(bool serverMode, mscorlib::System::String* targetHost, System::Security::Authentication::SslProtocols enabledProtocols, mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate, System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates, bool askForClientCert)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateContext", std::vector<std::string> { "System.Boolean", "System.String", "System.Security.Authentication.SslProtocols", "System.Security.Cryptography.X509Certificates.X509Certificate", "System.Security.Cryptography.X509Certificates.X509CertificateCollection", "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&serverMode;
	params[1] = (intptr_t)targetHost;
	params[2] = (intptr_t)&enabledProtocols;
	params[3] = (intptr_t)serverCertificate;
	params[4] = (intptr_t)clientCertificates;
	params[5] = (intptr_t)&askForClientCert;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::Mono::Net::Security::MobileTlsContext*)returnValue;
}
