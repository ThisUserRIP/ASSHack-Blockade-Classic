#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityStandardAssets_ImageEffects_PostEffectsBase.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\UnityEngine_FilterMode.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2D; };
namespace UnityEngine_CoreModule::UnityEngine { struct Shader; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct RenderTexture; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects
{
	struct NoiseAndGrain : Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::PostEffectsBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float intensityMultiplier;
		float generalIntensity;
		float blackIntensity;
		float whiteIntensity;
		float midGrey;
		bool dx11Grain;
		float softness;
		bool monochrome;
		UnityEngine_CoreModule::UnityEngine::Vector3 intensities;
		UnityEngine_CoreModule::UnityEngine::Vector3 tiling;
		float monochromeTiling;
		UnityEngine_CoreModule::UnityEngine::FilterMode filterMode;
		UnityEngine_CoreModule::UnityEngine::Texture2D* noiseTexture;
		UnityEngine_CoreModule::UnityEngine::Shader* noiseShader;
		UnityEngine_CoreModule::UnityEngine::Material* noiseMaterial;
		UnityEngine_CoreModule::UnityEngine::Shader* dx11NoiseShader;
		UnityEngine_CoreModule::UnityEngine::Material* dx11NoiseMaterial;
		struct StaticFields
		{
			float TILE_AMOUNT;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		bool CheckResources();
		void OnRenderImage(UnityEngine_CoreModule::UnityEngine::RenderTexture* source, UnityEngine_CoreModule::UnityEngine::RenderTexture* destination);
		static void DrawNoiseQuadGrid(UnityEngine_CoreModule::UnityEngine::RenderTexture* source, UnityEngine_CoreModule::UnityEngine::RenderTexture* dest, UnityEngine_CoreModule::UnityEngine::Material* fxMaterial, UnityEngine_CoreModule::UnityEngine::Texture2D* noise, int32_t passNr);
		void _ctor();
		static void _cctor();
	};
}

