#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\UnityEngine_CoreModule\UnityEngine_LightRenderMode.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_LayerMask.h"
namespace UnityEngine_CoreModule::UnityEngine { struct LayerMask; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning
{
	struct LightningLightParameters : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::LightRenderMode RenderMode;
		UnityEngine_CoreModule::UnityEngine::Color LightColor;
		float LightPercent;
		float LightShadowPercent;
		float LightIntensity;
		float BounceIntensity;
		float ShadowStrength;
		float ShadowBias;
		float ShadowNormalBias;
		float LightRange;
		UnityEngine_CoreModule::UnityEngine::LayerMask CullingMask;
		float OrthographicOffset;
		float FadeInMultiplier;
		float FadeFullyLitMultiplier;
		float FadeOutMultiplier;
		bool get_HasLight();
		void _ctor();
	};
}

