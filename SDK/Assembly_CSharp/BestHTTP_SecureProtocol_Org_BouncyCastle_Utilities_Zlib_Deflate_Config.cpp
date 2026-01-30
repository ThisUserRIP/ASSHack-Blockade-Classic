#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Utilities_Zlib_Deflate_Config.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::Deflate_Config::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::Deflate::GetIl2CppClass(), "Config");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::Deflate_Config::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::Deflate_Config::_ctor(int32_t good_length, int32_t max_lazy, int32_t nice_length, int32_t max_chain, int32_t func)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&good_length;
	params[1] = (intptr_t)&max_lazy;
	params[2] = (intptr_t)&nice_length;
	params[3] = (intptr_t)&max_chain;
	params[4] = (intptr_t)&func;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
