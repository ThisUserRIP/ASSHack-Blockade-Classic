#include "BestHTTP_Examples_DemoHubSample.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::Examples::DemoHubSample::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.Examples", "DemoHubSample");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::Examples::DemoHubSample::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::BestHTTP::Examples::DemoHubSample::Start()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Start");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::DemoHubSample::OnDestroy()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnDestroy");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::DemoHubSample::OnGUI()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnGUI");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::DemoHubSample::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::DemoHubSample::_Start_b__7_0(Assembly_CSharp::BestHTTP::SignalR::Connection* connection)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<Start>b__7_0", std::vector<std::string> { "BestHTTP.SignalR.Connection" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)connection;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::DemoHubSample::_Start_b__7_1(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, Assembly_CSharp::BestHTTP::SignalR::Messages::ClientMessage msg, Assembly_CSharp::BestHTTP::SignalR::Messages::ResultMessage* result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<Start>b__7_1", std::vector<std::string> { "BestHTTP.SignalR.Hubs.Hub", "BestHTTP.SignalR.Messages.ClientMessage", "BestHTTP.SignalR.Messages.ResultMessage" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)hub;
	params[1] = (intptr_t)&msg;
	params[2] = (intptr_t)result;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::DemoHubSample::_OnGUI_b__9_0()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<OnGUI>b__9_0");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
