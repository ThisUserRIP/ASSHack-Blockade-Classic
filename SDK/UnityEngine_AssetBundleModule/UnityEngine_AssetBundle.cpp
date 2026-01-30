#include "UnityEngine_AssetBundle.h"

IL2CPP::Il2CppClass* UnityEngine_AssetBundleModule::UnityEngine::AssetBundle::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.AssetBundleModule.dll", "UnityEngine", "AssetBundle");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_AssetBundleModule::UnityEngine::AssetBundle::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_AssetBundleModule::UnityEngine::AssetBundle::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_AssetBundleModule::UnityEngine::AssetBundleCreateRequest* UnityEngine_AssetBundleModule::UnityEngine::AssetBundle::LoadFromMemoryAsync_Internal(IL2CPP::Array<uint8_t>* binary, uint32_t crc)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadFromMemoryAsync_Internal", std::vector<std::string> { "System.Byte[]", "System.UInt32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)binary;
	params[1] = (intptr_t)&crc;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_AssetBundleModule::UnityEngine::AssetBundleCreateRequest*)returnValue;
}
UnityEngine_AssetBundleModule::UnityEngine::AssetBundleCreateRequest* UnityEngine_AssetBundleModule::UnityEngine::AssetBundle::LoadFromMemoryAsync(IL2CPP::Array<uint8_t>* binary)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadFromMemoryAsync", std::vector<std::string> { "System.Byte[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)binary;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_AssetBundleModule::UnityEngine::AssetBundleCreateRequest*)returnValue;
}
UnityEngine_AssetBundleModule::UnityEngine::AssetBundle* UnityEngine_AssetBundleModule::UnityEngine::AssetBundle::LoadFromMemory_Internal(IL2CPP::Array<uint8_t>* binary, uint32_t crc)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadFromMemory_Internal", std::vector<std::string> { "System.Byte[]", "System.UInt32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)binary;
	params[1] = (intptr_t)&crc;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_AssetBundleModule::UnityEngine::AssetBundle*)returnValue;
}
UnityEngine_AssetBundleModule::UnityEngine::AssetBundle* UnityEngine_AssetBundleModule::UnityEngine::AssetBundle::LoadFromMemory(IL2CPP::Array<uint8_t>* binary)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadFromMemory", std::vector<std::string> { "System.Byte[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)binary;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_AssetBundleModule::UnityEngine::AssetBundle*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Object* UnityEngine_AssetBundleModule::UnityEngine::AssetBundle::LoadAsset(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadAsset", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Object*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Object* UnityEngine_AssetBundleModule::UnityEngine::AssetBundle::LoadAsset(mscorlib::System::String* name, mscorlib::System::Type* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadAsset", std::vector<std::string> { "System.String", "System.Type" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)type;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Object*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Object* UnityEngine_AssetBundleModule::UnityEngine::AssetBundle::LoadAsset_Internal(mscorlib::System::String* name, mscorlib::System::Type* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadAsset_Internal", std::vector<std::string> { "System.String", "System.Type" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)type;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Object*)returnValue;
}
UnityEngine_AssetBundleModule::UnityEngine::AssetBundleRequest* UnityEngine_AssetBundleModule::UnityEngine::AssetBundle::LoadAssetAsync(mscorlib::System::String* name, mscorlib::System::Type* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadAssetAsync", std::vector<std::string> { "System.String", "System.Type" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)type;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_AssetBundleModule::UnityEngine::AssetBundleRequest*)returnValue;
}
IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Object*>* UnityEngine_AssetBundleModule::UnityEngine::AssetBundle::LoadAllAssets(mscorlib::System::Type* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadAllAssets", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)type;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Object*>*)returnValue;
}
UnityEngine_AssetBundleModule::UnityEngine::AssetBundleRequest* UnityEngine_AssetBundleModule::UnityEngine::AssetBundle::LoadAssetAsync_Internal(mscorlib::System::String* name, mscorlib::System::Type* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadAssetAsync_Internal", std::vector<std::string> { "System.String", "System.Type" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)type;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_AssetBundleModule::UnityEngine::AssetBundleRequest*)returnValue;
}
void UnityEngine_AssetBundleModule::UnityEngine::AssetBundle::Unload(bool unloadAllLoadedObjects)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Unload", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&unloadAllLoadedObjects;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Object*>* UnityEngine_AssetBundleModule::UnityEngine::AssetBundle::LoadAssetWithSubAssets_Internal(mscorlib::System::String* name, mscorlib::System::Type* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadAssetWithSubAssets_Internal", std::vector<std::string> { "System.String", "System.Type" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)type;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Object*>*)returnValue;
}
