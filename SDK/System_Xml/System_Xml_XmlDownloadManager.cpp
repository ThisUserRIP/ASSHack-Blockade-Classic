#include "System_Xml_XmlDownloadManager.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::XmlDownloadManager::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml", "XmlDownloadManager");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::XmlDownloadManager::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::IO::Stream* System_Xml::System::Xml::XmlDownloadManager::GetStream(System::System::Uri* uri, System::System::Net::ICredentials* credentials, System::System::Net::IWebProxy* proxy, System::System::Net::Cache::RequestCachePolicy* cachePolicy)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetStream", std::vector<std::string> { "System.Uri", "System.Net.ICredentials", "System.Net.IWebProxy", "System.Net.Cache.RequestCachePolicy" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)uri;
	params[1] = (intptr_t)credentials;
	params[2] = (intptr_t)proxy;
	params[3] = (intptr_t)cachePolicy;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::IO::Stream*)returnValue;
}
mscorlib::System::IO::Stream* System_Xml::System::Xml::XmlDownloadManager::GetNonFileStream(System::System::Uri* uri, System::System::Net::ICredentials* credentials, System::System::Net::IWebProxy* proxy, System::System::Net::Cache::RequestCachePolicy* cachePolicy)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetNonFileStream", std::vector<std::string> { "System.Uri", "System.Net.ICredentials", "System.Net.IWebProxy", "System.Net.Cache.RequestCachePolicy" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)uri;
	params[1] = (intptr_t)credentials;
	params[2] = (intptr_t)proxy;
	params[3] = (intptr_t)cachePolicy;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::IO::Stream*)returnValue;
}
void System_Xml::System::Xml::XmlDownloadManager::Remove(mscorlib::System::String* host)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Remove", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)host;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::IO::Stream>* System_Xml::System::Xml::XmlDownloadManager::GetStreamAsync(System::System::Uri* uri, System::System::Net::ICredentials* credentials, System::System::Net::IWebProxy* proxy, System::System::Net::Cache::RequestCachePolicy* cachePolicy)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetStreamAsync", std::vector<std::string> { "System.Uri", "System.Net.ICredentials", "System.Net.IWebProxy", "System.Net.Cache.RequestCachePolicy" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)uri;
	params[1] = (intptr_t)credentials;
	params[2] = (intptr_t)proxy;
	params[3] = (intptr_t)cachePolicy;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::IO::Stream>*)returnValue;
}
mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::IO::Stream>* System_Xml::System::Xml::XmlDownloadManager::GetNonFileStreamAsync(System::System::Uri* uri, System::System::Net::ICredentials* credentials, System::System::Net::IWebProxy* proxy, System::System::Net::Cache::RequestCachePolicy* cachePolicy)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetNonFileStreamAsync", std::vector<std::string> { "System.Uri", "System.Net.ICredentials", "System.Net.IWebProxy", "System.Net.Cache.RequestCachePolicy" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)uri;
	params[1] = (intptr_t)credentials;
	params[2] = (intptr_t)proxy;
	params[3] = (intptr_t)cachePolicy;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::IO::Stream>*)returnValue;
}
void System_Xml::System::Xml::XmlDownloadManager::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
