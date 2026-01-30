#include "Rewired_UI_ControlMapper_UIControlSet.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Rewired::UI::ControlMapper::UIControlSet::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "Rewired.UI.ControlMapper", "UIControlSet");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Rewired::UI::ControlMapper::UIControlSet::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, Assembly_CSharp::Rewired::UI::ControlMapper::UIControl>* Assembly_CSharp::Rewired::UI::ControlMapper::UIControlSet::get_controls()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_controls");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, Assembly_CSharp::Rewired::UI::ControlMapper::UIControl>*)returnValue;
}
void Assembly_CSharp::Rewired::UI::ControlMapper::UIControlSet::SetTitle(mscorlib::System::String* text)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetTitle", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)text;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::Rewired::UI::ControlMapper::UISliderControl* Assembly_CSharp::Rewired::UI::ControlMapper::UIControlSet::CreateSlider(UnityEngine_CoreModule::UnityEngine::GameObject* prefab, UnityEngine_CoreModule::UnityEngine::Sprite* icon, float minValue, float maxValue, mscorlib::System::Action_2<mscorlib::System::Int32, mscorlib::System::Single>* valueChangedCallback, mscorlib::System::Action_1<mscorlib::System::Int32>* cancelCallback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateSlider", std::vector<std::string> { "UnityEngine.GameObject", "UnityEngine.Sprite", "System.Single", "System.Single", "System.Action`2<System.Int32,System.Single>", "System.Action`1<System.Int32>" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)prefab;
	params[1] = (intptr_t)icon;
	params[2] = (intptr_t)&minValue;
	params[3] = (intptr_t)&maxValue;
	params[4] = (intptr_t)valueChangedCallback;
	params[5] = (intptr_t)cancelCallback;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Rewired::UI::ControlMapper::UISliderControl*)returnValue;
}
void Assembly_CSharp::Rewired::UI::ControlMapper::UIControlSet::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
