#include "Unity_Jobs_LowLevel_Unsafe_JobsUtility.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::Unity::Jobs::LowLevel::Unsafe::JobsUtility::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "Unity.Jobs.LowLevel.Unsafe", "JobsUtility");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::Unity::Jobs::LowLevel::Unsafe::JobsUtility::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_CoreModule::Unity::Jobs::JobHandle UnityEngine_CoreModule::Unity::Jobs::LowLevel::Unsafe::JobsUtility::Schedule(UnityEngine_CoreModule::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters& parameters)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Schedule", std::vector<std::string> { "Unity.Jobs.LowLevel.Unsafe.JobsUtility/JobScheduleParameters&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&parameters;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::Unity::Jobs::JobHandle ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::Unity::Jobs::JobHandle));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::Unity::Jobs::JobHandle>(*(UnityEngine_CoreModule::Unity::Jobs::JobHandle*)il2cpp_object_unbox(returnValue));
}
intptr_t UnityEngine_CoreModule::Unity::Jobs::LowLevel::Unsafe::JobsUtility::CreateJobReflectionData(mscorlib::System::Type* wrapperJobType, mscorlib::System::Type* userJobType, mscorlib::System::Object* managedJobFunction0, mscorlib::System::Object* managedJobFunction1, mscorlib::System::Object* managedJobFunction2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateJobReflectionData", std::vector<std::string> { "System.Type", "System.Type", "System.Object", "System.Object", "System.Object" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)wrapperJobType;
	params[1] = (intptr_t)userJobType;
	params[2] = (intptr_t)managedJobFunction0;
	params[3] = (intptr_t)managedJobFunction1;
	params[4] = (intptr_t)managedJobFunction2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
intptr_t UnityEngine_CoreModule::Unity::Jobs::LowLevel::Unsafe::JobsUtility::CreateJobReflectionData(mscorlib::System::Type* type, mscorlib::System::Object* managedJobFunction0, mscorlib::System::Object* managedJobFunction1, mscorlib::System::Object* managedJobFunction2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateJobReflectionData", std::vector<std::string> { "System.Type", "System.Object", "System.Object", "System.Object" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)type;
	params[1] = (intptr_t)managedJobFunction0;
	params[2] = (intptr_t)managedJobFunction1;
	params[3] = (intptr_t)managedJobFunction2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_CoreModule::Unity::Jobs::LowLevel::Unsafe::JobsUtility::Schedule_Injected(UnityEngine_CoreModule::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters& parameters, UnityEngine_CoreModule::Unity::Jobs::JobHandle& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Schedule_Injected", std::vector<std::string> { "Unity.Jobs.LowLevel.Unsafe.JobsUtility/JobScheduleParameters&", "Unity.Jobs.JobHandle&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&parameters;
	params[1] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
