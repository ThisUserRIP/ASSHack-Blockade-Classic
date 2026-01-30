#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_RenderPipelineAsset.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Shader; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct ScriptableRenderer; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "UnityEngine_Rendering_Universal_RendererType.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct ScriptableRendererData; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "UnityEngine_Rendering_Universal_Downsampling.h"
#include "UnityEngine_Rendering_Universal_MsaaQuality.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "UnityEngine_Rendering_Universal_LightRenderingMode.h"
#include "UnityEngine_Rendering_Universal_ShadowResolution.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "UnityEngine_Rendering_Universal_PipelineDebugLevel.h"
#include "UnityEngine_Rendering_Universal_ColorGradingMode.h"
#include "UnityEngine_Rendering_Universal_ShadowQuality.h"
#include "UnityEngine_Rendering_Universal_ShaderVariantLogLevel.h"
#include "UnityEngine_Rendering_Universal_ShadowCascadesOption.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct RenderPipeline; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
#include "UnityEngine_Rendering_Universal_DefaultMaterialType.h"

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	struct UniversalRenderPipelineAsset : UnityEngine_CoreModule::UnityEngine::Rendering::RenderPipelineAsset
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Shader* m_DefaultShader;
		IL2CPP::Array<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer*>* m_Renderers;
		int32_t k_AssetVersion;
		int32_t k_AssetPreviousVersion;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RendererType m_RendererType;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRendererData* m_RendererData;
		IL2CPP::Array<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRendererData*>* m_RendererDataList;
		int32_t m_DefaultRendererIndex;
		bool m_RequireDepthTexture;
		bool m_RequireOpaqueTexture;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Downsampling m_OpaqueDownsampling;
		bool m_SupportsTerrainHoles;
		bool m_SupportsHDR;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::MsaaQuality m_MSAA;
		float m_RenderScale;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::LightRenderingMode m_MainLightRenderingMode;
		bool m_MainLightShadowsSupported;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ShadowResolution m_MainLightShadowmapResolution;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::LightRenderingMode m_AdditionalLightsRenderingMode;
		int32_t m_AdditionalLightsPerObjectLimit;
		bool m_AdditionalLightShadowsSupported;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ShadowResolution m_AdditionalLightsShadowmapResolution;
		float m_ShadowDistance;
		int32_t m_ShadowCascadeCount;
		float m_Cascade2Split;
		UnityEngine_CoreModule::UnityEngine::Vector2 m_Cascade3Split;
		UnityEngine_CoreModule::UnityEngine::Vector3 m_Cascade4Split;
		float m_ShadowDepthBias;
		float m_ShadowNormalBias;
		bool m_SoftShadowsSupported;
		bool m_UseSRPBatcher;
		bool m_SupportsDynamicBatching;
		bool m_MixedLightingSupported;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::PipelineDebugLevel m_DebugLevel;
		bool m_UseAdaptivePerformance;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ColorGradingMode m_ColorGradingMode;
		int32_t m_ColorGradingLutSize;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ShadowQuality m_ShadowType;
		bool m_LocalShadowsSupported;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ShadowResolution m_LocalShadowsAtlasResolution;
		int32_t m_MaxPixelLights;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ShadowResolution m_ShadowAtlasResolution;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ShaderVariantLogLevel m_ShaderVariantLogLevel;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ShadowCascadesOption m_ShadowCascades;
		struct StaticFields
		{
			int32_t k_MinLutSize;
			int32_t k_MaxLutSize;
			int32_t k_ShadowCascadeMinCount;
			int32_t k_ShadowCascadeMaxCount;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRendererData* LoadBuiltinRendererData(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RendererType type);
		UnityEngine_CoreModule::UnityEngine::Rendering::RenderPipeline* CreatePipeline();
		void DestroyRenderers();
		void DestroyRenderer(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer& renderer);
		void OnValidate();
		void OnDisable();
		void CreateRenderers();
		UnityEngine_CoreModule::UnityEngine::Material* GetMaterial(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::DefaultMaterialType materialType);
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer* get_scriptableRenderer();
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer* GetRenderer(int32_t index);
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRendererData* get_scriptableRendererData();
		IL2CPP::Array<int32_t>* get_rendererIndexList();
		bool get_supportsCameraDepthTexture();
		void set_supportsCameraDepthTexture(bool value);
		bool get_supportsCameraOpaqueTexture();
		void set_supportsCameraOpaqueTexture(bool value);
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Downsampling get_opaqueDownsampling();
		bool get_supportsTerrainHoles();
		bool get_supportsHDR();
		void set_supportsHDR(bool value);
		int32_t get_msaaSampleCount();
		void set_msaaSampleCount(int32_t value);
		float get_renderScale();
		void set_renderScale(float value);
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::LightRenderingMode get_mainLightRenderingMode();
		bool get_supportsMainLightShadows();
		int32_t get_mainLightShadowmapResolution();
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::LightRenderingMode get_additionalLightsRenderingMode();
		int32_t get_maxAdditionalLightsCount();
		void set_maxAdditionalLightsCount(int32_t value);
		bool get_supportsAdditionalLightShadows();
		int32_t get_additionalLightsShadowmapResolution();
		float get_shadowDistance();
		void set_shadowDistance(float value);
		int32_t get_shadowCascadeCount();
		void set_shadowCascadeCount(int32_t value);
		float get_cascade2Split();
		UnityEngine_CoreModule::UnityEngine::Vector2 get_cascade3Split();
		UnityEngine_CoreModule::UnityEngine::Vector3 get_cascade4Split();
		float get_shadowDepthBias();
		void set_shadowDepthBias(float value);
		float get_shadowNormalBias();
		void set_shadowNormalBias(float value);
		bool get_supportsSoftShadows();
		bool get_supportsDynamicBatching();
		void set_supportsDynamicBatching(bool value);
		bool get_supportsMixedLighting();
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ShaderVariantLogLevel get_shaderVariantLogLevel();
		void set_shaderVariantLogLevel(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ShaderVariantLogLevel value);
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::PipelineDebugLevel get_debugLevel();
		bool get_useSRPBatcher();
		void set_useSRPBatcher(bool value);
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ColorGradingMode get_colorGradingMode();
		void set_colorGradingMode(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ColorGradingMode value);
		int32_t get_colorGradingLutSize();
		void set_colorGradingLutSize(int32_t value);
		bool get_useAdaptivePerformance();
		void set_useAdaptivePerformance(bool value);
		UnityEngine_CoreModule::UnityEngine::Material* get_defaultMaterial();
		UnityEngine_CoreModule::UnityEngine::Material* get_defaultParticleMaterial();
		UnityEngine_CoreModule::UnityEngine::Material* get_defaultLineMaterial();
		UnityEngine_CoreModule::UnityEngine::Material* get_defaultTerrainMaterial();
		UnityEngine_CoreModule::UnityEngine::Material* get_defaultUIMaterial();
		UnityEngine_CoreModule::UnityEngine::Material* get_defaultUIOverdrawMaterial();
		UnityEngine_CoreModule::UnityEngine::Material* get_defaultUIETC1SupportedMaterial();
		UnityEngine_CoreModule::UnityEngine::Material* get_default2DMaterial();
		UnityEngine_CoreModule::UnityEngine::Shader* get_defaultShader();
		void OnBeforeSerialize();
		void OnAfterDeserialize();
		float ValidateShadowBias(float value);
		int32_t ValidatePerObjectLights(int32_t value);
		float ValidateRenderScale(float value);
		bool ValidateRendererDataList(bool partial);
		bool ValidateRendererData(int32_t index);
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ShadowCascadesOption get_shadowCascadeOption();
		void set_shadowCascadeOption(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ShadowCascadesOption value);
		void _ctor();
	};
}

