#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Math_Raw_Mod.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Mod::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.SecureProtocol.Org.BouncyCastle.Math.Raw", "Mod");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Mod::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Mod::Invert(IL2CPP::Array<uint32_t>* p, IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* z)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Invert", std::vector<std::string> { "System.UInt32[]", "System.UInt32[]", "System.UInt32[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)p;
	params[1] = (intptr_t)x;
	params[2] = (intptr_t)z;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<uint32_t>* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Mod::Random_(IL2CPP::Array<uint32_t>* p)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Random", std::vector<std::string> { "System.UInt32[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)p;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint32_t>*)returnValue;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Mod::Add(IL2CPP::Array<uint32_t>* p, IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* y, IL2CPP::Array<uint32_t>* z)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Add", std::vector<std::string> { "System.UInt32[]", "System.UInt32[]", "System.UInt32[]", "System.UInt32[]" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)p;
	params[1] = (intptr_t)x;
	params[2] = (intptr_t)y;
	params[3] = (intptr_t)z;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Mod::Subtract(IL2CPP::Array<uint32_t>* p, IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* y, IL2CPP::Array<uint32_t>* z)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Subtract", std::vector<std::string> { "System.UInt32[]", "System.UInt32[]", "System.UInt32[]", "System.UInt32[]" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)p;
	params[1] = (intptr_t)x;
	params[2] = (intptr_t)y;
	params[3] = (intptr_t)z;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Mod::InversionResult(IL2CPP::Array<uint32_t>* p, int32_t ac, IL2CPP::Array<uint32_t>* a, IL2CPP::Array<uint32_t>* z)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InversionResult", std::vector<std::string> { "System.UInt32[]", "System.Int32", "System.UInt32[]", "System.UInt32[]" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)p;
	params[1] = (intptr_t)&ac;
	params[2] = (intptr_t)a;
	params[3] = (intptr_t)z;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Mod::InversionStep(IL2CPP::Array<uint32_t>* p, IL2CPP::Array<uint32_t>* u, int32_t uLen, IL2CPP::Array<uint32_t>* x, int32_t& xc)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InversionStep", std::vector<std::string> { "System.UInt32[]", "System.UInt32[]", "System.Int32", "System.UInt32[]", "System.Int32&" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)p;
	params[1] = (intptr_t)u;
	params[2] = (intptr_t)&uLen;
	params[3] = (intptr_t)x;
	params[4] = (intptr_t)&xc;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Mod::GetTrailingZeroes(uint32_t x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTrailingZeroes", std::vector<std::string> { "System.UInt32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
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
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Mod::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw::Mod::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
