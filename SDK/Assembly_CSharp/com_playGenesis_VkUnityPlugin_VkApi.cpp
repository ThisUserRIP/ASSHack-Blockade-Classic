#include "com_playGenesis_VkUnityPlugin_VkApi.h"

IL2CPP::Il2CppClass* Assembly_CSharp::com::playGenesis::VkUnityPlugin::VkApi::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "com.playGenesis.VkUnityPlugin", "VkApi");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::com::playGenesis::VkUnityPlugin::VkApi::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::VkApi::add_AccessDenied(mscorlib::System::EventHandler_1<Assembly_CSharp::com::playGenesis::VkUnityPlugin::Error>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "add_AccessDenied", std::vector<std::string> { "System.EventHandler`1<com.playGenesis.VkUnityPlugin.Error>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::VkApi::remove_AccessDenied(mscorlib::System::EventHandler_1<Assembly_CSharp::com::playGenesis::VkUnityPlugin::Error>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "remove_AccessDenied", std::vector<std::string> { "System.EventHandler`1<com.playGenesis.VkUnityPlugin.Error>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::VkApi::add_ReceivedNewToken(mscorlib::System::EventHandler_1<Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKToken>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "add_ReceivedNewToken", std::vector<std::string> { "System.EventHandler`1<com.playGenesis.VkUnityPlugin.VKToken>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::VkApi::remove_ReceivedNewToken(mscorlib::System::EventHandler_1<Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKToken>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "remove_ReceivedNewToken", std::vector<std::string> { "System.EventHandler`1<com.playGenesis.VkUnityPlugin.VKToken>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::VkApi::add_LoggedIn(mscorlib::System::Action* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "add_LoggedIn", std::vector<std::string> { "System.Action" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::VkApi::remove_LoggedIn(mscorlib::System::Action* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "remove_LoggedIn", std::vector<std::string> { "System.Action" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::VkApi::add_LoggedOut(mscorlib::System::Action* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "add_LoggedOut", std::vector<std::string> { "System.Action" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::VkApi::remove_LoggedOut(mscorlib::System::Action* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "remove_LoggedOut", std::vector<std::string> { "System.Action" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::VkApi::add_GlobalErrorHandler(mscorlib::System::Action_1<Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "add_GlobalErrorHandler", std::vector<std::string> { "System.Action`1<com.playGenesis.VkUnityPlugin.VKRequest>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::VkApi::remove_GlobalErrorHandler(mscorlib::System::Action_1<Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "remove_GlobalErrorHandler", std::vector<std::string> { "System.Action`1<com.playGenesis.VkUnityPlugin.VKRequest>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::VkApi::KillAllReqeusts()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "KillAllReqeusts");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::VkApi::Login()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Login");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::IEnumerator* Assembly_CSharp::com::playGenesis::VkUnityPlugin::VkApi::LockLogin1Sec()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LockLogin1Sec");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::IEnumerator*)returnValue;
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::VkApi::ResetLock()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ResetLock");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::VkApi::Logout()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Logout");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::VkApi::onReceiveNewToken(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKToken* e)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "onReceiveNewToken", std::vector<std::string> { "com.playGenesis.VkUnityPlugin.VKToken" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)e;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::VkApi::onLoggedIn()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "onLoggedIn");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::IEnumerator* Assembly_CSharp::com::playGenesis::VkUnityPlugin::VkApi::WaitAndGoOn()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WaitAndGoOn");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::IEnumerator*)returnValue;
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::VkApi::onLoggedOut()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "onLoggedOut");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::VkApi::onAccessDenied(Assembly_CSharp::com::playGenesis::VkUnityPlugin::Error* e)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "onAccessDenied", std::vector<std::string> { "com.playGenesis.VkUnityPlugin.Error" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)e;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::VkApi::CheckEditorSetup()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckEditorSetup");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::VkApi::SubscribeToGlobalErrorEvent(mscorlib::System::Action_1<Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest>* handler)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SubscribeToGlobalErrorEvent", std::vector<std::string> { "System.Action`1<com.playGenesis.VkUnityPlugin.VKRequest>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)handler;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::VkApi::UnsubscribeFromGlobalErrorEvent(mscorlib::System::Action_1<Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest>* handler)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnsubscribeFromGlobalErrorEvent", std::vector<std::string> { "System.Action`1<com.playGenesis.VkUnityPlugin.VKRequest>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)handler;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::VkApi::InitToken()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitToken");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::VkApi::Awake()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Awake");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest* Assembly_CSharp::com::playGenesis::VkUnityPlugin::VkApi::GenerateWWWFormRequest(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest* httprequest)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GenerateWWWFormRequest", std::vector<std::string> { "com.playGenesis.VkUnityPlugin.VKRequest" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)httprequest;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest*)returnValue;
}
UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest* Assembly_CSharp::com::playGenesis::VkUnityPlugin::VkApi::GenerateWWWFormRequest(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest* httprequest, Assembly_CSharp::com::playGenesis::VkUnityPlugin::FileForUpload* file)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GenerateWWWFormRequest", std::vector<std::string> { "com.playGenesis.VkUnityPlugin.VKRequest", "com.playGenesis.VkUnityPlugin.FileForUpload" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)httprequest;
	params[1] = (intptr_t)file;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest*)returnValue;
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::VkApi::HandleTokenExpired(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest* httprequest)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HandleTokenExpired", std::vector<std::string> { "com.playGenesis.VkUnityPlugin.VKRequest" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)httprequest;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::VkApi::HandleWWWError(UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest* www, Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest* httprequest)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HandleWWWError", std::vector<std::string> { "UnityEngine.Networking.UnityWebRequest", "com.playGenesis.VkUnityPlugin.VKRequest" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)www;
	params[1] = (intptr_t)httprequest;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::VkApi::HandleVKError(UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest* www, Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest* httprequest)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HandleVKError", std::vector<std::string> { "UnityEngine.Networking.UnityWebRequest", "com.playGenesis.VkUnityPlugin.VKRequest" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)www;
	params[1] = (intptr_t)httprequest;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::VkApi::HandleNoError(UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest* www, Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest* httprequest)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HandleNoError", std::vector<std::string> { "UnityEngine.Networking.UnityWebRequest", "com.playGenesis.VkUnityPlugin.VKRequest" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)www;
	params[1] = (intptr_t)httprequest;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::VkApi::HandleResponse(UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest* www, Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest* httpRequest)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HandleResponse", std::vector<std::string> { "UnityEngine.Networking.UnityWebRequest", "com.playGenesis.VkUnityPlugin.VKRequest" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)www;
	params[1] = (intptr_t)httpRequest;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::VkApi::Call(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest* httprequest)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Call", std::vector<std::string> { "com.playGenesis.VkUnityPlugin.VKRequest" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)httprequest;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::IEnumerator* Assembly_CSharp::com::playGenesis::VkUnityPlugin::VkApi::_Call(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest* httprequest)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "_Call", std::vector<std::string> { "com.playGenesis.VkUnityPlugin.VKRequest" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)httprequest;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::IEnumerator*)returnValue;
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::VkApi::UploadToserverCall(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest* httprequest)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UploadToserverCall", std::vector<std::string> { "com.playGenesis.VkUnityPlugin.VKRequest" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)httprequest;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::VkApi::UploadToserverCall(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest* requestString, Assembly_CSharp::com::playGenesis::VkUnityPlugin::FileForUpload* file)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UploadToserverCall", std::vector<std::string> { "com.playGenesis.VkUnityPlugin.VKRequest", "com.playGenesis.VkUnityPlugin.FileForUpload" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)requestString;
	params[1] = (intptr_t)file;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::IEnumerator* Assembly_CSharp::com::playGenesis::VkUnityPlugin::VkApi::_UploadToserverCall(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest* httprequest)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "_UploadToserverCall", std::vector<std::string> { "com.playGenesis.VkUnityPlugin.VKRequest" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)httprequest;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::IEnumerator*)returnValue;
}
mscorlib::System::Collections::IEnumerator* Assembly_CSharp::com::playGenesis::VkUnityPlugin::VkApi::_UploadToserverCall(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest* httprequest, Assembly_CSharp::com::playGenesis::VkUnityPlugin::FileForUpload* file)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "_UploadToserverCall", std::vector<std::string> { "com.playGenesis.VkUnityPlugin.VKRequest", "com.playGenesis.VkUnityPlugin.FileForUpload" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)httprequest;
	params[1] = (intptr_t)file;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::IEnumerator*)returnValue;
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::VkApi::OnDestroy()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnDestroy");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::VkApi::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
