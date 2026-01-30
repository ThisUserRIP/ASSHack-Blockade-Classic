#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct ProfilingSampler; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "UnityEngine_Rendering_Universal_MixedLightingSetup.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "UnityEngine_Rendering_Universal_RenderTargetHandle.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct RenderTargetHandle; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_RenderTargetIdentifier.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct RenderTargetIdentifier; };
#include "..\UnityEngine_CoreModule\UnityEngine_Matrix4x4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Matrix4x4; };
#include "UnityEngine_Rendering_Universal_Internal_DeferredTiler.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal { struct DeferredTiler; };
#include "..\mscorlib\System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
#include "..\UnityEngine_CoreModule\Unity_Collections_NativeArray_1.h"
namespace UnityEngine_CoreModule::Unity::Collections { template <typename T> struct NativeArray_1; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal { struct AdditionalLightsShadowCasterPass; };
namespace UnityEngine_CoreModule::UnityEngine { struct Mesh; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
#include "..\UnityEngine_CoreModule\UnityEngine_Experimental_Rendering_GraphicsFormat.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_ScriptableRenderContext.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ScriptableRenderContext; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct RenderingData; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct RenderingData; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct CommandBuffer; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_StencilState.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct StencilState; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_RenderStateBlock.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct RenderStateBlock; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct LightData; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct LightData; };
#include "UnityEngine_Rendering_Universal_Internal_DeferredTiler_PrePunctualLight.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal { struct DeferredTiler_PrePunctualLight; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_VisibleLight.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct VisibleLight; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal { struct BitArray; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal { struct BitArray; };
#include "..\Unity_Mathematics\Unity_Mathematics_uint4.h"
namespace Unity_Mathematics::Unity::Mathematics { struct uint4; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal
{
	struct DeferredLights : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool _UseRenderPass_k__BackingField;
		bool _HasDepthPrepass_k__BackingField;
		bool _IsOverlay_k__BackingField;
		bool _AccurateGbufferNormals_k__BackingField;
		bool _TiledDeferredShading_k__BackingField;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::MixedLightingSetup _MixedLightingSetup_k__BackingField;
		bool _UseJobSystem_k__BackingField;
		int32_t _RenderWidth_k__BackingField;
		int32_t _RenderHeight_k__BackingField;
		IL2CPP::Array<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle>* _GbufferAttachments_k__BackingField;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle _DepthAttachment_k__BackingField;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle _DepthCopyTexture_k__BackingField;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle _DepthInfoTexture_k__BackingField;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle _TileDepthInfoTexture_k__BackingField;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier>* _GbufferAttachmentIdentifiers_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier _DepthAttachmentIdentifier_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier _DepthCopyTextureIdentifier_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier _DepthInfoTextureIdentifier_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier _TileDepthInfoTextureIdentifier_k__BackingField;
		int32_t m_CachedRenderWidth;
		int32_t m_CachedRenderHeight;
		UnityEngine_CoreModule::UnityEngine::Matrix4x4 m_CachedProjectionMatrix;
		IL2CPP::Array<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredTiler>* m_Tilers;
		IL2CPP::Array<int32_t>* m_TileDataCapacities;
		bool m_HasTileVisLights;
		UnityEngine_CoreModule::Unity::Collections::NativeArray_1<mscorlib::System::UInt16> m_stencilVisLights;
		UnityEngine_CoreModule::Unity::Collections::NativeArray_1<mscorlib::System::UInt16> m_stencilVisLightOffsets;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass* m_AdditionalLightsShadowCasterPass;
		UnityEngine_CoreModule::UnityEngine::Mesh* m_SphereMesh;
		UnityEngine_CoreModule::UnityEngine::Mesh* m_HemisphereMesh;
		UnityEngine_CoreModule::UnityEngine::Mesh* m_FullscreenMesh;
		int32_t m_MaxDepthRangePerBatch;
		int32_t m_MaxTilesPerBatch;
		int32_t m_MaxPunctualLightPerBatch;
		int32_t m_MaxRelLightIndicesPerBatch;
		UnityEngine_CoreModule::UnityEngine::Material* m_TileDepthInfoMaterial;
		UnityEngine_CoreModule::UnityEngine::Material* m_TileDeferredMaterial;
		UnityEngine_CoreModule::UnityEngine::Material* m_StencilDeferredMaterial;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Matrix4x4>* m_ScreenToWorld;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSamplerDeferredTiledPass;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSamplerDeferredStencilPass;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSamplerDeferredFogPass;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSamplerClearStencilPartialPass;
		struct StaticFields
		{
			mscorlib::System::String* k_SetupLights;
			mscorlib::System::String* k_DeferredPass;
			mscorlib::System::String* k_TileDepthInfo;
			mscorlib::System::String* k_DeferredTiledPass;
			mscorlib::System::String* k_DeferredStencilPass;
			mscorlib::System::String* k_DeferredFogPass;
			mscorlib::System::String* k_ClearStencilPartial;
			mscorlib::System::String* k_SetupLightConstants;
			float kStencilShapeGuard;
			Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSetupLights;
			Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler* m_ProfilingDeferredPass;
			Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler* m_ProfilingTileDepthInfo;
			Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSetupLightConstants;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		int32_t get_GbufferDepthIndex();
		int32_t get_GBufferAlbedoIndex();
		int32_t get_GBufferSpecularMetallicIndex();
		int32_t get_GBufferNormalSmoothnessIndex();
		int32_t get_GBufferLightingIndex();
		int32_t get_GBufferShadowMask();
		int32_t get_GBufferSliceCount();
		UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat GetGBufferFormat(int32_t index);
		bool get_UseShadowMask();
		bool get_UseRenderPass();
		void set_UseRenderPass(bool value);
		bool get_HasDepthPrepass();
		void set_HasDepthPrepass(bool value);
		bool get_IsOverlay();
		void set_IsOverlay(bool value);
		bool get_AccurateGbufferNormals();
		void set_AccurateGbufferNormals(bool value);
		bool get_TiledDeferredShading();
		void set_TiledDeferredShading(bool value);
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::MixedLightingSetup get_MixedLightingSetup();
		void set_MixedLightingSetup(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::MixedLightingSetup value);
		bool get_UseJobSystem();
		void set_UseJobSystem(bool value);
		int32_t get_RenderWidth();
		void set_RenderWidth(int32_t value);
		int32_t get_RenderHeight();
		void set_RenderHeight(int32_t value);
		IL2CPP::Array<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle>* get_GbufferAttachments();
		void set_GbufferAttachments(IL2CPP::Array<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle>* value);
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle get_DepthAttachment();
		void set_DepthAttachment(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle value);
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle get_DepthCopyTexture();
		void set_DepthCopyTexture(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle value);
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle get_DepthInfoTexture();
		void set_DepthInfoTexture(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle value);
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle get_TileDepthInfoTexture();
		void set_TileDepthInfoTexture(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle value);
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier>* get_GbufferAttachmentIdentifiers();
		void set_GbufferAttachmentIdentifiers(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier>* value);
		UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier get_DepthAttachmentIdentifier();
		void set_DepthAttachmentIdentifier(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier value);
		UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier get_DepthCopyTextureIdentifier();
		void set_DepthCopyTextureIdentifier(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier value);
		UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier get_DepthInfoTextureIdentifier();
		void set_DepthInfoTextureIdentifier(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier value);
		UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier get_TileDepthInfoTextureIdentifier();
		void set_TileDepthInfoTextureIdentifier(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier value);
		void _ctor(UnityEngine_CoreModule::UnityEngine::Material* tileDepthInfoMaterial, UnityEngine_CoreModule::UnityEngine::Material* tileDeferredMaterial, UnityEngine_CoreModule::UnityEngine::Material* stencilDeferredMaterial);
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredTiler& GetTiler(int32_t i);
		void SetupLights(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData);
		void ResolveMixedLightingMode(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData);
		bool IsRuntimeSupportedThisFrame();
		void Setup(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass* additionalLightsShadowCasterPass, bool hasDepthPrepass, bool isOverlay, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle depthCopyTexture, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle depthInfoTexture, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle tileDepthInfoTexture, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle depthAttachment, IL2CPP::Array<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle>* gbufferHandles);
		void OnCameraCleanup(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd);
		static UnityEngine_CoreModule::UnityEngine::Rendering::StencilState OverwriteStencil(UnityEngine_CoreModule::UnityEngine::Rendering::StencilState s, int32_t stencilWriteMask);
		static UnityEngine_CoreModule::UnityEngine::Rendering::RenderStateBlock OverwriteStencil(UnityEngine_CoreModule::UnityEngine::Rendering::RenderStateBlock block, int32_t stencilWriteMask, int32_t stencilRef);
		bool HasTileLights();
		bool HasTileDepthRangeExtraPass();
		void ExecuteTileDepthInfoPass(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData);
		void ExecuteDownsampleBitmaskPass(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData);
		void ClearStencilPartial(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd);
		void ExecuteDeferredPass(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData);
		void SetupShaderLightConstants(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData);
		void SetupMainLightConstants(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::LightData& lightData);
		void SetupMatrixConstants(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData);
		void SortLights(UnityEngine_CoreModule::Unity::Collections::NativeArray_1<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredTiler_PrePunctualLight>& prePunctualLights);
		bool CheckHasTileLights(UnityEngine_CoreModule::Unity::Collections::NativeArray_1<UnityEngine_CoreModule::UnityEngine::Rendering::VisibleLight>& visibleLights);
		void PrecomputeLights(UnityEngine_CoreModule::Unity::Collections::NativeArray_1<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredTiler_PrePunctualLight>& prePunctualLights, UnityEngine_CoreModule::Unity::Collections::NativeArray_1<mscorlib::System::UInt16>& stencilVisLights, UnityEngine_CoreModule::Unity::Collections::NativeArray_1<mscorlib::System::UInt16>& stencilVisLightOffsets, UnityEngine_CoreModule::Unity::Collections::NativeArray_1<UnityEngine_CoreModule::UnityEngine::Rendering::VisibleLight>& visibleLights, bool hasAdditionalLights, UnityEngine_CoreModule::UnityEngine::Matrix4x4 view, bool isOrthographic, float zNear);
		void RenderTileLights(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData);
		void RenderStencilLights(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData);
		void RenderStencilDirectionalLights(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData, UnityEngine_CoreModule::Unity::Collections::NativeArray_1<UnityEngine_CoreModule::UnityEngine::Rendering::VisibleLight> visibleLights, int32_t mainLightIndex);
		void RenderStencilPointLights(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData, UnityEngine_CoreModule::Unity::Collections::NativeArray_1<UnityEngine_CoreModule::UnityEngine::Rendering::VisibleLight> visibleLights);
		void RenderStencilSpotLights(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData, UnityEngine_CoreModule::Unity::Collections::NativeArray_1<UnityEngine_CoreModule::UnityEngine::Rendering::VisibleLight> visibleLights);
		void RenderFog(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData);
		int32_t TrimLights(UnityEngine_CoreModule::Unity::Collections::NativeArray_1<mscorlib::System::UInt16>& trimmedLights, UnityEngine_CoreModule::Unity::Collections::NativeArray_1<mscorlib::System::UInt16>& tiles, int32_t offset, int32_t lightCount, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::BitArray& usedLights);
		void StorePunctualLightData(UnityEngine_CoreModule::Unity::Collections::NativeArray_1<Unity_Mathematics::Unity::Mathematics::uint4>& punctualLightBuffer, int32_t storeIndex, UnityEngine_CoreModule::Unity::Collections::NativeArray_1<UnityEngine_CoreModule::UnityEngine::Rendering::VisibleLight>& visibleLights, int32_t index);
		void StoreTileData(UnityEngine_CoreModule::Unity::Collections::NativeArray_1<Unity_Mathematics::Unity::Mathematics::uint4>& tileList, int32_t storeIndex, uint32_t tileID, uint32_t listBitMask, uint16_t relLightOffset, uint16_t lightCount);
		bool IsTileLight(UnityEngine_CoreModule::UnityEngine::Rendering::VisibleLight visibleLight);
		static UnityEngine_CoreModule::UnityEngine::Mesh* CreateSphereMesh();
		static UnityEngine_CoreModule::UnityEngine::Mesh* CreateHemisphereMesh();
		static UnityEngine_CoreModule::UnityEngine::Mesh* CreateFullscreenMesh();
		static int32_t Align(int32_t s, int32_t alignment);
		static uint32_t PackTileID(uint32_t i, uint32_t j);
		static uint32_t FloatToUInt(float val);
		static uint32_t Half2ToUInt(float x, float y);
		static void _cctor();
	};
}

