#include "UnityEngine_Rendering_CommandBuffer.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine.Rendering", "CommandBuffer");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::Internal_SetSinglePassStereo(UnityEngine_CoreModule::UnityEngine::Rendering::SinglePassStereoMode mode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_SetSinglePassStereo", std::vector<std::string> { "UnityEngine.Rendering.SinglePassStereoMode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&mode;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
intptr_t UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::InitBuffer()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitBuffer");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
intptr_t UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::CreateGPUFence_Internal(UnityEngine_CoreModule::UnityEngine::Rendering::GraphicsFenceType fenceType, UnityEngine_CoreModule::UnityEngine::Rendering::SynchronisationStageFlags stage)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateGPUFence_Internal", std::vector<std::string> { "UnityEngine.Rendering.GraphicsFenceType", "UnityEngine.Rendering.SynchronisationStageFlags" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&fenceType;
	params[1] = (intptr_t)&stage;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::WaitOnGPUFence_Internal(intptr_t fencePtr, UnityEngine_CoreModule::UnityEngine::Rendering::SynchronisationStageFlags stage)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WaitOnGPUFence_Internal", std::vector<std::string> { "System.IntPtr", "UnityEngine.Rendering.SynchronisationStageFlags" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&fencePtr;
	params[1] = (intptr_t)&stage;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::ReleaseBuffer()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReleaseBuffer");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::Internal_SetComputeTextureParam(UnityEngine_CoreModule::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier& rt, int32_t mipLevel, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTextureSubElement element)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_SetComputeTextureParam", std::vector<std::string> { "UnityEngine.ComputeShader", "System.Int32", "System.Int32", "UnityEngine.Rendering.RenderTargetIdentifier&", "System.Int32", "UnityEngine.Rendering.RenderTextureSubElement" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)computeShader;
	params[1] = (intptr_t)&kernelIndex;
	params[2] = (intptr_t)&nameID;
	params[3] = (intptr_t)&rt;
	params[4] = (intptr_t)&mipLevel;
	params[5] = (intptr_t)&element;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::Internal_SetComputeConstantComputeBufferParam(UnityEngine_CoreModule::UnityEngine::ComputeShader* computeShader, int32_t nameID, UnityEngine_CoreModule::UnityEngine::ComputeBuffer* buffer, int32_t offset, int32_t size)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_SetComputeConstantComputeBufferParam", std::vector<std::string> { "UnityEngine.ComputeShader", "System.Int32", "UnityEngine.ComputeBuffer", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)computeShader;
	params[1] = (intptr_t)&nameID;
	params[2] = (intptr_t)buffer;
	params[3] = (intptr_t)&offset;
	params[4] = (intptr_t)&size;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::Internal_DispatchCompute(UnityEngine_CoreModule::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t threadGroupsX, int32_t threadGroupsY, int32_t threadGroupsZ)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_DispatchCompute", std::vector<std::string> { "UnityEngine.ComputeShader", "System.Int32", "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)computeShader;
	params[1] = (intptr_t)&kernelIndex;
	params[2] = (intptr_t)&threadGroupsX;
	params[3] = (intptr_t)&threadGroupsY;
	params[4] = (intptr_t)&threadGroupsZ;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::set_name(mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_name", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::Clear()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Clear");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::Internal_DrawMesh(UnityEngine_CoreModule::UnityEngine::Mesh* mesh, UnityEngine_CoreModule::UnityEngine::Matrix4x4 matrix, UnityEngine_CoreModule::UnityEngine::Material* material, int32_t submeshIndex, int32_t shaderPass, UnityEngine_CoreModule::UnityEngine::MaterialPropertyBlock* properties)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_DrawMesh", std::vector<std::string> { "UnityEngine.Mesh", "UnityEngine.Matrix4x4", "UnityEngine.Material", "System.Int32", "System.Int32", "UnityEngine.MaterialPropertyBlock" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)mesh;
	params[1] = (intptr_t)&matrix;
	params[2] = (intptr_t)material;
	params[3] = (intptr_t)&submeshIndex;
	params[4] = (intptr_t)&shaderPass;
	params[5] = (intptr_t)properties;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::Internal_DrawRenderer(UnityEngine_CoreModule::UnityEngine::Renderer* renderer, UnityEngine_CoreModule::UnityEngine::Material* material, int32_t submeshIndex, int32_t shaderPass)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_DrawRenderer", std::vector<std::string> { "UnityEngine.Renderer", "UnityEngine.Material", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)renderer;
	params[1] = (intptr_t)material;
	params[2] = (intptr_t)&submeshIndex;
	params[3] = (intptr_t)&shaderPass;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::Internal_DrawProcedural(UnityEngine_CoreModule::UnityEngine::Matrix4x4 matrix, UnityEngine_CoreModule::UnityEngine::Material* material, int32_t shaderPass, UnityEngine_CoreModule::UnityEngine::MeshTopology topology, int32_t vertexCount, int32_t instanceCount, UnityEngine_CoreModule::UnityEngine::MaterialPropertyBlock* properties)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_DrawProcedural", std::vector<std::string> { "UnityEngine.Matrix4x4", "UnityEngine.Material", "System.Int32", "UnityEngine.MeshTopology", "System.Int32", "System.Int32", "UnityEngine.MaterialPropertyBlock" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&matrix;
	params[1] = (intptr_t)material;
	params[2] = (intptr_t)&shaderPass;
	params[3] = (intptr_t)&topology;
	params[4] = (intptr_t)&vertexCount;
	params[5] = (intptr_t)&instanceCount;
	params[6] = (intptr_t)properties;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::Internal_DrawOcclusionMesh(UnityEngine_CoreModule::UnityEngine::RectInt normalizedCamViewport)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_DrawOcclusionMesh", std::vector<std::string> { "UnityEngine.RectInt" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&normalizedCamViewport;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::SetViewport(UnityEngine_CoreModule::UnityEngine::Rect pixelRect)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetViewport", std::vector<std::string> { "UnityEngine.Rect" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&pixelRect;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::EnableScissorRect(UnityEngine_CoreModule::UnityEngine::Rect scissor)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EnableScissorRect", std::vector<std::string> { "UnityEngine.Rect" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&scissor;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::DisableScissorRect()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DisableScissorRect");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::Blit_Identifier(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier& source, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier& dest, UnityEngine_CoreModule::UnityEngine::Material* mat, int32_t pass, UnityEngine_CoreModule::UnityEngine::Vector2 scale, UnityEngine_CoreModule::UnityEngine::Vector2 offset, int32_t sourceDepthSlice, int32_t destDepthSlice)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Blit_Identifier", std::vector<std::string> { "UnityEngine.Rendering.RenderTargetIdentifier&", "UnityEngine.Rendering.RenderTargetIdentifier&", "UnityEngine.Material", "System.Int32", "UnityEngine.Vector2", "UnityEngine.Vector2", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)&source;
	params[1] = (intptr_t)&dest;
	params[2] = (intptr_t)mat;
	params[3] = (intptr_t)&pass;
	params[4] = (intptr_t)&scale;
	params[5] = (intptr_t)&offset;
	params[6] = (intptr_t)&sourceDepthSlice;
	params[7] = (intptr_t)&destDepthSlice;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::GetTemporaryRTWithDescriptor(int32_t nameID, UnityEngine_CoreModule::UnityEngine::RenderTextureDescriptor desc, UnityEngine_CoreModule::UnityEngine::FilterMode filter)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTemporaryRTWithDescriptor", std::vector<std::string> { "System.Int32", "UnityEngine.RenderTextureDescriptor", "UnityEngine.FilterMode" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&nameID;
	params[1] = (intptr_t)&desc;
	params[2] = (intptr_t)&filter;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::GetTemporaryRT(int32_t nameID, UnityEngine_CoreModule::UnityEngine::RenderTextureDescriptor desc, UnityEngine_CoreModule::UnityEngine::FilterMode filter)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTemporaryRT", std::vector<std::string> { "System.Int32", "UnityEngine.RenderTextureDescriptor", "UnityEngine.FilterMode" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&nameID;
	params[1] = (intptr_t)&desc;
	params[2] = (intptr_t)&filter;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::GetTemporaryRT(int32_t nameID, UnityEngine_CoreModule::UnityEngine::RenderTextureDescriptor desc)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTemporaryRT", std::vector<std::string> { "System.Int32", "UnityEngine.RenderTextureDescriptor" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&nameID;
	params[1] = (intptr_t)&desc;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::ReleaseTemporaryRT(int32_t nameID)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReleaseTemporaryRT", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&nameID;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::ClearRenderTarget(bool clearDepth, bool clearColor, UnityEngine_CoreModule::UnityEngine::Color backgroundColor, float depth)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearRenderTarget", std::vector<std::string> { "System.Boolean", "System.Boolean", "UnityEngine.Color", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&clearDepth;
	params[1] = (intptr_t)&clearColor;
	params[2] = (intptr_t)&backgroundColor;
	params[3] = (intptr_t)&depth;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::ClearRenderTarget(bool clearDepth, bool clearColor, UnityEngine_CoreModule::UnityEngine::Color backgroundColor)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearRenderTarget", std::vector<std::string> { "System.Boolean", "System.Boolean", "UnityEngine.Color" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&clearDepth;
	params[1] = (intptr_t)&clearColor;
	params[2] = (intptr_t)&backgroundColor;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::SetGlobalFloat(int32_t nameID, float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetGlobalFloat", std::vector<std::string> { "System.Int32", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&nameID;
	params[1] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::SetGlobalInt(int32_t nameID, int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetGlobalInt", std::vector<std::string> { "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&nameID;
	params[1] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::SetGlobalVector(int32_t nameID, UnityEngine_CoreModule::UnityEngine::Vector4 value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetGlobalVector", std::vector<std::string> { "System.Int32", "UnityEngine.Vector4" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&nameID;
	params[1] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::SetGlobalColor(int32_t nameID, UnityEngine_CoreModule::UnityEngine::Color value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetGlobalColor", std::vector<std::string> { "System.Int32", "UnityEngine.Color" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&nameID;
	params[1] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::SetGlobalMatrix(int32_t nameID, UnityEngine_CoreModule::UnityEngine::Matrix4x4 value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetGlobalMatrix", std::vector<std::string> { "System.Int32", "UnityEngine.Matrix4x4" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&nameID;
	params[1] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::EnableShaderKeyword(mscorlib::System::String* keyword)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EnableShaderKeyword", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)keyword;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::DisableShaderKeyword(mscorlib::System::String* keyword)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DisableShaderKeyword", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)keyword;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::SetViewProjectionMatrices(UnityEngine_CoreModule::UnityEngine::Matrix4x4 view, UnityEngine_CoreModule::UnityEngine::Matrix4x4 proj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetViewProjectionMatrices", std::vector<std::string> { "UnityEngine.Matrix4x4", "UnityEngine.Matrix4x4" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&view;
	params[1] = (intptr_t)&proj;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::SetExecutionFlags(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBufferExecutionFlags flags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetExecutionFlags", std::vector<std::string> { "UnityEngine.Rendering.CommandBufferExecutionFlags" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&flags;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::ValidateAgainstExecutionFlags(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBufferExecutionFlags requiredFlags, UnityEngine_CoreModule::UnityEngine::Rendering::CommandBufferExecutionFlags invalidFlags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ValidateAgainstExecutionFlags", std::vector<std::string> { "UnityEngine.Rendering.CommandBufferExecutionFlags", "UnityEngine.Rendering.CommandBufferExecutionFlags" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&requiredFlags;
	params[1] = (intptr_t)&invalidFlags;
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
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::SetGlobalVectorArray(int32_t nameID, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector4>* values)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetGlobalVectorArray", std::vector<std::string> { "System.Int32", "UnityEngine.Vector4[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&nameID;
	params[1] = (intptr_t)values;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::SetGlobalMatrixArray(int32_t nameID, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Matrix4x4>* values)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetGlobalMatrixArray", std::vector<std::string> { "System.Int32", "UnityEngine.Matrix4x4[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&nameID;
	params[1] = (intptr_t)values;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::SetGlobalTexture_Impl(int32_t nameID, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier& rt, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTextureSubElement element)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetGlobalTexture_Impl", std::vector<std::string> { "System.Int32", "UnityEngine.Rendering.RenderTargetIdentifier&", "UnityEngine.Rendering.RenderTextureSubElement" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&nameID;
	params[1] = (intptr_t)&rt;
	params[2] = (intptr_t)&element;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::SetGlobalBufferInternal(int32_t nameID, UnityEngine_CoreModule::UnityEngine::ComputeBuffer* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetGlobalBufferInternal", std::vector<std::string> { "System.Int32", "UnityEngine.ComputeBuffer" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&nameID;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::BeginSample(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BeginSample", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::EndSample(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EndSample", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::BeginSample(UnityEngine_CoreModule::UnityEngine::Profiling::CustomSampler* sampler)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BeginSample", std::vector<std::string> { "UnityEngine.Profiling.CustomSampler" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)sampler;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::EndSample(UnityEngine_CoreModule::UnityEngine::Profiling::CustomSampler* sampler)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EndSample", std::vector<std::string> { "UnityEngine.Profiling.CustomSampler" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)sampler;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::BeginSample_CustomSampler(UnityEngine_CoreModule::UnityEngine::Profiling::CustomSampler* sampler)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BeginSample_CustomSampler", std::vector<std::string> { "UnityEngine.Profiling.CustomSampler" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)sampler;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::EndSample_CustomSampler(UnityEngine_CoreModule::UnityEngine::Profiling::CustomSampler* sampler)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EndSample_CustomSampler", std::vector<std::string> { "UnityEngine.Profiling.CustomSampler" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)sampler;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::SetGlobalConstantBufferInternal(UnityEngine_CoreModule::UnityEngine::ComputeBuffer* buffer, int32_t nameID, int32_t offset, int32_t size)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetGlobalConstantBufferInternal", std::vector<std::string> { "UnityEngine.ComputeBuffer", "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)buffer;
	params[1] = (intptr_t)&nameID;
	params[2] = (intptr_t)&offset;
	params[3] = (intptr_t)&size;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::SetInstanceMultiplier(uint32_t multiplier)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetInstanceMultiplier", std::vector<std::string> { "System.UInt32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&multiplier;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::SetRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier rt)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetRenderTarget", std::vector<std::string> { "UnityEngine.Rendering.RenderTargetIdentifier" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&rt;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::SetRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier rt, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferLoadAction loadAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferStoreAction storeAction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetRenderTarget", std::vector<std::string> { "UnityEngine.Rendering.RenderTargetIdentifier", "UnityEngine.Rendering.RenderBufferLoadAction", "UnityEngine.Rendering.RenderBufferStoreAction" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&rt;
	params[1] = (intptr_t)&loadAction;
	params[2] = (intptr_t)&storeAction;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::SetRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier rt, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetRenderTarget", std::vector<std::string> { "UnityEngine.Rendering.RenderTargetIdentifier", "UnityEngine.Rendering.RenderBufferLoadAction", "UnityEngine.Rendering.RenderBufferStoreAction", "UnityEngine.Rendering.RenderBufferLoadAction", "UnityEngine.Rendering.RenderBufferStoreAction" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&rt;
	params[1] = (intptr_t)&colorLoadAction;
	params[2] = (intptr_t)&colorStoreAction;
	params[3] = (intptr_t)&depthLoadAction;
	params[4] = (intptr_t)&depthStoreAction;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::SetRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier rt, int32_t mipLevel, UnityEngine_CoreModule::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetRenderTarget", std::vector<std::string> { "UnityEngine.Rendering.RenderTargetIdentifier", "System.Int32", "UnityEngine.CubemapFace", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&rt;
	params[1] = (intptr_t)&mipLevel;
	params[2] = (intptr_t)&cubemapFace;
	params[3] = (intptr_t)&depthSlice;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::SetRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier color, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier depth)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetRenderTarget", std::vector<std::string> { "UnityEngine.Rendering.RenderTargetIdentifier", "UnityEngine.Rendering.RenderTargetIdentifier" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&color;
	params[1] = (intptr_t)&depth;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::SetRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier color, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier depth, int32_t mipLevel, UnityEngine_CoreModule::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetRenderTarget", std::vector<std::string> { "UnityEngine.Rendering.RenderTargetIdentifier", "UnityEngine.Rendering.RenderTargetIdentifier", "System.Int32", "UnityEngine.CubemapFace", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&color;
	params[1] = (intptr_t)&depth;
	params[2] = (intptr_t)&mipLevel;
	params[3] = (intptr_t)&cubemapFace;
	params[4] = (intptr_t)&depthSlice;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::SetRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier color, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier depth, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetRenderTarget", std::vector<std::string> { "UnityEngine.Rendering.RenderTargetIdentifier", "UnityEngine.Rendering.RenderBufferLoadAction", "UnityEngine.Rendering.RenderBufferStoreAction", "UnityEngine.Rendering.RenderTargetIdentifier", "UnityEngine.Rendering.RenderBufferLoadAction", "UnityEngine.Rendering.RenderBufferStoreAction" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&color;
	params[1] = (intptr_t)&colorLoadAction;
	params[2] = (intptr_t)&colorStoreAction;
	params[3] = (intptr_t)&depth;
	params[4] = (intptr_t)&depthLoadAction;
	params[5] = (intptr_t)&depthStoreAction;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::SetRenderTarget(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier>* colors, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier depth, int32_t mipLevel, UnityEngine_CoreModule::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetRenderTarget", std::vector<std::string> { "UnityEngine.Rendering.RenderTargetIdentifier[]", "UnityEngine.Rendering.RenderTargetIdentifier", "System.Int32", "UnityEngine.CubemapFace", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)colors;
	params[1] = (intptr_t)&depth;
	params[2] = (intptr_t)&mipLevel;
	params[3] = (intptr_t)&cubemapFace;
	params[4] = (intptr_t)&depthSlice;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::SetRenderTargetSingle_Internal(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier rt, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetRenderTargetSingle_Internal", std::vector<std::string> { "UnityEngine.Rendering.RenderTargetIdentifier", "UnityEngine.Rendering.RenderBufferLoadAction", "UnityEngine.Rendering.RenderBufferStoreAction", "UnityEngine.Rendering.RenderBufferLoadAction", "UnityEngine.Rendering.RenderBufferStoreAction" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&rt;
	params[1] = (intptr_t)&colorLoadAction;
	params[2] = (intptr_t)&colorStoreAction;
	params[3] = (intptr_t)&depthLoadAction;
	params[4] = (intptr_t)&depthStoreAction;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::SetRenderTargetColorDepth_Internal(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier color, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier depth, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetFlags flags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetRenderTargetColorDepth_Internal", std::vector<std::string> { "UnityEngine.Rendering.RenderTargetIdentifier", "UnityEngine.Rendering.RenderTargetIdentifier", "UnityEngine.Rendering.RenderBufferLoadAction", "UnityEngine.Rendering.RenderBufferStoreAction", "UnityEngine.Rendering.RenderBufferLoadAction", "UnityEngine.Rendering.RenderBufferStoreAction", "UnityEngine.Rendering.RenderTargetFlags" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&color;
	params[1] = (intptr_t)&depth;
	params[2] = (intptr_t)&colorLoadAction;
	params[3] = (intptr_t)&colorStoreAction;
	params[4] = (intptr_t)&depthLoadAction;
	params[5] = (intptr_t)&depthStoreAction;
	params[6] = (intptr_t)&flags;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::SetRenderTargetMultiSubtarget(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier>* colors, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier depth, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferLoadAction>* colorLoadActions, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferStoreAction>* colorStoreActions, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, int32_t mipLevel, UnityEngine_CoreModule::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetRenderTargetMultiSubtarget", std::vector<std::string> { "UnityEngine.Rendering.RenderTargetIdentifier[]", "UnityEngine.Rendering.RenderTargetIdentifier", "UnityEngine.Rendering.RenderBufferLoadAction[]", "UnityEngine.Rendering.RenderBufferStoreAction[]", "UnityEngine.Rendering.RenderBufferLoadAction", "UnityEngine.Rendering.RenderBufferStoreAction", "System.Int32", "UnityEngine.CubemapFace", "System.Int32" });
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)colors;
	params[1] = (intptr_t)&depth;
	params[2] = (intptr_t)colorLoadActions;
	params[3] = (intptr_t)colorStoreActions;
	params[4] = (intptr_t)&depthLoadAction;
	params[5] = (intptr_t)&depthStoreAction;
	params[6] = (intptr_t)&mipLevel;
	params[7] = (intptr_t)&cubemapFace;
	params[8] = (intptr_t)&depthSlice;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::SetComputeBufferData(UnityEngine_CoreModule::UnityEngine::ComputeBuffer* buffer, mscorlib::System::Array* data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetComputeBufferData", std::vector<std::string> { "UnityEngine.ComputeBuffer", "System.Array" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)buffer;
	params[1] = (intptr_t)data;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::InternalSetComputeBufferData(UnityEngine_CoreModule::UnityEngine::ComputeBuffer* buffer, mscorlib::System::Array* data, int32_t managedBufferStartIndex, int32_t graphicsBufferStartIndex, int32_t count, int32_t elemSize)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalSetComputeBufferData", std::vector<std::string> { "UnityEngine.ComputeBuffer", "System.Array", "System.Int32", "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)buffer;
	params[1] = (intptr_t)data;
	params[2] = (intptr_t)&managedBufferStartIndex;
	params[3] = (intptr_t)&graphicsBufferStartIndex;
	params[4] = (intptr_t)&count;
	params[5] = (intptr_t)&elemSize;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::Finalize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Finalize");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::Dispose()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dispose");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::Dispose(bool disposing)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dispose", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&disposing;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Rendering::GraphicsFence UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::CreateAsyncGraphicsFence()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateAsyncGraphicsFence");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Rendering::GraphicsFence ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Rendering::GraphicsFence));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Rendering::GraphicsFence>(*(UnityEngine_CoreModule::UnityEngine::Rendering::GraphicsFence*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Rendering::GraphicsFence UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::CreateGraphicsFence(UnityEngine_CoreModule::UnityEngine::Rendering::GraphicsFenceType fenceType, UnityEngine_CoreModule::UnityEngine::Rendering::SynchronisationStageFlags stage)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateGraphicsFence", std::vector<std::string> { "UnityEngine.Rendering.GraphicsFenceType", "UnityEngine.Rendering.SynchronisationStageFlags" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&fenceType;
	params[1] = (intptr_t)&stage;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Rendering::GraphicsFence ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Rendering::GraphicsFence));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Rendering::GraphicsFence>(*(UnityEngine_CoreModule::UnityEngine::Rendering::GraphicsFence*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::WaitOnAsyncGraphicsFence(UnityEngine_CoreModule::UnityEngine::Rendering::GraphicsFence fence)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WaitOnAsyncGraphicsFence", std::vector<std::string> { "UnityEngine.Rendering.GraphicsFence" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&fence;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::WaitOnAsyncGraphicsFence(UnityEngine_CoreModule::UnityEngine::Rendering::GraphicsFence fence, UnityEngine_CoreModule::UnityEngine::Rendering::SynchronisationStage stage)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WaitOnAsyncGraphicsFence", std::vector<std::string> { "UnityEngine.Rendering.GraphicsFence", "UnityEngine.Rendering.SynchronisationStage" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&fence;
	params[1] = (intptr_t)&stage;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::WaitOnAsyncGraphicsFence(UnityEngine_CoreModule::UnityEngine::Rendering::GraphicsFence fence, UnityEngine_CoreModule::UnityEngine::Rendering::SynchronisationStageFlags stage)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WaitOnAsyncGraphicsFence", std::vector<std::string> { "UnityEngine.Rendering.GraphicsFence", "UnityEngine.Rendering.SynchronisationStageFlags" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&fence;
	params[1] = (intptr_t)&stage;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::SetComputeTextureParam(UnityEngine_CoreModule::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, mscorlib::System::String* name, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier rt)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetComputeTextureParam", std::vector<std::string> { "UnityEngine.ComputeShader", "System.Int32", "System.String", "UnityEngine.Rendering.RenderTargetIdentifier" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)computeShader;
	params[1] = (intptr_t)&kernelIndex;
	params[2] = (intptr_t)name;
	params[3] = (intptr_t)&rt;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::SetComputeConstantBufferParam(UnityEngine_CoreModule::UnityEngine::ComputeShader* computeShader, int32_t nameID, UnityEngine_CoreModule::UnityEngine::ComputeBuffer* buffer, int32_t offset, int32_t size)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetComputeConstantBufferParam", std::vector<std::string> { "UnityEngine.ComputeShader", "System.Int32", "UnityEngine.ComputeBuffer", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)computeShader;
	params[1] = (intptr_t)&nameID;
	params[2] = (intptr_t)buffer;
	params[3] = (intptr_t)&offset;
	params[4] = (intptr_t)&size;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::DispatchCompute(UnityEngine_CoreModule::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t threadGroupsX, int32_t threadGroupsY, int32_t threadGroupsZ)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DispatchCompute", std::vector<std::string> { "UnityEngine.ComputeShader", "System.Int32", "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)computeShader;
	params[1] = (intptr_t)&kernelIndex;
	params[2] = (intptr_t)&threadGroupsX;
	params[3] = (intptr_t)&threadGroupsY;
	params[4] = (intptr_t)&threadGroupsZ;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::DrawMesh(UnityEngine_CoreModule::UnityEngine::Mesh* mesh, UnityEngine_CoreModule::UnityEngine::Matrix4x4 matrix, UnityEngine_CoreModule::UnityEngine::Material* material, int32_t submeshIndex, int32_t shaderPass, UnityEngine_CoreModule::UnityEngine::MaterialPropertyBlock* properties)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawMesh", std::vector<std::string> { "UnityEngine.Mesh", "UnityEngine.Matrix4x4", "UnityEngine.Material", "System.Int32", "System.Int32", "UnityEngine.MaterialPropertyBlock" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)mesh;
	params[1] = (intptr_t)&matrix;
	params[2] = (intptr_t)material;
	params[3] = (intptr_t)&submeshIndex;
	params[4] = (intptr_t)&shaderPass;
	params[5] = (intptr_t)properties;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::DrawMesh(UnityEngine_CoreModule::UnityEngine::Mesh* mesh, UnityEngine_CoreModule::UnityEngine::Matrix4x4 matrix, UnityEngine_CoreModule::UnityEngine::Material* material, int32_t submeshIndex, int32_t shaderPass)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawMesh", std::vector<std::string> { "UnityEngine.Mesh", "UnityEngine.Matrix4x4", "UnityEngine.Material", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)mesh;
	params[1] = (intptr_t)&matrix;
	params[2] = (intptr_t)material;
	params[3] = (intptr_t)&submeshIndex;
	params[4] = (intptr_t)&shaderPass;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::DrawMesh(UnityEngine_CoreModule::UnityEngine::Mesh* mesh, UnityEngine_CoreModule::UnityEngine::Matrix4x4 matrix, UnityEngine_CoreModule::UnityEngine::Material* material, int32_t submeshIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawMesh", std::vector<std::string> { "UnityEngine.Mesh", "UnityEngine.Matrix4x4", "UnityEngine.Material", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)mesh;
	params[1] = (intptr_t)&matrix;
	params[2] = (intptr_t)material;
	params[3] = (intptr_t)&submeshIndex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::DrawMesh(UnityEngine_CoreModule::UnityEngine::Mesh* mesh, UnityEngine_CoreModule::UnityEngine::Matrix4x4 matrix, UnityEngine_CoreModule::UnityEngine::Material* material)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawMesh", std::vector<std::string> { "UnityEngine.Mesh", "UnityEngine.Matrix4x4", "UnityEngine.Material" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)mesh;
	params[1] = (intptr_t)&matrix;
	params[2] = (intptr_t)material;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::DrawRenderer(UnityEngine_CoreModule::UnityEngine::Renderer* renderer, UnityEngine_CoreModule::UnityEngine::Material* material, int32_t submeshIndex, int32_t shaderPass)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawRenderer", std::vector<std::string> { "UnityEngine.Renderer", "UnityEngine.Material", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)renderer;
	params[1] = (intptr_t)material;
	params[2] = (intptr_t)&submeshIndex;
	params[3] = (intptr_t)&shaderPass;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::DrawRenderer(UnityEngine_CoreModule::UnityEngine::Renderer* renderer, UnityEngine_CoreModule::UnityEngine::Material* material, int32_t submeshIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawRenderer", std::vector<std::string> { "UnityEngine.Renderer", "UnityEngine.Material", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)renderer;
	params[1] = (intptr_t)material;
	params[2] = (intptr_t)&submeshIndex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::DrawRenderer(UnityEngine_CoreModule::UnityEngine::Renderer* renderer, UnityEngine_CoreModule::UnityEngine::Material* material)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawRenderer", std::vector<std::string> { "UnityEngine.Renderer", "UnityEngine.Material" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)renderer;
	params[1] = (intptr_t)material;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::DrawProcedural(UnityEngine_CoreModule::UnityEngine::Matrix4x4 matrix, UnityEngine_CoreModule::UnityEngine::Material* material, int32_t shaderPass, UnityEngine_CoreModule::UnityEngine::MeshTopology topology, int32_t vertexCount, int32_t instanceCount, UnityEngine_CoreModule::UnityEngine::MaterialPropertyBlock* properties)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawProcedural", std::vector<std::string> { "UnityEngine.Matrix4x4", "UnityEngine.Material", "System.Int32", "UnityEngine.MeshTopology", "System.Int32", "System.Int32", "UnityEngine.MaterialPropertyBlock" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&matrix;
	params[1] = (intptr_t)material;
	params[2] = (intptr_t)&shaderPass;
	params[3] = (intptr_t)&topology;
	params[4] = (intptr_t)&vertexCount;
	params[5] = (intptr_t)&instanceCount;
	params[6] = (intptr_t)properties;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::DrawProcedural(UnityEngine_CoreModule::UnityEngine::Matrix4x4 matrix, UnityEngine_CoreModule::UnityEngine::Material* material, int32_t shaderPass, UnityEngine_CoreModule::UnityEngine::MeshTopology topology, int32_t vertexCount, int32_t instanceCount)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawProcedural", std::vector<std::string> { "UnityEngine.Matrix4x4", "UnityEngine.Material", "System.Int32", "UnityEngine.MeshTopology", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&matrix;
	params[1] = (intptr_t)material;
	params[2] = (intptr_t)&shaderPass;
	params[3] = (intptr_t)&topology;
	params[4] = (intptr_t)&vertexCount;
	params[5] = (intptr_t)&instanceCount;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::DrawProcedural(UnityEngine_CoreModule::UnityEngine::Matrix4x4 matrix, UnityEngine_CoreModule::UnityEngine::Material* material, int32_t shaderPass, UnityEngine_CoreModule::UnityEngine::MeshTopology topology, int32_t vertexCount)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawProcedural", std::vector<std::string> { "UnityEngine.Matrix4x4", "UnityEngine.Material", "System.Int32", "UnityEngine.MeshTopology", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&matrix;
	params[1] = (intptr_t)material;
	params[2] = (intptr_t)&shaderPass;
	params[3] = (intptr_t)&topology;
	params[4] = (intptr_t)&vertexCount;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::DrawOcclusionMesh(UnityEngine_CoreModule::UnityEngine::RectInt normalizedCamViewport)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrawOcclusionMesh", std::vector<std::string> { "UnityEngine.RectInt" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&normalizedCamViewport;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::Blit(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier source, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier dest, UnityEngine_CoreModule::UnityEngine::Material* mat)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Blit", std::vector<std::string> { "UnityEngine.Rendering.RenderTargetIdentifier", "UnityEngine.Rendering.RenderTargetIdentifier", "UnityEngine.Material" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&source;
	params[1] = (intptr_t)&dest;
	params[2] = (intptr_t)mat;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::Blit(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier source, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier dest, UnityEngine_CoreModule::UnityEngine::Material* mat, int32_t pass)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Blit", std::vector<std::string> { "UnityEngine.Rendering.RenderTargetIdentifier", "UnityEngine.Rendering.RenderTargetIdentifier", "UnityEngine.Material", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&source;
	params[1] = (intptr_t)&dest;
	params[2] = (intptr_t)mat;
	params[3] = (intptr_t)&pass;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::SetGlobalVector(mscorlib::System::String* name, UnityEngine_CoreModule::UnityEngine::Vector4 value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetGlobalVector", std::vector<std::string> { "System.String", "UnityEngine.Vector4" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::SetGlobalVectorArray(mscorlib::System::String* propertyName, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector4>* values)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetGlobalVectorArray", std::vector<std::string> { "System.String", "UnityEngine.Vector4[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)propertyName;
	params[1] = (intptr_t)values;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::SetGlobalTexture(mscorlib::System::String* name, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetGlobalTexture", std::vector<std::string> { "System.String", "UnityEngine.Rendering.RenderTargetIdentifier" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::SetGlobalTexture(int32_t nameID, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetGlobalTexture", std::vector<std::string> { "System.Int32", "UnityEngine.Rendering.RenderTargetIdentifier" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&nameID;
	params[1] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::SetGlobalTexture(int32_t nameID, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier value, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTextureSubElement element)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetGlobalTexture", std::vector<std::string> { "System.Int32", "UnityEngine.Rendering.RenderTargetIdentifier", "UnityEngine.Rendering.RenderTextureSubElement" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&nameID;
	params[1] = (intptr_t)&value;
	params[2] = (intptr_t)&element;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::SetGlobalBuffer(int32_t nameID, UnityEngine_CoreModule::UnityEngine::ComputeBuffer* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetGlobalBuffer", std::vector<std::string> { "System.Int32", "UnityEngine.ComputeBuffer" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&nameID;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::SetGlobalConstantBuffer(UnityEngine_CoreModule::UnityEngine::ComputeBuffer* buffer, int32_t nameID, int32_t offset, int32_t size)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetGlobalConstantBuffer", std::vector<std::string> { "UnityEngine.ComputeBuffer", "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)buffer;
	params[1] = (intptr_t)&nameID;
	params[2] = (intptr_t)&offset;
	params[3] = (intptr_t)&size;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::SetSinglePassStereo(UnityEngine_CoreModule::UnityEngine::Rendering::SinglePassStereoMode mode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetSinglePassStereo", std::vector<std::string> { "UnityEngine.Rendering.SinglePassStereoMode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&mode;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::Internal_DrawMesh_Injected(UnityEngine_CoreModule::UnityEngine::Mesh* mesh, UnityEngine_CoreModule::UnityEngine::Matrix4x4& matrix, UnityEngine_CoreModule::UnityEngine::Material* material, int32_t submeshIndex, int32_t shaderPass, UnityEngine_CoreModule::UnityEngine::MaterialPropertyBlock* properties)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_DrawMesh_Injected", std::vector<std::string> { "UnityEngine.Mesh", "UnityEngine.Matrix4x4&", "UnityEngine.Material", "System.Int32", "System.Int32", "UnityEngine.MaterialPropertyBlock" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)mesh;
	params[1] = (intptr_t)&matrix;
	params[2] = (intptr_t)material;
	params[3] = (intptr_t)&submeshIndex;
	params[4] = (intptr_t)&shaderPass;
	params[5] = (intptr_t)properties;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::Internal_DrawProcedural_Injected(UnityEngine_CoreModule::UnityEngine::Matrix4x4& matrix, UnityEngine_CoreModule::UnityEngine::Material* material, int32_t shaderPass, UnityEngine_CoreModule::UnityEngine::MeshTopology topology, int32_t vertexCount, int32_t instanceCount, UnityEngine_CoreModule::UnityEngine::MaterialPropertyBlock* properties)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_DrawProcedural_Injected", std::vector<std::string> { "UnityEngine.Matrix4x4&", "UnityEngine.Material", "System.Int32", "UnityEngine.MeshTopology", "System.Int32", "System.Int32", "UnityEngine.MaterialPropertyBlock" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&matrix;
	params[1] = (intptr_t)material;
	params[2] = (intptr_t)&shaderPass;
	params[3] = (intptr_t)&topology;
	params[4] = (intptr_t)&vertexCount;
	params[5] = (intptr_t)&instanceCount;
	params[6] = (intptr_t)properties;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::Internal_DrawOcclusionMesh_Injected(UnityEngine_CoreModule::UnityEngine::RectInt& normalizedCamViewport)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_DrawOcclusionMesh_Injected", std::vector<std::string> { "UnityEngine.RectInt&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&normalizedCamViewport;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::SetViewport_Injected(UnityEngine_CoreModule::UnityEngine::Rect& pixelRect)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetViewport_Injected", std::vector<std::string> { "UnityEngine.Rect&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&pixelRect;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::EnableScissorRect_Injected(UnityEngine_CoreModule::UnityEngine::Rect& scissor)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EnableScissorRect_Injected", std::vector<std::string> { "UnityEngine.Rect&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&scissor;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::Blit_Identifier_Injected(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier& source, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier& dest, UnityEngine_CoreModule::UnityEngine::Material* mat, int32_t pass, UnityEngine_CoreModule::UnityEngine::Vector2& scale, UnityEngine_CoreModule::UnityEngine::Vector2& offset, int32_t sourceDepthSlice, int32_t destDepthSlice)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Blit_Identifier_Injected", std::vector<std::string> { "UnityEngine.Rendering.RenderTargetIdentifier&", "UnityEngine.Rendering.RenderTargetIdentifier&", "UnityEngine.Material", "System.Int32", "UnityEngine.Vector2&", "UnityEngine.Vector2&", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)&source;
	params[1] = (intptr_t)&dest;
	params[2] = (intptr_t)mat;
	params[3] = (intptr_t)&pass;
	params[4] = (intptr_t)&scale;
	params[5] = (intptr_t)&offset;
	params[6] = (intptr_t)&sourceDepthSlice;
	params[7] = (intptr_t)&destDepthSlice;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::GetTemporaryRTWithDescriptor_Injected(int32_t nameID, UnityEngine_CoreModule::UnityEngine::RenderTextureDescriptor& desc, UnityEngine_CoreModule::UnityEngine::FilterMode filter)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTemporaryRTWithDescriptor_Injected", std::vector<std::string> { "System.Int32", "UnityEngine.RenderTextureDescriptor&", "UnityEngine.FilterMode" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&nameID;
	params[1] = (intptr_t)&desc;
	params[2] = (intptr_t)&filter;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::ClearRenderTarget_Injected(bool clearDepth, bool clearColor, UnityEngine_CoreModule::UnityEngine::Color& backgroundColor, float depth)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearRenderTarget_Injected", std::vector<std::string> { "System.Boolean", "System.Boolean", "UnityEngine.Color&", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&clearDepth;
	params[1] = (intptr_t)&clearColor;
	params[2] = (intptr_t)&backgroundColor;
	params[3] = (intptr_t)&depth;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::SetGlobalVector_Injected(int32_t nameID, UnityEngine_CoreModule::UnityEngine::Vector4& value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetGlobalVector_Injected", std::vector<std::string> { "System.Int32", "UnityEngine.Vector4&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&nameID;
	params[1] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::SetGlobalColor_Injected(int32_t nameID, UnityEngine_CoreModule::UnityEngine::Color& value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetGlobalColor_Injected", std::vector<std::string> { "System.Int32", "UnityEngine.Color&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&nameID;
	params[1] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::SetGlobalMatrix_Injected(int32_t nameID, UnityEngine_CoreModule::UnityEngine::Matrix4x4& value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetGlobalMatrix_Injected", std::vector<std::string> { "System.Int32", "UnityEngine.Matrix4x4&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&nameID;
	params[1] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::SetViewProjectionMatrices_Injected(UnityEngine_CoreModule::UnityEngine::Matrix4x4& view, UnityEngine_CoreModule::UnityEngine::Matrix4x4& proj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetViewProjectionMatrices_Injected", std::vector<std::string> { "UnityEngine.Matrix4x4&", "UnityEngine.Matrix4x4&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&view;
	params[1] = (intptr_t)&proj;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::SetRenderTargetSingle_Internal_Injected(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier& rt, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetRenderTargetSingle_Internal_Injected", std::vector<std::string> { "UnityEngine.Rendering.RenderTargetIdentifier&", "UnityEngine.Rendering.RenderBufferLoadAction", "UnityEngine.Rendering.RenderBufferStoreAction", "UnityEngine.Rendering.RenderBufferLoadAction", "UnityEngine.Rendering.RenderBufferStoreAction" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&rt;
	params[1] = (intptr_t)&colorLoadAction;
	params[2] = (intptr_t)&colorStoreAction;
	params[3] = (intptr_t)&depthLoadAction;
	params[4] = (intptr_t)&depthStoreAction;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::SetRenderTargetColorDepth_Internal_Injected(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier& color, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier& depth, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetFlags flags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetRenderTargetColorDepth_Internal_Injected", std::vector<std::string> { "UnityEngine.Rendering.RenderTargetIdentifier&", "UnityEngine.Rendering.RenderTargetIdentifier&", "UnityEngine.Rendering.RenderBufferLoadAction", "UnityEngine.Rendering.RenderBufferStoreAction", "UnityEngine.Rendering.RenderBufferLoadAction", "UnityEngine.Rendering.RenderBufferStoreAction", "UnityEngine.Rendering.RenderTargetFlags" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&color;
	params[1] = (intptr_t)&depth;
	params[2] = (intptr_t)&colorLoadAction;
	params[3] = (intptr_t)&colorStoreAction;
	params[4] = (intptr_t)&depthLoadAction;
	params[5] = (intptr_t)&depthStoreAction;
	params[6] = (intptr_t)&flags;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer::SetRenderTargetMultiSubtarget_Injected(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier>* colors, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier& depth, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferLoadAction>* colorLoadActions, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferStoreAction>* colorStoreActions, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, int32_t mipLevel, UnityEngine_CoreModule::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetRenderTargetMultiSubtarget_Injected", std::vector<std::string> { "UnityEngine.Rendering.RenderTargetIdentifier[]", "UnityEngine.Rendering.RenderTargetIdentifier&", "UnityEngine.Rendering.RenderBufferLoadAction[]", "UnityEngine.Rendering.RenderBufferStoreAction[]", "UnityEngine.Rendering.RenderBufferLoadAction", "UnityEngine.Rendering.RenderBufferStoreAction", "System.Int32", "UnityEngine.CubemapFace", "System.Int32" });
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)colors;
	params[1] = (intptr_t)&depth;
	params[2] = (intptr_t)colorLoadActions;
	params[3] = (intptr_t)colorStoreActions;
	params[4] = (intptr_t)&depthLoadAction;
	params[5] = (intptr_t)&depthStoreAction;
	params[6] = (intptr_t)&mipLevel;
	params[7] = (intptr_t)&cubemapFace;
	params[8] = (intptr_t)&depthSlice;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
