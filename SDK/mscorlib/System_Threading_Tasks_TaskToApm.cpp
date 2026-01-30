#include "System_Threading_Tasks_TaskToApm.h"

IL2CPP::Il2CppClass* mscorlib::System::Threading::Tasks::TaskToApm::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Threading.Tasks", "TaskToApm");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Threading::Tasks::TaskToApm::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::IAsyncResult* mscorlib::System::Threading::Tasks::TaskToApm::Begin(mscorlib::System::Threading::Tasks::Task* task, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* state)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Begin", std::vector<std::string> { "System.Threading.Tasks.Task", "System.AsyncCallback", "System.Object" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)task;
	params[1] = (intptr_t)callback;
	params[2] = (intptr_t)state;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::IAsyncResult*)returnValue;
}
void mscorlib::System::Threading::Tasks::TaskToApm::End(mscorlib::System::IAsyncResult* asyncResult)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "End", std::vector<std::string> { "System.IAsyncResult" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)asyncResult;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Threading::Tasks::TaskToApm::InvokeCallbackWhenTaskCompletes(mscorlib::System::Threading::Tasks::Task* antecedent, mscorlib::System::AsyncCallback* callback, mscorlib::System::IAsyncResult* asyncResult)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InvokeCallbackWhenTaskCompletes", std::vector<std::string> { "System.Threading.Tasks.Task", "System.AsyncCallback", "System.IAsyncResult" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)antecedent;
	params[1] = (intptr_t)callback;
	params[2] = (intptr_t)asyncResult;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
