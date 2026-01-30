#include "UnityEngine_Rendering_Universal_PostProcessUtils.h"

IL2CPP::Il2CppClass* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::PostProcessUtils::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.RenderPipelines.Universal.Runtime.dll", "UnityEngine.Rendering.Universal", "PostProcessUtils");
	return il2cppclass;
}
mscorlib::System::Type* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::PostProcessUtils::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
int32_t Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::PostProcessUtils::ConfigureDithering(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::PostProcessData* data, int32_t index, UnityEngine_CoreModule::UnityEngine::Camera* camera, UnityEngine_CoreModule::UnityEngine::Material* material)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ConfigureDithering", std::vector<std::string> { "UnityEngine.Rendering.Universal.PostProcessData", "System.Int32", "UnityEngine.Camera", "UnityEngine.Material" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)data;
	params[1] = (intptr_t)&index;
	params[2] = (intptr_t)camera;
	params[3] = (intptr_t)material;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::PostProcessUtils::ConfigureDithering(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::PostProcessData* data, int32_t index, int32_t cameraPixelWidth, int32_t cameraPixelHeight, UnityEngine_CoreModule::UnityEngine::Material* material)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ConfigureDithering", std::vector<std::string> { "UnityEngine.Rendering.Universal.PostProcessData", "System.Int32", "System.Int32", "System.Int32", "UnityEngine.Material" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)data;
	params[1] = (intptr_t)&index;
	params[2] = (intptr_t)&cameraPixelWidth;
	params[3] = (intptr_t)&cameraPixelHeight;
	params[4] = (intptr_t)material;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::PostProcessUtils::ConfigureFilmGrain(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::PostProcessData* data, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::FilmGrain* settings, UnityEngine_CoreModule::UnityEngine::Camera* camera, UnityEngine_CoreModule::UnityEngine::Material* material)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ConfigureFilmGrain", std::vector<std::string> { "UnityEngine.Rendering.Universal.PostProcessData", "UnityEngine.Rendering.Universal.FilmGrain", "UnityEngine.Camera", "UnityEngine.Material" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)data;
	params[1] = (intptr_t)settings;
	params[2] = (intptr_t)camera;
	params[3] = (intptr_t)material;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::PostProcessUtils::ConfigureFilmGrain(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::PostProcessData* data, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::FilmGrain* settings, int32_t cameraPixelWidth, int32_t cameraPixelHeight, UnityEngine_CoreModule::UnityEngine::Material* material)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ConfigureFilmGrain", std::vector<std::string> { "UnityEngine.Rendering.Universal.PostProcessData", "UnityEngine.Rendering.Universal.FilmGrain", "System.Int32", "System.Int32", "UnityEngine.Material" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)data;
	params[1] = (intptr_t)settings;
	params[2] = (intptr_t)&cameraPixelWidth;
	params[3] = (intptr_t)&cameraPixelHeight;
	params[4] = (intptr_t)material;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::PostProcessUtils::SetSourceSize(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, UnityEngine_CoreModule::UnityEngine::RenderTextureDescriptor desc)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetSourceSize", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "UnityEngine.RenderTextureDescriptor" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)cmd;
	params[1] = (intptr_t)&desc;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
