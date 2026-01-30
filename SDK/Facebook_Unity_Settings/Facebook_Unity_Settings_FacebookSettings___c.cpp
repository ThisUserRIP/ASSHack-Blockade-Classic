#include "Facebook_Unity_Settings_FacebookSettings___c.h"

IL2CPP::Il2CppClass* Facebook_Unity_Settings::Facebook::Unity::Settings::FacebookSettings___c::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Facebook_Unity_Settings::Facebook::Unity::Settings::FacebookSettings::GetIl2CppClass(), "<>c");
	return il2cppclass;
}
mscorlib::System::Type* Facebook_Unity_Settings::Facebook::Unity::Settings::FacebookSettings___c::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Facebook_Unity_Settings::Facebook::Unity::Settings::FacebookSettings___c::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity_Settings::Facebook::Unity::Settings::FacebookSettings___c::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity_Settings::Facebook::Unity::Settings::FacebookSettings___c::_SettingsChanged_b__80_0(Facebook_Unity_Settings::Facebook::Unity::Settings::FacebookSettings_OnChangeCallback* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<SettingsChanged>b__80_0", std::vector<std::string> { "Facebook.Unity.Settings.FacebookSettings/OnChangeCallback" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
