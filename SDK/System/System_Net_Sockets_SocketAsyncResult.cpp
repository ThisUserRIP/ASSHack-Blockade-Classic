#include "System_Net_Sockets_SocketAsyncResult.h"

IL2CPP::Il2CppClass* System::System::Net::Sockets::SocketAsyncResult::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.Net.Sockets", "SocketAsyncResult");
	return il2cppclass;
}
mscorlib::System::Type* System::System::Net::Sockets::SocketAsyncResult::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
intptr_t System::System::Net::Sockets::SocketAsyncResult::get_Handle()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Handle");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
void System::System::Net::Sockets::SocketAsyncResult::_ctor(System::Net::Sockets::Socket* socket, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* state, System::Net::Sockets::SocketOperation operation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Net.Sockets.Socket", "System.AsyncCallback", "System.Object", "System.Net.Sockets.SocketOperation" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)socket;
	params[1] = (intptr_t)callback;
	params[2] = (intptr_t)state;
	params[3] = (intptr_t)&operation;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System::System::Net::Sockets::SocketError System::System::Net::Sockets::SocketAsyncResult::get_ErrorCode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ErrorCode");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System::Net::Sockets::SocketError ret;
		std::memset(&ret, 0, sizeof(System::Net::Sockets::SocketError));
		return ret;
	}
	return static_cast<System::Net::Sockets::SocketError>(*(System::Net::Sockets::SocketError*)il2cpp_object_unbox(returnValue));
}
void System::System::Net::Sockets::SocketAsyncResult::CheckIfThrowDelayedException()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckIfThrowDelayedException");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::Sockets::SocketAsyncResult::CompleteDisposed()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompleteDisposed");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::Sockets::SocketAsyncResult::Complete()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Complete");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::Sockets::SocketAsyncResult::Complete(bool synch)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Complete", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&synch;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::Sockets::SocketAsyncResult::Complete(int32_t total)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Complete", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&total;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::Sockets::SocketAsyncResult::Complete(mscorlib::System::Exception* e, bool synch)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Complete", std::vector<std::string> { "System.Exception", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)e;
	params[1] = (intptr_t)&synch;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::Sockets::SocketAsyncResult::Complete(mscorlib::System::Exception* e)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Complete", std::vector<std::string> { "System.Exception" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)e;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::Sockets::SocketAsyncResult::Complete(System::Net::Sockets::Socket* s)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Complete", std::vector<std::string> { "System.Net.Sockets.Socket" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)s;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::Sockets::SocketAsyncResult::Complete(System::Net::Sockets::Socket* s, int32_t total)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Complete", std::vector<std::string> { "System.Net.Sockets.Socket", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)s;
	params[1] = (intptr_t)&total;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
