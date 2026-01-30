#include "BestHTTP_Examples_SimpleTest.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::Examples::SimpleTest::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.Examples", "SimpleTest");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::Examples::SimpleTest::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::BestHTTP::Examples::SimpleTest::OnGUI()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnGUI");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::SimpleTest::OnOpen(Assembly_CSharp::BestHTTP::ServerSentEvents::EventSource* eventSource)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnOpen", std::vector<std::string> { "BestHTTP.ServerSentEvents.EventSource" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)eventSource;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::SimpleTest::OnClosed(Assembly_CSharp::BestHTTP::ServerSentEvents::EventSource* eventSource)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnClosed", std::vector<std::string> { "BestHTTP.ServerSentEvents.EventSource" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)eventSource;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::SimpleTest::OnError(Assembly_CSharp::BestHTTP::ServerSentEvents::EventSource* eventSource, mscorlib::System::String* error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnError", std::vector<std::string> { "BestHTTP.ServerSentEvents.EventSource", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)eventSource;
	params[1] = (intptr_t)error;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::SimpleTest::OnStateChanged(Assembly_CSharp::BestHTTP::ServerSentEvents::EventSource* eventSource, Assembly_CSharp::BestHTTP::ServerSentEvents::States oldState, Assembly_CSharp::BestHTTP::ServerSentEvents::States newState)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnStateChanged", std::vector<std::string> { "BestHTTP.ServerSentEvents.EventSource", "BestHTTP.ServerSentEvents.States", "BestHTTP.ServerSentEvents.States" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)eventSource;
	params[1] = (intptr_t)&oldState;
	params[2] = (intptr_t)&newState;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::SimpleTest::OnMessage(Assembly_CSharp::BestHTTP::ServerSentEvents::EventSource* eventSource, Assembly_CSharp::BestHTTP::ServerSentEvents::Message* message)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnMessage", std::vector<std::string> { "BestHTTP.ServerSentEvents.EventSource", "BestHTTP.ServerSentEvents.Message" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)eventSource;
	params[1] = (intptr_t)message;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::SimpleTest::OnDateTime(Assembly_CSharp::BestHTTP::ServerSentEvents::EventSource* eventSource, Assembly_CSharp::BestHTTP::ServerSentEvents::Message* message)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnDateTime", std::vector<std::string> { "BestHTTP.ServerSentEvents.EventSource", "BestHTTP.ServerSentEvents.Message" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)eventSource;
	params[1] = (intptr_t)message;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::SimpleTest::OnDestroy()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnDestroy");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::SimpleTest::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::SimpleTest::_OnGUI_b__4_0()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<OnGUI>b__4_0");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
