#include "UnityEngine_Internal_SubsystemDescriptors.h"

IL2CPP::Il2CppClass* UnityEngine_SubsystemsModule::UnityEngine::Internal_SubsystemDescriptors::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.SubsystemsModule.dll", "UnityEngine", "Internal_SubsystemDescriptors");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_SubsystemsModule::UnityEngine::Internal_SubsystemDescriptors::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_SubsystemsModule::UnityEngine::Internal_SubsystemDescriptors::Internal_AddDescriptor(UnityEngine_SubsystemsModule::UnityEngine::SubsystemDescriptor* descriptor)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_AddDescriptor", std::vector<std::string> { "UnityEngine.SubsystemDescriptor" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)descriptor;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
