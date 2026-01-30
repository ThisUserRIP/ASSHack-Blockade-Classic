#include "Rewired_UI_ControlMapper_ControlMapper_GUIButton.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_GUIButton::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper::GetIl2CppClass(), "GUIButton");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_GUIButton::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_UI::UnityEngine::UI::Button* Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_GUIButton::get_button()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_button");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UI::UnityEngine::UI::Button*)returnValue;
}
Assembly_CSharp::Rewired::UI::ControlMapper::ButtonInfo* Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_GUIButton::get_buttonInfo()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_buttonInfo");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Rewired::UI::ControlMapper::ButtonInfo*)returnValue;
}
void Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_GUIButton::_ctor(UnityEngine_CoreModule::UnityEngine::GameObject* gameObject)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.GameObject" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)gameObject;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_GUIButton::_ctor(UnityEngine_UI::UnityEngine::UI::Button* button, Unity_TextMeshPro::TMPro::TMP_Text* label)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.UI.Button", "TMPro.TMP_Text" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)button;
	params[1] = (intptr_t)label;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_GUIButton::SetButtonInfoData(mscorlib::System::String* identifier, int32_t intData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetButtonInfoData", std::vector<std::string> { "System.String", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)identifier;
	params[1] = (intptr_t)&intData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_GUIButton::SetOnClickCallback(mscorlib::System::Action_1<Assembly_CSharp::Rewired::UI::ControlMapper::ButtonInfo>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetOnClickCallback", std::vector<std::string> { "System.Action`1<Rewired.UI.ControlMapper.ButtonInfo>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
