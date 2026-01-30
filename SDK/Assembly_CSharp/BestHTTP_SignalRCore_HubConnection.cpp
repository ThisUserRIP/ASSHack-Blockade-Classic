#include "BestHTTP_SignalRCore_HubConnection.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::SignalRCore::HubConnection::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.SignalRCore", "HubConnection");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::SignalRCore::HubConnection::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
System::System::Uri* Assembly_CSharp::BestHTTP::SignalRCore::HubConnection::get_Uri()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Uri");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System::System::Uri*)returnValue;
}
void Assembly_CSharp::BestHTTP::SignalRCore::HubConnection::set_Uri(System::System::Uri* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Uri", std::vector<std::string> { "System.Uri" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::BestHTTP::SignalRCore::ConnectionStates Assembly_CSharp::BestHTTP::SignalRCore::HubConnection::get_State()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_State");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::BestHTTP::SignalRCore::ConnectionStates ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::BestHTTP::SignalRCore::ConnectionStates));
		return ret;
	}
	return static_cast<Assembly_CSharp::BestHTTP::SignalRCore::ConnectionStates>(*(Assembly_CSharp::BestHTTP::SignalRCore::ConnectionStates*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::BestHTTP::SignalRCore::HubConnection::set_State(Assembly_CSharp::BestHTTP::SignalRCore::ConnectionStates value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_State", std::vector<std::string> { "BestHTTP.SignalRCore.ConnectionStates" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::BestHTTP::SignalRCore::ITransport* Assembly_CSharp::BestHTTP::SignalRCore::HubConnection::get_Transport()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Transport");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SignalRCore::ITransport*)returnValue;
}
void Assembly_CSharp::BestHTTP::SignalRCore::HubConnection::set_Transport(Assembly_CSharp::BestHTTP::SignalRCore::ITransport* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Transport", std::vector<std::string> { "BestHTTP.SignalRCore.ITransport" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::BestHTTP::SignalRCore::IProtocol* Assembly_CSharp::BestHTTP::SignalRCore::HubConnection::get_Protocol()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Protocol");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SignalRCore::IProtocol*)returnValue;
}
void Assembly_CSharp::BestHTTP::SignalRCore::HubConnection::set_Protocol(Assembly_CSharp::BestHTTP::SignalRCore::IProtocol* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Protocol", std::vector<std::string> { "BestHTTP.SignalRCore.IProtocol" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalRCore::HubConnection::add_OnRedirected(mscorlib::System::Action_3<Assembly_CSharp::BestHTTP::SignalRCore::HubConnection, System::System::Uri, System::System::Uri>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "add_OnRedirected", std::vector<std::string> { "System.Action`3<BestHTTP.SignalRCore.HubConnection,System.Uri,System.Uri>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalRCore::HubConnection::remove_OnRedirected(mscorlib::System::Action_3<Assembly_CSharp::BestHTTP::SignalRCore::HubConnection, System::System::Uri, System::System::Uri>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "remove_OnRedirected", std::vector<std::string> { "System.Action`3<BestHTTP.SignalRCore.HubConnection,System.Uri,System.Uri>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalRCore::HubConnection::add_OnConnected(mscorlib::System::Action_1<Assembly_CSharp::BestHTTP::SignalRCore::HubConnection>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "add_OnConnected", std::vector<std::string> { "System.Action`1<BestHTTP.SignalRCore.HubConnection>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalRCore::HubConnection::remove_OnConnected(mscorlib::System::Action_1<Assembly_CSharp::BestHTTP::SignalRCore::HubConnection>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "remove_OnConnected", std::vector<std::string> { "System.Action`1<BestHTTP.SignalRCore.HubConnection>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalRCore::HubConnection::add_OnError(mscorlib::System::Action_2<Assembly_CSharp::BestHTTP::SignalRCore::HubConnection, mscorlib::System::String>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "add_OnError", std::vector<std::string> { "System.Action`2<BestHTTP.SignalRCore.HubConnection,System.String>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalRCore::HubConnection::remove_OnError(mscorlib::System::Action_2<Assembly_CSharp::BestHTTP::SignalRCore::HubConnection, mscorlib::System::String>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "remove_OnError", std::vector<std::string> { "System.Action`2<BestHTTP.SignalRCore.HubConnection,System.String>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalRCore::HubConnection::add_OnClosed(mscorlib::System::Action_1<Assembly_CSharp::BestHTTP::SignalRCore::HubConnection>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "add_OnClosed", std::vector<std::string> { "System.Action`1<BestHTTP.SignalRCore.HubConnection>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalRCore::HubConnection::remove_OnClosed(mscorlib::System::Action_1<Assembly_CSharp::BestHTTP::SignalRCore::HubConnection>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "remove_OnClosed", std::vector<std::string> { "System.Action`1<BestHTTP.SignalRCore.HubConnection>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalRCore::HubConnection::add_OnMessage(mscorlib::System::Func_3<Assembly_CSharp::BestHTTP::SignalRCore::HubConnection, Assembly_CSharp::BestHTTP::SignalRCore::Messages::Message, mscorlib::System::Boolean>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "add_OnMessage", std::vector<std::string> { "System.Func`3<BestHTTP.SignalRCore.HubConnection,BestHTTP.SignalRCore.Messages.Message,System.Boolean>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalRCore::HubConnection::remove_OnMessage(mscorlib::System::Func_3<Assembly_CSharp::BestHTTP::SignalRCore::HubConnection, Assembly_CSharp::BestHTTP::SignalRCore::Messages::Message, mscorlib::System::Boolean>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "remove_OnMessage", std::vector<std::string> { "System.Func`3<BestHTTP.SignalRCore.HubConnection,BestHTTP.SignalRCore.Messages.Message,System.Boolean>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::BestHTTP::SignalRCore::IAuthenticationProvider* Assembly_CSharp::BestHTTP::SignalRCore::HubConnection::get_AuthenticationProvider()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_AuthenticationProvider");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SignalRCore::IAuthenticationProvider*)returnValue;
}
void Assembly_CSharp::BestHTTP::SignalRCore::HubConnection::set_AuthenticationProvider(Assembly_CSharp::BestHTTP::SignalRCore::IAuthenticationProvider* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_AuthenticationProvider", std::vector<std::string> { "BestHTTP.SignalRCore.IAuthenticationProvider" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::BestHTTP::SignalRCore::Messages::NegotiationResult* Assembly_CSharp::BestHTTP::SignalRCore::HubConnection::get_NegotiationResult()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_NegotiationResult");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SignalRCore::Messages::NegotiationResult*)returnValue;
}
void Assembly_CSharp::BestHTTP::SignalRCore::HubConnection::set_NegotiationResult(Assembly_CSharp::BestHTTP::SignalRCore::Messages::NegotiationResult* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_NegotiationResult", std::vector<std::string> { "BestHTTP.SignalRCore.Messages.NegotiationResult" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::BestHTTP::SignalRCore::HubOptions* Assembly_CSharp::BestHTTP::SignalRCore::HubConnection::get_Options()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Options");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SignalRCore::HubOptions*)returnValue;
}
void Assembly_CSharp::BestHTTP::SignalRCore::HubConnection::set_Options(Assembly_CSharp::BestHTTP::SignalRCore::HubOptions* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Options", std::vector<std::string> { "BestHTTP.SignalRCore.HubOptions" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Assembly_CSharp::BestHTTP::SignalRCore::HubConnection::get_RedirectCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_RedirectCount");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::BestHTTP::SignalRCore::HubConnection::set_RedirectCount(int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_RedirectCount", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalRCore::HubConnection::_ctor(System::System::Uri* hubUri, Assembly_CSharp::BestHTTP::SignalRCore::IProtocol* protocol)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Uri", "BestHTTP.SignalRCore.IProtocol" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)hubUri;
	params[1] = (intptr_t)protocol;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalRCore::HubConnection::_ctor(System::System::Uri* hubUri, Assembly_CSharp::BestHTTP::SignalRCore::IProtocol* protocol, Assembly_CSharp::BestHTTP::SignalRCore::HubOptions* options)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Uri", "BestHTTP.SignalRCore.IProtocol", "BestHTTP.SignalRCore.HubOptions" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)hubUri;
	params[1] = (intptr_t)protocol;
	params[2] = (intptr_t)options;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalRCore::HubConnection::StartConnect()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StartConnect");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalRCore::HubConnection::OnAuthenticationSucceded(Assembly_CSharp::BestHTTP::SignalRCore::IAuthenticationProvider* provider)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnAuthenticationSucceded", std::vector<std::string> { "BestHTTP.SignalRCore.IAuthenticationProvider" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)provider;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalRCore::HubConnection::OnAuthenticationFailed(Assembly_CSharp::BestHTTP::SignalRCore::IAuthenticationProvider* provider, mscorlib::System::String* reason)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnAuthenticationFailed", std::vector<std::string> { "BestHTTP.SignalRCore.IAuthenticationProvider", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)provider;
	params[1] = (intptr_t)reason;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalRCore::HubConnection::StartNegotiation()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StartNegotiation");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalRCore::HubConnection::ConnectImpl()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ConnectImpl");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp::BestHTTP::SignalRCore::HubConnection::IsTransportSupported(mscorlib::System::String* transportName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsTransportSupported", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)transportName;
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
void Assembly_CSharp::BestHTTP::SignalRCore::HubConnection::OnNegotiationRequestFinished(Assembly_CSharp::BestHTTP::HTTPRequest* req, Assembly_CSharp::BestHTTP::HTTPResponse* resp)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnNegotiationRequestFinished", std::vector<std::string> { "BestHTTP.HTTPRequest", "BestHTTP.HTTPResponse" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)req;
	params[1] = (intptr_t)resp;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalRCore::HubConnection::StartClose()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StartClose");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::BestHTTP::Futures::IFuture_1<mscorlib::System::Boolean>* Assembly_CSharp::BestHTTP::SignalRCore::HubConnection::Send(mscorlib::System::String* target, IL2CPP::Array<mscorlib::System::Object*>* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Send", std::vector<std::string> { "System.String", "System.Object[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)args;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::Futures::IFuture_1<mscorlib::System::Boolean>*)returnValue;
}
int64_t Assembly_CSharp::BestHTTP::SignalRCore::HubConnection::InvokeImp(mscorlib::System::String* target, IL2CPP::Array<mscorlib::System::Object*>* args, mscorlib::System::Action_1<Assembly_CSharp::BestHTTP::SignalRCore::Messages::Message>* callback, bool isStreamingInvocation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InvokeImp", std::vector<std::string> { "System.String", "System.Object[]", "System.Action`1<BestHTTP.SignalRCore.Messages.Message>", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)args;
	params[2] = (intptr_t)callback;
	params[3] = (intptr_t)&isStreamingInvocation;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int64_t ret;
		std::memset(&ret, 0, sizeof(int64_t));
		return ret;
	}
	return static_cast<int64_t>(*(int64_t*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::BestHTTP::SignalRCore::HubConnection::SendMessage(Assembly_CSharp::BestHTTP::SignalRCore::Messages::Message message)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SendMessage", std::vector<std::string> { "BestHTTP.SignalRCore.Messages.Message" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&message;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalRCore::HubConnection::On(mscorlib::System::String* methodName, mscorlib::System::Action* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "On", std::vector<std::string> { "System.String", "System.Action" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)methodName;
	params[1] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalRCore::HubConnection::On(mscorlib::System::String* methodName, IL2CPP::Array<mscorlib::System::Type*>* paramTypes, mscorlib::System::Action_1<IL2CPP::Array<mscorlib::System::Object*>>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "On", std::vector<std::string> { "System.String", "System.Type[]", "System.Action`1<System.Object[]>" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)methodName;
	params[1] = (intptr_t)paramTypes;
	params[2] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalRCore::HubConnection::OnMessages(mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::BestHTTP::SignalRCore::Messages::Message>* messages)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnMessages", std::vector<std::string> { "System.Collections.Generic.List`1<BestHTTP.SignalRCore.Messages.Message>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)messages;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalRCore::HubConnection::Transport_OnStateChanged(Assembly_CSharp::BestHTTP::SignalRCore::TransportStates oldState, Assembly_CSharp::BestHTTP::SignalRCore::TransportStates newState)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Transport_OnStateChanged", std::vector<std::string> { "BestHTTP.SignalRCore.TransportStates", "BestHTTP.SignalRCore.TransportStates" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&oldState;
	params[1] = (intptr_t)&newState;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalRCore::HubConnection::SetState(Assembly_CSharp::BestHTTP::SignalRCore::ConnectionStates state, mscorlib::System::String* errorReason)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetState", std::vector<std::string> { "BestHTTP.SignalRCore.ConnectionStates", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&state;
	params[1] = (intptr_t)errorReason;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalRCore::HubConnection::BestHTTP_Extensions_IHeartbeat_OnHeartbeatUpdate(mscorlib::System::TimeSpan dif)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BestHTTP.Extensions.IHeartbeat.OnHeartbeatUpdate", std::vector<std::string> { "System.TimeSpan" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&dif;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalRCore::HubConnection::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
