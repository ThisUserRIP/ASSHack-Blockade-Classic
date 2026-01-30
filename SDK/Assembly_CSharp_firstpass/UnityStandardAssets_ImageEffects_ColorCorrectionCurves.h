#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityStandardAssets_ImageEffects_PostEffectsBase.h"
namespace UnityEngine_CoreModule::UnityEngine { struct AnimationCurve; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2D; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "UnityStandardAssets_ImageEffects_ColorCorrectionCurves_ColorCorrectionMode.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Shader; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct RenderTexture; };

namespace Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects
{
	struct ColorCorrectionCurves : Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::PostEffectsBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::AnimationCurve* redChannel;
		UnityEngine_CoreModule::UnityEngine::AnimationCurve* greenChannel;
		UnityEngine_CoreModule::UnityEngine::AnimationCurve* blueChannel;
		bool useDepthCorrection;
		UnityEngine_CoreModule::UnityEngine::AnimationCurve* zCurve;
		UnityEngine_CoreModule::UnityEngine::AnimationCurve* depthRedChannel;
		UnityEngine_CoreModule::UnityEngine::AnimationCurve* depthGreenChannel;
		UnityEngine_CoreModule::UnityEngine::AnimationCurve* depthBlueChannel;
		UnityEngine_CoreModule::UnityEngine::Material* ccMaterial;
		UnityEngine_CoreModule::UnityEngine::Material* ccDepthMaterial;
		UnityEngine_CoreModule::UnityEngine::Material* selectiveCcMaterial;
		UnityEngine_CoreModule::UnityEngine::Texture2D* rgbChannelTex;
		UnityEngine_CoreModule::UnityEngine::Texture2D* rgbDepthChannelTex;
		UnityEngine_CoreModule::UnityEngine::Texture2D* zCurveTex;
		float saturation;
		bool selectiveCc;
		UnityEngine_CoreModule::UnityEngine::Color selectiveFromColor;
		UnityEngine_CoreModule::UnityEngine::Color selectiveToColor;
		Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::ColorCorrectionCurves_ColorCorrectionMode mode;
		bool updateTextures;
		UnityEngine_CoreModule::UnityEngine::Shader* colorCorrectionCurvesShader;
		UnityEngine_CoreModule::UnityEngine::Shader* simpleColorCorrectionCurvesShader;
		UnityEngine_CoreModule::UnityEngine::Shader* colorCorrectionSelectiveShader;
		bool updateTexturesOnStartup;
		void Start();
		void Awake();
		bool CheckResources();
		void UpdateParameters();
		void UpdateTextures();
		void OnRenderImage(UnityEngine_CoreModule::UnityEngine::RenderTexture* source, UnityEngine_CoreModule::UnityEngine::RenderTexture* destination);
		void _ctor();
	};
}

