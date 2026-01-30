#include "System_Threading_Tasks_SynchronizationContextAwaitTaskContinuation.h"

IL2CPP::Il2CppClass* mscorlib::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Threading.Tasks", "SynchronizationContextAwaitTaskContinuation");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::_ctor(mscorlib::System::Threading::SynchronizationContext* context, mscorlib::System::Action* action, bool flowExecutionContext, mscorlib::System::Threading::StackCrawlMark& stackMark)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Threading.SynchronizationContext", "System.Action", "System.Boolean", "System.Threading.StackCrawlMark&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)context;
	params[1] = (intptr_t)action;
	params[2] = (intptr_t)&flowExecutionContext;
	params[3] = (intptr_t)&stackMark;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::Run(mscorlib::System::Threading::Tasks::Task* task, bool canInlineContinuationTask)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Run", std::vector<std::string> { "System.Threading.Tasks.Task", "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)task;
	params[1] = (intptr_t)&canInlineContinuationTask;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::PostAction(mscorlib::System::Object* state)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PostAction", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)state;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Threading::ContextCallback* mscorlib::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::GetPostActionCallback()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPostActionCallback");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Threading::ContextCallback*)returnValue;
}
void mscorlib::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
