#include "System_Runtime_CompilerServices_AsyncTaskCache.h"

IL2CPP::Il2CppClass* mscorlib::System::Runtime::CompilerServices::AsyncTaskCache::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Runtime.CompilerServices", "AsyncTaskCache");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Runtime::CompilerServices::AsyncTaskCache::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
IL2CPP::Array<mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::Int32>*>* mscorlib::System::Runtime::CompilerServices::AsyncTaskCache::CreateInt32Tasks()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateInt32Tasks");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::Int32>*>*)returnValue;
}
void mscorlib::System::Runtime::CompilerServices::AsyncTaskCache::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
