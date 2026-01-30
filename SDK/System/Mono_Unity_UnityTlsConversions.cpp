#include "Mono_Unity_UnityTlsConversions.h"

IL2CPP::Il2CppClass* System::Mono::Unity::UnityTlsConversions::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "Mono.Unity", "UnityTlsConversions");
	return il2cppclass;
}
mscorlib::System::Type* System::Mono::Unity::UnityTlsConversions::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
System::Mono::Unity::UnityTls_unitytls_protocol System::Mono::Unity::UnityTlsConversions::GetMinProtocol(System::Security::Authentication::SslProtocols protocols)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMinProtocol", std::vector<std::string> { "System.Security.Authentication.SslProtocols" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&protocols;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System::Mono::Unity::UnityTls_unitytls_protocol ret;
		std::memset(&ret, 0, sizeof(System::Mono::Unity::UnityTls_unitytls_protocol));
		return ret;
	}
	return static_cast<System::Mono::Unity::UnityTls_unitytls_protocol>(*(System::Mono::Unity::UnityTls_unitytls_protocol*)il2cpp_object_unbox(returnValue));
}
System::Mono::Unity::UnityTls_unitytls_protocol System::Mono::Unity::UnityTlsConversions::GetMaxProtocol(System::Security::Authentication::SslProtocols protocols)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMaxProtocol", std::vector<std::string> { "System.Security.Authentication.SslProtocols" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&protocols;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System::Mono::Unity::UnityTls_unitytls_protocol ret;
		std::memset(&ret, 0, sizeof(System::Mono::Unity::UnityTls_unitytls_protocol));
		return ret;
	}
	return static_cast<System::Mono::Unity::UnityTls_unitytls_protocol>(*(System::Mono::Unity::UnityTls_unitytls_protocol*)il2cpp_object_unbox(returnValue));
}
Mono_Security::Mono::Security::Interface::TlsProtocols System::Mono::Unity::UnityTlsConversions::ConvertProtocolVersion(System::Mono::Unity::UnityTls_unitytls_protocol protocol)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ConvertProtocolVersion", std::vector<std::string> { "Mono.Unity.UnityTls/unitytls_protocol" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&protocol;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Mono_Security::Mono::Security::Interface::TlsProtocols ret;
		std::memset(&ret, 0, sizeof(Mono_Security::Mono::Security::Interface::TlsProtocols));
		return ret;
	}
	return static_cast<Mono_Security::Mono::Security::Interface::TlsProtocols>(*(Mono_Security::Mono::Security::Interface::TlsProtocols*)il2cpp_object_unbox(returnValue));
}
Mono_Security::Mono::Security::Interface::AlertDescription System::Mono::Unity::UnityTlsConversions::VerifyResultToAlertDescription(System::Mono::Unity::UnityTls_unitytls_x509verify_result verifyResult, Mono_Security::Mono::Security::Interface::AlertDescription defaultAlert)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "VerifyResultToAlertDescription", std::vector<std::string> { "Mono.Unity.UnityTls/unitytls_x509verify_result", "Mono.Security.Interface.AlertDescription" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&verifyResult;
	params[1] = (intptr_t)&defaultAlert;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Mono_Security::Mono::Security::Interface::AlertDescription ret;
		std::memset(&ret, 0, sizeof(Mono_Security::Mono::Security::Interface::AlertDescription));
		return ret;
	}
	return static_cast<Mono_Security::Mono::Security::Interface::AlertDescription>(*(Mono_Security::Mono::Security::Interface::AlertDescription*)il2cpp_object_unbox(returnValue));
}
Mono_Security::Mono::Security::Interface::MonoSslPolicyErrors System::Mono::Unity::UnityTlsConversions::VerifyResultToPolicyErrror(System::Mono::Unity::UnityTls_unitytls_x509verify_result verifyResult)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "VerifyResultToPolicyErrror", std::vector<std::string> { "Mono.Unity.UnityTls/unitytls_x509verify_result" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&verifyResult;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Mono_Security::Mono::Security::Interface::MonoSslPolicyErrors ret;
		std::memset(&ret, 0, sizeof(Mono_Security::Mono::Security::Interface::MonoSslPolicyErrors));
		return ret;
	}
	return static_cast<Mono_Security::Mono::Security::Interface::MonoSslPolicyErrors>(*(Mono_Security::Mono::Security::Interface::MonoSslPolicyErrors*)il2cpp_object_unbox(returnValue));
}
System::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags System::Mono::Unity::UnityTlsConversions::VerifyResultToChainStatus(System::Mono::Unity::UnityTls_unitytls_x509verify_result verifyResult)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "VerifyResultToChainStatus", std::vector<std::string> { "Mono.Unity.UnityTls/unitytls_x509verify_result" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&verifyResult;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System::Security::Cryptography::X509Certificates::X509ChainStatusFlags ret;
		std::memset(&ret, 0, sizeof(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags));
		return ret;
	}
	return static_cast<System::Security::Cryptography::X509Certificates::X509ChainStatusFlags>(*(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags*)il2cpp_object_unbox(returnValue));
}
