#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_RenderPipeline.h"
namespace mscorlib::System { struct String; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct XRSystem; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector4; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };
namespace mscorlib::System { template <typename T> struct Comparison_1; };
namespace UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination { struct Lightmapping_RequestLightsDelegate; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct UniversalRenderPipelineAsset; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_ScriptableRenderContext.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ScriptableRenderContext; };
#include "UnityEngine_Rendering_Universal_CameraData.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct CameraData; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ScriptableCullingParameters; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ScriptableCullingParameters; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct UniversalAdditionalCameraData; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct CullingResults; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct CullingResults; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct RenderingData; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct RenderingData; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_VisibleLight.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct VisibleLight; };
#include "..\UnityEngine_CoreModule\Unity_Collections_NativeArray_1.h"
namespace UnityEngine_CoreModule::Unity::Collections { template <typename T> struct NativeArray_1; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct ShadowData; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct ShadowData; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct PostProcessingData; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct PostProcessingData; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct LightData; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct LightData; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_PerObjectData.h"
#include "..\UnityEngine_CoreModule\UnityEngine_RenderTextureDescriptor.h"
namespace UnityEngine_CoreModule::UnityEngine { struct RenderTextureDescriptor; };
#include "..\UnityEngine_CoreModule\UnityEngine_LightType.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Matrix4x4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Matrix4x4; };
#include "..\mscorlib\System_Nullable_1.h"
namespace mscorlib::System { template <typename T> struct Nullable_1; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	struct UniversalRenderPipeline : UnityEngine_CoreModule::UnityEngine::Rendering::RenderPipeline
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Comparison_1<UnityEngine_CoreModule::UnityEngine::Camera>* cameraComparison;
		struct StaticFields
		{
			mscorlib::System::String* k_ShaderTagName;
			Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::XRSystem* m_XRSystem;
			int32_t k_MaxVisibleAdditionalLightsMobileShaderLevelLessThan45;
			int32_t k_MaxVisibleAdditionalLightsMobile;
			int32_t k_MaxVisibleAdditionalLightsNonMobile;
			UnityEngine_CoreModule::UnityEngine::Vector4 k_DefaultLightPosition;
			UnityEngine_CoreModule::UnityEngine::Vector4 k_DefaultLightColor;
			UnityEngine_CoreModule::UnityEngine::Vector4 k_DefaultLightAttenuation;
			UnityEngine_CoreModule::UnityEngine::Vector4 k_DefaultLightSpotDirection;
			UnityEngine_CoreModule::UnityEngine::Vector4 k_DefaultLightsProbeChannel;
			mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector4>* m_ShadowBiasData;
			UnityEngine_CoreModule::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate* lightsDelegate;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static float get_maxShadowBias();
		static float get_minRenderScale();
		static float get_maxRenderScale();
		static int32_t get_maxPerObjectLights();
		static int32_t get_maxVisibleAdditionalLights();
		void _ctor(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* asset);
		void Dispose(bool disposing);
		void Render(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext renderContext, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Camera*>* cameras);
		static void RenderSingleCamera(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, UnityEngine_CoreModule::UnityEngine::Camera* camera);
		static bool TryGetCullingParameters(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::CameraData cameraData, UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableCullingParameters& cullingParams);
		static void RenderSingleCamera(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::CameraData cameraData, bool anyPostProcessingEnabled);
		static void RenderCameraStack(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext context, UnityEngine_CoreModule::UnityEngine::Camera* baseCamera);
		static void UpdateVolumeFramework(UnityEngine_CoreModule::UnityEngine::Camera* camera, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* additionalCameraData);
		static bool CheckPostProcessForDepth(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::CameraData& cameraData);
		static void SetSupportedRenderingFeatures();
		static void InitializeCameraData(UnityEngine_CoreModule::UnityEngine::Camera* camera, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* additionalCameraData, bool resolveFinalTarget, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::CameraData& cameraData);
		static void InitializeStackedCameraData(UnityEngine_CoreModule::UnityEngine::Camera* baseCamera, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* baseAdditionalCameraData, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::CameraData& cameraData);
		static void InitializeAdditionalCameraData(UnityEngine_CoreModule::UnityEngine::Camera* camera, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* additionalCameraData, bool resolveFinalTarget, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::CameraData& cameraData);
		static void InitializeRenderingData(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* settings, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::CameraData& cameraData, UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults& cullResults, bool anyPostProcessingEnabled, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderingData& renderingData);
		static void InitializeShadowData(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* settings, UnityEngine_CoreModule::Unity::Collections::NativeArray_1<UnityEngine_CoreModule::UnityEngine::Rendering::VisibleLight> visibleLights, bool mainLightCastShadows, bool additionalLightsCastShadows, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ShadowData& shadowData);
		static void InitializePostProcessingData(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* settings, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::PostProcessingData& postProcessingData);
		static void InitializeLightData(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* settings, UnityEngine_CoreModule::Unity::Collections::NativeArray_1<UnityEngine_CoreModule::UnityEngine::Rendering::VisibleLight> visibleLights, int32_t mainLightIndex, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::LightData& lightData);
		static UnityEngine_CoreModule::UnityEngine::Rendering::PerObjectData GetPerObjectLightFlags(int32_t additionalLightsCount);
		static int32_t GetMainLightIndex(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* settings, UnityEngine_CoreModule::Unity::Collections::NativeArray_1<UnityEngine_CoreModule::UnityEngine::Rendering::VisibleLight> visibleLights);
		static void SetupPerFrameShaderConstants();
		static bool IsGameCamera(UnityEngine_CoreModule::UnityEngine::Camera* camera);
		static bool IsStereoEnabled(UnityEngine_CoreModule::UnityEngine::Camera* camera);
		static Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* get_asset();
		static bool IsMultiPassStereoEnabled(UnityEngine_CoreModule::UnityEngine::Camera* camera);
		void SortCameras(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Camera*>* cameras);
		static UnityEngine_CoreModule::UnityEngine::RenderTextureDescriptor CreateRenderTextureDescriptor(UnityEngine_CoreModule::UnityEngine::Camera* camera, float renderScale, bool isHdrEnabled, int32_t msaaSamples, bool needsAlpha, bool requiresOpaqueTexture);
		static void GetLightAttenuationAndSpotDirection(UnityEngine_CoreModule::UnityEngine::LightType lightType, float lightRange, UnityEngine_CoreModule::UnityEngine::Matrix4x4 lightLocalToWorldMatrix, float spotAngle, mscorlib::System::Nullable_1<mscorlib::System::Single> innerSpotAngle, UnityEngine_CoreModule::UnityEngine::Vector4& lightAttenuation, UnityEngine_CoreModule::UnityEngine::Vector4& lightSpotDir);
		static void InitializeLightConstants_Common(UnityEngine_CoreModule::Unity::Collections::NativeArray_1<UnityEngine_CoreModule::UnityEngine::Rendering::VisibleLight> lights, int32_t lightIndex, UnityEngine_CoreModule::UnityEngine::Vector4& lightPos, UnityEngine_CoreModule::UnityEngine::Vector4& lightColor, UnityEngine_CoreModule::UnityEngine::Vector4& lightAttenuation, UnityEngine_CoreModule::UnityEngine::Vector4& lightSpotDir, UnityEngine_CoreModule::UnityEngine::Vector4& lightOcclusionProbeChannel);
		static void _cctor();
	};
}

