#include "System_Threading_Tasks_ContinuationTaskFromTask.h"

IL2CPP::Il2CppClass* mscorlib::System::Threading::Tasks::ContinuationTaskFromTask::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Threading.Tasks", "ContinuationTaskFromTask");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Threading::Tasks::ContinuationTaskFromTask::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Threading::Tasks::ContinuationTaskFromTask::_ctor(mscorlib::System::Threading::Tasks::Task* antecedent, mscorlib::System::Delegate* action, mscorlib::System::Object* state, mscorlib::System::Threading::Tasks::TaskCreationOptions creationOptions, mscorlib::System::Threading::Tasks::InternalTaskOptions internalOptions, mscorlib::System::Threading::StackCrawlMark& stackMark)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Threading.Tasks.Task", "System.Delegate", "System.Object", "System.Threading.Tasks.TaskCreationOptions", "System.Threading.Tasks.InternalTaskOptions", "System.Threading.StackCrawlMark&" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)antecedent;
	params[1] = (intptr_t)action;
	params[2] = (intptr_t)state;
	params[3] = (intptr_t)&creationOptions;
	params[4] = (intptr_t)&internalOptions;
	params[5] = (intptr_t)&stackMark;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Threading::Tasks::ContinuationTaskFromTask::InnerInvoke()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InnerInvoke");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
