#include "UnityEngine_GUILayout_LayoutedWindow.h"

IL2CPP::Il2CppClass* UnityEngine_IMGUIModule::UnityEngine::GUILayout_LayoutedWindow::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(UnityEngine_IMGUIModule::UnityEngine::GUILayout::GetIl2CppClass(), "LayoutedWindow");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_IMGUIModule::UnityEngine::GUILayout_LayoutedWindow::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_IMGUIModule::UnityEngine::GUILayout_LayoutedWindow::_ctor(UnityEngine_IMGUIModule::UnityEngine::GUI_WindowFunction* f, UnityEngine_CoreModule::UnityEngine::Rect screenRect, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.GUI/WindowFunction", "UnityEngine.Rect", "UnityEngine.GUIContent", "UnityEngine.GUILayoutOption[]", "UnityEngine.GUIStyle" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)f;
	params[1] = (intptr_t)&screenRect;
	params[2] = (intptr_t)content;
	params[3] = (intptr_t)options;
	params[4] = (intptr_t)style;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_IMGUIModule::UnityEngine::GUILayout_LayoutedWindow::DoWindow(int32_t windowID)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoWindow", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&windowID;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
