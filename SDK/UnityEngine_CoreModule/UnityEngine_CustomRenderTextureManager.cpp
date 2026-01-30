#include "UnityEngine_CustomRenderTextureManager.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::CustomRenderTextureManager::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine", "CustomRenderTextureManager");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::CustomRenderTextureManager::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_CoreModule::UnityEngine::CustomRenderTextureManager::InvokeOnTextureLoaded_Internal(UnityEngine_CoreModule::UnityEngine::CustomRenderTexture* source)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InvokeOnTextureLoaded_Internal", std::vector<std::string> { "UnityEngine.CustomRenderTexture" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)source;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::CustomRenderTextureManager::InvokeOnTextureUnloaded_Internal(UnityEngine_CoreModule::UnityEngine::CustomRenderTexture* source)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InvokeOnTextureUnloaded_Internal", std::vector<std::string> { "UnityEngine.CustomRenderTexture" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)source;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
