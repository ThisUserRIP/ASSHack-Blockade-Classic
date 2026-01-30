#include "Rewired_UI_ControlMapper_ThemeSettings_SliderSettings.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_SliderSettings::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings::GetIl2CppClass(), "SliderSettings");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_SliderSettings::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_ImageSettings* Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_SliderSettings::get_handleImageSettings()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_handleImageSettings");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_ImageSettings*)returnValue;
}
Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_ImageSettings* Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_SliderSettings::get_fillImageSettings()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_fillImageSettings");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_ImageSettings*)returnValue;
}
Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_ImageSettings* Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_SliderSettings::get_backgroundImageSettings()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_backgroundImageSettings");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_ImageSettings*)returnValue;
}
void Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_SliderSettings::Apply(UnityEngine_UI::UnityEngine::UI::Slider* item)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Apply", std::vector<std::string> { "UnityEngine.UI.Slider" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)item;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_SliderSettings::Apply(UnityEngine_UI::UnityEngine::UI::Selectable* item)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Apply", std::vector<std::string> { "UnityEngine.UI.Selectable" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)item;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_SliderSettings::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
