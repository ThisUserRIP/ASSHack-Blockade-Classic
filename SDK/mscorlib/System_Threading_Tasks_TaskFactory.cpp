#include "System_Threading_Tasks_TaskFactory.h"

IL2CPP::Il2CppClass* mscorlib::System::Threading::Tasks::TaskFactory::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Threading.Tasks", "TaskFactory");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Threading::Tasks::TaskFactory::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Threading::Tasks::TaskFactory::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Threading::Tasks::TaskFactory::_ctor(mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskCreationOptions creationOptions, mscorlib::System::Threading::Tasks::TaskContinuationOptions continuationOptions, mscorlib::System::Threading::Tasks::TaskScheduler* scheduler)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Threading.CancellationToken", "System.Threading.Tasks.TaskCreationOptions", "System.Threading.Tasks.TaskContinuationOptions", "System.Threading.Tasks.TaskScheduler" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&cancellationToken;
	params[1] = (intptr_t)&creationOptions;
	params[2] = (intptr_t)&continuationOptions;
	params[3] = (intptr_t)scheduler;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Threading::Tasks::TaskFactory::CheckCreationOptions(mscorlib::System::Threading::Tasks::TaskCreationOptions creationOptions)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckCreationOptions", std::vector<std::string> { "System.Threading.Tasks.TaskCreationOptions" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&creationOptions;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Threading::Tasks::Task* mscorlib::System::Threading::Tasks::TaskFactory::StartNew(mscorlib::System::Action_1<mscorlib::System::Object>* action, mscorlib::System::Object* state, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskCreationOptions creationOptions, mscorlib::System::Threading::Tasks::TaskScheduler* scheduler)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StartNew", std::vector<std::string> { "System.Action`1<System.Object>", "System.Object", "System.Threading.CancellationToken", "System.Threading.Tasks.TaskCreationOptions", "System.Threading.Tasks.TaskScheduler" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)action;
	params[1] = (intptr_t)state;
	params[2] = (intptr_t)&cancellationToken;
	params[3] = (intptr_t)&creationOptions;
	params[4] = (intptr_t)scheduler;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Threading::Tasks::Task*)returnValue;
}
void mscorlib::System::Threading::Tasks::TaskFactory::CheckFromAsyncOptions(mscorlib::System::Threading::Tasks::TaskCreationOptions creationOptions, bool hasBeginMethod)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckFromAsyncOptions", std::vector<std::string> { "System.Threading.Tasks.TaskCreationOptions", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&creationOptions;
	params[1] = (intptr_t)&hasBeginMethod;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::Threading::Tasks::Task>* mscorlib::System::Threading::Tasks::TaskFactory::CommonCWAnyLogic(mscorlib::System::Collections::Generic::IList_1<mscorlib::System::Threading::Tasks::Task>* tasks)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CommonCWAnyLogic", std::vector<std::string> { "System.Collections.Generic.IList`1<System.Threading.Tasks.Task>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)tasks;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::Threading::Tasks::Task>*)returnValue;
}
void mscorlib::System::Threading::Tasks::TaskFactory::CheckMultiTaskContinuationOptions(mscorlib::System::Threading::Tasks::TaskContinuationOptions continuationOptions)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckMultiTaskContinuationOptions", std::vector<std::string> { "System.Threading.Tasks.TaskContinuationOptions" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&continuationOptions;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
