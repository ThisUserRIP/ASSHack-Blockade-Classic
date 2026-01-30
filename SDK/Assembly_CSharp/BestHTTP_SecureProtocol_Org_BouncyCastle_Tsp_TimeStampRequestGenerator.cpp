#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Tsp_TimeStampRequestGenerator.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampRequestGenerator::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.SecureProtocol.Org.BouncyCastle.Tsp", "TimeStampRequestGenerator");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampRequestGenerator::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampRequestGenerator::SetReqPolicy(mscorlib::System::String* reqPolicy)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetReqPolicy", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)reqPolicy;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampRequestGenerator::SetCertReq(bool certReq)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetCertReq", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&certReq;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampRequestGenerator::AddExtension(mscorlib::System::String* oid, bool critical, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddExtension", std::vector<std::string> { "System.String", "System.Boolean", "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.Asn1Encodable" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)oid;
	params[1] = (intptr_t)&critical;
	params[2] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampRequestGenerator::AddExtension(mscorlib::System::String* oid, bool critical, IL2CPP::Array<uint8_t>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddExtension", std::vector<std::string> { "System.String", "System.Boolean", "System.Byte[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)oid;
	params[1] = (intptr_t)&critical;
	params[2] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampRequestGenerator::AddExtension(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, bool critical, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* extValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddExtension", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.DerObjectIdentifier", "System.Boolean", "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.Asn1Encodable" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)oid;
	params[1] = (intptr_t)&critical;
	params[2] = (intptr_t)extValue;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampRequestGenerator::AddExtension(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, bool critical, IL2CPP::Array<uint8_t>* extValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddExtension", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.DerObjectIdentifier", "System.Boolean", "System.Byte[]" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)oid;
	params[1] = (intptr_t)&critical;
	params[2] = (intptr_t)extValue;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampRequest* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampRequestGenerator::Generate(mscorlib::System::String* digestAlgorithm, IL2CPP::Array<uint8_t>* digest)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Generate", std::vector<std::string> { "System.String", "System.Byte[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)digestAlgorithm;
	params[1] = (intptr_t)digest;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampRequest*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampRequest* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampRequestGenerator::Generate(mscorlib::System::String* digestAlgorithmOid, IL2CPP::Array<uint8_t>* digest, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* nonce)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Generate", std::vector<std::string> { "System.String", "System.Byte[]", "BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)digestAlgorithmOid;
	params[1] = (intptr_t)digest;
	params[2] = (intptr_t)nonce;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampRequest*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampRequest* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampRequestGenerator::Generate(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* digestAlgorithm, IL2CPP::Array<uint8_t>* digest)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Generate", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.DerObjectIdentifier", "System.Byte[]" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)digestAlgorithm;
	params[1] = (intptr_t)digest;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampRequest*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampRequest* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampRequestGenerator::Generate(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* digestAlgorithm, IL2CPP::Array<uint8_t>* digest, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* nonce)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Generate", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.DerObjectIdentifier", "System.Byte[]", "BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)digestAlgorithm;
	params[1] = (intptr_t)digest;
	params[2] = (intptr_t)nonce;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampRequest*)returnValue;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampRequestGenerator::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
