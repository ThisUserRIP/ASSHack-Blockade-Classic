#include "System_Net_Configuration_ProxyElement.h"

IL2CPP::Il2CppClass* System::System::Net::Configuration::ProxyElement::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.Net.Configuration", "ProxyElement");
	return il2cppclass;
}
mscorlib::System::Type* System::System::Net::Configuration::ProxyElement::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::System::Net::Configuration::ProxyElement::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
System::System::Net::Configuration::ProxyElement_AutoDetectValues System::System::Net::Configuration::ProxyElement::get_AutoDetect()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_AutoDetect");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System::Net::Configuration::ProxyElement_AutoDetectValues ret;
		std::memset(&ret, 0, sizeof(System::Net::Configuration::ProxyElement_AutoDetectValues));
		return ret;
	}
	return static_cast<System::Net::Configuration::ProxyElement_AutoDetectValues>(*(System::Net::Configuration::ProxyElement_AutoDetectValues*)il2cpp_object_unbox(returnValue));
}
void System::System::Net::Configuration::ProxyElement::set_AutoDetect(System::Net::Configuration::ProxyElement_AutoDetectValues value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_AutoDetect", std::vector<std::string> { "System.Net.Configuration.ProxyElement/AutoDetectValues" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System::System::Net::Configuration::ProxyElement_BypassOnLocalValues System::System::Net::Configuration::ProxyElement::get_BypassOnLocal()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_BypassOnLocal");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System::Net::Configuration::ProxyElement_BypassOnLocalValues ret;
		std::memset(&ret, 0, sizeof(System::Net::Configuration::ProxyElement_BypassOnLocalValues));
		return ret;
	}
	return static_cast<System::Net::Configuration::ProxyElement_BypassOnLocalValues>(*(System::Net::Configuration::ProxyElement_BypassOnLocalValues*)il2cpp_object_unbox(returnValue));
}
void System::System::Net::Configuration::ProxyElement::set_BypassOnLocal(System::Net::Configuration::ProxyElement_BypassOnLocalValues value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_BypassOnLocal", std::vector<std::string> { "System.Net.Configuration.ProxyElement/BypassOnLocalValues" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Configuration::System::Configuration::ConfigurationPropertyCollection* System::System::Net::Configuration::ProxyElement::get_Properties()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Properties");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Configuration::System::Configuration::ConfigurationPropertyCollection*)returnValue;
}
System::System::Uri* System::System::Net::Configuration::ProxyElement::get_ProxyAddress()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ProxyAddress");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System::Uri*)returnValue;
}
void System::System::Net::Configuration::ProxyElement::set_ProxyAddress(System::Uri* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_ProxyAddress", std::vector<std::string> { "System.Uri" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System::System::Uri* System::System::Net::Configuration::ProxyElement::get_ScriptLocation()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ScriptLocation");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System::Uri*)returnValue;
}
void System::System::Net::Configuration::ProxyElement::set_ScriptLocation(System::Uri* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_ScriptLocation", std::vector<std::string> { "System.Uri" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System::System::Net::Configuration::ProxyElement_UseSystemDefaultValues System::System::Net::Configuration::ProxyElement::get_UseSystemDefault()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_UseSystemDefault");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System::Net::Configuration::ProxyElement_UseSystemDefaultValues ret;
		std::memset(&ret, 0, sizeof(System::Net::Configuration::ProxyElement_UseSystemDefaultValues));
		return ret;
	}
	return static_cast<System::Net::Configuration::ProxyElement_UseSystemDefaultValues>(*(System::Net::Configuration::ProxyElement_UseSystemDefaultValues*)il2cpp_object_unbox(returnValue));
}
void System::System::Net::Configuration::ProxyElement::set_UseSystemDefault(System::Net::Configuration::ProxyElement_UseSystemDefaultValues value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_UseSystemDefault", std::vector<std::string> { "System.Net.Configuration.ProxyElement/UseSystemDefaultValues" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
