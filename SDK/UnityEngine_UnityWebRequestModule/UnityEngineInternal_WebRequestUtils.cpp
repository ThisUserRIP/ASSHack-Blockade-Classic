#include "UnityEngineInternal_WebRequestUtils.h"

IL2CPP::Il2CppClass* UnityEngine_UnityWebRequestModule::UnityEngineInternal::WebRequestUtils::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.UnityWebRequestModule.dll", "UnityEngineInternal", "WebRequestUtils");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_UnityWebRequestModule::UnityEngineInternal::WebRequestUtils::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::String* UnityEngine_UnityWebRequestModule::UnityEngineInternal::WebRequestUtils::RedirectTo(mscorlib::System::String* baseUri, mscorlib::System::String* redirectUri)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RedirectTo", std::vector<std::string> { "System.String", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)baseUri;
	params[1] = (intptr_t)redirectUri;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* UnityEngine_UnityWebRequestModule::UnityEngineInternal::WebRequestUtils::MakeInitialUrl(mscorlib::System::String* targetUrl, mscorlib::System::String* localUrl)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MakeInitialUrl", std::vector<std::string> { "System.String", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)targetUrl;
	params[1] = (intptr_t)localUrl;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* UnityEngine_UnityWebRequestModule::UnityEngineInternal::WebRequestUtils::MakeUriString(System::System::Uri* targetUri, mscorlib::System::String* targetUrl, bool prependProtocol)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MakeUriString", std::vector<std::string> { "System.Uri", "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)targetUri;
	params[1] = (intptr_t)targetUrl;
	params[2] = (intptr_t)&prependProtocol;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* UnityEngine_UnityWebRequestModule::UnityEngineInternal::WebRequestUtils::URLDecode(mscorlib::System::String* encoded)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "URLDecode", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)encoded;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void UnityEngine_UnityWebRequestModule::UnityEngineInternal::WebRequestUtils::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
