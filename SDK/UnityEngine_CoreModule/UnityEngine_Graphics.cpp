#include "UnityEngine_Graphics.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::Graphics::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine", "Graphics");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::Graphics::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
int32_t UnityEngine_CoreModule::UnityEngine::Graphics::Internal_GetMaxDrawMeshInstanceCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_GetMaxDrawMeshInstanceCount");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Rendering::GraphicsTier UnityEngine_CoreModule::UnityEngine::Graphics::get_activeTier()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_activeTier");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Rendering::GraphicsTier ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Rendering::GraphicsTier));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Rendering::GraphicsTier>(*(UnityEngine_CoreModule::UnityEngine::Rendering::GraphicsTier*)il2cpp_object_unbox(returnValue));
}
bool UnityEngine_CoreModule::UnityEngine::Graphics::GetPreserveFramebufferAlpha()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPreserveFramebufferAlpha");
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
bool UnityEngine_CoreModule::UnityEngine::Graphics::get_preserveFramebufferAlpha()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_preserveFramebufferAlpha");
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
UnityEngine_CoreModule::UnityEngine::Rendering::OpenGLESVersion UnityEngine_CoreModule::UnityEngine::Graphics::GetMinOpenGLESVersion()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMinOpenGLESVersion");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Rendering::OpenGLESVersion ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Rendering::OpenGLESVersion));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Rendering::OpenGLESVersion>(*(UnityEngine_CoreModule::UnityEngine::Rendering::OpenGLESVersion*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Rendering::OpenGLESVersion UnityEngine_CoreModule::UnityEngine::Graphics::get_minOpenGLESVersion()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_minOpenGLESVersion");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Rendering::OpenGLESVersion ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Rendering::OpenGLESVersion));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Rendering::OpenGLESVersion>(*(UnityEngine_CoreModule::UnityEngine::Rendering::OpenGLESVersion*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_CoreModule::UnityEngine::Graphics::Internal_SetNullRT()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_SetNullRT");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Graphics::Internal_SetRTSimple(UnityEngine_CoreModule::UnityEngine::RenderBuffer color, UnityEngine_CoreModule::UnityEngine::RenderBuffer depth, int32_t mip, UnityEngine_CoreModule::UnityEngine::CubemapFace face, int32_t depthSlice)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_SetRTSimple", std::vector<std::string> { "UnityEngine.RenderBuffer", "UnityEngine.RenderBuffer", "System.Int32", "UnityEngine.CubemapFace", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&color;
	params[1] = (intptr_t)&depth;
	params[2] = (intptr_t)&mip;
	params[3] = (intptr_t)&face;
	params[4] = (intptr_t)&depthSlice;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Graphics::Internal_SetRandomWriteTargetBuffer(int32_t index, UnityEngine_CoreModule::UnityEngine::ComputeBuffer* uav, bool preserveCounterValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_SetRandomWriteTargetBuffer", std::vector<std::string> { "System.Int32", "UnityEngine.ComputeBuffer", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&index;
	params[1] = (intptr_t)uav;
	params[2] = (intptr_t)&preserveCounterValue;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Graphics::ClearRandomWriteTargets()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearRandomWriteTargets");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Graphics::CopyTexture_Slice(UnityEngine_CoreModule::UnityEngine::Texture* src, int32_t srcElement, int32_t srcMip, UnityEngine_CoreModule::UnityEngine::Texture* dst, int32_t dstElement, int32_t dstMip)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CopyTexture_Slice", std::vector<std::string> { "UnityEngine.Texture", "System.Int32", "System.Int32", "UnityEngine.Texture", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)src;
	params[1] = (intptr_t)&srcElement;
	params[2] = (intptr_t)&srcMip;
	params[3] = (intptr_t)dst;
	params[4] = (intptr_t)&dstElement;
	params[5] = (intptr_t)&dstMip;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Graphics::Internal_DrawMeshNow2(UnityEngine_CoreModule::UnityEngine::Mesh* mesh, int32_t subsetIndex, UnityEngine_CoreModule::UnityEngine::Matrix4x4 matrix)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_DrawMeshNow2", std::vector<std::string> { "UnityEngine.Mesh", "System.Int32", "UnityEngine.Matrix4x4" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)mesh;
	params[1] = (intptr_t)&subsetIndex;
	params[2] = (intptr_t)&matrix;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Graphics::Internal_DrawTexture(UnityEngine_CoreModule::UnityEngine::Internal_DrawTextureArguments& args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_DrawTexture", std::vector<std::string> { "UnityEngine.Internal_DrawTextureArguments&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&args;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Graphics::Internal_DrawMeshInstanced(UnityEngine_CoreModule::UnityEngine::Mesh* mesh, int32_t submeshIndex, UnityEngine_CoreModule::UnityEngine::Material* material, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Matrix4x4>* matrices, int32_t count, UnityEngine_CoreModule::UnityEngine::MaterialPropertyBlock* properties, UnityEngine_CoreModule::UnityEngine::Rendering::ShadowCastingMode castShadows, bool receiveShadows, int32_t layer, UnityEngine_CoreModule::UnityEngine::Camera* camera, UnityEngine_CoreModule::UnityEngine::Rendering::LightProbeUsage lightProbeUsage, UnityEngine_CoreModule::UnityEngine::LightProbeProxyVolume* lightProbeProxyVolume)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_DrawMeshInstanced", std::vector<std::string> { "UnityEngine.Mesh", "System.Int32", "UnityEngine.Material", "UnityEngine.Matrix4x4[]", "System.Int32", "UnityEngine.MaterialPropertyBlock", "UnityEngine.Rendering.ShadowCastingMode", "System.Boolean", "System.Int32", "UnityEngine.Camera", "UnityEngine.Rendering.LightProbeUsage", "UnityEngine.LightProbeProxyVolume" });
	intptr_t* params = new intptr_t[12];
	params[0] = (intptr_t)mesh;
	params[1] = (intptr_t)&submeshIndex;
	params[2] = (intptr_t)material;
	params[3] = (intptr_t)matrices;
	params[4] = (intptr_t)&count;
	params[5] = (intptr_t)properties;
	params[6] = (intptr_t)&castShadows;
	params[7] = (intptr_t)&receiveShadows;
	params[8] = (intptr_t)&layer;
	params[9] = (intptr_t)camera;
	params[10] = (intptr_t)&lightProbeUsage;
	params[11] = (intptr_t)lightProbeProxyVolume;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Graphics::Internal_DrawProceduralIndirectNow(UnityEngine_CoreModule::UnityEngine::MeshTopology topology, UnityEngine_CoreModule::UnityEngine::ComputeBuffer* bufferWithArgs, int32_t argsOffset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_DrawProceduralIndirectNow", std::vector<std::string> { "UnityEngine.MeshTopology", "UnityEngine.ComputeBuffer", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&topology;
	params[1] = (intptr_t)bufferWithArgs;
	params[2] = (intptr_t)&argsOffset;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Graphics::Internal_BlitMaterial5(UnityEngine_CoreModule::UnityEngine::Texture* source, UnityEngine_CoreModule::UnityEngine::RenderTexture* dest, UnityEngine_CoreModule::UnityEngine::Material* mat, int32_t pass, bool setRT)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_BlitMaterial5", std::vector<std::string> { "UnityEngine.Texture", "UnityEngine.RenderTexture", "UnityEngine.Material", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)source;
	params[1] = (intptr_t)dest;
	params[2] = (intptr_t)mat;
	params[3] = (intptr_t)&pass;
	params[4] = (intptr_t)&setRT;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Graphics::Internal_BlitMultiTap4(UnityEngine_CoreModule::UnityEngine::Texture* source, UnityEngine_CoreModule::UnityEngine::RenderTexture* dest, UnityEngine_CoreModule::UnityEngine::Material* mat, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector2>* offsets)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_BlitMultiTap4", std::vector<std::string> { "UnityEngine.Texture", "UnityEngine.RenderTexture", "UnityEngine.Material", "UnityEngine.Vector2[]" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)source;
	params[1] = (intptr_t)dest;
	params[2] = (intptr_t)mat;
	params[3] = (intptr_t)offsets;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Graphics::Blit2(UnityEngine_CoreModule::UnityEngine::Texture* source, UnityEngine_CoreModule::UnityEngine::RenderTexture* dest)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Blit2", std::vector<std::string> { "UnityEngine.Texture", "UnityEngine.RenderTexture" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)source;
	params[1] = (intptr_t)dest;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Graphics::SetRenderTargetImpl(UnityEngine_CoreModule::UnityEngine::RenderBuffer colorBuffer, UnityEngine_CoreModule::UnityEngine::RenderBuffer depthBuffer, int32_t mipLevel, UnityEngine_CoreModule::UnityEngine::CubemapFace face, int32_t depthSlice)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetRenderTargetImpl", std::vector<std::string> { "UnityEngine.RenderBuffer", "UnityEngine.RenderBuffer", "System.Int32", "UnityEngine.CubemapFace", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&colorBuffer;
	params[1] = (intptr_t)&depthBuffer;
	params[2] = (intptr_t)&mipLevel;
	params[3] = (intptr_t)&face;
	params[4] = (intptr_t)&depthSlice;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Graphics::SetRenderTargetImpl(UnityEngine_CoreModule::UnityEngine::RenderTexture* rt, int32_t mipLevel, UnityEngine_CoreModule::UnityEngine::CubemapFace face, int32_t depthSlice)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetRenderTargetImpl", std::vector<std::string> { "UnityEngine.RenderTexture", "System.Int32", "UnityEngine.CubemapFace", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)rt;
	params[1] = (intptr_t)&mipLevel;
	params[2] = (intptr_t)&face;
	params[3] = (intptr_t)&depthSlice;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Graphics::SetRenderTarget(UnityEngine_CoreModule::UnityEngine::RenderTexture* rt, int32_t mipLevel, UnityEngine_CoreModule::UnityEngine::CubemapFace face, int32_t depthSlice)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetRenderTarget", std::vector<std::string> { "UnityEngine.RenderTexture", "System.Int32", "UnityEngine.CubemapFace", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)rt;
	params[1] = (intptr_t)&mipLevel;
	params[2] = (intptr_t)&face;
	params[3] = (intptr_t)&depthSlice;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Graphics::SetRandomWriteTarget(int32_t index, UnityEngine_CoreModule::UnityEngine::ComputeBuffer* uav, bool preserveCounterValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetRandomWriteTarget", std::vector<std::string> { "System.Int32", "UnityEngine.ComputeBuffer", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&index;
	params[1] = (intptr_t)uav;
	params[2] = (intptr_t)&preserveCounterValue;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Graphics::CopyTexture(UnityEngine_CoreModule::UnityEngine::Texture* src, int32_t srcElement, int32_t srcMip, UnityEngine_CoreModule::UnityEngine::Texture* dst, int32_t dstElement, int32_t dstMip)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CopyTexture", std::vector<std::string> { "UnityEngine.Texture", "System.Int32", "System.Int32", "UnityEngine.Texture", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)src;
	params[1] = (intptr_t)&srcElement;
	params[2] = (intptr_t)&srcMip;
	params[3] = (intptr_t)dst;
	params[4] = (intptr_t)&dstElement;
	params[5] = (intptr_t)&dstMip;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Graphics::DrawMeshNow(UnityEngine_CoreModule::UnityEngine::Mesh* mesh, UnityEngine_CoreModule::UnityEngine::Matrix4x4 matrix, int32_t materialIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawMeshNow", std::vector<std::string> { "UnityEngine.Mesh", "UnityEngine.Matrix4x4", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)mesh;
	params[1] = (intptr_t)&matrix;
	params[2] = (intptr_t)&materialIndex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Graphics::DrawMeshNow(UnityEngine_CoreModule::UnityEngine::Mesh* mesh, UnityEngine_CoreModule::UnityEngine::Matrix4x4 matrix)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawMeshNow", std::vector<std::string> { "UnityEngine.Mesh", "UnityEngine.Matrix4x4" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)mesh;
	params[1] = (intptr_t)&matrix;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Graphics::DrawMeshInstanced(UnityEngine_CoreModule::UnityEngine::Mesh* mesh, int32_t submeshIndex, UnityEngine_CoreModule::UnityEngine::Material* material, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Matrix4x4>* matrices, int32_t count, UnityEngine_CoreModule::UnityEngine::MaterialPropertyBlock* properties, UnityEngine_CoreModule::UnityEngine::Rendering::ShadowCastingMode castShadows, bool receiveShadows, int32_t layer, UnityEngine_CoreModule::UnityEngine::Camera* camera, UnityEngine_CoreModule::UnityEngine::Rendering::LightProbeUsage lightProbeUsage, UnityEngine_CoreModule::UnityEngine::LightProbeProxyVolume* lightProbeProxyVolume)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawMeshInstanced", std::vector<std::string> { "UnityEngine.Mesh", "System.Int32", "UnityEngine.Material", "UnityEngine.Matrix4x4[]", "System.Int32", "UnityEngine.MaterialPropertyBlock", "UnityEngine.Rendering.ShadowCastingMode", "System.Boolean", "System.Int32", "UnityEngine.Camera", "UnityEngine.Rendering.LightProbeUsage", "UnityEngine.LightProbeProxyVolume" });
	intptr_t* params = new intptr_t[12];
	params[0] = (intptr_t)mesh;
	params[1] = (intptr_t)&submeshIndex;
	params[2] = (intptr_t)material;
	params[3] = (intptr_t)matrices;
	params[4] = (intptr_t)&count;
	params[5] = (intptr_t)properties;
	params[6] = (intptr_t)&castShadows;
	params[7] = (intptr_t)&receiveShadows;
	params[8] = (intptr_t)&layer;
	params[9] = (intptr_t)camera;
	params[10] = (intptr_t)&lightProbeUsage;
	params[11] = (intptr_t)lightProbeProxyVolume;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Graphics::DrawProceduralIndirectNow(UnityEngine_CoreModule::UnityEngine::MeshTopology topology, UnityEngine_CoreModule::UnityEngine::ComputeBuffer* bufferWithArgs, int32_t argsOffset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawProceduralIndirectNow", std::vector<std::string> { "UnityEngine.MeshTopology", "UnityEngine.ComputeBuffer", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&topology;
	params[1] = (intptr_t)bufferWithArgs;
	params[2] = (intptr_t)&argsOffset;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Graphics::Blit(UnityEngine_CoreModule::UnityEngine::Texture* source, UnityEngine_CoreModule::UnityEngine::RenderTexture* dest)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Blit", std::vector<std::string> { "UnityEngine.Texture", "UnityEngine.RenderTexture" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)source;
	params[1] = (intptr_t)dest;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Graphics::Blit(UnityEngine_CoreModule::UnityEngine::Texture* source, UnityEngine_CoreModule::UnityEngine::RenderTexture* dest, UnityEngine_CoreModule::UnityEngine::Material* mat, int32_t pass)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Blit", std::vector<std::string> { "UnityEngine.Texture", "UnityEngine.RenderTexture", "UnityEngine.Material", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)source;
	params[1] = (intptr_t)dest;
	params[2] = (intptr_t)mat;
	params[3] = (intptr_t)&pass;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Graphics::Blit(UnityEngine_CoreModule::UnityEngine::Texture* source, UnityEngine_CoreModule::UnityEngine::RenderTexture* dest, UnityEngine_CoreModule::UnityEngine::Material* mat)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Blit", std::vector<std::string> { "UnityEngine.Texture", "UnityEngine.RenderTexture", "UnityEngine.Material" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)source;
	params[1] = (intptr_t)dest;
	params[2] = (intptr_t)mat;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Graphics::Blit(UnityEngine_CoreModule::UnityEngine::Texture* source, UnityEngine_CoreModule::UnityEngine::Material* mat, int32_t pass)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Blit", std::vector<std::string> { "UnityEngine.Texture", "UnityEngine.Material", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)source;
	params[1] = (intptr_t)mat;
	params[2] = (intptr_t)&pass;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Graphics::Blit(UnityEngine_CoreModule::UnityEngine::Texture* source, UnityEngine_CoreModule::UnityEngine::Material* mat)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Blit", std::vector<std::string> { "UnityEngine.Texture", "UnityEngine.Material" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)source;
	params[1] = (intptr_t)mat;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Graphics::BlitMultiTap(UnityEngine_CoreModule::UnityEngine::Texture* source, UnityEngine_CoreModule::UnityEngine::RenderTexture* dest, UnityEngine_CoreModule::UnityEngine::Material* mat, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector2>* offsets)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BlitMultiTap", std::vector<std::string> { "UnityEngine.Texture", "UnityEngine.RenderTexture", "UnityEngine.Material", "UnityEngine.Vector2[]" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)source;
	params[1] = (intptr_t)dest;
	params[2] = (intptr_t)mat;
	params[3] = (intptr_t)offsets;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Graphics::DrawMeshInstanced(UnityEngine_CoreModule::UnityEngine::Mesh* mesh, int32_t submeshIndex, UnityEngine_CoreModule::UnityEngine::Material* material, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Matrix4x4>* matrices, int32_t count, UnityEngine_CoreModule::UnityEngine::MaterialPropertyBlock* properties, UnityEngine_CoreModule::UnityEngine::Rendering::ShadowCastingMode castShadows, bool receiveShadows, int32_t layer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawMeshInstanced", std::vector<std::string> { "UnityEngine.Mesh", "System.Int32", "UnityEngine.Material", "UnityEngine.Matrix4x4[]", "System.Int32", "UnityEngine.MaterialPropertyBlock", "UnityEngine.Rendering.ShadowCastingMode", "System.Boolean", "System.Int32" });
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)mesh;
	params[1] = (intptr_t)&submeshIndex;
	params[2] = (intptr_t)material;
	params[3] = (intptr_t)matrices;
	params[4] = (intptr_t)&count;
	params[5] = (intptr_t)properties;
	params[6] = (intptr_t)&castShadows;
	params[7] = (intptr_t)&receiveShadows;
	params[8] = (intptr_t)&layer;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Graphics::SetRenderTarget(UnityEngine_CoreModule::UnityEngine::RenderTexture* rt)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetRenderTarget", std::vector<std::string> { "UnityEngine.RenderTexture" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)rt;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Graphics::SetRandomWriteTarget(int32_t index, UnityEngine_CoreModule::UnityEngine::ComputeBuffer* uav)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetRandomWriteTarget", std::vector<std::string> { "System.Int32", "UnityEngine.ComputeBuffer" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&index;
	params[1] = (intptr_t)uav;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Graphics::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Graphics::Internal_SetRTSimple_Injected(UnityEngine_CoreModule::UnityEngine::RenderBuffer& color, UnityEngine_CoreModule::UnityEngine::RenderBuffer& depth, int32_t mip, UnityEngine_CoreModule::UnityEngine::CubemapFace face, int32_t depthSlice)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_SetRTSimple_Injected", std::vector<std::string> { "UnityEngine.RenderBuffer&", "UnityEngine.RenderBuffer&", "System.Int32", "UnityEngine.CubemapFace", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&color;
	params[1] = (intptr_t)&depth;
	params[2] = (intptr_t)&mip;
	params[3] = (intptr_t)&face;
	params[4] = (intptr_t)&depthSlice;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Graphics::Internal_DrawMeshNow2_Injected(UnityEngine_CoreModule::UnityEngine::Mesh* mesh, int32_t subsetIndex, UnityEngine_CoreModule::UnityEngine::Matrix4x4& matrix)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_DrawMeshNow2_Injected", std::vector<std::string> { "UnityEngine.Mesh", "System.Int32", "UnityEngine.Matrix4x4&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)mesh;
	params[1] = (intptr_t)&subsetIndex;
	params[2] = (intptr_t)&matrix;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
