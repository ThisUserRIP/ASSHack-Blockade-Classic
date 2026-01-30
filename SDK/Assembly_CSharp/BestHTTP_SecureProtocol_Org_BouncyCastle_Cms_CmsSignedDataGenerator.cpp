#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Cms_CmsSignedDataGenerator.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedDataGenerator::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.SecureProtocol.Org.BouncyCastle.Cms", "CmsSignedDataGenerator");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedDataGenerator::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedDataGenerator::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedDataGenerator::_ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* rand)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Security.SecureRandom" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)rand;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSigner(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* cert, mscorlib::System::String* digestOID)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddSigner", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.AsymmetricKeyParameter", "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.X509Certificate", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)privateKey;
	params[1] = (intptr_t)cert;
	params[2] = (intptr_t)digestOID;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSigner(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* cert, mscorlib::System::String* encryptionOID, mscorlib::System::String* digestOID)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddSigner", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.AsymmetricKeyParameter", "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.X509Certificate", "System.String", "System.String" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)privateKey;
	params[1] = (intptr_t)cert;
	params[2] = (intptr_t)encryptionOID;
	params[3] = (intptr_t)digestOID;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSigner(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, IL2CPP::Array<uint8_t>* subjectKeyID, mscorlib::System::String* digestOID)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddSigner", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.AsymmetricKeyParameter", "System.Byte[]", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)privateKey;
	params[1] = (intptr_t)subjectKeyID;
	params[2] = (intptr_t)digestOID;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSigner(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, IL2CPP::Array<uint8_t>* subjectKeyID, mscorlib::System::String* encryptionOID, mscorlib::System::String* digestOID)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddSigner", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.AsymmetricKeyParameter", "System.Byte[]", "System.String", "System.String" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)privateKey;
	params[1] = (intptr_t)subjectKeyID;
	params[2] = (intptr_t)encryptionOID;
	params[3] = (intptr_t)digestOID;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSigner(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* cert, mscorlib::System::String* digestOID, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable* signedAttr, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable* unsignedAttr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddSigner", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.AsymmetricKeyParameter", "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.X509Certificate", "System.String", "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.Cms.AttributeTable", "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.Cms.AttributeTable" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)privateKey;
	params[1] = (intptr_t)cert;
	params[2] = (intptr_t)digestOID;
	params[3] = (intptr_t)signedAttr;
	params[4] = (intptr_t)unsignedAttr;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSigner(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* cert, mscorlib::System::String* encryptionOID, mscorlib::System::String* digestOID, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable* signedAttr, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable* unsignedAttr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddSigner", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.AsymmetricKeyParameter", "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.X509Certificate", "System.String", "System.String", "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.Cms.AttributeTable", "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.Cms.AttributeTable" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)privateKey;
	params[1] = (intptr_t)cert;
	params[2] = (intptr_t)encryptionOID;
	params[3] = (intptr_t)digestOID;
	params[4] = (intptr_t)signedAttr;
	params[5] = (intptr_t)unsignedAttr;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSigner(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, IL2CPP::Array<uint8_t>* subjectKeyID, mscorlib::System::String* digestOID, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable* signedAttr, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable* unsignedAttr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddSigner", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.AsymmetricKeyParameter", "System.Byte[]", "System.String", "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.Cms.AttributeTable", "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.Cms.AttributeTable" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)privateKey;
	params[1] = (intptr_t)subjectKeyID;
	params[2] = (intptr_t)digestOID;
	params[3] = (intptr_t)signedAttr;
	params[4] = (intptr_t)unsignedAttr;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSigner(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, IL2CPP::Array<uint8_t>* subjectKeyID, mscorlib::System::String* encryptionOID, mscorlib::System::String* digestOID, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable* signedAttr, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable* unsignedAttr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddSigner", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.AsymmetricKeyParameter", "System.Byte[]", "System.String", "System.String", "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.Cms.AttributeTable", "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.Cms.AttributeTable" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)privateKey;
	params[1] = (intptr_t)subjectKeyID;
	params[2] = (intptr_t)encryptionOID;
	params[3] = (intptr_t)digestOID;
	params[4] = (intptr_t)signedAttr;
	params[5] = (intptr_t)unsignedAttr;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSigner(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* cert, mscorlib::System::String* digestOID, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* signedAttrGen, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unsignedAttrGen)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddSigner", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.AsymmetricKeyParameter", "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.X509Certificate", "System.String", "BestHTTP.SecureProtocol.Org.BouncyCastle.Cms.CmsAttributeTableGenerator", "BestHTTP.SecureProtocol.Org.BouncyCastle.Cms.CmsAttributeTableGenerator" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)privateKey;
	params[1] = (intptr_t)cert;
	params[2] = (intptr_t)digestOID;
	params[3] = (intptr_t)signedAttrGen;
	params[4] = (intptr_t)unsignedAttrGen;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSigner(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* cert, mscorlib::System::String* encryptionOID, mscorlib::System::String* digestOID, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* signedAttrGen, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unsignedAttrGen)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddSigner", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.AsymmetricKeyParameter", "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.X509Certificate", "System.String", "System.String", "BestHTTP.SecureProtocol.Org.BouncyCastle.Cms.CmsAttributeTableGenerator", "BestHTTP.SecureProtocol.Org.BouncyCastle.Cms.CmsAttributeTableGenerator" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)privateKey;
	params[1] = (intptr_t)cert;
	params[2] = (intptr_t)encryptionOID;
	params[3] = (intptr_t)digestOID;
	params[4] = (intptr_t)signedAttrGen;
	params[5] = (intptr_t)unsignedAttrGen;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSigner(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, IL2CPP::Array<uint8_t>* subjectKeyID, mscorlib::System::String* digestOID, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* signedAttrGen, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unsignedAttrGen)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddSigner", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.AsymmetricKeyParameter", "System.Byte[]", "System.String", "BestHTTP.SecureProtocol.Org.BouncyCastle.Cms.CmsAttributeTableGenerator", "BestHTTP.SecureProtocol.Org.BouncyCastle.Cms.CmsAttributeTableGenerator" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)privateKey;
	params[1] = (intptr_t)subjectKeyID;
	params[2] = (intptr_t)digestOID;
	params[3] = (intptr_t)signedAttrGen;
	params[4] = (intptr_t)unsignedAttrGen;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSigner(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, IL2CPP::Array<uint8_t>* subjectKeyID, mscorlib::System::String* encryptionOID, mscorlib::System::String* digestOID, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* signedAttrGen, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unsignedAttrGen)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddSigner", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.AsymmetricKeyParameter", "System.Byte[]", "System.String", "System.String", "BestHTTP.SecureProtocol.Org.BouncyCastle.Cms.CmsAttributeTableGenerator", "BestHTTP.SecureProtocol.Org.BouncyCastle.Cms.CmsAttributeTableGenerator" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)privateKey;
	params[1] = (intptr_t)subjectKeyID;
	params[2] = (intptr_t)encryptionOID;
	params[3] = (intptr_t)digestOID;
	params[4] = (intptr_t)signedAttrGen;
	params[5] = (intptr_t)unsignedAttrGen;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSignerInfoGenerator(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInfoGenerator* signerInfoGenerator)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddSignerInfoGenerator", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Cms.SignerInfoGenerator" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)signerInfoGenerator;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedDataGenerator::doAddSigner(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* signerIdentifier, mscorlib::System::String* encryptionOID, mscorlib::System::String* digestOID, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* signedAttrGen, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* unsignedAttrGen, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable* baseSignedTable)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "doAddSigner", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.AsymmetricKeyParameter", "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.Cms.SignerIdentifier", "System.String", "System.String", "BestHTTP.SecureProtocol.Org.BouncyCastle.Cms.CmsAttributeTableGenerator", "BestHTTP.SecureProtocol.Org.BouncyCastle.Cms.CmsAttributeTableGenerator", "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.Cms.AttributeTable" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)privateKey;
	params[1] = (intptr_t)signerIdentifier;
	params[2] = (intptr_t)encryptionOID;
	params[3] = (intptr_t)digestOID;
	params[4] = (intptr_t)signedAttrGen;
	params[5] = (intptr_t)unsignedAttrGen;
	params[6] = (intptr_t)baseSignedTable;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedData* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedDataGenerator::Generate(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsProcessable* content)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Generate", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Cms.CmsProcessable" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)content;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedData*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedData* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedDataGenerator::Generate(mscorlib::System::String* signedContentType, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsProcessable* content, bool encapsulate)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Generate", std::vector<std::string> { "System.String", "BestHTTP.SecureProtocol.Org.BouncyCastle.Cms.CmsProcessable", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)signedContentType;
	params[1] = (intptr_t)content;
	params[2] = (intptr_t)&encapsulate;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedData*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedData* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedDataGenerator::Generate(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsProcessable* content, bool encapsulate)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Generate", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Cms.CmsProcessable", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)content;
	params[1] = (intptr_t)&encapsulate;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedData*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInformationStore* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedDataGenerator::GenerateCounterSigners(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInformation* signer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GenerateCounterSigners", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Cms.SignerInformation" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)signer;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInformationStore*)returnValue;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSignedDataGenerator::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
