#include "Rewired_UI_ControlMapper_ThemeSettings_SelectableSettings_Base.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_SelectableSettings_Base::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings::GetIl2CppClass(), "SelectableSettings_Base");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_SelectableSettings_Base::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_UI::UnityEngine::UI::Selectable_Transition Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_SelectableSettings_Base::get_transition()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_transition");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_UI::UnityEngine::UI::Selectable_Transition ret;
		std::memset(&ret, 0, sizeof(UnityEngine_UI::UnityEngine::UI::Selectable_Transition));
		return ret;
	}
	return static_cast<UnityEngine_UI::UnityEngine::UI::Selectable_Transition>(*(UnityEngine_UI::UnityEngine::UI::Selectable_Transition*)il2cpp_object_unbox(returnValue));
}
Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_CustomColorBlock Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_SelectableSettings_Base::get_selectableColors()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_selectableColors");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_CustomColorBlock ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_CustomColorBlock));
		return ret;
	}
	return static_cast<Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_CustomColorBlock>(*(Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_CustomColorBlock*)il2cpp_object_unbox(returnValue));
}
Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_CustomSpriteState Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_SelectableSettings_Base::get_spriteState()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_spriteState");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_CustomSpriteState ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_CustomSpriteState));
		return ret;
	}
	return static_cast<Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_CustomSpriteState>(*(Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_CustomSpriteState*)il2cpp_object_unbox(returnValue));
}
Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_CustomAnimationTriggers* Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_SelectableSettings_Base::get_animationTriggers()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_animationTriggers");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_CustomAnimationTriggers*)returnValue;
}
void Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_SelectableSettings_Base::Apply(UnityEngine_UI::UnityEngine::UI::Selectable* item)
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
void Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_SelectableSettings_Base::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
