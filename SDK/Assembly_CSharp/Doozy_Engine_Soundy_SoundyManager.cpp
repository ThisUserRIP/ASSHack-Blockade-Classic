#include "Doozy_Engine_Soundy_SoundyManager.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Doozy::Engine::Soundy::SoundyManager::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "Doozy.Engine.Soundy", "SoundyManager");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Doozy::Engine::Soundy::SoundyManager::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::Doozy::Engine::Soundy::SoundyManager::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::Doozy::Engine::Soundy::SoundyManager* Assembly_CSharp::Doozy::Engine::Soundy::SoundyManager::get_Instance()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Instance");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::Soundy::SoundyManager*)returnValue;
}
Assembly_CSharp::Doozy::Engine::Soundy::SoundyPooler* Assembly_CSharp::Doozy::Engine::Soundy::SoundyManager::get_Pooler()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Pooler");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::Soundy::SoundyPooler*)returnValue;
}
Assembly_CSharp::Doozy::Engine::Soundy::SoundyDatabase* Assembly_CSharp::Doozy::Engine::Soundy::SoundyManager::get_Database()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Database");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::Soundy::SoundyDatabase*)returnValue;
}
bool Assembly_CSharp::Doozy::Engine::Soundy::SoundyManager::get_DebugComponent()
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
void Assembly_CSharp::Doozy::Engine::Soundy::SoundyManager::Awake()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Awake");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::Doozy::Engine::Soundy::SoundyManager* Assembly_CSharp::Doozy::Engine::Soundy::SoundyManager::AddToScene(bool selectGameObjectAfterCreation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddToScene", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&selectGameObjectAfterCreation;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::Soundy::SoundyManager*)returnValue;
}
Assembly_CSharp::Doozy::Engine::Soundy::SoundyController* Assembly_CSharp::Doozy::Engine::Soundy::SoundyManager::GetController()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetController");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::Soundy::SoundyController*)returnValue;
}
mscorlib::System::String* Assembly_CSharp::Doozy::Engine::Soundy::SoundyManager::GetSoundDatabaseFilename(mscorlib::System::String* databaseName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSoundDatabaseFilename", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)databaseName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void Assembly_CSharp::Doozy::Engine::Soundy::SoundyManager::Init()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Init");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::Soundy::SoundyManager::KillAllControllers()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "KillAllControllers");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::Soundy::SoundyManager::MuteAllControllers()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MuteAllControllers");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::Soundy::SoundyManager::MuteAllSounds()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MuteAllSounds");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::Soundy::SoundyManager::PauseAllControllers()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PauseAllControllers");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::Soundy::SoundyManager::PauseAllSounds()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PauseAllSounds");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::Doozy::Engine::Soundy::SoundyController* Assembly_CSharp::Doozy::Engine::Soundy::SoundyManager::Play(mscorlib::System::String* databaseName, mscorlib::System::String* soundName, UnityEngine_CoreModule::UnityEngine::Vector3 position)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Play", std::vector<std::string> { "System.String", "System.String", "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)databaseName;
	params[1] = (intptr_t)soundName;
	params[2] = (intptr_t)&position;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::Soundy::SoundyController*)returnValue;
}
Assembly_CSharp::Doozy::Engine::Soundy::SoundyController* Assembly_CSharp::Doozy::Engine::Soundy::SoundyManager::Play(UnityEngine_AudioModule::UnityEngine::AudioClip* audioClip, UnityEngine_CoreModule::UnityEngine::Vector3 position)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Play", std::vector<std::string> { "UnityEngine.AudioClip", "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)audioClip;
	params[1] = (intptr_t)&position;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::Soundy::SoundyController*)returnValue;
}
Assembly_CSharp::Doozy::Engine::Soundy::SoundyController* Assembly_CSharp::Doozy::Engine::Soundy::SoundyManager::Play(mscorlib::System::String* databaseName, mscorlib::System::String* soundName, UnityEngine_CoreModule::UnityEngine::Transform* followTarget)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Play", std::vector<std::string> { "System.String", "System.String", "UnityEngine.Transform" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)databaseName;
	params[1] = (intptr_t)soundName;
	params[2] = (intptr_t)followTarget;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::Soundy::SoundyController*)returnValue;
}
Assembly_CSharp::Doozy::Engine::Soundy::SoundyController* Assembly_CSharp::Doozy::Engine::Soundy::SoundyManager::Play(UnityEngine_AudioModule::UnityEngine::AudioClip* audioClip, UnityEngine_CoreModule::UnityEngine::Transform* followTarget)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Play", std::vector<std::string> { "UnityEngine.AudioClip", "UnityEngine.Transform" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)audioClip;
	params[1] = (intptr_t)followTarget;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::Soundy::SoundyController*)returnValue;
}
Assembly_CSharp::Doozy::Engine::Soundy::SoundyController* Assembly_CSharp::Doozy::Engine::Soundy::SoundyManager::Play(mscorlib::System::String* databaseName, mscorlib::System::String* soundName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Play", std::vector<std::string> { "System.String", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)databaseName;
	params[1] = (intptr_t)soundName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::Soundy::SoundyController*)returnValue;
}
Assembly_CSharp::Doozy::Engine::Soundy::SoundyController* Assembly_CSharp::Doozy::Engine::Soundy::SoundyManager::Play(UnityEngine_AudioModule::UnityEngine::AudioClip* audioClip)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Play", std::vector<std::string> { "UnityEngine.AudioClip" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)audioClip;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::Soundy::SoundyController*)returnValue;
}
Assembly_CSharp::Doozy::Engine::Soundy::SoundyController* Assembly_CSharp::Doozy::Engine::Soundy::SoundyManager::Play(UnityEngine_AudioModule::UnityEngine::AudioClip* audioClip, UnityEngine_AudioModule::UnityEngine::Audio::AudioMixerGroup* outputAudioMixerGroup, UnityEngine_CoreModule::UnityEngine::Vector3 position, float volume, float pitch, bool loop, float spatialBlend)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Play", std::vector<std::string> { "UnityEngine.AudioClip", "UnityEngine.Audio.AudioMixerGroup", "UnityEngine.Vector3", "System.Single", "System.Single", "System.Boolean", "System.Single" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)audioClip;
	params[1] = (intptr_t)outputAudioMixerGroup;
	params[2] = (intptr_t)&position;
	params[3] = (intptr_t)&volume;
	params[4] = (intptr_t)&pitch;
	params[5] = (intptr_t)&loop;
	params[6] = (intptr_t)&spatialBlend;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::Soundy::SoundyController*)returnValue;
}
Assembly_CSharp::Doozy::Engine::Soundy::SoundyController* Assembly_CSharp::Doozy::Engine::Soundy::SoundyManager::Play(UnityEngine_AudioModule::UnityEngine::AudioClip* audioClip, UnityEngine_AudioModule::UnityEngine::Audio::AudioMixerGroup* outputAudioMixerGroup, UnityEngine_CoreModule::UnityEngine::Transform* followTarget, float volume, float pitch, bool loop, float spatialBlend)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Play", std::vector<std::string> { "UnityEngine.AudioClip", "UnityEngine.Audio.AudioMixerGroup", "UnityEngine.Transform", "System.Single", "System.Single", "System.Boolean", "System.Single" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)audioClip;
	params[1] = (intptr_t)outputAudioMixerGroup;
	params[2] = (intptr_t)followTarget;
	params[3] = (intptr_t)&volume;
	params[4] = (intptr_t)&pitch;
	params[5] = (intptr_t)&loop;
	params[6] = (intptr_t)&spatialBlend;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::Soundy::SoundyController*)returnValue;
}
Assembly_CSharp::Doozy::Engine::Soundy::SoundyController* Assembly_CSharp::Doozy::Engine::Soundy::SoundyManager::Play(Assembly_CSharp::Doozy::Engine::Soundy::SoundyData* data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Play", std::vector<std::string> { "Doozy.Engine.Soundy.SoundyData" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)data;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::Soundy::SoundyController*)returnValue;
}
void Assembly_CSharp::Doozy::Engine::Soundy::SoundyManager::StopAllControllers()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StopAllControllers");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::Soundy::SoundyManager::StopAllSounds()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StopAllSounds");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::Soundy::SoundyManager::UnmuteAllControllers()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnmuteAllControllers");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::Soundy::SoundyManager::UnmuteAllSounds()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnmuteAllSounds");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::Soundy::SoundyManager::UnpauseAllControllers()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnpauseAllControllers");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::Soundy::SoundyManager::UnpauseAllSounds()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnpauseAllSounds");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::Soundy::SoundyManager::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
