#include "Facebook_Unity_IAsyncRequestStringWrapper.h"

IL2CPP::Il2CppClass* Facebook_Unity::Facebook::Unity::IAsyncRequestStringWrapper::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Facebook.Unity.dll", "Facebook.Unity", "IAsyncRequestStringWrapper");
	return il2cppclass;
}
mscorlib::System::Type* Facebook_Unity::Facebook::Unity::IAsyncRequestStringWrapper::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Facebook_Unity::Facebook::Unity::IAsyncRequestStringWrapper::Request(System::System::Uri* url, Facebook_Unity::Facebook::Unity::HttpMethod method, UnityEngine_UnityWebRequestModule::UnityEngine::WWWForm* query, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IGraphResult>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Request", std::vector<std::string> { "System.Uri", "Facebook.Unity.HttpMethod", "UnityEngine.WWWForm", "Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)url;
	params[1] = (intptr_t)&method;
	params[2] = (intptr_t)query;
	params[3] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::IAsyncRequestStringWrapper::Request(System::System::Uri* url, Facebook_Unity::Facebook::Unity::HttpMethod method, mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::String>* formData, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IGraphResult>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Request", std::vector<std::string> { "System.Uri", "Facebook.Unity.HttpMethod", "System.Collections.Generic.IDictionary`2<System.String,System.String>", "Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)url;
	params[1] = (intptr_t)&method;
	params[2] = (intptr_t)formData;
	params[3] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
