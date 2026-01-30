#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };

namespace Assembly_CSharp
{
	struct ParticleManager : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::GameObject* pgoBrick;
		UnityEngine_CoreModule::UnityEngine::GameObject* pgoHitHead;
		UnityEngine_CoreModule::UnityEngine::GameObject* pgoHitBody;
		UnityEngine_CoreModule::UnityEngine::GameObject* pgoFlame;
		UnityEngine_CoreModule::UnityEngine::GameObject* pgoGhostDeath;
		UnityEngine_CoreModule::UnityEngine::GameObject* pgoAnimalEffect;
		UnityEngine_CoreModule::UnityEngine::GameObject* pgoPotionEffect;
		UnityEngine_CoreModule::UnityEngine::GameObject* FireWork1;
		UnityEngine_CoreModule::UnityEngine::GameObject* FireWork2;
		bool Fire;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::GameObject*>* pgoBlasterProjectile;
		struct StaticFields
		{
			Assembly_CSharp::ParticleManager* THIS__;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void Awake();
		void CreateParticle(float x, float y, float z, float r, float g, float b, float a);
		void CreateHit(UnityEngine_CoreModule::UnityEngine::Transform* _player, int32_t hitbox, float x, float y, float z);
		void CreateFlame(UnityEngine_CoreModule::UnityEngine::Vector3 pos, UnityEngine_CoreModule::UnityEngine::Transform* parent);
		void CreateAnimalEffect(UnityEngine_CoreModule::UnityEngine::Vector3 _position, float koef);
		void CreatePotionEffect(UnityEngine_CoreModule::UnityEngine::Vector3 _position);
		void CreateGhostDeath(UnityEngine_CoreModule::UnityEngine::Vector3 pos);
		void CreateBlasterProjectile(UnityEngine_CoreModule::UnityEngine::Transform* _position, int32_t _team);
		void Update();
		void _ctor();
	};
}

