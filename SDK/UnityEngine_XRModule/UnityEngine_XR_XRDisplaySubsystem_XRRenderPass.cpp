#include "UnityEngine_XR_XRDisplaySubsystem_XRRenderPass.h"

IL2CPP::Il2CppClass* UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem::GetIl2CppClass(), "XRRenderPass");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass::GetRenderParameter(UnityEngine_CoreModule::UnityEngine::Camera* camera, int32_t renderParameterIndex, UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem_XRRenderParameter& renderParameter)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetRenderParameter", std::vector<std::string> { "UnityEngine.Camera", "System.Int32", "UnityEngine.XR.XRDisplaySubsystem/XRRenderParameter&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)camera;
	params[1] = (intptr_t)&renderParameterIndex;
	params[2] = (intptr_t)&renderParameter;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass::GetRenderParameterCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetRenderParameterCount");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass::GetRenderParameter_Injected(UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass& _unity_self, UnityEngine_CoreModule::UnityEngine::Camera* camera, int32_t renderParameterIndex, UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem_XRRenderParameter& renderParameter)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetRenderParameter_Injected", std::vector<std::string> { "UnityEngine.XR.XRDisplaySubsystem/XRRenderPass&", "UnityEngine.Camera", "System.Int32", "UnityEngine.XR.XRDisplaySubsystem/XRRenderParameter&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&_unity_self;
	params[1] = (intptr_t)camera;
	params[2] = (intptr_t)&renderParameterIndex;
	params[3] = (intptr_t)&renderParameter;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass::GetRenderParameterCount_Injected(UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass& _unity_self)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetRenderParameterCount_Injected", std::vector<std::string> { "UnityEngine.XR.XRDisplaySubsystem/XRRenderPass&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&_unity_self;
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
