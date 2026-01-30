#include "UnityEngine_GUIGridSizer.h"

IL2CPP::Il2CppClass* UnityEngine_IMGUIModule::UnityEngine::GUIGridSizer::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.IMGUIModule.dll", "UnityEngine", "GUIGridSizer");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_IMGUIModule::UnityEngine::GUIGridSizer::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_CoreModule::UnityEngine::Rect UnityEngine_IMGUIModule::UnityEngine::GUIGridSizer::GetRect(IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUIContent*>* contents, int32_t xCount, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetRect", std::vector<std::string> { "UnityEngine.GUIContent[]", "System.Int32", "UnityEngine.GUIStyle", "UnityEngine.GUILayoutOption[]" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)contents;
	params[1] = (intptr_t)&xCount;
	params[2] = (intptr_t)style;
	params[3] = (intptr_t)options;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Rect ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Rect));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Rect>(*(UnityEngine_CoreModule::UnityEngine::Rect*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_IMGUIModule::UnityEngine::GUIGridSizer::_ctor(IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUIContent*>* contents, int32_t xCount, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* buttonStyle, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.GUIContent[]", "System.Int32", "UnityEngine.GUIStyle", "UnityEngine.GUILayoutOption[]" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)contents;
	params[1] = (intptr_t)&xCount;
	params[2] = (intptr_t)buttonStyle;
	params[3] = (intptr_t)options;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t UnityEngine_IMGUIModule::UnityEngine::GUIGridSizer::get_rows()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_rows");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
