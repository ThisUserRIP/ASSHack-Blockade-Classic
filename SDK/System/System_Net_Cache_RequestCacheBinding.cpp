#include "System_Net_Cache_RequestCacheBinding.h"

IL2CPP::Il2CppClass* System::System::Net::Cache::RequestCacheBinding::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.Net.Cache", "RequestCacheBinding");
	return il2cppclass;
}
mscorlib::System::Type* System::System::Net::Cache::RequestCacheBinding::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
System::System::Net::Cache::RequestCache* System::System::Net::Cache::RequestCacheBinding::get_Cache()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Cache");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System::Net::Cache::RequestCache*)returnValue;
}
System::System::Net::Cache::RequestCacheValidator* System::System::Net::Cache::RequestCacheBinding::get_Validator()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Validator");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System::Net::Cache::RequestCacheValidator*)returnValue;
}
