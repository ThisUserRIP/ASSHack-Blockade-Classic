#include "UnityEngine_XR_XRInputSubsystem.h"

IL2CPP::Il2CppClass* UnityEngine_XRModule::UnityEngine::XR::XRInputSubsystem::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.XRModule.dll", "UnityEngine.XR", "XRInputSubsystem");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_XRModule::UnityEngine::XR::XRInputSubsystem::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_XRModule::UnityEngine::XR::XRInputSubsystem::InvokeTrackingOriginUpdatedEvent(intptr_t internalPtr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InvokeTrackingOriginUpdatedEvent", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&internalPtr;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_XRModule::UnityEngine::XR::XRInputSubsystem::InvokeBoundaryChangedEvent(intptr_t internalPtr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InvokeBoundaryChangedEvent", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&internalPtr;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_XRModule::UnityEngine::XR::XRInputSubsystem::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
