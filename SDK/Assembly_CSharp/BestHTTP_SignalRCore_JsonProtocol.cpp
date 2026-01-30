#include "BestHTTP_SignalRCore_JsonProtocol.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::SignalRCore::JsonProtocol::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.SignalRCore", "JsonProtocol");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::SignalRCore::JsonProtocol::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Assembly_CSharp::BestHTTP::SignalRCore::TransferModes Assembly_CSharp::BestHTTP::SignalRCore::JsonProtocol::get_Type()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Type");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::BestHTTP::SignalRCore::TransferModes ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::BestHTTP::SignalRCore::TransferModes));
		return ret;
	}
	return static_cast<Assembly_CSharp::BestHTTP::SignalRCore::TransferModes>(*(Assembly_CSharp::BestHTTP::SignalRCore::TransferModes*)il2cpp_object_unbox(returnValue));
}
Assembly_CSharp::BestHTTP::SignalRCore::IEncoder* Assembly_CSharp::BestHTTP::SignalRCore::JsonProtocol::get_Encoder()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Encoder");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SignalRCore::IEncoder*)returnValue;
}
void Assembly_CSharp::BestHTTP::SignalRCore::JsonProtocol::set_Encoder(Assembly_CSharp::BestHTTP::SignalRCore::IEncoder* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Encoder", std::vector<std::string> { "BestHTTP.SignalRCore.IEncoder" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::BestHTTP::SignalRCore::HubConnection* Assembly_CSharp::BestHTTP::SignalRCore::JsonProtocol::get_Connection()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Connection");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SignalRCore::HubConnection*)returnValue;
}
void Assembly_CSharp::BestHTTP::SignalRCore::JsonProtocol::set_Connection(Assembly_CSharp::BestHTTP::SignalRCore::HubConnection* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Connection", std::vector<std::string> { "BestHTTP.SignalRCore.HubConnection" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalRCore::JsonProtocol::_ctor(Assembly_CSharp::BestHTTP::SignalRCore::IEncoder* encoder)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "BestHTTP.SignalRCore.IEncoder" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)encoder;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalRCore::JsonProtocol::ParseMessages(mscorlib::System::String* data, mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::BestHTTP::SignalRCore::Messages::Message>& messages)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseMessages", std::vector<std::string> { "System.String", "System.Collections.Generic.List`1<BestHTTP.SignalRCore.Messages.Message>&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)data;
	params[1] = (intptr_t)&messages;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalRCore::JsonProtocol::ParseMessages(IL2CPP::Array<uint8_t>* data, mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::BestHTTP::SignalRCore::Messages::Message>& messages)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseMessages", std::vector<std::string> { "System.Byte[]", "System.Collections.Generic.List`1<BestHTTP.SignalRCore.Messages.Message>&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)data;
	params[1] = (intptr_t)&messages;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<uint8_t>* Assembly_CSharp::BestHTTP::SignalRCore::JsonProtocol::EncodeMessage(Assembly_CSharp::BestHTTP::SignalRCore::Messages::Message message)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EncodeMessage", std::vector<std::string> { "BestHTTP.SignalRCore.Messages.Message" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&message;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
IL2CPP::Array<mscorlib::System::Object*>* Assembly_CSharp::BestHTTP::SignalRCore::JsonProtocol::GetRealArguments(IL2CPP::Array<mscorlib::System::Type*>* argTypes, IL2CPP::Array<mscorlib::System::Object*>* arguments)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetRealArguments", std::vector<std::string> { "System.Type[]", "System.Object[]" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)argTypes;
	params[1] = (intptr_t)arguments;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::Object*>*)returnValue;
}
mscorlib::System::Object* Assembly_CSharp::BestHTTP::SignalRCore::JsonProtocol::ConvertTo(mscorlib::System::Type* toType, mscorlib::System::Object* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ConvertTo", std::vector<std::string> { "System.Type", "System.Object" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)toType;
	params[1] = (intptr_t)obj;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
IL2CPP::Array<uint8_t>* Assembly_CSharp::BestHTTP::SignalRCore::JsonProtocol::WithSeparator(mscorlib::System::String* str)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WithSeparator", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)str;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
