#include "UnityEngine_Experimental_Rendering_Universal_RendererLighting.h"

IL2CPP::Il2CppClass* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::RendererLighting::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.RenderPipelines.Universal.Runtime.dll", "UnityEngine.Experimental.Rendering.Universal", "RendererLighting");
	return il2cppclass;
}
mscorlib::System::Type* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::RendererLighting::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::RendererLighting::GetRenderTextureFormat()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetRenderTextureFormat");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat>(*(UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat*)il2cpp_object_unbox(returnValue));
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::RendererLighting::CreateNormalMapRenderTexture(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::IRenderPass2D* pass, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData renderingData, UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateNormalMapRenderTexture", std::vector<std::string> { "UnityEngine.Experimental.Rendering.Universal.IRenderPass2D", "UnityEngine.Rendering.Universal.RenderingData", "UnityEngine.Rendering.CommandBuffer" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)pass;
	params[1] = (intptr_t)&renderingData;
	params[2] = (intptr_t)cmd;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::RendererLighting::CreateBlendStyleRenderTexture(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::IRenderPass2D* pass, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData renderingData, UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, int32_t blendStyleIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateBlendStyleRenderTexture", std::vector<std::string> { "UnityEngine.Experimental.Rendering.Universal.IRenderPass2D", "UnityEngine.Rendering.Universal.RenderingData", "UnityEngine.Rendering.CommandBuffer", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)pass;
	params[1] = (intptr_t)&renderingData;
	params[2] = (intptr_t)cmd;
	params[3] = (intptr_t)&blendStyleIndex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::RendererLighting::EnableBlendStyle(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, int32_t blendStyleIndex, bool enabled)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EnableBlendStyle", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)cmd;
	params[1] = (intptr_t)&blendStyleIndex;
	params[2] = (intptr_t)&enabled;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::RendererLighting::ReleaseRenderTextures(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::IRenderPass2D* pass, UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReleaseRenderTextures", std::vector<std::string> { "UnityEngine.Experimental.Rendering.Universal.IRenderPass2D", "UnityEngine.Rendering.CommandBuffer" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)pass;
	params[1] = (intptr_t)cmd;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::RendererLighting::RenderLightSet(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::IRenderPass2D* pass, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData renderingData, int32_t blendStyleIndex, UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, int32_t layerToRender, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier renderTexture, bool rtNeedsClear, UnityEngine_CoreModule::UnityEngine::Color clearColor, mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Light2D>* lights)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RenderLightSet", std::vector<std::string> { "UnityEngine.Experimental.Rendering.Universal.IRenderPass2D", "UnityEngine.Rendering.Universal.RenderingData", "System.Int32", "UnityEngine.Rendering.CommandBuffer", "System.Int32", "UnityEngine.Rendering.RenderTargetIdentifier", "System.Boolean", "UnityEngine.Color", "System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.Universal.Light2D>" });
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)pass;
	params[1] = (intptr_t)&renderingData;
	params[2] = (intptr_t)&blendStyleIndex;
	params[3] = (intptr_t)cmd;
	params[4] = (intptr_t)&layerToRender;
	params[5] = (intptr_t)&renderTexture;
	params[6] = (intptr_t)&rtNeedsClear;
	params[7] = (intptr_t)&clearColor;
	params[8] = (intptr_t)lights;
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
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::RendererLighting::RenderLightVolumeSet(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::IRenderPass2D* pass, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData renderingData, int32_t blendStyleIndex, UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, int32_t layerToRender, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier renderTexture, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier depthTexture, mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Light2D>* lights)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RenderLightVolumeSet", std::vector<std::string> { "UnityEngine.Experimental.Rendering.Universal.IRenderPass2D", "UnityEngine.Rendering.Universal.RenderingData", "System.Int32", "UnityEngine.Rendering.CommandBuffer", "System.Int32", "UnityEngine.Rendering.RenderTargetIdentifier", "UnityEngine.Rendering.RenderTargetIdentifier", "System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.Universal.Light2D>" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)pass;
	params[1] = (intptr_t)&renderingData;
	params[2] = (intptr_t)&blendStyleIndex;
	params[3] = (intptr_t)cmd;
	params[4] = (intptr_t)&layerToRender;
	params[5] = (intptr_t)&renderTexture;
	params[6] = (intptr_t)&depthTexture;
	params[7] = (intptr_t)lights;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::RendererLighting::SetShapeLightShaderGlobals(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::IRenderPass2D* pass, UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetShapeLightShaderGlobals", std::vector<std::string> { "UnityEngine.Experimental.Rendering.Universal.IRenderPass2D", "UnityEngine.Rendering.CommandBuffer" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)pass;
	params[1] = (intptr_t)cmd;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
float Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::RendererLighting::GetNormalizedInnerRadius(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Light2D* light)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetNormalizedInnerRadius", std::vector<std::string> { "UnityEngine.Experimental.Rendering.Universal.Light2D" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)light;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
float Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::RendererLighting::GetNormalizedAngle(float angle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetNormalizedAngle", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&angle;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::RendererLighting::GetScaledLightInvMatrix(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Light2D* light, UnityEngine_CoreModule::UnityEngine::Matrix4x4& retMatrix, bool includeRotation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetScaledLightInvMatrix", std::vector<std::string> { "UnityEngine.Experimental.Rendering.Universal.Light2D", "UnityEngine.Matrix4x4&", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)light;
	params[1] = (intptr_t)&retMatrix;
	params[2] = (intptr_t)&includeRotation;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::RendererLighting::SetPointLightShaderGlobals(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Light2D* light)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetPointLightShaderGlobals", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "UnityEngine.Experimental.Rendering.Universal.Light2D" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)cmd;
	params[1] = (intptr_t)light;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::RendererLighting::ClearDirtyLighting(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::IRenderPass2D* pass, UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, uint32_t blendStylesUsed)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearDirtyLighting", std::vector<std::string> { "UnityEngine.Experimental.Rendering.Universal.IRenderPass2D", "UnityEngine.Rendering.CommandBuffer", "System.UInt32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)pass;
	params[1] = (intptr_t)cmd;
	params[2] = (intptr_t)&blendStylesUsed;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::RendererLighting::RenderNormals(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::IRenderPass2D* pass, UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults cullResults, UnityEngine_CoreModule::UnityEngine::Rendering::DrawingSettings drawSettings, UnityEngine_CoreModule::UnityEngine::Rendering::FilteringSettings filterSettings, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier depthTarget)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RenderNormals", std::vector<std::string> { "UnityEngine.Experimental.Rendering.Universal.IRenderPass2D", "UnityEngine.Rendering.ScriptableRenderContext", "UnityEngine.Rendering.CullingResults", "UnityEngine.Rendering.DrawingSettings", "UnityEngine.Rendering.FilteringSettings", "UnityEngine.Rendering.RenderTargetIdentifier" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)pass;
	params[1] = (intptr_t)&context;
	params[2] = (intptr_t)&cullResults;
	params[3] = (intptr_t)&drawSettings;
	params[4] = (intptr_t)&filterSettings;
	params[5] = (intptr_t)&depthTarget;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::RendererLighting::RenderLights(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::IRenderPass2D* pass, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData renderingData, UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, int32_t layerToRender, uint32_t blendStylesUsed)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RenderLights", std::vector<std::string> { "UnityEngine.Experimental.Rendering.Universal.IRenderPass2D", "UnityEngine.Rendering.Universal.RenderingData", "UnityEngine.Rendering.CommandBuffer", "System.Int32", "System.UInt32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)pass;
	params[1] = (intptr_t)&renderingData;
	params[2] = (intptr_t)cmd;
	params[3] = (intptr_t)&layerToRender;
	params[4] = (intptr_t)&blendStylesUsed;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::RendererLighting::RenderLightVolumes(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::IRenderPass2D* pass, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData renderingData, UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, int32_t layerToRender, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier renderTarget, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier depthTarget, uint32_t blendStylesUsed)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RenderLightVolumes", std::vector<std::string> { "UnityEngine.Experimental.Rendering.Universal.IRenderPass2D", "UnityEngine.Rendering.Universal.RenderingData", "UnityEngine.Rendering.CommandBuffer", "System.Int32", "UnityEngine.Rendering.RenderTargetIdentifier", "UnityEngine.Rendering.RenderTargetIdentifier", "System.UInt32" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)pass;
	params[1] = (intptr_t)&renderingData;
	params[2] = (intptr_t)cmd;
	params[3] = (intptr_t)&layerToRender;
	params[4] = (intptr_t)&renderTarget;
	params[5] = (intptr_t)&depthTarget;
	params[6] = (intptr_t)&blendStylesUsed;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::RendererLighting::SetBlendModes(UnityEngine_CoreModule::UnityEngine::Material* material, UnityEngine_CoreModule::UnityEngine::Rendering::BlendMode src, UnityEngine_CoreModule::UnityEngine::Rendering::BlendMode dst)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetBlendModes", std::vector<std::string> { "UnityEngine.Material", "UnityEngine.Rendering.BlendMode", "UnityEngine.Rendering.BlendMode" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)material;
	params[1] = (intptr_t)&src;
	params[2] = (intptr_t)&dst;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
uint32_t Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::RendererLighting::GetLightMaterialIndex(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Light2D* light, bool isVolume)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetLightMaterialIndex", std::vector<std::string> { "UnityEngine.Experimental.Rendering.Universal.Light2D", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)light;
	params[1] = (intptr_t)&isVolume;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Material* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::RendererLighting::CreateLightMaterial(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Renderer2DData* rendererData, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Light2D* light, bool isVolume)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateLightMaterial", std::vector<std::string> { "UnityEngine.Experimental.Rendering.Universal.Renderer2DData", "UnityEngine.Experimental.Rendering.Universal.Light2D", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)rendererData;
	params[1] = (intptr_t)light;
	params[2] = (intptr_t)&isVolume;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Material*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Material* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::RendererLighting::GetLightMaterial(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Renderer2DData* rendererData, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Light2D* light, bool isVolume)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetLightMaterial", std::vector<std::string> { "UnityEngine.Experimental.Rendering.Universal.Renderer2DData", "UnityEngine.Experimental.Rendering.Universal.Light2D", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)rendererData;
	params[1] = (intptr_t)light;
	params[2] = (intptr_t)&isVolume;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Material*)returnValue;
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::RendererLighting::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
