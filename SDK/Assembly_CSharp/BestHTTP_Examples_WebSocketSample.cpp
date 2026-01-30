#include "BestHTTP_Examples_WebSocketSample.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::Examples::WebSocketSample::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.Examples", "WebSocketSample");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::Examples::WebSocketSample::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::BestHTTP::Examples::WebSocketSample::OnDestroy()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnDestroy");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::WebSocketSample::OnGUI()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnGUI");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::WebSocketSample::OnOpen(Assembly_CSharp::BestHTTP::WebSocket::WebSocket* ws)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnOpen", std::vector<std::string> { "BestHTTP.WebSocket.WebSocket" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)ws;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::WebSocketSample::OnMessageReceived(Assembly_CSharp::BestHTTP::WebSocket::WebSocket* ws, mscorlib::System::String* message)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnMessageReceived", std::vector<std::string> { "BestHTTP.WebSocket.WebSocket", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)ws;
	params[1] = (intptr_t)message;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::WebSocketSample::OnClosed(Assembly_CSharp::BestHTTP::WebSocket::WebSocket* ws, uint16_t code, mscorlib::System::String* message)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnClosed", std::vector<std::string> { "BestHTTP.WebSocket.WebSocket", "System.UInt16", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)ws;
	params[1] = (intptr_t)&code;
	params[2] = (intptr_t)message;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::WebSocketSample::OnError(Assembly_CSharp::BestHTTP::WebSocket::WebSocket* ws, mscorlib::System::Exception* ex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnError", std::vector<std::string> { "BestHTTP.WebSocket.WebSocket", "System.Exception" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)ws;
	params[1] = (intptr_t)ex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::WebSocketSample::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::WebSocketSample::_OnGUI_b__6_0()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<OnGUI>b__6_0");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
