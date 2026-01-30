#include "UnityEngine_SendMouseEvents.h"

IL2CPP::Il2CppClass* UnityEngine_InputLegacyModule::UnityEngine::SendMouseEvents::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.InputLegacyModule.dll", "UnityEngine", "SendMouseEvents");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_InputLegacyModule::UnityEngine::SendMouseEvents::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_InputLegacyModule::UnityEngine::SendMouseEvents::SetMouseMoved()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetMouseMoved");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_InputLegacyModule::UnityEngine::SendMouseEvents::DoSendMouseEvents(int32_t skipRTCameras)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoSendMouseEvents", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&skipRTCameras;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_InputLegacyModule::UnityEngine::SendMouseEvents::SendEvents(int32_t i, UnityEngine_InputLegacyModule::UnityEngine::SendMouseEvents_HitInfo hit)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SendEvents", std::vector<std::string> { "System.Int32", "UnityEngine.SendMouseEvents/HitInfo" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&i;
	params[1] = (intptr_t)&hit;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_InputLegacyModule::UnityEngine::SendMouseEvents::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
