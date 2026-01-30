#include "System_Threading_Tasks_TaskContinuation.h"

IL2CPP::Il2CppClass* mscorlib::System::Threading::Tasks::TaskContinuation::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Threading.Tasks", "TaskContinuation");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Threading::Tasks::TaskContinuation::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Threading::Tasks::TaskContinuation::Run(mscorlib::System::Threading::Tasks::Task* completedTask, bool bCanInlineContinuationTask)
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
void mscorlib::System::Threading::Tasks::TaskContinuation::InlineIfPossibleOrElseQueue(mscorlib::System::Threading::Tasks::Task* task, bool needsProtection)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InlineIfPossibleOrElseQueue", std::vector<std::string> { "System.Threading.Tasks.Task", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)task;
	params[1] = (intptr_t)&needsProtection;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Threading::Tasks::TaskContinuation::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
