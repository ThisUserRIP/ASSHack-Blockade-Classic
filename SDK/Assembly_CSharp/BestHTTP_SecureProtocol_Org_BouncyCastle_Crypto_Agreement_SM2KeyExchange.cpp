#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Crypto_Agreement_SM2KeyExchange.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Agreement", "SM2KeyExchange");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::_ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* digest)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IDigest" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)digest;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::Init(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* privParam)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Init", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.ICipherParameters" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)privParam;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<uint8_t>* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::CalculateKey(int32_t kLen, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* pubParam)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CalculateKey", std::vector<std::string> { "System.Int32", "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.ICipherParameters" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&kLen;
	params[1] = (intptr_t)pubParam;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
IL2CPP::Array<IL2CPP::Array<uint8_t>*>* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::CalculateKeyWithConfirmation(int32_t kLen, IL2CPP::Array<uint8_t>* confirmationTag, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* pubParam)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CalculateKeyWithConfirmation", std::vector<std::string> { "System.Int32", "System.Byte[]", "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.ICipherParameters" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&kLen;
	params[1] = (intptr_t)confirmationTag;
	params[2] = (intptr_t)pubParam;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<IL2CPP::Array<uint8_t>*>*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::CalculateU(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters* otherPub)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CalculateU", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.SM2KeyExchangePublicParameters" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)otherPub;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*)returnValue;
}
IL2CPP::Array<uint8_t>* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::Kdf(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* u, IL2CPP::Array<uint8_t>* za, IL2CPP::Array<uint8_t>* zb, int32_t klen)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Kdf", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECPoint", "System.Byte[]", "System.Byte[]", "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)u;
	params[1] = (intptr_t)za;
	params[2] = (intptr_t)zb;
	params[3] = (intptr_t)&klen;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::Reduce(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Reduce", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)x;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*)returnValue;
}
IL2CPP::Array<uint8_t>* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::S1(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* digest, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* u, IL2CPP::Array<uint8_t>* inner)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "S1", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IDigest", "BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECPoint", "System.Byte[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)digest;
	params[1] = (intptr_t)u;
	params[2] = (intptr_t)inner;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
IL2CPP::Array<uint8_t>* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::CalculateInnerHash(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* digest, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* u, IL2CPP::Array<uint8_t>* za, IL2CPP::Array<uint8_t>* zb, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* p1, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* p2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CalculateInnerHash", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IDigest", "BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECPoint", "System.Byte[]", "System.Byte[]", "BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECPoint", "BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECPoint" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)digest;
	params[1] = (intptr_t)u;
	params[2] = (intptr_t)za;
	params[3] = (intptr_t)zb;
	params[4] = (intptr_t)p1;
	params[5] = (intptr_t)p2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
IL2CPP::Array<uint8_t>* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::S2(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* digest, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* u, IL2CPP::Array<uint8_t>* inner)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "S2", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IDigest", "BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECPoint", "System.Byte[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)digest;
	params[1] = (intptr_t)u;
	params[2] = (intptr_t)inner;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
IL2CPP::Array<uint8_t>* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::GetZ(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* digest, IL2CPP::Array<uint8_t>* userID, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* pubPoint)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetZ", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IDigest", "System.Byte[]", "BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECPoint" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)digest;
	params[1] = (intptr_t)userID;
	params[2] = (intptr_t)pubPoint;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::AddUserID(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* digest, IL2CPP::Array<uint8_t>* userID)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddUserID", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IDigest", "System.Byte[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)digest;
	params[1] = (intptr_t)userID;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::AddFieldElement(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* digest, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* v)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddFieldElement", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IDigest", "BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECFieldElement" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)digest;
	params[1] = (intptr_t)v;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
