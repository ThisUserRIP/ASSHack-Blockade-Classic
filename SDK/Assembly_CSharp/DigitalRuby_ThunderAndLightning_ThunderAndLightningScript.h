#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct LightningBoltPrefabScript; };
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };
#include "DigitalRuby_ThunderAndLightning_RangeOfFloats.h"
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct RangeOfFloats; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioClip; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioSource; };
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct ThunderAndLightningScript_LightningBoltHandler; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Nullable_1.h"
namespace mscorlib::System { template <typename T> struct Nullable_1; };

namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning
{
	struct ThunderAndLightningScript : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltPrefabScript* LightningBoltScript;
		UnityEngine_CoreModule::UnityEngine::Camera* Camera;
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::RangeOfFloats LightningIntervalTimeRange;
		float LightningIntenseProbability;
		IL2CPP::Array<UnityEngine_AudioModule::UnityEngine::AudioClip*>* ThunderSoundsNormal;
		IL2CPP::Array<UnityEngine_AudioModule::UnityEngine::AudioClip*>* ThunderSoundsIntense;
		bool LightningAlwaysVisible;
		float CloudLightningChance;
		bool ModifySkyboxExposure;
		float BaseLightRange;
		float LightningYStart;
		float VolumeMultiplier;
		float skyboxExposureOriginal;
		float skyboxExposureStorm;
		float nextLightningTime;
		bool lightningInProgress;
		UnityEngine_AudioModule::UnityEngine::AudioSource* audioSourceThunder;
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::ThunderAndLightningScript_LightningBoltHandler* lightningBoltHandler;
		UnityEngine_CoreModule::UnityEngine::Material* skyboxMaterial;
		UnityEngine_AudioModule::UnityEngine::AudioClip* lastThunderSound;
		bool _EnableLightning_k__BackingField;
		void Start();
		void Update();
		void CallNormalLightning();
		void CallNormalLightning(mscorlib::System::Nullable_1<UnityEngine_CoreModule::UnityEngine::Vector3> start, mscorlib::System::Nullable_1<UnityEngine_CoreModule::UnityEngine::Vector3> end);
		void CallIntenseLightning();
		void CallIntenseLightning(mscorlib::System::Nullable_1<UnityEngine_CoreModule::UnityEngine::Vector3> start, mscorlib::System::Nullable_1<UnityEngine_CoreModule::UnityEngine::Vector3> end);
		float get_SkyboxExposureOriginal();
		bool get_EnableLightning();
		void set_EnableLightning(bool value);
		void _ctor();
	};
}

