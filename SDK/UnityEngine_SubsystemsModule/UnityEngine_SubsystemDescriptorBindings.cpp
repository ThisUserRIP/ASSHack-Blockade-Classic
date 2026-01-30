#include "UnityEngine_SubsystemDescriptorBindings.h"

IL2CPP::Il2CppClass* UnityEngine_SubsystemsModule::UnityEngine::SubsystemDescriptorBindings::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.SubsystemsModule.dll", "UnityEngine", "SubsystemDescriptorBindings");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_SubsystemsModule::UnityEngine::SubsystemDescriptorBindings::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::String* UnityEngine_SubsystemsModule::UnityEngine::SubsystemDescriptorBindings::GetId(intptr_t descriptorPtr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetId", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&descriptorPtr;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
