#include "UnityEngine_Rendering_LookDev_StageRuntimeInterface.h"

IL2CPP::Il2CppClass* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::LookDev::StageRuntimeInterface::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.RenderPipelines.Core.Runtime.dll", "UnityEngine.Rendering.LookDev", "StageRuntimeInterface");
	return il2cppclass;
}
mscorlib::System::Type* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::LookDev::StageRuntimeInterface::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::LookDev::StageRuntimeInterface::_ctor(mscorlib::System::Func_2<mscorlib::System::Boolean, UnityEngine_CoreModule::UnityEngine::GameObject>* AddGameObject, mscorlib::System::Func_1<UnityEngine_CoreModule::UnityEngine::Camera>* GetCamera, mscorlib::System::Func_1<UnityEngine_CoreModule::UnityEngine::Light>* GetSunLight)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Func`2<System.Boolean,UnityEngine.GameObject>", "System.Func`1<UnityEngine.Camera>", "System.Func`1<UnityEngine.Light>" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)AddGameObject;
	params[1] = (intptr_t)GetCamera;
	params[2] = (intptr_t)GetSunLight;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::GameObject* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::LookDev::StageRuntimeInterface::AddGameObject(bool persistent)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddGameObject", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&persistent;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::GameObject*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Camera* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::LookDev::StageRuntimeInterface::get_camera()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_camera");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Camera*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Light* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::LookDev::StageRuntimeInterface::get_sunLight()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_sunLight");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Light*)returnValue;
}
