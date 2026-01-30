#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Cms_KeyAgreeRecipientInformation.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.SecureProtocol.Org.BouncyCastle.Cms", "KeyAgreeRecipientInformation");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::ReadRecipientInfo(mscorlib::System::Collections::IList* infos, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo* info, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSecureReadable* secureReadable)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReadRecipientInfo", std::vector<std::string> { "System.Collections.IList", "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.Cms.KeyAgreeRecipientInfo", "BestHTTP.SecureProtocol.Org.BouncyCastle.Cms.CmsSecureReadable" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)infos;
	params[1] = (intptr_t)info;
	params[2] = (intptr_t)secureReadable;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::_ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo* info, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::RecipientID* rid, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString* encryptedKey, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSecureReadable* secureReadable)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.Cms.KeyAgreeRecipientInfo", "BestHTTP.SecureProtocol.Org.BouncyCastle.Cms.RecipientID", "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.Asn1OctetString", "BestHTTP.SecureProtocol.Org.BouncyCastle.Cms.CmsSecureReadable" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)info;
	params[1] = (intptr_t)rid;
	params[2] = (intptr_t)encryptedKey;
	params[3] = (intptr_t)secureReadable;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::GetSenderPublicKey(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* receiverPrivateKey, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey* originator)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSenderPublicKey", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.AsymmetricKeyParameter", "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.Cms.OriginatorIdentifierOrKey" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)receiverPrivateKey;
	params[1] = (intptr_t)originator;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::GetPublicKeyFromOriginatorPublicKey(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* receiverPrivateKey, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey* originatorPublicKey)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPublicKeyFromOriginatorPublicKey", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.AsymmetricKeyParameter", "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.Cms.OriginatorPublicKey" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)receiverPrivateKey;
	params[1] = (intptr_t)originatorPublicKey;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::GetPublicKeyFromOriginatorID(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::OriginatorID* origID)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPublicKeyFromOriginatorID", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Cms.OriginatorID" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)origID;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::CalculateAgreedWrapKey(mscorlib::System::String* wrapAlg, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* senderPublicKey, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* receiverPrivateKey)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CalculateAgreedWrapKey", std::vector<std::string> { "System.String", "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.AsymmetricKeyParameter", "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.AsymmetricKeyParameter" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)wrapAlg;
	params[1] = (intptr_t)senderPublicKey;
	params[2] = (intptr_t)receiverPrivateKey;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::UnwrapSessionKey(mscorlib::System::String* wrapAlg, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter* agreedKey)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnwrapSessionKey", std::vector<std::string> { "System.String", "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.KeyParameter" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)wrapAlg;
	params[1] = (intptr_t)agreedKey;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::GetSessionKey(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* receiverPrivateKey)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSessionKey", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.AsymmetricKeyParameter" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)receiverPrivateKey;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsTypedStream* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::GetContentStream(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* key)
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
