#include "UnityEngine_XR_InputTracking.h"

IL2CPP::Il2CppClass* UnityEngine_XRModule::UnityEngine::XR::InputTracking::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.XRModule.dll", "UnityEngine.XR", "InputTracking");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_XRModule::UnityEngine::XR::InputTracking::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_XRModule::UnityEngine::XR::InputTracking::InvokeTrackingEvent(UnityEngine_XRModule::UnityEngine::XR::InputTracking_TrackingStateEventType eventType, UnityEngine_XRModule::UnityEngine::XR::XRNode nodeType, int64_t uniqueID, bool tracked)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InvokeTrackingEvent", std::vector<std::string> { "UnityEngine.XR.InputTracking/TrackingStateEventType", "UnityEngine.XR.XRNode", "System.Int64", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&eventType;
	params[1] = (intptr_t)&nodeType;
	params[2] = (intptr_t)&uniqueID;
	params[3] = (intptr_t)&tracked;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_XRModule::UnityEngine::XR::InputTracking::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
