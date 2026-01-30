#include "UnityEngine_SceneManagement_SceneManagerAPIInternal.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::SceneManagement::SceneManagerAPIInternal::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine.SceneManagement", "SceneManagerAPIInternal");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::SceneManagement::SceneManagerAPIInternal::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene UnityEngine_CoreModule::UnityEngine::SceneManagement::SceneManagerAPIInternal::GetSceneByBuildIndex(int32_t buildIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSceneByBuildIndex", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&buildIndex;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene>(*(UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::AsyncOperation* UnityEngine_CoreModule::UnityEngine::SceneManagement::SceneManagerAPIInternal::LoadSceneAsyncNameIndexInternal(mscorlib::System::String* sceneName, int32_t sceneBuildIndex, UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneParameters parameters, bool mustCompleteNextFrame)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadSceneAsyncNameIndexInternal", std::vector<std::string> { "System.String", "System.Int32", "UnityEngine.SceneManagement.LoadSceneParameters", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)sceneName;
	params[1] = (intptr_t)&sceneBuildIndex;
	params[2] = (intptr_t)&parameters;
	params[3] = (intptr_t)&mustCompleteNextFrame;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::AsyncOperation*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::AsyncOperation* UnityEngine_CoreModule::UnityEngine::SceneManagement::SceneManagerAPIInternal::UnloadSceneNameIndexInternal(mscorlib::System::String* sceneName, int32_t sceneBuildIndex, bool immediately, UnityEngine_CoreModule::UnityEngine::SceneManagement::UnloadSceneOptions options, bool& outSuccess)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnloadSceneNameIndexInternal", std::vector<std::string> { "System.String", "System.Int32", "System.Boolean", "UnityEngine.SceneManagement.UnloadSceneOptions", "System.Boolean&" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)sceneName;
	params[1] = (intptr_t)&sceneBuildIndex;
	params[2] = (intptr_t)&immediately;
	params[3] = (intptr_t)&options;
	params[4] = (intptr_t)&outSuccess;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::AsyncOperation*)returnValue;
}
void UnityEngine_CoreModule::UnityEngine::SceneManagement::SceneManagerAPIInternal::GetSceneByBuildIndex_Injected(int32_t buildIndex, UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSceneByBuildIndex_Injected", std::vector<std::string> { "System.Int32", "UnityEngine.SceneManagement.Scene&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&buildIndex;
	params[1] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::AsyncOperation* UnityEngine_CoreModule::UnityEngine::SceneManagement::SceneManagerAPIInternal::LoadSceneAsyncNameIndexInternal_Injected(mscorlib::System::String* sceneName, int32_t sceneBuildIndex, UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneParameters& parameters, bool mustCompleteNextFrame)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadSceneAsyncNameIndexInternal_Injected", std::vector<std::string> { "System.String", "System.Int32", "UnityEngine.SceneManagement.LoadSceneParameters&", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)sceneName;
	params[1] = (intptr_t)&sceneBuildIndex;
	params[2] = (intptr_t)&parameters;
	params[3] = (intptr_t)&mustCompleteNextFrame;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::AsyncOperation*)returnValue;
}
