#include "System_Threading_Tasks_StandardTaskContinuation.h"

IL2CPP::Il2CppClass* mscorlib::System::Threading::Tasks::StandardTaskContinuation::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Threading.Tasks", "StandardTaskContinuation");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Threading::Tasks::StandardTaskContinuation::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Threading::Tasks::StandardTaskContinuation::_ctor(mscorlib::System::Threading::Tasks::Task* task, mscorlib::System::Threading::Tasks::TaskContinuationOptions options, mscorlib::System::Threading::Tasks::TaskScheduler* scheduler)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Threading.Tasks.Task", "System.Threading.Tasks.TaskContinuationOptions", "System.Threading.Tasks.TaskScheduler" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)task;
	params[1] = (intptr_t)&options;
	params[2] = (intptr_t)scheduler;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Threading::Tasks::StandardTaskContinuation::Run(mscorlib::System::Threading::Tasks::Task* completedTask, bool bCanInlineContinuationTask)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Run", std::vector<std::string> { "System.Threading.Tasks.Task", "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)completedTask;
	params[1] = (intptr_t)&bCanInlineContinuationTask;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
