#include "Rewired_UI_ControlMapper_UISelectionUtility.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Rewired::UI::ControlMapper::UISelectionUtility::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "Rewired.UI.ControlMapper", "UISelectionUtility");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Rewired::UI::ControlMapper::UISelectionUtility::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_UI::UnityEngine::UI::Selectable* Assembly_CSharp::Rewired::UI::ControlMapper::UISelectionUtility::FindNextSelectable(UnityEngine_UI::UnityEngine::UI::Selectable* selectable, UnityEngine_CoreModule::UnityEngine::Transform* transform, UnityEngine_CoreModule::UnityEngine::Vector3 direction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindNextSelectable", std::vector<std::string> { "UnityEngine.UI.Selectable", "UnityEngine.Transform", "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)selectable;
	params[1] = (intptr_t)transform;
	params[2] = (intptr_t)&direction;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UI::UnityEngine::UI::Selectable*)returnValue;
}
void Assembly_CSharp::Rewired::UI::ControlMapper::UISelectionUtility::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
