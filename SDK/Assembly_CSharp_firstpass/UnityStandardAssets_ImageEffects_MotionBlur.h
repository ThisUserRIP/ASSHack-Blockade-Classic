#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityStandardAssets_ImageEffects_ImageEffectBase.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct RenderTexture; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects
{
	struct MotionBlur : Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::ImageEffectBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float blurAmount;
		bool extraBlur;
		UnityEngine_CoreModule::UnityEngine::RenderTexture* accumTexture;
		void Start();
		void OnDisable();
		void OnRenderImage(UnityEngine_CoreModule::UnityEngine::RenderTexture* source, UnityEngine_CoreModule::UnityEngine::RenderTexture* destination);
		void _ctor();
	};
}

