#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "DigitalRuby_ThunderAndLightning_LightningSpellScript.h"
namespace UnityEngine_ParticleSystemModule::UnityEngine { struct ParticleSystem; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "..\UnityEngine_ParticleSystemModule\UnityEngine_ParticleCollisionEvent.h"
namespace UnityEngine_ParticleSystemModule::UnityEngine { struct ParticleCollisionEvent; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { template <typename T1, typename T2, typename T3> struct Action_3; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "DigitalRuby_ThunderAndLightning_RangeOfFloats.h"
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct RangeOfFloats; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\UnityEngine_CoreModule\UnityEngine_LayerMask.h"
namespace UnityEngine_CoreModule::UnityEngine { struct LayerMask; };
#include "..\UnityEngine_ParticleSystemModule\UnityEngine_ParticleSystem_Particle.h"
namespace UnityEngine_ParticleSystemModule::UnityEngine { struct ParticleSystem_Particle; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct Light; };

namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning
{
	struct LightningParticleSpellScript : Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningSpellScript
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem* ParticleSystem;
		float CollisionInterval;
		float collisionTimer;
		mscorlib::System::Action_3<UnityEngine_CoreModule::UnityEngine::GameObject, mscorlib::System::Collections::Generic::List_1<UnityEngine_ParticleSystemModule::UnityEngine::ParticleCollisionEvent>, mscorlib::System::Int32>* CollisionCallback;
		bool EnableParticleLights;
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::RangeOfFloats ParticleLightRange;
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::RangeOfFloats ParticleLightIntensity;
		UnityEngine_CoreModule::UnityEngine::Color ParticleLightColor1;
		UnityEngine_CoreModule::UnityEngine::Color ParticleLightColor2;
		UnityEngine_CoreModule::UnityEngine::LayerMask ParticleLightCullingMask;
		IL2CPP::Array<UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_Particle>* particles;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::GameObject>* particleLights;
		void PopulateParticleLight(UnityEngine_CoreModule::UnityEngine::Light* src);
		void UpdateParticleLights();
		void UpdateParticleSystems();
		void OnDestroy();
		void Start();
		void Update();
		void OnCastSpell();
		void OnStopSpell();
		void DigitalRuby_ThunderAndLightning_ICollisionHandler_HandleCollision(UnityEngine_CoreModule::UnityEngine::GameObject* obj, mscorlib::System::Collections::Generic::List_1<UnityEngine_ParticleSystemModule::UnityEngine::ParticleCollisionEvent>* collisions, int32_t collisionCount);
		void _ctor();
	};
}

