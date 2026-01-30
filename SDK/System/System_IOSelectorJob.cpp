#include "System_IOSelectorJob.h"

IL2CPP::Il2CppClass* System::System::IOSelectorJob::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System", "IOSelectorJob");
	return il2cppclass;
}
mscorlib::System::Type* System::System::IOSelectorJob::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::System::IOSelectorJob::_ctor(System::IOOperation operation, System::IOAsyncCallback* callback, System::IOAsyncResult* state)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.IOOperation", "System.IOAsyncCallback", "System.IOAsyncResult" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&operation;
	params[1] = (intptr_t)callback;
	params[2] = (intptr_t)state;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::IOSelectorJob::System_Threading_IThreadPoolWorkItem_ExecuteWorkItem()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Threading.IThreadPoolWorkItem.ExecuteWorkItem");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::IOSelectorJob::System_Threading_IThreadPoolWorkItem_MarkAborted(mscorlib::System::Threading::ThreadAbortException* tae)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Threading.IThreadPoolWorkItem.MarkAborted", std::vector<std::string> { "System.Threading.ThreadAbortException" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)tae;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::IOSelectorJob::MarkDisposed()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MarkDisposed");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
