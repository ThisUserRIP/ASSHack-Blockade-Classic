#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Crypto_Parameters_ElGamalKeyGenerationParameters.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters", "ElGamalKeyGenerationParameters");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters::_ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* random, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* parameters)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Security.SecureRandom", "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.ElGamalParameters" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)random;
	params[1] = (intptr_t)parameters;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters::get_Parameters()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Parameters");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters*)returnValue;
}
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters::GetStrength(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* parameters)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetStrength", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.ElGamalParameters" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)parameters;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
