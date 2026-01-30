#include "UnityEngine_Rendering_Universal_UniversalRenderPipeline_Profiling.h"

IL2CPP::Il2CppClass* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalRenderPipeline_Profiling::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalRenderPipeline::GetIl2CppClass(), "Profiling");
	return il2cppclass;
}
mscorlib::System::Type* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalRenderPipeline_Profiling::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalRenderPipeline_Profiling::TryGetOrAddCameraSampler(UnityEngine_CoreModule::UnityEngine::Camera* camera)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryGetOrAddCameraSampler", std::vector<std::string> { "UnityEngine.Camera" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)camera;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler*)returnValue;
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalRenderPipeline_Profiling::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
