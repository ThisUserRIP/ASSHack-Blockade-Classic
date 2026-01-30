#include "System_Threading_Tasks_TaskToApm_TaskWrapperAsyncResult.h"

IL2CPP::Il2CppClass* mscorlib::System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(mscorlib::System::Threading::Tasks::TaskToApm::GetIl2CppClass(), "TaskWrapperAsyncResult");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult::_ctor(mscorlib::System::Threading::Tasks::Task* task, mscorlib::System::Object* state, bool completedSynchronously)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Threading.Tasks.Task", "System.Object", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)task;
	params[1] = (intptr_t)state;
	params[2] = (intptr_t)&completedSynchronously;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Object* mscorlib::System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult::System_IAsyncResult_get_AsyncState()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.IAsyncResult.get_AsyncState");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
bool mscorlib::System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult::System_IAsyncResult_get_CompletedSynchronously()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.IAsyncResult.get_CompletedSynchronously");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool mscorlib::System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult::System_IAsyncResult_get_IsCompleted()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.IAsyncResult.get_IsCompleted");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Threading::WaitHandle* mscorlib::System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult::System_IAsyncResult_get_AsyncWaitHandle()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.IAsyncResult.get_AsyncWaitHandle");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Threading::WaitHandle*)returnValue;
}
