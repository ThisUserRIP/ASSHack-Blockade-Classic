#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct Rigidbody; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioSource; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Assembly_CSharp { struct vp_Shell_RestAngleFunc; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioClip; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct Collision; };

namespace Assembly_CSharp
{
	struct vp_Shell : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Transform* m_Transform;
		UnityEngine_PhysicsModule::UnityEngine::Rigidbody* m_Rigidbody;
		UnityEngine_AudioModule::UnityEngine::AudioSource* m_Audio;
		float LifeTime;
		float m_RemoveTime;
		float m_Persistence;
		Assembly_CSharp::vp_Shell_RestAngleFunc* m_RestAngleFunc;
		float m_RestTime;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_AudioModule::UnityEngine::AudioClip>* m_BounceSounds;
		void Start();
		void Update();
		void OnCollisionEnter(UnityEngine_PhysicsModule::UnityEngine::Collision* collision);
		void DecideRestAngle();
		void UpRight();
		void TippedOver();
		void _ctor();
	};
}

