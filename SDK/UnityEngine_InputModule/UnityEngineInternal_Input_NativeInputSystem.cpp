#include "UnityEngineInternal_Input_NativeInputSystem.h"

IL2CPP::Il2CppClass* UnityEngine_InputModule::UnityEngineInternal::Input::NativeInputSystem::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.InputModule.dll", "UnityEngineInternal.Input", "NativeInputSystem");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_InputModule::UnityEngineInternal::Input::NativeInputSystem::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_InputModule::UnityEngineInternal::Input::NativeInputSystem::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_InputModule::UnityEngineInternal::Input::NativeInputSystem::NotifyBeforeUpdate(UnityEngine_InputModule::UnityEngineInternal::Input::NativeInputUpdateType updateType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "NotifyBeforeUpdate", std::vector<std::string> { "UnityEngineInternal.Input.NativeInputUpdateType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&updateType;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_InputModule::UnityEngineInternal::Input::NativeInputSystem::NotifyUpdate(UnityEngine_InputModule::UnityEngineInternal::Input::NativeInputUpdateType updateType, intptr_t eventBuffer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "NotifyUpdate", std::vector<std::string> { "UnityEngineInternal.Input.NativeInputUpdateType", "System.IntPtr" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&updateType;
	params[1] = (intptr_t)&eventBuffer;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_InputModule::UnityEngineInternal::Input::NativeInputSystem::NotifyDeviceDiscovered(int32_t deviceId, mscorlib::System::String* deviceDescriptor)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "NotifyDeviceDiscovered", std::vector<std::string> { "System.Int32", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&deviceId;
	params[1] = (intptr_t)deviceDescriptor;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_InputModule::UnityEngineInternal::Input::NativeInputSystem::ShouldRunUpdate(UnityEngine_InputModule::UnityEngineInternal::Input::NativeInputUpdateType updateType, bool& retval)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ShouldRunUpdate", std::vector<std::string> { "UnityEngineInternal.Input.NativeInputUpdateType", "System.Boolean&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&updateType;
	params[1] = (intptr_t)&retval;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_InputModule::UnityEngineInternal::Input::NativeInputSystem::set_hasDeviceDiscoveredCallback(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_hasDeviceDiscoveredCallback", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
