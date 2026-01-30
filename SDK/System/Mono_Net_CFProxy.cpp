#include "Mono_Net_CFProxy.h"

IL2CPP::Il2CppClass* System::Mono::Net::CFProxy::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "Mono.Net", "CFProxy");
	return il2cppclass;
}
mscorlib::System::Type* System::Mono::Net::CFProxy::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::Mono::Net::CFProxy::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System::Mono::Net::CFProxy::_ctor(System::Mono::Net::CFDictionary* settings)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Mono.Net.CFDictionary" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)settings;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System::Mono::Net::CFProxyType System::Mono::Net::CFProxy::CFProxyTypeToEnum(intptr_t type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CFProxyTypeToEnum", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&type;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System::Mono::Net::CFProxyType ret;
		std::memset(&ret, 0, sizeof(System::Mono::Net::CFProxyType));
		return ret;
	}
	return static_cast<System::Mono::Net::CFProxyType>(*(System::Mono::Net::CFProxyType*)il2cpp_object_unbox(returnValue));
}
intptr_t System::Mono::Net::CFProxy::get_AutoConfigurationJavaScript()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_AutoConfigurationJavaScript");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
intptr_t System::Mono::Net::CFProxy::get_AutoConfigurationUrl()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_AutoConfigurationUrl");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::String* System::Mono::Net::CFProxy::get_HostName()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_HostName");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* System::Mono::Net::CFProxy::get_Password()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Password");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
int32_t System::Mono::Net::CFProxy::get_Port()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Port");
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
System::Mono::Net::CFProxyType System::Mono::Net::CFProxy::get_ProxyType()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ProxyType");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System::Mono::Net::CFProxyType ret;
		std::memset(&ret, 0, sizeof(System::Mono::Net::CFProxyType));
		return ret;
	}
	return static_cast<System::Mono::Net::CFProxyType>(*(System::Mono::Net::CFProxyType*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::String* System::Mono::Net::CFProxy::get_Username()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Username");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
