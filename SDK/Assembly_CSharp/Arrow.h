#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_LayerMask.h"
namespace UnityEngine_CoreModule::UnityEngine { struct LayerMask; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioClip; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_PhysicsModule\UnityEngine_RaycastHit.h"
namespace UnityEngine_PhysicsModule::UnityEngine { struct RaycastHit; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace Assembly_CSharp { struct Client; };
namespace Assembly_CSharp { struct ParticleManager; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct Collider; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace Assembly_CSharp
{
	struct Arrow : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t id;
		int32_t uid;
		int32_t entid;
		UnityEngine_CoreModule::UnityEngine::LayerMask layerMask;
		UnityEngine_AudioModule::UnityEngine::AudioClip* soundHit;
		UnityEngine_CoreModule::UnityEngine::Vector3 velocity;
		UnityEngine_CoreModule::UnityEngine::Vector3 newPos;
		UnityEngine_CoreModule::UnityEngine::Vector3 oldPos;
		bool hasHit;
		UnityEngine_CoreModule::UnityEngine::Vector3 direction;
		UnityEngine_PhysicsModule::UnityEngine::RaycastHit hit;
		float speed;
		UnityEngine_CoreModule::UnityEngine::Transform* myTransform;
		float forceToApply;
		float arrowGravity;
		UnityEngine_CoreModule::UnityEngine::GameObject* follow;
		bool exploded;
		Assembly_CSharp::Client* cscl;
		Assembly_CSharp::ParticleManager* cspm;
		void Start();
		void Update();
		void Explode(UnityEngine_PhysicsModule::UnityEngine::Collider* col);
		mscorlib::System::Collections::IEnumerator* Start2();
		void KillSelf();
		void _ctor();
	};
}

