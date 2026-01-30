#include "com_playGenesis_VkUnityPlugin_GlobalErrorHandler.h"

IL2CPP::Il2CppClass* Assembly_CSharp::com::playGenesis::VkUnityPlugin::GlobalErrorHandler::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "com.playGenesis.VkUnityPlugin", "GlobalErrorHandler");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::com::playGenesis::VkUnityPlugin::GlobalErrorHandler::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::GlobalErrorHandler::Awake()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Awake");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::GlobalErrorHandler::Update()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Update");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::GlobalErrorHandler::Start()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Start");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::GlobalErrorHandler::OnGlobalError(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest* request)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnGlobalError", std::vector<std::string> { "com.playGenesis.VkUnityPlugin.VKRequest" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)request;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::GlobalErrorHandler::handleNetworkError(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest* request)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "handleNetworkError", std::vector<std::string> { "com.playGenesis.VkUnityPlugin.VKRequest" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)request;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::GlobalErrorHandler::handleCaptchaError(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest* request)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "handleCaptchaError", std::vector<std::string> { "com.playGenesis.VkUnityPlugin.VKRequest" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)request;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::GlobalErrorHandler::handleNeedToShowMessageToUser(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest* r)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "handleNeedToShowMessageToUser", std::vector<std::string> { "com.playGenesis.VkUnityPlugin.VKRequest" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)r;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::GlobalErrorHandler::handle_17_Error(Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKRequest* request)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "handle_17_Error", std::vector<std::string> { "com.playGenesis.VkUnityPlugin.VKRequest" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)request;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::GlobalErrorHandler::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
