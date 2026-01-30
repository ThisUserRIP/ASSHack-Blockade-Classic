#include "UnityEngine_Rendering_MaterialQualityUtilities.h"

IL2CPP::Il2CppClass* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MaterialQualityUtilities::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.RenderPipelines.Core.Runtime.dll", "UnityEngine.Rendering", "MaterialQualityUtilities");
	return il2cppclass;
}
mscorlib::System::Type* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MaterialQualityUtilities::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MaterialQuality Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MaterialQualityUtilities::GetHighestQuality(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MaterialQuality levels)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetHighestQuality", std::vector<std::string> { "UnityEngine.Rendering.MaterialQuality" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&levels;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MaterialQuality ret;
		std::memset(&ret, 0, sizeof(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MaterialQuality));
		return ret;
	}
	return static_cast<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MaterialQuality>(*(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MaterialQuality*)il2cpp_object_unbox(returnValue));
}
Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MaterialQuality Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MaterialQualityUtilities::GetClosestQuality(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MaterialQuality availableLevels, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MaterialQuality requestedLevel)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetClosestQuality", std::vector<std::string> { "UnityEngine.Rendering.MaterialQuality", "UnityEngine.Rendering.MaterialQuality" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&availableLevels;
	params[1] = (intptr_t)&requestedLevel;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MaterialQuality ret;
		std::memset(&ret, 0, sizeof(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MaterialQuality));
		return ret;
	}
	return static_cast<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MaterialQuality>(*(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MaterialQuality*)il2cpp_object_unbox(returnValue));
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MaterialQualityUtilities::SetGlobalShaderKeywords(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MaterialQuality level)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetGlobalShaderKeywords", std::vector<std::string> { "UnityEngine.Rendering.MaterialQuality" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&level;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MaterialQualityUtilities::SetGlobalShaderKeywords(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MaterialQuality level, UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetGlobalShaderKeywords", std::vector<std::string> { "UnityEngine.Rendering.MaterialQuality", "UnityEngine.Rendering.CommandBuffer" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&level;
	params[1] = (intptr_t)cmd;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MaterialQualityUtilities::ToFirstIndex(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MaterialQuality level)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToFirstIndex", std::vector<std::string> { "UnityEngine.Rendering.MaterialQuality" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&level;
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
Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MaterialQuality Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MaterialQualityUtilities::FromIndex(int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FromIndex", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&index;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MaterialQuality ret;
		std::memset(&ret, 0, sizeof(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MaterialQuality));
		return ret;
	}
	return static_cast<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MaterialQuality>(*(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MaterialQuality*)il2cpp_object_unbox(returnValue));
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MaterialQualityUtilities::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
