#include "UnityEngine_RemoteSettings.h"

IL2CPP::Il2CppClass* UnityEngine_UnityAnalyticsModule::UnityEngine::RemoteSettings::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.UnityAnalyticsModule.dll", "UnityEngine", "RemoteSettings");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_UnityAnalyticsModule::UnityEngine::RemoteSettings::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_UnityAnalyticsModule::UnityEngine::RemoteSettings::RemoteSettingsUpdated(bool wasLastUpdatedFromServer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoteSettingsUpdated", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&wasLastUpdatedFromServer;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UnityAnalyticsModule::UnityEngine::RemoteSettings::RemoteSettingsBeforeFetchFromServer()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoteSettingsBeforeFetchFromServer");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UnityAnalyticsModule::UnityEngine::RemoteSettings::RemoteSettingsUpdateCompleted(bool wasLastUpdatedFromServer, bool settingsChanged, int32_t response)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoteSettingsUpdateCompleted", std::vector<std::string> { "System.Boolean", "System.Boolean", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&wasLastUpdatedFromServer;
	params[1] = (intptr_t)&settingsChanged;
	params[2] = (intptr_t)&response;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
