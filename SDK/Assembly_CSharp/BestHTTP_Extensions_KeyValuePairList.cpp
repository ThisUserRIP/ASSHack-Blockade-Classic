#include "BestHTTP_Extensions_KeyValuePairList.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::Extensions::KeyValuePairList::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.Extensions", "KeyValuePairList");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::Extensions::KeyValuePairList::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::BestHTTP::Extensions::HeaderValue>* Assembly_CSharp::BestHTTP::Extensions::KeyValuePairList::get_Values()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Values");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::BestHTTP::Extensions::HeaderValue>*)returnValue;
}
void Assembly_CSharp::BestHTTP::Extensions::KeyValuePairList::set_Values(mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::BestHTTP::Extensions::HeaderValue>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Values", std::vector<std::string> { "System.Collections.Generic.List`1<BestHTTP.Extensions.HeaderValue>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp::BestHTTP::Extensions::KeyValuePairList::TryGet(mscorlib::System::String* valueKeyName, Assembly_CSharp::BestHTTP::Extensions::HeaderValue& param)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryGet", std::vector<std::string> { "System.String", "BestHTTP.Extensions.HeaderValue&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)valueKeyName;
	params[1] = (intptr_t)&param;
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
void Assembly_CSharp::BestHTTP::Extensions::KeyValuePairList::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
