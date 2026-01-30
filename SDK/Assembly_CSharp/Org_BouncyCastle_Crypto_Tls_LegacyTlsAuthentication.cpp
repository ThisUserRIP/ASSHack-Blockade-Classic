#include "Org_BouncyCastle_Crypto_Tls_LegacyTlsAuthentication.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Org::BouncyCastle::Crypto::Tls::LegacyTlsAuthentication::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "Org.BouncyCastle.Crypto.Tls", "LegacyTlsAuthentication");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Org::BouncyCastle::Crypto::Tls::LegacyTlsAuthentication::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::Org::BouncyCastle::Crypto::Tls::LegacyTlsAuthentication::_ctor(System::System::Uri* targetUri, Assembly_CSharp::Org::BouncyCastle::Crypto::Tls::ICertificateVerifyer* verifyer, Assembly_CSharp::Org::BouncyCastle::Crypto::Tls::IClientCredentialsProvider* prov)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Uri", "Org.BouncyCastle.Crypto.Tls.ICertificateVerifyer", "Org.BouncyCastle.Crypto.Tls.IClientCredentialsProvider" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)targetUri;
	params[1] = (intptr_t)verifyer;
	params[2] = (intptr_t)prov;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Org::BouncyCastle::Crypto::Tls::LegacyTlsAuthentication::NotifyServerCertificate(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::Certificate* serverCertificate)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "NotifyServerCertificate", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Tls.Certificate" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)serverCertificate;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCredentials* Assembly_CSharp::Org::BouncyCastle::Crypto::Tls::LegacyTlsAuthentication::GetClientCredentials(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext* context, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::CertificateRequest* certificateRequest)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetClientCredentials", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Tls.TlsContext", "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Tls.CertificateRequest" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)context;
	params[1] = (intptr_t)certificateRequest;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCredentials*)returnValue;
}
