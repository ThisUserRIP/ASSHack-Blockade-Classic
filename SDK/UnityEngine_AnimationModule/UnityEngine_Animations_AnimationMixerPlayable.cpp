#include "UnityEngine_Animations_AnimationMixerPlayable.h"

IL2CPP::Il2CppClass* UnityEngine_AnimationModule::UnityEngine::Animations::AnimationMixerPlayable::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.AnimationModule.dll", "UnityEngine.Animations", "AnimationMixerPlayable");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_AnimationModule::UnityEngine::Animations::AnimationMixerPlayable::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_AnimationModule::UnityEngine::Animations::AnimationMixerPlayable::_ctor(UnityEngine_CoreModule::UnityEngine::Playables::PlayableHandle handle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.Playables.PlayableHandle" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&handle;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Playables::PlayableHandle UnityEngine_AnimationModule::UnityEngine::Animations::AnimationMixerPlayable::GetHandle()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetHandle");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Playables::PlayableHandle ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Playables::PlayableHandle));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Playables::PlayableHandle>(*(UnityEngine_CoreModule::UnityEngine::Playables::PlayableHandle*)il2cpp_object_unbox(returnValue));
}
bool UnityEngine_AnimationModule::UnityEngine::Animations::AnimationMixerPlayable::Equals(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationMixerPlayable other)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Equals", std::vector<std::string> { "UnityEngine.Animations.AnimationMixerPlayable" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&other;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_AnimationModule::UnityEngine::Animations::AnimationMixerPlayable::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
