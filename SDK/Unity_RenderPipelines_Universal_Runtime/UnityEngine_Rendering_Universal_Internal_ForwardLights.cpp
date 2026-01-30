#include "UnityEngine_Rendering_Universal_Internal_ForwardLights.h"

IL2CPP::Il2CppClass* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::ForwardLights::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.RenderPipelines.Universal.Runtime.dll", "UnityEngine.Rendering.Universal.Internal", "ForwardLights");
	return il2cppclass;
}
mscorlib::System::Type* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::ForwardLights::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::ForwardLights::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::ForwardLights::Setup(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Setup", std::vector<std::string> { "UnityEngine.Rendering.ScriptableRenderContext", "UnityEngine.Rendering.Universal.RenderingData&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&context;
	params[1] = (intptr_t)&renderingData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::ForwardLights::InitializeLightConstants(UnityEngine_CoreModule::Unity::Collections::NativeArray_1<UnityEngine_CoreModule::UnityEngine::Rendering::VisibleLight> lights, int32_t lightIndex, UnityEngine_CoreModule::UnityEngine::Vector4& lightPos, UnityEngine_CoreModule::UnityEngine::Vector4& lightColor, UnityEngine_CoreModule::UnityEngine::Vector4& lightAttenuation, UnityEngine_CoreModule::UnityEngine::Vector4& lightSpotDir, UnityEngine_CoreModule::UnityEngine::Vector4& lightOcclusionProbeChannel)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitializeLightConstants", std::vector<std::string> { "Unity.Collections.NativeArray`1<UnityEngine.Rendering.VisibleLight>", "System.Int32", "UnityEngine.Vector4&", "UnityEngine.Vector4&", "UnityEngine.Vector4&", "UnityEngine.Vector4&", "UnityEngine.Vector4&" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&lights;
	params[1] = (intptr_t)&lightIndex;
	params[2] = (intptr_t)&lightPos;
	params[3] = (intptr_t)&lightColor;
	params[4] = (intptr_t)&lightAttenuation;
	params[5] = (intptr_t)&lightSpotDir;
	params[6] = (intptr_t)&lightOcclusionProbeChannel;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::ForwardLights::SetupShaderLightConstants(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetupShaderLightConstants", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "UnityEngine.Rendering.Universal.RenderingData&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)cmd;
	params[1] = (intptr_t)&renderingData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::ForwardLights::SetupMainLightConstants(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::LightData& lightData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetupMainLightConstants", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "UnityEngine.Rendering.Universal.LightData&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)cmd;
	params[1] = (intptr_t)&lightData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::ForwardLights::SetupAdditionalLightConstants(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetupAdditionalLightConstants", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "UnityEngine.Rendering.Universal.RenderingData&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)cmd;
	params[1] = (intptr_t)&renderingData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::ForwardLights::SetupPerObjectLightIndices(UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults cullResults, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::LightData& lightData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetupPerObjectLightIndices", std::vector<std::string> { "UnityEngine.Rendering.CullingResults", "UnityEngine.Rendering.Universal.LightData&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&cullResults;
	params[1] = (intptr_t)&lightData;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::ForwardLights::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
