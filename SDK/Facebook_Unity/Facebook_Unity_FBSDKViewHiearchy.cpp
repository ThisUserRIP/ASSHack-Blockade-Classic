#include "Facebook_Unity_FBSDKViewHiearchy.h"

IL2CPP::Il2CppClass* Facebook_Unity::Facebook::Unity::FBSDKViewHiearchy::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Facebook.Unity.dll", "Facebook.Unity", "FBSDKViewHiearchy");
	return il2cppclass;
}
mscorlib::System::Type* Facebook_Unity::Facebook::Unity::FBSDKViewHiearchy::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool Facebook_Unity::Facebook::Unity::FBSDKViewHiearchy::CheckGameObjectMatchPath(UnityEngine_CoreModule::UnityEngine::GameObject* go, mscorlib::System::Collections::Generic::List_1<Facebook_Unity::Facebook::Unity::FBSDKCodelessPathComponent>* path)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckGameObjectMatchPath", std::vector<std::string> { "UnityEngine.GameObject", "System.Collections.Generic.List`1<Facebook.Unity.FBSDKCodelessPathComponent>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)go;
	params[1] = (intptr_t)path;
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
bool Facebook_Unity::Facebook::Unity::FBSDKViewHiearchy::CheckPathMatchPath(mscorlib::System::Collections::Generic::List_1<Facebook_Unity::Facebook::Unity::FBSDKCodelessPathComponent>* goPath, mscorlib::System::Collections::Generic::List_1<Facebook_Unity::Facebook::Unity::FBSDKCodelessPathComponent>* path)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckPathMatchPath", std::vector<std::string> { "System.Collections.Generic.List`1<Facebook.Unity.FBSDKCodelessPathComponent>", "System.Collections.Generic.List`1<Facebook.Unity.FBSDKCodelessPathComponent>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)goPath;
	params[1] = (intptr_t)path;
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
mscorlib::System::Collections::Generic::List_1<Facebook_Unity::Facebook::Unity::FBSDKCodelessPathComponent>* Facebook_Unity::Facebook::Unity::FBSDKViewHiearchy::GetPath(UnityEngine_CoreModule::UnityEngine::GameObject* go)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPath", std::vector<std::string> { "UnityEngine.GameObject" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)go;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<Facebook_Unity::Facebook::Unity::FBSDKCodelessPathComponent>*)returnValue;
}
mscorlib::System::Collections::Generic::List_1<Facebook_Unity::Facebook::Unity::FBSDKCodelessPathComponent>* Facebook_Unity::Facebook::Unity::FBSDKViewHiearchy::GetPath(UnityEngine_CoreModule::UnityEngine::GameObject* go, int32_t limit)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPath", std::vector<std::string> { "UnityEngine.GameObject", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)go;
	params[1] = (intptr_t)&limit;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<Facebook_Unity::Facebook::Unity::FBSDKCodelessPathComponent>*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::GameObject* Facebook_Unity::Facebook::Unity::FBSDKViewHiearchy::GetParent(UnityEngine_CoreModule::UnityEngine::GameObject* go)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetParent", std::vector<std::string> { "UnityEngine.GameObject" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)go;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::GameObject*)returnValue;
}
mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* Facebook_Unity::Facebook::Unity::FBSDKViewHiearchy::GetAttribute(UnityEngine_CoreModule::UnityEngine::GameObject* obj, UnityEngine_CoreModule::UnityEngine::GameObject* parent)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAttribute", std::vector<std::string> { "UnityEngine.GameObject", "UnityEngine.GameObject" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)obj;
	params[1] = (intptr_t)parent;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>*)returnValue;
}
