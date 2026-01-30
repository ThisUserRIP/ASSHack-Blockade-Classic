#include "System_Net_Cache_RequestCacheProtocol.h"

IL2CPP::Il2CppClass* System::System::Net::Cache::RequestCacheProtocol::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.Net.Cache", "RequestCacheProtocol");
	return il2cppclass;
}
mscorlib::System::Type* System::System::Net::Cache::RequestCacheProtocol::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::System::Net::Cache::RequestCacheProtocol::_ctor(mscorlib::System::Object* arg1, mscorlib::System::Object* arg2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Object", "System.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)arg1;
	params[1] = (intptr_t)arg2;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
