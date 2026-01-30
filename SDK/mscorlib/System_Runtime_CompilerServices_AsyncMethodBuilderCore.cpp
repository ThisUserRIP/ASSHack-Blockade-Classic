#include "System_Runtime_CompilerServices_AsyncMethodBuilderCore.h"

IL2CPP::Il2CppClass* mscorlib::System::Runtime::CompilerServices::AsyncMethodBuilderCore::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Runtime.CompilerServices", "AsyncMethodBuilderCore");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Runtime::CompilerServices::AsyncMethodBuilderCore::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Runtime::CompilerServices::AsyncMethodBuilderCore::SetStateMachine(mscorlib::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetStateMachine", std::vector<std::string> { "System.Runtime.CompilerServices.IAsyncStateMachine" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)stateMachine;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Action* mscorlib::System::Runtime::CompilerServices::AsyncMethodBuilderCore::GetCompletionAction(mscorlib::System::Threading::Tasks::Task* taskForTracing, mscorlib::System::Runtime::CompilerServices::AsyncMethodBuilderCore_MoveNextRunner& runnerToInitialize)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCompletionAction", std::vector<std::string> { "System.Threading.Tasks.Task", "System.Runtime.CompilerServices.AsyncMethodBuilderCore/MoveNextRunner&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)taskForTracing;
	params[1] = (intptr_t)&runnerToInitialize;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Action*)returnValue;
}
mscorlib::System::Action* mscorlib::System::Runtime::CompilerServices::AsyncMethodBuilderCore::OutputAsyncCausalityEvents(mscorlib::System::Threading::Tasks::Task* innerTask, mscorlib::System::Action* continuation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OutputAsyncCausalityEvents", std::vector<std::string> { "System.Threading.Tasks.Task", "System.Action" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)innerTask;
	params[1] = (intptr_t)continuation;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Action*)returnValue;
}
void mscorlib::System::Runtime::CompilerServices::AsyncMethodBuilderCore::PostBoxInitialization(mscorlib::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine, mscorlib::System::Runtime::CompilerServices::AsyncMethodBuilderCore_MoveNextRunner* runner, mscorlib::System::Threading::Tasks::Task* builtTask)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PostBoxInitialization", std::vector<std::string> { "System.Runtime.CompilerServices.IAsyncStateMachine", "System.Runtime.CompilerServices.AsyncMethodBuilderCore/MoveNextRunner", "System.Threading.Tasks.Task" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)stateMachine;
	params[1] = (intptr_t)runner;
	params[2] = (intptr_t)builtTask;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::CompilerServices::AsyncMethodBuilderCore::ThrowAsync(mscorlib::System::Exception* exception, mscorlib::System::Threading::SynchronizationContext* targetContext)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ThrowAsync", std::vector<std::string> { "System.Exception", "System.Threading.SynchronizationContext" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)exception;
	params[1] = (intptr_t)targetContext;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Action* mscorlib::System::Runtime::CompilerServices::AsyncMethodBuilderCore::CreateContinuationWrapper(mscorlib::System::Action* continuation, mscorlib::System::Action* invokeAction, mscorlib::System::Threading::Tasks::Task* innerTask)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateContinuationWrapper", std::vector<std::string> { "System.Action", "System.Action", "System.Threading.Tasks.Task" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)continuation;
	params[1] = (intptr_t)invokeAction;
	params[2] = (intptr_t)innerTask;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Action*)returnValue;
}
mscorlib::System::Threading::Tasks::Task* mscorlib::System::Runtime::CompilerServices::AsyncMethodBuilderCore::TryGetContinuationTask(mscorlib::System::Action* action)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryGetContinuationTask", std::vector<std::string> { "System.Action" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)action;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Threading::Tasks::Task*)returnValue;
}
