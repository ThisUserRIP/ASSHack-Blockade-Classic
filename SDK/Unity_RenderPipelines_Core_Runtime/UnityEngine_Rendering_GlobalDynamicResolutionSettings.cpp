#include "UnityEngine_Rendering_GlobalDynamicResolutionSettings.h"

IL2CPP::Il2CppClass* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::GlobalDynamicResolutionSettings::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.RenderPipelines.Core.Runtime.dll", "UnityEngine.Rendering", "GlobalDynamicResolutionSettings");
	return il2cppclass;
}
mscorlib::System::Type* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::GlobalDynamicResolutionSettings::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::GlobalDynamicResolutionSettings Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::GlobalDynamicResolutionSettings::NewDefault()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "NewDefault");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::GlobalDynamicResolutionSettings ret;
		std::memset(&ret, 0, sizeof(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::GlobalDynamicResolutionSettings));
		return ret;
	}
	return static_cast<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::GlobalDynamicResolutionSettings>(*(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::GlobalDynamicResolutionSettings*)il2cpp_object_unbox(returnValue));
}
