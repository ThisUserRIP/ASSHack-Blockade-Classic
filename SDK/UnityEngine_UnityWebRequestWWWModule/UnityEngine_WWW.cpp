#include "UnityEngine_WWW.h"

IL2CPP::Il2CppClass* UnityEngine_UnityWebRequestWWWModule::UnityEngine::WWW::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.UnityWebRequestWWWModule.dll", "UnityEngine", "WWW");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_UnityWebRequestWWWModule::UnityEngine::WWW::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_UnityWebRequestWWWModule::UnityEngine::WWW* UnityEngine_UnityWebRequestWWWModule::UnityEngine::WWW::LoadFromCacheOrDownload(mscorlib::System::String* url, UnityEngine_CoreModule::UnityEngine::Hash128 hash)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadFromCacheOrDownload", std::vector<std::string> { "System.String", "UnityEngine.Hash128" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)url;
	params[1] = (intptr_t)&hash;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UnityWebRequestWWWModule::UnityEngine::WWW*)returnValue;
}
UnityEngine_UnityWebRequestWWWModule::UnityEngine::WWW* UnityEngine_UnityWebRequestWWWModule::UnityEngine::WWW::LoadFromCacheOrDownload(mscorlib::System::String* url, UnityEngine_CoreModule::UnityEngine::Hash128 hash, uint32_t crc)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadFromCacheOrDownload", std::vector<std::string> { "System.String", "UnityEngine.Hash128", "System.UInt32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)url;
	params[1] = (intptr_t)&hash;
	params[2] = (intptr_t)&crc;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UnityWebRequestWWWModule::UnityEngine::WWW*)returnValue;
}
void UnityEngine_UnityWebRequestWWWModule::UnityEngine::WWW::_ctor(mscorlib::System::String* url)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)url;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UnityWebRequestWWWModule::UnityEngine::WWW::_ctor(mscorlib::System::String* url, UnityEngine_UnityWebRequestModule::UnityEngine::WWWForm* form)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "UnityEngine.WWWForm" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)url;
	params[1] = (intptr_t)form;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UnityWebRequestWWWModule::UnityEngine::WWW::_ctor(mscorlib::System::String* url, IL2CPP::Array<uint8_t>* postData, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::String>* headers)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.Byte[]", "System.Collections.Generic.Dictionary`2<System.String,System.String>" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)url;
	params[1] = (intptr_t)postData;
	params[2] = (intptr_t)headers;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UnityWebRequestWWWModule::UnityEngine::WWW::_ctor(mscorlib::System::String* url, mscorlib::System::String* name, UnityEngine_CoreModule::UnityEngine::Hash128 hash, uint32_t crc)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.String", "UnityEngine.Hash128", "System.UInt32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)url;
	params[1] = (intptr_t)name;
	params[2] = (intptr_t)&hash;
	params[3] = (intptr_t)&crc;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_AssetBundleModule::UnityEngine::AssetBundle* UnityEngine_UnityWebRequestWWWModule::UnityEngine::WWW::get_assetBundle()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_assetBundle");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_AssetBundleModule::UnityEngine::AssetBundle*)returnValue;
}
IL2CPP::Array<uint8_t>* UnityEngine_UnityWebRequestWWWModule::UnityEngine::WWW::get_bytes()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_bytes");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
int32_t UnityEngine_UnityWebRequestWWWModule::UnityEngine::WWW::get_size()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_size");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t UnityEngine_UnityWebRequestWWWModule::UnityEngine::WWW::get_bytesDownloaded()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_bytesDownloaded");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::String* UnityEngine_UnityWebRequestWWWModule::UnityEngine::WWW::get_error()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_error");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
float UnityEngine_UnityWebRequestWWWModule::UnityEngine::WWW::get_progress()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_progress");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::String* UnityEngine_UnityWebRequestWWWModule::UnityEngine::WWW::get_text()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_text");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Texture2D* UnityEngine_UnityWebRequestWWWModule::UnityEngine::WWW::CreateTextureFromDownloadedData(bool markNonReadable)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateTextureFromDownloadedData", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&markNonReadable;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Texture2D*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Texture2D* UnityEngine_UnityWebRequestWWWModule::UnityEngine::WWW::get_texture()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_texture");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Texture2D*)returnValue;
}
mscorlib::System::String* UnityEngine_UnityWebRequestWWWModule::UnityEngine::WWW::get_url()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_url");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
bool UnityEngine_UnityWebRequestWWWModule::UnityEngine::WWW::get_keepWaiting()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_keepWaiting");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_UnityWebRequestWWWModule::UnityEngine::WWW::Dispose()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dispose");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_UnityWebRequestWWWModule::UnityEngine::WWW::WaitUntilDoneIfPossible()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WaitUntilDoneIfPossible");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
