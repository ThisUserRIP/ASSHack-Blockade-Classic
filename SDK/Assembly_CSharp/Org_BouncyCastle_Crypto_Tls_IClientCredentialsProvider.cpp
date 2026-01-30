#include "Org_BouncyCastle_Crypto_Tls_IClientCredentialsProvider.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Org::BouncyCastle::Crypto::Tls::IClientCredentialsProvider::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "Org.BouncyCastle.Crypto.Tls", "IClientCredentialsProvider");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Org::BouncyCastle::Crypto::Tls::IClientCredentialsProvider::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCredentials* Assembly_CSharp::Org::BouncyCastle::Crypto::Tls::IClientCredentialsProvider::GetClientCredentials(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext* context, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::CertificateRequest* certificateRequest)
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
