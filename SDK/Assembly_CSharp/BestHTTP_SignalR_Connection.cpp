#include "BestHTTP_SignalR_Connection.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::SignalR::Connection::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.SignalR", "Connection");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::SignalR::Connection::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
System::System::Uri* Assembly_CSharp::BestHTTP::SignalR::Connection::get_Uri()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Uri");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System::System::Uri*)returnValue;
}
void Assembly_CSharp::BestHTTP::SignalR::Connection::set_Uri(System::System::Uri* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Uri", std::vector<std::string> { "System.Uri" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::BestHTTP::SignalR::ConnectionStates Assembly_CSharp::BestHTTP::SignalR::Connection::get_State()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_State");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::BestHTTP::SignalR::ConnectionStates ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::BestHTTP::SignalR::ConnectionStates));
		return ret;
	}
	return static_cast<Assembly_CSharp::BestHTTP::SignalR::ConnectionStates>(*(Assembly_CSharp::BestHTTP::SignalR::ConnectionStates*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::BestHTTP::SignalR::Connection::set_State(Assembly_CSharp::BestHTTP::SignalR::ConnectionStates value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_State", std::vector<std::string> { "BestHTTP.SignalR.ConnectionStates" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::BestHTTP::SignalR::NegotiationData* Assembly_CSharp::BestHTTP::SignalR::Connection::get_NegotiationResult()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_NegotiationResult");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SignalR::NegotiationData*)returnValue;
}
void Assembly_CSharp::BestHTTP::SignalR::Connection::set_NegotiationResult(Assembly_CSharp::BestHTTP::SignalR::NegotiationData* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_NegotiationResult", std::vector<std::string> { "BestHTTP.SignalR.NegotiationData" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub*>* Assembly_CSharp::BestHTTP::SignalR::Connection::get_Hubs()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Hubs");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub*>*)returnValue;
}
void Assembly_CSharp::BestHTTP::SignalR::Connection::set_Hubs(IL2CPP::Array<Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub*>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Hubs", std::vector<std::string> { "BestHTTP.SignalR.Hubs.Hub[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::BestHTTP::SignalR::Transports::TransportBase* Assembly_CSharp::BestHTTP::SignalR::Connection::get_Transport()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Transport");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SignalR::Transports::TransportBase*)returnValue;
}
void Assembly_CSharp::BestHTTP::SignalR::Connection::set_Transport(Assembly_CSharp::BestHTTP::SignalR::Transports::TransportBase* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Transport", std::vector<std::string> { "BestHTTP.SignalR.Transports.TransportBase" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::BestHTTP::SignalR::ProtocolVersions Assembly_CSharp::BestHTTP::SignalR::Connection::get_Protocol()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Protocol");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::BestHTTP::SignalR::ProtocolVersions ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::BestHTTP::SignalR::ProtocolVersions));
		return ret;
	}
	return static_cast<Assembly_CSharp::BestHTTP::SignalR::ProtocolVersions>(*(Assembly_CSharp::BestHTTP::SignalR::ProtocolVersions*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::BestHTTP::SignalR::Connection::set_Protocol(Assembly_CSharp::BestHTTP::SignalR::ProtocolVersions value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Protocol", std::vector<std::string> { "BestHTTP.SignalR.ProtocolVersions" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::PlatformSupport::Collections::ObjectModel::ObservableDictionary_2<mscorlib::System::String, mscorlib::System::String>* Assembly_CSharp::BestHTTP::SignalR::Connection::get_AdditionalQueryParams()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_AdditionalQueryParams");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::PlatformSupport::Collections::ObjectModel::ObservableDictionary_2<mscorlib::System::String, mscorlib::System::String>*)returnValue;
}
void Assembly_CSharp::BestHTTP::SignalR::Connection::set_AdditionalQueryParams(Assembly_CSharp::PlatformSupport::Collections::ObjectModel::ObservableDictionary_2<mscorlib::System::String, mscorlib::System::String>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_AdditionalQueryParams", std::vector<std::string> { "PlatformSupport.Collections.ObjectModel.ObservableDictionary`2<System.String,System.String>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp::BestHTTP::SignalR::Connection::get_QueryParamsOnlyForHandshake()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_QueryParamsOnlyForHandshake");
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
void Assembly_CSharp::BestHTTP::SignalR::Connection::set_QueryParamsOnlyForHandshake(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_QueryParamsOnlyForHandshake", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::BestHTTP::SignalR::JsonEncoders::IJsonEncoder* Assembly_CSharp::BestHTTP::SignalR::Connection::get_JsonEncoder()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_JsonEncoder");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SignalR::JsonEncoders::IJsonEncoder*)returnValue;
}
void Assembly_CSharp::BestHTTP::SignalR::Connection::set_JsonEncoder(Assembly_CSharp::BestHTTP::SignalR::JsonEncoders::IJsonEncoder* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_JsonEncoder", std::vector<std::string> { "BestHTTP.SignalR.JsonEncoders.IJsonEncoder" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::BestHTTP::SignalR::Authentication::IAuthenticationProvider* Assembly_CSharp::BestHTTP::SignalR::Connection::get_AuthenticationProvider()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_AuthenticationProvider");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SignalR::Authentication::IAuthenticationProvider*)returnValue;
}
void Assembly_CSharp::BestHTTP::SignalR::Connection::set_AuthenticationProvider(Assembly_CSharp::BestHTTP::SignalR::Authentication::IAuthenticationProvider* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_AuthenticationProvider", std::vector<std::string> { "BestHTTP.SignalR.Authentication.IAuthenticationProvider" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::TimeSpan Assembly_CSharp::BestHTTP::SignalR::Connection::get_PingInterval()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_PingInterval");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::TimeSpan ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::TimeSpan));
		return ret;
	}
	return static_cast<mscorlib::System::TimeSpan>(*(mscorlib::System::TimeSpan*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::BestHTTP::SignalR::Connection::set_PingInterval(mscorlib::System::TimeSpan value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_PingInterval", std::vector<std::string> { "System.TimeSpan" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::TimeSpan Assembly_CSharp::BestHTTP::SignalR::Connection::get_ReconnectDelay()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ReconnectDelay");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::TimeSpan ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::TimeSpan));
		return ret;
	}
	return static_cast<mscorlib::System::TimeSpan>(*(mscorlib::System::TimeSpan*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::BestHTTP::SignalR::Connection::set_ReconnectDelay(mscorlib::System::TimeSpan value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_ReconnectDelay", std::vector<std::string> { "System.TimeSpan" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalR::Connection::add_OnConnected(Assembly_CSharp::BestHTTP::SignalR::OnConnectedDelegate* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "add_OnConnected", std::vector<std::string> { "BestHTTP.SignalR.OnConnectedDelegate" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalR::Connection::remove_OnConnected(Assembly_CSharp::BestHTTP::SignalR::OnConnectedDelegate* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "remove_OnConnected", std::vector<std::string> { "BestHTTP.SignalR.OnConnectedDelegate" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalR::Connection::add_OnClosed(Assembly_CSharp::BestHTTP::SignalR::OnClosedDelegate* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "add_OnClosed", std::vector<std::string> { "BestHTTP.SignalR.OnClosedDelegate" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalR::Connection::remove_OnClosed(Assembly_CSharp::BestHTTP::SignalR::OnClosedDelegate* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "remove_OnClosed", std::vector<std::string> { "BestHTTP.SignalR.OnClosedDelegate" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalR::Connection::add_OnError(Assembly_CSharp::BestHTTP::SignalR::OnErrorDelegate* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "add_OnError", std::vector<std::string> { "BestHTTP.SignalR.OnErrorDelegate" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalR::Connection::remove_OnError(Assembly_CSharp::BestHTTP::SignalR::OnErrorDelegate* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "remove_OnError", std::vector<std::string> { "BestHTTP.SignalR.OnErrorDelegate" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalR::Connection::add_OnReconnecting(Assembly_CSharp::BestHTTP::SignalR::OnConnectedDelegate* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "add_OnReconnecting", std::vector<std::string> { "BestHTTP.SignalR.OnConnectedDelegate" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalR::Connection::remove_OnReconnecting(Assembly_CSharp::BestHTTP::SignalR::OnConnectedDelegate* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "remove_OnReconnecting", std::vector<std::string> { "BestHTTP.SignalR.OnConnectedDelegate" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalR::Connection::add_OnReconnected(Assembly_CSharp::BestHTTP::SignalR::OnConnectedDelegate* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "add_OnReconnected", std::vector<std::string> { "BestHTTP.SignalR.OnConnectedDelegate" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalR::Connection::remove_OnReconnected(Assembly_CSharp::BestHTTP::SignalR::OnConnectedDelegate* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "remove_OnReconnected", std::vector<std::string> { "BestHTTP.SignalR.OnConnectedDelegate" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalR::Connection::add_OnStateChanged(Assembly_CSharp::BestHTTP::SignalR::OnStateChanged* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "add_OnStateChanged", std::vector<std::string> { "BestHTTP.SignalR.OnStateChanged" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalR::Connection::remove_OnStateChanged(Assembly_CSharp::BestHTTP::SignalR::OnStateChanged* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "remove_OnStateChanged", std::vector<std::string> { "BestHTTP.SignalR.OnStateChanged" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalR::Connection::add_OnNonHubMessage(Assembly_CSharp::BestHTTP::SignalR::OnNonHubMessageDelegate* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "add_OnNonHubMessage", std::vector<std::string> { "BestHTTP.SignalR.OnNonHubMessageDelegate" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalR::Connection::remove_OnNonHubMessage(Assembly_CSharp::BestHTTP::SignalR::OnNonHubMessageDelegate* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "remove_OnNonHubMessage", std::vector<std::string> { "BestHTTP.SignalR.OnNonHubMessageDelegate" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::BestHTTP::SignalR::OnPrepareRequestDelegate* Assembly_CSharp::BestHTTP::SignalR::Connection::get_RequestPreparator()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_RequestPreparator");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SignalR::OnPrepareRequestDelegate*)returnValue;
}
void Assembly_CSharp::BestHTTP::SignalR::Connection::set_RequestPreparator(Assembly_CSharp::BestHTTP::SignalR::OnPrepareRequestDelegate* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_RequestPreparator", std::vector<std::string> { "BestHTTP.SignalR.OnPrepareRequestDelegate" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* Assembly_CSharp::BestHTTP::SignalR::Connection::get_Item(int32_t idx)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Item", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&idx;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub*)returnValue;
}
Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* Assembly_CSharp::BestHTTP::SignalR::Connection::get_Item(mscorlib::System::String* hubName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Item", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)hubName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub*)returnValue;
}
uint32_t Assembly_CSharp::BestHTTP::SignalR::Connection::get_Timestamp()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Timestamp");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::String* Assembly_CSharp::BestHTTP::SignalR::Connection::get_ConnectionData()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ConnectionData");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* Assembly_CSharp::BestHTTP::SignalR::Connection::get_QueryParams()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_QueryParams");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void Assembly_CSharp::BestHTTP::SignalR::Connection::_ctor(System::System::Uri* uri, IL2CPP::Array<mscorlib::System::String*>* hubNames)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Uri", "System.String[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)uri;
	params[1] = (intptr_t)hubNames;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalR::Connection::_ctor(System::System::Uri* uri, IL2CPP::Array<Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub*>* hubs)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Uri", "BestHTTP.SignalR.Hubs.Hub[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)uri;
	params[1] = (intptr_t)hubs;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalR::Connection::_ctor(System::System::Uri* uri)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Uri" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)uri;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalR::Connection::Open()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Open");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalR::Connection::OnAuthenticationSucceded(Assembly_CSharp::BestHTTP::SignalR::Authentication::IAuthenticationProvider* provider)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnAuthenticationSucceded", std::vector<std::string> { "BestHTTP.SignalR.Authentication.IAuthenticationProvider" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)provider;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalR::Connection::OnAuthenticationFailed(Assembly_CSharp::BestHTTP::SignalR::Authentication::IAuthenticationProvider* provider, mscorlib::System::String* reason)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnAuthenticationFailed", std::vector<std::string> { "BestHTTP.SignalR.Authentication.IAuthenticationProvider", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)provider;
	params[1] = (intptr_t)reason;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalR::Connection::StartImpl()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StartImpl");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalR::Connection::OnNegotiationDataReceived(Assembly_CSharp::BestHTTP::SignalR::NegotiationData* data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnNegotiationDataReceived", std::vector<std::string> { "BestHTTP.SignalR.NegotiationData" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)data;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalR::Connection::OnNegotiationError(Assembly_CSharp::BestHTTP::SignalR::NegotiationData* data, mscorlib::System::String* error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnNegotiationError", std::vector<std::string> { "BestHTTP.SignalR.NegotiationData", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)data;
	params[1] = (intptr_t)error;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalR::Connection::Close()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Close");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalR::Connection::Reconnect()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Reconnect");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp::BestHTTP::SignalR::Connection::Send(mscorlib::System::Object* arg)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Send", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)arg;
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
bool Assembly_CSharp::BestHTTP::SignalR::Connection::SendJson(mscorlib::System::String* json)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SendJson", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)json;
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
void Assembly_CSharp::BestHTTP::SignalR::Connection::BestHTTP_SignalR_IConnection_OnMessage(Assembly_CSharp::BestHTTP::SignalR::Messages::IServerMessage* msg)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BestHTTP.SignalR.IConnection.OnMessage", std::vector<std::string> { "BestHTTP.SignalR.Messages.IServerMessage" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)msg;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalR::Connection::BestHTTP_SignalR_IConnection_TransportStarted()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BestHTTP.SignalR.IConnection.TransportStarted");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalR::Connection::BestHTTP_SignalR_IConnection_TransportReconnected()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BestHTTP.SignalR.IConnection.TransportReconnected");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalR::Connection::BestHTTP_SignalR_IConnection_TransportAborted()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BestHTTP.SignalR.IConnection.TransportAborted");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalR::Connection::BestHTTP_SignalR_IConnection_Error(mscorlib::System::String* reason)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BestHTTP.SignalR.IConnection.Error", std::vector<std::string> { "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)reason;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System::System::Uri* Assembly_CSharp::BestHTTP::SignalR::Connection::BestHTTP_SignalR_IConnection_BuildUri(Assembly_CSharp::BestHTTP::SignalR::RequestTypes type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BestHTTP.SignalR.IConnection.BuildUri", std::vector<std::string> { "BestHTTP.SignalR.RequestTypes" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&type;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::System::Uri*)returnValue;
}
System::System::Uri* Assembly_CSharp::BestHTTP::SignalR::Connection::BestHTTP_SignalR_IConnection_BuildUri(Assembly_CSharp::BestHTTP::SignalR::RequestTypes type, Assembly_CSharp::BestHTTP::SignalR::Transports::TransportBase* transport)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BestHTTP.SignalR.IConnection.BuildUri", std::vector<std::string> { "BestHTTP.SignalR.RequestTypes", "BestHTTP.SignalR.Transports.TransportBase" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&type;
	params[1] = (intptr_t)transport;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::System::Uri*)returnValue;
}
Assembly_CSharp::BestHTTP::HTTPRequest* Assembly_CSharp::BestHTTP::SignalR::Connection::BestHTTP_SignalR_IConnection_PrepareRequest(Assembly_CSharp::BestHTTP::HTTPRequest* req, Assembly_CSharp::BestHTTP::SignalR::RequestTypes type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BestHTTP.SignalR.IConnection.PrepareRequest", std::vector<std::string> { "BestHTTP.HTTPRequest", "BestHTTP.SignalR.RequestTypes" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)req;
	params[1] = (intptr_t)&type;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::HTTPRequest*)returnValue;
}
mscorlib::System::String* Assembly_CSharp::BestHTTP::SignalR::Connection::BestHTTP_SignalR_IConnection_ParseResponse(mscorlib::System::String* responseStr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BestHTTP.SignalR.IConnection.ParseResponse", std::vector<std::string> { "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)responseStr;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void Assembly_CSharp::BestHTTP::SignalR::Connection::BestHTTP_Extensions_IHeartbeat_OnHeartbeatUpdate(mscorlib::System::TimeSpan dif)
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
void Assembly_CSharp::BestHTTP::SignalR::Connection::InitOnStart()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitOnStart");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* Assembly_CSharp::BestHTTP::SignalR::Connection::FindHub(uint64_t msgId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindHub", std::vector<std::string> { "System.UInt64" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&msgId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub*)returnValue;
}
bool Assembly_CSharp::BestHTTP::SignalR::Connection::TryFallbackTransport()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryFallbackTransport");
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
void Assembly_CSharp::BestHTTP::SignalR::Connection::AdditionalQueryParams_CollectionChanged(mscorlib::System::Object* sender, Assembly_CSharp::PlatformSupport::Collections::Specialized::NotifyCollectionChangedEventArgs* e)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AdditionalQueryParams_CollectionChanged", std::vector<std::string> { "System.Object", "PlatformSupport.Collections.Specialized.NotifyCollectionChangedEventArgs" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)sender;
	params[1] = (intptr_t)e;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalR::Connection::Ping()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Ping");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalR::Connection::OnPingRequestFinished(Assembly_CSharp::BestHTTP::HTTPRequest* req, Assembly_CSharp::BestHTTP::HTTPResponse* resp)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnPingRequestFinished", std::vector<std::string> { "BestHTTP.HTTPRequest", "BestHTTP.HTTPResponse" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)req;
	params[1] = (intptr_t)resp;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalR::Connection::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
