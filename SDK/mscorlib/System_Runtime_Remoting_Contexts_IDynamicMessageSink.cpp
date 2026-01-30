#include "System_Runtime_Remoting_Contexts_IDynamicMessageSink.h"

IL2CPP::Il2CppClass* mscorlib::System::Runtime::Remoting::Contexts::IDynamicMessageSink::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Runtime.Remoting.Contexts", "IDynamicMessageSink");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Runtime::Remoting::Contexts::IDynamicMessageSink::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Runtime::Remoting::Contexts::IDynamicMessageSink::ProcessMessageFinish(mscorlib::System::Runtime::Remoting::Messaging::IMessage* replyMsg, bool bCliSide, bool bAsync)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessMessageFinish", std::vector<std::string> { "System.Runtime.Remoting.Messaging.IMessage", "System.Boolean", "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)replyMsg;
	params[1] = (intptr_t)&bCliSide;
	params[2] = (intptr_t)&bAsync;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Remoting::Contexts::IDynamicMessageSink::ProcessMessageStart(mscorlib::System::Runtime::Remoting::Messaging::IMessage* reqMsg, bool bCliSide, bool bAsync)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessMessageStart", std::vector<std::string> { "System.Runtime.Remoting.Messaging.IMessage", "System.Boolean", "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)reqMsg;
	params[1] = (intptr_t)&bCliSide;
	params[2] = (intptr_t)&bAsync;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
