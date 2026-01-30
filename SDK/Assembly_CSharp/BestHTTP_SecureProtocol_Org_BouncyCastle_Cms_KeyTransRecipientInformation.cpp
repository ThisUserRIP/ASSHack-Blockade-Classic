#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Cms_KeyTransRecipientInformation.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::KeyTransRecipientInformation::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.SecureProtocol.Org.BouncyCastle.Cms", "KeyTransRecipientInformation");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::KeyTransRecipientInformation::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::KeyTransRecipientInformation::_ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::KeyTransRecipientInfo* info, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSecureReadable* secureReadable)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.Cms.KeyTransRecipientInfo", "BestHTTP.SecureProtocol.Org.BouncyCastle.Cms.CmsSecureReadable" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)info;
	params[1] = (intptr_t)secureReadable;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::KeyTransRecipientInformation::GetExchangeEncryptionAlgorithmName(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetExchangeEncryptionAlgorithmName", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.DerObjectIdentifier" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)oid;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::KeyTransRecipientInformation::UnwrapKey(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* key)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnwrapKey", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.ICipherParameters" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)key;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsTypedStream* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::KeyTransRecipientInformation::GetContentStream(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* key)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetContentStream", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.ICipherParameters" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)key;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsTypedStream*)returnValue;
}
