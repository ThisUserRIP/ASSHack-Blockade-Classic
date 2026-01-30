#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Rendering_Universal_ScriptableRenderer.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal { struct ColorGradingLutPass; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal { struct DepthOnlyPass; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal { struct DepthNormalOnlyPass; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal { struct MainLightShadowCasterPass; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal { struct AdditionalLightsShadowCasterPass; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal { struct GBufferPass; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal { struct CopyDepthPass; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal { struct TileDepthRangePass; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal { struct DeferredPass; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal { struct DrawObjectsPass; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct DrawSkyboxPass; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal { struct CopyColorPass; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct TransparentSettingsPass; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct InvokeOnRenderObjectCallbackPass; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal { struct PostProcessPass; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal { struct FinalBlitPass; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct CapturePass; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct XROcclusionMeshPass; };
#include "UnityEngine_Rendering_Universal_RenderTargetHandle.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct RenderTargetHandle; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal { struct ForwardLights; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal { struct DeferredLights; };
#include "UnityEngine_Rendering_Universal_RenderingMode.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_StencilState.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct StencilState; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct ForwardRendererData; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_ScriptableRenderContext.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ScriptableRenderContext; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct RenderingData; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct RenderingData; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ScriptableCullingParameters; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ScriptableCullingParameters; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct CameraData; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct CameraData; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct CommandBuffer; };
#include "UnityEngine_Rendering_Universal_ForwardRenderer_RenderPassInputSummary.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct ForwardRenderer_RenderPassInputSummary; };
namespace UnityEngine_CoreModule::UnityEngine { struct RenderTextureDescriptor; };
namespace UnityEngine_CoreModule::UnityEngine { struct RenderTextureDescriptor; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	struct ForwardRenderer : Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass* m_ColorGradingLutPass;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass* m_DepthPrepass;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass* m_DepthNormalPrepass;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass* m_MainLightShadowCasterPass;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass* m_AdditionalLightsShadowCasterPass;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::GBufferPass* m_GBufferPass;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* m_GBufferCopyDepthPass;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::TileDepthRangePass* m_TileDepthRangePass;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::TileDepthRangePass* m_TileDepthRangeExtraPass;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredPass* m_DeferredPass;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass* m_RenderOpaqueForwardOnlyPass;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass* m_RenderOpaqueForwardPass;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::DrawSkyboxPass* m_DrawSkyboxPass;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* m_CopyDepthPass;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::CopyColorPass* m_CopyColorPass;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::TransparentSettingsPass* m_TransparentSettingsPass;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass* m_RenderTransparentForwardPass;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass* m_OnRenderObjectCallbackPass;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::PostProcessPass* m_PostProcessPass;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::PostProcessPass* m_FinalPostProcessPass;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::FinalBlitPass* m_FinalBlitPass;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::CapturePass* m_CapturePass;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::XROcclusionMeshPass* m_XROcclusionMeshPass;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* m_XRCopyDepthPass;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle m_ActiveCameraColorAttachment;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle m_ActiveCameraDepthAttachment;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle m_CameraColorAttachment;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle m_CameraDepthAttachment;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle m_DepthTexture;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle m_NormalsTexture;
		IL2CPP::Array<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle>* m_GBufferHandles;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle m_OpaqueColor;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle m_AfterPostProcessColor;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle m_ColorGradingLut;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle m_DepthInfoTexture;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle m_TileDepthInfoTexture;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::ForwardLights* m_ForwardLights;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredLights* m_DeferredLights;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingMode m_RenderingMode;
		UnityEngine_CoreModule::UnityEngine::Rendering::StencilState m_DefaultStencilState;
		UnityEngine_CoreModule::UnityEngine::Material* m_BlitMaterial;
		UnityEngine_CoreModule::UnityEngine::Material* m_CopyDepthMaterial;
		UnityEngine_CoreModule::UnityEngine::Material* m_SamplingMaterial;
		UnityEngine_CoreModule::UnityEngine::Material* m_ScreenspaceShadowsMaterial;
		UnityEngine_CoreModule::UnityEngine::Material* m_TileDepthInfoMaterial;
		UnityEngine_CoreModule::UnityEngine::Material* m_TileDeferredMaterial;
		UnityEngine_CoreModule::UnityEngine::Material* m_StencilDeferredMaterial;
		struct StaticFields
		{
			int32_t k_DepthStencilBufferBits;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingMode get_renderingMode();
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingMode get_actualRenderingMode();
		bool get_accurateGbufferNormals();
		void _ctor(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ForwardRendererData* data);
		void Dispose(bool disposing);
		void Setup(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData);
		void SetupLights(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData);
		void SetupCullingParameters(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableCullingParameters& cullingParameters, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::CameraData& cameraData);
		void FinishRendering(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd);
		void EnqueueDeferred(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData, bool hasDepthPrepass, bool applyMainShadow, bool applyAdditionalShadow);
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ForwardRenderer_RenderPassInputSummary GetRenderPassInputs(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData);
		void CreateCameraRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, UnityEngine_CoreModule::UnityEngine::RenderTextureDescriptor& descriptor, bool createColor, bool createDepth);
		bool PlatformRequiresExplicitMsaaResolve();
		bool RequiresIntermediateColorTexture(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::CameraData& cameraData);
		bool CanCopyDepth(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::CameraData& cameraData);
	};
}

