#include "UnityEngine_Experimental_Rendering_ScriptableRuntimeReflectionSystemSettings.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine.Experimental.Rendering", "ScriptableRuntimeReflectionSystemSettings");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings::set_Internal_ScriptableRuntimeReflectionSystemSettings_system(UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Internal_ScriptableRuntimeReflectionSystemSettings_system", std::vector<std::string> { "UnityEngine.Experimental.Rendering.IScriptableRuntimeReflectionSystem" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper* UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings::get_Internal_ScriptableRuntimeReflectionSystemSettings_instance()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Internal_ScriptableRuntimeReflectionSystemSettings_instance");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper*)returnValue;
}
void UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings::ScriptingDirtyReflectionSystemInstance()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ScriptingDirtyReflectionSystemInstance");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
