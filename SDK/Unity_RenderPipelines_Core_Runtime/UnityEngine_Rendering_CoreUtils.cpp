#include "UnityEngine_Rendering_CoreUtils.h"

IL2CPP::Il2CppClass* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.RenderPipelines.Core.Runtime.dll", "UnityEngine.Rendering", "CoreUtils");
	return il2cppclass;
}
mscorlib::System::Type* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_CoreModule::UnityEngine::Cubemap* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::get_blackCubeTexture()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_blackCubeTexture");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Cubemap*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Cubemap* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::get_magentaCubeTexture()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_magentaCubeTexture");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Cubemap*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::CubemapArray* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::get_magentaCubeTextureArray()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_magentaCubeTextureArray");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::CubemapArray*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Cubemap* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::get_whiteCubeTexture()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_whiteCubeTexture");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Cubemap*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::RenderTexture* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::get_emptyUAV()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_emptyUAV");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::RenderTexture*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Texture3D* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::get_blackVolumeTexture()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_blackVolumeTexture");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Texture3D*)returnValue;
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::ClearRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClearFlag clearFlag, UnityEngine_CoreModule::UnityEngine::Color clearColor)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearRenderTarget", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "UnityEngine.Rendering.ClearFlag", "UnityEngine.Color" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)cmd;
	params[1] = (intptr_t)&clearFlag;
	params[2] = (intptr_t)&clearColor;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::FixupDepthSlice(int32_t depthSlice, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* buffer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FixupDepthSlice", std::vector<std::string> { "System.Int32", "UnityEngine.Rendering.RTHandle" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&depthSlice;
	params[1] = (intptr_t)buffer;
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
int32_t Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::FixupDepthSlice(int32_t depthSlice, UnityEngine_CoreModule::UnityEngine::CubemapFace cubemapFace)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FixupDepthSlice", std::vector<std::string> { "System.Int32", "UnityEngine.CubemapFace" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&depthSlice;
	params[1] = (intptr_t)&cubemapFace;
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
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::SetRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier buffer, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClearFlag clearFlag, UnityEngine_CoreModule::UnityEngine::Color clearColor, int32_t miplevel, UnityEngine_CoreModule::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetRenderTarget", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "UnityEngine.Rendering.RenderTargetIdentifier", "UnityEngine.Rendering.ClearFlag", "UnityEngine.Color", "System.Int32", "UnityEngine.CubemapFace", "System.Int32" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)cmd;
	params[1] = (intptr_t)&buffer;
	params[2] = (intptr_t)&clearFlag;
	params[3] = (intptr_t)&clearColor;
	params[4] = (intptr_t)&miplevel;
	params[5] = (intptr_t)&cubemapFace;
	params[6] = (intptr_t)&depthSlice;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::SetRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier buffer, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClearFlag clearFlag, int32_t miplevel, UnityEngine_CoreModule::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetRenderTarget", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "UnityEngine.Rendering.RenderTargetIdentifier", "UnityEngine.Rendering.ClearFlag", "System.Int32", "UnityEngine.CubemapFace", "System.Int32" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)cmd;
	params[1] = (intptr_t)&buffer;
	params[2] = (intptr_t)&clearFlag;
	params[3] = (intptr_t)&miplevel;
	params[4] = (intptr_t)&cubemapFace;
	params[5] = (intptr_t)&depthSlice;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::SetRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, int32_t miplevel, UnityEngine_CoreModule::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetRenderTarget", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "UnityEngine.Rendering.RenderTargetIdentifier", "UnityEngine.Rendering.RenderTargetIdentifier", "System.Int32", "UnityEngine.CubemapFace", "System.Int32" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)cmd;
	params[1] = (intptr_t)&colorBuffer;
	params[2] = (intptr_t)&depthBuffer;
	params[3] = (intptr_t)&miplevel;
	params[4] = (intptr_t)&cubemapFace;
	params[5] = (intptr_t)&depthSlice;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::SetRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClearFlag clearFlag, int32_t miplevel, UnityEngine_CoreModule::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetRenderTarget", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "UnityEngine.Rendering.RenderTargetIdentifier", "UnityEngine.Rendering.RenderTargetIdentifier", "UnityEngine.Rendering.ClearFlag", "System.Int32", "UnityEngine.CubemapFace", "System.Int32" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)cmd;
	params[1] = (intptr_t)&colorBuffer;
	params[2] = (intptr_t)&depthBuffer;
	params[3] = (intptr_t)&clearFlag;
	params[4] = (intptr_t)&miplevel;
	params[5] = (intptr_t)&cubemapFace;
	params[6] = (intptr_t)&depthSlice;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::SetRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClearFlag clearFlag, UnityEngine_CoreModule::UnityEngine::Color clearColor, int32_t miplevel, UnityEngine_CoreModule::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetRenderTarget", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "UnityEngine.Rendering.RenderTargetIdentifier", "UnityEngine.Rendering.RenderTargetIdentifier", "UnityEngine.Rendering.ClearFlag", "UnityEngine.Color", "System.Int32", "UnityEngine.CubemapFace", "System.Int32" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)cmd;
	params[1] = (intptr_t)&colorBuffer;
	params[2] = (intptr_t)&depthBuffer;
	params[3] = (intptr_t)&clearFlag;
	params[4] = (intptr_t)&clearColor;
	params[5] = (intptr_t)&miplevel;
	params[6] = (intptr_t)&cubemapFace;
	params[7] = (intptr_t)&depthSlice;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::SetRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier>* colorBuffers, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetRenderTarget", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "UnityEngine.Rendering.RenderTargetIdentifier[]", "UnityEngine.Rendering.RenderTargetIdentifier" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)cmd;
	params[1] = (intptr_t)colorBuffers;
	params[2] = (intptr_t)&depthBuffer;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::SetRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier>* colorBuffers, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClearFlag clearFlag)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetRenderTarget", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "UnityEngine.Rendering.RenderTargetIdentifier[]", "UnityEngine.Rendering.RenderTargetIdentifier", "UnityEngine.Rendering.ClearFlag" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)cmd;
	params[1] = (intptr_t)colorBuffers;
	params[2] = (intptr_t)&depthBuffer;
	params[3] = (intptr_t)&clearFlag;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::SetRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier>* colorBuffers, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClearFlag clearFlag, UnityEngine_CoreModule::UnityEngine::Color clearColor)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetRenderTarget", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "UnityEngine.Rendering.RenderTargetIdentifier[]", "UnityEngine.Rendering.RenderTargetIdentifier", "UnityEngine.Rendering.ClearFlag", "UnityEngine.Color" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)cmd;
	params[1] = (intptr_t)colorBuffers;
	params[2] = (intptr_t)&depthBuffer;
	params[3] = (intptr_t)&clearFlag;
	params[4] = (intptr_t)&clearColor;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::SetRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier buffer, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferLoadAction loadAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferStoreAction storeAction, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClearFlag clearFlag, UnityEngine_CoreModule::UnityEngine::Color clearColor)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetRenderTarget", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "UnityEngine.Rendering.RenderTargetIdentifier", "UnityEngine.Rendering.RenderBufferLoadAction", "UnityEngine.Rendering.RenderBufferStoreAction", "UnityEngine.Rendering.ClearFlag", "UnityEngine.Color" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)cmd;
	params[1] = (intptr_t)&buffer;
	params[2] = (intptr_t)&loadAction;
	params[3] = (intptr_t)&storeAction;
	params[4] = (intptr_t)&clearFlag;
	params[5] = (intptr_t)&clearColor;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::SetRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier buffer, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferLoadAction loadAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferStoreAction storeAction, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClearFlag clearFlag)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetRenderTarget", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "UnityEngine.Rendering.RenderTargetIdentifier", "UnityEngine.Rendering.RenderBufferLoadAction", "UnityEngine.Rendering.RenderBufferStoreAction", "UnityEngine.Rendering.ClearFlag" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)cmd;
	params[1] = (intptr_t)&buffer;
	params[2] = (intptr_t)&loadAction;
	params[3] = (intptr_t)&storeAction;
	params[4] = (intptr_t)&clearFlag;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::SetRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClearFlag clearFlag, UnityEngine_CoreModule::UnityEngine::Color clearColor)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetRenderTarget", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "UnityEngine.Rendering.RenderTargetIdentifier", "UnityEngine.Rendering.RenderBufferLoadAction", "UnityEngine.Rendering.RenderBufferStoreAction", "UnityEngine.Rendering.RenderTargetIdentifier", "UnityEngine.Rendering.RenderBufferLoadAction", "UnityEngine.Rendering.RenderBufferStoreAction", "UnityEngine.Rendering.ClearFlag", "UnityEngine.Color" });
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)cmd;
	params[1] = (intptr_t)&colorBuffer;
	params[2] = (intptr_t)&colorLoadAction;
	params[3] = (intptr_t)&colorStoreAction;
	params[4] = (intptr_t)&depthBuffer;
	params[5] = (intptr_t)&depthLoadAction;
	params[6] = (intptr_t)&depthStoreAction;
	params[7] = (intptr_t)&clearFlag;
	params[8] = (intptr_t)&clearColor;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::SetRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClearFlag clearFlag)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetRenderTarget", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "UnityEngine.Rendering.RenderTargetIdentifier", "UnityEngine.Rendering.RenderBufferLoadAction", "UnityEngine.Rendering.RenderBufferStoreAction", "UnityEngine.Rendering.RenderTargetIdentifier", "UnityEngine.Rendering.RenderBufferLoadAction", "UnityEngine.Rendering.RenderBufferStoreAction", "UnityEngine.Rendering.ClearFlag" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)cmd;
	params[1] = (intptr_t)&colorBuffer;
	params[2] = (intptr_t)&colorLoadAction;
	params[3] = (intptr_t)&colorStoreAction;
	params[4] = (intptr_t)&depthBuffer;
	params[5] = (intptr_t)&depthLoadAction;
	params[6] = (intptr_t)&depthStoreAction;
	params[7] = (intptr_t)&clearFlag;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::SetViewportAndClear(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* buffer, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClearFlag clearFlag, UnityEngine_CoreModule::UnityEngine::Color clearColor)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetViewportAndClear", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "UnityEngine.Rendering.RTHandle", "UnityEngine.Rendering.ClearFlag", "UnityEngine.Color" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)cmd;
	params[1] = (intptr_t)buffer;
	params[2] = (intptr_t)&clearFlag;
	params[3] = (intptr_t)&clearColor;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::SetRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* buffer, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClearFlag clearFlag, UnityEngine_CoreModule::UnityEngine::Color clearColor, int32_t miplevel, UnityEngine_CoreModule::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetRenderTarget", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "UnityEngine.Rendering.RTHandle", "UnityEngine.Rendering.ClearFlag", "UnityEngine.Color", "System.Int32", "UnityEngine.CubemapFace", "System.Int32" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)cmd;
	params[1] = (intptr_t)buffer;
	params[2] = (intptr_t)&clearFlag;
	params[3] = (intptr_t)&clearColor;
	params[4] = (intptr_t)&miplevel;
	params[5] = (intptr_t)&cubemapFace;
	params[6] = (intptr_t)&depthSlice;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::SetRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* buffer, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClearFlag clearFlag, int32_t miplevel, UnityEngine_CoreModule::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetRenderTarget", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "UnityEngine.Rendering.RTHandle", "UnityEngine.Rendering.ClearFlag", "System.Int32", "UnityEngine.CubemapFace", "System.Int32" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)cmd;
	params[1] = (intptr_t)buffer;
	params[2] = (intptr_t)&clearFlag;
	params[3] = (intptr_t)&miplevel;
	params[4] = (intptr_t)&cubemapFace;
	params[5] = (intptr_t)&depthSlice;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::SetRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* colorBuffer, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* depthBuffer, int32_t miplevel, UnityEngine_CoreModule::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetRenderTarget", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "UnityEngine.Rendering.RTHandle", "UnityEngine.Rendering.RTHandle", "System.Int32", "UnityEngine.CubemapFace", "System.Int32" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)cmd;
	params[1] = (intptr_t)colorBuffer;
	params[2] = (intptr_t)depthBuffer;
	params[3] = (intptr_t)&miplevel;
	params[4] = (intptr_t)&cubemapFace;
	params[5] = (intptr_t)&depthSlice;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::SetRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* colorBuffer, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* depthBuffer, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClearFlag clearFlag, int32_t miplevel, UnityEngine_CoreModule::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetRenderTarget", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "UnityEngine.Rendering.RTHandle", "UnityEngine.Rendering.RTHandle", "UnityEngine.Rendering.ClearFlag", "System.Int32", "UnityEngine.CubemapFace", "System.Int32" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)cmd;
	params[1] = (intptr_t)colorBuffer;
	params[2] = (intptr_t)depthBuffer;
	params[3] = (intptr_t)&clearFlag;
	params[4] = (intptr_t)&miplevel;
	params[5] = (intptr_t)&cubemapFace;
	params[6] = (intptr_t)&depthSlice;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::SetRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* colorBuffer, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* depthBuffer, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClearFlag clearFlag, UnityEngine_CoreModule::UnityEngine::Color clearColor, int32_t miplevel, UnityEngine_CoreModule::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetRenderTarget", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "UnityEngine.Rendering.RTHandle", "UnityEngine.Rendering.RTHandle", "UnityEngine.Rendering.ClearFlag", "UnityEngine.Color", "System.Int32", "UnityEngine.CubemapFace", "System.Int32" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)cmd;
	params[1] = (intptr_t)colorBuffer;
	params[2] = (intptr_t)depthBuffer;
	params[3] = (intptr_t)&clearFlag;
	params[4] = (intptr_t)&clearColor;
	params[5] = (intptr_t)&miplevel;
	params[6] = (intptr_t)&cubemapFace;
	params[7] = (intptr_t)&depthSlice;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::SetRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier>* colorBuffers, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* depthBuffer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetRenderTarget", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "UnityEngine.Rendering.RenderTargetIdentifier[]", "UnityEngine.Rendering.RTHandle" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)cmd;
	params[1] = (intptr_t)colorBuffers;
	params[2] = (intptr_t)depthBuffer;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::SetRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier>* colorBuffers, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* depthBuffer, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClearFlag clearFlag)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetRenderTarget", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "UnityEngine.Rendering.RenderTargetIdentifier[]", "UnityEngine.Rendering.RTHandle", "UnityEngine.Rendering.ClearFlag" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)cmd;
	params[1] = (intptr_t)colorBuffers;
	params[2] = (intptr_t)depthBuffer;
	params[3] = (intptr_t)&clearFlag;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::SetRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier>* colorBuffers, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* depthBuffer, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClearFlag clearFlag, UnityEngine_CoreModule::UnityEngine::Color clearColor)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetRenderTarget", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "UnityEngine.Rendering.RenderTargetIdentifier[]", "UnityEngine.Rendering.RTHandle", "UnityEngine.Rendering.ClearFlag", "UnityEngine.Color" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)cmd;
	params[1] = (intptr_t)colorBuffers;
	params[2] = (intptr_t)depthBuffer;
	params[3] = (intptr_t)&clearFlag;
	params[4] = (intptr_t)&clearColor;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::SetViewport(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* target)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetViewport", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "UnityEngine.Rendering.RTHandle" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)cmd;
	params[1] = (intptr_t)target;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::GetRenderTargetAutoName(int32_t width, int32_t height, int32_t depth, UnityEngine_CoreModule::UnityEngine::RenderTextureFormat format, mscorlib::System::String* name, bool mips, bool enableMSAA, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MSAASamples msaaSamples)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetRenderTargetAutoName", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "UnityEngine.RenderTextureFormat", "System.String", "System.Boolean", "System.Boolean", "UnityEngine.Rendering.MSAASamples" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)&width;
	params[1] = (intptr_t)&height;
	params[2] = (intptr_t)&depth;
	params[3] = (intptr_t)&format;
	params[4] = (intptr_t)name;
	params[5] = (intptr_t)&mips;
	params[6] = (intptr_t)&enableMSAA;
	params[7] = (intptr_t)&msaaSamples;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::GetRenderTargetAutoName(int32_t width, int32_t height, int32_t depth, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat format, mscorlib::System::String* name, bool mips, bool enableMSAA, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MSAASamples msaaSamples)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetRenderTargetAutoName", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "UnityEngine.Experimental.Rendering.GraphicsFormat", "System.String", "System.Boolean", "System.Boolean", "UnityEngine.Rendering.MSAASamples" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)&width;
	params[1] = (intptr_t)&height;
	params[2] = (intptr_t)&depth;
	params[3] = (intptr_t)&format;
	params[4] = (intptr_t)name;
	params[5] = (intptr_t)&mips;
	params[6] = (intptr_t)&enableMSAA;
	params[7] = (intptr_t)&msaaSamples;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::GetRenderTargetAutoName(int32_t width, int32_t height, int32_t depth, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine_CoreModule::UnityEngine::Rendering::TextureDimension dim, mscorlib::System::String* name, bool mips, bool enableMSAA, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MSAASamples msaaSamples, bool dynamicRes)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetRenderTargetAutoName", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "UnityEngine.Experimental.Rendering.GraphicsFormat", "UnityEngine.Rendering.TextureDimension", "System.String", "System.Boolean", "System.Boolean", "UnityEngine.Rendering.MSAASamples", "System.Boolean" });
	intptr_t* params = new intptr_t[10];
	params[0] = (intptr_t)&width;
	params[1] = (intptr_t)&height;
	params[2] = (intptr_t)&depth;
	params[3] = (intptr_t)&format;
	params[4] = (intptr_t)&dim;
	params[5] = (intptr_t)name;
	params[6] = (intptr_t)&mips;
	params[7] = (intptr_t)&enableMSAA;
	params[8] = (intptr_t)&msaaSamples;
	params[9] = (intptr_t)&dynamicRes;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::GetRenderTargetAutoName(int32_t width, int32_t height, int32_t depth, mscorlib::System::String* format, UnityEngine_CoreModule::UnityEngine::Rendering::TextureDimension dim, mscorlib::System::String* name, bool mips, bool enableMSAA, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MSAASamples msaaSamples, bool dynamicRes)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetRenderTargetAutoName", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "System.String", "UnityEngine.Rendering.TextureDimension", "System.String", "System.Boolean", "System.Boolean", "UnityEngine.Rendering.MSAASamples", "System.Boolean" });
	intptr_t* params = new intptr_t[10];
	params[0] = (intptr_t)&width;
	params[1] = (intptr_t)&height;
	params[2] = (intptr_t)&depth;
	params[3] = (intptr_t)format;
	params[4] = (intptr_t)&dim;
	params[5] = (intptr_t)name;
	params[6] = (intptr_t)&mips;
	params[7] = (intptr_t)&enableMSAA;
	params[8] = (intptr_t)&msaaSamples;
	params[9] = (intptr_t)&dynamicRes;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::GetTextureAutoName(int32_t width, int32_t height, UnityEngine_CoreModule::UnityEngine::TextureFormat format, UnityEngine_CoreModule::UnityEngine::Rendering::TextureDimension dim, mscorlib::System::String* name, bool mips, int32_t depth)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTextureAutoName", std::vector<std::string> { "System.Int32", "System.Int32", "UnityEngine.TextureFormat", "UnityEngine.Rendering.TextureDimension", "System.String", "System.Boolean", "System.Int32" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&width;
	params[1] = (intptr_t)&height;
	params[2] = (intptr_t)&format;
	params[3] = (intptr_t)&dim;
	params[4] = (intptr_t)name;
	params[5] = (intptr_t)&mips;
	params[6] = (intptr_t)&depth;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::GetTextureAutoName(int32_t width, int32_t height, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine_CoreModule::UnityEngine::Rendering::TextureDimension dim, mscorlib::System::String* name, bool mips, int32_t depth)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTextureAutoName", std::vector<std::string> { "System.Int32", "System.Int32", "UnityEngine.Experimental.Rendering.GraphicsFormat", "UnityEngine.Rendering.TextureDimension", "System.String", "System.Boolean", "System.Int32" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&width;
	params[1] = (intptr_t)&height;
	params[2] = (intptr_t)&format;
	params[3] = (intptr_t)&dim;
	params[4] = (intptr_t)name;
	params[5] = (intptr_t)&mips;
	params[6] = (intptr_t)&depth;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::GetTextureAutoName(int32_t width, int32_t height, mscorlib::System::String* format, UnityEngine_CoreModule::UnityEngine::Rendering::TextureDimension dim, mscorlib::System::String* name, bool mips, int32_t depth)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTextureAutoName", std::vector<std::string> { "System.Int32", "System.Int32", "System.String", "UnityEngine.Rendering.TextureDimension", "System.String", "System.Boolean", "System.Int32" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&width;
	params[1] = (intptr_t)&height;
	params[2] = (intptr_t)format;
	params[3] = (intptr_t)&dim;
	params[4] = (intptr_t)name;
	params[5] = (intptr_t)&mips;
	params[6] = (intptr_t)&depth;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::ClearCubemap(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, UnityEngine_CoreModule::UnityEngine::RenderTexture* renderTexture, UnityEngine_CoreModule::UnityEngine::Color clearColor, bool clearMips)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearCubemap", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "UnityEngine.RenderTexture", "UnityEngine.Color", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)cmd;
	params[1] = (intptr_t)renderTexture;
	params[2] = (intptr_t)&clearColor;
	params[3] = (intptr_t)&clearMips;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::DrawFullScreen(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* commandBuffer, UnityEngine_CoreModule::UnityEngine::Material* material, UnityEngine_CoreModule::UnityEngine::MaterialPropertyBlock* properties, int32_t shaderPassId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawFullScreen", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "UnityEngine.Material", "UnityEngine.MaterialPropertyBlock", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)commandBuffer;
	params[1] = (intptr_t)material;
	params[2] = (intptr_t)properties;
	params[3] = (intptr_t)&shaderPassId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::DrawFullScreen(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* commandBuffer, UnityEngine_CoreModule::UnityEngine::Material* material, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer, UnityEngine_CoreModule::UnityEngine::MaterialPropertyBlock* properties, int32_t shaderPassId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawFullScreen", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "UnityEngine.Material", "UnityEngine.Rendering.RenderTargetIdentifier", "UnityEngine.MaterialPropertyBlock", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)commandBuffer;
	params[1] = (intptr_t)material;
	params[2] = (intptr_t)&colorBuffer;
	params[3] = (intptr_t)properties;
	params[4] = (intptr_t)&shaderPassId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::DrawFullScreen(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* commandBuffer, UnityEngine_CoreModule::UnityEngine::Material* material, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier depthStencilBuffer, UnityEngine_CoreModule::UnityEngine::MaterialPropertyBlock* properties, int32_t shaderPassId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawFullScreen", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "UnityEngine.Material", "UnityEngine.Rendering.RenderTargetIdentifier", "UnityEngine.Rendering.RenderTargetIdentifier", "UnityEngine.MaterialPropertyBlock", "System.Int32" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)commandBuffer;
	params[1] = (intptr_t)material;
	params[2] = (intptr_t)&colorBuffer;
	params[3] = (intptr_t)&depthStencilBuffer;
	params[4] = (intptr_t)properties;
	params[5] = (intptr_t)&shaderPassId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::DrawFullScreen(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* commandBuffer, UnityEngine_CoreModule::UnityEngine::Material* material, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier>* colorBuffers, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier depthStencilBuffer, UnityEngine_CoreModule::UnityEngine::MaterialPropertyBlock* properties, int32_t shaderPassId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawFullScreen", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "UnityEngine.Material", "UnityEngine.Rendering.RenderTargetIdentifier[]", "UnityEngine.Rendering.RenderTargetIdentifier", "UnityEngine.MaterialPropertyBlock", "System.Int32" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)commandBuffer;
	params[1] = (intptr_t)material;
	params[2] = (intptr_t)colorBuffers;
	params[3] = (intptr_t)&depthStencilBuffer;
	params[4] = (intptr_t)properties;
	params[5] = (intptr_t)&shaderPassId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::DrawFullScreen(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* commandBuffer, UnityEngine_CoreModule::UnityEngine::Material* material, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier>* colorBuffers, UnityEngine_CoreModule::UnityEngine::MaterialPropertyBlock* properties, int32_t shaderPassId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawFullScreen", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "UnityEngine.Material", "UnityEngine.Rendering.RenderTargetIdentifier[]", "UnityEngine.MaterialPropertyBlock", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)commandBuffer;
	params[1] = (intptr_t)material;
	params[2] = (intptr_t)colorBuffers;
	params[3] = (intptr_t)properties;
	params[4] = (intptr_t)&shaderPassId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Color Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::ConvertSRGBToActiveColorSpace(UnityEngine_CoreModule::UnityEngine::Color color)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ConvertSRGBToActiveColorSpace", std::vector<std::string> { "UnityEngine.Color" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&color;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Color ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Color));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Color>(*(UnityEngine_CoreModule::UnityEngine::Color*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Color Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::ConvertLinearToActiveColorSpace(UnityEngine_CoreModule::UnityEngine::Color color)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ConvertLinearToActiveColorSpace", std::vector<std::string> { "UnityEngine.Color" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&color;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Color ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Color));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Color>(*(UnityEngine_CoreModule::UnityEngine::Color*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Material* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::CreateEngineMaterial(mscorlib::System::String* shaderPath)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateEngineMaterial", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)shaderPath;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Material*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Material* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::CreateEngineMaterial(UnityEngine_CoreModule::UnityEngine::Shader* shader)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateEngineMaterial", std::vector<std::string> { "UnityEngine.Shader" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)shader;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Material*)returnValue;
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::SetKeyword(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, mscorlib::System::String* keyword, bool state)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetKeyword", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)cmd;
	params[1] = (intptr_t)keyword;
	params[2] = (intptr_t)&state;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::SetKeyword(UnityEngine_CoreModule::UnityEngine::Material* material, mscorlib::System::String* keyword, bool state)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetKeyword", std::vector<std::string> { "UnityEngine.Material", "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)material;
	params[1] = (intptr_t)keyword;
	params[2] = (intptr_t)&state;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::SetKeyword(UnityEngine_CoreModule::UnityEngine::ComputeShader* cs, mscorlib::System::String* keyword, bool state)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetKeyword", std::vector<std::string> { "UnityEngine.ComputeShader", "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)cs;
	params[1] = (intptr_t)keyword;
	params[2] = (intptr_t)&state;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::Destroy(UnityEngine_CoreModule::UnityEngine::Object* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Destroy", std::vector<std::string> { "UnityEngine.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)obj;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Type>* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::GetAllAssemblyTypes()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAllAssemblyTypes");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Type>*)returnValue;
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::SafeRelease(UnityEngine_CoreModule::UnityEngine::ComputeBuffer* buffer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SafeRelease", std::vector<std::string> { "UnityEngine.ComputeBuffer" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)buffer;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Mesh* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::CreateCubeMesh(UnityEngine_CoreModule::UnityEngine::Vector3 min, UnityEngine_CoreModule::UnityEngine::Vector3 max)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateCubeMesh", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&min;
	params[1] = (intptr_t)&max;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Mesh*)returnValue;
}
bool Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::ArePostProcessesEnabled(UnityEngine_CoreModule::UnityEngine::Camera* camera)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ArePostProcessesEnabled", std::vector<std::string> { "UnityEngine.Camera" });
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
bool Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::AreAnimatedMaterialsEnabled(UnityEngine_CoreModule::UnityEngine::Camera* camera)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AreAnimatedMaterialsEnabled", std::vector<std::string> { "UnityEngine.Camera" });
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
bool Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::IsSceneLightingDisabled(UnityEngine_CoreModule::UnityEngine::Camera* camera)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsSceneLightingDisabled", std::vector<std::string> { "UnityEngine.Camera" });
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
bool Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::IsLightOverlapDebugEnabled(UnityEngine_CoreModule::UnityEngine::Camera* camera)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsLightOverlapDebugEnabled", std::vector<std::string> { "UnityEngine.Camera" });
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
bool Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::IsSceneViewFogEnabled(UnityEngine_CoreModule::UnityEngine::Camera* camera)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsSceneViewFogEnabled", std::vector<std::string> { "UnityEngine.Camera" });
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
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::DrawRendererList(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext renderContext, UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RendererList rendererList)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawRendererList", std::vector<std::string> { "UnityEngine.Rendering.ScriptableRenderContext", "UnityEngine.Rendering.CommandBuffer", "UnityEngine.Experimental.Rendering.RendererList" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&renderContext;
	params[1] = (intptr_t)cmd;
	params[2] = (intptr_t)&rendererList;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUtils::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
