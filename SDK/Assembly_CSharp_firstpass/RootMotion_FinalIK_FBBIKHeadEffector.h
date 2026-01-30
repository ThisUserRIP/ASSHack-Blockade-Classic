#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct FullBodyBipedIK; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct FBBIKHeadEffector_BendBone; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolver_UpdateDelegate; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKEffector; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct FBBIKHeadEffector : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::FullBodyBipedIK* ik;
		float positionWeight;
		float bodyWeight;
		float thighWeight;
		bool handsPullBody;
		float rotationWeight;
		float bodyClampWeight;
		float headClampWeight;
		float bendWeight;
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::FBBIKHeadEffector_BendBone*>* bendBones;
		float CCDWeight;
		float roll;
		float damper;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* CCDBones;
		float postStretchWeight;
		float maxStretch;
		float stretchDamper;
		bool fixHead;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* stretchBones;
		UnityEngine_CoreModule::UnityEngine::Vector3 chestDirection;
		float chestDirectionWeight;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* chestBones;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_UpdateDelegate* OnPostHeadEffectorFK;
		UnityEngine_CoreModule::UnityEngine::Vector3 offset;
		UnityEngine_CoreModule::UnityEngine::Vector3 headToBody;
		UnityEngine_CoreModule::UnityEngine::Vector3 shoulderCenterToHead;
		UnityEngine_CoreModule::UnityEngine::Vector3 headToLeftThigh;
		UnityEngine_CoreModule::UnityEngine::Vector3 headToRightThigh;
		UnityEngine_CoreModule::UnityEngine::Vector3 leftShoulderPos;
		UnityEngine_CoreModule::UnityEngine::Vector3 rightShoulderPos;
		float shoulderDist;
		float leftShoulderDist;
		float rightShoulderDist;
		UnityEngine_CoreModule::UnityEngine::Quaternion chestRotation;
		UnityEngine_CoreModule::UnityEngine::Quaternion headRotationRelativeToRoot;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Quaternion>* ccdDefaultLocalRotations;
		UnityEngine_CoreModule::UnityEngine::Vector3 headLocalPosition;
		UnityEngine_CoreModule::UnityEngine::Quaternion headLocalRotation;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* stretchLocalPositions;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Quaternion>* stretchLocalRotations;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* chestLocalPositions;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Quaternion>* chestLocalRotations;
		int32_t bendBonesCount;
		int32_t ccdBonesCount;
		int32_t stretchBonesCount;
		int32_t chestBonesCount;
		void Start();
		void OnStoreDefaultLocalState();
		void OnFixTransforms();
		void OnPreRead();
		void SpineBend();
		void CCDPass();
		void Iterate(int32_t iteration);
		void OnPostUpdate();
		void ChestDirection();
		void PostStretching();
		void LerpSolverPosition(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKEffector* effector, UnityEngine_CoreModule::UnityEngine::Vector3 position, float weight, UnityEngine_CoreModule::UnityEngine::Vector3 offset);
		void Solve(UnityEngine_CoreModule::UnityEngine::Vector3& pos1, UnityEngine_CoreModule::UnityEngine::Vector3& pos2, float nominalDistance);
		void OnDestroy();
		void _ctor();
	};
}

