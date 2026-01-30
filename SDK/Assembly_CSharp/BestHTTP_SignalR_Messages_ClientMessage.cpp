#include "BestHTTP_SignalR_Messages_ClientMessage.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::SignalR::Messages::ClientMessage::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.SignalR.Messages", "ClientMessage");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::SignalR::Messages::ClientMessage::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::BestHTTP::SignalR::Messages::ClientMessage::_ctor(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, mscorlib::System::String* method, IL2CPP::Array<mscorlib::System::Object*>* args, uint64_t callIdx, Assembly_CSharp::BestHTTP::SignalR::Hubs::OnMethodResultDelegate* resultCallback, Assembly_CSharp::BestHTTP::SignalR::Hubs::OnMethodFailedDelegate* resultErrorCallback, Assembly_CSharp::BestHTTP::SignalR::Hubs::OnMethodProgressDelegate* progressCallback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "BestHTTP.SignalR.Hubs.Hub", "System.String", "System.Object[]", "System.UInt64", "BestHTTP.SignalR.Hubs.OnMethodResultDelegate", "BestHTTP.SignalR.Hubs.OnMethodFailedDelegate", "BestHTTP.SignalR.Hubs.OnMethodProgressDelegate" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)hub;
	params[1] = (intptr_t)method;
	params[2] = (intptr_t)args;
	params[3] = (intptr_t)&callIdx;
	params[4] = (intptr_t)resultCallback;
	params[5] = (intptr_t)resultErrorCallback;
	params[6] = (intptr_t)progressCallback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
