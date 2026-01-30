#include "UnityEngine_CameraRaycastHelper.h"

IL2CPP::Il2CppClass* UnityEngine_InputLegacyModule::UnityEngine::CameraRaycastHelper::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.InputLegacyModule.dll", "UnityEngine", "CameraRaycastHelper");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_InputLegacyModule::UnityEngine::CameraRaycastHelper::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_CoreModule::UnityEngine::GameObject* UnityEngine_InputLegacyModule::UnityEngine::CameraRaycastHelper::RaycastTry(UnityEngine_CoreModule::UnityEngine::Camera* cam, UnityEngine_CoreModule::UnityEngine::Ray ray, float distance, int32_t layerMask)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RaycastTry", std::vector<std::string> { "UnityEngine.Camera", "UnityEngine.Ray", "System.Single", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)cam;
	params[1] = (intptr_t)&ray;
	params[2] = (intptr_t)&distance;
	params[3] = (intptr_t)&layerMask;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::GameObject*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::GameObject* UnityEngine_InputLegacyModule::UnityEngine::CameraRaycastHelper::RaycastTry2D(UnityEngine_CoreModule::UnityEngine::Camera* cam, UnityEngine_CoreModule::UnityEngine::Ray ray, float distance, int32_t layerMask)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RaycastTry2D", std::vector<std::string> { "UnityEngine.Camera", "UnityEngine.Ray", "System.Single", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)cam;
	params[1] = (intptr_t)&ray;
	params[2] = (intptr_t)&distance;
	params[3] = (intptr_t)&layerMask;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::GameObject*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::GameObject* UnityEngine_InputLegacyModule::UnityEngine::CameraRaycastHelper::RaycastTry_Injected(UnityEngine_CoreModule::UnityEngine::Camera* cam, UnityEngine_CoreModule::UnityEngine::Ray& ray, float distance, int32_t layerMask)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RaycastTry_Injected", std::vector<std::string> { "UnityEngine.Camera", "UnityEngine.Ray&", "System.Single", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)cam;
	params[1] = (intptr_t)&ray;
	params[2] = (intptr_t)&distance;
	params[3] = (intptr_t)&layerMask;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::GameObject*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::GameObject* UnityEngine_InputLegacyModule::UnityEngine::CameraRaycastHelper::RaycastTry2D_Injected(UnityEngine_CoreModule::UnityEngine::Camera* cam, UnityEngine_CoreModule::UnityEngine::Ray& ray, float distance, int32_t layerMask)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RaycastTry2D_Injected", std::vector<std::string> { "UnityEngine.Camera", "UnityEngine.Ray&", "System.Single", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)cam;
	params[1] = (intptr_t)&ray;
	params[2] = (intptr_t)&distance;
	params[3] = (intptr_t)&layerMask;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::GameObject*)returnValue;
}
