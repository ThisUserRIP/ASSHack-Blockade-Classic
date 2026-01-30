#include "UnityEngine_Experimental_Rendering_Universal_Light2DManager.h"

IL2CPP::Il2CppClass* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Light2DManager::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.RenderPipelines.Universal.Runtime.dll", "UnityEngine.Experimental.Rendering.Universal", "Light2DManager");
	return il2cppclass;
}
mscorlib::System::Type* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Light2DManager::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Light2D>* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Light2DManager::get_lights()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_lights");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Light2D>*)returnValue;
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Light2DManager::RegisterLight(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Light2D* light)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegisterLight", std::vector<std::string> { "UnityEngine.Experimental.Rendering.Universal.Light2D" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)light;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Light2DManager::DeregisterLight(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Light2D* light)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DeregisterLight", std::vector<std::string> { "UnityEngine.Experimental.Rendering.Universal.Light2D" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)light;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Light2DManager::ErrorIfDuplicateGlobalLight(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Light2D* light)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ErrorIfDuplicateGlobalLight", std::vector<std::string> { "UnityEngine.Experimental.Rendering.Universal.Light2D" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)light;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Light2DManager::GetGlobalColor(int32_t sortingLayerIndex, int32_t blendStyleIndex, UnityEngine_CoreModule::UnityEngine::Color& color)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetGlobalColor", std::vector<std::string> { "System.Int32", "System.Int32", "UnityEngine.Color&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&sortingLayerIndex;
	params[1] = (intptr_t)&blendStyleIndex;
	params[2] = (intptr_t)&color;
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
bool Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Light2DManager::ContainsDuplicateGlobalLight(int32_t sortingLayerIndex, int32_t blendStyleIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ContainsDuplicateGlobalLight", std::vector<std::string> { "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&sortingLayerIndex;
	params[1] = (intptr_t)&blendStyleIndex;
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
IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::SortingLayer>* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Light2DManager::GetCachedSortingLayer()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCachedSortingLayer");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::SortingLayer>*)returnValue;
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Light2DManager::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
