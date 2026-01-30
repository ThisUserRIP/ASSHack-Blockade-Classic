#include "System_Net_Configuration_SmtpSection.h"

IL2CPP::Il2CppClass* System::System::Net::Configuration::SmtpSection::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.Net.Configuration", "SmtpSection");
	return il2cppclass;
}
mscorlib::System::Type* System::System::Net::Configuration::SmtpSection::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::System::Net::Configuration::SmtpSection::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
System::System::Net::Mail::SmtpDeliveryFormat System::System::Net::Configuration::SmtpSection::get_DeliveryFormat()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_DeliveryFormat");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System::Net::Mail::SmtpDeliveryFormat ret;
		std::memset(&ret, 0, sizeof(System::Net::Mail::SmtpDeliveryFormat));
		return ret;
	}
	return static_cast<System::Net::Mail::SmtpDeliveryFormat>(*(System::Net::Mail::SmtpDeliveryFormat*)il2cpp_object_unbox(returnValue));
}
void System::System::Net::Configuration::SmtpSection::set_DeliveryFormat(System::Net::Mail::SmtpDeliveryFormat value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_DeliveryFormat", std::vector<std::string> { "System.Net.Mail.SmtpDeliveryFormat" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System::System::Net::Mail::SmtpDeliveryMethod System::System::Net::Configuration::SmtpSection::get_DeliveryMethod()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_DeliveryMethod");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System::Net::Mail::SmtpDeliveryMethod ret;
		std::memset(&ret, 0, sizeof(System::Net::Mail::SmtpDeliveryMethod));
		return ret;
	}
	return static_cast<System::Net::Mail::SmtpDeliveryMethod>(*(System::Net::Mail::SmtpDeliveryMethod*)il2cpp_object_unbox(returnValue));
}
void System::System::Net::Configuration::SmtpSection::set_DeliveryMethod(System::Net::Mail::SmtpDeliveryMethod value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_DeliveryMethod", std::vector<std::string> { "System.Net.Mail.SmtpDeliveryMethod" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* System::System::Net::Configuration::SmtpSection::get_From()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_From");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void System::System::Net::Configuration::SmtpSection::set_From(mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_From", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System::System::Net::Configuration::SmtpNetworkElement* System::System::Net::Configuration::SmtpSection::get_Network()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Network");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System::Net::Configuration::SmtpNetworkElement*)returnValue;
}
System_Configuration::System::Configuration::ConfigurationPropertyCollection* System::System::Net::Configuration::SmtpSection::get_Properties()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Properties");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Configuration::System::Configuration::ConfigurationPropertyCollection*)returnValue;
}
System::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement* System::System::Net::Configuration::SmtpSection::get_SpecifiedPickupDirectory()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_SpecifiedPickupDirectory");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement*)returnValue;
}
