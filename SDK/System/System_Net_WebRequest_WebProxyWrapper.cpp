#include "System_Net_WebRequest_WebProxyWrapper.h"

IL2CPP::Il2CppClass* System::System::Net::WebRequest_WebProxyWrapper::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(System::System::Net::WebRequest::GetIl2CppClass(), "WebProxyWrapper");
	return il2cppclass;
}
mscorlib::System::Type* System::System::Net::WebRequest_WebProxyWrapper::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
System::System::Net::WebProxy* System::System::Net::WebRequest_WebProxyWrapper::get_WebProxy()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_WebProxy");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System::Net::WebProxy*)returnValue;
}
