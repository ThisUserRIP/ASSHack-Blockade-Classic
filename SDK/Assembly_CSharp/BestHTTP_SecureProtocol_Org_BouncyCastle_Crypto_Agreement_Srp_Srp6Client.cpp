#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Crypto_Agreement_Srp_Srp6Client.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Agreement.Srp", "Srp6Client");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::Init(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* N, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* g, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* digest, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* random)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Init", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger", "BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger", "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IDigest", "BestHTTP.SecureProtocol.Org.BouncyCastle.Security.SecureRandom" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)N;
	params[1] = (intptr_t)g;
	params[2] = (intptr_t)digest;
	params[3] = (intptr_t)random;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::Init(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* group, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* digest, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* random)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Init", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.Srp6GroupParameters", "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IDigest", "BestHTTP.SecureProtocol.Org.BouncyCastle.Security.SecureRandom" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)group;
	params[1] = (intptr_t)digest;
	params[2] = (intptr_t)random;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::GenerateClientCredentials(IL2CPP::Array<uint8_t>* salt, IL2CPP::Array<uint8_t>* identity, IL2CPP::Array<uint8_t>* password)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GenerateClientCredentials", std::vector<std::string> { "System.Byte[]", "System.Byte[]", "System.Byte[]" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)salt;
	params[1] = (intptr_t)identity;
	params[2] = (intptr_t)password;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::CalculateSecret(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* serverB)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CalculateSecret", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)serverB;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::SelectPrivateValue()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SelectPrivateValue");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::CalculateS()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CalculateS");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::CalculateClientEvidenceMessage()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CalculateClientEvidenceMessage");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*)returnValue;
}
bool Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::VerifyServerEvidenceMessage(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* serverM2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "VerifyServerEvidenceMessage", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)serverM2;
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
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client::CalculateSessionKey()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CalculateSessionKey");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*)returnValue;
}
