#include "Unity_Jobs_LowLevel_Unsafe_JobsUtility_JobScheduleParameters.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(UnityEngine_CoreModule::Unity::Jobs::LowLevel::Unsafe::JobsUtility::GetIl2CppClass(), "JobScheduleParameters");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_CoreModule::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters::_ctor(void* i_jobData, intptr_t i_reflectionData, UnityEngine_CoreModule::Unity::Jobs::JobHandle i_dependency, UnityEngine_CoreModule::Unity::Jobs::LowLevel::Unsafe::ScheduleMode i_scheduleMode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Void*", "System.IntPtr", "Unity.Jobs.JobHandle", "Unity.Jobs.LowLevel.Unsafe.ScheduleMode" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)i_jobData;
	params[1] = (intptr_t)&i_reflectionData;
	params[2] = (intptr_t)&i_dependency;
	params[3] = (intptr_t)&i_scheduleMode;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
