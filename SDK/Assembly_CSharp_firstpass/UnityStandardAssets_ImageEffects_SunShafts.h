#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityStandardAssets_ImageEffects_PostEffectsBase.h"
#include "UnityStandardAssets_ImageEffects_SunShafts_SunShaftsResolution.h"
#include "UnityStandardAssets_ImageEffects_SunShafts_ShaftsScreenBlendMode.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct Shader; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct RenderTexture; };

namespace Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects
{
	struct SunShafts : Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::PostEffectsBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::SunShafts_SunShaftsResolution resolution;
		Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::SunShafts_ShaftsScreenBlendMode screenBlendMode;
		UnityEngine_CoreModule::UnityEngine::Transform* sunTransform;
		int32_t radialBlurIterations;
		UnityEngine_CoreModule::UnityEngine::Color sunColor;
		UnityEngine_CoreModule::UnityEngine::Color sunThreshold;
		float sunShaftBlurRadius;
		float sunShaftIntensity;
		float maxRadius;
		bool useDepthTexture;
		UnityEngine_CoreModule::UnityEngine::Shader* sunShaftsShader;
		UnityEngine_CoreModule::UnityEngine::Material* sunShaftsMaterial;
		UnityEngine_CoreModule::UnityEngine::Shader* simpleClearShader;
		UnityEngine_CoreModule::UnityEngine::Material* simpleClearMaterial;
		bool CheckResources();
		void OnRenderImage(UnityEngine_CoreModule::UnityEngine::RenderTexture* source, UnityEngine_CoreModule::UnityEngine::RenderTexture* destination);
		void _ctor();
	};
}

