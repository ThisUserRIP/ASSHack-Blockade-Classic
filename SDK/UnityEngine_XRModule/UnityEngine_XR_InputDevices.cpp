#include "UnityEngine_XR_InputDevices.h"

IL2CPP::Il2CppClass* UnityEngine_XRModule::UnityEngine::XR::InputDevices::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.XRModule.dll", "UnityEngine.XR", "InputDevices");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_XRModule::UnityEngine::XR::InputDevices::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_XRModule::UnityEngine::XR::InputDevices::InvokeConnectionEvent(uint64_t deviceId, UnityEngine_XRModule::UnityEngine::XR::ConnectionChangeType change)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InvokeConnectionEvent", std::vector<std::string> { "System.UInt64", "UnityEngine.XR.ConnectionChangeType" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&deviceId;
	params[1] = (intptr_t)&change;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
