#include "UnityEngine_Rendering_Universal_ShadowUtils.h"

IL2CPP::Il2CppClass* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ShadowUtils::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.RenderPipelines.Universal.Runtime.dll", "UnityEngine.Rendering.Universal", "ShadowUtils");
	return il2cppclass;
}
mscorlib::System::Type* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ShadowUtils::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ShadowUtils::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ShadowUtils::ExtractDirectionalLightMatrix(UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults& cullResults, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ShadowData& shadowData, int32_t shadowLightIndex, int32_t cascadeIndex, int32_t shadowmapWidth, int32_t shadowmapHeight, int32_t shadowResolution, float shadowNearPlane, UnityEngine_CoreModule::UnityEngine::Vector4& cascadeSplitDistance, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ShadowSliceData& shadowSliceData, UnityEngine_CoreModule::UnityEngine::Matrix4x4& viewMatrix, UnityEngine_CoreModule::UnityEngine::Matrix4x4& projMatrix)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ExtractDirectionalLightMatrix", std::vector<std::string> { "UnityEngine.Rendering.CullingResults&", "UnityEngine.Rendering.Universal.ShadowData&", "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Single", "UnityEngine.Vector4&", "UnityEngine.Rendering.Universal.ShadowSliceData&", "UnityEngine.Matrix4x4&", "UnityEngine.Matrix4x4&" });
	intptr_t* params = new intptr_t[12];
	params[0] = (intptr_t)&cullResults;
	params[1] = (intptr_t)&shadowData;
	params[2] = (intptr_t)&shadowLightIndex;
	params[3] = (intptr_t)&cascadeIndex;
	params[4] = (intptr_t)&shadowmapWidth;
	params[5] = (intptr_t)&shadowmapHeight;
	params[6] = (intptr_t)&shadowResolution;
	params[7] = (intptr_t)&shadowNearPlane;
	params[8] = (intptr_t)&cascadeSplitDistance;
	params[9] = (intptr_t)&shadowSliceData;
	params[10] = (intptr_t)&viewMatrix;
	params[11] = (intptr_t)&projMatrix;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ShadowUtils::ExtractSpotLightMatrix(UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults& cullResults, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ShadowData& shadowData, int32_t shadowLightIndex, UnityEngine_CoreModule::UnityEngine::Matrix4x4& shadowMatrix, UnityEngine_CoreModule::UnityEngine::Matrix4x4& viewMatrix, UnityEngine_CoreModule::UnityEngine::Matrix4x4& projMatrix)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ExtractSpotLightMatrix", std::vector<std::string> { "UnityEngine.Rendering.CullingResults&", "UnityEngine.Rendering.Universal.ShadowData&", "System.Int32", "UnityEngine.Matrix4x4&", "UnityEngine.Matrix4x4&", "UnityEngine.Matrix4x4&" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&cullResults;
	params[1] = (intptr_t)&shadowData;
	params[2] = (intptr_t)&shadowLightIndex;
	params[3] = (intptr_t)&shadowMatrix;
	params[4] = (intptr_t)&viewMatrix;
	params[5] = (intptr_t)&projMatrix;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ShadowUtils::RenderShadowSlice(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext& context, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ShadowSliceData& shadowSliceData, UnityEngine_CoreModule::UnityEngine::Rendering::ShadowDrawingSettings& settings, UnityEngine_CoreModule::UnityEngine::Matrix4x4 proj, UnityEngine_CoreModule::UnityEngine::Matrix4x4 view)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RenderShadowSlice", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "UnityEngine.Rendering.ScriptableRenderContext&", "UnityEngine.Rendering.Universal.ShadowSliceData&", "UnityEngine.Rendering.ShadowDrawingSettings&", "UnityEngine.Matrix4x4", "UnityEngine.Matrix4x4" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)cmd;
	params[1] = (intptr_t)&context;
	params[2] = (intptr_t)&shadowSliceData;
	params[3] = (intptr_t)&settings;
	params[4] = (intptr_t)&proj;
	params[5] = (intptr_t)&view;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ShadowUtils::RenderShadowSlice(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext& context, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ShadowSliceData& shadowSliceData, UnityEngine_CoreModule::UnityEngine::Rendering::ShadowDrawingSettings& settings)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RenderShadowSlice", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "UnityEngine.Rendering.ScriptableRenderContext&", "UnityEngine.Rendering.Universal.ShadowSliceData&", "UnityEngine.Rendering.ShadowDrawingSettings&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)cmd;
	params[1] = (intptr_t)&context;
	params[2] = (intptr_t)&shadowSliceData;
	params[3] = (intptr_t)&settings;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ShadowUtils::GetMaxTileResolutionInAtlas(int32_t atlasWidth, int32_t atlasHeight, int32_t tileCount)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMaxTileResolutionInAtlas", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&atlasWidth;
	params[1] = (intptr_t)&atlasHeight;
	params[2] = (intptr_t)&tileCount;
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
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ShadowUtils::ApplySliceTransform(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ShadowSliceData& shadowSliceData, int32_t atlasWidth, int32_t atlasHeight)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ApplySliceTransform", std::vector<std::string> { "UnityEngine.Rendering.Universal.ShadowSliceData&", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&shadowSliceData;
	params[1] = (intptr_t)&atlasWidth;
	params[2] = (intptr_t)&atlasHeight;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Vector4 Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ShadowUtils::GetShadowBias(UnityEngine_CoreModule::UnityEngine::Rendering::VisibleLight& shadowLight, int32_t shadowLightIndex, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ShadowData& shadowData, UnityEngine_CoreModule::UnityEngine::Matrix4x4 lightProjectionMatrix, float shadowResolution)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetShadowBias", std::vector<std::string> { "UnityEngine.Rendering.VisibleLight&", "System.Int32", "UnityEngine.Rendering.Universal.ShadowData&", "UnityEngine.Matrix4x4", "System.Single" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&shadowLight;
	params[1] = (intptr_t)&shadowLightIndex;
	params[2] = (intptr_t)&shadowData;
	params[3] = (intptr_t)&lightProjectionMatrix;
	params[4] = (intptr_t)&shadowResolution;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector4 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector4));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector4>(*(UnityEngine_CoreModule::UnityEngine::Vector4*)il2cpp_object_unbox(returnValue));
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ShadowUtils::SetupShadowCasterConstantBuffer(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, UnityEngine_CoreModule::UnityEngine::Rendering::VisibleLight& shadowLight, UnityEngine_CoreModule::UnityEngine::Vector4 shadowBias)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetupShadowCasterConstantBuffer", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "UnityEngine.Rendering.VisibleLight&", "UnityEngine.Vector4" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)cmd;
	params[1] = (intptr_t)&shadowLight;
	params[2] = (intptr_t)&shadowBias;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::RenderTexture* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ShadowUtils::GetTemporaryShadowTexture(int32_t width, int32_t height, int32_t bits)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTemporaryShadowTexture", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&width;
	params[1] = (intptr_t)&height;
	params[2] = (intptr_t)&bits;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::RenderTexture*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Matrix4x4 Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ShadowUtils::GetShadowTransform(UnityEngine_CoreModule::UnityEngine::Matrix4x4 proj, UnityEngine_CoreModule::UnityEngine::Matrix4x4 view)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetShadowTransform", std::vector<std::string> { "UnityEngine.Matrix4x4", "UnityEngine.Matrix4x4" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&proj;
	params[1] = (intptr_t)&view;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Matrix4x4 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Matrix4x4));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Matrix4x4>(*(UnityEngine_CoreModule::UnityEngine::Matrix4x4*)il2cpp_object_unbox(returnValue));
}
