#include "System_Text_RegularExpressions_CachedCodeEntry.h"

IL2CPP::Il2CppClass* System::System::Text::RegularExpressions::CachedCodeEntry::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.Text.RegularExpressions", "CachedCodeEntry");
	return il2cppclass;
}
mscorlib::System::Type* System::System::Text::RegularExpressions::CachedCodeEntry::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::System::Text::RegularExpressions::CachedCodeEntry::_ctor(mscorlib::System::String* key, mscorlib::System::Collections::Hashtable* capnames, IL2CPP::Array<mscorlib::System::String*>* capslist, System::Text::RegularExpressions::RegexCode* code, mscorlib::System::Collections::Hashtable* caps, int32_t capsize, System::Text::RegularExpressions::ExclusiveReference* runner, System::Text::RegularExpressions::SharedReference* repl)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.Collections.Hashtable", "System.String[]", "System.Text.RegularExpressions.RegexCode", "System.Collections.Hashtable", "System.Int32", "System.Text.RegularExpressions.ExclusiveReference", "System.Text.RegularExpressions.SharedReference" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)key;
	params[1] = (intptr_t)capnames;
	params[2] = (intptr_t)capslist;
	params[3] = (intptr_t)code;
	params[4] = (intptr_t)caps;
	params[5] = (intptr_t)&capsize;
	params[6] = (intptr_t)runner;
	params[7] = (intptr_t)repl;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
