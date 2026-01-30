#include "System_Net_ExceptionHelper.h"

IL2CPP::Il2CppClass* System::System::Net::ExceptionHelper::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.Net", "ExceptionHelper");
	return il2cppclass;
}
mscorlib::System::Type* System::System::Net::ExceptionHelper::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::NotImplementedException* System::System::Net::ExceptionHelper::get_MethodNotImplementedException()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_MethodNotImplementedException");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::NotImplementedException*)returnValue;
}
mscorlib::System::NotImplementedException* System::System::Net::ExceptionHelper::get_PropertyNotImplementedException()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_PropertyNotImplementedException");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::NotImplementedException*)returnValue;
}
mscorlib::System::NotSupportedException* System::System::Net::ExceptionHelper::get_PropertyNotSupportedException()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_PropertyNotSupportedException");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::NotSupportedException*)returnValue;
}
System::System::Net::WebException* System::System::Net::ExceptionHelper::get_RequestAbortedException()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_RequestAbortedException");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System::Net::WebException*)returnValue;
}
