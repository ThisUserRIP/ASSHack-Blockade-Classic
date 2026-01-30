#include "System_Runtime_Remoting_Channels_CADSerializer.h"

IL2CPP::Il2CppClass* mscorlib::System::Runtime::Remoting::Channels::CADSerializer::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Runtime.Remoting.Channels", "CADSerializer");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Runtime::Remoting::Channels::CADSerializer::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Runtime::Remoting::Messaging::IMessage* mscorlib::System::Runtime::Remoting::Channels::CADSerializer::DeserializeMessage(mscorlib::System::IO::MemoryStream* mem, mscorlib::System::Runtime::Remoting::Messaging::IMethodCallMessage* msg)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DeserializeMessage", std::vector<std::string> { "System.IO.MemoryStream", "System.Runtime.Remoting.Messaging.IMethodCallMessage" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)mem;
	params[1] = (intptr_t)msg;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Remoting::Messaging::IMessage*)returnValue;
}
mscorlib::System::IO::MemoryStream* mscorlib::System::Runtime::Remoting::Channels::CADSerializer::SerializeMessage(mscorlib::System::Runtime::Remoting::Messaging::IMessage* msg)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SerializeMessage", std::vector<std::string> { "System.Runtime.Remoting.Messaging.IMessage" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)msg;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::IO::MemoryStream*)returnValue;
}
mscorlib::System::Object* mscorlib::System::Runtime::Remoting::Channels::CADSerializer::DeserializeObjectSafe(IL2CPP::Array<uint8_t>* mem)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DeserializeObjectSafe", std::vector<std::string> { "System.Byte[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)mem;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
mscorlib::System::IO::MemoryStream* mscorlib::System::Runtime::Remoting::Channels::CADSerializer::SerializeObject(mscorlib::System::Object* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SerializeObject", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)obj;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::IO::MemoryStream*)returnValue;
}
mscorlib::System::Object* mscorlib::System::Runtime::Remoting::Channels::CADSerializer::DeserializeObject(mscorlib::System::IO::MemoryStream* mem)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DeserializeObject", std::vector<std::string> { "System.IO.MemoryStream" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)mem;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
