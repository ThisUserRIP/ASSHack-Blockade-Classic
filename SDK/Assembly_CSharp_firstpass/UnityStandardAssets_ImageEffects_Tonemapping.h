#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityStandardAssets_ImageEffects_PostEffectsBase.h"
#include "UnityStandardAssets_ImageEffects_Tonemapping_TonemapperType.h"
#include "UnityStandardAssets_ImageEffects_Tonemapping_AdaptiveTexSize.h"
namespace UnityEngine_CoreModule::UnityEngine { struct AnimationCurve; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2D; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_CoreModule::UnityEngine { struct Shader; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
namespace UnityEngine_CoreModule::UnityEngine { struct RenderTexture; };
#include "..\UnityEngine_CoreModule\UnityEngine_RenderTextureFormat.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects
{
	struct Tonemapping : Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::PostEffectsBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::Tonemapping_TonemapperType type;
		Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::Tonemapping_AdaptiveTexSize adaptiveTextureSize;
		UnityEngine_CoreModule::UnityEngine::AnimationCurve* remapCurve;
		UnityEngine_CoreModule::UnityEngine::Texture2D* curveTex;
		float exposureAdjustment;
		float middleGrey;
		float white;
		float adaptionSpeed;
		UnityEngine_CoreModule::UnityEngine::Shader* tonemapper;
		bool validRenderTextureFormat;
		UnityEngine_CoreModule::UnityEngine::Material* tonemapMaterial;
		UnityEngine_CoreModule::UnityEngine::RenderTexture* rt;
		UnityEngine_CoreModule::UnityEngine::RenderTextureFormat rtFormat;
		bool CheckResources();
		float UpdateCurve();
		void OnDisable();
		bool CreateInternalRenderTexture();
		void OnRenderImage(UnityEngine_CoreModule::UnityEngine::RenderTexture* source, UnityEngine_CoreModule::UnityEngine::RenderTexture* destination);
		void _ctor();
	};
}

