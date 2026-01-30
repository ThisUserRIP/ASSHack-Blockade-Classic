#include "UnityEngine_Rendering_Universal_ScriptableRenderer.h"

IL2CPP::Il2CppClass* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.RenderPipelines.Universal.Runtime.dll", "UnityEngine.Rendering.Universal", "ScriptableRenderer");
	return il2cppclass;
}
mscorlib::System::Type* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer::get_cameraDepth()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_cameraDepth");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier>(*(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier*)il2cpp_object_unbox(returnValue));
}
Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer::get_profilingExecute()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_profilingExecute");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler*)returnValue;
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer::set_profilingExecute(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_profilingExecute", std::vector<std::string> { "UnityEngine.Rendering.ProfilingSampler" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer::SetCameraMatrices(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::CameraData& cameraData, bool setInverseMatrices)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetCameraMatrices", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "UnityEngine.Rendering.Universal.CameraData&", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)cmd;
	params[1] = (intptr_t)&cameraData;
	params[2] = (intptr_t)&setInverseMatrices;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer::SetPerCameraShaderVariables(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::CameraData& cameraData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetPerCameraShaderVariables", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "UnityEngine.Rendering.Universal.CameraData&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)cmd;
	params[1] = (intptr_t)&cameraData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer::SetShaderTimeValues(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, float time, float deltaTime, float smoothDeltaTime)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetShaderTimeValues", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)cmd;
	params[1] = (intptr_t)&time;
	params[2] = (intptr_t)&deltaTime;
	params[3] = (intptr_t)&smoothDeltaTime;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer::get_cameraColorTarget()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_cameraColorTarget");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier>(*(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer::get_cameraDepthTarget()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_cameraDepthTarget");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier>(*(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRendererFeature>* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer::get_rendererFeatures()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_rendererFeatures");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRendererFeature>*)returnValue;
}
mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderPass>* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer::get_activeRenderPassQueue()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_activeRenderPassQueue");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderPass>*)returnValue;
}
Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer::get_supportedRenderingFeatures()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_supportedRenderingFeatures");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures*)returnValue;
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer::set_supportedRenderingFeatures(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_supportedRenderingFeatures", std::vector<std::string> { "UnityEngine.Rendering.Universal.ScriptableRenderer/RenderingFeatures" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::GraphicsDeviceType>* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer::get_unsupportedGraphicsDeviceTypes()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_unsupportedGraphicsDeviceTypes");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::GraphicsDeviceType>*)returnValue;
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer::set_unsupportedGraphicsDeviceTypes(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::GraphicsDeviceType>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_unsupportedGraphicsDeviceTypes", std::vector<std::string> { "UnityEngine.Rendering.GraphicsDeviceType[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer::ConfigureActiveTarget(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier colorAttachment, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier depthAttachment)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ConfigureActiveTarget", std::vector<std::string> { "UnityEngine.Rendering.RenderTargetIdentifier", "UnityEngine.Rendering.RenderTargetIdentifier" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&colorAttachment;
	params[1] = (intptr_t)&depthAttachment;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer::_ctor(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRendererData* data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.Rendering.Universal.ScriptableRendererData" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)data;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer::Dispose()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dispose");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer::Dispose(bool disposing)
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
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer::ConfigureCameraTarget(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier colorTarget, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier depthTarget)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ConfigureCameraTarget", std::vector<std::string> { "UnityEngine.Rendering.RenderTargetIdentifier", "UnityEngine.Rendering.RenderTargetIdentifier" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&colorTarget;
	params[1] = (intptr_t)&depthTarget;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer::ConfigureCameraColorTarget(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier colorTarget)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ConfigureCameraColorTarget", std::vector<std::string> { "UnityEngine.Rendering.RenderTargetIdentifier" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&colorTarget;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer::Setup(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Setup", std::vector<std::string> { "UnityEngine.Rendering.ScriptableRenderContext", "UnityEngine.Rendering.Universal.RenderingData&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&context;
	params[1] = (intptr_t)&renderingData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer::SetupLights(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetupLights", std::vector<std::string> { "UnityEngine.Rendering.ScriptableRenderContext", "UnityEngine.Rendering.Universal.RenderingData&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&context;
	params[1] = (intptr_t)&renderingData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer::SetupCullingParameters(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableCullingParameters& cullingParameters, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::CameraData& cameraData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetupCullingParameters", std::vector<std::string> { "UnityEngine.Rendering.ScriptableCullingParameters&", "UnityEngine.Rendering.Universal.CameraData&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&cullingParameters;
	params[1] = (intptr_t)&cameraData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer::FinishRendering(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FinishRendering", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)cmd;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer::Execute(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Execute", std::vector<std::string> { "UnityEngine.Rendering.ScriptableRenderContext", "UnityEngine.Rendering.Universal.RenderingData&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&context;
	params[1] = (intptr_t)&renderingData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer::EnqueuePass(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderPass* pass)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EnqueuePass", std::vector<std::string> { "UnityEngine.Rendering.Universal.ScriptableRenderPass" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)pass;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClearFlag Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer::GetCameraClearFlag(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::CameraData& cameraData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCameraClearFlag", std::vector<std::string> { "UnityEngine.Rendering.Universal.CameraData&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&cameraData;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClearFlag ret;
		std::memset(&ret, 0, sizeof(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClearFlag));
		return ret;
	}
	return static_cast<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClearFlag>(*(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClearFlag*)il2cpp_object_unbox(returnValue));
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer::AddRenderPasses(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddRenderPasses", std::vector<std::string> { "UnityEngine.Rendering.Universal.RenderingData&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&renderingData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer::ClearRenderingState(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearRenderingState", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)cmd;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer::Clear(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::CameraRenderType cameraType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Clear", std::vector<std::string> { "UnityEngine.Rendering.Universal.CameraRenderType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&cameraType;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer::ExecuteBlock(int32_t blockIndex, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderBlocks& renderBlocks, UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData, bool submit)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ExecuteBlock", std::vector<std::string> { "System.Int32", "UnityEngine.Rendering.Universal.ScriptableRenderer/RenderBlocks&", "UnityEngine.Rendering.ScriptableRenderContext", "UnityEngine.Rendering.Universal.RenderingData&", "System.Boolean" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&blockIndex;
	params[1] = (intptr_t)&renderBlocks;
	params[2] = (intptr_t)&context;
	params[3] = (intptr_t)&renderingData;
	params[4] = (intptr_t)&submit;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer::ExecuteRenderPass(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderPass* renderPass, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ExecuteRenderPass", std::vector<std::string> { "UnityEngine.Rendering.ScriptableRenderContext", "UnityEngine.Rendering.Universal.ScriptableRenderPass", "UnityEngine.Rendering.Universal.RenderingData&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&context;
	params[1] = (intptr_t)renderPass;
	params[2] = (intptr_t)&renderingData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer::SetRenderPassAttachments(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderPass* renderPass, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::CameraData& cameraData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetRenderPassAttachments", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "UnityEngine.Rendering.Universal.ScriptableRenderPass", "UnityEngine.Rendering.Universal.CameraData&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)cmd;
	params[1] = (intptr_t)renderPass;
	params[2] = (intptr_t)&cameraData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer::BeginXRRendering(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::CameraData& cameraData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BeginXRRendering", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "UnityEngine.Rendering.ScriptableRenderContext", "UnityEngine.Rendering.Universal.CameraData&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)cmd;
	params[1] = (intptr_t)&context;
	params[2] = (intptr_t)&cameraData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer::EndXRRendering(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::CameraData& cameraData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EndXRRendering", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "UnityEngine.Rendering.ScriptableRenderContext", "UnityEngine.Rendering.Universal.CameraData&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)cmd;
	params[1] = (intptr_t)&context;
	params[2] = (intptr_t)&cameraData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer::SetRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier colorAttachment, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier depthAttachment, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClearFlag clearFlag, UnityEngine_CoreModule::UnityEngine::Color clearColor)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetRenderTarget", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "UnityEngine.Rendering.RenderTargetIdentifier", "UnityEngine.Rendering.RenderTargetIdentifier", "UnityEngine.Rendering.ClearFlag", "UnityEngine.Color" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)cmd;
	params[1] = (intptr_t)&colorAttachment;
	params[2] = (intptr_t)&depthAttachment;
	params[3] = (intptr_t)&clearFlag;
	params[4] = (intptr_t)&clearColor;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer::SetRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier colorAttachment, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClearFlag clearFlags, UnityEngine_CoreModule::UnityEngine::Color clearColor)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetRenderTarget", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "UnityEngine.Rendering.RenderTargetIdentifier", "UnityEngine.Rendering.RenderBufferLoadAction", "UnityEngine.Rendering.RenderBufferStoreAction", "UnityEngine.Rendering.ClearFlag", "UnityEngine.Color" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)cmd;
	params[1] = (intptr_t)&colorAttachment;
	params[2] = (intptr_t)&colorLoadAction;
	params[3] = (intptr_t)&colorStoreAction;
	params[4] = (intptr_t)&clearFlags;
	params[5] = (intptr_t)&clearColor;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer::SetRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier colorAttachment, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier depthAttachment, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClearFlag clearFlags, UnityEngine_CoreModule::UnityEngine::Color clearColor)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetRenderTarget", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "UnityEngine.Rendering.RenderTargetIdentifier", "UnityEngine.Rendering.RenderBufferLoadAction", "UnityEngine.Rendering.RenderBufferStoreAction", "UnityEngine.Rendering.RenderTargetIdentifier", "UnityEngine.Rendering.RenderBufferLoadAction", "UnityEngine.Rendering.RenderBufferStoreAction", "UnityEngine.Rendering.ClearFlag", "UnityEngine.Color" });
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)cmd;
	params[1] = (intptr_t)&colorAttachment;
	params[2] = (intptr_t)&colorLoadAction;
	params[3] = (intptr_t)&colorStoreAction;
	params[4] = (intptr_t)&depthAttachment;
	params[5] = (intptr_t)&depthLoadAction;
	params[6] = (intptr_t)&depthStoreAction;
	params[7] = (intptr_t)&clearFlags;
	params[8] = (intptr_t)&clearColor;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer::SetRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier>* colorAttachments, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier depthAttachment, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClearFlag clearFlag, UnityEngine_CoreModule::UnityEngine::Color clearColor)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetRenderTarget", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "UnityEngine.Rendering.RenderTargetIdentifier[]", "UnityEngine.Rendering.RenderTargetIdentifier", "UnityEngine.Rendering.ClearFlag", "UnityEngine.Color" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)cmd;
	params[1] = (intptr_t)colorAttachments;
	params[2] = (intptr_t)&depthAttachment;
	params[3] = (intptr_t)&clearFlag;
	params[4] = (intptr_t)&clearColor;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer::DrawGizmos(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, UnityEngine_CoreModule::UnityEngine::Camera* camera, UnityEngine_CoreModule::UnityEngine::Rendering::GizmoSubset gizmoSubset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawGizmos", std::vector<std::string> { "UnityEngine.Rendering.ScriptableRenderContext", "UnityEngine.Camera", "UnityEngine.Rendering.GizmoSubset" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&context;
	params[1] = (intptr_t)camera;
	params[2] = (intptr_t)&gizmoSubset;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer::DrawWireOverlay(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, UnityEngine_CoreModule::UnityEngine::Camera* camera)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawWireOverlay", std::vector<std::string> { "UnityEngine.Rendering.ScriptableRenderContext", "UnityEngine.Camera" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&context;
	params[1] = (intptr_t)camera;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer::InternalStartRendering(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalStartRendering", std::vector<std::string> { "UnityEngine.Rendering.ScriptableRenderContext", "UnityEngine.Rendering.Universal.RenderingData&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&context;
	params[1] = (intptr_t)&renderingData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer::InternalFinishRendering(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, bool resolveFinalTarget)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalFinishRendering", std::vector<std::string> { "UnityEngine.Rendering.ScriptableRenderContext", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&context;
	params[1] = (intptr_t)&resolveFinalTarget;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer::SortStable(mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderPass>* list)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SortStable", std::vector<std::string> { "System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.ScriptableRenderPass>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)list;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
