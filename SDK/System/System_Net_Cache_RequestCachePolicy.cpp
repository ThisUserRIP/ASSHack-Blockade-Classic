#include "System_Net_Cache_RequestCachePolicy.h"

IL2CPP::Il2CppClass* System::System::Net::Cache::RequestCachePolicy::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.Net.Cache", "RequestCachePolicy");
	return il2cppclass;
}
mscorlib::System::Type* System::System::Net::Cache::RequestCachePolicy::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
System::System::Net::Cache::RequestCacheLevel System::System::Net::Cache::RequestCachePolicy::get_Level()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Level");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System::Net::Cache::RequestCacheLevel ret;
		std::memset(&ret, 0, sizeof(System::Net::Cache::RequestCacheLevel));
		return ret;
	}
	return static_cast<System::Net::Cache::RequestCacheLevel>(*(System::Net::Cache::RequestCacheLevel*)il2cpp_object_unbox(returnValue));
}
