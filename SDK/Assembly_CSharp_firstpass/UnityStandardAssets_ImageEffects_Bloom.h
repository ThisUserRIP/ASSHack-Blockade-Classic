#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityStandardAssets_ImageEffects_PostEffectsBase.h"
#include "UnityStandardAssets_ImageEffects_Bloom_TweakMode.h"
#include "UnityStandardAssets_ImageEffects_Bloom_BloomScreenBlendMode.h"
#include "UnityStandardAssets_ImageEffects_Bloom_HDRBloomMode.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "UnityStandardAssets_ImageEffects_Bloom_BloomQuality.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "UnityStandardAssets_ImageEffects_Bloom_LensFlareStyle.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2D; };
namespace UnityEngine_CoreModule::UnityEngine { struct Shader; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct RenderTexture; };

namespace Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects
{
	struct Bloom : Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::PostEffectsBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::Bloom_TweakMode tweakMode;
		Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::Bloom_BloomScreenBlendMode screenBlendMode;
		Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::Bloom_HDRBloomMode hdr;
		bool doHdr;
		float sepBlurSpread;
		Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::Bloom_BloomQuality quality;
		float bloomIntensity;
		float bloomThreshold;
		UnityEngine_CoreModule::UnityEngine::Color bloomThresholdColor;
		int32_t bloomBlurIterations;
		int32_t hollywoodFlareBlurIterations;
		float flareRotation;
		Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::Bloom_LensFlareStyle lensflareMode;
		float hollyStretchWidth;
		float lensflareIntensity;
		float lensflareThreshold;
		float lensFlareSaturation;
		UnityEngine_CoreModule::UnityEngine::Color flareColorA;
		UnityEngine_CoreModule::UnityEngine::Color flareColorB;
		UnityEngine_CoreModule::UnityEngine::Color flareColorC;
		UnityEngine_CoreModule::UnityEngine::Color flareColorD;
		UnityEngine_CoreModule::UnityEngine::Texture2D* lensFlareVignetteMask;
		UnityEngine_CoreModule::UnityEngine::Shader* lensFlareShader;
		UnityEngine_CoreModule::UnityEngine::Material* lensFlareMaterial;
		UnityEngine_CoreModule::UnityEngine::Shader* screenBlendShader;
		UnityEngine_CoreModule::UnityEngine::Material* screenBlend;
		UnityEngine_CoreModule::UnityEngine::Shader* blurAndFlaresShader;
		UnityEngine_CoreModule::UnityEngine::Material* blurAndFlaresMaterial;
		UnityEngine_CoreModule::UnityEngine::Shader* brightPassFilterShader;
		UnityEngine_CoreModule::UnityEngine::Material* brightPassFilterMaterial;
		bool CheckResources();
		void OnRenderImage(UnityEngine_CoreModule::UnityEngine::RenderTexture* source, UnityEngine_CoreModule::UnityEngine::RenderTexture* destination);
		void AddTo(float intensity_, UnityEngine_CoreModule::UnityEngine::RenderTexture* from, UnityEngine_CoreModule::UnityEngine::RenderTexture* to);
		void BlendFlares(UnityEngine_CoreModule::UnityEngine::RenderTexture* from, UnityEngine_CoreModule::UnityEngine::RenderTexture* to);
		void BrightFilter(float thresh, UnityEngine_CoreModule::UnityEngine::RenderTexture* from, UnityEngine_CoreModule::UnityEngine::RenderTexture* to);
		void BrightFilter(UnityEngine_CoreModule::UnityEngine::Color threshColor, UnityEngine_CoreModule::UnityEngine::RenderTexture* from, UnityEngine_CoreModule::UnityEngine::RenderTexture* to);
		void Vignette(float amount, UnityEngine_CoreModule::UnityEngine::RenderTexture* from, UnityEngine_CoreModule::UnityEngine::RenderTexture* to);
		void _ctor();
	};
}

