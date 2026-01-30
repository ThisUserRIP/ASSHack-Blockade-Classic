#include "Facebook_Unity_Settings_FacebookSettings_UrlSchemes.h"

IL2CPP::Il2CppClass* Facebook_Unity_Settings::Facebook::Unity::Settings::FacebookSettings_UrlSchemes::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Facebook_Unity_Settings::Facebook::Unity::Settings::FacebookSettings::GetIl2CppClass(), "UrlSchemes");
	return il2cppclass;
}
mscorlib::System::Type* Facebook_Unity_Settings::Facebook::Unity::Settings::FacebookSettings_UrlSchemes::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Facebook_Unity_Settings::Facebook::Unity::Settings::FacebookSettings_UrlSchemes::_ctor(mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* schemes)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Collections.Generic.List`1<System.String>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)schemes;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* Facebook_Unity_Settings::Facebook::Unity::Settings::FacebookSettings_UrlSchemes::get_Schemes()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Schemes");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>*)returnValue;
}
void Facebook_Unity_Settings::Facebook::Unity::Settings::FacebookSettings_UrlSchemes::set_Schemes(mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Schemes", std::vector<std::string> { "System.Collections.Generic.List`1<System.String>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
