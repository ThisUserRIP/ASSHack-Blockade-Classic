#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityStandardAssets_ImageEffects_PostEffectsBase.h"
#include "UnityStandardAssets_ImageEffects_AAMode.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_CoreModule::UnityEngine { struct Shader; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct RenderTexture; };

namespace Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects
{
	struct Antialiasing : Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::PostEffectsBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::AAMode mode;
		bool showGeneratedNormals;
		float offsetScale;
		float blurRadius;
		float edgeThresholdMin;
		float edgeThreshold;
		float edgeSharpness;
		bool dlaaSharp;
		UnityEngine_CoreModule::UnityEngine::Shader* ssaaShader;
		UnityEngine_CoreModule::UnityEngine::Material* ssaa;
		UnityEngine_CoreModule::UnityEngine::Shader* dlaaShader;
		UnityEngine_CoreModule::UnityEngine::Material* dlaa;
		UnityEngine_CoreModule::UnityEngine::Shader* nfaaShader;
		UnityEngine_CoreModule::UnityEngine::Material* nfaa;
		UnityEngine_CoreModule::UnityEngine::Shader* shaderFXAAPreset2;
		UnityEngine_CoreModule::UnityEngine::Material* materialFXAAPreset2;
		UnityEngine_CoreModule::UnityEngine::Shader* shaderFXAAPreset3;
		UnityEngine_CoreModule::UnityEngine::Material* materialFXAAPreset3;
		UnityEngine_CoreModule::UnityEngine::Shader* shaderFXAAII;
		UnityEngine_CoreModule::UnityEngine::Material* materialFXAAII;
		UnityEngine_CoreModule::UnityEngine::Shader* shaderFXAAIII;
		UnityEngine_CoreModule::UnityEngine::Material* materialFXAAIII;
		UnityEngine_CoreModule::UnityEngine::Material* CurrentAAMaterial();
		bool CheckResources();
		void OnRenderImage(UnityEngine_CoreModule::UnityEngine::RenderTexture* source, UnityEngine_CoreModule::UnityEngine::RenderTexture* destination);
		void _ctor();
	};
}

