#include "System_IO_Stream___c.h"

IL2CPP::Il2CppClass* mscorlib::System::IO::Stream___c::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(mscorlib::System::IO::Stream::GetIl2CppClass(), "<>c");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::IO::Stream___c::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::IO::Stream___c::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::IO::Stream___c::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Threading::SemaphoreSlim* mscorlib::System::IO::Stream___c::_EnsureAsyncActiveSemaphoreInitialized_b__4_0()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<EnsureAsyncActiveSemaphoreInitialized>b__4_0");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Threading::SemaphoreSlim*)returnValue;
}
void mscorlib::System::IO::Stream___c::_FlushAsync_b__36_0(mscorlib::System::Object* state)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<FlushAsync>b__36_0", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)state;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t mscorlib::System::IO::Stream___c::_BeginReadInternal_b__39_0(mscorlib::System::Object* _p0_)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<BeginReadInternal>b__39_0", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)_p0_;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::IAsyncResult* mscorlib::System::IO::Stream___c::_BeginEndReadAsync_b__43_0(mscorlib::System::IO::Stream* stream, mscorlib::System::IO::Stream_ReadWriteParameters args, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* state)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<BeginEndReadAsync>b__43_0", std::vector<std::string> { "System.IO.Stream", "System.IO.Stream/ReadWriteParameters", "System.AsyncCallback", "System.Object" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)stream;
	params[1] = (intptr_t)&args;
	params[2] = (intptr_t)callback;
	params[3] = (intptr_t)state;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::IAsyncResult*)returnValue;
}
int32_t mscorlib::System::IO::Stream___c::_BeginEndReadAsync_b__43_1(mscorlib::System::IO::Stream* stream, mscorlib::System::IAsyncResult* asyncResult)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<BeginEndReadAsync>b__43_1", std::vector<std::string> { "System.IO.Stream", "System.IAsyncResult" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)stream;
	params[1] = (intptr_t)asyncResult;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t mscorlib::System::IO::Stream___c::_BeginWriteInternal_b__46_0(mscorlib::System::Object* _p0_)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<BeginWriteInternal>b__46_0", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)_p0_;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
void mscorlib::System::IO::Stream___c::_RunReadWriteTaskWhenReady_b__47_0(mscorlib::System::Threading::Tasks::Task* t, mscorlib::System::Object* state)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<RunReadWriteTaskWhenReady>b__47_0", std::vector<std::string> { "System.Threading.Tasks.Task", "System.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)t;
	params[1] = (intptr_t)state;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::IAsyncResult* mscorlib::System::IO::Stream___c::_BeginEndWriteAsync_b__53_0(mscorlib::System::IO::Stream* stream, mscorlib::System::IO::Stream_ReadWriteParameters args, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* state)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<BeginEndWriteAsync>b__53_0", std::vector<std::string> { "System.IO.Stream", "System.IO.Stream/ReadWriteParameters", "System.AsyncCallback", "System.Object" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)stream;
	params[1] = (intptr_t)&args;
	params[2] = (intptr_t)callback;
	params[3] = (intptr_t)state;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::IAsyncResult*)returnValue;
}
mscorlib::System::Threading::Tasks::VoidTaskResult mscorlib::System::IO::Stream___c::_BeginEndWriteAsync_b__53_1(mscorlib::System::IO::Stream* stream, mscorlib::System::IAsyncResult* asyncResult)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<BeginEndWriteAsync>b__53_1", std::vector<std::string> { "System.IO.Stream", "System.IAsyncResult" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)stream;
	params[1] = (intptr_t)asyncResult;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Threading::Tasks::VoidTaskResult ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Threading::Tasks::VoidTaskResult));
		return ret;
	}
	return static_cast<mscorlib::System::Threading::Tasks::VoidTaskResult>(*(mscorlib::System::Threading::Tasks::VoidTaskResult*)il2cpp_object_unbox(returnValue));
}
