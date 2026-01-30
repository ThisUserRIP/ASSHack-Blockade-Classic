#include "Facebook_Unity_AsyncRequestString.h"

IL2CPP::Il2CppClass* Facebook_Unity::Facebook::Unity::AsyncRequestString::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Facebook.Unity.dll", "Facebook.Unity", "AsyncRequestString");
	return il2cppclass;
}
mscorlib::System::Type* Facebook_Unity::Facebook::Unity::AsyncRequestString::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Facebook_Unity::Facebook::Unity::AsyncRequestString::Post(System::System::Uri* url, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::String>* formData, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IGraphResult>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Post", std::vector<std::string> { "System.Uri", "System.Collections.Generic.Dictionary`2<System.String,System.String>", "Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)url;
	params[1] = (intptr_t)formData;
	params[2] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::AsyncRequestString::Get(System::System::Uri* url, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::String>* formData, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IGraphResult>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Get", std::vector<std::string> { "System.Uri", "System.Collections.Generic.Dictionary`2<System.String,System.String>", "Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)url;
	params[1] = (intptr_t)formData;
	params[2] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::AsyncRequestString::Request(System::System::Uri* url, Facebook_Unity::Facebook::Unity::HttpMethod method, UnityEngine_UnityWebRequestModule::UnityEngine::WWWForm* query, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IGraphResult>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Request", std::vector<std::string> { "System.Uri", "Facebook.Unity.HttpMethod", "UnityEngine.WWWForm", "Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)url;
	params[1] = (intptr_t)&method;
	params[2] = (intptr_t)query;
	params[3] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::AsyncRequestString::Request(System::System::Uri* url, Facebook_Unity::Facebook::Unity::HttpMethod method, mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::String>* formData, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IGraphResult>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Request", std::vector<std::string> { "System.Uri", "Facebook.Unity.HttpMethod", "System.Collections.Generic.IDictionary`2<System.String,System.String>", "Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)url;
	params[1] = (intptr_t)&method;
	params[2] = (intptr_t)formData;
	params[3] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::IEnumerator* Facebook_Unity::Facebook::Unity::AsyncRequestString::Start()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Start");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::IEnumerator*)returnValue;
}
Facebook_Unity::Facebook::Unity::AsyncRequestString* Facebook_Unity::Facebook::Unity::AsyncRequestString::SetUrl(System::System::Uri* url)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetUrl", std::vector<std::string> { "System.Uri" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)url;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Facebook_Unity::Facebook::Unity::AsyncRequestString*)returnValue;
}
Facebook_Unity::Facebook::Unity::AsyncRequestString* Facebook_Unity::Facebook::Unity::AsyncRequestString::SetMethod(Facebook_Unity::Facebook::Unity::HttpMethod method)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetMethod", std::vector<std::string> { "Facebook.Unity.HttpMethod" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&method;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Facebook_Unity::Facebook::Unity::AsyncRequestString*)returnValue;
}
Facebook_Unity::Facebook::Unity::AsyncRequestString* Facebook_Unity::Facebook::Unity::AsyncRequestString::SetFormData(mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::String>* formData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetFormData", std::vector<std::string> { "System.Collections.Generic.IDictionary`2<System.String,System.String>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)formData;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Facebook_Unity::Facebook::Unity::AsyncRequestString*)returnValue;
}
Facebook_Unity::Facebook::Unity::AsyncRequestString* Facebook_Unity::Facebook::Unity::AsyncRequestString::SetQuery(UnityEngine_UnityWebRequestModule::UnityEngine::WWWForm* query)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetQuery", std::vector<std::string> { "UnityEngine.WWWForm" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)query;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Facebook_Unity::Facebook::Unity::AsyncRequestString*)returnValue;
}
Facebook_Unity::Facebook::Unity::AsyncRequestString* Facebook_Unity::Facebook::Unity::AsyncRequestString::SetCallback(Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IGraphResult>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetCallback", std::vector<std::string> { "Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Facebook_Unity::Facebook::Unity::AsyncRequestString*)returnValue;
}
void Facebook_Unity::Facebook::Unity::AsyncRequestString::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
