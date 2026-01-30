#include "BestHTTP_HTTPRequestAsyncExtensions.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::HTTPRequestAsyncExtensions::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP", "HTTPRequestAsyncExtensions");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::HTTPRequestAsyncExtensions::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Threading::Tasks::Task_1<Assembly_CSharp::BestHTTP::HTTPResponse>* Assembly_CSharp::BestHTTP::HTTPRequestAsyncExtensions::GetHTTPResponseAsync(Assembly_CSharp::BestHTTP::HTTPRequest* request, mscorlib::System::Threading::CancellationToken token)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetHTTPResponseAsync", std::vector<std::string> { "BestHTTP.HTTPRequest", "System.Threading.CancellationToken" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)request;
	params[1] = (intptr_t)&token;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Threading::Tasks::Task_1<Assembly_CSharp::BestHTTP::HTTPResponse>*)returnValue;
}
mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::String>* Assembly_CSharp::BestHTTP::HTTPRequestAsyncExtensions::GetAsStringAsync(Assembly_CSharp::BestHTTP::HTTPRequest* request, mscorlib::System::Threading::CancellationToken token)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAsStringAsync", std::vector<std::string> { "BestHTTP.HTTPRequest", "System.Threading.CancellationToken" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)request;
	params[1] = (intptr_t)&token;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::String>*)returnValue;
}
mscorlib::System::Threading::Tasks::Task_1<UnityEngine_CoreModule::UnityEngine::Texture2D>* Assembly_CSharp::BestHTTP::HTTPRequestAsyncExtensions::GetAsTexture2DAsync(Assembly_CSharp::BestHTTP::HTTPRequest* request, mscorlib::System::Threading::CancellationToken token)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAsTexture2DAsync", std::vector<std::string> { "BestHTTP.HTTPRequest", "System.Threading.CancellationToken" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)request;
	params[1] = (intptr_t)&token;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Threading::Tasks::Task_1<UnityEngine_CoreModule::UnityEngine::Texture2D>*)returnValue;
}
mscorlib::System::Threading::Tasks::Task_1<IL2CPP::Array<mscorlib::System::Byte>>* Assembly_CSharp::BestHTTP::HTTPRequestAsyncExtensions::GetRawDataAsync(Assembly_CSharp::BestHTTP::HTTPRequest* request, mscorlib::System::Threading::CancellationToken token)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetRawDataAsync", std::vector<std::string> { "BestHTTP.HTTPRequest", "System.Threading.CancellationToken" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)request;
	params[1] = (intptr_t)&token;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Threading::Tasks::Task_1<IL2CPP::Array<mscorlib::System::Byte>>*)returnValue;
}
void Assembly_CSharp::BestHTTP::HTTPRequestAsyncExtensions::VerboseLogging(Assembly_CSharp::BestHTTP::HTTPRequest* request, mscorlib::System::String* str)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "VerboseLogging", std::vector<std::string> { "BestHTTP.HTTPRequest", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)request;
	params[1] = (intptr_t)str;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
