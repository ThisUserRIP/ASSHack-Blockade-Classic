#include "UnityEngine_UI_ReflectionMethodsCache_Raycast2DCallback.h"

IL2CPP::Il2CppClass* UnityEngine_UI::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(UnityEngine_UI::UnityEngine::UI::ReflectionMethodsCache::GetIl2CppClass(), "Raycast2DCallback");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_UI::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_UI::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback::_ctor(mscorlib::System::Object* object, intptr_t method)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Object", "System.IntPtr" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)object;
	params[1] = (intptr_t)&method;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D UnityEngine_UI::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback::Invoke(UnityEngine_CoreModule::UnityEngine::Vector2 p1, UnityEngine_CoreModule::UnityEngine::Vector2 p2, float f, int32_t i)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Invoke", std::vector<std::string> { "UnityEngine.Vector2", "UnityEngine.Vector2", "System.Single", "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&p1;
	params[1] = (intptr_t)&p2;
	params[2] = (intptr_t)&f;
	params[3] = (intptr_t)&i;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D ret;
		std::memset(&ret, 0, sizeof(UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D));
		return ret;
	}
	return static_cast<UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D>(*(UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::IAsyncResult* UnityEngine_UI::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback::BeginInvoke(UnityEngine_CoreModule::UnityEngine::Vector2 p1, UnityEngine_CoreModule::UnityEngine::Vector2 p2, float f, int32_t i, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BeginInvoke", std::vector<std::string> { "UnityEngine.Vector2", "UnityEngine.Vector2", "System.Single", "System.Int32", "System.AsyncCallback", "System.Object" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&p1;
	params[1] = (intptr_t)&p2;
	params[2] = (intptr_t)&f;
	params[3] = (intptr_t)&i;
	params[4] = (intptr_t)callback;
	params[5] = (intptr_t)object;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::IAsyncResult*)returnValue;
}
UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D UnityEngine_UI::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback::EndInvoke(mscorlib::System::IAsyncResult* result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EndInvoke", std::vector<std::string> { "System.IAsyncResult" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)result;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D ret;
		std::memset(&ret, 0, sizeof(UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D));
		return ret;
	}
	return static_cast<UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D>(*(UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D*)il2cpp_object_unbox(returnValue));
}
