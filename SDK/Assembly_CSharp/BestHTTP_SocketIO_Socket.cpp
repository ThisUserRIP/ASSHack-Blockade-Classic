#include "BestHTTP_SocketIO_Socket.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::SocketIO::Socket::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.SocketIO", "Socket");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::SocketIO::Socket::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Assembly_CSharp::BestHTTP::SocketIO::SocketManager* Assembly_CSharp::BestHTTP::SocketIO::Socket::get_Manager()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Manager");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SocketIO::SocketManager*)returnValue;
}
void Assembly_CSharp::BestHTTP::SocketIO::Socket::set_Manager(Assembly_CSharp::BestHTTP::SocketIO::SocketManager* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Manager", std::vector<std::string> { "BestHTTP.SocketIO.SocketManager" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* Assembly_CSharp::BestHTTP::SocketIO::Socket::get_Namespace()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Namespace");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void Assembly_CSharp::BestHTTP::SocketIO::Socket::set_Namespace(mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Namespace", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* Assembly_CSharp::BestHTTP::SocketIO::Socket::get_Id()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Id");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void Assembly_CSharp::BestHTTP::SocketIO::Socket::set_Id(mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Id", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp::BestHTTP::SocketIO::Socket::get_IsOpen()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_IsOpen");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::BestHTTP::SocketIO::Socket::set_IsOpen(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_IsOpen", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp::BestHTTP::SocketIO::Socket::get_AutoDecodePayload()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_AutoDecodePayload");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::BestHTTP::SocketIO::Socket::set_AutoDecodePayload(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_AutoDecodePayload", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SocketIO::Socket::_ctor(mscorlib::System::String* nsp, Assembly_CSharp::BestHTTP::SocketIO::SocketManager* manager)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "BestHTTP.SocketIO.SocketManager" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)nsp;
	params[1] = (intptr_t)manager;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SocketIO::Socket::BestHTTP_SocketIO_ISocket_Open()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BestHTTP.SocketIO.ISocket.Open");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SocketIO::Socket::Disconnect()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Disconnect");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SocketIO::Socket::BestHTTP_SocketIO_ISocket_Disconnect(bool remove)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BestHTTP.SocketIO.ISocket.Disconnect", std::vector<std::string> { "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&remove;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::BestHTTP::SocketIO::Socket* Assembly_CSharp::BestHTTP::SocketIO::Socket::Emit(mscorlib::System::String* eventName, IL2CPP::Array<mscorlib::System::Object*>* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Emit", std::vector<std::string> { "System.String", "System.Object[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)eventName;
	params[1] = (intptr_t)args;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SocketIO::Socket*)returnValue;
}
Assembly_CSharp::BestHTTP::SocketIO::Socket* Assembly_CSharp::BestHTTP::SocketIO::Socket::Emit(mscorlib::System::String* eventName, Assembly_CSharp::BestHTTP::SocketIO::Events::SocketIOAckCallback* callback, IL2CPP::Array<mscorlib::System::Object*>* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Emit", std::vector<std::string> { "System.String", "BestHTTP.SocketIO.Events.SocketIOAckCallback", "System.Object[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)eventName;
	params[1] = (intptr_t)callback;
	params[2] = (intptr_t)args;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SocketIO::Socket*)returnValue;
}
Assembly_CSharp::BestHTTP::SocketIO::Socket* Assembly_CSharp::BestHTTP::SocketIO::Socket::EmitAck(Assembly_CSharp::BestHTTP::SocketIO::Packet* originalPacket, IL2CPP::Array<mscorlib::System::Object*>* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EmitAck", std::vector<std::string> { "BestHTTP.SocketIO.Packet", "System.Object[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)originalPacket;
	params[1] = (intptr_t)args;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SocketIO::Socket*)returnValue;
}
void Assembly_CSharp::BestHTTP::SocketIO::Socket::On(mscorlib::System::String* eventName, Assembly_CSharp::BestHTTP::SocketIO::Events::SocketIOCallback* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "On", std::vector<std::string> { "System.String", "BestHTTP.SocketIO.Events.SocketIOCallback" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)eventName;
	params[1] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SocketIO::Socket::On(Assembly_CSharp::BestHTTP::SocketIO::SocketIOEventTypes type, Assembly_CSharp::BestHTTP::SocketIO::Events::SocketIOCallback* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "On", std::vector<std::string> { "BestHTTP.SocketIO.SocketIOEventTypes", "BestHTTP.SocketIO.Events.SocketIOCallback" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&type;
	params[1] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SocketIO::Socket::On(mscorlib::System::String* eventName, Assembly_CSharp::BestHTTP::SocketIO::Events::SocketIOCallback* callback, bool autoDecodePayload)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "On", std::vector<std::string> { "System.String", "BestHTTP.SocketIO.Events.SocketIOCallback", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)eventName;
	params[1] = (intptr_t)callback;
	params[2] = (intptr_t)&autoDecodePayload;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SocketIO::Socket::On(Assembly_CSharp::BestHTTP::SocketIO::SocketIOEventTypes type, Assembly_CSharp::BestHTTP::SocketIO::Events::SocketIOCallback* callback, bool autoDecodePayload)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "On", std::vector<std::string> { "BestHTTP.SocketIO.SocketIOEventTypes", "BestHTTP.SocketIO.Events.SocketIOCallback", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&type;
	params[1] = (intptr_t)callback;
	params[2] = (intptr_t)&autoDecodePayload;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SocketIO::Socket::Once(mscorlib::System::String* eventName, Assembly_CSharp::BestHTTP::SocketIO::Events::SocketIOCallback* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Once", std::vector<std::string> { "System.String", "BestHTTP.SocketIO.Events.SocketIOCallback" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)eventName;
	params[1] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SocketIO::Socket::Once(Assembly_CSharp::BestHTTP::SocketIO::SocketIOEventTypes type, Assembly_CSharp::BestHTTP::SocketIO::Events::SocketIOCallback* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Once", std::vector<std::string> { "BestHTTP.SocketIO.SocketIOEventTypes", "BestHTTP.SocketIO.Events.SocketIOCallback" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&type;
	params[1] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SocketIO::Socket::Once(mscorlib::System::String* eventName, Assembly_CSharp::BestHTTP::SocketIO::Events::SocketIOCallback* callback, bool autoDecodePayload)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Once", std::vector<std::string> { "System.String", "BestHTTP.SocketIO.Events.SocketIOCallback", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)eventName;
	params[1] = (intptr_t)callback;
	params[2] = (intptr_t)&autoDecodePayload;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SocketIO::Socket::Once(Assembly_CSharp::BestHTTP::SocketIO::SocketIOEventTypes type, Assembly_CSharp::BestHTTP::SocketIO::Events::SocketIOCallback* callback, bool autoDecodePayload)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Once", std::vector<std::string> { "BestHTTP.SocketIO.SocketIOEventTypes", "BestHTTP.SocketIO.Events.SocketIOCallback", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&type;
	params[1] = (intptr_t)callback;
	params[2] = (intptr_t)&autoDecodePayload;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SocketIO::Socket::Off()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Off");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SocketIO::Socket::Off(mscorlib::System::String* eventName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Off", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)eventName;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SocketIO::Socket::Off(Assembly_CSharp::BestHTTP::SocketIO::SocketIOEventTypes type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Off", std::vector<std::string> { "BestHTTP.SocketIO.SocketIOEventTypes" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&type;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SocketIO::Socket::Off(mscorlib::System::String* eventName, Assembly_CSharp::BestHTTP::SocketIO::Events::SocketIOCallback* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Off", std::vector<std::string> { "System.String", "BestHTTP.SocketIO.Events.SocketIOCallback" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)eventName;
	params[1] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SocketIO::Socket::Off(Assembly_CSharp::BestHTTP::SocketIO::SocketIOEventTypes type, Assembly_CSharp::BestHTTP::SocketIO::Events::SocketIOCallback* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Off", std::vector<std::string> { "BestHTTP.SocketIO.SocketIOEventTypes", "BestHTTP.SocketIO.Events.SocketIOCallback" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&type;
	params[1] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SocketIO::Socket::BestHTTP_SocketIO_ISocket_OnPacket(Assembly_CSharp::BestHTTP::SocketIO::Packet* packet)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BestHTTP.SocketIO.ISocket.OnPacket", std::vector<std::string> { "BestHTTP.SocketIO.Packet" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)packet;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SocketIO::Socket::BestHTTP_SocketIO_ISocket_EmitEvent(Assembly_CSharp::BestHTTP::SocketIO::SocketIOEventTypes type, IL2CPP::Array<mscorlib::System::Object*>* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BestHTTP.SocketIO.ISocket.EmitEvent", std::vector<std::string> { "BestHTTP.SocketIO.SocketIOEventTypes", "System.Object[]" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&type;
	params[1] = (intptr_t)args;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SocketIO::Socket::BestHTTP_SocketIO_ISocket_EmitEvent(mscorlib::System::String* eventName, IL2CPP::Array<mscorlib::System::Object*>* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BestHTTP.SocketIO.ISocket.EmitEvent", std::vector<std::string> { "System.String", "System.Object[]" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)eventName;
	params[1] = (intptr_t)args;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SocketIO::Socket::BestHTTP_SocketIO_ISocket_EmitError(Assembly_CSharp::BestHTTP::SocketIO::SocketIOErrors errCode, mscorlib::System::String* msg)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BestHTTP.SocketIO.ISocket.EmitError", std::vector<std::string> { "BestHTTP.SocketIO.SocketIOErrors", "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&errCode;
	params[1] = (intptr_t)msg;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SocketIO::Socket::OnTransportOpen(Assembly_CSharp::BestHTTP::SocketIO::Socket* socket, Assembly_CSharp::BestHTTP::SocketIO::Packet* packet, IL2CPP::Array<mscorlib::System::Object*>* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnTransportOpen", std::vector<std::string> { "BestHTTP.SocketIO.Socket", "BestHTTP.SocketIO.Packet", "System.Object[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)socket;
	params[1] = (intptr_t)packet;
	params[2] = (intptr_t)args;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
