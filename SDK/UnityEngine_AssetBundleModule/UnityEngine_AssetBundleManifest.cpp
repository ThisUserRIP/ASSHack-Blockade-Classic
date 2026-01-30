#include "UnityEngine_AssetBundleManifest.h"

IL2CPP::Il2CppClass* UnityEngine_AssetBundleModule::UnityEngine::AssetBundleManifest::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.AssetBundleModule.dll", "UnityEngine", "AssetBundleManifest");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_AssetBundleModule::UnityEngine::AssetBundleManifest::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
IL2CPP::Array<mscorlib::System::String*>* UnityEngine_AssetBundleModule::UnityEngine::AssetBundleManifest::GetAllAssetBundles()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAllAssetBundles");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::String*>*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Hash128 UnityEngine_AssetBundleModule::UnityEngine::AssetBundleManifest::GetAssetBundleHash(mscorlib::System::String* assetBundleName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAssetBundleHash", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)assetBundleName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Hash128 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Hash128));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Hash128>(*(UnityEngine_CoreModule::UnityEngine::Hash128*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_AssetBundleModule::UnityEngine::AssetBundleManifest::GetAssetBundleHash_Injected(mscorlib::System::String* assetBundleName, UnityEngine_CoreModule::UnityEngine::Hash128& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAssetBundleHash_Injected", std::vector<std::string> { "System.String", "UnityEngine.Hash128&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)assetBundleName;
	params[1] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
