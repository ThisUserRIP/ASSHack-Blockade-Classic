#include "UnityEngine_VFX_VFXEventAttribute.h"

IL2CPP::Il2CppClass* UnityEngine_VFXModule::UnityEngine::VFX::VFXEventAttribute::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.VFXModule.dll", "UnityEngine.VFX", "VFXEventAttribute");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_VFXModule::UnityEngine::VFX::VFXEventAttribute::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_VFXModule::UnityEngine::VFX::VFXEventAttribute::_ctor(intptr_t ptr, bool owner, UnityEngine_VFXModule::UnityEngine::VFX::VisualEffectAsset* vfxAsset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.IntPtr", "System.Boolean", "UnityEngine.VFX.VisualEffectAsset" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&ptr;
	params[1] = (intptr_t)&owner;
	params[2] = (intptr_t)vfxAsset;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
intptr_t UnityEngine_VFXModule::UnityEngine::VFX::VFXEventAttribute::Internal_Create()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_Create");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
UnityEngine_VFXModule::UnityEngine::VFX::VFXEventAttribute* UnityEngine_VFXModule::UnityEngine::VFX::VFXEventAttribute::Internal_InstanciateVFXEventAttribute(UnityEngine_VFXModule::UnityEngine::VFX::VisualEffectAsset* vfxAsset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_InstanciateVFXEventAttribute", std::vector<std::string> { "UnityEngine.VFX.VisualEffectAsset" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)vfxAsset;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_VFXModule::UnityEngine::VFX::VFXEventAttribute*)returnValue;
}
void UnityEngine_VFXModule::UnityEngine::VFX::VFXEventAttribute::Internal_InitFromAsset(UnityEngine_VFXModule::UnityEngine::VFX::VisualEffectAsset* vfxAsset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_InitFromAsset", std::vector<std::string> { "UnityEngine.VFX.VisualEffectAsset" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)vfxAsset;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_VFXModule::UnityEngine::VFX::VFXEventAttribute::Release()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Release");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_VFXModule::UnityEngine::VFX::VFXEventAttribute::Finalize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Finalize");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_VFXModule::UnityEngine::VFX::VFXEventAttribute::Dispose()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dispose");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_VFXModule::UnityEngine::VFX::VFXEventAttribute::Internal_Destroy(intptr_t ptr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_Destroy", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ptr;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
