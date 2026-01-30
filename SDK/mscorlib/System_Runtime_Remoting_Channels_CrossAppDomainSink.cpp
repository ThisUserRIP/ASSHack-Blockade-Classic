#include "System_Runtime_Remoting_Channels_CrossAppDomainSink.h"

IL2CPP::Il2CppClass* mscorlib::System::Runtime::Remoting::Channels::CrossAppDomainSink::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Runtime.Remoting.Channels", "CrossAppDomainSink");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Runtime::Remoting::Channels::CrossAppDomainSink::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Runtime::Remoting::Channels::CrossAppDomainSink::_ctor(int32_t domainID)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&domainID;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Runtime::Remoting::Channels::CrossAppDomainSink* mscorlib::System::Runtime::Remoting::Channels::CrossAppDomainSink::GetSink(int32_t domainID)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSink", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&domainID;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Remoting::Channels::CrossAppDomainSink*)returnValue;
}
int32_t mscorlib::System::Runtime::Remoting::Channels::CrossAppDomainSink::get_TargetDomainId()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_TargetDomainId");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Runtime::Remoting::Channels::CrossAppDomainSink_ProcessMessageRes mscorlib::System::Runtime::Remoting::Channels::CrossAppDomainSink::ProcessMessageInDomain(IL2CPP::Array<uint8_t>* arrRequest, mscorlib::System::Runtime::Remoting::Messaging::CADMethodCallMessage* cadMsg)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessMessageInDomain", std::vector<std::string> { "System.Byte[]", "System.Runtime.Remoting.Messaging.CADMethodCallMessage" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)arrRequest;
	params[1] = (intptr_t)cadMsg;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Runtime::Remoting::Channels::CrossAppDomainSink_ProcessMessageRes ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Runtime::Remoting::Channels::CrossAppDomainSink_ProcessMessageRes));
		return ret;
	}
	return static_cast<mscorlib::System::Runtime::Remoting::Channels::CrossAppDomainSink_ProcessMessageRes>(*(mscorlib::System::Runtime::Remoting::Channels::CrossAppDomainSink_ProcessMessageRes*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Runtime::Remoting::Messaging::IMessage* mscorlib::System::Runtime::Remoting::Channels::CrossAppDomainSink::SyncProcessMessage(mscorlib::System::Runtime::Remoting::Messaging::IMessage* msgRequest)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SyncProcessMessage", std::vector<std::string> { "System.Runtime.Remoting.Messaging.IMessage" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)msgRequest;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Remoting::Messaging::IMessage*)returnValue;
}
mscorlib::System::Runtime::Remoting::Messaging::IMessageCtrl* mscorlib::System::Runtime::Remoting::Channels::CrossAppDomainSink::AsyncProcessMessage(mscorlib::System::Runtime::Remoting::Messaging::IMessage* reqMsg, mscorlib::System::Runtime::Remoting::Messaging::IMessageSink* replySink)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AsyncProcessMessage", std::vector<std::string> { "System.Runtime.Remoting.Messaging.IMessage", "System.Runtime.Remoting.Messaging.IMessageSink" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)reqMsg;
	params[1] = (intptr_t)replySink;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Remoting::Messaging::IMessageCtrl*)returnValue;
}
void mscorlib::System::Runtime::Remoting::Channels::CrossAppDomainSink::SendAsyncMessage(mscorlib::System::Object* data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SendAsyncMessage", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)data;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Remoting::Channels::CrossAppDomainSink::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Remoting::Channels::CrossAppDomainSink::_AsyncProcessMessage_b__10_0(mscorlib::System::Object* data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<AsyncProcessMessage>b__10_0", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)data;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
