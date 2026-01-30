#include "System_Net_AutoWebProxyScriptEngine.h"

IL2CPP::Il2CppClass* System::System::Net::AutoWebProxyScriptEngine::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.Net", "AutoWebProxyScriptEngine");
	return il2cppclass;
}
mscorlib::System::Type* System::System::Net::AutoWebProxyScriptEngine::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool System::System::Net::AutoWebProxyScriptEngine::GetProxies(System::Uri* destination, mscorlib::System::Collections::Generic::IList_1<mscorlib::System::String>& proxyList)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetProxies", std::vector<std::string> { "System.Uri", "System.Collections.Generic.IList`1<System.String>&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)destination;
	params[1] = (intptr_t)&proxyList;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool System::System::Net::AutoWebProxyScriptEngine::GetProxies(System::Uri* destination, mscorlib::System::Collections::Generic::IList_1<mscorlib::System::String>& proxyList, int32_t& syncStatus)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetProxies", std::vector<std::string> { "System.Uri", "System.Collections.Generic.IList`1<System.String>&", "System.Int32&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)destination;
	params[1] = (intptr_t)&proxyList;
	params[2] = (intptr_t)&syncStatus;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
