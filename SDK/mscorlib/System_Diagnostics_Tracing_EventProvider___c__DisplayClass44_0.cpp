#include "System_Diagnostics_Tracing_EventProvider___c__DisplayClass44_0.h"

IL2CPP::Il2CppClass* mscorlib::System::Diagnostics::Tracing::EventProvider___c__DisplayClass44_0::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(mscorlib::System::Diagnostics::Tracing::EventProvider::GetIl2CppClass(), "<>c__DisplayClass44_0");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Diagnostics::Tracing::EventProvider___c__DisplayClass44_0::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Diagnostics::Tracing::EventProvider___c__DisplayClass44_0::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::EventProvider___c__DisplayClass44_0::_GetSessions_b__0(int32_t etwSessionId, int64_t matchAllKeywords)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<GetSessions>b__0", std::vector<std::string> { "System.Int32", "System.Int64" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&etwSessionId;
	params[1] = (intptr_t)&matchAllKeywords;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
