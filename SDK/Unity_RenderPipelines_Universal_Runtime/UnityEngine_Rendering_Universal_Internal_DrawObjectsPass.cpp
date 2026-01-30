#include "UnityEngine_Rendering_Universal_Internal_DrawObjectsPass.h"

IL2CPP::Il2CppClass* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.RenderPipelines.Universal.Runtime.dll", "UnityEngine.Rendering.Universal.Internal", "DrawObjectsPass");
	return il2cppclass;
}
mscorlib::System::Type* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass::_ctor(mscorlib::System::String* profilerTag, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::ShaderTagId>* shaderTagIds, bool opaque, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderPassEvent evt, UnityEngine_CoreModule::UnityEngine::Rendering::RenderQueueRange renderQueueRange, UnityEngine_CoreModule::UnityEngine::LayerMask layerMask, UnityEngine_CoreModule::UnityEngine::Rendering::StencilState stencilState, int32_t stencilReference)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "UnityEngine.Rendering.ShaderTagId[]", "System.Boolean", "UnityEngine.Rendering.Universal.RenderPassEvent", "UnityEngine.Rendering.RenderQueueRange", "UnityEngine.LayerMask", "UnityEngine.Rendering.StencilState", "System.Int32" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)profilerTag;
	params[1] = (intptr_t)shaderTagIds;
	params[2] = (intptr_t)&opaque;
	params[3] = (intptr_t)&evt;
	params[4] = (intptr_t)&renderQueueRange;
	params[5] = (intptr_t)&layerMask;
	params[6] = (intptr_t)&stencilState;
	params[7] = (intptr_t)&stencilReference;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass::_ctor(mscorlib::System::String* profilerTag, bool opaque, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderPassEvent evt, UnityEngine_CoreModule::UnityEngine::Rendering::RenderQueueRange renderQueueRange, UnityEngine_CoreModule::UnityEngine::LayerMask layerMask, UnityEngine_CoreModule::UnityEngine::Rendering::StencilState stencilState, int32_t stencilReference)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.Boolean", "UnityEngine.Rendering.Universal.RenderPassEvent", "UnityEngine.Rendering.RenderQueueRange", "UnityEngine.LayerMask", "UnityEngine.Rendering.StencilState", "System.Int32" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)profilerTag;
	params[1] = (intptr_t)&opaque;
	params[2] = (intptr_t)&evt;
	params[3] = (intptr_t)&renderQueueRange;
	params[4] = (intptr_t)&layerMask;
	params[5] = (intptr_t)&stencilState;
	params[6] = (intptr_t)&stencilReference;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass::_ctor(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::URPProfileId profileId, bool opaque, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderPassEvent evt, UnityEngine_CoreModule::UnityEngine::Rendering::RenderQueueRange renderQueueRange, UnityEngine_CoreModule::UnityEngine::LayerMask layerMask, UnityEngine_CoreModule::UnityEngine::Rendering::StencilState stencilState, int32_t stencilReference)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.Rendering.Universal.URPProfileId", "System.Boolean", "UnityEngine.Rendering.Universal.RenderPassEvent", "UnityEngine.Rendering.RenderQueueRange", "UnityEngine.LayerMask", "UnityEngine.Rendering.StencilState", "System.Int32" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&profileId;
	params[1] = (intptr_t)&opaque;
	params[2] = (intptr_t)&evt;
	params[3] = (intptr_t)&renderQueueRange;
	params[4] = (intptr_t)&layerMask;
	params[5] = (intptr_t)&stencilState;
	params[6] = (intptr_t)&stencilReference;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass::Execute(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Execute", std::vector<std::string> { "UnityEngine.Rendering.ScriptableRenderContext", "UnityEngine.Rendering.Universal.RenderingData&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&context;
	params[1] = (intptr_t)&renderingData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
