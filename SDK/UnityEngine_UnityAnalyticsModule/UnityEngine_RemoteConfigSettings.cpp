#include "UnityEngine_RemoteConfigSettings.h"

IL2CPP::Il2CppClass* UnityEngine_UnityAnalyticsModule::UnityEngine::RemoteConfigSettings::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.UnityAnalyticsModule.dll", "UnityEngine", "RemoteConfigSettings");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_UnityAnalyticsModule::UnityEngine::RemoteConfigSettings::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_UnityAnalyticsModule::UnityEngine::RemoteConfigSettings::RemoteConfigSettingsUpdated(UnityEngine_UnityAnalyticsModule::UnityEngine::RemoteConfigSettings* rcs, bool wasLastUpdatedFromServer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoteConfigSettingsUpdated", std::vector<std::string> { "UnityEngine.RemoteConfigSettings", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)rcs;
	params[1] = (intptr_t)&wasLastUpdatedFromServer;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
