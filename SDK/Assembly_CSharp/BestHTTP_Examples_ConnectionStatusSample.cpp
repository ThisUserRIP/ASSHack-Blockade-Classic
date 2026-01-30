#include "BestHTTP_Examples_ConnectionStatusSample.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::Examples::ConnectionStatusSample::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.Examples", "ConnectionStatusSample");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::Examples::ConnectionStatusSample::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::BestHTTP::Examples::ConnectionStatusSample::Start()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Start");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::ConnectionStatusSample::OnDestroy()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnDestroy");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::ConnectionStatusSample::OnGUI()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnGUI");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::ConnectionStatusSample::signalRConnection_OnNonHubMessage(Assembly_CSharp::BestHTTP::SignalR::Connection* manager, mscorlib::System::Object* data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "signalRConnection_OnNonHubMessage", std::vector<std::string> { "BestHTTP.SignalR.Connection", "System.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)manager;
	params[1] = (intptr_t)data;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::ConnectionStatusSample::signalRConnection_OnStateChanged(Assembly_CSharp::BestHTTP::SignalR::Connection* manager, Assembly_CSharp::BestHTTP::SignalR::ConnectionStates oldState, Assembly_CSharp::BestHTTP::SignalR::ConnectionStates newState)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "signalRConnection_OnStateChanged", std::vector<std::string> { "BestHTTP.SignalR.Connection", "BestHTTP.SignalR.ConnectionStates", "BestHTTP.SignalR.ConnectionStates" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)manager;
	params[1] = (intptr_t)&oldState;
	params[2] = (intptr_t)&newState;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::ConnectionStatusSample::signalRConnection_OnError(Assembly_CSharp::BestHTTP::SignalR::Connection* manager, mscorlib::System::String* error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "signalRConnection_OnError", std::vector<std::string> { "BestHTTP.SignalR.Connection", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)manager;
	params[1] = (intptr_t)error;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::ConnectionStatusSample::statusHub_OnMethodCall(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, mscorlib::System::String* method, IL2CPP::Array<mscorlib::System::Object*>* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "statusHub_OnMethodCall", std::vector<std::string> { "BestHTTP.SignalR.Hubs.Hub", "System.String", "System.Object[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)hub;
	params[1] = (intptr_t)method;
	params[2] = (intptr_t)args;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::ConnectionStatusSample::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::ConnectionStatusSample::_OnGUI_b__5_0()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<OnGUI>b__5_0");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
