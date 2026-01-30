#include "UnityEngine_Playables_IPlayableBehaviour.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::Playables::IPlayableBehaviour::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine.Playables", "IPlayableBehaviour");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::Playables::IPlayableBehaviour::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_CoreModule::UnityEngine::Playables::IPlayableBehaviour::OnGraphStart(UnityEngine_CoreModule::UnityEngine::Playables::Playable playable)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnGraphStart", std::vector<std::string> { "UnityEngine.Playables.Playable" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&playable;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Playables::IPlayableBehaviour::OnGraphStop(UnityEngine_CoreModule::UnityEngine::Playables::Playable playable)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnGraphStop", std::vector<std::string> { "UnityEngine.Playables.Playable" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&playable;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Playables::IPlayableBehaviour::OnPlayableCreate(UnityEngine_CoreModule::UnityEngine::Playables::Playable playable)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnPlayableCreate", std::vector<std::string> { "UnityEngine.Playables.Playable" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&playable;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Playables::IPlayableBehaviour::OnPlayableDestroy(UnityEngine_CoreModule::UnityEngine::Playables::Playable playable)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnPlayableDestroy", std::vector<std::string> { "UnityEngine.Playables.Playable" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&playable;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Playables::IPlayableBehaviour::OnBehaviourPlay(UnityEngine_CoreModule::UnityEngine::Playables::Playable playable, UnityEngine_CoreModule::UnityEngine::Playables::FrameData info)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnBehaviourPlay", std::vector<std::string> { "UnityEngine.Playables.Playable", "UnityEngine.Playables.FrameData" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&playable;
	params[1] = (intptr_t)&info;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Playables::IPlayableBehaviour::OnBehaviourPause(UnityEngine_CoreModule::UnityEngine::Playables::Playable playable, UnityEngine_CoreModule::UnityEngine::Playables::FrameData info)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnBehaviourPause", std::vector<std::string> { "UnityEngine.Playables.Playable", "UnityEngine.Playables.FrameData" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&playable;
	params[1] = (intptr_t)&info;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Playables::IPlayableBehaviour::PrepareFrame(UnityEngine_CoreModule::UnityEngine::Playables::Playable playable, UnityEngine_CoreModule::UnityEngine::Playables::FrameData info)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PrepareFrame", std::vector<std::string> { "UnityEngine.Playables.Playable", "UnityEngine.Playables.FrameData" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&playable;
	params[1] = (intptr_t)&info;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Playables::IPlayableBehaviour::ProcessFrame(UnityEngine_CoreModule::UnityEngine::Playables::Playable playable, UnityEngine_CoreModule::UnityEngine::Playables::FrameData info, mscorlib::System::Object* playerData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessFrame", std::vector<std::string> { "UnityEngine.Playables.Playable", "UnityEngine.Playables.FrameData", "System.Object" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&playable;
	params[1] = (intptr_t)&info;
	params[2] = (intptr_t)playerData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
