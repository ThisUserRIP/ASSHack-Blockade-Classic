#include "System_Runtime_Remoting_Channels_ChannelServices.h"

IL2CPP::Il2CppClass* mscorlib::System::Runtime::Remoting::Channels::ChannelServices::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Runtime.Remoting.Channels", "ChannelServices");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Runtime::Remoting::Channels::ChannelServices::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Runtime::Remoting::Contexts::CrossContextChannel* mscorlib::System::Runtime::Remoting::Channels::ChannelServices::get_CrossContextChannel()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_CrossContextChannel");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Remoting::Contexts::CrossContextChannel*)returnValue;
}
mscorlib::System::Runtime::Remoting::Messaging::IMessageSink* mscorlib::System::Runtime::Remoting::Channels::ChannelServices::CreateClientChannelSinkChain(mscorlib::System::String* url, mscorlib::System::Object* remoteChannelData, mscorlib::System::String& objectUri)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateClientChannelSinkChain", std::vector<std::string> { "System.String", "System.Object", "System.String&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)url;
	params[1] = (intptr_t)remoteChannelData;
	params[2] = (intptr_t)&objectUri;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Remoting::Messaging::IMessageSink*)returnValue;
}
mscorlib::System::Runtime::Remoting::Messaging::IMessageSink* mscorlib::System::Runtime::Remoting::Channels::ChannelServices::CreateClientChannelSinkChain(mscorlib::System::Runtime::Remoting::Channels::IChannelSender* sender, mscorlib::System::String* url, IL2CPP::Array<mscorlib::System::Object*>* channelDataArray, mscorlib::System::String& objectUri)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateClientChannelSinkChain", std::vector<std::string> { "System.Runtime.Remoting.Channels.IChannelSender", "System.String", "System.Object[]", "System.String&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)sender;
	params[1] = (intptr_t)url;
	params[2] = (intptr_t)channelDataArray;
	params[3] = (intptr_t)&objectUri;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Remoting::Messaging::IMessageSink*)returnValue;
}
void mscorlib::System::Runtime::Remoting::Channels::ChannelServices::RegisterChannel(mscorlib::System::Runtime::Remoting::Channels::IChannel* chnl)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegisterChannel", std::vector<std::string> { "System.Runtime.Remoting.Channels.IChannel" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)chnl;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Remoting::Channels::ChannelServices::RegisterChannel(mscorlib::System::Runtime::Remoting::Channels::IChannel* chnl, bool ensureSecurity)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegisterChannel", std::vector<std::string> { "System.Runtime.Remoting.Channels.IChannel", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)chnl;
	params[1] = (intptr_t)&ensureSecurity;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Remoting::Channels::ChannelServices::RegisterChannelConfig(mscorlib::System::Runtime::Remoting::ChannelData* channel)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegisterChannelConfig", std::vector<std::string> { "System.Runtime.Remoting.ChannelData" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)channel;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Object* mscorlib::System::Runtime::Remoting::Channels::ChannelServices::CreateProvider(mscorlib::System::Runtime::Remoting::ProviderData* prov)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateProvider", std::vector<std::string> { "System.Runtime.Remoting.ProviderData" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)prov;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
mscorlib::System::Runtime::Remoting::Messaging::IMessage* mscorlib::System::Runtime::Remoting::Channels::ChannelServices::SyncDispatchMessage(mscorlib::System::Runtime::Remoting::Messaging::IMessage* msg)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SyncDispatchMessage", std::vector<std::string> { "System.Runtime.Remoting.Messaging.IMessage" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)msg;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Remoting::Messaging::IMessage*)returnValue;
}
mscorlib::System::Runtime::Remoting::Messaging::ReturnMessage* mscorlib::System::Runtime::Remoting::Channels::ChannelServices::CheckIncomingMessage(mscorlib::System::Runtime::Remoting::Messaging::IMessage* msg)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckIncomingMessage", std::vector<std::string> { "System.Runtime.Remoting.Messaging.IMessage" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)msg;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Remoting::Messaging::ReturnMessage*)returnValue;
}
mscorlib::System::Runtime::Remoting::Messaging::IMessage* mscorlib::System::Runtime::Remoting::Channels::ChannelServices::CheckReturnMessage(mscorlib::System::Runtime::Remoting::Messaging::IMessage* callMsg, mscorlib::System::Runtime::Remoting::Messaging::IMessage* retMsg)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckReturnMessage", std::vector<std::string> { "System.Runtime.Remoting.Messaging.IMessage", "System.Runtime.Remoting.Messaging.IMessage" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)callMsg;
	params[1] = (intptr_t)retMsg;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Remoting::Messaging::IMessage*)returnValue;
}
bool mscorlib::System::Runtime::Remoting::Channels::ChannelServices::IsLocalCall(mscorlib::System::Runtime::Remoting::Messaging::IMessage* callMsg)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsLocalCall", std::vector<std::string> { "System.Runtime.Remoting.Messaging.IMessage" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)callMsg;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
IL2CPP::Array<mscorlib::System::Object*>* mscorlib::System::Runtime::Remoting::Channels::ChannelServices::GetCurrentChannelInfo()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCurrentChannelInfo");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::Object*>*)returnValue;
}
void mscorlib::System::Runtime::Remoting::Channels::ChannelServices::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
