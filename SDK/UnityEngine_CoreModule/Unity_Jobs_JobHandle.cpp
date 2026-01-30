#include "Unity_Jobs_JobHandle.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::Unity::Jobs::JobHandle::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "Unity.Jobs", "JobHandle");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::Unity::Jobs::JobHandle::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_CoreModule::Unity::Jobs::JobHandle::CompleteAll(UnityEngine_CoreModule::Unity::Collections::NativeArray_1<UnityEngine_CoreModule::Unity::Jobs::JobHandle> jobs)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompleteAll", std::vector<std::string> { "Unity.Collections.NativeArray`1<Unity.Jobs.JobHandle>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&jobs;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::Unity::Jobs::JobHandle::ScheduleBatchedJobs()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ScheduleBatchedJobs");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::Unity::Jobs::JobHandle::ScheduleBatchedJobsAndCompleteAll(void* jobs, int32_t count)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ScheduleBatchedJobsAndCompleteAll", std::vector<std::string> { "System.Void*", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)jobs;
	params[1] = (intptr_t)&count;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
