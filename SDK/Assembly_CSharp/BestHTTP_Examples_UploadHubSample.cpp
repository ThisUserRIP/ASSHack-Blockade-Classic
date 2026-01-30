#include "BestHTTP_Examples_UploadHubSample.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::Examples::UploadHubSample::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.Examples", "UploadHubSample");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::Examples::UploadHubSample::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::BestHTTP::Examples::UploadHubSample::Start()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Start");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::UploadHubSample::OnDestroy()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnDestroy");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::UploadHubSample::OnGUI()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnGUI");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::UploadHubSample::Hub_Redirected(Assembly_CSharp::BestHTTP::SignalRCore::HubConnection* hub, System::System::Uri* oldUri, System::System::Uri* newUri)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Hub_Redirected", std::vector<std::string> { "BestHTTP.SignalRCore.HubConnection", "System.Uri", "System.Uri" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)hub;
	params[1] = (intptr_t)oldUri;
	params[2] = (intptr_t)newUri;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::UploadHubSample::Hub_OnConnected(Assembly_CSharp::BestHTTP::SignalRCore::HubConnection* hub)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Hub_OnConnected", std::vector<std::string> { "BestHTTP.SignalRCore.HubConnection" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)hub;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::IEnumerator* Assembly_CSharp::BestHTTP::Examples::UploadHubSample::UploadWord()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UploadWord");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::IEnumerator*)returnValue;
}
mscorlib::System::Collections::IEnumerator* Assembly_CSharp::BestHTTP::Examples::UploadHubSample::ScoreTracker()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ScoreTracker");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::IEnumerator*)returnValue;
}
mscorlib::System::Collections::IEnumerator* Assembly_CSharp::BestHTTP::Examples::UploadHubSample::ScoreTrackerWithParameterChannels()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ScoreTrackerWithParameterChannels");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::IEnumerator*)returnValue;
}
mscorlib::System::Collections::IEnumerator* Assembly_CSharp::BestHTTP::Examples::UploadHubSample::StreamEcho()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StreamEcho");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::IEnumerator*)returnValue;
}
mscorlib::System::Collections::IEnumerator* Assembly_CSharp::BestHTTP::Examples::UploadHubSample::PersonEcho()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PersonEcho");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::IEnumerator*)returnValue;
}
bool Assembly_CSharp::BestHTTP::Examples::UploadHubSample::Hub_OnMessage(Assembly_CSharp::BestHTTP::SignalRCore::HubConnection* hub, Assembly_CSharp::BestHTTP::SignalRCore::Messages::Message message)
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
void Assembly_CSharp::BestHTTP::Examples::UploadHubSample::Hub_OnClosed(Assembly_CSharp::BestHTTP::SignalRCore::HubConnection* hub)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Hub_OnClosed", std::vector<std::string> { "BestHTTP.SignalRCore.HubConnection" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)hub;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::UploadHubSample::Hub_OnError(Assembly_CSharp::BestHTTP::SignalRCore::HubConnection* hub, mscorlib::System::String* error)
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
void Assembly_CSharp::BestHTTP::Examples::UploadHubSample::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::UploadHubSample::_OnGUI_b__7_0()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<OnGUI>b__7_0");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::UploadHubSample::_UploadWord_b__10_0(Assembly_CSharp::BestHTTP::Futures::IFuture_1<mscorlib::System::String>* result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<UploadWord>b__10_0", std::vector<std::string> { "BestHTTP.Futures.IFuture`1<System.String>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)result;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::UploadHubSample::_ScoreTracker_b__11_0(Assembly_CSharp::BestHTTP::Futures::IFuture_1<mscorlib::System::String>* result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<ScoreTracker>b__11_0", std::vector<std::string> { "BestHTTP.Futures.IFuture`1<System.String>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)result;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::UploadHubSample::_ScoreTrackerWithParameterChannels_b__12_0(Assembly_CSharp::BestHTTP::Futures::IFuture_1<mscorlib::System::String>* result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<ScoreTrackerWithParameterChannels>b__12_0", std::vector<std::string> { "BestHTTP.Futures.IFuture`1<System.String>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)result;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::UploadHubSample::_StreamEcho_b__13_0(Assembly_CSharp::BestHTTP::Futures::IFuture_1<Assembly_CSharp::BestHTTP::SignalRCore::StreamItemContainer_1<mscorlib::System::String>>* result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<StreamEcho>b__13_0", std::vector<std::string> { "BestHTTP.Futures.IFuture`1<BestHTTP.SignalRCore.StreamItemContainer`1<System.String>>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)result;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::UploadHubSample::_StreamEcho_b__13_1(Assembly_CSharp::BestHTTP::SignalRCore::StreamItemContainer_1<mscorlib::System::String>* item)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<StreamEcho>b__13_1", std::vector<std::string> { "BestHTTP.SignalRCore.StreamItemContainer`1<System.String>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)item;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::UploadHubSample::_PersonEcho_b__14_0(Assembly_CSharp::BestHTTP::Futures::IFuture_1<Assembly_CSharp::BestHTTP::SignalRCore::StreamItemContainer_1<Assembly_CSharp::BestHTTP::Examples::Person>>* result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<PersonEcho>b__14_0", std::vector<std::string> { "BestHTTP.Futures.IFuture`1<BestHTTP.SignalRCore.StreamItemContainer`1<BestHTTP.Examples.Person>>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)result;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::Examples::UploadHubSample::_PersonEcho_b__14_1(Assembly_CSharp::BestHTTP::SignalRCore::StreamItemContainer_1<Assembly_CSharp::BestHTTP::Examples::Person>* item)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<PersonEcho>b__14_1", std::vector<std::string> { "BestHTTP.SignalRCore.StreamItemContainer`1<BestHTTP.Examples.Person>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)item;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
