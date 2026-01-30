#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Security_MacUtilities.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::MacUtilities::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.SecureProtocol.Org.BouncyCastle.Security", "MacUtilities");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::MacUtilities::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::MacUtilities::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::MacUtilities::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::MacUtilities::GetMac(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* id)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMac", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.DerObjectIdentifier" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)id;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::MacUtilities::GetMac(mscorlib::System::String* algorithm)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMac", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)algorithm;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac*)returnValue;
}
mscorlib::System::String* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::MacUtilities::GetAlgorithmName(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAlgorithmName", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.DerObjectIdentifier" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)oid;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
IL2CPP::Array<uint8_t>* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::MacUtilities::CalculateMac(mscorlib::System::String* algorithm, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* cp, IL2CPP::Array<uint8_t>* input)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CalculateMac", std::vector<std::string> { "System.String", "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.ICipherParameters", "System.Byte[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)algorithm;
	params[1] = (intptr_t)cp;
	params[2] = (intptr_t)input;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
IL2CPP::Array<uint8_t>* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::MacUtilities::DoFinal(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac* mac)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoFinal", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IMac" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)mac;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
IL2CPP::Array<uint8_t>* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::MacUtilities::DoFinal(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac* mac, IL2CPP::Array<uint8_t>* input)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoFinal", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IMac", "System.Byte[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)mac;
	params[1] = (intptr_t)input;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
