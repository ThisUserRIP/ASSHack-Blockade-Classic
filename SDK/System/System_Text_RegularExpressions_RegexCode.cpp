#include "System_Text_RegularExpressions_RegexCode.h"

IL2CPP::Il2CppClass* System::System::Text::RegularExpressions::RegexCode::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.Text.RegularExpressions", "RegexCode");
	return il2cppclass;
}
mscorlib::System::Type* System::System::Text::RegularExpressions::RegexCode::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::System::Text::RegularExpressions::RegexCode::_ctor(IL2CPP::Array<int32_t>* codes, mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* stringlist, int32_t trackcount, mscorlib::System::Collections::Hashtable* caps, int32_t capsize, System::Text::RegularExpressions::RegexBoyerMoore* bmPrefix, System::Text::RegularExpressions::RegexPrefix* fcPrefix, int32_t anchors, bool rightToLeft)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32[]", "System.Collections.Generic.List`1<System.String>", "System.Int32", "System.Collections.Hashtable", "System.Int32", "System.Text.RegularExpressions.RegexBoyerMoore", "System.Text.RegularExpressions.RegexPrefix", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)codes;
	params[1] = (intptr_t)stringlist;
	params[2] = (intptr_t)&trackcount;
	params[3] = (intptr_t)caps;
	params[4] = (intptr_t)&capsize;
	params[5] = (intptr_t)bmPrefix;
	params[6] = (intptr_t)fcPrefix;
	params[7] = (intptr_t)&anchors;
	params[8] = (intptr_t)&rightToLeft;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool System::System::Text::RegularExpressions::RegexCode::OpcodeBacktracks(int32_t Op)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OpcodeBacktracks", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&Op;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
