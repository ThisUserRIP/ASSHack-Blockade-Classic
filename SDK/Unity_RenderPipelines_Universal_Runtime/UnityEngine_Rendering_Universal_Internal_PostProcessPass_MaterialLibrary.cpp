#include "UnityEngine_Rendering_Universal_Internal_PostProcessPass_MaterialLibrary.h"

IL2CPP::Il2CppClass* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::PostProcessPass_MaterialLibrary::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::PostProcessPass::GetIl2CppClass(), "MaterialLibrary");
	return il2cppclass;
}
mscorlib::System::Type* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::PostProcessPass_MaterialLibrary::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::PostProcessPass_MaterialLibrary::_ctor(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::PostProcessData* data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.Rendering.Universal.PostProcessData" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)data;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Material* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::PostProcessPass_MaterialLibrary::Load(UnityEngine_CoreModule::UnityEngine::Shader* shader)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Load", std::vector<std::string> { "UnityEngine.Shader" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)shader;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Material*)returnValue;
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::PostProcessPass_MaterialLibrary::Cleanup()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Cleanup");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
