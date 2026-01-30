#include "System_Runtime_Remoting_SingletonIdentity.h"

IL2CPP::Il2CppClass* mscorlib::System::Runtime::Remoting::SingletonIdentity::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Runtime.Remoting", "SingletonIdentity");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Runtime::Remoting::SingletonIdentity::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Runtime::Remoting::SingletonIdentity::_ctor(mscorlib::System::String* objectUri, mscorlib::System::Runtime::Remoting::Contexts::Context* context, mscorlib::System::Type* objectType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.Runtime.Remoting.Contexts.Context", "System.Type" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)objectUri;
	params[1] = (intptr_t)context;
	params[2] = (intptr_t)objectType;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::MarshalByRefObject* mscorlib::System::Runtime::Remoting::SingletonIdentity::GetServerObject()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetServerObject");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::MarshalByRefObject*)returnValue;
}
mscorlib::System::Runtime::Remoting::Messaging::IMessage* mscorlib::System::Runtime::Remoting::SingletonIdentity::SyncObjectProcessMessage(mscorlib::System::Runtime::Remoting::Messaging::IMessage* msg)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SyncObjectProcessMessage", std::vector<std::string> { "System.Runtime.Remoting.Messaging.IMessage" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)msg;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Remoting::Messaging::IMessage*)returnValue;
}
mscorlib::System::Runtime::Remoting::Messaging::IMessageCtrl* mscorlib::System::Runtime::Remoting::SingletonIdentity::AsyncObjectProcessMessage(mscorlib::System::Runtime::Remoting::Messaging::IMessage* msg, mscorlib::System::Runtime::Remoting::Messaging::IMessageSink* replySink)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AsyncObjectProcessMessage", std::vector<std::string> { "System.Runtime.Remoting.Messaging.IMessage", "System.Runtime.Remoting.Messaging.IMessageSink" });
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
