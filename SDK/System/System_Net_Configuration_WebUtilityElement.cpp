#include "System_Net_Configuration_WebUtilityElement.h"

IL2CPP::Il2CppClass* System::System::Net::Configuration::WebUtilityElement::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.Net.Configuration", "WebUtilityElement");
	return il2cppclass;
}
mscorlib::System::Type* System::System::Net::Configuration::WebUtilityElement::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::System::Net::Configuration::WebUtilityElement::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
System_Configuration::System::Configuration::ConfigurationPropertyCollection* System::System::Net::Configuration::WebUtilityElement::get_Properties()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Properties");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Configuration::System::Configuration::ConfigurationPropertyCollection*)returnValue;
}
System::System::Net::Configuration::UnicodeDecodingConformance System::System::Net::Configuration::WebUtilityElement::get_UnicodeDecodingConformance()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_UnicodeDecodingConformance");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System::Net::Configuration::UnicodeDecodingConformance ret;
		std::memset(&ret, 0, sizeof(System::Net::Configuration::UnicodeDecodingConformance));
		return ret;
	}
	return static_cast<System::Net::Configuration::UnicodeDecodingConformance>(*(System::Net::Configuration::UnicodeDecodingConformance*)il2cpp_object_unbox(returnValue));
}
void System::System::Net::Configuration::WebUtilityElement::set_UnicodeDecodingConformance(System::Net::Configuration::UnicodeDecodingConformance value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_UnicodeDecodingConformance", std::vector<std::string> { "System.Net.Configuration.UnicodeDecodingConformance" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System::System::Net::Configuration::UnicodeEncodingConformance System::System::Net::Configuration::WebUtilityElement::get_UnicodeEncodingConformance()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_UnicodeEncodingConformance");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System::Net::Configuration::UnicodeEncodingConformance ret;
		std::memset(&ret, 0, sizeof(System::Net::Configuration::UnicodeEncodingConformance));
		return ret;
	}
	return static_cast<System::Net::Configuration::UnicodeEncodingConformance>(*(System::Net::Configuration::UnicodeEncodingConformance*)il2cpp_object_unbox(returnValue));
}
void System::System::Net::Configuration::WebUtilityElement::set_UnicodeEncodingConformance(System::Net::Configuration::UnicodeEncodingConformance value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_UnicodeEncodingConformance", std::vector<std::string> { "System.Net.Configuration.UnicodeEncodingConformance" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
