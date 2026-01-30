#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp { struct Client; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct Collider; };
namespace Assembly_CSharp { struct EntManager; };
namespace Assembly_CSharp { struct ParticleManager; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
namespace UnityEngine_CoreModule::UnityEngine { struct Renderer; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct Rigidbody; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioClip; };
namespace UnityEngine_ParticleSystemModule::UnityEngine { struct ParticleSystem; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections { struct IEnumerator; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct Collision; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };

namespace Assembly_CSharp
{
	struct Snowball : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t id;
		int32_t uid;
		int32_t entid;
		Assembly_CSharp::Client* cscl;
		IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::Collider*>* myColliders;
		Assembly_CSharp::EntManager* entmanager;
		Assembly_CSharp::ParticleManager* cspm;
		UnityEngine_CoreModule::UnityEngine::Transform* myTransform;
		UnityEngine_CoreModule::UnityEngine::Renderer* myRenderer;
		UnityEngine_PhysicsModule::UnityEngine::Rigidbody* myRigidbody;
		UnityEngine_AudioModule::UnityEngine::AudioClip* soundHit;
		UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem* fx;
		UnityEngine_CoreModule::UnityEngine::GameObject* decal;
		float startTime;
		bool exploded;
		void Awake();
		mscorlib::System::Collections::IEnumerator* Start();
		void OnTriggerEnter(UnityEngine_PhysicsModule::UnityEngine::Collider* collision);
		void OnCollisionEnter(UnityEngine_PhysicsModule::UnityEngine::Collision* collision);
		void Explode(UnityEngine_PhysicsModule::UnityEngine::Collider* col, UnityEngine_CoreModule::UnityEngine::Vector3 pos, UnityEngine_CoreModule::UnityEngine::Vector3 rot);
		mscorlib::System::Collections::IEnumerator* KillSelf();
		void _ctor();
	};
}

