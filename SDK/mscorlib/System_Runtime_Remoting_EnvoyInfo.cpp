#include "System_Runtime_Remoting_EnvoyInfo.h"

IL2CPP::Il2CppClass* mscorlib::System::Runtime::Remoting::EnvoyInfo::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Runtime.Remoting", "EnvoyInfo");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Runtime::Remoting::EnvoyInfo::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Runtime::Remoting::EnvoyInfo::_ctor(mscorlib::System::Runtime::Remoting::Messaging::IMessageSink* sinks)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Runtime.Remoting.Messaging.IMessageSink" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)sinks;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Runtime::Remoting::Messaging::IMessageSink* mscorlib::System::Runtime::Remoting::EnvoyInfo::get_EnvoySinks()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_EnvoySinks");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Remoting::Messaging::IMessageSink*)returnValue;
}
