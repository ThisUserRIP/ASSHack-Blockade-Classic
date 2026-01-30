#include "Org_BouncyCastle_Crypto_Tls_LegacyTlsClient.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Org::BouncyCastle::Crypto::Tls::LegacyTlsClient::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "Org.BouncyCastle.Crypto.Tls", "LegacyTlsClient");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Org::BouncyCastle::Crypto::Tls::LegacyTlsClient::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::Org::BouncyCastle::Crypto::Tls::LegacyTlsClient::_ctor(System::System::Uri* targetUri, Assembly_CSharp::Org::BouncyCastle::Crypto::Tls::ICertificateVerifyer* verifyer, Assembly_CSharp::Org::BouncyCastle::Crypto::Tls::IClientCredentialsProvider* prov, mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* hostNames)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Uri", "Org.BouncyCastle.Crypto.Tls.ICertificateVerifyer", "Org.BouncyCastle.Crypto.Tls.IClientCredentialsProvider", "System.Collections.Generic.List`1<System.String>" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)targetUri;
	params[1] = (intptr_t)verifyer;
	params[2] = (intptr_t)prov;
	params[3] = (intptr_t)hostNames;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsAuthentication* Assembly_CSharp::Org::BouncyCastle::Crypto::Tls::LegacyTlsClient::GetAuthentication()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAuthentication");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsAuthentication*)returnValue;
}
