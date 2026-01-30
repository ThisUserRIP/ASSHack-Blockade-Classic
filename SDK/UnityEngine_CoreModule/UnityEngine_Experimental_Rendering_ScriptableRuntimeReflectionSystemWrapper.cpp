#include "UnityEngine_Experimental_Rendering_ScriptableRuntimeReflectionSystemWrapper.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine.Experimental.Rendering", "ScriptableRuntimeReflectionSystemWrapper");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem* UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper::get_implementation()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_implementation");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem*)returnValue;
}
void UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper::set_implementation(UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_implementation", std::vector<std::string> { "UnityEngine.Experimental.Rendering.IScriptableRuntimeReflectionSystem" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper::Internal_ScriptableRuntimeReflectionSystemWrapper_TickRealtimeProbes(bool& result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_ScriptableRuntimeReflectionSystemWrapper_TickRealtimeProbes", std::vector<std::string> { "System.Boolean&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&result;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
