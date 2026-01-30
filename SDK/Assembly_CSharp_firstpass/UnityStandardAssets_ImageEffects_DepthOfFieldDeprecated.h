#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityStandardAssets_ImageEffects_PostEffectsBase.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "UnityStandardAssets_ImageEffects_DepthOfFieldDeprecated_Dof34QualitySetting.h"
#include "UnityStandardAssets_ImageEffects_DepthOfFieldDeprecated_DofResolution.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "UnityStandardAssets_ImageEffects_DepthOfFieldDeprecated_DofBlurriness.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Shader; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
#include "UnityStandardAssets_ImageEffects_DepthOfFieldDeprecated_BokehDestination.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2D; };
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };
namespace UnityEngine_CoreModule::UnityEngine { struct RenderTexture; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects
{
	struct DepthOfFieldDeprecated : Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::PostEffectsBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::DepthOfFieldDeprecated_Dof34QualitySetting quality;
		Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::DepthOfFieldDeprecated_DofResolution resolution;
		bool simpleTweakMode;
		float focalPoint;
		float smoothness;
		float focalZDistance;
		float focalZStartCurve;
		float focalZEndCurve;
		float focalStartCurve;
		float focalEndCurve;
		float focalDistance01;
		UnityEngine_CoreModule::UnityEngine::Transform* objectFocus;
		float focalSize;
		Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::DepthOfFieldDeprecated_DofBlurriness bluriness;
		float maxBlurSpread;
		float foregroundBlurExtrude;
		UnityEngine_CoreModule::UnityEngine::Shader* dofBlurShader;
		UnityEngine_CoreModule::UnityEngine::Material* dofBlurMaterial;
		UnityEngine_CoreModule::UnityEngine::Shader* dofShader;
		UnityEngine_CoreModule::UnityEngine::Material* dofMaterial;
		bool visualize;
		Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::DepthOfFieldDeprecated_BokehDestination bokehDestination;
		float widthOverHeight;
		float oneOverBaseSize;
		bool bokeh;
		bool bokehSupport;
		UnityEngine_CoreModule::UnityEngine::Shader* bokehShader;
		UnityEngine_CoreModule::UnityEngine::Texture2D* bokehTexture;
		float bokehScale;
		float bokehIntensity;
		float bokehThresholdContrast;
		float bokehThresholdLuminance;
		int32_t bokehDownsample;
		UnityEngine_CoreModule::UnityEngine::Material* bokehMaterial;
		UnityEngine_CoreModule::UnityEngine::Camera* _camera;
		UnityEngine_CoreModule::UnityEngine::RenderTexture* foregroundTexture;
		UnityEngine_CoreModule::UnityEngine::RenderTexture* mediumRezWorkTexture;
		UnityEngine_CoreModule::UnityEngine::RenderTexture* finalDefocus;
		UnityEngine_CoreModule::UnityEngine::RenderTexture* lowRezWorkTexture;
		UnityEngine_CoreModule::UnityEngine::RenderTexture* bokehSource;
		UnityEngine_CoreModule::UnityEngine::RenderTexture* bokehSource2;
		struct StaticFields
		{
			int32_t SMOOTH_DOWNSAMPLE_PASS;
			float BOKEH_EXTRA_BLUR;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void CreateMaterials();
		bool CheckResources();
		void OnDisable();
		void OnEnable();
		float FocalDistance01(float worldDist);
		int32_t GetDividerBasedOnQuality();
		int32_t GetLowResolutionDividerBasedOnQuality(int32_t baseDivider);
		void OnRenderImage(UnityEngine_CoreModule::UnityEngine::RenderTexture* source, UnityEngine_CoreModule::UnityEngine::RenderTexture* destination);
		void Blur(UnityEngine_CoreModule::UnityEngine::RenderTexture* from, UnityEngine_CoreModule::UnityEngine::RenderTexture* to, Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::DepthOfFieldDeprecated_DofBlurriness iterations, int32_t blurPass, float spread);
		void BlurFg(UnityEngine_CoreModule::UnityEngine::RenderTexture* from, UnityEngine_CoreModule::UnityEngine::RenderTexture* to, Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::DepthOfFieldDeprecated_DofBlurriness iterations, int32_t blurPass, float spread);
		void BlurHex(UnityEngine_CoreModule::UnityEngine::RenderTexture* from, UnityEngine_CoreModule::UnityEngine::RenderTexture* to, int32_t blurPass, float spread, UnityEngine_CoreModule::UnityEngine::RenderTexture* tmp);
		void Downsample(UnityEngine_CoreModule::UnityEngine::RenderTexture* from, UnityEngine_CoreModule::UnityEngine::RenderTexture* to);
		void AddBokeh(UnityEngine_CoreModule::UnityEngine::RenderTexture* bokehInfo, UnityEngine_CoreModule::UnityEngine::RenderTexture* tempTex, UnityEngine_CoreModule::UnityEngine::RenderTexture* finalTarget);
		void ReleaseTextures();
		void AllocateTextures(bool blurForeground, UnityEngine_CoreModule::UnityEngine::RenderTexture* source, int32_t divider, int32_t lowTexDivider);
		void _ctor();
		static void _cctor();
	};
}

