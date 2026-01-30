#include "UnityEngine_Analytics_AnalyticsSessionInfo.h"

IL2CPP::Il2CppClass* UnityEngine_UnityAnalyticsModule::UnityEngine::Analytics::AnalyticsSessionInfo::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.UnityAnalyticsModule.dll", "UnityEngine.Analytics", "AnalyticsSessionInfo");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_UnityAnalyticsModule::UnityEngine::Analytics::AnalyticsSessionInfo::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_UnityAnalyticsModule::UnityEngine::Analytics::AnalyticsSessionInfo::CallSessionStateChanged(UnityEngine_UnityAnalyticsModule::UnityEngine::Analytics::AnalyticsSessionState sessionState, int64_t sessionId, int64_t sessionElapsedTime, bool sessionChanged)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CallSessionStateChanged", std::vector<std::string> { "UnityEngine.Analytics.AnalyticsSessionState", "System.Int64", "System.Int64", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&sessionState;
	params[1] = (intptr_t)&sessionId;
	params[2] = (intptr_t)&sessionElapsedTime;
	params[3] = (intptr_t)&sessionChanged;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UnityAnalyticsModule::UnityEngine::Analytics::AnalyticsSessionInfo::CallIdentityTokenChanged(mscorlib::System::String* token)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CallIdentityTokenChanged", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)token;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
