#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityStandardAssets_ImageEffects_PostEffectsBase.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "UnityStandardAssets_ImageEffects_DepthOfField_BlurType.h"
#include "UnityStandardAssets_ImageEffects_DepthOfField_BlurSampleCount.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Shader; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2D; };
namespace UnityEngine_CoreModule::UnityEngine { struct ComputeBuffer; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct RenderTexture; };

namespace Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects
{
	struct DepthOfField : Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::PostEffectsBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool visualizeFocus;
		float focalLength;
		float focalSize;
		float aperture;
		UnityEngine_CoreModule::UnityEngine::Transform* focalTransform;
		float maxBlurSize;
		bool highResolution;
		Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::DepthOfField_BlurType blurType;
		Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::DepthOfField_BlurSampleCount blurSampleCount;
		bool nearBlur;
		float foregroundOverlap;
		UnityEngine_CoreModule::UnityEngine::Shader* dofHdrShader;
		UnityEngine_CoreModule::UnityEngine::Material* dofHdrMaterial;
		UnityEngine_CoreModule::UnityEngine::Shader* dx11BokehShader;
		UnityEngine_CoreModule::UnityEngine::Material* dx11bokehMaterial;
		float dx11BokehThreshold;
		float dx11SpawnHeuristic;
		UnityEngine_CoreModule::UnityEngine::Texture2D* dx11BokehTexture;
		float dx11BokehScale;
		float dx11BokehIntensity;
		float focalDistance01;
		UnityEngine_CoreModule::UnityEngine::ComputeBuffer* cbDrawArgs;
		UnityEngine_CoreModule::UnityEngine::ComputeBuffer* cbPoints;
		float internalBlurWidth;
		bool CheckResources();
		void OnEnable();
		void OnDisable();
		void ReleaseComputeResources();
		void CreateComputeResources();
		float FocalDistance01(float worldDist);
		void WriteCoc(UnityEngine_CoreModule::UnityEngine::RenderTexture* fromTo, bool fgDilate);
		void OnRenderImage(UnityEngine_CoreModule::UnityEngine::RenderTexture* source, UnityEngine_CoreModule::UnityEngine::RenderTexture* destination);
		void _ctor();
	};
}

