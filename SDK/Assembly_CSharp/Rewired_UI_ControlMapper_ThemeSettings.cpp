#include "Rewired_UI_ControlMapper_ThemeSettings.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "Rewired.UI.ControlMapper", "ThemeSettings");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings::Apply(IL2CPP::Array<Assembly_CSharp::Rewired::UI::ControlMapper::ThemedElement_ElementInfo*>* elementInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Apply", std::vector<std::string> { "Rewired.UI.ControlMapper.ThemedElement/ElementInfo[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)elementInfo;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings::Apply(mscorlib::System::String* themeClass, UnityEngine_CoreModule::UnityEngine::Component* component)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Apply", std::vector<std::string> { "System.String", "UnityEngine.Component" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)themeClass;
	params[1] = (intptr_t)component;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings::Apply(mscorlib::System::String* themeClass, UnityEngine_UI::UnityEngine::UI::Selectable* item)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Apply", std::vector<std::string> { "System.String", "UnityEngine.UI.Selectable" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)themeClass;
	params[1] = (intptr_t)item;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings::Apply(mscorlib::System::String* themeClass, UnityEngine_UI::UnityEngine::UI::Image* item)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Apply", std::vector<std::string> { "System.String", "UnityEngine.UI.Image" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)themeClass;
	params[1] = (intptr_t)item;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings::Apply(mscorlib::System::String* themeClass, Unity_TextMeshPro::TMPro::TMP_Text* item)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Apply", std::vector<std::string> { "System.String", "TMPro.TMP_Text" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)themeClass;
	params[1] = (intptr_t)item;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings::Apply(mscorlib::System::String* themeClass, Assembly_CSharp::Rewired::UI::ControlMapper::UIImageHelper* item)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Apply", std::vector<std::string> { "System.String", "Rewired.UI.ControlMapper.UIImageHelper" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)themeClass;
	params[1] = (intptr_t)item;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Unity_TextMeshPro::TMPro::FontStyles Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings::GetFontStyle(Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_FontStyleOverride style)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFontStyle", std::vector<std::string> { "Rewired.UI.ControlMapper.ThemeSettings/FontStyleOverride" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&style;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Unity_TextMeshPro::TMPro::FontStyles ret;
		std::memset(&ret, 0, sizeof(Unity_TextMeshPro::TMPro::FontStyles));
		return ret;
	}
	return static_cast<Unity_TextMeshPro::TMPro::FontStyles>(*(Unity_TextMeshPro::TMPro::FontStyles*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
