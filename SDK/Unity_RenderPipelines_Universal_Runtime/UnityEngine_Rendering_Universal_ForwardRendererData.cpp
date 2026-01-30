#include "UnityEngine_Rendering_Universal_ForwardRendererData.h"

IL2CPP::Il2CppClass* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ForwardRendererData::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.RenderPipelines.Universal.Runtime.dll", "UnityEngine.Rendering.Universal", "ForwardRendererData");
	return il2cppclass;
}
mscorlib::System::Type* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ForwardRendererData::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ForwardRendererData::Create()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Create");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::LayerMask Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ForwardRendererData::get_opaqueLayerMask()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_opaqueLayerMask");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::LayerMask ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::LayerMask));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::LayerMask>(*(UnityEngine_CoreModule::UnityEngine::LayerMask*)il2cpp_object_unbox(returnValue));
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ForwardRendererData::set_opaqueLayerMask(UnityEngine_CoreModule::UnityEngine::LayerMask value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_opaqueLayerMask", std::vector<std::string> { "UnityEngine.LayerMask" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::LayerMask Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ForwardRendererData::get_transparentLayerMask()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_transparentLayerMask");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::LayerMask ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::LayerMask));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::LayerMask>(*(UnityEngine_CoreModule::UnityEngine::LayerMask*)il2cpp_object_unbox(returnValue));
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ForwardRendererData::set_transparentLayerMask(UnityEngine_CoreModule::UnityEngine::LayerMask value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_transparentLayerMask", std::vector<std::string> { "UnityEngine.LayerMask" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::StencilStateData* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ForwardRendererData::get_defaultStencilState()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_defaultStencilState");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::StencilStateData*)returnValue;
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ForwardRendererData::set_defaultStencilState(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::StencilStateData* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_defaultStencilState", std::vector<std::string> { "UnityEngine.Rendering.Universal.StencilStateData" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ForwardRendererData::get_shadowTransparentReceive()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_shadowTransparentReceive");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ForwardRendererData::set_shadowTransparentReceive(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_shadowTransparentReceive", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingMode Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ForwardRendererData::get_renderingMode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_renderingMode");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingMode ret;
		std::memset(&ret, 0, sizeof(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingMode));
		return ret;
	}
	return static_cast<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingMode>(*(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingMode*)il2cpp_object_unbox(returnValue));
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ForwardRendererData::set_renderingMode(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingMode value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_renderingMode", std::vector<std::string> { "UnityEngine.Rendering.Universal.RenderingMode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ForwardRendererData::get_accurateGbufferNormals()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_accurateGbufferNormals");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ForwardRendererData::set_accurateGbufferNormals(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_accurateGbufferNormals", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ForwardRendererData::OnEnable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnEnable");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ForwardRendererData::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
