#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "ITEM.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
namespace UnityEngine_ParticleSystemModule::UnityEngine { struct ParticleSystem; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioSource; };
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct LightningBoltPrefabScript; };
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct LightningSplineScript; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
namespace UnityEngine_CoreModule::UnityEngine { struct RectTransform; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct WeaponEffectsController : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::ITEM myID;
		UnityEngine_CoreModule::UnityEngine::Material* myMaterial;
		IL2CPP::Array<UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem*>* myEffects;
		UnityEngine_AudioModule::UnityEngine::AudioSource* myEffectAudio;
		IL2CPP::Array<UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem*>* myMuzzleEffects;
		IL2CPP::Array<Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltPrefabScript*>* myLightningEffects;
		IL2CPP::Array<Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltPrefabScript*>* myLightningMuzzleEffects;
		IL2CPP::Array<Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningSplineScript*>* myAdditionalLightningMuzzleEffects;
		UnityEngine_AudioModule::UnityEngine::AudioSource* myAudio;
		UnityEngine_AudioModule::UnityEngine::AudioSource* myAdditionalAudio;
		int32_t currentState;
		float effectTimer;
		float effectSummator;
		float currentROF;
		bool useColorOnParticles;
		UnityEngine_CoreModule::UnityEngine::Color myColor;
		UnityEngine_CoreModule::UnityEngine::Color myCurrentColor;
		UnityEngine_CoreModule::UnityEngine::Color myInactiveColor;
		UnityEngine_CoreModule::UnityEngine::RectTransform* Presure;
		float PresureMinValue;
		float PresureMaxValue;
		UnityEngine_CoreModule::UnityEngine::RectTransform* Ammo;
		float AmmoMinValue;
		float AmmoMaxValue;
		int32_t myMaxAmmo;
		int32_t myCurrentAmmo;
		bool isFirsPerson;
		bool isPreview;
		void OnEnable();
		void Awake();
		void SetState(int32_t _s);
		void SetTimer(float _t);
		void SetStateAndTimer(int32_t _s, float _t);
		void SetTeam(int32_t _t);
		void Update();
		void CalculateCurrentColor();
		void FireTheWeapon(float _rof);
		void SetNewAmmo(int32_t _current, int32_t _max);
		void _ctor();
	};
}

