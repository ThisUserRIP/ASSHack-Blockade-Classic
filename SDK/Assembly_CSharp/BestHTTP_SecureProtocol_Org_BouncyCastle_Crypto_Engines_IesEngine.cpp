#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Crypto_Engines_IesEngine.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines::IesEngine::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines", "IesEngine");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines::IesEngine::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines::IesEngine::_ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBasicAgreement* agree, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDerivationFunction* kdf, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac* mac)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IBasicAgreement", "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IDerivationFunction", "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IMac" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)agree;
	params[1] = (intptr_t)kdf;
	params[2] = (intptr_t)mac;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines::IesEngine::_ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBasicAgreement* agree, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDerivationFunction* kdf, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac* mac, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::BufferedBlockCipher* cipher)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IBasicAgreement", "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IDerivationFunction", "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IMac", "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.BufferedBlockCipher" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)agree;
	params[1] = (intptr_t)kdf;
	params[2] = (intptr_t)mac;
	params[3] = (intptr_t)cipher;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines::IesEngine::Init(bool forEncryption, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* privParameters, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* pubParameters, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* iesParameters)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Init", std::vector<std::string> { "System.Boolean", "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.ICipherParameters", "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.ICipherParameters", "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.ICipherParameters" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&forEncryption;
	params[1] = (intptr_t)privParameters;
	params[2] = (intptr_t)pubParameters;
	params[3] = (intptr_t)iesParameters;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<uint8_t>* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines::IesEngine::DecryptBlock(IL2CPP::Array<uint8_t>* in_enc, int32_t inOff, int32_t inLen, IL2CPP::Array<uint8_t>* z)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DecryptBlock", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.Int32", "System.Byte[]" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)in_enc;
	params[1] = (intptr_t)&inOff;
	params[2] = (intptr_t)&inLen;
	params[3] = (intptr_t)z;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
IL2CPP::Array<uint8_t>* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines::IesEngine::EncryptBlock(IL2CPP::Array<uint8_t>* input, int32_t inOff, int32_t inLen, IL2CPP::Array<uint8_t>* z)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EncryptBlock", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.Int32", "System.Byte[]" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)input;
	params[1] = (intptr_t)&inOff;
	params[2] = (intptr_t)&inLen;
	params[3] = (intptr_t)z;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
IL2CPP::Array<uint8_t>* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines::IesEngine::GenerateKdfBytes(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KdfParameters* kParam, int32_t length)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GenerateKdfBytes", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.KdfParameters", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)kParam;
	params[1] = (intptr_t)&length;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
IL2CPP::Array<uint8_t>* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines::IesEngine::ProcessBlock(IL2CPP::Array<uint8_t>* input, int32_t inOff, int32_t inLen)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessBlock", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)input;
	params[1] = (intptr_t)&inOff;
	params[2] = (intptr_t)&inLen;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
