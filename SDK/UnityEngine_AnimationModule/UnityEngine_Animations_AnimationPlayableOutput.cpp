#include "UnityEngine_Animations_AnimationPlayableOutput.h"

IL2CPP::Il2CppClass* UnityEngine_AnimationModule::UnityEngine::Animations::AnimationPlayableOutput::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.AnimationModule.dll", "UnityEngine.Animations", "AnimationPlayableOutput");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_AnimationModule::UnityEngine::Animations::AnimationPlayableOutput::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_AnimationModule::UnityEngine::Animations::AnimationPlayableOutput UnityEngine_AnimationModule::UnityEngine::Animations::AnimationPlayableOutput::Create(UnityEngine_CoreModule::UnityEngine::Playables::PlayableGraph graph, mscorlib::System::String* name, UnityEngine_AnimationModule::UnityEngine::Animator* target)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Create", std::vector<std::string> { "UnityEngine.Playables.PlayableGraph", "System.String", "UnityEngine.Animator" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&graph;
	params[1] = (intptr_t)name;
	params[2] = (intptr_t)target;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_AnimationModule::UnityEngine::Animations::AnimationPlayableOutput ret;
		std::memset(&ret, 0, sizeof(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationPlayableOutput));
		return ret;
	}
	return static_cast<UnityEngine_AnimationModule::UnityEngine::Animations::AnimationPlayableOutput>(*(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationPlayableOutput*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_AnimationModule::UnityEngine::Animations::AnimationPlayableOutput::_ctor(UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutputHandle handle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.Playables.PlayableOutputHandle" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&handle;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_AnimationModule::UnityEngine::Animations::AnimationPlayableOutput UnityEngine_AnimationModule::UnityEngine::Animations::AnimationPlayableOutput::get_Null()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Null");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_AnimationModule::UnityEngine::Animations::AnimationPlayableOutput ret;
		std::memset(&ret, 0, sizeof(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationPlayableOutput));
		return ret;
	}
	return static_cast<UnityEngine_AnimationModule::UnityEngine::Animations::AnimationPlayableOutput>(*(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationPlayableOutput*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutputHandle UnityEngine_AnimationModule::UnityEngine::Animations::AnimationPlayableOutput::GetHandle()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetHandle");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutputHandle ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutputHandle));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutputHandle>(*(UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutputHandle*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_AnimationModule::UnityEngine::Animations::AnimationPlayableOutput::SetTarget(UnityEngine_AnimationModule::UnityEngine::Animator* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetTarget", std::vector<std::string> { "UnityEngine.Animator" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_AnimationModule::UnityEngine::Animations::AnimationPlayableOutput::InternalSetTarget(UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutputHandle& handle, UnityEngine_AnimationModule::UnityEngine::Animator* target)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalSetTarget", std::vector<std::string> { "UnityEngine.Playables.PlayableOutputHandle&", "UnityEngine.Animator" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&handle;
	params[1] = (intptr_t)target;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
