#include "BestHTTP_SocketIO_Events_EventTable.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::SocketIO::Events::EventTable::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.SocketIO.Events", "EventTable");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::SocketIO::Events::EventTable::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Assembly_CSharp::BestHTTP::SocketIO::Socket* Assembly_CSharp::BestHTTP::SocketIO::Events::EventTable::get_Socket()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Socket");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SocketIO::Socket*)returnValue;
}
void Assembly_CSharp::BestHTTP::SocketIO::Events::EventTable::set_Socket(Assembly_CSharp::BestHTTP::SocketIO::Socket* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Socket", std::vector<std::string> { "BestHTTP.SocketIO.Socket" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SocketIO::Events::EventTable::_ctor(Assembly_CSharp::BestHTTP::SocketIO::Socket* socket)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "BestHTTP.SocketIO.Socket" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)socket;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SocketIO::Events::EventTable::Register(mscorlib::System::String* eventName, Assembly_CSharp::BestHTTP::SocketIO::Events::SocketIOCallback* callback, bool onlyOnce, bool autoDecodePayload)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Register", std::vector<std::string> { "System.String", "BestHTTP.SocketIO.Events.SocketIOCallback", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)eventName;
	params[1] = (intptr_t)callback;
	params[2] = (intptr_t)&onlyOnce;
	params[3] = (intptr_t)&autoDecodePayload;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SocketIO::Events::EventTable::Unregister(mscorlib::System::String* eventName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Unregister", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)eventName;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SocketIO::Events::EventTable::Unregister(mscorlib::System::String* eventName, Assembly_CSharp::BestHTTP::SocketIO::Events::SocketIOCallback* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Unregister", std::vector<std::string> { "System.String", "BestHTTP.SocketIO.Events.SocketIOCallback" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)eventName;
	params[1] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SocketIO::Events::EventTable::Call(mscorlib::System::String* eventName, Assembly_CSharp::BestHTTP::SocketIO::Packet* packet, IL2CPP::Array<mscorlib::System::Object*>* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Call", std::vector<std::string> { "System.String", "BestHTTP.SocketIO.Packet", "System.Object[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)eventName;
	params[1] = (intptr_t)packet;
	params[2] = (intptr_t)args;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SocketIO::Events::EventTable::Call(Assembly_CSharp::BestHTTP::SocketIO::Packet* packet)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Call", std::vector<std::string> { "BestHTTP.SocketIO.Packet" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)packet;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SocketIO::Events::EventTable::Clear()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Clear");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp::BestHTTP::SocketIO::Events::EventTable::ShouldDecodePayload(mscorlib::System::String* eventName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ShouldDecodePayload", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)eventName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
bool Assembly_CSharp::BestHTTP::SocketIO::Events::EventTable::HasSubsciber(mscorlib::System::String* eventName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HasSubsciber", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)eventName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
