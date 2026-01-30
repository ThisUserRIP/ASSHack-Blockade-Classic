#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp { struct Client; };
namespace Assembly_CSharp { struct EntManager; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct Collision; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct Collider; };

namespace Assembly_CSharp
{
	struct JavelinMissle : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Transform* target;
		UnityEngine_CoreModule::UnityEngine::Transform* timeTarget;
		UnityEngine_CoreModule::UnityEngine::GameObject* explosionPrefab;
		float speed;
		float turnSpeed;
		float explosionTime;
		int32_t id;
		int32_t uid;
		int32_t entid;
		int32_t targetPlayerID;
		int32_t targetEntClassID;
		Assembly_CSharp::Client* cscl;
		Assembly_CSharp::EntManager* entmanager;
		UnityEngine_CoreModule::UnityEngine::Transform* _thisTransform;
		bool exploded;
		void Awake();
		void Update();
		void Explode();
		void KillSelf();
		void OnCollisionEnter(UnityEngine_PhysicsModule::UnityEngine::Collision* collision);
		void OnTriggerEnter(UnityEngine_PhysicsModule::UnityEngine::Collider* col);
		void _ctor();
	};
}

