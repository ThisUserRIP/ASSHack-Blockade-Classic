#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityStandardAssets_ImageEffects_PostEffectsBase.h"
#include "UnityStandardAssets_ImageEffects_VignetteAndChromaticAberration_AberrationMode.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_CoreModule::UnityEngine { struct Shader; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct RenderTexture; };

namespace Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects
{
	struct VignetteAndChromaticAberration : Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::PostEffectsBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::VignetteAndChromaticAberration_AberrationMode mode;
		float intensity;
		float chromaticAberration;
		float axialAberration;
		float blur;
		float blurSpread;
		float luminanceDependency;
		float blurDistance;
		UnityEngine_CoreModule::UnityEngine::Shader* vignetteShader;
		UnityEngine_CoreModule::UnityEngine::Shader* separableBlurShader;
		UnityEngine_CoreModule::UnityEngine::Shader* chromAberrationShader;
		UnityEngine_CoreModule::UnityEngine::Material* m_VignetteMaterial;
		UnityEngine_CoreModule::UnityEngine::Material* m_SeparableBlurMaterial;
		UnityEngine_CoreModule::UnityEngine::Material* m_ChromAberrationMaterial;
		bool CheckResources();
		void OnRenderImage(UnityEngine_CoreModule::UnityEngine::RenderTexture* source, UnityEngine_CoreModule::UnityEngine::RenderTexture* destination);
		void _ctor();
	};
}

