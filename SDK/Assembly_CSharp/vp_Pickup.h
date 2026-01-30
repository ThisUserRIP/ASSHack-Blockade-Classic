#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct Rigidbody; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioSource; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct Collider; };
namespace Assembly_CSharp { struct vp_FPPlayerEventHandler; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioClip; };
namespace Assembly_CSharp { struct vp_Timer_Handle; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct vp_Pickup : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Transform* m_Transform;
		UnityEngine_PhysicsModule::UnityEngine::Rigidbody* m_Rigidbody;
		UnityEngine_AudioModule::UnityEngine::AudioSource* m_Audio;
		mscorlib::System::String* InventoryName;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* RecipientTags;
		UnityEngine_PhysicsModule::UnityEngine::Collider* m_LastCollider;
		Assembly_CSharp::vp_FPPlayerEventHandler* m_Recipient;
		mscorlib::System::String* GiveMessage;
		mscorlib::System::String* FailMessage;
		UnityEngine_CoreModule::UnityEngine::Vector3 m_SpawnPosition;
		UnityEngine_CoreModule::UnityEngine::Vector3 m_SpawnScale;
		bool Billboard;
		UnityEngine_CoreModule::UnityEngine::Vector3 Spin;
		float BobAmp;
		float BobRate;
		float BobOffset;
		float RespawnDuration;
		float RespawnScaleUpDuration;
		UnityEngine_AudioModule::UnityEngine::AudioClip* PickupSound;
		UnityEngine_AudioModule::UnityEngine::AudioClip* PickupFailSound;
		UnityEngine_AudioModule::UnityEngine::AudioClip* RespawnSound;
		bool PickupSoundSlomo;
		bool FailSoundSlomo;
		bool RespawnSoundSlomo;
		bool m_Depleted;
		bool m_AlreadyFailed;
		Assembly_CSharp::vp_Timer_Handle* m_RespawnTimer;
		UnityEngine_CoreModule::UnityEngine::Transform* m_CameraMainTransform;
		void Start();
		void Update();
		void UpdateMotion();
		void OnTriggerEnter(UnityEngine_PhysicsModule::UnityEngine::Collider* col);
		void OnTriggerExit(UnityEngine_PhysicsModule::UnityEngine::Collider* col);
		bool TryGive(Assembly_CSharp::vp_FPPlayerEventHandler* player);
		void Remove();
		void Respawn();
		void _ctor();
	};
}

