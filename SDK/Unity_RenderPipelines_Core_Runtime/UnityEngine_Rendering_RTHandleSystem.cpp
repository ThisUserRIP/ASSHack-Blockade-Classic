#include "UnityEngine_Rendering_RTHandleSystem.h"

IL2CPP::Il2CppClass* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandleSystem::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.RenderPipelines.Core.Runtime.dll", "UnityEngine.Rendering", "RTHandleSystem");
	return il2cppclass;
}
mscorlib::System::Type* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandleSystem::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandleProperties Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandleSystem::get_rtHandleProperties()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_rtHandleProperties");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandleProperties ret;
		std::memset(&ret, 0, sizeof(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandleProperties));
		return ret;
	}
	return static_cast<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandleProperties>(*(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandleProperties*)il2cpp_object_unbox(returnValue));
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandleSystem::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandleSystem::Dispose()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dispose");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandleSystem::Initialize(int32_t width, int32_t height, bool scaledRTsupportsMSAA, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MSAASamples scaledRTMSAASamples)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Initialize", std::vector<std::string> { "System.Int32", "System.Int32", "System.Boolean", "UnityEngine.Rendering.MSAASamples" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&width;
	params[1] = (intptr_t)&height;
	params[2] = (intptr_t)&scaledRTsupportsMSAA;
	params[3] = (intptr_t)&scaledRTMSAASamples;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandleSystem::Release(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* rth)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Release", std::vector<std::string> { "UnityEngine.Rendering.RTHandle" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)rth;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandleSystem::Remove(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* rth)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Remove", std::vector<std::string> { "UnityEngine.Rendering.RTHandle" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)rth;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandleSystem::ResetReferenceSize(int32_t width, int32_t height)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ResetReferenceSize", std::vector<std::string> { "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&width;
	params[1] = (intptr_t)&height;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandleSystem::SetReferenceSize(int32_t width, int32_t height, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MSAASamples msaaSamples)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetReferenceSize", std::vector<std::string> { "System.Int32", "System.Int32", "UnityEngine.Rendering.MSAASamples" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&width;
	params[1] = (intptr_t)&height;
	params[2] = (intptr_t)&msaaSamples;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandleSystem::SetReferenceSize(int32_t width, int32_t height, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MSAASamples msaaSamples, bool reset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetReferenceSize", std::vector<std::string> { "System.Int32", "System.Int32", "UnityEngine.Rendering.MSAASamples", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&width;
	params[1] = (intptr_t)&height;
	params[2] = (intptr_t)&msaaSamples;
	params[3] = (intptr_t)&reset;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandleSystem::SetHardwareDynamicResolutionState(bool enableHWDynamicRes)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetHardwareDynamicResolutionState", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&enableHWDynamicRes;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandleSystem::SwitchResizeMode(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* rth, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandleSystem_ResizeMode mode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SwitchResizeMode", std::vector<std::string> { "UnityEngine.Rendering.RTHandle", "UnityEngine.Rendering.RTHandleSystem/ResizeMode" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)rth;
	params[1] = (intptr_t)&mode;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandleSystem::DemandResize(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* rth)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DemandResize", std::vector<std::string> { "UnityEngine.Rendering.RTHandle" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)rth;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandleSystem::GetMaxWidth()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMaxWidth");
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
int32_t Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandleSystem::GetMaxHeight()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMaxHeight");
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
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandleSystem::Dispose(bool disposing)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dispose", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&disposing;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandleSystem::Resize(int32_t width, int32_t height, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MSAASamples msaaSamples, bool sizeChanged, bool msaaSampleChanged)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Resize", std::vector<std::string> { "System.Int32", "System.Int32", "UnityEngine.Rendering.MSAASamples", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&width;
	params[1] = (intptr_t)&height;
	params[2] = (intptr_t)&msaaSamples;
	params[3] = (intptr_t)&sizeChanged;
	params[4] = (intptr_t)&msaaSampleChanged;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandleSystem::Alloc(int32_t width, int32_t height, int32_t slices, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DepthBits depthBufferBits, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, UnityEngine_CoreModule::UnityEngine::FilterMode filterMode, UnityEngine_CoreModule::UnityEngine::TextureWrapMode wrapMode, UnityEngine_CoreModule::UnityEngine::Rendering::TextureDimension dimension, bool enableRandomWrite, bool useMipMap, bool autoGenerateMips, bool isShadowMap, int32_t anisoLevel, float mipMapBias, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MSAASamples msaaSamples, bool bindTextureMS, bool useDynamicScale, UnityEngine_CoreModule::UnityEngine::RenderTextureMemoryless memoryless, mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Alloc", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "UnityEngine.Rendering.DepthBits", "UnityEngine.Experimental.Rendering.GraphicsFormat", "UnityEngine.FilterMode", "UnityEngine.TextureWrapMode", "UnityEngine.Rendering.TextureDimension", "System.Boolean", "System.Boolean", "System.Boolean", "System.Boolean", "System.Int32", "System.Single", "UnityEngine.Rendering.MSAASamples", "System.Boolean", "System.Boolean", "UnityEngine.RenderTextureMemoryless", "System.String" });
	intptr_t* params = new intptr_t[19];
	params[0] = (intptr_t)&width;
	params[1] = (intptr_t)&height;
	params[2] = (intptr_t)&slices;
	params[3] = (intptr_t)&depthBufferBits;
	params[4] = (intptr_t)&colorFormat;
	params[5] = (intptr_t)&filterMode;
	params[6] = (intptr_t)&wrapMode;
	params[7] = (intptr_t)&dimension;
	params[8] = (intptr_t)&enableRandomWrite;
	params[9] = (intptr_t)&useMipMap;
	params[10] = (intptr_t)&autoGenerateMips;
	params[11] = (intptr_t)&isShadowMap;
	params[12] = (intptr_t)&anisoLevel;
	params[13] = (intptr_t)&mipMapBias;
	params[14] = (intptr_t)&msaaSamples;
	params[15] = (intptr_t)&bindTextureMS;
	params[16] = (intptr_t)&useDynamicScale;
	params[17] = (intptr_t)&memoryless;
	params[18] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle*)returnValue;
}
Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandleSystem::Alloc(UnityEngine_CoreModule::UnityEngine::Vector2 scaleFactor, int32_t slices, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DepthBits depthBufferBits, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, UnityEngine_CoreModule::UnityEngine::FilterMode filterMode, UnityEngine_CoreModule::UnityEngine::TextureWrapMode wrapMode, UnityEngine_CoreModule::UnityEngine::Rendering::TextureDimension dimension, bool enableRandomWrite, bool useMipMap, bool autoGenerateMips, bool isShadowMap, int32_t anisoLevel, float mipMapBias, bool enableMSAA, bool bindTextureMS, bool useDynamicScale, UnityEngine_CoreModule::UnityEngine::RenderTextureMemoryless memoryless, mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Alloc", std::vector<std::string> { "UnityEngine.Vector2", "System.Int32", "UnityEngine.Rendering.DepthBits", "UnityEngine.Experimental.Rendering.GraphicsFormat", "UnityEngine.FilterMode", "UnityEngine.TextureWrapMode", "UnityEngine.Rendering.TextureDimension", "System.Boolean", "System.Boolean", "System.Boolean", "System.Boolean", "System.Int32", "System.Single", "System.Boolean", "System.Boolean", "System.Boolean", "UnityEngine.RenderTextureMemoryless", "System.String" });
	intptr_t* params = new intptr_t[18];
	params[0] = (intptr_t)&scaleFactor;
	params[1] = (intptr_t)&slices;
	params[2] = (intptr_t)&depthBufferBits;
	params[3] = (intptr_t)&colorFormat;
	params[4] = (intptr_t)&filterMode;
	params[5] = (intptr_t)&wrapMode;
	params[6] = (intptr_t)&dimension;
	params[7] = (intptr_t)&enableRandomWrite;
	params[8] = (intptr_t)&useMipMap;
	params[9] = (intptr_t)&autoGenerateMips;
	params[10] = (intptr_t)&isShadowMap;
	params[11] = (intptr_t)&anisoLevel;
	params[12] = (intptr_t)&mipMapBias;
	params[13] = (intptr_t)&enableMSAA;
	params[14] = (intptr_t)&bindTextureMS;
	params[15] = (intptr_t)&useDynamicScale;
	params[16] = (intptr_t)&memoryless;
	params[17] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle*)returnValue;
}
Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandleSystem::Alloc(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ScaleFunc* scaleFunc, int32_t slices, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DepthBits depthBufferBits, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, UnityEngine_CoreModule::UnityEngine::FilterMode filterMode, UnityEngine_CoreModule::UnityEngine::TextureWrapMode wrapMode, UnityEngine_CoreModule::UnityEngine::Rendering::TextureDimension dimension, bool enableRandomWrite, bool useMipMap, bool autoGenerateMips, bool isShadowMap, int32_t anisoLevel, float mipMapBias, bool enableMSAA, bool bindTextureMS, bool useDynamicScale, UnityEngine_CoreModule::UnityEngine::RenderTextureMemoryless memoryless, mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Alloc", std::vector<std::string> { "UnityEngine.Rendering.ScaleFunc", "System.Int32", "UnityEngine.Rendering.DepthBits", "UnityEngine.Experimental.Rendering.GraphicsFormat", "UnityEngine.FilterMode", "UnityEngine.TextureWrapMode", "UnityEngine.Rendering.TextureDimension", "System.Boolean", "System.Boolean", "System.Boolean", "System.Boolean", "System.Int32", "System.Single", "System.Boolean", "System.Boolean", "System.Boolean", "UnityEngine.RenderTextureMemoryless", "System.String" });
	intptr_t* params = new intptr_t[18];
	params[0] = (intptr_t)scaleFunc;
	params[1] = (intptr_t)&slices;
	params[2] = (intptr_t)&depthBufferBits;
	params[3] = (intptr_t)&colorFormat;
	params[4] = (intptr_t)&filterMode;
	params[5] = (intptr_t)&wrapMode;
	params[6] = (intptr_t)&dimension;
	params[7] = (intptr_t)&enableRandomWrite;
	params[8] = (intptr_t)&useMipMap;
	params[9] = (intptr_t)&autoGenerateMips;
	params[10] = (intptr_t)&isShadowMap;
	params[11] = (intptr_t)&anisoLevel;
	params[12] = (intptr_t)&mipMapBias;
	params[13] = (intptr_t)&enableMSAA;
	params[14] = (intptr_t)&bindTextureMS;
	params[15] = (intptr_t)&useDynamicScale;
	params[16] = (intptr_t)&memoryless;
	params[17] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle*)returnValue;
}
Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandleSystem::AllocAutoSizedRenderTexture(int32_t width, int32_t height, int32_t slices, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DepthBits depthBufferBits, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, UnityEngine_CoreModule::UnityEngine::FilterMode filterMode, UnityEngine_CoreModule::UnityEngine::TextureWrapMode wrapMode, UnityEngine_CoreModule::UnityEngine::Rendering::TextureDimension dimension, bool enableRandomWrite, bool useMipMap, bool autoGenerateMips, bool isShadowMap, int32_t anisoLevel, float mipMapBias, bool enableMSAA, bool bindTextureMS, bool useDynamicScale, UnityEngine_CoreModule::UnityEngine::RenderTextureMemoryless memoryless, mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AllocAutoSizedRenderTexture", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "UnityEngine.Rendering.DepthBits", "UnityEngine.Experimental.Rendering.GraphicsFormat", "UnityEngine.FilterMode", "UnityEngine.TextureWrapMode", "UnityEngine.Rendering.TextureDimension", "System.Boolean", "System.Boolean", "System.Boolean", "System.Boolean", "System.Int32", "System.Single", "System.Boolean", "System.Boolean", "System.Boolean", "UnityEngine.RenderTextureMemoryless", "System.String" });
	intptr_t* params = new intptr_t[19];
	params[0] = (intptr_t)&width;
	params[1] = (intptr_t)&height;
	params[2] = (intptr_t)&slices;
	params[3] = (intptr_t)&depthBufferBits;
	params[4] = (intptr_t)&colorFormat;
	params[5] = (intptr_t)&filterMode;
	params[6] = (intptr_t)&wrapMode;
	params[7] = (intptr_t)&dimension;
	params[8] = (intptr_t)&enableRandomWrite;
	params[9] = (intptr_t)&useMipMap;
	params[10] = (intptr_t)&autoGenerateMips;
	params[11] = (intptr_t)&isShadowMap;
	params[12] = (intptr_t)&anisoLevel;
	params[13] = (intptr_t)&mipMapBias;
	params[14] = (intptr_t)&enableMSAA;
	params[15] = (intptr_t)&bindTextureMS;
	params[16] = (intptr_t)&useDynamicScale;
	params[17] = (intptr_t)&memoryless;
	params[18] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle*)returnValue;
}
Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandleSystem::Alloc(UnityEngine_CoreModule::UnityEngine::RenderTexture* texture)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Alloc", std::vector<std::string> { "UnityEngine.RenderTexture" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)texture;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle*)returnValue;
}
Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandleSystem::Alloc(UnityEngine_CoreModule::UnityEngine::Texture* texture)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Alloc", std::vector<std::string> { "UnityEngine.Texture" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)texture;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle*)returnValue;
}
Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandleSystem::Alloc(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier texture)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Alloc", std::vector<std::string> { "UnityEngine.Rendering.RenderTargetIdentifier" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&texture;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle*)returnValue;
}
Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandleSystem::Alloc(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier texture, mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Alloc", std::vector<std::string> { "UnityEngine.Rendering.RenderTargetIdentifier", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&texture;
	params[1] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle*)returnValue;
}
Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandleSystem::Alloc(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* tex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Alloc", std::vector<std::string> { "UnityEngine.Rendering.RTHandle" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)tex;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle*)returnValue;
}
mscorlib::System::String* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandleSystem::DumpRTInfo()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DumpRTInfo");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
