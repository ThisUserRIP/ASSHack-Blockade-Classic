#include "UnityEngine_SubsystemManager.h"

IL2CPP::Il2CppClass* UnityEngine_SubsystemsModule::UnityEngine::SubsystemManager::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.SubsystemsModule.dll", "UnityEngine", "SubsystemManager");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_SubsystemsModule::UnityEngine::SubsystemManager::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_SubsystemsModule::UnityEngine::SubsystemManager::ReloadSubsystemsStarted()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReloadSubsystemsStarted");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_SubsystemsModule::UnityEngine::SubsystemManager::ReloadSubsystemsCompleted()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReloadSubsystemsCompleted");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_SubsystemsModule::UnityEngine::SubsystemManager::InitializeIntegratedSubsystem(intptr_t ptr, UnityEngine_SubsystemsModule::UnityEngine::IntegratedSubsystem* subsystem)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitializeIntegratedSubsystem", std::vector<std::string> { "System.IntPtr", "UnityEngine.IntegratedSubsystem" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&ptr;
	params[1] = (intptr_t)subsystem;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_SubsystemsModule::UnityEngine::SubsystemManager::ClearSubsystems()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearSubsystems");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_SubsystemsModule::UnityEngine::SubsystemManager::StaticConstructScriptingClassMap()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StaticConstructScriptingClassMap");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_SubsystemsModule::UnityEngine::SubsystemManager::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_SubsystemsModule::UnityEngine::IntegratedSubsystem* UnityEngine_SubsystemsModule::UnityEngine::SubsystemManager::GetIntegratedSubsystemByPtr(intptr_t ptr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetIntegratedSubsystemByPtr", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ptr;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_SubsystemsModule::UnityEngine::IntegratedSubsystem*)returnValue;
}
