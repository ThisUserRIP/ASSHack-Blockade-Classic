#include "UnityEngine_UI_ReflectionMethodsCache.h"

IL2CPP::Il2CppClass* UnityEngine_UI::UnityEngine::UI::ReflectionMethodsCache::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.UI.dll", "UnityEngine.UI", "ReflectionMethodsCache");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_UI::UnityEngine::UI::ReflectionMethodsCache::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_UI::UnityEngine::UI::ReflectionMethodsCache::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_UI::UnityEngine::UI::ReflectionMethodsCache* UnityEngine_UI::UnityEngine::UI::ReflectionMethodsCache::get_Singleton()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Singleton");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UI::UnityEngine::UI::ReflectionMethodsCache*)returnValue;
}
void UnityEngine_UI::UnityEngine::UI::ReflectionMethodsCache::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
