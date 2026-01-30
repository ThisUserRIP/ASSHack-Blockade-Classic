#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace UnityEngine_CoreModule::UnityEngine { struct MonoBehaviour; };
namespace UnityEngine_ParticleSystemModule::UnityEngine { struct ParticleSystem; };
#include "..\UnityEngine_ParticleSystemModule\UnityEngine_ParticleCollisionEvent.h"
namespace UnityEngine_ParticleSystemModule::UnityEngine { struct ParticleCollisionEvent; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };

namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning
{
	struct LightningParticleCollisionForwarder : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::MonoBehaviour* CollisionHandler;
		UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem* _particleSystem;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_ParticleSystemModule::UnityEngine::ParticleCollisionEvent>* collisionEvents;
		void Start();
		void OnParticleCollision(UnityEngine_CoreModule::UnityEngine::GameObject* other);
		void _ctor();
	};
}

