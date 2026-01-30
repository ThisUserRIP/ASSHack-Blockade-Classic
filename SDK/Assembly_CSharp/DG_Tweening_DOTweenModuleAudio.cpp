#include "DG_Tweening_DOTweenModuleAudio.h"

IL2CPP::Il2CppClass* Assembly_CSharp::DG::Tweening::DOTweenModuleAudio::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "DG.Tweening", "DOTweenModuleAudio");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::DG::Tweening::DOTweenModuleAudio::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Single, mscorlib::System::Single, DOTween::DG::Tweening::Plugins::Options::FloatOptions>* Assembly_CSharp::DG::Tweening::DOTweenModuleAudio::DOFade(UnityEngine_AudioModule::UnityEngine::AudioSource* target, float endValue, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOFade", std::vector<std::string> { "UnityEngine.AudioSource", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&endValue;
	params[2] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Single, mscorlib::System::Single, DOTween::DG::Tweening::Plugins::Options::FloatOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Single, mscorlib::System::Single, DOTween::DG::Tweening::Plugins::Options::FloatOptions>* Assembly_CSharp::DG::Tweening::DOTweenModuleAudio::DOPitch(UnityEngine_AudioModule::UnityEngine::AudioSource* target, float endValue, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOPitch", std::vector<std::string> { "UnityEngine.AudioSource", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&endValue;
	params[2] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Single, mscorlib::System::Single, DOTween::DG::Tweening::Plugins::Options::FloatOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Single, mscorlib::System::Single, DOTween::DG::Tweening::Plugins::Options::FloatOptions>* Assembly_CSharp::DG::Tweening::DOTweenModuleAudio::DOSetFloat(UnityEngine_AudioModule::UnityEngine::Audio::AudioMixer* target, mscorlib::System::String* floatName, float endValue, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOSetFloat", std::vector<std::string> { "UnityEngine.Audio.AudioMixer", "System.String", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)floatName;
	params[2] = (intptr_t)&endValue;
	params[3] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Single, mscorlib::System::Single, DOTween::DG::Tweening::Plugins::Options::FloatOptions>*)returnValue;
}
int32_t Assembly_CSharp::DG::Tweening::DOTweenModuleAudio::DOComplete(UnityEngine_AudioModule::UnityEngine::Audio::AudioMixer* target, bool withCallbacks)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOComplete", std::vector<std::string> { "UnityEngine.Audio.AudioMixer", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&withCallbacks;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Assembly_CSharp::DG::Tweening::DOTweenModuleAudio::DOKill(UnityEngine_AudioModule::UnityEngine::Audio::AudioMixer* target, bool complete)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOKill", std::vector<std::string> { "UnityEngine.Audio.AudioMixer", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&complete;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Assembly_CSharp::DG::Tweening::DOTweenModuleAudio::DOFlip(UnityEngine_AudioModule::UnityEngine::Audio::AudioMixer* target)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOFlip", std::vector<std::string> { "UnityEngine.Audio.AudioMixer" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)target;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Assembly_CSharp::DG::Tweening::DOTweenModuleAudio::DOGoto(UnityEngine_AudioModule::UnityEngine::Audio::AudioMixer* target, float to, bool andPlay)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOGoto", std::vector<std::string> { "UnityEngine.Audio.AudioMixer", "System.Single", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&to;
	params[2] = (intptr_t)&andPlay;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Assembly_CSharp::DG::Tweening::DOTweenModuleAudio::DOPause(UnityEngine_AudioModule::UnityEngine::Audio::AudioMixer* target)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOPause", std::vector<std::string> { "UnityEngine.Audio.AudioMixer" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)target;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Assembly_CSharp::DG::Tweening::DOTweenModuleAudio::DOPlay(UnityEngine_AudioModule::UnityEngine::Audio::AudioMixer* target)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOPlay", std::vector<std::string> { "UnityEngine.Audio.AudioMixer" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)target;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Assembly_CSharp::DG::Tweening::DOTweenModuleAudio::DOPlayBackwards(UnityEngine_AudioModule::UnityEngine::Audio::AudioMixer* target)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOPlayBackwards", std::vector<std::string> { "UnityEngine.Audio.AudioMixer" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)target;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Assembly_CSharp::DG::Tweening::DOTweenModuleAudio::DOPlayForward(UnityEngine_AudioModule::UnityEngine::Audio::AudioMixer* target)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOPlayForward", std::vector<std::string> { "UnityEngine.Audio.AudioMixer" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)target;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Assembly_CSharp::DG::Tweening::DOTweenModuleAudio::DORestart(UnityEngine_AudioModule::UnityEngine::Audio::AudioMixer* target)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DORestart", std::vector<std::string> { "UnityEngine.Audio.AudioMixer" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)target;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Assembly_CSharp::DG::Tweening::DOTweenModuleAudio::DORewind(UnityEngine_AudioModule::UnityEngine::Audio::AudioMixer* target)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DORewind", std::vector<std::string> { "UnityEngine.Audio.AudioMixer" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)target;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Assembly_CSharp::DG::Tweening::DOTweenModuleAudio::DOSmoothRewind(UnityEngine_AudioModule::UnityEngine::Audio::AudioMixer* target)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOSmoothRewind", std::vector<std::string> { "UnityEngine.Audio.AudioMixer" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)target;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Assembly_CSharp::DG::Tweening::DOTweenModuleAudio::DOTogglePause(UnityEngine_AudioModule::UnityEngine::Audio::AudioMixer* target)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DOTogglePause", std::vector<std::string> { "UnityEngine.Audio.AudioMixer" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)target;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
