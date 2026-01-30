#include "Rewired_Integration_UnityUI_RewiredStandaloneInputModule_PlayerSetting.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Rewired::Integration::UnityUI::RewiredStandaloneInputModule_PlayerSetting::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Assembly_CSharp::Rewired::Integration::UnityUI::RewiredStandaloneInputModule::GetIl2CppClass(), "PlayerSetting");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Rewired::Integration::UnityUI::RewiredStandaloneInputModule_PlayerSetting::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::Rewired::Integration::UnityUI::RewiredStandaloneInputModule_PlayerSetting::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::Integration::UnityUI::RewiredStandaloneInputModule_PlayerSetting::_ctor(Assembly_CSharp::Rewired::Integration::UnityUI::RewiredStandaloneInputModule_PlayerSetting* other)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.Integration.UnityUI.RewiredStandaloneInputModule/PlayerSetting" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)other;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::Rewired::Integration::UnityUI::RewiredStandaloneInputModule_PlayerSetting* Assembly_CSharp::Rewired::Integration::UnityUI::RewiredStandaloneInputModule_PlayerSetting::Clone()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Clone");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Rewired::Integration::UnityUI::RewiredStandaloneInputModule_PlayerSetting*)returnValue;
}
