#include "BestHTTP_HTTPRequest___c__DisplayClass237_0.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::HTTPRequest___c__DisplayClass237_0::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Assembly_CSharp::BestHTTP::HTTPRequest::GetIl2CppClass(), "<>c__DisplayClass237_0");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::HTTPRequest___c__DisplayClass237_0::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::BestHTTP::HTTPRequest___c__DisplayClass237_0::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::HTTPRequest___c__DisplayClass237_0::_SendHeaders_b__0(mscorlib::System::String* header, mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* values)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<SendHeaders>b__0", std::vector<std::string> { "System.String", "System.Collections.Generic.List`1<System.String>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)header;
	params[1] = (intptr_t)values;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
