#include "System_IO_Stream_ReadWriteTask.h"

IL2CPP::Il2CppClass* mscorlib::System::IO::Stream_ReadWriteTask::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(mscorlib::System::IO::Stream::GetIl2CppClass(), "ReadWriteTask");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::IO::Stream_ReadWriteTask::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::IO::Stream_ReadWriteTask::ClearBeginState()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearBeginState");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::IO::Stream_ReadWriteTask::_ctor(bool isRead, mscorlib::System::Func_2<mscorlib::System::Object, mscorlib::System::Int32>* function, mscorlib::System::Object* state, mscorlib::System::IO::Stream* stream, IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count, mscorlib::System::AsyncCallback* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Boolean", "System.Func`2<System.Object,System.Int32>", "System.Object", "System.IO.Stream", "System.Byte[]", "System.Int32", "System.Int32", "System.AsyncCallback" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)&isRead;
	params[1] = (intptr_t)function;
	params[2] = (intptr_t)state;
	params[3] = (intptr_t)stream;
	params[4] = (intptr_t)buffer;
	params[5] = (intptr_t)&offset;
	params[6] = (intptr_t)&count;
	params[7] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::IO::Stream_ReadWriteTask::InvokeAsyncCallback(mscorlib::System::Object* completedTask)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InvokeAsyncCallback", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)completedTask;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::IO::Stream_ReadWriteTask::System_Threading_Tasks_ITaskCompletionAction_Invoke(mscorlib::System::Threading::Tasks::Task* completingTask)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Threading.Tasks.ITaskCompletionAction.Invoke", std::vector<std::string> { "System.Threading.Tasks.Task" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)completingTask;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
