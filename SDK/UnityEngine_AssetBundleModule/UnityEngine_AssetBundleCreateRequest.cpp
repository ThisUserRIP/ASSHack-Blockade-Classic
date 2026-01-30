#include "UnityEngine_AssetBundleCreateRequest.h"

IL2CPP::Il2CppClass* UnityEngine_AssetBundleModule::UnityEngine::AssetBundleCreateRequest::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.AssetBundleModule.dll", "UnityEngine", "AssetBundleCreateRequest");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_AssetBundleModule::UnityEngine::AssetBundleCreateRequest::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_AssetBundleModule::UnityEngine::AssetBundle* UnityEngine_AssetBundleModule::UnityEngine::AssetBundleCreateRequest::get_assetBundle()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_assetBundle");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_AssetBundleModule::UnityEngine::AssetBundle*)returnValue;
}
void UnityEngine_AssetBundleModule::UnityEngine::AssetBundleCreateRequest::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
