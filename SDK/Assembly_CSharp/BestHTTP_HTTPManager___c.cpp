#include "BestHTTP_HTTPManager___c.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::HTTPManager___c::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Assembly_CSharp::BestHTTP::HTTPManager::GetIl2CppClass(), "<>c");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::HTTPManager___c::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::BestHTTP::HTTPManager___c::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::HTTPManager___c::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp::BestHTTP::HTTPManager___c::_OnUpdate_b__105_0(Assembly_CSharp::BestHTTP::HTTPRequest* req)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<OnUpdate>b__105_0", std::vector<std::string> { "BestHTTP.HTTPRequest" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)req;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
int32_t Assembly_CSharp::BestHTTP::HTTPManager___c::_OnUpdate_b__105_1(Assembly_CSharp::BestHTTP::HTTPRequest* req1, Assembly_CSharp::BestHTTP::HTTPRequest* req2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<OnUpdate>b__105_1", std::vector<std::string> { "BestHTTP.HTTPRequest", "BestHTTP.HTTPRequest" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)req1;
	params[1] = (intptr_t)req2;
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
