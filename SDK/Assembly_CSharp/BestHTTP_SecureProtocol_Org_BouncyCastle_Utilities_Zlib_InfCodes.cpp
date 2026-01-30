#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Utilities_Zlib_InfCodes.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::InfCodes::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.Zlib", "InfCodes");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::InfCodes::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::InfCodes::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::InfCodes::init(int32_t bl, int32_t bd, IL2CPP::Array<int32_t>* tl, int32_t tl_index, IL2CPP::Array<int32_t>* td, int32_t td_index, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream* z)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "init", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32[]", "System.Int32", "System.Int32[]", "System.Int32", "BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.Zlib.ZStream" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&bl;
	params[1] = (intptr_t)&bd;
	params[2] = (intptr_t)tl;
	params[3] = (intptr_t)&tl_index;
	params[4] = (intptr_t)td;
	params[5] = (intptr_t)&td_index;
	params[6] = (intptr_t)z;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::InfCodes::proc(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::InfBlocks* s, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream* z, int32_t r)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "proc", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.Zlib.InfBlocks", "BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.Zlib.ZStream", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)s;
	params[1] = (intptr_t)z;
	params[2] = (intptr_t)&r;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::InfCodes::free(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream* z)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "free", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.Zlib.ZStream" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)z;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::InfCodes::inflate_fast(int32_t bl, int32_t bd, IL2CPP::Array<int32_t>* tl, int32_t tl_index, IL2CPP::Array<int32_t>* td, int32_t td_index, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::InfBlocks* s, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream* z)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "inflate_fast", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32[]", "System.Int32", "System.Int32[]", "System.Int32", "BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.Zlib.InfBlocks", "BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.Zlib.ZStream" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)&bl;
	params[1] = (intptr_t)&bd;
	params[2] = (intptr_t)tl;
	params[3] = (intptr_t)&tl_index;
	params[4] = (intptr_t)td;
	params[5] = (intptr_t)&td_index;
	params[6] = (intptr_t)s;
	params[7] = (intptr_t)z;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::InfCodes::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
