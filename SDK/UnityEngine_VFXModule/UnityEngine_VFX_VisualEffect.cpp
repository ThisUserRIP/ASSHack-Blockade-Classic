#include "UnityEngine_VFX_VisualEffect.h"

IL2CPP::Il2CppClass* UnityEngine_VFXModule::UnityEngine::VFX::VisualEffect::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.VFXModule.dll", "UnityEngine.VFX", "VisualEffect");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_VFXModule::UnityEngine::VFX::VisualEffect::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_VFXModule::UnityEngine::VFX::VisualEffectAsset* UnityEngine_VFXModule::UnityEngine::VFX::VisualEffect::get_visualEffectAsset()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_visualEffectAsset");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_VFXModule::UnityEngine::VFX::VisualEffectAsset*)returnValue;
}
UnityEngine_VFXModule::UnityEngine::VFX::VFXEventAttribute* UnityEngine_VFXModule::UnityEngine::VFX::VisualEffect::CreateVFXEventAttribute()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateVFXEventAttribute");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_VFXModule::UnityEngine::VFX::VFXEventAttribute*)returnValue;
}
UnityEngine_VFXModule::UnityEngine::VFX::VFXEventAttribute* UnityEngine_VFXModule::UnityEngine::VFX::VisualEffect::InvokeGetCachedEventAttributeForOutputEvent_Internal(UnityEngine_VFXModule::UnityEngine::VFX::VisualEffect* source)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InvokeGetCachedEventAttributeForOutputEvent_Internal", std::vector<std::string> { "UnityEngine.VFX.VisualEffect" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)source;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_VFXModule::UnityEngine::VFX::VFXEventAttribute*)returnValue;
}
void UnityEngine_VFXModule::UnityEngine::VFX::VisualEffect::InvokeOutputEventReceived_Internal(UnityEngine_VFXModule::UnityEngine::VFX::VisualEffect* source, int32_t eventNameId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InvokeOutputEventReceived_Internal", std::vector<std::string> { "UnityEngine.VFX.VisualEffect", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)source;
	params[1] = (intptr_t)&eventNameId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
