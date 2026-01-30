#include "BestHTTP_SecureProtocol_Org_BouncyCastle_OpenSsl_PemUtilities.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::OpenSsl::PemUtilities::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.SecureProtocol.Org.BouncyCastle.OpenSsl", "PemUtilities");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::OpenSsl::PemUtilities::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::OpenSsl::PemUtilities::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::OpenSsl::PemUtilities::ParseDekAlgName(mscorlib::System::String* dekAlgName, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::OpenSsl::PemUtilities_PemBaseAlg& baseAlg, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::OpenSsl::PemUtilities_PemMode& mode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseDekAlgName", std::vector<std::string> { "System.String", "BestHTTP.SecureProtocol.Org.BouncyCastle.OpenSsl.PemUtilities/PemBaseAlg&", "BestHTTP.SecureProtocol.Org.BouncyCastle.OpenSsl.PemUtilities/PemMode&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)dekAlgName;
	params[1] = (intptr_t)&baseAlg;
	params[2] = (intptr_t)&mode;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<uint8_t>* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::OpenSsl::PemUtilities::Crypt(bool encrypt, IL2CPP::Array<uint8_t>* bytes, IL2CPP::Array<wchar_t>* password, mscorlib::System::String* dekAlgName, IL2CPP::Array<uint8_t>* iv)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Crypt", std::vector<std::string> { "System.Boolean", "System.Byte[]", "System.Char[]", "System.String", "System.Byte[]" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&encrypt;
	params[1] = (intptr_t)bytes;
	params[2] = (intptr_t)password;
	params[3] = (intptr_t)dekAlgName;
	params[4] = (intptr_t)iv;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::OpenSsl::PemUtilities::GetCipherParameters(IL2CPP::Array<wchar_t>* password, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::OpenSsl::PemUtilities_PemBaseAlg baseAlg, IL2CPP::Array<uint8_t>* salt)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCipherParameters", std::vector<std::string> { "System.Char[]", "BestHTTP.SecureProtocol.Org.BouncyCastle.OpenSsl.PemUtilities/PemBaseAlg", "System.Byte[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)password;
	params[1] = (intptr_t)&baseAlg;
	params[2] = (intptr_t)salt;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*)returnValue;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::OpenSsl::PemUtilities::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
