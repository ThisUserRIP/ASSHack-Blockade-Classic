#include "Mono_Net_CFNetwork.h"

IL2CPP::Il2CppClass* System::Mono::Net::CFNetwork::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "Mono.Net", "CFNetwork");
	return il2cppclass;
}
mscorlib::System::Type* System::Mono::Net::CFNetwork::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
intptr_t System::Mono::Net::CFNetwork::CFNetworkCopyProxiesForAutoConfigurationScriptSequential(intptr_t proxyAutoConfigurationScript, intptr_t targetURL, intptr_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CFNetworkCopyProxiesForAutoConfigurationScriptSequential", std::vector<std::string> { "System.IntPtr", "System.IntPtr", "System.IntPtr&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&proxyAutoConfigurationScript;
	params[1] = (intptr_t)&targetURL;
	params[2] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
intptr_t System::Mono::Net::CFNetwork::CFNetworkExecuteProxyAutoConfigurationURL(intptr_t proxyAutoConfigURL, intptr_t targetURL, System::Mono::Net::CFNetwork_CFProxyAutoConfigurationResultCallback* cb, System::Mono::Net::CFStreamClientContext& clientContext)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CFNetworkExecuteProxyAutoConfigurationURL", std::vector<std::string> { "System.IntPtr", "System.IntPtr", "Mono.Net.CFNetwork/CFProxyAutoConfigurationResultCallback", "Mono.Net.CFStreamClientContext&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&proxyAutoConfigURL;
	params[1] = (intptr_t)&targetURL;
	params[2] = (intptr_t)cb;
	params[3] = (intptr_t)&clientContext;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
void System::Mono::Net::CFNetwork::CFNetworkCopyProxiesForAutoConfigurationScriptThread()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CFNetworkCopyProxiesForAutoConfigurationScriptThread");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
intptr_t System::Mono::Net::CFNetwork::CFNetworkCopyProxiesForAutoConfigurationScript(intptr_t proxyAutoConfigurationScript, intptr_t targetURL, intptr_t& error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CFNetworkCopyProxiesForAutoConfigurationScript", std::vector<std::string> { "System.IntPtr", "System.IntPtr", "System.IntPtr&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&proxyAutoConfigurationScript;
	params[1] = (intptr_t)&targetURL;
	params[2] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
System::Mono::Net::CFArray* System::Mono::Net::CFNetwork::CopyProxiesForAutoConfigurationScript(intptr_t proxyAutoConfigurationScript, System::Mono::Net::CFUrl* targetURL)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CopyProxiesForAutoConfigurationScript", std::vector<std::string> { "System.IntPtr", "Mono.Net.CFUrl" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&proxyAutoConfigurationScript;
	params[1] = (intptr_t)targetURL;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::Mono::Net::CFArray*)returnValue;
}
IL2CPP::Array<System::Mono::Net::CFProxy*>* System::Mono::Net::CFNetwork::GetProxiesForAutoConfigurationScript(intptr_t proxyAutoConfigurationScript, System::Mono::Net::CFUrl* targetURL)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetProxiesForAutoConfigurationScript", std::vector<std::string> { "System.IntPtr", "Mono.Net.CFUrl" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&proxyAutoConfigurationScript;
	params[1] = (intptr_t)targetURL;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<System::Mono::Net::CFProxy*>*)returnValue;
}
IL2CPP::Array<System::Mono::Net::CFProxy*>* System::Mono::Net::CFNetwork::GetProxiesForAutoConfigurationScript(intptr_t proxyAutoConfigurationScript, System::Uri* targetUri)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetProxiesForAutoConfigurationScript", std::vector<std::string> { "System.IntPtr", "System.Uri" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&proxyAutoConfigurationScript;
	params[1] = (intptr_t)targetUri;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<System::Mono::Net::CFProxy*>*)returnValue;
}
IL2CPP::Array<System::Mono::Net::CFProxy*>* System::Mono::Net::CFNetwork::ExecuteProxyAutoConfigurationURL(intptr_t proxyAutoConfigURL, System::Uri* targetURL)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ExecuteProxyAutoConfigurationURL", std::vector<std::string> { "System.IntPtr", "System.Uri" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&proxyAutoConfigURL;
	params[1] = (intptr_t)targetURL;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<System::Mono::Net::CFProxy*>*)returnValue;
}
intptr_t System::Mono::Net::CFNetwork::CFNetworkCopyProxiesForURL(intptr_t url, intptr_t proxySettings)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CFNetworkCopyProxiesForURL", std::vector<std::string> { "System.IntPtr", "System.IntPtr" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&url;
	params[1] = (intptr_t)&proxySettings;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
System::Mono::Net::CFArray* System::Mono::Net::CFNetwork::CopyProxiesForURL(System::Mono::Net::CFUrl* url, System::Mono::Net::CFDictionary* proxySettings)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CopyProxiesForURL", std::vector<std::string> { "Mono.Net.CFUrl", "Mono.Net.CFDictionary" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)url;
	params[1] = (intptr_t)proxySettings;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::Mono::Net::CFArray*)returnValue;
}
IL2CPP::Array<System::Mono::Net::CFProxy*>* System::Mono::Net::CFNetwork::GetProxiesForURL(System::Mono::Net::CFUrl* url, System::Mono::Net::CFProxySettings* proxySettings)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetProxiesForURL", std::vector<std::string> { "Mono.Net.CFUrl", "Mono.Net.CFProxySettings" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)url;
	params[1] = (intptr_t)proxySettings;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<System::Mono::Net::CFProxy*>*)returnValue;
}
IL2CPP::Array<System::Mono::Net::CFProxy*>* System::Mono::Net::CFNetwork::GetProxiesForUri(System::Uri* uri, System::Mono::Net::CFProxySettings* proxySettings)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetProxiesForUri", std::vector<std::string> { "System.Uri", "Mono.Net.CFProxySettings" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)uri;
	params[1] = (intptr_t)proxySettings;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<System::Mono::Net::CFProxy*>*)returnValue;
}
intptr_t System::Mono::Net::CFNetwork::CFNetworkCopySystemProxySettings()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CFNetworkCopySystemProxySettings");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
System::Mono::Net::CFProxySettings* System::Mono::Net::CFNetwork::GetSystemProxySettings()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSystemProxySettings");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System::Mono::Net::CFProxySettings*)returnValue;
}
System::System::Net::IWebProxy* System::Mono::Net::CFNetwork::GetDefaultProxy()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDefaultProxy");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System::Net::IWebProxy*)returnValue;
}
void System::Mono::Net::CFNetwork::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
