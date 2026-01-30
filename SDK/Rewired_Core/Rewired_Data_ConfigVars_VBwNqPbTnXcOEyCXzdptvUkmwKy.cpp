#include "Rewired_Data_ConfigVars_VBwNqPbTnXcOEyCXzdptvUkmwKy.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::Data::ConfigVars_VBwNqPbTnXcOEyCXzdptvUkmwKy::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Rewired_Core::Rewired::Data::ConfigVars::GetIl2CppClass(), "VBwNqPbTnXcOEyCXzdptvUkmwKy");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::Data::ConfigVars_VBwNqPbTnXcOEyCXzdptvUkmwKy::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::Data::ConfigVars_VBwNqPbTnXcOEyCXzdptvUkmwKy::_ctor(mscorlib::System::Func_2<Rewired_Core::Rewired::Platforms::Platform, mscorlib::System::Object>* getDelegate, mscorlib::System::Action_2<Rewired_Core::Rewired::Platforms::Platform, mscorlib::System::Object>* setDelegate)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Func`2<Rewired.Platforms.Platform,System.Object>", "System.Action`2<Rewired.Platforms.Platform,System.Object>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)getDelegate;
	params[1] = (intptr_t)setDelegate;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
