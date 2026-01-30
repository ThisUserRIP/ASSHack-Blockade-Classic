#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\UnityEngine_CoreModule\UnityEngine_RenderTextureFormat.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct CullingResults; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct CullingResults; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct ShadowData; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct ShadowData; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_CoreModule::UnityEngine { struct Vector4; };
namespace UnityEngine_CoreModule::UnityEngine { struct Vector4; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct ShadowSliceData; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct ShadowSliceData; };
namespace UnityEngine_CoreModule::UnityEngine { struct Matrix4x4; };
namespace UnityEngine_CoreModule::UnityEngine { struct Matrix4x4; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct CommandBuffer; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ScriptableRenderContext; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ScriptableRenderContext; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ShadowDrawingSettings; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ShadowDrawingSettings; };
#include "..\UnityEngine_CoreModule\UnityEngine_Matrix4x4.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector4.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct VisibleLight; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct VisibleLight; };
namespace UnityEngine_CoreModule::UnityEngine { struct RenderTexture; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	struct ShadowUtils : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			UnityEngine_CoreModule::UnityEngine::RenderTextureFormat m_ShadowmapFormat;
			bool m_ForceShadowPointSampling;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		static bool ExtractDirectionalLightMatrix(UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults& cullResults, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ShadowData& shadowData, int32_t shadowLightIndex, int32_t cascadeIndex, int32_t shadowmapWidth, int32_t shadowmapHeight, int32_t shadowResolution, float shadowNearPlane, UnityEngine_CoreModule::UnityEngine::Vector4& cascadeSplitDistance, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ShadowSliceData& shadowSliceData, UnityEngine_CoreModule::UnityEngine::Matrix4x4& viewMatrix, UnityEngine_CoreModule::UnityEngine::Matrix4x4& projMatrix);
		static bool ExtractSpotLightMatrix(UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults& cullResults, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ShadowData& shadowData, int32_t shadowLightIndex, UnityEngine_CoreModule::UnityEngine::Matrix4x4& shadowMatrix, UnityEngine_CoreModule::UnityEngine::Matrix4x4& viewMatrix, UnityEngine_CoreModule::UnityEngine::Matrix4x4& projMatrix);
		static void RenderShadowSlice(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext& context, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ShadowSliceData& shadowSliceData, UnityEngine_CoreModule::UnityEngine::Rendering::ShadowDrawingSettings& settings, UnityEngine_CoreModule::UnityEngine::Matrix4x4 proj, UnityEngine_CoreModule::UnityEngine::Matrix4x4 view);
		static void RenderShadowSlice(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext& context, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ShadowSliceData& shadowSliceData, UnityEngine_CoreModule::UnityEngine::Rendering::ShadowDrawingSettings& settings);
		static int32_t GetMaxTileResolutionInAtlas(int32_t atlasWidth, int32_t atlasHeight, int32_t tileCount);
		static void ApplySliceTransform(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ShadowSliceData& shadowSliceData, int32_t atlasWidth, int32_t atlasHeight);
		static UnityEngine_CoreModule::UnityEngine::Vector4 GetShadowBias(UnityEngine_CoreModule::UnityEngine::Rendering::VisibleLight& shadowLight, int32_t shadowLightIndex, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ShadowData& shadowData, UnityEngine_CoreModule::UnityEngine::Matrix4x4 lightProjectionMatrix, float shadowResolution);
		static void SetupShadowCasterConstantBuffer(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, UnityEngine_CoreModule::UnityEngine::Rendering::VisibleLight& shadowLight, UnityEngine_CoreModule::UnityEngine::Vector4 shadowBias);
		static UnityEngine_CoreModule::UnityEngine::RenderTexture* GetTemporaryShadowTexture(int32_t width, int32_t height, int32_t bits);
		static UnityEngine_CoreModule::UnityEngine::Matrix4x4 GetShadowTransform(UnityEngine_CoreModule::UnityEngine::Matrix4x4 proj, UnityEngine_CoreModule::UnityEngine::Matrix4x4 view);
	};
}

