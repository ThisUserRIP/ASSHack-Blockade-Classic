#include "BestHTTP_SignalRCore_Transports_WebSocketTransport.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::SignalRCore::Transports::WebSocketTransport::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.SignalRCore.Transports", "WebSocketTransport");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::SignalRCore::Transports::WebSocketTransport::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Assembly_CSharp::BestHTTP::SignalRCore::TransportTypes Assembly_CSharp::BestHTTP::SignalRCore::Transports::WebSocketTransport::get_TransportType()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_TransportType");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::BestHTTP::SignalRCore::TransportTypes ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::BestHTTP::SignalRCore::TransportTypes));
		return ret;
	}
	return static_cast<Assembly_CSharp::BestHTTP::SignalRCore::TransportTypes>(*(Assembly_CSharp::BestHTTP::SignalRCore::TransportTypes*)il2cpp_object_unbox(returnValue));
}
Assembly_CSharp::BestHTTP::SignalRCore::TransferModes Assembly_CSharp::BestHTTP::SignalRCore::Transports::WebSocketTransport::get_TransferMode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_TransferMode");
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
Assembly_CSharp::BestHTTP::SignalRCore::TransportStates Assembly_CSharp::BestHTTP::SignalRCore::Transports::WebSocketTransport::get_State()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_State");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::BestHTTP::SignalRCore::TransportStates ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::BestHTTP::SignalRCore::TransportStates));
		return ret;
	}
	return static_cast<Assembly_CSharp::BestHTTP::SignalRCore::TransportStates>(*(Assembly_CSharp::BestHTTP::SignalRCore::TransportStates*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::BestHTTP::SignalRCore::Transports::WebSocketTransport::set_State(Assembly_CSharp::BestHTTP::SignalRCore::TransportStates value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_State", std::vector<std::string> { "BestHTTP.SignalRCore.TransportStates" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* Assembly_CSharp::BestHTTP::SignalRCore::Transports::WebSocketTransport::get_ErrorReason()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ErrorReason");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void Assembly_CSharp::BestHTTP::SignalRCore::Transports::WebSocketTransport::set_ErrorReason(mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_ErrorReason", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalRCore::Transports::WebSocketTransport::add_OnStateChanged(mscorlib::System::Action_2<Assembly_CSharp::BestHTTP::SignalRCore::TransportStates, Assembly_CSharp::BestHTTP::SignalRCore::TransportStates>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "add_OnStateChanged", std::vector<std::string> { "System.Action`2<BestHTTP.SignalRCore.TransportStates,BestHTTP.SignalRCore.TransportStates>" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalRCore::Transports::WebSocketTransport::remove_OnStateChanged(mscorlib::System::Action_2<Assembly_CSharp::BestHTTP::SignalRCore::TransportStates, Assembly_CSharp::BestHTTP::SignalRCore::TransportStates>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "remove_OnStateChanged", std::vector<std::string> { "System.Action`2<BestHTTP.SignalRCore.TransportStates,BestHTTP.SignalRCore.TransportStates>" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalRCore::Transports::WebSocketTransport::_ctor(Assembly_CSharp::BestHTTP::SignalRCore::HubConnection* con)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "BestHTTP.SignalRCore.HubConnection" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)con;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalRCore::Transports::WebSocketTransport::BestHTTP_SignalRCore_ITransport_StartConnect()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BestHTTP.SignalRCore.ITransport.StartConnect");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalRCore::Transports::WebSocketTransport::BestHTTP_SignalRCore_ITransport_Send(IL2CPP::Array<uint8_t>* msg)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BestHTTP.SignalRCore.ITransport.Send", std::vector<std::string> { "System.Byte[]" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)msg;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalRCore::Transports::WebSocketTransport::OnOpen(Assembly_CSharp::BestHTTP::WebSocket::WebSocket* webSocket)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnOpen", std::vector<std::string> { "BestHTTP.WebSocket.WebSocket" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)webSocket;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* Assembly_CSharp::BestHTTP::SignalRCore::Transports::WebSocketTransport::ParseHandshakeResponse(mscorlib::System::String* data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseHandshakeResponse", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)data;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void Assembly_CSharp::BestHTTP::SignalRCore::Transports::WebSocketTransport::HandleHandshakeResponse(mscorlib::System::String* data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HandleHandshakeResponse", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)data;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalRCore::Transports::WebSocketTransport::OnMessage(Assembly_CSharp::BestHTTP::WebSocket::WebSocket* webSocket, mscorlib::System::String* data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnMessage", std::vector<std::string> { "BestHTTP.WebSocket.WebSocket", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)webSocket;
	params[1] = (intptr_t)data;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalRCore::Transports::WebSocketTransport::OnBinary(Assembly_CSharp::BestHTTP::WebSocket::WebSocket* webSocket, IL2CPP::Array<uint8_t>* data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnBinary", std::vector<std::string> { "BestHTTP.WebSocket.WebSocket", "System.Byte[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)webSocket;
	params[1] = (intptr_t)data;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalRCore::Transports::WebSocketTransport::OnError(Assembly_CSharp::BestHTTP::WebSocket::WebSocket* webSocket, mscorlib::System::String* reason)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnError", std::vector<std::string> { "BestHTTP.WebSocket.WebSocket", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)webSocket;
	params[1] = (intptr_t)reason;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalRCore::Transports::WebSocketTransport::OnClosed(Assembly_CSharp::BestHTTP::WebSocket::WebSocket* webSocket, uint16_t code, mscorlib::System::String* message)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnClosed", std::vector<std::string> { "BestHTTP.WebSocket.WebSocket", "System.UInt16", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)webSocket;
	params[1] = (intptr_t)&code;
	params[2] = (intptr_t)message;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalRCore::Transports::WebSocketTransport::BestHTTP_SignalRCore_ITransport_StartClose()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BestHTTP.SignalRCore.ITransport.StartClose");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
System::System::Uri* Assembly_CSharp::BestHTTP::SignalRCore::Transports::WebSocketTransport::BuildUri(System::System::Uri* baseUri)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildUri", std::vector<std::string> { "System.Uri" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)baseUri;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::System::Uri*)returnValue;
}
