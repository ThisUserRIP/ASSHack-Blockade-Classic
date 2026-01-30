#include "UnityEngine_SceneManagement_SceneManager.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::SceneManagement::SceneManager::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine.SceneManagement", "SceneManager");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::SceneManagement::SceneManager::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
int32_t UnityEngine_CoreModule::UnityEngine::SceneManagement::SceneManager::get_sceneCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_sceneCount");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene UnityEngine_CoreModule::UnityEngine::SceneManagement::SceneManager::GetActiveScene()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetActiveScene");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene>(*(UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene UnityEngine_CoreModule::UnityEngine::SceneManagement::SceneManager::GetSceneByBuildIndex(int32_t buildIndex)
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
UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene UnityEngine_CoreModule::UnityEngine::SceneManagement::SceneManager::GetSceneAt(int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSceneAt", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&index;
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
UnityEngine_CoreModule::UnityEngine::AsyncOperation* UnityEngine_CoreModule::UnityEngine::SceneManagement::SceneManager::UnloadSceneAsyncInternal(UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene scene, UnityEngine_CoreModule::UnityEngine::SceneManagement::UnloadSceneOptions options)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnloadSceneAsyncInternal", std::vector<std::string> { "UnityEngine.SceneManagement.Scene", "UnityEngine.SceneManagement.UnloadSceneOptions" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&scene;
	params[1] = (intptr_t)&options;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::AsyncOperation*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::AsyncOperation* UnityEngine_CoreModule::UnityEngine::SceneManagement::SceneManager::LoadSceneAsyncNameIndexInternal(mscorlib::System::String* sceneName, int32_t sceneBuildIndex, UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneParameters parameters, bool mustCompleteNextFrame)
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
UnityEngine_CoreModule::UnityEngine::AsyncOperation* UnityEngine_CoreModule::UnityEngine::SceneManagement::SceneManager::UnloadSceneNameIndexInternal(mscorlib::System::String* sceneName, int32_t sceneBuildIndex, bool immediately, UnityEngine_CoreModule::UnityEngine::SceneManagement::UnloadSceneOptions options, bool& outSuccess)
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
UnityEngine_CoreModule::UnityEngine::AsyncOperation* UnityEngine_CoreModule::UnityEngine::SceneManagement::SceneManager::LoadFirstScene_Internal(bool async)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadFirstScene_Internal", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&async;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::AsyncOperation*)returnValue;
}
void UnityEngine_CoreModule::UnityEngine::SceneManagement::SceneManager::add_sceneLoaded(UnityEngine_CoreModule::UnityEngine::Events::UnityAction_2<UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene, UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneMode>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "add_sceneLoaded", std::vector<std::string> { "UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::SceneManagement::SceneManager::remove_sceneLoaded(UnityEngine_CoreModule::UnityEngine::Events::UnityAction_2<UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene, UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneMode>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "remove_sceneLoaded", std::vector<std::string> { "UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::SceneManagement::SceneManager::add_sceneUnloaded(UnityEngine_CoreModule::UnityEngine::Events::UnityAction_1<UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "add_sceneUnloaded", std::vector<std::string> { "UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::SceneManagement::SceneManager::remove_sceneUnloaded(UnityEngine_CoreModule::UnityEngine::Events::UnityAction_1<UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "remove_sceneUnloaded", std::vector<std::string> { "UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::SceneManagement::SceneManager::add_activeSceneChanged(UnityEngine_CoreModule::UnityEngine::Events::UnityAction_2<UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene, UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "add_activeSceneChanged", std::vector<std::string> { "UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::SceneManagement::SceneManager::remove_activeSceneChanged(UnityEngine_CoreModule::UnityEngine::Events::UnityAction_2<UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene, UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "remove_activeSceneChanged", std::vector<std::string> { "UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::SceneManagement::SceneManager::LoadScene(mscorlib::System::String* sceneName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadScene", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)sceneName;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene UnityEngine_CoreModule::UnityEngine::SceneManagement::SceneManager::LoadScene(mscorlib::System::String* sceneName, UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneParameters parameters)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadScene", std::vector<std::string> { "System.String", "UnityEngine.SceneManagement.LoadSceneParameters" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)sceneName;
	params[1] = (intptr_t)&parameters;
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
void UnityEngine_CoreModule::UnityEngine::SceneManagement::SceneManager::LoadScene(int32_t sceneBuildIndex, UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneMode mode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadScene", std::vector<std::string> { "System.Int32", "UnityEngine.SceneManagement.LoadSceneMode" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&sceneBuildIndex;
	params[1] = (intptr_t)&mode;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::SceneManagement::SceneManager::LoadScene(int32_t sceneBuildIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadScene", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&sceneBuildIndex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene UnityEngine_CoreModule::UnityEngine::SceneManagement::SceneManager::LoadScene(int32_t sceneBuildIndex, UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneParameters parameters)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadScene", std::vector<std::string> { "System.Int32", "UnityEngine.SceneManagement.LoadSceneParameters" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&sceneBuildIndex;
	params[1] = (intptr_t)&parameters;
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
UnityEngine_CoreModule::UnityEngine::AsyncOperation* UnityEngine_CoreModule::UnityEngine::SceneManagement::SceneManager::LoadSceneAsync(int32_t sceneBuildIndex, UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneMode mode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadSceneAsync", std::vector<std::string> { "System.Int32", "UnityEngine.SceneManagement.LoadSceneMode" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&sceneBuildIndex;
	params[1] = (intptr_t)&mode;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::AsyncOperation*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::AsyncOperation* UnityEngine_CoreModule::UnityEngine::SceneManagement::SceneManager::LoadSceneAsync(int32_t sceneBuildIndex, UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneParameters parameters)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadSceneAsync", std::vector<std::string> { "System.Int32", "UnityEngine.SceneManagement.LoadSceneParameters" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&sceneBuildIndex;
	params[1] = (intptr_t)&parameters;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::AsyncOperation*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::AsyncOperation* UnityEngine_CoreModule::UnityEngine::SceneManagement::SceneManager::LoadSceneAsync(mscorlib::System::String* sceneName, UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneMode mode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadSceneAsync", std::vector<std::string> { "System.String", "UnityEngine.SceneManagement.LoadSceneMode" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)sceneName;
	params[1] = (intptr_t)&mode;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::AsyncOperation*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::AsyncOperation* UnityEngine_CoreModule::UnityEngine::SceneManagement::SceneManager::LoadSceneAsync(mscorlib::System::String* sceneName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadSceneAsync", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)sceneName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::AsyncOperation*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::AsyncOperation* UnityEngine_CoreModule::UnityEngine::SceneManagement::SceneManager::LoadSceneAsync(mscorlib::System::String* sceneName, UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneParameters parameters)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadSceneAsync", std::vector<std::string> { "System.String", "UnityEngine.SceneManagement.LoadSceneParameters" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)sceneName;
	params[1] = (intptr_t)&parameters;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::AsyncOperation*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::AsyncOperation* UnityEngine_CoreModule::UnityEngine::SceneManagement::SceneManager::UnloadSceneAsync(int32_t sceneBuildIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnloadSceneAsync", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&sceneBuildIndex;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::AsyncOperation*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::AsyncOperation* UnityEngine_CoreModule::UnityEngine::SceneManagement::SceneManager::UnloadSceneAsync(mscorlib::System::String* sceneName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnloadSceneAsync", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)sceneName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::AsyncOperation*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::AsyncOperation* UnityEngine_CoreModule::UnityEngine::SceneManagement::SceneManager::UnloadSceneAsync(UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene scene)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnloadSceneAsync", std::vector<std::string> { "UnityEngine.SceneManagement.Scene" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&scene;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::AsyncOperation*)returnValue;
}
void UnityEngine_CoreModule::UnityEngine::SceneManagement::SceneManager::Internal_SceneLoaded(UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene scene, UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneMode mode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_SceneLoaded", std::vector<std::string> { "UnityEngine.SceneManagement.Scene", "UnityEngine.SceneManagement.LoadSceneMode" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&scene;
	params[1] = (intptr_t)&mode;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::SceneManagement::SceneManager::Internal_SceneUnloaded(UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene scene)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_SceneUnloaded", std::vector<std::string> { "UnityEngine.SceneManagement.Scene" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&scene;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::SceneManagement::SceneManager::Internal_ActiveSceneChanged(UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene previousActiveScene, UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene newActiveScene)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_ActiveSceneChanged", std::vector<std::string> { "UnityEngine.SceneManagement.Scene", "UnityEngine.SceneManagement.Scene" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&previousActiveScene;
	params[1] = (intptr_t)&newActiveScene;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::SceneManagement::SceneManager::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::SceneManagement::SceneManager::GetActiveScene_Injected(UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetActiveScene_Injected", std::vector<std::string> { "UnityEngine.SceneManagement.Scene&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::SceneManagement::SceneManager::GetSceneAt_Injected(int32_t index, UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSceneAt_Injected", std::vector<std::string> { "System.Int32", "UnityEngine.SceneManagement.Scene&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&index;
	params[1] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::AsyncOperation* UnityEngine_CoreModule::UnityEngine::SceneManagement::SceneManager::UnloadSceneAsyncInternal_Injected(UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene& scene, UnityEngine_CoreModule::UnityEngine::SceneManagement::UnloadSceneOptions options)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnloadSceneAsyncInternal_Injected", std::vector<std::string> { "UnityEngine.SceneManagement.Scene&", "UnityEngine.SceneManagement.UnloadSceneOptions" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&scene;
	params[1] = (intptr_t)&options;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::AsyncOperation*)returnValue;
}
