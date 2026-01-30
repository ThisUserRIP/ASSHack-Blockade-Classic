#include "UnityEngine_Experimental_Rendering_Universal_ShadowRendering.h"

IL2CPP::Il2CppClass* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowRendering::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.RenderPipelines.Universal.Runtime.dll", "UnityEngine.Experimental.Rendering.Universal", "ShadowRendering");
	return il2cppclass;
}
mscorlib::System::Type* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowRendering::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_CoreModule::UnityEngine::Material* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowRendering::GetShadowMaterial(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Renderer2DData* rendererData, int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetShadowMaterial", std::vector<std::string> { "UnityEngine.Experimental.Rendering.Universal.Renderer2DData", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)rendererData;
	params[1] = (intptr_t)&index;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Material*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Material* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowRendering::GetRemoveSelfShadowMaterial(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Renderer2DData* rendererData, int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetRemoveSelfShadowMaterial", std::vector<std::string> { "UnityEngine.Experimental.Rendering.Universal.Renderer2DData", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)rendererData;
	params[1] = (intptr_t)&index;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Material*)returnValue;
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowRendering::CreateShadowRenderTexture(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::IRenderPass2D* pass, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData renderingData, UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, int32_t blendStyleIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateShadowRenderTexture", std::vector<std::string> { "UnityEngine.Experimental.Rendering.Universal.IRenderPass2D", "UnityEngine.Rendering.Universal.RenderingData", "UnityEngine.Rendering.CommandBuffer", "System.Int32" });
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
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowRendering::RenderShadows(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::IRenderPass2D* pass, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData renderingData, UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmdBuffer, int32_t layerToRender, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Light2D* light, float shadowIntensity, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier renderTexture, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier depthTexture)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RenderShadows", std::vector<std::string> { "UnityEngine.Experimental.Rendering.Universal.IRenderPass2D", "UnityEngine.Rendering.Universal.RenderingData", "UnityEngine.Rendering.CommandBuffer", "System.Int32", "UnityEngine.Experimental.Rendering.Universal.Light2D", "System.Single", "UnityEngine.Rendering.RenderTargetIdentifier", "UnityEngine.Rendering.RenderTargetIdentifier" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)pass;
	params[1] = (intptr_t)&renderingData;
	params[2] = (intptr_t)cmdBuffer;
	params[3] = (intptr_t)&layerToRender;
	params[4] = (intptr_t)light;
	params[5] = (intptr_t)&shadowIntensity;
	params[6] = (intptr_t)&renderTexture;
	params[7] = (intptr_t)&depthTexture;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowRendering::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
