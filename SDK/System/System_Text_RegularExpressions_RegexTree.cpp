#include "System_Text_RegularExpressions_RegexTree.h"

IL2CPP::Il2CppClass* System::System::Text::RegularExpressions::RegexTree::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.Text.RegularExpressions", "RegexTree");
	return il2cppclass;
}
mscorlib::System::Type* System::System::Text::RegularExpressions::RegexTree::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::System::Text::RegularExpressions::RegexTree::_ctor(System::Text::RegularExpressions::RegexNode* root, mscorlib::System::Collections::Hashtable* caps, IL2CPP::Array<int32_t>* capnumlist, int32_t captop, mscorlib::System::Collections::Hashtable* capnames, IL2CPP::Array<mscorlib::System::String*>* capslist, System::Text::RegularExpressions::RegexOptions opts)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Text.RegularExpressions.RegexNode", "System.Collections.Hashtable", "System.Int32[]", "System.Int32", "System.Collections.Hashtable", "System.String[]", "System.Text.RegularExpressions.RegexOptions" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)root;
	params[1] = (intptr_t)caps;
	params[2] = (intptr_t)capnumlist;
	params[3] = (intptr_t)&captop;
	params[4] = (intptr_t)capnames;
	params[5] = (intptr_t)capslist;
	params[6] = (intptr_t)&opts;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
