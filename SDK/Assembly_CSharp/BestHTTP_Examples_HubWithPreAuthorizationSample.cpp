#include "BestHTTP_Examples_HubWithPreAuthorizationSample.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::Examples::HubWithPreAuthorizationSample::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.Examples", "HubWithPreAuthorizationSample");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::Examples::HubWithPreAuthorizationSample::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::BestHTTP::Examples::HubWithPreAuthorizationSample::Start()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Start");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::HubWithPreAuthorizationSample::AuthenticationProvider_OnAuthenticationSucceded(Assembly_CSharp::BestHTTP::SignalRCore::IAuthenticationProvider* provider)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AuthenticationProvider_OnAuthenticationSucceded", std::vector<std::string> { "BestHTTP.SignalRCore.IAuthenticationProvider" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)provider;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::HubWithPreAuthorizationSample::AuthenticationProvider_OnAuthenticationFailed(Assembly_CSharp::BestHTTP::SignalRCore::IAuthenticationProvider* provider, mscorlib::System::String* reason)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AuthenticationProvider_OnAuthenticationFailed", std::vector<std::string> { "BestHTTP.SignalRCore.IAuthenticationProvider", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)provider;
	params[1] = (intptr_t)reason;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::HubWithPreAuthorizationSample::OnDestroy()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnDestroy");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::HubWithPreAuthorizationSample::OnGUI()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnGUI");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::HubWithPreAuthorizationSample::Hub_OnConnected(Assembly_CSharp::BestHTTP::SignalRCore::HubConnection* hub)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Hub_OnConnected", std::vector<std::string> { "BestHTTP.SignalRCore.HubConnection" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)hub;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp::BestHTTP::Examples::HubWithPreAuthorizationSample::Hub_OnMessage(Assembly_CSharp::BestHTTP::SignalRCore::HubConnection* hub, Assembly_CSharp::BestHTTP::SignalRCore::Messages::Message message)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Hub_OnMessage", std::vector<std::string> { "BestHTTP.SignalRCore.HubConnection", "BestHTTP.SignalRCore.Messages.Message" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)hub;
	params[1] = (intptr_t)&message;
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
void Assembly_CSharp::BestHTTP::Examples::HubWithPreAuthorizationSample::Hub_OnClosed(Assembly_CSharp::BestHTTP::SignalRCore::HubConnection* hub)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Hub_OnClosed", std::vector<std::string> { "BestHTTP.SignalRCore.HubConnection" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)hub;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::HubWithPreAuthorizationSample::Hub_OnError(Assembly_CSharp::BestHTTP::SignalRCore::HubConnection* hub, mscorlib::System::String* error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Hub_OnError", std::vector<std::string> { "BestHTTP.SignalRCore.HubConnection", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)hub;
	params[1] = (intptr_t)error;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::HubWithPreAuthorizationSample::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::HubWithPreAuthorizationSample::_OnGUI_b__9_0()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<OnGUI>b__9_0");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::HubWithPreAuthorizationSample::_Hub_OnConnected_b__10_0(mscorlib::System::String* ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<Hub_OnConnected>b__10_0", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
