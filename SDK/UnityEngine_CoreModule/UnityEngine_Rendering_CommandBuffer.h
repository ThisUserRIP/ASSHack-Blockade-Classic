#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_Rendering_SinglePassStereoMode.h"
#include "UnityEngine_Rendering_GraphicsFenceType.h"
#include "UnityEngine_Rendering_SynchronisationStageFlags.h"
namespace UnityEngine_CoreModule::UnityEngine { struct ComputeShader; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct RenderTargetIdentifier; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct RenderTargetIdentifier; };
#include "UnityEngine_Rendering_RenderTextureSubElement.h"
namespace UnityEngine_CoreModule::UnityEngine { struct ComputeBuffer; };
namespace mscorlib::System { struct String; };
namespace UnityEngine_CoreModule::UnityEngine { struct Mesh; };
#include "UnityEngine_Matrix4x4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Matrix4x4; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
namespace UnityEngine_CoreModule::UnityEngine { struct MaterialPropertyBlock; };
namespace UnityEngine_CoreModule::UnityEngine { struct Renderer; };
#include "UnityEngine_MeshTopology.h"
#include "UnityEngine_RectInt.h"
namespace UnityEngine_CoreModule::UnityEngine { struct RectInt; };
#include "UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
#include "UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "UnityEngine_RenderTextureDescriptor.h"
namespace UnityEngine_CoreModule::UnityEngine { struct RenderTextureDescriptor; };
#include "UnityEngine_FilterMode.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "UnityEngine_Vector4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector4; };
#include "UnityEngine_Rendering_CommandBufferExecutionFlags.h"
namespace UnityEngine_CoreModule::UnityEngine::Profiling { struct CustomSampler; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "UnityEngine_Rendering_RenderTargetIdentifier.h"
#include "UnityEngine_Rendering_RenderBufferLoadAction.h"
#include "UnityEngine_Rendering_RenderBufferStoreAction.h"
#include "UnityEngine_CubemapFace.h"
#include "UnityEngine_Rendering_RenderTargetFlags.h"
namespace mscorlib::System { struct Array; };
#include "UnityEngine_Rendering_GraphicsFence.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct GraphicsFence; };
#include "UnityEngine_Rendering_SynchronisationStage.h"

namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	struct CommandBuffer : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t m_Ptr;
		void Internal_SetSinglePassStereo(UnityEngine_CoreModule::UnityEngine::Rendering::SinglePassStereoMode mode);
		static intptr_t InitBuffer();
		intptr_t CreateGPUFence_Internal(UnityEngine_CoreModule::UnityEngine::Rendering::GraphicsFenceType fenceType, UnityEngine_CoreModule::UnityEngine::Rendering::SynchronisationStageFlags stage);
		void WaitOnGPUFence_Internal(intptr_t fencePtr, UnityEngine_CoreModule::UnityEngine::Rendering::SynchronisationStageFlags stage);
		void ReleaseBuffer();
		void Internal_SetComputeTextureParam(UnityEngine_CoreModule::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier& rt, int32_t mipLevel, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTextureSubElement element);
		void Internal_SetComputeConstantComputeBufferParam(UnityEngine_CoreModule::UnityEngine::ComputeShader* computeShader, int32_t nameID, UnityEngine_CoreModule::UnityEngine::ComputeBuffer* buffer, int32_t offset, int32_t size);
		void Internal_DispatchCompute(UnityEngine_CoreModule::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t threadGroupsX, int32_t threadGroupsY, int32_t threadGroupsZ);
		void set_name(mscorlib::System::String* value);
		void Clear();
		void Internal_DrawMesh(UnityEngine_CoreModule::UnityEngine::Mesh* mesh, UnityEngine_CoreModule::UnityEngine::Matrix4x4 matrix, UnityEngine_CoreModule::UnityEngine::Material* material, int32_t submeshIndex, int32_t shaderPass, UnityEngine_CoreModule::UnityEngine::MaterialPropertyBlock* properties);
		void Internal_DrawRenderer(UnityEngine_CoreModule::UnityEngine::Renderer* renderer, UnityEngine_CoreModule::UnityEngine::Material* material, int32_t submeshIndex, int32_t shaderPass);
		void Internal_DrawProcedural(UnityEngine_CoreModule::UnityEngine::Matrix4x4 matrix, UnityEngine_CoreModule::UnityEngine::Material* material, int32_t shaderPass, UnityEngine_CoreModule::UnityEngine::MeshTopology topology, int32_t vertexCount, int32_t instanceCount, UnityEngine_CoreModule::UnityEngine::MaterialPropertyBlock* properties);
		void Internal_DrawOcclusionMesh(UnityEngine_CoreModule::UnityEngine::RectInt normalizedCamViewport);
		void SetViewport(UnityEngine_CoreModule::UnityEngine::Rect pixelRect);
		void EnableScissorRect(UnityEngine_CoreModule::UnityEngine::Rect scissor);
		void DisableScissorRect();
		void Blit_Identifier(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier& source, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier& dest, UnityEngine_CoreModule::UnityEngine::Material* mat, int32_t pass, UnityEngine_CoreModule::UnityEngine::Vector2 scale, UnityEngine_CoreModule::UnityEngine::Vector2 offset, int32_t sourceDepthSlice, int32_t destDepthSlice);
		void GetTemporaryRTWithDescriptor(int32_t nameID, UnityEngine_CoreModule::UnityEngine::RenderTextureDescriptor desc, UnityEngine_CoreModule::UnityEngine::FilterMode filter);
		void GetTemporaryRT(int32_t nameID, UnityEngine_CoreModule::UnityEngine::RenderTextureDescriptor desc, UnityEngine_CoreModule::UnityEngine::FilterMode filter);
		void GetTemporaryRT(int32_t nameID, UnityEngine_CoreModule::UnityEngine::RenderTextureDescriptor desc);
		void ReleaseTemporaryRT(int32_t nameID);
		void ClearRenderTarget(bool clearDepth, bool clearColor, UnityEngine_CoreModule::UnityEngine::Color backgroundColor, float depth);
		void ClearRenderTarget(bool clearDepth, bool clearColor, UnityEngine_CoreModule::UnityEngine::Color backgroundColor);
		void SetGlobalFloat(int32_t nameID, float value);
		void SetGlobalInt(int32_t nameID, int32_t value);
		void SetGlobalVector(int32_t nameID, UnityEngine_CoreModule::UnityEngine::Vector4 value);
		void SetGlobalColor(int32_t nameID, UnityEngine_CoreModule::UnityEngine::Color value);
		void SetGlobalMatrix(int32_t nameID, UnityEngine_CoreModule::UnityEngine::Matrix4x4 value);
		void EnableShaderKeyword(mscorlib::System::String* keyword);
		void DisableShaderKeyword(mscorlib::System::String* keyword);
		void SetViewProjectionMatrices(UnityEngine_CoreModule::UnityEngine::Matrix4x4 view, UnityEngine_CoreModule::UnityEngine::Matrix4x4 proj);
		void SetExecutionFlags(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBufferExecutionFlags flags);
		bool ValidateAgainstExecutionFlags(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBufferExecutionFlags requiredFlags, UnityEngine_CoreModule::UnityEngine::Rendering::CommandBufferExecutionFlags invalidFlags);
		void SetGlobalVectorArray(int32_t nameID, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector4>* values);
		void SetGlobalMatrixArray(int32_t nameID, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Matrix4x4>* values);
		void SetGlobalTexture_Impl(int32_t nameID, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier& rt, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTextureSubElement element);
		void SetGlobalBufferInternal(int32_t nameID, UnityEngine_CoreModule::UnityEngine::ComputeBuffer* value);
		void BeginSample(mscorlib::System::String* name);
		void EndSample(mscorlib::System::String* name);
		void BeginSample(UnityEngine_CoreModule::UnityEngine::Profiling::CustomSampler* sampler);
		void EndSample(UnityEngine_CoreModule::UnityEngine::Profiling::CustomSampler* sampler);
		void BeginSample_CustomSampler(UnityEngine_CoreModule::UnityEngine::Profiling::CustomSampler* sampler);
		void EndSample_CustomSampler(UnityEngine_CoreModule::UnityEngine::Profiling::CustomSampler* sampler);
		void SetGlobalConstantBufferInternal(UnityEngine_CoreModule::UnityEngine::ComputeBuffer* buffer, int32_t nameID, int32_t offset, int32_t size);
		void SetInstanceMultiplier(uint32_t multiplier);
		void SetRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier rt);
		void SetRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier rt, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferLoadAction loadAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferStoreAction storeAction);
		void SetRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier rt, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction);
		void SetRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier rt, int32_t mipLevel, UnityEngine_CoreModule::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);
		void SetRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier color, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier depth);
		void SetRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier color, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier depth, int32_t mipLevel, UnityEngine_CoreModule::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);
		void SetRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier color, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier depth, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction);
		void SetRenderTarget(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier>* colors, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier depth, int32_t mipLevel, UnityEngine_CoreModule::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);
		void SetRenderTargetSingle_Internal(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier rt, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction);
		void SetRenderTargetColorDepth_Internal(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier color, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier depth, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetFlags flags);
		void SetRenderTargetMultiSubtarget(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier>* colors, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier depth, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferLoadAction>* colorLoadActions, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferStoreAction>* colorStoreActions, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, int32_t mipLevel, UnityEngine_CoreModule::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);
		void SetComputeBufferData(UnityEngine_CoreModule::UnityEngine::ComputeBuffer* buffer, mscorlib::System::Array* data);
		void InternalSetComputeBufferData(UnityEngine_CoreModule::UnityEngine::ComputeBuffer* buffer, mscorlib::System::Array* data, int32_t managedBufferStartIndex, int32_t graphicsBufferStartIndex, int32_t count, int32_t elemSize);
		void Finalize();
		void Dispose();
		void Dispose(bool disposing);
		void _ctor();
		UnityEngine_CoreModule::UnityEngine::Rendering::GraphicsFence CreateAsyncGraphicsFence();
		UnityEngine_CoreModule::UnityEngine::Rendering::GraphicsFence CreateGraphicsFence(UnityEngine_CoreModule::UnityEngine::Rendering::GraphicsFenceType fenceType, UnityEngine_CoreModule::UnityEngine::Rendering::SynchronisationStageFlags stage);
		void WaitOnAsyncGraphicsFence(UnityEngine_CoreModule::UnityEngine::Rendering::GraphicsFence fence);
		void WaitOnAsyncGraphicsFence(UnityEngine_CoreModule::UnityEngine::Rendering::GraphicsFence fence, UnityEngine_CoreModule::UnityEngine::Rendering::SynchronisationStage stage);
		void WaitOnAsyncGraphicsFence(UnityEngine_CoreModule::UnityEngine::Rendering::GraphicsFence fence, UnityEngine_CoreModule::UnityEngine::Rendering::SynchronisationStageFlags stage);
		void SetComputeTextureParam(UnityEngine_CoreModule::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, mscorlib::System::String* name, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier rt);
		void SetComputeConstantBufferParam(UnityEngine_CoreModule::UnityEngine::ComputeShader* computeShader, int32_t nameID, UnityEngine_CoreModule::UnityEngine::ComputeBuffer* buffer, int32_t offset, int32_t size);
		void DispatchCompute(UnityEngine_CoreModule::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t threadGroupsX, int32_t threadGroupsY, int32_t threadGroupsZ);
		void DrawMesh(UnityEngine_CoreModule::UnityEngine::Mesh* mesh, UnityEngine_CoreModule::UnityEngine::Matrix4x4 matrix, UnityEngine_CoreModule::UnityEngine::Material* material, int32_t submeshIndex, int32_t shaderPass, UnityEngine_CoreModule::UnityEngine::MaterialPropertyBlock* properties);
		void DrawMesh(UnityEngine_CoreModule::UnityEngine::Mesh* mesh, UnityEngine_CoreModule::UnityEngine::Matrix4x4 matrix, UnityEngine_CoreModule::UnityEngine::Material* material, int32_t submeshIndex, int32_t shaderPass);
		void DrawMesh(UnityEngine_CoreModule::UnityEngine::Mesh* mesh, UnityEngine_CoreModule::UnityEngine::Matrix4x4 matrix, UnityEngine_CoreModule::UnityEngine::Material* material, int32_t submeshIndex);
		void DrawMesh(UnityEngine_CoreModule::UnityEngine::Mesh* mesh, UnityEngine_CoreModule::UnityEngine::Matrix4x4 matrix, UnityEngine_CoreModule::UnityEngine::Material* material);
		void DrawRenderer(UnityEngine_CoreModule::UnityEngine::Renderer* renderer, UnityEngine_CoreModule::UnityEngine::Material* material, int32_t submeshIndex, int32_t shaderPass);
		void DrawRenderer(UnityEngine_CoreModule::UnityEngine::Renderer* renderer, UnityEngine_CoreModule::UnityEngine::Material* material, int32_t submeshIndex);
		void DrawRenderer(UnityEngine_CoreModule::UnityEngine::Renderer* renderer, UnityEngine_CoreModule::UnityEngine::Material* material);
		void DrawProcedural(UnityEngine_CoreModule::UnityEngine::Matrix4x4 matrix, UnityEngine_CoreModule::UnityEngine::Material* material, int32_t shaderPass, UnityEngine_CoreModule::UnityEngine::MeshTopology topology, int32_t vertexCount, int32_t instanceCount, UnityEngine_CoreModule::UnityEngine::MaterialPropertyBlock* properties);
		void DrawProcedural(UnityEngine_CoreModule::UnityEngine::Matrix4x4 matrix, UnityEngine_CoreModule::UnityEngine::Material* material, int32_t shaderPass, UnityEngine_CoreModule::UnityEngine::MeshTopology topology, int32_t vertexCount, int32_t instanceCount);
		void DrawProcedural(UnityEngine_CoreModule::UnityEngine::Matrix4x4 matrix, UnityEngine_CoreModule::UnityEngine::Material* material, int32_t shaderPass, UnityEngine_CoreModule::UnityEngine::MeshTopology topology, int32_t vertexCount);
		void DrawOcclusionMesh(UnityEngine_CoreModule::UnityEngine::RectInt normalizedCamViewport);
		void Blit(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier source, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier dest, UnityEngine_CoreModule::UnityEngine::Material* mat);
		void Blit(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier source, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier dest, UnityEngine_CoreModule::UnityEngine::Material* mat, int32_t pass);
		void SetGlobalVector(mscorlib::System::String* name, UnityEngine_CoreModule::UnityEngine::Vector4 value);
		void SetGlobalVectorArray(mscorlib::System::String* propertyName, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector4>* values);
		void SetGlobalTexture(mscorlib::System::String* name, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier value);
		void SetGlobalTexture(int32_t nameID, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier value);
		void SetGlobalTexture(int32_t nameID, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier value, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTextureSubElement element);
		void SetGlobalBuffer(int32_t nameID, UnityEngine_CoreModule::UnityEngine::ComputeBuffer* value);
		void SetGlobalConstantBuffer(UnityEngine_CoreModule::UnityEngine::ComputeBuffer* buffer, int32_t nameID, int32_t offset, int32_t size);
		void SetSinglePassStereo(UnityEngine_CoreModule::UnityEngine::Rendering::SinglePassStereoMode mode);
		void Internal_DrawMesh_Injected(UnityEngine_CoreModule::UnityEngine::Mesh* mesh, UnityEngine_CoreModule::UnityEngine::Matrix4x4& matrix, UnityEngine_CoreModule::UnityEngine::Material* material, int32_t submeshIndex, int32_t shaderPass, UnityEngine_CoreModule::UnityEngine::MaterialPropertyBlock* properties);
		void Internal_DrawProcedural_Injected(UnityEngine_CoreModule::UnityEngine::Matrix4x4& matrix, UnityEngine_CoreModule::UnityEngine::Material* material, int32_t shaderPass, UnityEngine_CoreModule::UnityEngine::MeshTopology topology, int32_t vertexCount, int32_t instanceCount, UnityEngine_CoreModule::UnityEngine::MaterialPropertyBlock* properties);
		void Internal_DrawOcclusionMesh_Injected(UnityEngine_CoreModule::UnityEngine::RectInt& normalizedCamViewport);
		void SetViewport_Injected(UnityEngine_CoreModule::UnityEngine::Rect& pixelRect);
		void EnableScissorRect_Injected(UnityEngine_CoreModule::UnityEngine::Rect& scissor);
		void Blit_Identifier_Injected(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier& source, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier& dest, UnityEngine_CoreModule::UnityEngine::Material* mat, int32_t pass, UnityEngine_CoreModule::UnityEngine::Vector2& scale, UnityEngine_CoreModule::UnityEngine::Vector2& offset, int32_t sourceDepthSlice, int32_t destDepthSlice);
		void GetTemporaryRTWithDescriptor_Injected(int32_t nameID, UnityEngine_CoreModule::UnityEngine::RenderTextureDescriptor& desc, UnityEngine_CoreModule::UnityEngine::FilterMode filter);
		void ClearRenderTarget_Injected(bool clearDepth, bool clearColor, UnityEngine_CoreModule::UnityEngine::Color& backgroundColor, float depth);
		void SetGlobalVector_Injected(int32_t nameID, UnityEngine_CoreModule::UnityEngine::Vector4& value);
		void SetGlobalColor_Injected(int32_t nameID, UnityEngine_CoreModule::UnityEngine::Color& value);
		void SetGlobalMatrix_Injected(int32_t nameID, UnityEngine_CoreModule::UnityEngine::Matrix4x4& value);
		void SetViewProjectionMatrices_Injected(UnityEngine_CoreModule::UnityEngine::Matrix4x4& view, UnityEngine_CoreModule::UnityEngine::Matrix4x4& proj);
		void SetRenderTargetSingle_Internal_Injected(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier& rt, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction);
		void SetRenderTargetColorDepth_Internal_Injected(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier& color, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier& depth, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetFlags flags);
		void SetRenderTargetMultiSubtarget_Injected(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier>* colors, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier& depth, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferLoadAction>* colorLoadActions, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferStoreAction>* colorStoreActions, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, int32_t mipLevel, UnityEngine_CoreModule::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);
	};
}

