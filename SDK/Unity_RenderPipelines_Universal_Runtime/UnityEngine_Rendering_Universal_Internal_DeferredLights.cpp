#include "UnityEngine_Rendering_Universal_Internal_DeferredLights.h"

IL2CPP::Il2CppClass* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.RenderPipelines.Universal.Runtime.dll", "UnityEngine.Rendering.Universal.Internal", "DeferredLights");
	return il2cppclass;
}
mscorlib::System::Type* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
int32_t Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GbufferDepthIndex()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_GbufferDepthIndex");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GBufferAlbedoIndex()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_GBufferAlbedoIndex");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GBufferSpecularMetallicIndex()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_GBufferSpecularMetallicIndex");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GBufferNormalSmoothnessIndex()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_GBufferNormalSmoothnessIndex");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GBufferLightingIndex()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_GBufferLightingIndex");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GBufferShadowMask()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_GBufferShadowMask");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GBufferSliceCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_GBufferSliceCount");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::GetGBufferFormat(int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetGBufferFormat", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&index;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat>(*(UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat*)il2cpp_object_unbox(returnValue));
}
bool Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_UseShadowMask()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_UseShadowMask");
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
bool Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_UseRenderPass()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_UseRenderPass");
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
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_UseRenderPass(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_UseRenderPass", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_HasDepthPrepass()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_HasDepthPrepass");
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
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_HasDepthPrepass(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_HasDepthPrepass", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_IsOverlay()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_IsOverlay");
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
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_IsOverlay(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_IsOverlay", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_AccurateGbufferNormals()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_AccurateGbufferNormals");
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
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_AccurateGbufferNormals(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_AccurateGbufferNormals", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_TiledDeferredShading()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_TiledDeferredShading");
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
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_TiledDeferredShading(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_TiledDeferredShading", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::MixedLightingSetup Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_MixedLightingSetup()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_MixedLightingSetup");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::MixedLightingSetup ret;
		std::memset(&ret, 0, sizeof(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::MixedLightingSetup));
		return ret;
	}
	return static_cast<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::MixedLightingSetup>(*(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::MixedLightingSetup*)il2cpp_object_unbox(returnValue));
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_MixedLightingSetup(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::MixedLightingSetup value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_MixedLightingSetup", std::vector<std::string> { "UnityEngine.Rendering.Universal.MixedLightingSetup" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_UseJobSystem()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_UseJobSystem");
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
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_UseJobSystem(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_UseJobSystem", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_RenderWidth()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_RenderWidth");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_RenderWidth(int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_RenderWidth", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_RenderHeight()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_RenderHeight");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_RenderHeight(int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_RenderHeight", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle>* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GbufferAttachments()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_GbufferAttachments");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle>*)returnValue;
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_GbufferAttachments(IL2CPP::Array<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_GbufferAttachments", std::vector<std::string> { "UnityEngine.Rendering.Universal.RenderTargetHandle[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_DepthAttachment()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_DepthAttachment");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle ret;
		std::memset(&ret, 0, sizeof(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle));
		return ret;
	}
	return static_cast<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle>(*(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle*)il2cpp_object_unbox(returnValue));
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_DepthAttachment(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_DepthAttachment", std::vector<std::string> { "UnityEngine.Rendering.Universal.RenderTargetHandle" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_DepthCopyTexture()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_DepthCopyTexture");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle ret;
		std::memset(&ret, 0, sizeof(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle));
		return ret;
	}
	return static_cast<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle>(*(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle*)il2cpp_object_unbox(returnValue));
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_DepthCopyTexture(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_DepthCopyTexture", std::vector<std::string> { "UnityEngine.Rendering.Universal.RenderTargetHandle" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_DepthInfoTexture()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_DepthInfoTexture");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle ret;
		std::memset(&ret, 0, sizeof(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle));
		return ret;
	}
	return static_cast<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle>(*(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle*)il2cpp_object_unbox(returnValue));
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_DepthInfoTexture(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_DepthInfoTexture", std::vector<std::string> { "UnityEngine.Rendering.Universal.RenderTargetHandle" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_TileDepthInfoTexture()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_TileDepthInfoTexture");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle ret;
		std::memset(&ret, 0, sizeof(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle));
		return ret;
	}
	return static_cast<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle>(*(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle*)il2cpp_object_unbox(returnValue));
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_TileDepthInfoTexture(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_TileDepthInfoTexture", std::vector<std::string> { "UnityEngine.Rendering.Universal.RenderTargetHandle" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier>* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GbufferAttachmentIdentifiers()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_GbufferAttachmentIdentifiers");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier>*)returnValue;
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_GbufferAttachmentIdentifiers(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_GbufferAttachmentIdentifiers", std::vector<std::string> { "UnityEngine.Rendering.RenderTargetIdentifier[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_DepthAttachmentIdentifier()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_DepthAttachmentIdentifier");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier>(*(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier*)il2cpp_object_unbox(returnValue));
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_DepthAttachmentIdentifier(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_DepthAttachmentIdentifier", std::vector<std::string> { "UnityEngine.Rendering.RenderTargetIdentifier" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_DepthCopyTextureIdentifier()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_DepthCopyTextureIdentifier");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier>(*(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier*)il2cpp_object_unbox(returnValue));
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_DepthCopyTextureIdentifier(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_DepthCopyTextureIdentifier", std::vector<std::string> { "UnityEngine.Rendering.RenderTargetIdentifier" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_DepthInfoTextureIdentifier()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_DepthInfoTextureIdentifier");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier>(*(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier*)il2cpp_object_unbox(returnValue));
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_DepthInfoTextureIdentifier(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_DepthInfoTextureIdentifier", std::vector<std::string> { "UnityEngine.Rendering.RenderTargetIdentifier" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_TileDepthInfoTextureIdentifier()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_TileDepthInfoTextureIdentifier");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier>(*(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier*)il2cpp_object_unbox(returnValue));
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_TileDepthInfoTextureIdentifier(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_TileDepthInfoTextureIdentifier", std::vector<std::string> { "UnityEngine.Rendering.RenderTargetIdentifier" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::_ctor(UnityEngine_CoreModule::UnityEngine::Material* tileDepthInfoMaterial, UnityEngine_CoreModule::UnityEngine::Material* tileDeferredMaterial, UnityEngine_CoreModule::UnityEngine::Material* stencilDeferredMaterial)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.Material", "UnityEngine.Material", "UnityEngine.Material" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)tileDepthInfoMaterial;
	params[1] = (intptr_t)tileDeferredMaterial;
	params[2] = (intptr_t)stencilDeferredMaterial;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredTiler& Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::GetTiler(int32_t i)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTiler", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&i;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredTiler&)returnValue;
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::SetupLights(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetupLights", std::vector<std::string> { "UnityEngine.Rendering.ScriptableRenderContext", "UnityEngine.Rendering.Universal.RenderingData&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&context;
	params[1] = (intptr_t)&renderingData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::ResolveMixedLightingMode(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ResolveMixedLightingMode", std::vector<std::string> { "UnityEngine.Rendering.Universal.RenderingData&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&renderingData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::IsRuntimeSupportedThisFrame()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsRuntimeSupportedThisFrame");
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
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::Setup(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass* additionalLightsShadowCasterPass, bool hasDepthPrepass, bool isOverlay, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle depthCopyTexture, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle depthInfoTexture, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle tileDepthInfoTexture, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle depthAttachment, IL2CPP::Array<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle>* gbufferHandles)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Setup", std::vector<std::string> { "UnityEngine.Rendering.Universal.RenderingData&", "UnityEngine.Rendering.Universal.Internal.AdditionalLightsShadowCasterPass", "System.Boolean", "System.Boolean", "UnityEngine.Rendering.Universal.RenderTargetHandle", "UnityEngine.Rendering.Universal.RenderTargetHandle", "UnityEngine.Rendering.Universal.RenderTargetHandle", "UnityEngine.Rendering.Universal.RenderTargetHandle", "UnityEngine.Rendering.Universal.RenderTargetHandle[]" });
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)&renderingData;
	params[1] = (intptr_t)additionalLightsShadowCasterPass;
	params[2] = (intptr_t)&hasDepthPrepass;
	params[3] = (intptr_t)&isOverlay;
	params[4] = (intptr_t)&depthCopyTexture;
	params[5] = (intptr_t)&depthInfoTexture;
	params[6] = (intptr_t)&tileDepthInfoTexture;
	params[7] = (intptr_t)&depthAttachment;
	params[8] = (intptr_t)gbufferHandles;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::OnCameraCleanup(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnCameraCleanup", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)cmd;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Rendering::StencilState Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::OverwriteStencil(UnityEngine_CoreModule::UnityEngine::Rendering::StencilState s, int32_t stencilWriteMask)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OverwriteStencil", std::vector<std::string> { "UnityEngine.Rendering.StencilState", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&s;
	params[1] = (intptr_t)&stencilWriteMask;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Rendering::StencilState ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Rendering::StencilState));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Rendering::StencilState>(*(UnityEngine_CoreModule::UnityEngine::Rendering::StencilState*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Rendering::RenderStateBlock Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::OverwriteStencil(UnityEngine_CoreModule::UnityEngine::Rendering::RenderStateBlock block, int32_t stencilWriteMask, int32_t stencilRef)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OverwriteStencil", std::vector<std::string> { "UnityEngine.Rendering.RenderStateBlock", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&block;
	params[1] = (intptr_t)&stencilWriteMask;
	params[2] = (intptr_t)&stencilRef;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Rendering::RenderStateBlock ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Rendering::RenderStateBlock));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Rendering::RenderStateBlock>(*(UnityEngine_CoreModule::UnityEngine::Rendering::RenderStateBlock*)il2cpp_object_unbox(returnValue));
}
bool Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::HasTileLights()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HasTileLights");
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
bool Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::HasTileDepthRangeExtraPass()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HasTileDepthRangeExtraPass");
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
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::ExecuteTileDepthInfoPass(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ExecuteTileDepthInfoPass", std::vector<std::string> { "UnityEngine.Rendering.ScriptableRenderContext", "UnityEngine.Rendering.Universal.RenderingData&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&context;
	params[1] = (intptr_t)&renderingData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::ExecuteDownsampleBitmaskPass(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ExecuteDownsampleBitmaskPass", std::vector<std::string> { "UnityEngine.Rendering.ScriptableRenderContext", "UnityEngine.Rendering.Universal.RenderingData&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&context;
	params[1] = (intptr_t)&renderingData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::ClearStencilPartial(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearStencilPartial", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)cmd;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::ExecuteDeferredPass(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ExecuteDeferredPass", std::vector<std::string> { "UnityEngine.Rendering.ScriptableRenderContext", "UnityEngine.Rendering.Universal.RenderingData&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&context;
	params[1] = (intptr_t)&renderingData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::SetupShaderLightConstants(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetupShaderLightConstants", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "UnityEngine.Rendering.Universal.RenderingData&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)cmd;
	params[1] = (intptr_t)&renderingData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::SetupMainLightConstants(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::LightData& lightData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetupMainLightConstants", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "UnityEngine.Rendering.Universal.LightData&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)cmd;
	params[1] = (intptr_t)&lightData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::SetupMatrixConstants(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetupMatrixConstants", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "UnityEngine.Rendering.Universal.RenderingData&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)cmd;
	params[1] = (intptr_t)&renderingData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::SortLights(UnityEngine_CoreModule::Unity::Collections::NativeArray_1<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredTiler_PrePunctualLight>& prePunctualLights)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SortLights", std::vector<std::string> { "Unity.Collections.NativeArray`1<UnityEngine.Rendering.Universal.Internal.DeferredTiler/PrePunctualLight>&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&prePunctualLights;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::CheckHasTileLights(UnityEngine_CoreModule::Unity::Collections::NativeArray_1<UnityEngine_CoreModule::UnityEngine::Rendering::VisibleLight>& visibleLights)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckHasTileLights", std::vector<std::string> { "Unity.Collections.NativeArray`1<UnityEngine.Rendering.VisibleLight>&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&visibleLights;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::PrecomputeLights(UnityEngine_CoreModule::Unity::Collections::NativeArray_1<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredTiler_PrePunctualLight>& prePunctualLights, UnityEngine_CoreModule::Unity::Collections::NativeArray_1<mscorlib::System::UInt16>& stencilVisLights, UnityEngine_CoreModule::Unity::Collections::NativeArray_1<mscorlib::System::UInt16>& stencilVisLightOffsets, UnityEngine_CoreModule::Unity::Collections::NativeArray_1<UnityEngine_CoreModule::UnityEngine::Rendering::VisibleLight>& visibleLights, bool hasAdditionalLights, UnityEngine_CoreModule::UnityEngine::Matrix4x4 view, bool isOrthographic, float zNear)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PrecomputeLights", std::vector<std::string> { "Unity.Collections.NativeArray`1<UnityEngine.Rendering.Universal.Internal.DeferredTiler/PrePunctualLight>&", "Unity.Collections.NativeArray`1<System.UInt16>&", "Unity.Collections.NativeArray`1<System.UInt16>&", "Unity.Collections.NativeArray`1<UnityEngine.Rendering.VisibleLight>&", "System.Boolean", "UnityEngine.Matrix4x4", "System.Boolean", "System.Single" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)&prePunctualLights;
	params[1] = (intptr_t)&stencilVisLights;
	params[2] = (intptr_t)&stencilVisLightOffsets;
	params[3] = (intptr_t)&visibleLights;
	params[4] = (intptr_t)&hasAdditionalLights;
	params[5] = (intptr_t)&view;
	params[6] = (intptr_t)&isOrthographic;
	params[7] = (intptr_t)&zNear;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::RenderTileLights(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RenderTileLights", std::vector<std::string> { "UnityEngine.Rendering.ScriptableRenderContext", "UnityEngine.Rendering.CommandBuffer", "UnityEngine.Rendering.Universal.RenderingData&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&context;
	params[1] = (intptr_t)cmd;
	params[2] = (intptr_t)&renderingData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::RenderStencilLights(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RenderStencilLights", std::vector<std::string> { "UnityEngine.Rendering.ScriptableRenderContext", "UnityEngine.Rendering.CommandBuffer", "UnityEngine.Rendering.Universal.RenderingData&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&context;
	params[1] = (intptr_t)cmd;
	params[2] = (intptr_t)&renderingData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::RenderStencilDirectionalLights(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData, UnityEngine_CoreModule::Unity::Collections::NativeArray_1<UnityEngine_CoreModule::UnityEngine::Rendering::VisibleLight> visibleLights, int32_t mainLightIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RenderStencilDirectionalLights", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "UnityEngine.Rendering.Universal.RenderingData&", "Unity.Collections.NativeArray`1<UnityEngine.Rendering.VisibleLight>", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)cmd;
	params[1] = (intptr_t)&renderingData;
	params[2] = (intptr_t)&visibleLights;
	params[3] = (intptr_t)&mainLightIndex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::RenderStencilPointLights(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData, UnityEngine_CoreModule::Unity::Collections::NativeArray_1<UnityEngine_CoreModule::UnityEngine::Rendering::VisibleLight> visibleLights)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RenderStencilPointLights", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "UnityEngine.Rendering.Universal.RenderingData&", "Unity.Collections.NativeArray`1<UnityEngine.Rendering.VisibleLight>" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)cmd;
	params[1] = (intptr_t)&renderingData;
	params[2] = (intptr_t)&visibleLights;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::RenderStencilSpotLights(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData, UnityEngine_CoreModule::Unity::Collections::NativeArray_1<UnityEngine_CoreModule::UnityEngine::Rendering::VisibleLight> visibleLights)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RenderStencilSpotLights", std::vector<std::string> { "UnityEngine.Rendering.CommandBuffer", "UnityEngine.Rendering.Universal.RenderingData&", "Unity.Collections.NativeArray`1<UnityEngine.Rendering.VisibleLight>" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)cmd;
	params[1] = (intptr_t)&renderingData;
	params[2] = (intptr_t)&visibleLights;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::RenderFog(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RenderFog", std::vector<std::string> { "UnityEngine.Rendering.ScriptableRenderContext", "UnityEngine.Rendering.CommandBuffer", "UnityEngine.Rendering.Universal.RenderingData&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&context;
	params[1] = (intptr_t)cmd;
	params[2] = (intptr_t)&renderingData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::TrimLights(UnityEngine_CoreModule::Unity::Collections::NativeArray_1<mscorlib::System::UInt16>& trimmedLights, UnityEngine_CoreModule::Unity::Collections::NativeArray_1<mscorlib::System::UInt16>& tiles, int32_t offset, int32_t lightCount, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::BitArray& usedLights)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TrimLights", std::vector<std::string> { "Unity.Collections.NativeArray`1<System.UInt16>&", "Unity.Collections.NativeArray`1<System.UInt16>&", "System.Int32", "System.Int32", "UnityEngine.Rendering.Universal.Internal.BitArray&" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&trimmedLights;
	params[1] = (intptr_t)&tiles;
	params[2] = (intptr_t)&offset;
	params[3] = (intptr_t)&lightCount;
	params[4] = (intptr_t)&usedLights;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::StorePunctualLightData(UnityEngine_CoreModule::Unity::Collections::NativeArray_1<Unity_Mathematics::Unity::Mathematics::uint4>& punctualLightBuffer, int32_t storeIndex, UnityEngine_CoreModule::Unity::Collections::NativeArray_1<UnityEngine_CoreModule::UnityEngine::Rendering::VisibleLight>& visibleLights, int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StorePunctualLightData", std::vector<std::string> { "Unity.Collections.NativeArray`1<Unity.Mathematics.uint4>&", "System.Int32", "Unity.Collections.NativeArray`1<UnityEngine.Rendering.VisibleLight>&", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&punctualLightBuffer;
	params[1] = (intptr_t)&storeIndex;
	params[2] = (intptr_t)&visibleLights;
	params[3] = (intptr_t)&index;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::StoreTileData(UnityEngine_CoreModule::Unity::Collections::NativeArray_1<Unity_Mathematics::Unity::Mathematics::uint4>& tileList, int32_t storeIndex, uint32_t tileID, uint32_t listBitMask, uint16_t relLightOffset, uint16_t lightCount)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StoreTileData", std::vector<std::string> { "Unity.Collections.NativeArray`1<Unity.Mathematics.uint4>&", "System.Int32", "System.UInt32", "System.UInt32", "System.UInt16", "System.UInt16" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&tileList;
	params[1] = (intptr_t)&storeIndex;
	params[2] = (intptr_t)&tileID;
	params[3] = (intptr_t)&listBitMask;
	params[4] = (intptr_t)&relLightOffset;
	params[5] = (intptr_t)&lightCount;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::IsTileLight(UnityEngine_CoreModule::UnityEngine::Rendering::VisibleLight visibleLight)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsTileLight", std::vector<std::string> { "UnityEngine.Rendering.VisibleLight" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&visibleLight;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
UnityEngine_CoreModule::UnityEngine::Mesh* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::CreateSphereMesh()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateSphereMesh");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Mesh*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Mesh* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::CreateHemisphereMesh()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateHemisphereMesh");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Mesh*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Mesh* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::CreateFullscreenMesh()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateFullscreenMesh");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Mesh*)returnValue;
}
int32_t Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::Align(int32_t s, int32_t alignment)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Align", std::vector<std::string> { "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&s;
	params[1] = (intptr_t)&alignment;
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
uint32_t Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::PackTileID(uint32_t i, uint32_t j)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PackTileID", std::vector<std::string> { "System.UInt32", "System.UInt32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&i;
	params[1] = (intptr_t)&j;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
uint32_t Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::FloatToUInt(float val)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FloatToUInt", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&val;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
uint32_t Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::Half2ToUInt(float x, float y)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Half2ToUInt", std::vector<std::string> { "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&x;
	params[1] = (intptr_t)&y;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
