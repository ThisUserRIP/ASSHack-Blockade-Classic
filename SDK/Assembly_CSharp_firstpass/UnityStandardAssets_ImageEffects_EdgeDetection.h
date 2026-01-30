#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityStandardAssets_ImageEffects_PostEffectsBase.h"
#include "UnityStandardAssets_ImageEffects_EdgeDetection_EdgeDetectMode.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
namespace UnityEngine_CoreModule::UnityEngine { struct Shader; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct RenderTexture; };

namespace Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects
{
	struct EdgeDetection : Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::PostEffectsBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::EdgeDetection_EdgeDetectMode mode;
		float sensitivityDepth;
		float sensitivityNormals;
		float lumThreshold;
		float edgeExp;
		float sampleDist;
		float edgesOnly;
		UnityEngine_CoreModule::UnityEngine::Color edgesOnlyBgColor;
		UnityEngine_CoreModule::UnityEngine::Shader* edgeDetectShader;
		UnityEngine_CoreModule::UnityEngine::Material* edgeDetectMaterial;
		Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::EdgeDetection_EdgeDetectMode oldMode;
		bool CheckResources();
		void Start();
		void SetCameraFlag();
		void OnEnable();
		void OnRenderImage(UnityEngine_CoreModule::UnityEngine::RenderTexture* source, UnityEngine_CoreModule::UnityEngine::RenderTexture* destination);
		void _ctor();
	};
}

