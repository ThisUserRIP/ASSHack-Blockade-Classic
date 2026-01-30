#include "System_Runtime_Remoting_Lifetime_LeaseSink.h"

IL2CPP::Il2CppClass* mscorlib::System::Runtime::Remoting::Lifetime::LeaseSink::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Runtime.Remoting.Lifetime", "LeaseSink");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Runtime::Remoting::Lifetime::LeaseSink::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Runtime::Remoting::Lifetime::LeaseSink::_ctor(mscorlib::System::Runtime::Remoting::Messaging::IMessageSink* nextSink)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Runtime.Remoting.Messaging.IMessageSink" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)nextSink;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Runtime::Remoting::Messaging::IMessage* mscorlib::System::Runtime::Remoting::Lifetime::LeaseSink::SyncProcessMessage(mscorlib::System::Runtime::Remoting::Messaging::IMessage* msg)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SyncProcessMessage", std::vector<std::string> { "System.Runtime.Remoting.Messaging.IMessage" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)msg;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Remoting::Messaging::IMessage*)returnValue;
}
mscorlib::System::Runtime::Remoting::Messaging::IMessageCtrl* mscorlib::System::Runtime::Remoting::Lifetime::LeaseSink::AsyncProcessMessage(mscorlib::System::Runtime::Remoting::Messaging::IMessage* msg, mscorlib::System::Runtime::Remoting::Messaging::IMessageSink* replySink)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AsyncProcessMessage", std::vector<std::string> { "System.Runtime.Remoting.Messaging.IMessage", "System.Runtime.Remoting.Messaging.IMessageSink" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)msg;
	params[1] = (intptr_t)replySink;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Remoting::Messaging::IMessageCtrl*)returnValue;
}
void mscorlib::System::Runtime::Remoting::Lifetime::LeaseSink::RenewLease(mscorlib::System::Runtime::Remoting::Messaging::IMessage* msg)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RenewLease", std::vector<std::string> { "System.Runtime.Remoting.Messaging.IMessage" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)msg;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
