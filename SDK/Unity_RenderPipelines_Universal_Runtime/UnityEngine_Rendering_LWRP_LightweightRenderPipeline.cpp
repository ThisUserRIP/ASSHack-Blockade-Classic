#include "UnityEngine_Rendering_LWRP_LightweightRenderPipeline.h"

IL2CPP::Il2CppClass* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::LWRP::LightweightRenderPipeline::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.RenderPipelines.Universal.Runtime.dll", "UnityEngine.Rendering.LWRP", "LightweightRenderPipeline");
	return il2cppclass;
}
mscorlib::System::Type* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::LWRP::LightweightRenderPipeline::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::LWRP::LightweightRenderPipeline::_ctor(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::LWRP::LightweightRenderPipelineAsset* asset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.Rendering.LWRP.LightweightRenderPipelineAsset" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)asset;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
