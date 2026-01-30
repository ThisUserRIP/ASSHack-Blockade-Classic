#include "System_Text_RegularExpressions_RegexReplacement.h"

IL2CPP::Il2CppClass* System::System::Text::RegularExpressions::RegexReplacement::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.Text.RegularExpressions", "RegexReplacement");
	return il2cppclass;
}
mscorlib::System::Type* System::System::Text::RegularExpressions::RegexReplacement::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::System::Text::RegularExpressions::RegexReplacement::_ctor(mscorlib::System::String* rep, System::Text::RegularExpressions::RegexNode* concat, mscorlib::System::Collections::Hashtable* _caps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.Text.RegularExpressions.RegexNode", "System.Collections.Hashtable" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)rep;
	params[1] = (intptr_t)concat;
	params[2] = (intptr_t)_caps;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Text::RegularExpressions::RegexReplacement::ReplacementImpl(mscorlib::System::Text::StringBuilder* sb, System::Text::RegularExpressions::Match* match)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReplacementImpl", std::vector<std::string> { "System.Text.StringBuilder", "System.Text.RegularExpressions.Match" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)sb;
	params[1] = (intptr_t)match;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Text::RegularExpressions::RegexReplacement::ReplacementImplRTL(mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* al, System::Text::RegularExpressions::Match* match)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReplacementImplRTL", std::vector<std::string> { "System.Collections.Generic.List`1<System.String>", "System.Text.RegularExpressions.Match" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)al;
	params[1] = (intptr_t)match;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* System::System::Text::RegularExpressions::RegexReplacement::get_Pattern()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Pattern");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* System::System::Text::RegularExpressions::RegexReplacement::Replace(System::Text::RegularExpressions::Regex* regex, mscorlib::System::String* input, int32_t count, int32_t startat)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Replace", std::vector<std::string> { "System.Text.RegularExpressions.Regex", "System.String", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)regex;
	params[1] = (intptr_t)input;
	params[2] = (intptr_t)&count;
	params[3] = (intptr_t)&startat;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* System::System::Text::RegularExpressions::RegexReplacement::Replace(System::Text::RegularExpressions::MatchEvaluator* evaluator, System::Text::RegularExpressions::Regex* regex, mscorlib::System::String* input, int32_t count, int32_t startat)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Replace", std::vector<std::string> { "System.Text.RegularExpressions.MatchEvaluator", "System.Text.RegularExpressions.Regex", "System.String", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)evaluator;
	params[1] = (intptr_t)regex;
	params[2] = (intptr_t)input;
	params[3] = (intptr_t)&count;
	params[4] = (intptr_t)&startat;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
