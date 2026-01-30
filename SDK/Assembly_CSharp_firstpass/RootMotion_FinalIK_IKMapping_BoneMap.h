#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "RootMotion_FinalIK_IKMapping.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKMapping; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolverFullBody; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolver_Node; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct IKMapping_BoneMap : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Transform* transform;
		int32_t chainIndex;
		int32_t nodeIndex;
		UnityEngine_CoreModule::UnityEngine::Vector3 defaultLocalPosition;
		UnityEngine_CoreModule::UnityEngine::Quaternion defaultLocalRotation;
		UnityEngine_CoreModule::UnityEngine::Vector3 localSwingAxis;
		UnityEngine_CoreModule::UnityEngine::Vector3 localTwistAxis;
		UnityEngine_CoreModule::UnityEngine::Vector3 planePosition;
		UnityEngine_CoreModule::UnityEngine::Vector3 ikPosition;
		UnityEngine_CoreModule::UnityEngine::Quaternion defaultLocalTargetRotation;
		UnityEngine_CoreModule::UnityEngine::Quaternion maintainRotation;
		float length;
		UnityEngine_CoreModule::UnityEngine::Quaternion animatedRotation;
		UnityEngine_CoreModule::UnityEngine::Transform* planeBone1;
		UnityEngine_CoreModule::UnityEngine::Transform* planeBone2;
		UnityEngine_CoreModule::UnityEngine::Transform* planeBone3;
		int32_t plane1ChainIndex;
		int32_t plane1NodeIndex;
		int32_t plane2ChainIndex;
		int32_t plane2NodeIndex;
		int32_t plane3ChainIndex;
		int32_t plane3NodeIndex;
		void Initiate(UnityEngine_CoreModule::UnityEngine::Transform* transform, Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverFullBody* solver);
		UnityEngine_CoreModule::UnityEngine::Vector3 get_swingDirection();
		void StoreDefaultLocalState();
		void FixTransform(bool position);
		bool get_isNodeBone();
		void SetLength(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMapping_BoneMap* nextBone);
		void SetLocalSwingAxis(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMapping_BoneMap* swingTarget);
		void SetLocalSwingAxis(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMapping_BoneMap* bone1, Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMapping_BoneMap* bone2);
		void SetLocalTwistAxis(UnityEngine_CoreModule::UnityEngine::Vector3 twistDirection, UnityEngine_CoreModule::UnityEngine::Vector3 normalDirection);
		void SetPlane(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverFullBody* solver, UnityEngine_CoreModule::UnityEngine::Transform* planeBone1, UnityEngine_CoreModule::UnityEngine::Transform* planeBone2, UnityEngine_CoreModule::UnityEngine::Transform* planeBone3);
		void UpdatePlane(bool rotation, bool position);
		void SetIKPosition();
		void MaintainRotation();
		void SetToIKPosition();
		void FixToNode(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverFullBody* solver, float weight, Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_Node* fixNode);
		UnityEngine_CoreModule::UnityEngine::Vector3 GetPlanePosition(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverFullBody* solver);
		void PositionToPlane(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverFullBody* solver);
		void RotateToPlane(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverFullBody* solver, float weight);
		void Swing(UnityEngine_CoreModule::UnityEngine::Vector3 swingTarget, float weight);
		void Swing(UnityEngine_CoreModule::UnityEngine::Vector3 pos1, UnityEngine_CoreModule::UnityEngine::Vector3 pos2, float weight);
		void Twist(UnityEngine_CoreModule::UnityEngine::Vector3 twistDirection, UnityEngine_CoreModule::UnityEngine::Vector3 normalDirection, float weight);
		void RotateToMaintain(float weight);
		void RotateToEffector(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverFullBody* solver, float weight);
		UnityEngine_CoreModule::UnityEngine::Quaternion GetTargetRotation(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverFullBody* solver);
		UnityEngine_CoreModule::UnityEngine::Quaternion get_lastAnimatedTargetRotation();
		void _ctor();
	};
}

