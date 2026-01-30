#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Crypto_Prng_X931SecureRandomBuilder.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Prng", "X931SecureRandomBuilder");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder::_ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* entropySource, bool predictionResistant)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Security.SecureRandom", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)entropySource;
	params[1] = (intptr_t)&predictionResistant;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder::_ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IEntropySourceProvider* entropySourceProvider)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IEntropySourceProvider" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)entropySourceProvider;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder::SetDateTimeVector(IL2CPP::Array<uint8_t>* dateTimeVector)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetDateTimeVector", std::vector<std::string> { "System.Byte[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)dateTimeVector;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::X931SecureRandom* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder::Build(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* engine, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter* key, bool predictionResistant)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Build", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IBlockCipher", "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.KeyParameter", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)engine;
	params[1] = (intptr_t)key;
	params[2] = (intptr_t)&predictionResistant;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::X931SecureRandom*)returnValue;
}
