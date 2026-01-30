#include "UnityEngine_Rendering_CameraCaptureBridge.h"

IL2CPP::Il2CppClass* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CameraCaptureBridge::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.RenderPipelines.Core.Runtime.dll", "UnityEngine.Rendering", "CameraCaptureBridge");
	return il2cppclass;
}
mscorlib::System::Type* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CameraCaptureBridge::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CameraCaptureBridge::get_enabled()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_enabled");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CameraCaptureBridge::set_enabled(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_enabled", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::Generic::IEnumerator_1<mscorlib::System::Action_2<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier, UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer>>* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CameraCaptureBridge::GetCaptureActions(UnityEngine_CoreModule::UnityEngine::Camera* camera)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCaptureActions", std::vector<std::string> { "UnityEngine.Camera" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)camera;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerator_1<mscorlib::System::Action_2<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier, UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer>>*)returnValue;
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CameraCaptureBridge::AddCaptureAction(UnityEngine_CoreModule::UnityEngine::Camera* camera, mscorlib::System::Action_2<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier, UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer>* action)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddCaptureAction", std::vector<std::string> { "UnityEngine.Camera", "System.Action`2<UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.CommandBuffer>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)camera;
	params[1] = (intptr_t)action;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CameraCaptureBridge::RemoveCaptureAction(UnityEngine_CoreModule::UnityEngine::Camera* camera, mscorlib::System::Action_2<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier, UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer>* action)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveCaptureAction", std::vector<std::string> { "UnityEngine.Camera", "System.Action`2<UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.CommandBuffer>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)camera;
	params[1] = (intptr_t)action;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CameraCaptureBridge::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
