#include "Doozy_Engine_SceneManagement_SceneDirector.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Doozy::Engine::SceneManagement::SceneDirector::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "Doozy.Engine.SceneManagement", "SceneDirector");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Doozy::Engine::SceneManagement::SceneDirector::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::Doozy::Engine::SceneManagement::SceneDirector::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::Doozy::Engine::SceneManagement::SceneDirector* Assembly_CSharp::Doozy::Engine::SceneManagement::SceneDirector::get_Instance()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Instance");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::SceneManagement::SceneDirector*)returnValue;
}
bool Assembly_CSharp::Doozy::Engine::SceneManagement::SceneDirector::get_ApplicationIsQuitting()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ApplicationIsQuitting");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::Doozy::Engine::SceneManagement::SceneDirector::set_ApplicationIsQuitting(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_ApplicationIsQuitting", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp::Doozy::Engine::SceneManagement::SceneDirector::get_DebugComponent()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_DebugComponent");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::Doozy::Engine::SceneManagement::SceneDirector::Awake()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Awake");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::SceneManagement::SceneDirector::OnEnable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnEnable");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::SceneManagement::SceneDirector::OnDisable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnDisable");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::SceneManagement::SceneDirector::OnApplicationQuit()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnApplicationQuit");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::SceneManagement::SceneDirector::ActiveSceneChanged(UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene current, UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene next)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ActiveSceneChanged", std::vector<std::string> { "UnityEngine.SceneManagement.Scene", "UnityEngine.SceneManagement.Scene" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&current;
	params[1] = (intptr_t)&next;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::SceneManagement::SceneDirector::SceneLoaded(UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene scene, UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneMode mode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SceneLoaded", std::vector<std::string> { "UnityEngine.SceneManagement.Scene", "UnityEngine.SceneManagement.LoadSceneMode" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&scene;
	params[1] = (intptr_t)&mode;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::SceneManagement::SceneDirector::SceneUnloaded(UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene unloadedScene)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SceneUnloaded", std::vector<std::string> { "UnityEngine.SceneManagement.Scene" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&unloadedScene;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader* Assembly_CSharp::Doozy::Engine::SceneManagement::SceneDirector::LoadSceneAsync(int32_t sceneBuildIndex, UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneMode loadSceneMode, Assembly_CSharp::Doozy::Engine::Progress::Progressor* progressor)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadSceneAsync", std::vector<std::string> { "System.Int32", "UnityEngine.SceneManagement.LoadSceneMode", "Doozy.Engine.Progress.Progressor" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&sceneBuildIndex;
	params[1] = (intptr_t)&loadSceneMode;
	params[2] = (intptr_t)progressor;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader*)returnValue;
}
Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader* Assembly_CSharp::Doozy::Engine::SceneManagement::SceneDirector::LoadSceneAsync(mscorlib::System::String* sceneName, UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneMode loadSceneMode, Assembly_CSharp::Doozy::Engine::Progress::Progressor* progressor)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadSceneAsync", std::vector<std::string> { "System.String", "UnityEngine.SceneManagement.LoadSceneMode", "Doozy.Engine.Progress.Progressor" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)sceneName;
	params[1] = (intptr_t)&loadSceneMode;
	params[2] = (intptr_t)progressor;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::AsyncOperation* Assembly_CSharp::Doozy::Engine::SceneManagement::SceneDirector::UnloadSceneAsync(UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene scene)
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
UnityEngine_CoreModule::UnityEngine::AsyncOperation* Assembly_CSharp::Doozy::Engine::SceneManagement::SceneDirector::UnloadSceneAsync(int32_t sceneBuildIndex)
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
UnityEngine_CoreModule::UnityEngine::AsyncOperation* Assembly_CSharp::Doozy::Engine::SceneManagement::SceneDirector::UnloadSceneAsync(mscorlib::System::String* sceneName)
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
Assembly_CSharp::Doozy::Engine::SceneManagement::SceneDirector* Assembly_CSharp::Doozy::Engine::SceneManagement::SceneDirector::AddToScene(bool selectGameObjectAfterCreation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddToScene", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&selectGameObjectAfterCreation;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::SceneManagement::SceneDirector*)returnValue;
}
