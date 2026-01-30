#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "RootMotion_FinalIK_IKSolver.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolverVR_VirtualBone; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolverVR_Spine; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolverVR_Arm; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolverVR_Leg; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolverVR_Locomotion; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct VRIK_References; };
#include "RootMotion_FinalIK_IKSolverVR_PositionOffset.h"
#include "RootMotion_FinalIK_IKSolverVR_RotationOffset.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolver_Point; };
namespace mscorlib::System { struct String; };
#include "..\UnityEngine_CoreModule\UnityEngine_Keyframe.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Keyframe; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct IKSolverVR : Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* solverTransforms;
		bool hasChest;
		bool hasNeck;
		bool hasShoulders;
		bool hasToes;
		bool hasLegs;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* readPositions;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Quaternion>* readRotations;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* solvedPositions;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Quaternion>* solvedRotations;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Quaternion>* defaultLocalRotations;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* defaultLocalPositions;
		UnityEngine_CoreModule::UnityEngine::Vector3 rootV;
		UnityEngine_CoreModule::UnityEngine::Vector3 rootVelocity;
		UnityEngine_CoreModule::UnityEngine::Vector3 bodyOffset;
		int32_t supportLegIndex;
		bool plantFeet;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone* _rootBone_k__BackingField;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_Spine* spine;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_Arm* leftArm;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_Arm* rightArm;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_Leg* leftLeg;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_Leg* rightLeg;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_Locomotion* locomotion;
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_Leg*>* legs;
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_Arm*>* arms;
		UnityEngine_CoreModule::UnityEngine::Vector3 headPosition;
		UnityEngine_CoreModule::UnityEngine::Vector3 headDeltaPosition;
		UnityEngine_CoreModule::UnityEngine::Vector3 raycastOriginPelvis;
		UnityEngine_CoreModule::UnityEngine::Vector3 lastOffset;
		UnityEngine_CoreModule::UnityEngine::Vector3 debugPos1;
		UnityEngine_CoreModule::UnityEngine::Vector3 debugPos2;
		UnityEngine_CoreModule::UnityEngine::Vector3 debugPos3;
		UnityEngine_CoreModule::UnityEngine::Vector3 debugPos4;
		void SetToReferences(Assembly_CSharp_firstpass::RootMotion::FinalIK::VRIK_References* references);
		void GuessHandOrientations(Assembly_CSharp_firstpass::RootMotion::FinalIK::VRIK_References* references, bool onlyIfZero);
		void DefaultAnimationCurves();
		void AddPositionOffset(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_PositionOffset positionOffset, UnityEngine_CoreModule::UnityEngine::Vector3 value);
		void AddRotationOffset(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_RotationOffset rotationOffset, UnityEngine_CoreModule::UnityEngine::Vector3 value);
		void AddRotationOffset(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_RotationOffset rotationOffset, UnityEngine_CoreModule::UnityEngine::Quaternion value);
		void AddPlatformMotion(UnityEngine_CoreModule::UnityEngine::Vector3 deltaPosition, UnityEngine_CoreModule::UnityEngine::Quaternion deltaRotation, UnityEngine_CoreModule::UnityEngine::Vector3 platformPivot);
		void Reset();
		void StoreDefaultLocalState();
		void FixTransforms();
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_Point*>* GetPoints();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_Point* GetPoint(UnityEngine_CoreModule::UnityEngine::Transform* transform);
		bool IsValid(mscorlib::System::String& message);
		UnityEngine_CoreModule::UnityEngine::Vector3 GetNormal(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* transforms);
		UnityEngine_CoreModule::UnityEngine::Vector3 GuessWristToPalmAxis(UnityEngine_CoreModule::UnityEngine::Transform* hand, UnityEngine_CoreModule::UnityEngine::Transform* forearm);
		UnityEngine_CoreModule::UnityEngine::Vector3 GuessPalmToThumbAxis(UnityEngine_CoreModule::UnityEngine::Transform* hand, UnityEngine_CoreModule::UnityEngine::Transform* forearm);
		static IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Keyframe>* GetSineKeyframes(float mag);
		void UpdateSolverTransforms();
		void OnInitiate();
		void OnUpdate();
		void WriteTransforms();
		void Read(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* positions, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Quaternion>* rotations, bool hasChest, bool hasNeck, bool hasShoulders, bool hasToes, bool hasLegs);
		void Solve();
		UnityEngine_CoreModule::UnityEngine::Vector3 GetPosition(int32_t index);
		UnityEngine_CoreModule::UnityEngine::Quaternion GetRotation(int32_t index);
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone* get_rootBone();
		void set_rootBone(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone* value);
		void Write();
		UnityEngine_CoreModule::UnityEngine::Vector3 GetPelvisOffset();
		void _ctor();
	};
}

