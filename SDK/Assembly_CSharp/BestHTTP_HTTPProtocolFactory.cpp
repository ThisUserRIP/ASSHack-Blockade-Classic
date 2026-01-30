#include "BestHTTP_HTTPProtocolFactory.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::HTTPProtocolFactory::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP", "HTTPProtocolFactory");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::HTTPProtocolFactory::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Assembly_CSharp::BestHTTP::HTTPResponse* Assembly_CSharp::BestHTTP::HTTPProtocolFactory::Get(Assembly_CSharp::BestHTTP::SupportedProtocols protocol, Assembly_CSharp::BestHTTP::HTTPRequest* request, mscorlib::System::IO::Stream* stream, bool isStreamed, bool isFromCache)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Get", std::vector<std::string> { "BestHTTP.SupportedProtocols", "BestHTTP.HTTPRequest", "System.IO.Stream", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&protocol;
	params[1] = (intptr_t)request;
	params[2] = (intptr_t)stream;
	params[3] = (intptr_t)&isStreamed;
	params[4] = (intptr_t)&isFromCache;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::HTTPResponse*)returnValue;
}
Assembly_CSharp::BestHTTP::SupportedProtocols Assembly_CSharp::BestHTTP::HTTPProtocolFactory::GetProtocolFromUri(System::System::Uri* uri)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetProtocolFromUri", std::vector<std::string> { "System.Uri" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)uri;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::BestHTTP::SupportedProtocols ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::BestHTTP::SupportedProtocols));
		return ret;
	}
	return static_cast<Assembly_CSharp::BestHTTP::SupportedProtocols>(*(Assembly_CSharp::BestHTTP::SupportedProtocols*)il2cpp_object_unbox(returnValue));
}
bool Assembly_CSharp::BestHTTP::HTTPProtocolFactory::IsSecureProtocol(System::System::Uri* uri)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsSecureProtocol", std::vector<std::string> { "System.Uri" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)uri;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
