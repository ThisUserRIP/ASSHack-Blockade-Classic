#include "System_Runtime_Remoting_Messaging_RemotingSurrogateSelector.h"

IL2CPP::Il2CppClass* mscorlib::System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Runtime.Remoting.Messaging", "RemotingSurrogateSelector");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Runtime::Serialization::ISerializationSurrogate* mscorlib::System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::GetSurrogate(mscorlib::System::Type* type, mscorlib::System::Runtime::Serialization::StreamingContext context, mscorlib::System::Runtime::Serialization::ISurrogateSelector& ssout)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSurrogate", std::vector<std::string> { "System.Type", "System.Runtime.Serialization.StreamingContext", "System.Runtime.Serialization.ISurrogateSelector&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)type;
	params[1] = (intptr_t)&context;
	params[2] = (intptr_t)&ssout;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Serialization::ISerializationSurrogate*)returnValue;
}
void mscorlib::System::Runtime::Remoting::Messaging::RemotingSurrogateSelector::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
