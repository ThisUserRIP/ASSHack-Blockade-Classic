#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "vp_MovingPlatform_PathMoveType.h"
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "vp_MovingPlatform_Direction.h"
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp { struct vp_Timer_Handle; };
#include "vp_MovingPlatform_MovementInterpolationMode.h"
namespace UnityEngine_CoreModule::UnityEngine { struct AnimationCurve; };
#include "vp_MovingPlatform_RotateInterpolationMode.h"
namespace UnityEngine_AudioModule::UnityEngine { struct AudioClip; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioSource; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct Rigidbody; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct Collider; };
namespace Assembly_CSharp { struct vp_FPPlayerEventHandler; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct vp_MovingPlatform : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Transform* m_Transform;
		Assembly_CSharp::vp_MovingPlatform_PathMoveType PathType;
		UnityEngine_CoreModule::UnityEngine::GameObject* PathWaypoints;
		Assembly_CSharp::vp_MovingPlatform_Direction PathDirection;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Transform>* m_Waypoints;
		int32_t m_NextWaypoint;
		UnityEngine_CoreModule::UnityEngine::Vector3 m_CurrentTargetPosition;
		UnityEngine_CoreModule::UnityEngine::Vector3 m_CurrentTargetAngle;
		int32_t m_TargetedWayPoint;
		float m_TravelDistance;
		UnityEngine_CoreModule::UnityEngine::Vector3 m_OriginalAngle;
		int32_t m_CurrentWaypoint;
		int32_t MoveAutoStartTarget;
		float MoveSpeed;
		float MoveReturnDelay;
		float MoveCooldown;
		bool m_Moving;
		float m_NextAllowedMoveTime;
		float m_MoveTime;
		Assembly_CSharp::vp_Timer_Handle* m_ReturnDelayTimer;
		UnityEngine_CoreModule::UnityEngine::Vector3 m_PrevPos;
		Assembly_CSharp::vp_MovingPlatform_MovementInterpolationMode MoveInterpolationMode;
		UnityEngine_CoreModule::UnityEngine::AnimationCurve* m_EaseInOutCurve;
		UnityEngine_CoreModule::UnityEngine::AnimationCurve* m_LinearCurve;
		float RotationEaseAmount;
		UnityEngine_CoreModule::UnityEngine::Vector3 RotationSpeed;
		UnityEngine_CoreModule::UnityEngine::Vector3 m_PrevAngle;
		Assembly_CSharp::vp_MovingPlatform_RotateInterpolationMode RotationInterpolationMode;
		UnityEngine_AudioModule::UnityEngine::AudioClip* SoundStart;
		UnityEngine_AudioModule::UnityEngine::AudioClip* SoundStop;
		UnityEngine_AudioModule::UnityEngine::AudioClip* SoundMove;
		UnityEngine_AudioModule::UnityEngine::AudioClip* SoundWaypoint;
		UnityEngine_AudioModule::UnityEngine::AudioSource* m_Audio;
		bool PhysicsSnapPlayerToTopOnIntersect;
		UnityEngine_PhysicsModule::UnityEngine::Rigidbody* m_RigidBody;
		UnityEngine_PhysicsModule::UnityEngine::Collider* m_Collider;
		UnityEngine_PhysicsModule::UnityEngine::Collider* m_PlayerCollider;
		Assembly_CSharp::vp_FPPlayerEventHandler* m_PlayerToPush;
		float m_PhysicsPushForce;
		float m_PhysicsCurrentMoveVelocity;
		float m_PhysicsCurrentRotationVelocity;
		mscorlib::System::Collections::Generic::Dictionary_2<UnityEngine_PhysicsModule::UnityEngine::Collider, Assembly_CSharp::vp_FPPlayerEventHandler>* m_KnownPlayers;
		void Start();
		void FixedUpdate();
		void UpdatePath();
		void OnStart();
		void OnArriveAtWaypoint();
		void OnArriveAtDestination();
		void OnStop();
		void UpdateMovement();
		void UpdateRotation();
		void UpdateVelocity();
		void GoTo(int32_t targetWayPoint);
		float GetDistanceLeft();
		void GoToNextWaypoint();
		int32_t GetValidWaypoint(int32_t wayPoint);
		void OnTriggerEnter(UnityEngine_PhysicsModule::UnityEngine::Collider* col);
		void OnTriggerStay(UnityEngine_PhysicsModule::UnityEngine::Collider* col);
		bool GetPlayer(UnityEngine_PhysicsModule::UnityEngine::Collider* col);
		void TryPushPlayer();
		void TrySnapPlayerToTop();
		void TryAutoStart();
		void _ctor();
		void _OnArriveAtDestination_b__52_0();
	};
}

