#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Crypto_Prng_EntropyUtilities.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::EntropyUtilities::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Prng", "EntropyUtilities");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::EntropyUtilities::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
IL2CPP::Array<uint8_t>* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::EntropyUtilities::GenerateSeed(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IEntropySource* entropySource, int32_t numBytes)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GenerateSeed", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IEntropySource", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)entropySource;
	params[1] = (intptr_t)&numBytes;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::EntropyUtilities::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
