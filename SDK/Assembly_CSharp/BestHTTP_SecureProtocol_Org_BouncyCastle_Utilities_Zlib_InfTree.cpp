#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Utilities_Zlib_InfTree.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::InfTree::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.Zlib", "InfTree");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::InfTree::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::InfTree::huft_build(IL2CPP::Array<int32_t>* b, int32_t bindex, int32_t n, int32_t s, IL2CPP::Array<int32_t>* d, IL2CPP::Array<int32_t>* e, IL2CPP::Array<int32_t>* t, IL2CPP::Array<int32_t>* m, IL2CPP::Array<int32_t>* hp, IL2CPP::Array<int32_t>* hn, IL2CPP::Array<int32_t>* v)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "huft_build", std::vector<std::string> { "System.Int32[]", "System.Int32", "System.Int32", "System.Int32", "System.Int32[]", "System.Int32[]", "System.Int32[]", "System.Int32[]", "System.Int32[]", "System.Int32[]", "System.Int32[]" });
	intptr_t* params = new intptr_t[11];
	params[0] = (intptr_t)b;
	params[1] = (intptr_t)&bindex;
	params[2] = (intptr_t)&n;
	params[3] = (intptr_t)&s;
	params[4] = (intptr_t)d;
	params[5] = (intptr_t)e;
	params[6] = (intptr_t)t;
	params[7] = (intptr_t)m;
	params[8] = (intptr_t)hp;
	params[9] = (intptr_t)hn;
	params[10] = (intptr_t)v;
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
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::InfTree::inflate_trees_bits(IL2CPP::Array<int32_t>* c, IL2CPP::Array<int32_t>* bb, IL2CPP::Array<int32_t>* tb, IL2CPP::Array<int32_t>* hp, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream* z)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "inflate_trees_bits", std::vector<std::string> { "System.Int32[]", "System.Int32[]", "System.Int32[]", "System.Int32[]", "BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.Zlib.ZStream" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)c;
	params[1] = (intptr_t)bb;
	params[2] = (intptr_t)tb;
	params[3] = (intptr_t)hp;
	params[4] = (intptr_t)z;
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
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::InfTree::inflate_trees_dynamic(int32_t nl, int32_t nd, IL2CPP::Array<int32_t>* c, IL2CPP::Array<int32_t>* bl, IL2CPP::Array<int32_t>* bd, IL2CPP::Array<int32_t>* tl, IL2CPP::Array<int32_t>* td, IL2CPP::Array<int32_t>* hp, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream* z)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "inflate_trees_dynamic", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32[]", "System.Int32[]", "System.Int32[]", "System.Int32[]", "System.Int32[]", "System.Int32[]", "BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.Zlib.ZStream" });
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)&nl;
	params[1] = (intptr_t)&nd;
	params[2] = (intptr_t)c;
	params[3] = (intptr_t)bl;
	params[4] = (intptr_t)bd;
	params[5] = (intptr_t)tl;
	params[6] = (intptr_t)td;
	params[7] = (intptr_t)hp;
	params[8] = (intptr_t)z;
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
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::InfTree::inflate_trees_fixed(IL2CPP::Array<int32_t>* bl, IL2CPP::Array<int32_t>* bd, IL2CPP::Array<IL2CPP::Array<int32_t>*>* tl, IL2CPP::Array<IL2CPP::Array<int32_t>*>* td, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream* z)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "inflate_trees_fixed", std::vector<std::string> { "System.Int32[]", "System.Int32[]", "System.Int32[][]", "System.Int32[][]", "BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.Zlib.ZStream" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)bl;
	params[1] = (intptr_t)bd;
	params[2] = (intptr_t)tl;
	params[3] = (intptr_t)td;
	params[4] = (intptr_t)z;
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
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::InfTree::initWorkArea(int32_t vsize)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "initWorkArea", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&vsize;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::InfTree::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::InfTree::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
