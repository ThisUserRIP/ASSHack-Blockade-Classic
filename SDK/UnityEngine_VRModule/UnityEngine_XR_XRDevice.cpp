#include "UnityEngine_XR_XRDevice.h"

IL2CPP::Il2CppClass* UnityEngine_VRModule::UnityEngine::XR::XRDevice::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.VRModule.dll", "UnityEngine.XR", "XRDevice");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_VRModule::UnityEngine::XR::XRDevice::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_VRModule::UnityEngine::XR::XRDevice::InvokeDeviceLoaded(mscorlib::System::String* loadedDeviceName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InvokeDeviceLoaded", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)loadedDeviceName;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_VRModule::UnityEngine::XR::XRDevice::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
