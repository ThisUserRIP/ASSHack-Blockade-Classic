#include "BestHTTP_Examples_TypedDemoHub.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::Examples::TypedDemoHub::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.Examples", "TypedDemoHub");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::Examples::TypedDemoHub::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::BestHTTP::Examples::TypedDemoHub::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::TypedDemoHub::Echo(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, Assembly_CSharp::BestHTTP::SignalR::Messages::MethodCallMessage* methodCall)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Echo", std::vector<std::string> { "BestHTTP.SignalR.Hubs.Hub", "BestHTTP.SignalR.Messages.MethodCallMessage" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)hub;
	params[1] = (intptr_t)methodCall;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::TypedDemoHub::Echo(mscorlib::System::String* msg)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Echo", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)msg;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::TypedDemoHub::OnEcho_Done(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, Assembly_CSharp::BestHTTP::SignalR::Messages::ClientMessage originalMessage, Assembly_CSharp::BestHTTP::SignalR::Messages::ResultMessage* result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnEcho_Done", std::vector<std::string> { "BestHTTP.SignalR.Hubs.Hub", "BestHTTP.SignalR.Messages.ClientMessage", "BestHTTP.SignalR.Messages.ResultMessage" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)hub;
	params[1] = (intptr_t)&originalMessage;
	params[2] = (intptr_t)result;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::TypedDemoHub::Draw()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Draw");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
