#include "UnityEngine_Networking_DownloadHandlerAssetBundle.h"

IL2CPP::Il2CppClass* UnityEngine_UnityWebRequestAssetBundleModule::UnityEngine::Networking::DownloadHandlerAssetBundle::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.UnityWebRequestAssetBundleModule.dll", "UnityEngine.Networking", "DownloadHandlerAssetBundle");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_UnityWebRequestAssetBundleModule::UnityEngine::Networking::DownloadHandlerAssetBundle::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
intptr_t UnityEngine_UnityWebRequestAssetBundleModule::UnityEngine::Networking::DownloadHandlerAssetBundle::CreateCached(UnityEngine_UnityWebRequestAssetBundleModule::UnityEngine::Networking::DownloadHandlerAssetBundle* obj, mscorlib::System::String* url, mscorlib::System::String* name, UnityEngine_CoreModule::UnityEngine::Hash128 hash, uint32_t crc)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateCached", std::vector<std::string> { "UnityEngine.Networking.DownloadHandlerAssetBundle", "System.String", "System.String", "UnityEngine.Hash128", "System.UInt32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)obj;
	params[1] = (intptr_t)url;
	params[2] = (intptr_t)name;
	params[3] = (intptr_t)&hash;
	params[4] = (intptr_t)&crc;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_UnityWebRequestAssetBundleModule::UnityEngine::Networking::DownloadHandlerAssetBundle::InternalCreateAssetBundleCached(mscorlib::System::String* url, mscorlib::System::String* name, UnityEngine_CoreModule::UnityEngine::Hash128 hash, uint32_t crc)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalCreateAssetBundleCached", std::vector<std::string> { "System.String", "System.String", "UnityEngine.Hash128", "System.UInt32" });
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
void UnityEngine_UnityWebRequestAssetBundleModule::UnityEngine::Networking::DownloadHandlerAssetBundle::_ctor(mscorlib::System::String* url, UnityEngine_CoreModule::UnityEngine::CachedAssetBundle cachedBundle, uint32_t crc)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "UnityEngine.CachedAssetBundle", "System.UInt32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)url;
	params[1] = (intptr_t)&cachedBundle;
	params[2] = (intptr_t)&crc;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<uint8_t>* UnityEngine_UnityWebRequestAssetBundleModule::UnityEngine::Networking::DownloadHandlerAssetBundle::GetData()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetData");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
mscorlib::System::String* UnityEngine_UnityWebRequestAssetBundleModule::UnityEngine::Networking::DownloadHandlerAssetBundle::GetText()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetText");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
UnityEngine_AssetBundleModule::UnityEngine::AssetBundle* UnityEngine_UnityWebRequestAssetBundleModule::UnityEngine::Networking::DownloadHandlerAssetBundle::get_assetBundle()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_assetBundle");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_AssetBundleModule::UnityEngine::AssetBundle*)returnValue;
}
intptr_t UnityEngine_UnityWebRequestAssetBundleModule::UnityEngine::Networking::DownloadHandlerAssetBundle::CreateCached_Injected(UnityEngine_UnityWebRequestAssetBundleModule::UnityEngine::Networking::DownloadHandlerAssetBundle* obj, mscorlib::System::String* url, mscorlib::System::String* name, UnityEngine_CoreModule::UnityEngine::Hash128& hash, uint32_t crc)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateCached_Injected", std::vector<std::string> { "UnityEngine.Networking.DownloadHandlerAssetBundle", "System.String", "System.String", "UnityEngine.Hash128&", "System.UInt32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)obj;
	params[1] = (intptr_t)url;
	params[2] = (intptr_t)name;
	params[3] = (intptr_t)&hash;
	params[4] = (intptr_t)&crc;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
