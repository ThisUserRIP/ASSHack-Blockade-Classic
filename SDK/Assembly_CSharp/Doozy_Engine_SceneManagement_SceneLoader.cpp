#include "Doozy_Engine_SceneManagement_SceneLoader.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "Doozy.Engine.SceneManagement", "SceneLoader");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_CoreModule::UnityEngine::AsyncOperation* Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader::get_CurrentAsyncOperation()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_CurrentAsyncOperation");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::AsyncOperation*)returnValue;
}
void Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader::set_CurrentAsyncOperation(UnityEngine_CoreModule::UnityEngine::AsyncOperation* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_CurrentAsyncOperation", std::vector<std::string> { "UnityEngine.AsyncOperation" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
float Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader::get_InverseProgress()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_InverseProgress");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
float Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader::get_Progress()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Progress");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader::set_Progress(float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Progress", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader::get_DebugComponent()
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
void Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader::Reset()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Reset");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader::Awake()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Awake");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader::OnEnable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnEnable");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader::OnDestroy()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnDestroy");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader::Update()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Update");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader::ActivateLoadedScene()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ActivateLoadedScene");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader::LoadSceneAsync()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadSceneAsync");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::Doozy::Engine::Progress::Progressor* Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader::LoadSceneAsync(int32_t sceneBuildIndex, UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneMode mode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadSceneAsync", std::vector<std::string> { "System.Int32", "UnityEngine.SceneManagement.LoadSceneMode" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&sceneBuildIndex;
	params[1] = (intptr_t)&mode;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::Progress::Progressor*)returnValue;
}
Assembly_CSharp::Doozy::Engine::Progress::Progressor* Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader::LoadSceneAsync(mscorlib::System::String* sceneName, UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneMode mode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadSceneAsync", std::vector<std::string> { "System.String", "UnityEngine.SceneManagement.LoadSceneMode" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)sceneName;
	params[1] = (intptr_t)&mode;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::Progress::Progressor*)returnValue;
}
void Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader::LoadSceneAsyncAdditive(int32_t sceneBuildIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadSceneAsyncAdditive", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&sceneBuildIndex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader::LoadSceneAsyncAdditive(mscorlib::System::String* sceneName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadSceneAsyncAdditive", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)sceneName;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader::LoadSceneAsyncSingle(int32_t sceneBuildIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadSceneAsyncSingle", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&sceneBuildIndex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader::LoadSceneAsyncSingle(mscorlib::System::String* sceneName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadSceneAsyncSingle", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)sceneName;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader* Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader::SetAllowSceneActivation(bool allowSceneActivation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetAllowSceneActivation", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&allowSceneActivation;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader*)returnValue;
}
Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader* Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader::SetLoadSceneBy(Assembly_CSharp::Doozy::Engine::SceneManagement::GetSceneBy getSceneBy)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetLoadSceneBy", std::vector<std::string> { "Doozy.Engine.SceneManagement.GetSceneBy" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&getSceneBy;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader*)returnValue;
}
Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader* Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader::SetLoadSceneMode(UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneMode loadSceneMode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetLoadSceneMode", std::vector<std::string> { "UnityEngine.SceneManagement.LoadSceneMode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&loadSceneMode;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader*)returnValue;
}
Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader* Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader::SetProgressor(Assembly_CSharp::Doozy::Engine::Progress::Progressor* progressor)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetProgressor", std::vector<std::string> { "Doozy.Engine.Progress.Progressor" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)progressor;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader*)returnValue;
}
Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader* Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader::SetSceneActivationDelay(float sceneActivationDelay)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetSceneActivationDelay", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&sceneActivationDelay;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader*)returnValue;
}
Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader* Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader::SetSceneBuildIndex(int32_t sceneBuildIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetSceneBuildIndex", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&sceneBuildIndex;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader*)returnValue;
}
Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader* Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader::SetSceneName(mscorlib::System::String* sceneName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetSceneName", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)sceneName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader*)returnValue;
}
Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader* Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader::SetSelfDestructAfterSceneLoaded(bool selfDestruct)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetSelfDestructAfterSceneLoaded", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&selfDestruct;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader*)returnValue;
}
void Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader::ResetProgress()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ResetProgress");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader::StartSceneLoad()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StartSceneLoad");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::IEnumerator* Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader::AsynchronousLoad(mscorlib::System::String* sceneName, UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneMode mode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AsynchronousLoad", std::vector<std::string> { "System.String", "UnityEngine.SceneManagement.LoadSceneMode" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)sceneName;
	params[1] = (intptr_t)&mode;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::IEnumerator*)returnValue;
}
mscorlib::System::Collections::IEnumerator* Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader::AsynchronousLoad(int32_t sceneBuildIndex, UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneMode mode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AsynchronousLoad", std::vector<std::string> { "System.Int32", "UnityEngine.SceneManagement.LoadSceneMode" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&sceneBuildIndex;
	params[1] = (intptr_t)&mode;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::IEnumerator*)returnValue;
}
mscorlib::System::Collections::IEnumerator* Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader::SelfDestruct()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SelfDestruct");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::IEnumerator*)returnValue;
}
void Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader::ActivateLoadedScenes()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ActivateLoadedScenes");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader* Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader::GetLoader(UnityEngine_CoreModule::UnityEngine::Transform* parent)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetLoader", std::vector<std::string> { "UnityEngine.Transform" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)parent;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader*)returnValue;
}
Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader* Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader::AddToScene(bool selectGameObjectAfterCreation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddToScene", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&selectGameObjectAfterCreation;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader*)returnValue;
}
void Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader::RemoveNullReferencesFromDatabase()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveNullReferencesFromDatabase");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
