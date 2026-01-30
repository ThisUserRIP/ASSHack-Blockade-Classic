#include "UnityEngine_Rendering_Universal_XRView.h"

IL2CPP::Il2CppClass* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::XRView::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.RenderPipelines.Universal.Runtime.dll", "UnityEngine.Rendering.Universal", "XRView");
	return il2cppclass;
}
mscorlib::System::Type* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::XRView::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::XRView::_ctor(UnityEngine_CoreModule::UnityEngine::Matrix4x4 proj, UnityEngine_CoreModule::UnityEngine::Matrix4x4 view, UnityEngine_CoreModule::UnityEngine::Rect vp, int32_t dstSlice)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.Matrix4x4", "UnityEngine.Matrix4x4", "UnityEngine.Rect", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&proj;
	params[1] = (intptr_t)&view;
	params[2] = (intptr_t)&vp;
	params[3] = (intptr_t)&dstSlice;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::XRView::_ctor(UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass renderPass, UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem_XRRenderParameter renderParameter)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.XR.XRDisplaySubsystem/XRRenderPass", "UnityEngine.XR.XRDisplaySubsystem/XRRenderParameter" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&renderPass;
	params[1] = (intptr_t)&renderParameter;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
