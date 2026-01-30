#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Crypto_Parameters_CcmParameters.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::CcmParameters::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters", "CcmParameters");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::CcmParameters::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::CcmParameters::_ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter* key, int32_t macSize, IL2CPP::Array<uint8_t>* nonce, IL2CPP::Array<uint8_t>* associatedText)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.KeyParameter", "System.Int32", "System.Byte[]", "System.Byte[]" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)key;
	params[1] = (intptr_t)&macSize;
	params[2] = (intptr_t)nonce;
	params[3] = (intptr_t)associatedText;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
