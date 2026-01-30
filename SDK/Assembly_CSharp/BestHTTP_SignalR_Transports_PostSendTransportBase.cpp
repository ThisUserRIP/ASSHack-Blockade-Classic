#include "BestHTTP_SignalR_Transports_PostSendTransportBase.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::SignalR::Transports::PostSendTransportBase::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.SignalR.Transports", "PostSendTransportBase");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::SignalR::Transports::PostSendTransportBase::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::BestHTTP::SignalR::Transports::PostSendTransportBase::_ctor(mscorlib::System::String* name, Assembly_CSharp::BestHTTP::SignalR::Connection* con)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "BestHTTP.SignalR.Connection" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)con;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalR::Transports::PostSendTransportBase::SendImpl(mscorlib::System::String* json)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SendImpl", std::vector<std::string> { "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)json;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SignalR::Transports::PostSendTransportBase::OnSendRequestFinished(Assembly_CSharp::BestHTTP::HTTPRequest* req, Assembly_CSharp::BestHTTP::HTTPResponse* resp)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnSendRequestFinished", std::vector<std::string> { "BestHTTP.HTTPRequest", "BestHTTP.HTTPResponse" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)req;
	params[1] = (intptr_t)resp;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
