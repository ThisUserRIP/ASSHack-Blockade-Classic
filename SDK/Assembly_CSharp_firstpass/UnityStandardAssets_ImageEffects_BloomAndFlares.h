#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityStandardAssets_ImageEffects_PostEffectsBase.h"
#include "UnityStandardAssets_ImageEffects_TweakMode34.h"
#include "UnityStandardAssets_ImageEffects_BloomScreenBlendMode.h"
#include "UnityStandardAssets_ImageEffects_HDRBloomMode.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "UnityStandardAssets_ImageEffects_LensflareStyle34.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2D; };
namespace UnityEngine_CoreModule::UnityEngine { struct Shader; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct RenderTexture; };

namespace Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects
{
	struct BloomAndFlares : Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::PostEffectsBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::TweakMode34 tweakMode;
		Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::BloomScreenBlendMode screenBlendMode;
		Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::HDRBloomMode hdr;
		bool doHdr;
		float sepBlurSpread;
		float useSrcAlphaAsMask;
		float bloomIntensity;
		float bloomThreshold;
		int32_t bloomBlurIterations;
		bool lensflares;
		int32_t hollywoodFlareBlurIterations;
		Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::LensflareStyle34 lensflareMode;
		float hollyStretchWidth;
		float lensflareIntensity;
		float lensflareThreshold;
		UnityEngine_CoreModule::UnityEngine::Color flareColorA;
		UnityEngine_CoreModule::UnityEngine::Color flareColorB;
		UnityEngine_CoreModule::UnityEngine::Color flareColorC;
		UnityEngine_CoreModule::UnityEngine::Color flareColorD;
		UnityEngine_CoreModule::UnityEngine::Texture2D* lensFlareVignetteMask;
		UnityEngine_CoreModule::UnityEngine::Shader* lensFlareShader;
		UnityEngine_CoreModule::UnityEngine::Material* lensFlareMaterial;
		UnityEngine_CoreModule::UnityEngine::Shader* vignetteShader;
		UnityEngine_CoreModule::UnityEngine::Material* vignetteMaterial;
		UnityEngine_CoreModule::UnityEngine::Shader* separableBlurShader;
		UnityEngine_CoreModule::UnityEngine::Material* separableBlurMaterial;
		UnityEngine_CoreModule::UnityEngine::Shader* addBrightStuffOneOneShader;
		UnityEngine_CoreModule::UnityEngine::Material* addBrightStuffBlendOneOneMaterial;
		UnityEngine_CoreModule::UnityEngine::Shader* screenBlendShader;
		UnityEngine_CoreModule::UnityEngine::Material* screenBlend;
		UnityEngine_CoreModule::UnityEngine::Shader* hollywoodFlaresShader;
		UnityEngine_CoreModule::UnityEngine::Material* hollywoodFlaresMaterial;
		UnityEngine_CoreModule::UnityEngine::Shader* brightPassFilterShader;
		UnityEngine_CoreModule::UnityEngine::Material* brightPassFilterMaterial;
		bool CheckResources();
		void OnRenderImage(UnityEngine_CoreModule::UnityEngine::RenderTexture* source, UnityEngine_CoreModule::UnityEngine::RenderTexture* destination);
		void AddTo(float intensity_, UnityEngine_CoreModule::UnityEngine::RenderTexture* from, UnityEngine_CoreModule::UnityEngine::RenderTexture* to);
		void BlendFlares(UnityEngine_CoreModule::UnityEngine::RenderTexture* from, UnityEngine_CoreModule::UnityEngine::RenderTexture* to);
		void BrightFilter(float thresh, float useAlphaAsMask, UnityEngine_CoreModule::UnityEngine::RenderTexture* from, UnityEngine_CoreModule::UnityEngine::RenderTexture* to);
		void Vignette(float amount, UnityEngine_CoreModule::UnityEngine::RenderTexture* from, UnityEngine_CoreModule::UnityEngine::RenderTexture* to);
		void _ctor();
	};
}

