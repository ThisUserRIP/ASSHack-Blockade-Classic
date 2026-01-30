#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "UnityEngine_Rendering_GraphicsTier.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "UnityEngine_Rendering_OpenGLESVersion.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_RenderBuffer.h"
namespace UnityEngine_CoreModule::UnityEngine { struct RenderBuffer; };
#include "UnityEngine_CubemapFace.h"
namespace UnityEngine_CoreModule::UnityEngine { struct ComputeBuffer; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture; };
namespace UnityEngine_CoreModule::UnityEngine { struct Mesh; };
#include "UnityEngine_Matrix4x4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Matrix4x4; };
namespace UnityEngine_CoreModule::UnityEngine { struct Internal_DrawTextureArguments; };
namespace UnityEngine_CoreModule::UnityEngine { struct Internal_DrawTextureArguments; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
namespace UnityEngine_CoreModule::UnityEngine { struct MaterialPropertyBlock; };
#include "UnityEngine_Rendering_ShadowCastingMode.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };
#include "UnityEngine_Rendering_LightProbeUsage.h"
namespace UnityEngine_CoreModule::UnityEngine { struct LightProbeProxyVolume; };
#include "UnityEngine_MeshTopology.h"
namespace UnityEngine_CoreModule::UnityEngine { struct RenderTexture; };
#include "UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct Graphics : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t kMaxDrawMeshInstanceCount;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static int32_t Internal_GetMaxDrawMeshInstanceCount();
		static UnityEngine_CoreModule::UnityEngine::Rendering::GraphicsTier get_activeTier();
		static bool GetPreserveFramebufferAlpha();
		static bool get_preserveFramebufferAlpha();
		static UnityEngine_CoreModule::UnityEngine::Rendering::OpenGLESVersion GetMinOpenGLESVersion();
		static UnityEngine_CoreModule::UnityEngine::Rendering::OpenGLESVersion get_minOpenGLESVersion();
		static void Internal_SetNullRT();
		static void Internal_SetRTSimple(UnityEngine_CoreModule::UnityEngine::RenderBuffer color, UnityEngine_CoreModule::UnityEngine::RenderBuffer depth, int32_t mip, UnityEngine_CoreModule::UnityEngine::CubemapFace face, int32_t depthSlice);
		static void Internal_SetRandomWriteTargetBuffer(int32_t index, UnityEngine_CoreModule::UnityEngine::ComputeBuffer* uav, bool preserveCounterValue);
		static void ClearRandomWriteTargets();
		static void CopyTexture_Slice(UnityEngine_CoreModule::UnityEngine::Texture* src, int32_t srcElement, int32_t srcMip, UnityEngine_CoreModule::UnityEngine::Texture* dst, int32_t dstElement, int32_t dstMip);
		static void Internal_DrawMeshNow2(UnityEngine_CoreModule::UnityEngine::Mesh* mesh, int32_t subsetIndex, UnityEngine_CoreModule::UnityEngine::Matrix4x4 matrix);
		static void Internal_DrawTexture(UnityEngine_CoreModule::UnityEngine::Internal_DrawTextureArguments& args);
		static void Internal_DrawMeshInstanced(UnityEngine_CoreModule::UnityEngine::Mesh* mesh, int32_t submeshIndex, UnityEngine_CoreModule::UnityEngine::Material* material, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Matrix4x4>* matrices, int32_t count, UnityEngine_CoreModule::UnityEngine::MaterialPropertyBlock* properties, UnityEngine_CoreModule::UnityEngine::Rendering::ShadowCastingMode castShadows, bool receiveShadows, int32_t layer, UnityEngine_CoreModule::UnityEngine::Camera* camera, UnityEngine_CoreModule::UnityEngine::Rendering::LightProbeUsage lightProbeUsage, UnityEngine_CoreModule::UnityEngine::LightProbeProxyVolume* lightProbeProxyVolume);
		static void Internal_DrawProceduralIndirectNow(UnityEngine_CoreModule::UnityEngine::MeshTopology topology, UnityEngine_CoreModule::UnityEngine::ComputeBuffer* bufferWithArgs, int32_t argsOffset);
		static void Internal_BlitMaterial5(UnityEngine_CoreModule::UnityEngine::Texture* source, UnityEngine_CoreModule::UnityEngine::RenderTexture* dest, UnityEngine_CoreModule::UnityEngine::Material* mat, int32_t pass, bool setRT);
		static void Internal_BlitMultiTap4(UnityEngine_CoreModule::UnityEngine::Texture* source, UnityEngine_CoreModule::UnityEngine::RenderTexture* dest, UnityEngine_CoreModule::UnityEngine::Material* mat, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector2>* offsets);
		static void Blit2(UnityEngine_CoreModule::UnityEngine::Texture* source, UnityEngine_CoreModule::UnityEngine::RenderTexture* dest);
		static void SetRenderTargetImpl(UnityEngine_CoreModule::UnityEngine::RenderBuffer colorBuffer, UnityEngine_CoreModule::UnityEngine::RenderBuffer depthBuffer, int32_t mipLevel, UnityEngine_CoreModule::UnityEngine::CubemapFace face, int32_t depthSlice);
		static void SetRenderTargetImpl(UnityEngine_CoreModule::UnityEngine::RenderTexture* rt, int32_t mipLevel, UnityEngine_CoreModule::UnityEngine::CubemapFace face, int32_t depthSlice);
		static void SetRenderTarget(UnityEngine_CoreModule::UnityEngine::RenderTexture* rt, int32_t mipLevel, UnityEngine_CoreModule::UnityEngine::CubemapFace face, int32_t depthSlice);
		static void SetRandomWriteTarget(int32_t index, UnityEngine_CoreModule::UnityEngine::ComputeBuffer* uav, bool preserveCounterValue);
		static void CopyTexture(UnityEngine_CoreModule::UnityEngine::Texture* src, int32_t srcElement, int32_t srcMip, UnityEngine_CoreModule::UnityEngine::Texture* dst, int32_t dstElement, int32_t dstMip);
		static void DrawMeshNow(UnityEngine_CoreModule::UnityEngine::Mesh* mesh, UnityEngine_CoreModule::UnityEngine::Matrix4x4 matrix, int32_t materialIndex);
		static void DrawMeshNow(UnityEngine_CoreModule::UnityEngine::Mesh* mesh, UnityEngine_CoreModule::UnityEngine::Matrix4x4 matrix);
		static void DrawMeshInstanced(UnityEngine_CoreModule::UnityEngine::Mesh* mesh, int32_t submeshIndex, UnityEngine_CoreModule::UnityEngine::Material* material, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Matrix4x4>* matrices, int32_t count, UnityEngine_CoreModule::UnityEngine::MaterialPropertyBlock* properties, UnityEngine_CoreModule::UnityEngine::Rendering::ShadowCastingMode castShadows, bool receiveShadows, int32_t layer, UnityEngine_CoreModule::UnityEngine::Camera* camera, UnityEngine_CoreModule::UnityEngine::Rendering::LightProbeUsage lightProbeUsage, UnityEngine_CoreModule::UnityEngine::LightProbeProxyVolume* lightProbeProxyVolume);
		static void DrawProceduralIndirectNow(UnityEngine_CoreModule::UnityEngine::MeshTopology topology, UnityEngine_CoreModule::UnityEngine::ComputeBuffer* bufferWithArgs, int32_t argsOffset);
		static void Blit(UnityEngine_CoreModule::UnityEngine::Texture* source, UnityEngine_CoreModule::UnityEngine::RenderTexture* dest);
		static void Blit(UnityEngine_CoreModule::UnityEngine::Texture* source, UnityEngine_CoreModule::UnityEngine::RenderTexture* dest, UnityEngine_CoreModule::UnityEngine::Material* mat, int32_t pass);
		static void Blit(UnityEngine_CoreModule::UnityEngine::Texture* source, UnityEngine_CoreModule::UnityEngine::RenderTexture* dest, UnityEngine_CoreModule::UnityEngine::Material* mat);
		static void Blit(UnityEngine_CoreModule::UnityEngine::Texture* source, UnityEngine_CoreModule::UnityEngine::Material* mat, int32_t pass);
		static void Blit(UnityEngine_CoreModule::UnityEngine::Texture* source, UnityEngine_CoreModule::UnityEngine::Material* mat);
		static void BlitMultiTap(UnityEngine_CoreModule::UnityEngine::Texture* source, UnityEngine_CoreModule::UnityEngine::RenderTexture* dest, UnityEngine_CoreModule::UnityEngine::Material* mat, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector2>* offsets);
		static void DrawMeshInstanced(UnityEngine_CoreModule::UnityEngine::Mesh* mesh, int32_t submeshIndex, UnityEngine_CoreModule::UnityEngine::Material* material, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Matrix4x4>* matrices, int32_t count, UnityEngine_CoreModule::UnityEngine::MaterialPropertyBlock* properties, UnityEngine_CoreModule::UnityEngine::Rendering::ShadowCastingMode castShadows, bool receiveShadows, int32_t layer);
		static void SetRenderTarget(UnityEngine_CoreModule::UnityEngine::RenderTexture* rt);
		static void SetRandomWriteTarget(int32_t index, UnityEngine_CoreModule::UnityEngine::ComputeBuffer* uav);
		static void _cctor();
		static void Internal_SetRTSimple_Injected(UnityEngine_CoreModule::UnityEngine::RenderBuffer& color, UnityEngine_CoreModule::UnityEngine::RenderBuffer& depth, int32_t mip, UnityEngine_CoreModule::UnityEngine::CubemapFace face, int32_t depthSlice);
		static void Internal_DrawMeshNow2_Injected(UnityEngine_CoreModule::UnityEngine::Mesh* mesh, int32_t subsetIndex, UnityEngine_CoreModule::UnityEngine::Matrix4x4& matrix);
	};
}

