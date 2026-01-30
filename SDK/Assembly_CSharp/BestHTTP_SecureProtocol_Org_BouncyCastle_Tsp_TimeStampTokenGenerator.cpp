#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Tsp_TimeStampTokenGenerator.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.SecureProtocol.Org.BouncyCastle.Tsp", "TimeStampTokenGenerator");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::_ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* cert, mscorlib::System::String* digestOID, mscorlib::System::String* tsaPolicyOID)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.AsymmetricKeyParameter", "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.X509Certificate", "System.String", "System.String" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)key;
	params[1] = (intptr_t)cert;
	params[2] = (intptr_t)digestOID;
	params[3] = (intptr_t)tsaPolicyOID;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::_ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* cert, mscorlib::System::String* digestOID, mscorlib::System::String* tsaPolicyOID, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable* signedAttr, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::AttributeTable* unsignedAttr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.AsymmetricKeyParameter", "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.X509Certificate", "System.String", "System.String", "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.Cms.AttributeTable", "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.Cms.AttributeTable" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)key;
	params[1] = (intptr_t)cert;
	params[2] = (intptr_t)digestOID;
	params[3] = (intptr_t)tsaPolicyOID;
	params[4] = (intptr_t)signedAttr;
	params[5] = (intptr_t)unsignedAttr;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::SetCertificates(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* certificates)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetCertificates", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.Store.IX509Store" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)certificates;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::SetCrls(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* crls)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetCrls", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.Store.IX509Store" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)crls;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::SetAccuracySeconds(int32_t accuracySeconds)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetAccuracySeconds", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&accuracySeconds;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::SetAccuracyMillis(int32_t accuracyMillis)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetAccuracyMillis", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&accuracyMillis;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::SetAccuracyMicros(int32_t accuracyMicros)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetAccuracyMicros", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&accuracyMicros;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::SetOrdering(bool ordering)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetOrdering", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ordering;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::SetTsa(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName* tsa)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetTsa", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.X509.GeneralName" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)tsa;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampToken* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampTokenGenerator::Generate(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampRequest* request, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* serialNumber, mscorlib::System::DateTime genTime)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Generate", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Tsp.TimeStampRequest", "BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger", "System.DateTime" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)request;
	params[1] = (intptr_t)serialNumber;
	params[2] = (intptr_t)&genTime;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampToken*)returnValue;
}
