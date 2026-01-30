#include "System_IO_Stream_SynchronousAsyncResult___c.h"

IL2CPP::Il2CppClass* mscorlib::System::IO::Stream_SynchronousAsyncResult___c::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(mscorlib::System::IO::Stream_SynchronousAsyncResult::GetIl2CppClass(), "<>c");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::IO::Stream_SynchronousAsyncResult___c::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::IO::Stream_SynchronousAsyncResult___c::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::IO::Stream_SynchronousAsyncResult___c::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Threading::ManualResetEvent* mscorlib::System::IO::Stream_SynchronousAsyncResult___c::_get_AsyncWaitHandle_b__12_0()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<get_AsyncWaitHandle>b__12_0");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Threading::ManualResetEvent*)returnValue;
}
