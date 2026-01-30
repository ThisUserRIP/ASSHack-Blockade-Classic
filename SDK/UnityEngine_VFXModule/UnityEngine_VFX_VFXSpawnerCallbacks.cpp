#include "UnityEngine_VFX_VFXSpawnerCallbacks.h"

IL2CPP::Il2CppClass* UnityEngine_VFXModule::UnityEngine::VFX::VFXSpawnerCallbacks::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.VFXModule.dll", "UnityEngine.VFX", "VFXSpawnerCallbacks");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_VFXModule::UnityEngine::VFX::VFXSpawnerCallbacks::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_VFXModule::UnityEngine::VFX::VFXSpawnerCallbacks::OnPlay(UnityEngine_VFXModule::UnityEngine::VFX::VFXSpawnerState* state, UnityEngine_VFXModule::UnityEngine::VFX::VFXExpressionValues* vfxValues, UnityEngine_VFXModule::UnityEngine::VFX::VisualEffect* vfxComponent)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnPlay", std::vector<std::string> { "UnityEngine.VFX.VFXSpawnerState", "UnityEngine.VFX.VFXExpressionValues", "UnityEngine.VFX.VisualEffect" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)state;
	params[1] = (intptr_t)vfxValues;
	params[2] = (intptr_t)vfxComponent;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_VFXModule::UnityEngine::VFX::VFXSpawnerCallbacks::OnUpdate(UnityEngine_VFXModule::UnityEngine::VFX::VFXSpawnerState* state, UnityEngine_VFXModule::UnityEngine::VFX::VFXExpressionValues* vfxValues, UnityEngine_VFXModule::UnityEngine::VFX::VisualEffect* vfxComponent)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnUpdate", std::vector<std::string> { "UnityEngine.VFX.VFXSpawnerState", "UnityEngine.VFX.VFXExpressionValues", "UnityEngine.VFX.VisualEffect" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)state;
	params[1] = (intptr_t)vfxValues;
	params[2] = (intptr_t)vfxComponent;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_VFXModule::UnityEngine::VFX::VFXSpawnerCallbacks::OnStop(UnityEngine_VFXModule::UnityEngine::VFX::VFXSpawnerState* state, UnityEngine_VFXModule::UnityEngine::VFX::VFXExpressionValues* vfxValues, UnityEngine_VFXModule::UnityEngine::VFX::VisualEffect* vfxComponent)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnStop", std::vector<std::string> { "UnityEngine.VFX.VFXSpawnerState", "UnityEngine.VFX.VFXExpressionValues", "UnityEngine.VFX.VisualEffect" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)state;
	params[1] = (intptr_t)vfxValues;
	params[2] = (intptr_t)vfxComponent;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_VFXModule::UnityEngine::VFX::VFXSpawnerCallbacks::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
