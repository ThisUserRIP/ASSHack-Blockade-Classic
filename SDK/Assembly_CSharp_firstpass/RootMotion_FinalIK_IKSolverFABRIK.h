#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "RootMotion_FinalIK_IKSolverHeuristic.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolver_IterationDelegate; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct IKSolverFABRIK : Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverHeuristic
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_IterationDelegate* OnPreIteration;
		IL2CPP::Array<bool>* limitedBones;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* solverLocalPositions;
		void SolveForward(UnityEngine_CoreModule::UnityEngine::Vector3 position);
		void SolveBackward(UnityEngine_CoreModule::UnityEngine::Vector3 position);
		UnityEngine_CoreModule::UnityEngine::Vector3 GetIKPosition();
		void OnInitiate();
		void OnUpdate();
		bool get_boneLengthCanBeZero();
		UnityEngine_CoreModule::UnityEngine::Vector3 SolveJoint(UnityEngine_CoreModule::UnityEngine::Vector3 pos1, UnityEngine_CoreModule::UnityEngine::Vector3 pos2, float length);
		void OnPreSolve();
		void OnPostSolve();
		void Solve(UnityEngine_CoreModule::UnityEngine::Vector3 targetPosition);
		void ForwardReach(UnityEngine_CoreModule::UnityEngine::Vector3 position);
		void SolverMove(int32_t index, UnityEngine_CoreModule::UnityEngine::Vector3 offset);
		void SolverRotate(int32_t index, UnityEngine_CoreModule::UnityEngine::Quaternion rotation, bool recursive);
		void SolverRotateChildren(int32_t index, UnityEngine_CoreModule::UnityEngine::Quaternion rotation);
		void SolverMoveChildrenAroundPoint(int32_t index, UnityEngine_CoreModule::UnityEngine::Quaternion rotation);
		UnityEngine_CoreModule::UnityEngine::Quaternion GetParentSolverRotation(int32_t index);
		UnityEngine_CoreModule::UnityEngine::Vector3 GetParentSolverPosition(int32_t index);
		UnityEngine_CoreModule::UnityEngine::Quaternion GetLimitedRotation(int32_t index, UnityEngine_CoreModule::UnityEngine::Quaternion q, bool& changed);
		void LimitForward(int32_t rotateBone, int32_t limitBone);
		void BackwardReach(UnityEngine_CoreModule::UnityEngine::Vector3 position);
		void BackwardReachUnlimited(UnityEngine_CoreModule::UnityEngine::Vector3 position);
		void BackwardReachLimited(UnityEngine_CoreModule::UnityEngine::Vector3 position);
		void MapToSolverPositions();
		void MapToSolverPositionsLimited();
		void _ctor();
	};
}

