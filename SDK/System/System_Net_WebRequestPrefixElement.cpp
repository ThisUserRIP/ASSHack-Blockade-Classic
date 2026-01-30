#include "System_Net_WebRequestPrefixElement.h"

IL2CPP::Il2CppClass* System::System::Net::WebRequestPrefixElement::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.Net", "WebRequestPrefixElement");
	return il2cppclass;
}
mscorlib::System::Type* System::System::Net::WebRequestPrefixElement::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
System::System::Net::IWebRequestCreate* System::System::Net::WebRequestPrefixElement::get_Creator()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Creator");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System::Net::IWebRequestCreate*)returnValue;
}
void System::System::Net::WebRequestPrefixElement::set_Creator(System::Net::IWebRequestCreate* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Creator", std::vector<std::string> { "System.Net.IWebRequestCreate" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::WebRequestPrefixElement::_ctor(mscorlib::System::String* P, System::Net::IWebRequestCreate* C)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.Net.IWebRequestCreate" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)P;
	params[1] = (intptr_t)C;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
