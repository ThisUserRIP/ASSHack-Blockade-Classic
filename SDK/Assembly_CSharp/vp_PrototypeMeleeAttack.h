#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "vp_Component.h"
namespace Assembly_CSharp { struct vp_FPWeapon; };
namespace Assembly_CSharp { struct vp_FPController; };
namespace Assembly_CSharp { struct vp_FPCamera; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace UnityEngine_CoreModule::UnityEngine { struct Object; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace Assembly_CSharp { struct vp_Timer_Handle; };
namespace Assembly_CSharp { struct vp_FPPlayerEventHandler; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_PhysicsModule\UnityEngine_RaycastHit.h"
namespace UnityEngine_PhysicsModule::UnityEngine { struct RaycastHit; };

namespace Assembly_CSharp
{
	struct vp_PrototypeMeleeAttack : Assembly_CSharp::vp_Component
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::vp_FPWeapon* m_Weapon;
		Assembly_CSharp::vp_FPController* m_Controller;
		Assembly_CSharp::vp_FPCamera* m_Camera;
		mscorlib::System::String* WeaponStateCharge;
		mscorlib::System::String* WeaponStateSwing;
		float SwingDelay;
		float SwingDuration;
		float SwingRate;
		float m_NextAllowedSwingTime;
		int32_t SwingSoftForceFrames;
		UnityEngine_CoreModule::UnityEngine::Vector3 SwingPositionSoftForce;
		UnityEngine_CoreModule::UnityEngine::Vector3 SwingRotationSoftForce;
		float ImpactTime;
		UnityEngine_CoreModule::UnityEngine::Vector3 ImpactPositionSpringRecoil;
		UnityEngine_CoreModule::UnityEngine::Vector3 ImpactPositionSpring2Recoil;
		UnityEngine_CoreModule::UnityEngine::Vector3 ImpactRotationSpringRecoil;
		UnityEngine_CoreModule::UnityEngine::Vector3 ImpactRotationSpring2Recoil;
		mscorlib::System::String* DamageMethodName;
		float Damage;
		float DamageRadius;
		float DamageRange;
		float DamageForce;
		int32_t m_AttackCurrent;
		float SparkFactor;
		UnityEngine_CoreModule::UnityEngine::GameObject* m_DustPrefab;
		UnityEngine_CoreModule::UnityEngine::GameObject* m_SparkPrefab;
		UnityEngine_CoreModule::UnityEngine::GameObject* m_DebrisPrefab;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Object>* SoundSwing;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Object>* SoundImpact;
		UnityEngine_CoreModule::UnityEngine::Vector2 SoundSwingPitch;
		UnityEngine_CoreModule::UnityEngine::Vector2 SoundImpactPitch;
		Assembly_CSharp::vp_Timer_Handle* SwingDelayTimer;
		Assembly_CSharp::vp_Timer_Handle* ImpactTimer;
		Assembly_CSharp::vp_Timer_Handle* SwingDurationTimer;
		Assembly_CSharp::vp_Timer_Handle* ResetTimer;
		Assembly_CSharp::vp_FPPlayerEventHandler* m_Player;
		Assembly_CSharp::vp_FPPlayerEventHandler* get_Player();
		void Start();
		void Update();
		void UpdateAttack();
		void PickAttack();
		void SpawnImpactFX(UnityEngine_PhysicsModule::UnityEngine::RaycastHit hit);
		void ApplyDamage(UnityEngine_PhysicsModule::UnityEngine::RaycastHit hit);
		void ApplyRecoil();
		void Reset();
		void _ctor();
		void _UpdateAttack_b__40_0();
		void _UpdateAttack_b__40_1();
		void _UpdateAttack_b__40_2();
		void _Reset_b__45_0();
	};
}

