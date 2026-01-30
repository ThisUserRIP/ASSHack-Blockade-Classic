#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Cms_CmsSignedData.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedData::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.SecureProtocol.Org.BouncyCastle.Cms", "CmsSignedData");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedData::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedData::_ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedData* c)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Cms.CmsSignedData" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)c;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedData::_ctor(IL2CPP::Array<uint8_t>* sigBlock)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Byte[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)sigBlock;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedData::_ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsProcessable* signedContent, IL2CPP::Array<uint8_t>* sigBlock)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Cms.CmsProcessable", "System.Byte[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)signedContent;
	params[1] = (intptr_t)sigBlock;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedData::_ctor(mscorlib::System::Collections::IDictionary* hashes, IL2CPP::Array<uint8_t>* sigBlock)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Collections.IDictionary", "System.Byte[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)hashes;
	params[1] = (intptr_t)sigBlock;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedData::_ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsProcessable* signedContent, mscorlib::System::IO::Stream* sigData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Cms.CmsProcessable", "System.IO.Stream" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)signedContent;
	params[1] = (intptr_t)sigData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedData::_ctor(mscorlib::System::IO::Stream* sigData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.IO.Stream" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)sigData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedData::_ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsProcessable* signedContent, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::ContentInfo* sigData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Cms.CmsProcessable", "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.Cms.ContentInfo" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)signedContent;
	params[1] = (intptr_t)sigData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedData::_ctor(mscorlib::System::Collections::IDictionary* hashes, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::ContentInfo* sigData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Collections.IDictionary", "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.Cms.ContentInfo" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)hashes;
	params[1] = (intptr_t)sigData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedData::_ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::ContentInfo* sigData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.Cms.ContentInfo" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)sigData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedData::get_Version()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Version");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInformationStore* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedData::GetSignerInfos()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSignerInfos");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInformationStore*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedData::GetAttributeCertificates(mscorlib::System::String* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAttributeCertificates", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)type;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedData::GetCertificates(mscorlib::System::String* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCertificates", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)type;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedData::GetCrls(mscorlib::System::String* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCrls", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)type;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store*)returnValue;
}
mscorlib::System::String* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedData::get_SignedContentTypeOid()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_SignedContentTypeOid");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedData::get_SignedContentType()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_SignedContentType");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsProcessable* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedData::get_SignedContent()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_SignedContent");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsProcessable*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::ContentInfo* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedData::get_ContentInfo()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ContentInfo");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::ContentInfo*)returnValue;
}
IL2CPP::Array<uint8_t>* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedData::GetEncoded()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetEncoded");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedData* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedData::ReplaceSigners(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedData* signedData, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInformationStore* signerInformationStore)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReplaceSigners", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Cms.CmsSignedData", "BestHTTP.SecureProtocol.Org.BouncyCastle.Cms.SignerInformationStore" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)signedData;
	params[1] = (intptr_t)signerInformationStore;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedData*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedData* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedData::ReplaceCertificatesAndCrls(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedData* signedData, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* x509Certs, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* x509Crls, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* x509AttrCerts)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReplaceCertificatesAndCrls", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Cms.CmsSignedData", "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.Store.IX509Store", "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.Store.IX509Store", "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.Store.IX509Store" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)signedData;
	params[1] = (intptr_t)x509Certs;
	params[2] = (intptr_t)x509Crls;
	params[3] = (intptr_t)x509AttrCerts;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedData*)returnValue;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedData::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
