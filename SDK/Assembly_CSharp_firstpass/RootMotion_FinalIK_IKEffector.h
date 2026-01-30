#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolver_Node; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolverFullBody; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolver; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct IKEffector : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Transform* bone;
		UnityEngine_CoreModule::UnityEngine::Transform* target;
		float positionWeight;
		float rotationWeight;
		UnityEngine_CoreModule::UnityEngine::Vector3 position;
		UnityEngine_CoreModule::UnityEngine::Quaternion rotation;
		UnityEngine_CoreModule::UnityEngine::Vector3 positionOffset;
		bool _isEndEffector_k__BackingField;
		bool effectChildNodes;
		float maintainRelativePositionWeight;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* childBones;
		UnityEngine_CoreModule::UnityEngine::Transform* planeBone1;
		UnityEngine_CoreModule::UnityEngine::Transform* planeBone2;
		UnityEngine_CoreModule::UnityEngine::Transform* planeBone3;
		UnityEngine_CoreModule::UnityEngine::Quaternion planeRotationOffset;
		float posW;
		float rotW;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* localPositions;
		bool usePlaneNodes;
		UnityEngine_CoreModule::UnityEngine::Quaternion animatedPlaneRotation;
		UnityEngine_CoreModule::UnityEngine::Vector3 animatedPosition;
		bool firstUpdate;
		int32_t chainIndex;
		int32_t nodeIndex;
		int32_t plane1ChainIndex;
		int32_t plane1NodeIndex;
		int32_t plane2ChainIndex;
		int32_t plane2NodeIndex;
		int32_t plane3ChainIndex;
		int32_t plane3NodeIndex;
		IL2CPP::Array<int32_t>* childChainIndexes;
		IL2CPP::Array<int32_t>* childNodeIndexes;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_Node* GetNode(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverFullBody* solver);
		bool get_isEndEffector();
		void set_isEndEffector(bool value);
		void PinToBone(float positionWeight, float rotationWeight);
		void _ctor();
		void _ctor(UnityEngine_CoreModule::UnityEngine::Transform* bone, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* childBones);
		bool IsValid(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver* solver, mscorlib::System::String& message);
		void Initiate(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverFullBody* solver);
		void ResetOffset(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverFullBody* solver);
		void SetToTarget();
		void OnPreSolve(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverFullBody* solver);
		void OnPostWrite();
		UnityEngine_CoreModule::UnityEngine::Quaternion GetPlaneRotation(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverFullBody* solver);
		void Update(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverFullBody* solver);
		UnityEngine_CoreModule::UnityEngine::Vector3 GetPosition(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverFullBody* solver, UnityEngine_CoreModule::UnityEngine::Quaternion& planeRotationOffset);
	};
}

