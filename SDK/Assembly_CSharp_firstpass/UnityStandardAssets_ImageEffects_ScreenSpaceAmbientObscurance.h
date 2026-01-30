#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityStandardAssets_ImageEffects_PostEffectsBase.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2D; };
namespace UnityEngine_CoreModule::UnityEngine { struct Shader; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct RenderTexture; };

namespace Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects
{
	struct ScreenSpaceAmbientObscurance : Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::PostEffectsBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float intensity;
		float radius;
		int32_t blurIterations;
		float blurFilterDistance;
		int32_t downsample;
		UnityEngine_CoreModule::UnityEngine::Texture2D* rand;
		UnityEngine_CoreModule::UnityEngine::Shader* aoShader;
		UnityEngine_CoreModule::UnityEngine::Material* aoMaterial;
		bool CheckResources();
		void OnDisable();
		void OnRenderImage(UnityEngine_CoreModule::UnityEngine::RenderTexture* source, UnityEngine_CoreModule::UnityEngine::RenderTexture* destination);
		void _ctor();
	};
}

