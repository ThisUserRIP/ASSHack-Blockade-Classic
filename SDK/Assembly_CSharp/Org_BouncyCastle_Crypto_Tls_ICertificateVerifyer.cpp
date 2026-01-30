#include "Org_BouncyCastle_Crypto_Tls_ICertificateVerifyer.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Org::BouncyCastle::Crypto::Tls::ICertificateVerifyer::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "Org.BouncyCastle.Crypto.Tls", "ICertificateVerifyer");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Org::BouncyCastle::Crypto::Tls::ICertificateVerifyer::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool Assembly_CSharp::Org::BouncyCastle::Crypto::Tls::ICertificateVerifyer::IsValid(System::System::Uri* targetUri, IL2CPP::Array<Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*>* certs)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsValid", std::vector<std::string> { "System.Uri", "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.X509.X509CertificateStructure[]" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)targetUri;
	params[1] = (intptr_t)certs;
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
