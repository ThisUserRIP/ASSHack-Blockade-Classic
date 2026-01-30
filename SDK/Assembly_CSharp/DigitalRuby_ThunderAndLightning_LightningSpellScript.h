#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_PhysicsModule\UnityEngine_ForceMode.h"
namespace UnityEngine_ParticleSystemModule::UnityEngine { struct ParticleSystem; };
#include "..\UnityEngine_CoreModule\UnityEngine_LayerMask.h"
namespace UnityEngine_CoreModule::UnityEngine { struct LayerMask; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioSource; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioClip; };
#include "DigitalRuby_ThunderAndLightning_RangeOfFloats.h"
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct RangeOfFloats; };
namespace UnityEngine_CoreModule::UnityEngine { struct Light; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections { struct IEnumerator; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning
{
	struct LightningSpellScript : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::GameObject* SpellStart;
		UnityEngine_CoreModule::UnityEngine::GameObject* SpellEnd;
		UnityEngine_CoreModule::UnityEngine::Vector3 Direction;
		float MaxDistance;
		bool CollisionIsExplosion;
		float CollisionRadius;
		float CollisionForce;
		UnityEngine_PhysicsModule::UnityEngine::ForceMode CollisionForceMode;
		UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem* CollisionParticleSystem;
		UnityEngine_CoreModule::UnityEngine::LayerMask CollisionMask;
		UnityEngine_AudioModule::UnityEngine::AudioSource* CollisionAudioSource;
		IL2CPP::Array<UnityEngine_AudioModule::UnityEngine::AudioClip*>* CollisionAudioClips;
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::RangeOfFloats CollisionVolumeRange;
		float Duration;
		float Cooldown;
		UnityEngine_AudioModule::UnityEngine::AudioSource* EmissionSound;
		UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem* EmissionParticleSystem;
		UnityEngine_CoreModule::UnityEngine::Light* EmissionLight;
		int32_t stopToken;
		float _DurationTimer_k__BackingField;
		float _CooldownTimer_k__BackingField;
		bool _Casting_k__BackingField;
		mscorlib::System::Collections::IEnumerator* StopAfterSecondsCoRoutine(float seconds);
		float get_DurationTimer();
		void set_DurationTimer(float value);
		float get_CooldownTimer();
		void set_CooldownTimer(float value);
		void ApplyCollisionForce(UnityEngine_CoreModule::UnityEngine::Vector3 point);
		void PlayCollisionSound(UnityEngine_CoreModule::UnityEngine::Vector3 pos);
		void Start();
		void Update();
		void LateUpdate();
		void OnDestroy();
		void OnCastSpell();
		void OnStopSpell();
		void OnActivated();
		void OnDeactivated();
		bool CastSpell();
		void StopSpell();
		void ActivateSpell();
		void DeactivateSpell();
		void StopAfterSeconds(float seconds);
		static UnityEngine_CoreModule::UnityEngine::GameObject* FindChildRecursively(UnityEngine_CoreModule::UnityEngine::Transform* t, mscorlib::System::String* name);
		bool get_Casting();
		void set_Casting(bool value);
		bool get_CanCastSpell();
		void _ctor();
	};
}

