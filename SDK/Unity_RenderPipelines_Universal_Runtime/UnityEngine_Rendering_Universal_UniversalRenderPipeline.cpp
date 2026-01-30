#include "UnityEngine_Rendering_Universal_UniversalRenderPipeline.h"

IL2CPP::Il2CppClass* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalRenderPipeline::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.RenderPipelines.Universal.Runtime.dll", "UnityEngine.Rendering.Universal", "UniversalRenderPipeline");
	return il2cppclass;
}
mscorlib::System::Type* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalRenderPipeline::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
float Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalRenderPipeline::get_maxShadowBias()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_maxShadowBias");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
float Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalRenderPipeline::get_minRenderScale()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_minRenderScale");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
float Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalRenderPipeline::get_maxRenderScale()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_maxRenderScale");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
int32_t Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalRenderPipeline::get_maxPerObjectLights()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_maxPerObjectLights");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalRenderPipeline::get_maxVisibleAdditionalLights()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_maxVisibleAdditionalLights");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalRenderPipeline::_ctor(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* asset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)asset;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalRenderPipeline::Dispose(bool disposing)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dispose", std::vector<std::string> { "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&disposing;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalRenderPipeline::Render(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext renderContext, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Camera*>* cameras)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Render", std::vector<std::string> { "UnityEngine.Rendering.ScriptableRenderContext", "UnityEngine.Camera[]" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&renderContext;
	params[1] = (intptr_t)cameras;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalRenderPipeline::RenderSingleCamera(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, UnityEngine_CoreModule::UnityEngine::Camera* camera)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RenderSingleCamera", std::vector<std::string> { "UnityEngine.Rendering.ScriptableRenderContext", "UnityEngine.Camera" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&context;
	params[1] = (intptr_t)camera;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalRenderPipeline::TryGetCullingParameters(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::CameraData cameraData, UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableCullingParameters& cullingParams)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryGetCullingParameters", std::vector<std::string> { "UnityEngine.Rendering.Universal.CameraData", "UnityEngine.Rendering.ScriptableCullingParameters&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&cameraData;
	params[1] = (intptr_t)&cullingParams;
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
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalRenderPipeline::RenderSingleCamera(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::CameraData cameraData, bool anyPostProcessingEnabled)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RenderSingleCamera", std::vector<std::string> { "UnityEngine.Rendering.ScriptableRenderContext", "UnityEngine.Rendering.Universal.CameraData", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&context;
	params[1] = (intptr_t)&cameraData;
	params[2] = (intptr_t)&anyPostProcessingEnabled;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalRenderPipeline::RenderCameraStack(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, UnityEngine_CoreModule::UnityEngine::Camera* baseCamera)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RenderCameraStack", std::vector<std::string> { "UnityEngine.Rendering.ScriptableRenderContext", "UnityEngine.Camera" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&context;
	params[1] = (intptr_t)baseCamera;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalRenderPipeline::UpdateVolumeFramework(UnityEngine_CoreModule::UnityEngine::Camera* camera, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* additionalCameraData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpdateVolumeFramework", std::vector<std::string> { "UnityEngine.Camera", "UnityEngine.Rendering.Universal.UniversalAdditionalCameraData" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)camera;
	params[1] = (intptr_t)additionalCameraData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalRenderPipeline::CheckPostProcessForDepth(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::CameraData& cameraData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckPostProcessForDepth", std::vector<std::string> { "UnityEngine.Rendering.Universal.CameraData&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&cameraData;
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
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalRenderPipeline::SetSupportedRenderingFeatures()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetSupportedRenderingFeatures");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalRenderPipeline::InitializeCameraData(UnityEngine_CoreModule::UnityEngine::Camera* camera, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* additionalCameraData, bool resolveFinalTarget, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::CameraData& cameraData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitializeCameraData", std::vector<std::string> { "UnityEngine.Camera", "UnityEngine.Rendering.Universal.UniversalAdditionalCameraData", "System.Boolean", "UnityEngine.Rendering.Universal.CameraData&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)camera;
	params[1] = (intptr_t)additionalCameraData;
	params[2] = (intptr_t)&resolveFinalTarget;
	params[3] = (intptr_t)&cameraData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalRenderPipeline::InitializeStackedCameraData(UnityEngine_CoreModule::UnityEngine::Camera* baseCamera, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* baseAdditionalCameraData, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::CameraData& cameraData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitializeStackedCameraData", std::vector<std::string> { "UnityEngine.Camera", "UnityEngine.Rendering.Universal.UniversalAdditionalCameraData", "UnityEngine.Rendering.Universal.CameraData&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)baseCamera;
	params[1] = (intptr_t)baseAdditionalCameraData;
	params[2] = (intptr_t)&cameraData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalRenderPipeline::InitializeAdditionalCameraData(UnityEngine_CoreModule::UnityEngine::Camera* camera, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* additionalCameraData, bool resolveFinalTarget, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::CameraData& cameraData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitializeAdditionalCameraData", std::vector<std::string> { "UnityEngine.Camera", "UnityEngine.Rendering.Universal.UniversalAdditionalCameraData", "System.Boolean", "UnityEngine.Rendering.Universal.CameraData&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)camera;
	params[1] = (intptr_t)additionalCameraData;
	params[2] = (intptr_t)&resolveFinalTarget;
	params[3] = (intptr_t)&cameraData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalRenderPipeline::InitializeRenderingData(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* settings, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::CameraData& cameraData, UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults& cullResults, bool anyPostProcessingEnabled, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitializeRenderingData", std::vector<std::string> { "UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset", "UnityEngine.Rendering.Universal.CameraData&", "UnityEngine.Rendering.CullingResults&", "System.Boolean", "UnityEngine.Rendering.Universal.RenderingData&" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)settings;
	params[1] = (intptr_t)&cameraData;
	params[2] = (intptr_t)&cullResults;
	params[3] = (intptr_t)&anyPostProcessingEnabled;
	params[4] = (intptr_t)&renderingData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalRenderPipeline::InitializeShadowData(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* settings, UnityEngine_CoreModule::Unity::Collections::NativeArray_1<UnityEngine_CoreModule::UnityEngine::Rendering::VisibleLight> visibleLights, bool mainLightCastShadows, bool additionalLightsCastShadows, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ShadowData& shadowData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitializeShadowData", std::vector<std::string> { "UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset", "Unity.Collections.NativeArray`1<UnityEngine.Rendering.VisibleLight>", "System.Boolean", "System.Boolean", "UnityEngine.Rendering.Universal.ShadowData&" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)settings;
	params[1] = (intptr_t)&visibleLights;
	params[2] = (intptr_t)&mainLightCastShadows;
	params[3] = (intptr_t)&additionalLightsCastShadows;
	params[4] = (intptr_t)&shadowData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalRenderPipeline::InitializePostProcessingData(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* settings, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::PostProcessingData& postProcessingData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitializePostProcessingData", std::vector<std::string> { "UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset", "UnityEngine.Rendering.Universal.PostProcessingData&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)settings;
	params[1] = (intptr_t)&postProcessingData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalRenderPipeline::InitializeLightData(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* settings, UnityEngine_CoreModule::Unity::Collections::NativeArray_1<UnityEngine_CoreModule::UnityEngine::Rendering::VisibleLight> visibleLights, int32_t mainLightIndex, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::LightData& lightData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitializeLightData", std::vector<std::string> { "UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset", "Unity.Collections.NativeArray`1<UnityEngine.Rendering.VisibleLight>", "System.Int32", "UnityEngine.Rendering.Universal.LightData&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)settings;
	params[1] = (intptr_t)&visibleLights;
	params[2] = (intptr_t)&mainLightIndex;
	params[3] = (intptr_t)&lightData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Rendering::PerObjectData Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalRenderPipeline::GetPerObjectLightFlags(int32_t additionalLightsCount)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPerObjectLightFlags", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&additionalLightsCount;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Rendering::PerObjectData ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Rendering::PerObjectData));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Rendering::PerObjectData>(*(UnityEngine_CoreModule::UnityEngine::Rendering::PerObjectData*)il2cpp_object_unbox(returnValue));
}
int32_t Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalRenderPipeline::GetMainLightIndex(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* settings, UnityEngine_CoreModule::Unity::Collections::NativeArray_1<UnityEngine_CoreModule::UnityEngine::Rendering::VisibleLight> visibleLights)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMainLightIndex", std::vector<std::string> { "UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset", "Unity.Collections.NativeArray`1<UnityEngine.Rendering.VisibleLight>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)settings;
	params[1] = (intptr_t)&visibleLights;
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
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalRenderPipeline::SetupPerFrameShaderConstants()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetupPerFrameShaderConstants");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalRenderPipeline::IsGameCamera(UnityEngine_CoreModule::UnityEngine::Camera* camera)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsGameCamera", std::vector<std::string> { "UnityEngine.Camera" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)camera;
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
bool Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalRenderPipeline::IsStereoEnabled(UnityEngine_CoreModule::UnityEngine::Camera* camera)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsStereoEnabled", std::vector<std::string> { "UnityEngine.Camera" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)camera;
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
Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalRenderPipeline::get_asset()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_asset");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*)returnValue;
}
bool Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalRenderPipeline::IsMultiPassStereoEnabled(UnityEngine_CoreModule::UnityEngine::Camera* camera)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsMultiPassStereoEnabled", std::vector<std::string> { "UnityEngine.Camera" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)camera;
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
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalRenderPipeline::SortCameras(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Camera*>* cameras)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SortCameras", std::vector<std::string> { "UnityEngine.Camera[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)cameras;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::RenderTextureDescriptor Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalRenderPipeline::CreateRenderTextureDescriptor(UnityEngine_CoreModule::UnityEngine::Camera* camera, float renderScale, bool isHdrEnabled, int32_t msaaSamples, bool needsAlpha, bool requiresOpaqueTexture)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateRenderTextureDescriptor", std::vector<std::string> { "UnityEngine.Camera", "System.Single", "System.Boolean", "System.Int32", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)camera;
	params[1] = (intptr_t)&renderScale;
	params[2] = (intptr_t)&isHdrEnabled;
	params[3] = (intptr_t)&msaaSamples;
	params[4] = (intptr_t)&needsAlpha;
	params[5] = (intptr_t)&requiresOpaqueTexture;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::RenderTextureDescriptor ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::RenderTextureDescriptor));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::RenderTextureDescriptor>(*(UnityEngine_CoreModule::UnityEngine::RenderTextureDescriptor*)il2cpp_object_unbox(returnValue));
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalRenderPipeline::GetLightAttenuationAndSpotDirection(UnityEngine_CoreModule::UnityEngine::LightType lightType, float lightRange, UnityEngine_CoreModule::UnityEngine::Matrix4x4 lightLocalToWorldMatrix, float spotAngle, mscorlib::System::Nullable_1<mscorlib::System::Single> innerSpotAngle, UnityEngine_CoreModule::UnityEngine::Vector4& lightAttenuation, UnityEngine_CoreModule::UnityEngine::Vector4& lightSpotDir)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetLightAttenuationAndSpotDirection", std::vector<std::string> { "UnityEngine.LightType", "System.Single", "UnityEngine.Matrix4x4", "System.Single", "System.Nullable`1<System.Single>", "UnityEngine.Vector4&", "UnityEngine.Vector4&" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&lightType;
	params[1] = (intptr_t)&lightRange;
	params[2] = (intptr_t)&lightLocalToWorldMatrix;
	params[3] = (intptr_t)&spotAngle;
	params[4] = (intptr_t)&innerSpotAngle;
	params[5] = (intptr_t)&lightAttenuation;
	params[6] = (intptr_t)&lightSpotDir;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalRenderPipeline::InitializeLightConstants_Common(UnityEngine_CoreModule::Unity::Collections::NativeArray_1<UnityEngine_CoreModule::UnityEngine::Rendering::VisibleLight> lights, int32_t lightIndex, UnityEngine_CoreModule::UnityEngine::Vector4& lightPos, UnityEngine_CoreModule::UnityEngine::Vector4& lightColor, UnityEngine_CoreModule::UnityEngine::Vector4& lightAttenuation, UnityEngine_CoreModule::UnityEngine::Vector4& lightSpotDir, UnityEngine_CoreModule::UnityEngine::Vector4& lightOcclusionProbeChannel)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitializeLightConstants_Common", std::vector<std::string> { "Unity.Collections.NativeArray`1<UnityEngine.Rendering.VisibleLight>", "System.Int32", "UnityEngine.Vector4&", "UnityEngine.Vector4&", "UnityEngine.Vector4&", "UnityEngine.Vector4&", "UnityEngine.Vector4&" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&lights;
	params[1] = (intptr_t)&lightIndex;
	params[2] = (intptr_t)&lightPos;
	params[3] = (intptr_t)&lightColor;
	params[4] = (intptr_t)&lightAttenuation;
	params[5] = (intptr_t)&lightSpotDir;
	params[6] = (intptr_t)&lightOcclusionProbeChannel;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalRenderPipeline::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
