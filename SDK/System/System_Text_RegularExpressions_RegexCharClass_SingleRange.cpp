#include "System_Text_RegularExpressions_RegexCharClass_SingleRange.h"

IL2CPP::Il2CppClass* System::System::Text::RegularExpressions::RegexCharClass_SingleRange::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(System::System::Text::RegularExpressions::RegexCharClass::GetIl2CppClass(), "SingleRange");
	return il2cppclass;
}
mscorlib::System::Type* System::System::Text::RegularExpressions::RegexCharClass_SingleRange::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::System::Text::RegularExpressions::RegexCharClass_SingleRange::_ctor(wchar_t first, wchar_t last)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Char", "System.Char" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&first;
	params[1] = (intptr_t)&last;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
