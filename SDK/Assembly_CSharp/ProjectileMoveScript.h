#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioClip; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\UnityEngine_PhysicsModule\UnityEngine_RaycastHit.h"
namespace UnityEngine_PhysicsModule::UnityEngine { struct RaycastHit; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct Collider; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace Assembly_CSharp
{
	struct ProjectileMoveScript : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float speed;
		float accuracy;
		float fireRate;
		UnityEngine_CoreModule::UnityEngine::GameObject* muzzlePrefab;
		UnityEngine_CoreModule::UnityEngine::GameObject* hitPrefab;
		UnityEngine_AudioModule::UnityEngine::AudioClip* shotSFX;
		UnityEngine_AudioModule::UnityEngine::AudioClip* hitSFX;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::GameObject>* trails;
		float speedRandomness;
		UnityEngine_CoreModule::UnityEngine::Vector3 offset;
		bool collided;
		float createdTime;
		float lifeTime;
		UnityEngine_CoreModule::UnityEngine::Vector3 velocity;
		UnityEngine_CoreModule::UnityEngine::Vector3 newPos;
		UnityEngine_CoreModule::UnityEngine::Vector3 oldPos;
		UnityEngine_CoreModule::UnityEngine::Transform* myTransform;
		UnityEngine_PhysicsModule::UnityEngine::RaycastHit hit;
		void Start();
		void Update();
		void Explode(UnityEngine_PhysicsModule::UnityEngine::Collider* co);
		mscorlib::System::Collections::IEnumerator* DestroyParticle(float waitTime);
		void _ctor();
	};
}

