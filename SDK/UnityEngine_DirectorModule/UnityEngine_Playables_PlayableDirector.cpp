#include "UnityEngine_Playables_PlayableDirector.h"

IL2CPP::Il2CppClass* UnityEngine_DirectorModule::UnityEngine::Playables::PlayableDirector::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.DirectorModule.dll", "UnityEngine.Playables", "PlayableDirector");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_DirectorModule::UnityEngine::Playables::PlayableDirector::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_DirectorModule::UnityEngine::Playables::PlayableDirector::SendOnPlayableDirectorPlay()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SendOnPlayableDirectorPlay");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_DirectorModule::UnityEngine::Playables::PlayableDirector::SendOnPlayableDirectorPause()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SendOnPlayableDirectorPause");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_DirectorModule::UnityEngine::Playables::PlayableDirector::SendOnPlayableDirectorStop()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SendOnPlayableDirectorStop");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
