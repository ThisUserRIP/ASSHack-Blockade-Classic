#include "UnityEngine_XR_XRDisplaySubsystem_XRMirrorViewBlitDesc.h"

IL2CPP::Il2CppClass* UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem_XRMirrorViewBlitDesc::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem::GetIl2CppClass(), "XRMirrorViewBlitDesc");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem_XRMirrorViewBlitDesc::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem_XRMirrorViewBlitDesc::GetBlitParameter(int32_t blitParameterIndex, UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem_XRBlitParams& blitParameter)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetBlitParameter", std::vector<std::string> { "System.Int32", "UnityEngine.XR.XRDisplaySubsystem/XRBlitParams&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&blitParameterIndex;
	params[1] = (intptr_t)&blitParameter;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem_XRMirrorViewBlitDesc::GetBlitParameter_Injected(UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem_XRMirrorViewBlitDesc& _unity_self, int32_t blitParameterIndex, UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem_XRBlitParams& blitParameter)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetBlitParameter_Injected", std::vector<std::string> { "UnityEngine.XR.XRDisplaySubsystem/XRMirrorViewBlitDesc&", "System.Int32", "UnityEngine.XR.XRDisplaySubsystem/XRBlitParams&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&_unity_self;
	params[1] = (intptr_t)&blitParameterIndex;
	params[2] = (intptr_t)&blitParameter;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
