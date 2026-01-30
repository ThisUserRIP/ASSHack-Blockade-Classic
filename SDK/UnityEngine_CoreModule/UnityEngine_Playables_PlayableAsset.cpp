#include "UnityEngine_Playables_PlayableAsset.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::Playables::PlayableAsset::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine.Playables", "PlayableAsset");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::Playables::PlayableAsset::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_CoreModule::UnityEngine::Playables::Playable UnityEngine_CoreModule::UnityEngine::Playables::PlayableAsset::CreatePlayable(UnityEngine_CoreModule::UnityEngine::Playables::PlayableGraph graph, UnityEngine_CoreModule::UnityEngine::GameObject* owner)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreatePlayable", std::vector<std::string> { "UnityEngine.Playables.PlayableGraph", "UnityEngine.GameObject" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&graph;
	params[1] = (intptr_t)owner;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Playables::Playable ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Playables::Playable));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Playables::Playable>(*(UnityEngine_CoreModule::UnityEngine::Playables::Playable*)il2cpp_object_unbox(returnValue));
}
double UnityEngine_CoreModule::UnityEngine::Playables::PlayableAsset::get_duration()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_duration");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		double ret;
		std::memset(&ret, 0, sizeof(double));
		return ret;
	}
	return static_cast<double>(*(double*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Collections::Generic::IEnumerable_1<UnityEngine_CoreModule::UnityEngine::Playables::PlayableBinding>* UnityEngine_CoreModule::UnityEngine::Playables::PlayableAsset::get_outputs()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_outputs");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<UnityEngine_CoreModule::UnityEngine::Playables::PlayableBinding>*)returnValue;
}
void UnityEngine_CoreModule::UnityEngine::Playables::PlayableAsset::Internal_CreatePlayable(UnityEngine_CoreModule::UnityEngine::Playables::PlayableAsset* asset, UnityEngine_CoreModule::UnityEngine::Playables::PlayableGraph graph, UnityEngine_CoreModule::UnityEngine::GameObject* go, intptr_t ptr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_CreatePlayable", std::vector<std::string> { "UnityEngine.Playables.PlayableAsset", "UnityEngine.Playables.PlayableGraph", "UnityEngine.GameObject", "System.IntPtr" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)asset;
	params[1] = (intptr_t)&graph;
	params[2] = (intptr_t)go;
	params[3] = (intptr_t)&ptr;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Playables::PlayableAsset::Internal_GetPlayableAssetDuration(UnityEngine_CoreModule::UnityEngine::Playables::PlayableAsset* asset, intptr_t ptrToDouble)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_GetPlayableAssetDuration", std::vector<std::string> { "UnityEngine.Playables.PlayableAsset", "System.IntPtr" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)asset;
	params[1] = (intptr_t)&ptrToDouble;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Playables::PlayableAsset::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
