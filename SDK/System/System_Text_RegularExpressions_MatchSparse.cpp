#include "System_Text_RegularExpressions_MatchSparse.h"

IL2CPP::Il2CppClass* System::System::Text::RegularExpressions::MatchSparse::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.Text.RegularExpressions", "MatchSparse");
	return il2cppclass;
}
mscorlib::System::Type* System::System::Text::RegularExpressions::MatchSparse::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::System::Text::RegularExpressions::MatchSparse::_ctor(System::Text::RegularExpressions::Regex* regex, mscorlib::System::Collections::Hashtable* caps, int32_t capcount, mscorlib::System::String* text, int32_t begpos, int32_t len, int32_t startpos)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Text.RegularExpressions.Regex", "System.Collections.Hashtable", "System.Int32", "System.String", "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)regex;
	params[1] = (intptr_t)caps;
	params[2] = (intptr_t)&capcount;
	params[3] = (intptr_t)text;
	params[4] = (intptr_t)&begpos;
	params[5] = (intptr_t)&len;
	params[6] = (intptr_t)&startpos;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System::System::Text::RegularExpressions::GroupCollection* System::System::Text::RegularExpressions::MatchSparse::get_Groups()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Groups");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System::Text::RegularExpressions::GroupCollection*)returnValue;
}
