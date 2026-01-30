#include "UnityEngine_Rendering_Universal_XRLayout.h"

IL2CPP::Il2CppClass* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::XRLayout::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.RenderPipelines.Universal.Runtime.dll", "UnityEngine.Rendering.Universal", "XRLayout");
	return il2cppclass;
}
mscorlib::System::Type* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::XRLayout::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::XRPass* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::XRLayout::CreatePass(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::XRPassCreateInfo passCreateInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreatePass", std::vector<std::string> { "UnityEngine.Rendering.Universal.XRPassCreateInfo" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&passCreateInfo;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::XRPass*)returnValue;
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::XRLayout::AddViewToPass(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::XRViewCreateInfo viewCreateInfo, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::XRPass* pass)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddViewToPass", std::vector<std::string> { "UnityEngine.Rendering.Universal.XRViewCreateInfo", "UnityEngine.Rendering.Universal.XRPass" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&viewCreateInfo;
	params[1] = (intptr_t)pass;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
