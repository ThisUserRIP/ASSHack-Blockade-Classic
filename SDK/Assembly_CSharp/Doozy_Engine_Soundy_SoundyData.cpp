#include "Doozy_Engine_Soundy_SoundyData.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Doozy::Engine::Soundy::SoundyData::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "Doozy.Engine.Soundy", "SoundyData");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Doozy::Engine::Soundy::SoundyData::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::Doozy::Engine::Soundy::SoundyData::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::Doozy::Engine::Soundy::SoundGroupData* Assembly_CSharp::Doozy::Engine::Soundy::SoundyData::GetAudioData()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAudioData");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::Soundy::SoundGroupData*)returnValue;
}
void Assembly_CSharp::Doozy::Engine::Soundy::SoundyData::Reset()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Reset");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::Doozy::Engine::Soundy::SoundyData* Assembly_CSharp::Doozy::Engine::Soundy::SoundyData::SetAudioClip(UnityEngine_AudioModule::UnityEngine::AudioClip* audioClip)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetAudioClip", std::vector<std::string> { "UnityEngine.AudioClip" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)audioClip;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::Soundy::SoundyData*)returnValue;
}
Assembly_CSharp::Doozy::Engine::Soundy::SoundyData* Assembly_CSharp::Doozy::Engine::Soundy::SoundyData::SetDatabaseName(mscorlib::System::String* databaseName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetDatabaseName", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)databaseName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::Soundy::SoundyData*)returnValue;
}
Assembly_CSharp::Doozy::Engine::Soundy::SoundyData* Assembly_CSharp::Doozy::Engine::Soundy::SoundyData::SetOutputAudioMixerGroup(UnityEngine_AudioModule::UnityEngine::Audio::AudioMixerGroup* audioMixerGroup)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetOutputAudioMixerGroup", std::vector<std::string> { "UnityEngine.Audio.AudioMixerGroup" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)audioMixerGroup;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::Soundy::SoundyData*)returnValue;
}
Assembly_CSharp::Doozy::Engine::Soundy::SoundyData* Assembly_CSharp::Doozy::Engine::Soundy::SoundyData::SetSoundName(mscorlib::System::String* soundName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetSoundName", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)soundName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::Soundy::SoundyData*)returnValue;
}
Assembly_CSharp::Doozy::Engine::Soundy::SoundyData* Assembly_CSharp::Doozy::Engine::Soundy::SoundyData::SetSoundSource(Assembly_CSharp::Doozy::Engine::Soundy::SoundSource soundSource)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetSoundSource", std::vector<std::string> { "Doozy.Engine.Soundy.SoundSource" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&soundSource;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::Soundy::SoundyData*)returnValue;
}
