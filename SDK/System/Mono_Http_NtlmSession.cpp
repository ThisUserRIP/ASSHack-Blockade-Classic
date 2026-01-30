#include "Mono_Http_NtlmSession.h"

IL2CPP::Il2CppClass* System::Mono::Http::NtlmSession::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "Mono.Http", "NtlmSession");
	return il2cppclass;
}
mscorlib::System::Type* System::Mono::Http::NtlmSession::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::Mono::Http::NtlmSession::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
System::System::Net::Authorization* System::Mono::Http::NtlmSession::Authenticate(mscorlib::System::String* challenge, System::Net::WebRequest* webRequest, System::Net::ICredentials* credentials)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Authenticate", std::vector<std::string> { "System.String", "System.Net.WebRequest", "System.Net.ICredentials" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)challenge;
	params[1] = (intptr_t)webRequest;
	params[2] = (intptr_t)credentials;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::Net::Authorization*)returnValue;
}
