#include "System_Runtime_CompilerServices_TaskAwaiter.h"

IL2CPP::Il2CppClass* mscorlib::System::Runtime::CompilerServices::TaskAwaiter::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Runtime.CompilerServices", "TaskAwaiter");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Runtime::CompilerServices::TaskAwaiter::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Runtime::CompilerServices::TaskAwaiter::_ctor(mscorlib::System::Threading::Tasks::Task* task)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Threading.Tasks.Task" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)task;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool mscorlib::System::Runtime::CompilerServices::TaskAwaiter::get_IsCompleted()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_IsCompleted");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void mscorlib::System::Runtime::CompilerServices::TaskAwaiter::OnCompleted(mscorlib::System::Action* continuation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnCompleted", std::vector<std::string> { "System.Action" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)continuation;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::CompilerServices::TaskAwaiter::UnsafeOnCompleted(mscorlib::System::Action* continuation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnsafeOnCompleted", std::vector<std::string> { "System.Action" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)continuation;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::CompilerServices::TaskAwaiter::GetResult()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetResult");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::CompilerServices::TaskAwaiter::ValidateEnd(mscorlib::System::Threading::Tasks::Task* task)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ValidateEnd", std::vector<std::string> { "System.Threading.Tasks.Task" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)task;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::CompilerServices::TaskAwaiter::HandleNonSuccessAndDebuggerNotification(mscorlib::System::Threading::Tasks::Task* task)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HandleNonSuccessAndDebuggerNotification", std::vector<std::string> { "System.Threading.Tasks.Task" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)task;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::CompilerServices::TaskAwaiter::ThrowForNonSuccess(mscorlib::System::Threading::Tasks::Task* task)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ThrowForNonSuccess", std::vector<std::string> { "System.Threading.Tasks.Task" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)task;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::CompilerServices::TaskAwaiter::OnCompletedInternal(mscorlib::System::Threading::Tasks::Task* task, mscorlib::System::Action* continuation, bool continueOnCapturedContext, bool flowExecutionContext)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnCompletedInternal", std::vector<std::string> { "System.Threading.Tasks.Task", "System.Action", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)task;
	params[1] = (intptr_t)continuation;
	params[2] = (intptr_t)&continueOnCapturedContext;
	params[3] = (intptr_t)&flowExecutionContext;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
