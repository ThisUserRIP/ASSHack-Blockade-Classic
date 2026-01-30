#include "System_Runtime_Remoting_Channels_IChannelSender.h"

IL2CPP::Il2CppClass* mscorlib::System::Runtime::Remoting::Channels::IChannelSender::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Runtime.Remoting.Channels", "IChannelSender");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Runtime::Remoting::Channels::IChannelSender::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Runtime::Remoting::Messaging::IMessageSink* mscorlib::System::Runtime::Remoting::Channels::IChannelSender::CreateMessageSink(mscorlib::System::String* url, mscorlib::System::Object* remoteChannelData, mscorlib::System::String& objectURI)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateMessageSink", std::vector<std::string> { "System.String", "System.Object", "System.String&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)url;
	params[1] = (intptr_t)remoteChannelData;
	params[2] = (intptr_t)&objectURI;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Remoting::Messaging::IMessageSink*)returnValue;
}
