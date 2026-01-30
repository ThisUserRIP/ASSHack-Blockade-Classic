#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Rendering_Universal_ScriptableRenderer.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal { struct ColorGradingLutPass; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal { struct Render2DLightingPass; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal { struct PostProcessPass; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal { struct PixelPerfectBackgroundPass; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal { struct FinalBlitPass; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal { struct Light2DCullResult; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct ProfilingSampler; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "UnityEngine_Rendering_Universal_RenderTargetHandle.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct RenderTargetHandle; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal { struct Renderer2DData; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct CameraData; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct CameraData; };
#include "..\UnityEngine_CoreModule\UnityEngine_FilterMode.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct CommandBuffer; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_ScriptableRenderContext.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ScriptableRenderContext; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct RenderingData; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct RenderingData; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ScriptableCullingParameters; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ScriptableCullingParameters; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal
{
	struct Renderer2D : Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass* m_ColorGradingLutPass;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Render2DLightingPass* m_Render2DLightingPass;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::PostProcessPass* m_PostProcessPass;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::PixelPerfectBackgroundPass* m_PixelPerfectBackgroundPass;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::FinalBlitPass* m_FinalBlitPass;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::PostProcessPass* m_FinalPostProcessPass;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Light2DCullResult* m_LightCullResult;
		bool m_UseDepthStencilBuffer;
		bool m_CreateColorTexture;
		bool m_CreateDepthTexture;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle k_ColorTextureHandle;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle k_DepthTextureHandle;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle k_AfterPostProcessColorHandle;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle k_ColorGradingLutHandle;
		UnityEngine_CoreModule::UnityEngine::Material* m_BlitMaterial;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Renderer2DData* m_Renderer2DData;
		struct StaticFields
		{
			Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSampler;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		bool get_createColorTexture();
		bool get_createDepthTexture();
		void _ctor(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Renderer2DData* data);
		void Dispose(bool disposing);
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Renderer2DData* GetRenderer2DData();
		void CreateRenderTextures(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::CameraData& cameraData, bool forceCreateColorTexture, UnityEngine_CoreModule::UnityEngine::FilterMode colorTextureFilterMode, UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle& colorTargetHandle, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle& depthTargetHandle);
		void Setup(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData);
		void SetupCullingParameters(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableCullingParameters& cullingParameters, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::CameraData& cameraData);
		void FinishRendering(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd);
		static void _cctor();
	};
}

