#include "System_Net_CookieContainer.h"

IL2CPP::Il2CppClass* System::System::Net::CookieContainer::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.Net", "CookieContainer");
	return il2cppclass;
}
mscorlib::System::Type* System::System::Net::CookieContainer::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::System::Net::CookieContainer::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::CookieContainer::AddRemoveDomain(mscorlib::System::String* key, System::Net::PathList* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddRemoveDomain", std::vector<std::string> { "System.String", "System.Net.PathList" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)key;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::CookieContainer::Add(System::Net::Cookie* cookie, bool throwOnError)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Add", std::vector<std::string> { "System.Net.Cookie", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)cookie;
	params[1] = (intptr_t)&throwOnError;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool System::System::Net::CookieContainer::AgeCookies(mscorlib::System::String* domain)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AgeCookies", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)domain;
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
int32_t System::System::Net::CookieContainer::ExpireCollection(System::Net::CookieCollection* cc)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ExpireCollection", std::vector<std::string> { "System.Net.CookieCollection" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)cc;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
bool System::System::Net::CookieContainer::IsLocalDomain(mscorlib::System::String* host)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsLocalDomain", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)host;
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
System::System::Net::CookieCollection* System::System::Net::CookieContainer::CookieCutter(System::Uri* uri, mscorlib::System::String* headerName, mscorlib::System::String* setCookieHeader, bool isThrow)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CookieCutter", std::vector<std::string> { "System.Uri", "System.String", "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)uri;
	params[1] = (intptr_t)headerName;
	params[2] = (intptr_t)setCookieHeader;
	params[3] = (intptr_t)&isThrow;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::Net::CookieCollection*)returnValue;
}
System::System::Net::CookieCollection* System::System::Net::CookieContainer::InternalGetCookies(System::Uri* uri)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalGetCookies", std::vector<std::string> { "System.Uri" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)uri;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::Net::CookieCollection*)returnValue;
}
void System::System::Net::CookieContainer::BuildCookieCollectionFromDomainMatches(System::Uri* uri, bool isSecure, int32_t port, System::Net::CookieCollection* cookies, mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* domainAttribute, bool matchOnlyPlainCookie)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildCookieCollectionFromDomainMatches", std::vector<std::string> { "System.Uri", "System.Boolean", "System.Int32", "System.Net.CookieCollection", "System.Collections.Generic.List`1<System.String>", "System.Boolean" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)uri;
	params[1] = (intptr_t)&isSecure;
	params[2] = (intptr_t)&port;
	params[3] = (intptr_t)cookies;
	params[4] = (intptr_t)domainAttribute;
	params[5] = (intptr_t)&matchOnlyPlainCookie;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::CookieContainer::MergeUpdateCollections(System::Net::CookieCollection* destination, System::Net::CookieCollection* source, int32_t port, bool isSecure, bool isPlainOnly)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MergeUpdateCollections", std::vector<std::string> { "System.Net.CookieCollection", "System.Net.CookieCollection", "System.Int32", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)destination;
	params[1] = (intptr_t)source;
	params[2] = (intptr_t)&port;
	params[3] = (intptr_t)&isSecure;
	params[4] = (intptr_t)&isPlainOnly;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* System::System::Net::CookieContainer::GetCookieHeader(System::Uri* uri)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCookieHeader", std::vector<std::string> { "System.Uri" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)uri;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* System::System::Net::CookieContainer::GetCookieHeader(System::Uri* uri, mscorlib::System::String& optCookie2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCookieHeader", std::vector<std::string> { "System.Uri", "System.String&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)uri;
	params[1] = (intptr_t)&optCookie2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void System::System::Net::CookieContainer::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
