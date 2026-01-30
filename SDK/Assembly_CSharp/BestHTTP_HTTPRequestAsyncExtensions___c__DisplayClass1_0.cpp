#include "BestHTTP_HTTPRequestAsyncExtensions___c__DisplayClass1_0.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::HTTPRequestAsyncExtensions___c__DisplayClass1_0::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Assembly_CSharp::BestHTTP::HTTPRequestAsyncExtensions::GetIl2CppClass(), "<>c__DisplayClass1_0");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::HTTPRequestAsyncExtensions___c__DisplayClass1_0::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::BestHTTP::HTTPRequestAsyncExtensions___c__DisplayClass1_0::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::HTTPRequestAsyncExtensions___c__DisplayClass1_0::_GetAsStringAsync_b__0(Assembly_CSharp::BestHTTP::HTTPRequest* req, Assembly_CSharp::BestHTTP::HTTPResponse* resp, mscorlib::System::Threading::Tasks::TaskCompletionSource_1<mscorlib::System::String>* tcs)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<GetAsStringAsync>b__0", std::vector<std::string> { "BestHTTP.HTTPRequest", "BestHTTP.HTTPResponse", "System.Threading.Tasks.TaskCompletionSource`1<System.String>" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)req;
	params[1] = (intptr_t)resp;
	params[2] = (intptr_t)tcs;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
