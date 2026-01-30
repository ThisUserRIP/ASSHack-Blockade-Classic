#include "System_Net_AuthenticationManager.h"

IL2CPP::Il2CppClass* System::System::Net::AuthenticationManager::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.Net", "AuthenticationManager");
	return il2cppclass;
}
mscorlib::System::Type* System::System::Net::AuthenticationManager::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::System::Net::AuthenticationManager::EnsureModules()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EnsureModules");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
System::System::Net::Authorization* System::System::Net::AuthenticationManager::Authenticate(mscorlib::System::String* challenge, System::Net::WebRequest* request, System::Net::ICredentials* credentials)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Authenticate", std::vector<std::string> { "System.String", "System.Net.WebRequest", "System.Net.ICredentials" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)challenge;
	params[1] = (intptr_t)request;
	params[2] = (intptr_t)credentials;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::Net::Authorization*)returnValue;
}
System::System::Net::Authorization* System::System::Net::AuthenticationManager::DoAuthenticate(mscorlib::System::String* challenge, System::Net::WebRequest* request, System::Net::ICredentials* credentials)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoAuthenticate", std::vector<std::string> { "System.String", "System.Net.WebRequest", "System.Net.ICredentials" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)challenge;
	params[1] = (intptr_t)request;
	params[2] = (intptr_t)credentials;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::Net::Authorization*)returnValue;
}
System::System::Net::Authorization* System::System::Net::AuthenticationManager::PreAuthenticate(System::Net::WebRequest* request, System::Net::ICredentials* credentials)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PreAuthenticate", std::vector<std::string> { "System.Net.WebRequest", "System.Net.ICredentials" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)request;
	params[1] = (intptr_t)credentials;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::Net::Authorization*)returnValue;
}
void System::System::Net::AuthenticationManager::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
