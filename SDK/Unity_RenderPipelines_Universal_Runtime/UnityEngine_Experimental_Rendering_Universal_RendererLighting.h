#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct ProfilingSampler; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_ShaderTagId.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ShaderTagId; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Experimental_Rendering_GraphicsFormat.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal { struct IRenderPass2D; };
#include "UnityEngine_Rendering_Universal_RenderingData.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct RenderingData; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct CommandBuffer; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_RenderTargetIdentifier.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct RenderTargetIdentifier; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal { struct Light2D; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_CoreModule::UnityEngine { struct Matrix4x4; };
namespace UnityEngine_CoreModule::UnityEngine { struct Matrix4x4; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_ScriptableRenderContext.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ScriptableRenderContext; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_CullingResults.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct CullingResults; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_DrawingSettings.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct DrawingSettings; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_FilteringSettings.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct FilteringSettings; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_BlendMode.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal { struct Renderer2DData; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal
{
	struct RendererLighting : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSampler;
			UnityEngine_CoreModule::UnityEngine::Rendering::ShaderTagId k_NormalsRenderingPassName;
			UnityEngine_CoreModule::UnityEngine::Color k_NormalClearColor;
			mscorlib::System::String* k_SpriteLightKeyword;
			mscorlib::System::String* k_UsePointLightCookiesKeyword;
			mscorlib::System::String* k_LightQualityFastKeyword;
			mscorlib::System::String* k_UseNormalMap;
			mscorlib::System::String* k_UseAdditiveBlendingKeyword;
			IL2CPP::Array<mscorlib::System::String*>* k_UseBlendStyleKeywords;
			IL2CPP::Array<int32_t>* k_BlendFactorsPropIDs;
			IL2CPP::Array<int32_t>* k_MaskFilterPropIDs;
			IL2CPP::Array<int32_t>* k_InvertedFilterPropIDs;
			UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat s_RenderTextureFormatToUse;
			bool s_HasSetupRenderTextureFormatToUse;
			int32_t k_SrcBlendID;
			int32_t k_DstBlendID;
			int32_t k_FalloffIntensityID;
			int32_t k_FalloffDistanceID;
			int32_t k_FalloffOffsetID;
			int32_t k_LightColorID;
			int32_t k_VolumeOpacityID;
			int32_t k_CookieTexID;
			int32_t k_FalloffLookupID;
			int32_t k_LightPositionID;
			int32_t k_LightInvMatrixID;
			int32_t k_LightNoRotInvMatrixID;
			int32_t k_InnerRadiusMultID;
			int32_t k_OuterAngleID;
			int32_t k_InnerAngleMultID;
			int32_t k_LightLookupID;
			int32_t k_IsFullSpotlightID;
			int32_t k_LightZDistanceID;
			int32_t k_PointLightCookieTexID;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat GetRenderTextureFormat();
		static void CreateNormalMapRenderTexture(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::IRenderPass2D* pass, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData renderingData, UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd);
		static void CreateBlendStyleRenderTexture(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::IRenderPass2D* pass, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData renderingData, UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, int32_t blendStyleIndex);
		static void EnableBlendStyle(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, int32_t blendStyleIndex, bool enabled);
		static void ReleaseRenderTextures(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::IRenderPass2D* pass, UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd);
		static bool RenderLightSet(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::IRenderPass2D* pass, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData renderingData, int32_t blendStyleIndex, UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, int32_t layerToRender, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier renderTexture, bool rtNeedsClear, UnityEngine_CoreModule::UnityEngine::Color clearColor, mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Light2D>* lights);
		static void RenderLightVolumeSet(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::IRenderPass2D* pass, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData renderingData, int32_t blendStyleIndex, UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, int32_t layerToRender, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier renderTexture, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier depthTexture, mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Light2D>* lights);
		static void SetShapeLightShaderGlobals(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::IRenderPass2D* pass, UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd);
		static float GetNormalizedInnerRadius(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Light2D* light);
		static float GetNormalizedAngle(float angle);
		static void GetScaledLightInvMatrix(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Light2D* light, UnityEngine_CoreModule::UnityEngine::Matrix4x4& retMatrix, bool includeRotation);
		static void SetPointLightShaderGlobals(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Light2D* light);
		static void ClearDirtyLighting(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::IRenderPass2D* pass, UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, uint32_t blendStylesUsed);
		static void RenderNormals(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::IRenderPass2D* pass, UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults cullResults, UnityEngine_CoreModule::UnityEngine::Rendering::DrawingSettings drawSettings, UnityEngine_CoreModule::UnityEngine::Rendering::FilteringSettings filterSettings, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier depthTarget);
		static void RenderLights(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::IRenderPass2D* pass, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData renderingData, UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, int32_t layerToRender, uint32_t blendStylesUsed);
		static void RenderLightVolumes(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::IRenderPass2D* pass, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData renderingData, UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, int32_t layerToRender, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier renderTarget, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier depthTarget, uint32_t blendStylesUsed);
		static void SetBlendModes(UnityEngine_CoreModule::UnityEngine::Material* material, UnityEngine_CoreModule::UnityEngine::Rendering::BlendMode src, UnityEngine_CoreModule::UnityEngine::Rendering::BlendMode dst);
		static uint32_t GetLightMaterialIndex(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Light2D* light, bool isVolume);
		static UnityEngine_CoreModule::UnityEngine::Material* CreateLightMaterial(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Renderer2DData* rendererData, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Light2D* light, bool isVolume);
		static UnityEngine_CoreModule::UnityEngine::Material* GetLightMaterial(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Renderer2DData* rendererData, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Light2D* light, bool isVolume);
		static void _cctor();
	};
}

