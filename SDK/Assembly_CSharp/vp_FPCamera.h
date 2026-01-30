#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "vp_Component.h"
namespace Assembly_CSharp { struct vp_FPController; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace Assembly_CSharp { struct vp_Spring; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector4; };
namespace Assembly_CSharp { struct vp_FPCamera_BobStepDelegate; };
#include "..\UnityEngine_PhysicsModule\UnityEngine_RaycastHit.h"
namespace UnityEngine_PhysicsModule::UnityEngine { struct RaycastHit; };
namespace Assembly_CSharp { struct vp_FPPlayerEventHandler; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct vp_FPCamera : Assembly_CSharp::vp_Component
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::vp_FPController* FPController;
		bool MouseFreeze;
		UnityEngine_CoreModule::UnityEngine::Vector2 MouseSensitivityRestore;
		int32_t MouseSmoothSteps;
		float MouseSmoothWeight;
		bool MouseAcceleration;
		float MouseAccelerationThreshold;
		UnityEngine_CoreModule::UnityEngine::Vector2 m_MouseMove;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector2>* m_MouseSmoothBuffer;
		float RenderingFieldOfView;
		float RenderingZoomDamping;
		float m_FinalZoomTime;
		UnityEngine_CoreModule::UnityEngine::Vector3 PositionOffset;
		float PositionGroundLimit;
		float PositionSpringStiffness;
		float PositionSpringDamping;
		float PositionSpring2Stiffness;
		float PositionSpring2Damping;
		float PositionKneeling;
		int32_t PositionKneelingSoftness;
		float PositionEarthQuakeFactor;
		Assembly_CSharp::vp_Spring* m_PositionSpring;
		Assembly_CSharp::vp_Spring* m_PositionSpring2;
		bool m_DrawCameraCollisionDebugLine;
		UnityEngine_CoreModule::UnityEngine::Vector2 RotationPitchLimit;
		UnityEngine_CoreModule::UnityEngine::Vector2 RotationYawLimit;
		float RotationSpringStiffness;
		float RotationSpringDamping;
		float RotationKneeling;
		int32_t RotationKneelingSoftness;
		float RotationStrafeRoll;
		float RotationEarthQuakeFactor;
		float m_Pitch;
		float m_Yaw;
		Assembly_CSharp::vp_Spring* m_RotationSpring;
		UnityEngine_CoreModule::UnityEngine::Vector2 m_InitialRotation;
		float ShakeSpeed;
		UnityEngine_CoreModule::UnityEngine::Vector3 ShakeAmplitude;
		UnityEngine_CoreModule::UnityEngine::Vector3 m_Shake;
		UnityEngine_CoreModule::UnityEngine::Vector4 BobRate;
		UnityEngine_CoreModule::UnityEngine::Vector4 BobAmplitude;
		float BobInputVelocityScale;
		float BobMaxInputVelocity;
		bool BobRequireGroundContact;
		float m_LastBobSpeed;
		UnityEngine_CoreModule::UnityEngine::Vector4 m_CurrentBobAmp;
		UnityEngine_CoreModule::UnityEngine::Vector4 m_CurrentBobVal;
		float m_BobSpeed;
		Assembly_CSharp::vp_FPCamera_BobStepDelegate* BobStepCallback;
		float BobStepThreshold;
		float m_LastUpBob;
		bool m_BobWasElevating;
		UnityEngine_CoreModule::UnityEngine::Vector3 m_CameraCollisionStartPos;
		UnityEngine_CoreModule::UnityEngine::Vector3 m_CameraCollisionEndPos;
		UnityEngine_PhysicsModule::UnityEngine::RaycastHit m_CameraHit;
		Assembly_CSharp::vp_FPPlayerEventHandler* m_Player;
		bool get_DrawCameraCollisionDebugLine();
		void set_DrawCameraCollisionDebugLine(bool value);
		Assembly_CSharp::vp_FPPlayerEventHandler* get_Player();
		UnityEngine_CoreModule::UnityEngine::Vector2 get_Angle();
		void set_Angle(UnityEngine_CoreModule::UnityEngine::Vector2 value);
		UnityEngine_CoreModule::UnityEngine::Vector3 get_Forward();
		float get_Pitch();
		void set_Pitch(float value);
		float get_Yaw();
		void set_Yaw(float value);
		void Awake();
		void Start();
		void Init();
		void Update();
		void FixedUpdate();
		void LateUpdate();
		void DoCameraCollision();
		void AddForce(UnityEngine_CoreModule::UnityEngine::Vector3 force);
		void AddForce(float x, float y, float z);
		void AddForce2(UnityEngine_CoreModule::UnityEngine::Vector3 force);
		void AddForce2(float x, float y, float z);
		void AddRollForce(float force);
		void AddRotationForce(UnityEngine_CoreModule::UnityEngine::Vector3 force);
		void AddRotationForce(float x, float y, float z);
		void UpdateMouseLook();
		void UpdateZoom();
		void Zoom();
		void SnapZoom();
		void UpdateShakes();
		void UpdateBob();
		void DetectBobStep(float speed, float upBob);
		void UpdateSwaying();
		void UpdateEarthQuake();
		void UpdateSprings();
		void DoBomb(UnityEngine_CoreModule::UnityEngine::Vector3 positionForce, float minRollForce, float maxRollForce);
		void Refresh();
		void SnapSprings();
		void StopSprings();
		void Stop();
		void SetRotation(UnityEngine_CoreModule::UnityEngine::Vector2 eulerAngles, bool stop, bool resetInitialRotation);
		void OnMessage_FallImpact(float impact);
		void OnMessage_HeadImpact(float impact);
		void OnMessage_GroundStomp(float impact);
		void OnMessage_BombShake(float impact);
		bool CanStart_Walk();
		UnityEngine_CoreModule::UnityEngine::Vector2 get_OnValue_Rotation();
		void set_OnValue_Rotation(UnityEngine_CoreModule::UnityEngine::Vector2 value);
		void OnMessage_Stop();
		UnityEngine_CoreModule::UnityEngine::Vector3 get_OnValue_Forward();
		void SetMouseFreeze(bool val);
		void SetMouseSensitivity(float sens);
		void _ctor();
	};
}

