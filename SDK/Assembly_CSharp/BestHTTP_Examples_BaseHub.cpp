#include "BestHTTP_Examples_BaseHub.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::Examples::BaseHub::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.Examples", "BaseHub");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::Examples::BaseHub::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::BestHTTP::Examples::BaseHub::_ctor(mscorlib::System::String* name, mscorlib::System::String* title)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)title;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::BaseHub::Joined(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, Assembly_CSharp::BestHTTP::SignalR::Messages::MethodCallMessage* methodCall)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Joined", std::vector<std::string> { "BestHTTP.SignalR.Hubs.Hub", "BestHTTP.SignalR.Messages.MethodCallMessage" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)hub;
	params[1] = (intptr_t)methodCall;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::BaseHub::Rejoined(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, Assembly_CSharp::BestHTTP::SignalR::Messages::MethodCallMessage* methodCall)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Rejoined", std::vector<std::string> { "BestHTTP.SignalR.Hubs.Hub", "BestHTTP.SignalR.Messages.MethodCallMessage" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)hub;
	params[1] = (intptr_t)methodCall;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::BaseHub::Left(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, Assembly_CSharp::BestHTTP::SignalR::Messages::MethodCallMessage* methodCall)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Left", std::vector<std::string> { "BestHTTP.SignalR.Hubs.Hub", "BestHTTP.SignalR.Messages.MethodCallMessage" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)hub;
	params[1] = (intptr_t)methodCall;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::BaseHub::Invoked(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, Assembly_CSharp::BestHTTP::SignalR::Messages::MethodCallMessage* methodCall)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Invoked", std::vector<std::string> { "BestHTTP.SignalR.Hubs.Hub", "BestHTTP.SignalR.Messages.MethodCallMessage" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)hub;
	params[1] = (intptr_t)methodCall;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::BaseHub::InvokedFromClient()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InvokedFromClient");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::BaseHub::OnInvoked(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, Assembly_CSharp::BestHTTP::SignalR::Messages::ClientMessage originalMessage, Assembly_CSharp::BestHTTP::SignalR::Messages::ResultMessage* result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnInvoked", std::vector<std::string> { "BestHTTP.SignalR.Hubs.Hub", "BestHTTP.SignalR.Messages.ClientMessage", "BestHTTP.SignalR.Messages.ResultMessage" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)hub;
	params[1] = (intptr_t)&originalMessage;
	params[2] = (intptr_t)result;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::BaseHub::OnInvokeFailed(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, Assembly_CSharp::BestHTTP::SignalR::Messages::ClientMessage originalMessage, Assembly_CSharp::BestHTTP::SignalR::Messages::FailureMessage* result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnInvokeFailed", std::vector<std::string> { "BestHTTP.SignalR.Hubs.Hub", "BestHTTP.SignalR.Messages.ClientMessage", "BestHTTP.SignalR.Messages.FailureMessage" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)hub;
	params[1] = (intptr_t)&originalMessage;
	params[2] = (intptr_t)result;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::BaseHub::Draw()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Draw");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
