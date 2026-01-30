#include "UnityEngine_SubsystemsImplementation_SubsystemDescriptorStore.h"

IL2CPP::Il2CppClass* UnityEngine_SubsystemsModule::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.SubsystemsModule.dll", "UnityEngine.SubsystemsImplementation", "SubsystemDescriptorStore");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_SubsystemsModule::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_SubsystemsModule::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore::InitializeManagedDescriptor(intptr_t ptr, UnityEngine_SubsystemsModule::UnityEngine::IntegratedSubsystemDescriptor* desc)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitializeManagedDescriptor", std::vector<std::string> { "System.IntPtr", "UnityEngine.IntegratedSubsystemDescriptor" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&ptr;
	params[1] = (intptr_t)desc;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_SubsystemsModule::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore::ClearManagedDescriptors()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearManagedDescriptors");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_SubsystemsModule::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore::ReportSingleSubsystemAnalytics(mscorlib::System::String* id)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReportSingleSubsystemAnalytics", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)id;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_SubsystemsModule::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore::RegisterDeprecatedDescriptor(UnityEngine_SubsystemsModule::UnityEngine::SubsystemDescriptor* descriptor)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegisterDeprecatedDescriptor", std::vector<std::string> { "UnityEngine.SubsystemDescriptor" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)descriptor;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_SubsystemsModule::UnityEngine::SubsystemsImplementation::SubsystemDescriptorStore::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
