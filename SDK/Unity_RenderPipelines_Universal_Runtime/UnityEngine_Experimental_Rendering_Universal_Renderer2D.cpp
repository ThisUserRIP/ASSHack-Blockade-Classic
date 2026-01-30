#include "UnityEngine_Experimental_Rendering_Universal_Renderer2D.h"

IL2CPP::Il2CppClass* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Renderer2D::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.RenderPipelines.Universal.Runtime.dll", "UnityEngine.Experimental.Rendering.Universal", "Renderer2D");
	return il2cppclass;
}
mscorlib::System::Type* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Renderer2D::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Renderer2D::get_createColorTexture()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_createColorTexture");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Renderer2D::get_createDepthTexture()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_createDepthTexture");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Renderer2D::_ctor(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Renderer2DData* data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.Experimental.Rendering.Universal.Renderer2DData" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)data;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Renderer2D::Dispose(bool disposing)
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
Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Renderer2DData* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Renderer2D::GetRenderer2DData()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetRenderer2DData");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Renderer2DData*)returnValue;
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Renderer2D::CreateRenderTextures(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::CameraData& cameraData, bool forceCreateColorTexture, UnityEngine_CoreModule::UnityEngine::FilterMode colorTextureFilterMode, UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle& colorTargetHandle, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle& depthTargetHandle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateRenderTextures", std::vector<std::string> { "UnityEngine.Rendering.Universal.CameraData&", "System.Boolean", "UnityEngine.FilterMode", "UnityEngine.Rendering.CommandBuffer", "UnityEngine.Rendering.Universal.RenderTargetHandle&", "UnityEngine.Rendering.Universal.RenderTargetHandle&" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&cameraData;
	params[1] = (intptr_t)&forceCreateColorTexture;
	params[2] = (intptr_t)&colorTextureFilterMode;
	params[3] = (intptr_t)cmd;
	params[4] = (intptr_t)&colorTargetHandle;
	params[5] = (intptr_t)&depthTargetHandle;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Renderer2D::Setup(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData)
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
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Renderer2D::SetupCullingParameters(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableCullingParameters& cullingParameters, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::CameraData& cameraData)
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
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Renderer2D::FinishRendering(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd)
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
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Renderer2D::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
