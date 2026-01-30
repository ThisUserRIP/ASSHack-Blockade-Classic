#include "Unity_Jobs_LowLevel_Unsafe_JobProducerTypeAttribute.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::Unity::Jobs::LowLevel::Unsafe::JobProducerTypeAttribute::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "Unity.Jobs.LowLevel.Unsafe", "JobProducerTypeAttribute");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::Unity::Jobs::LowLevel::Unsafe::JobProducerTypeAttribute::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_CoreModule::Unity::Jobs::LowLevel::Unsafe::JobProducerTypeAttribute::_ctor(mscorlib::System::Type* producerType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)producerType;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
