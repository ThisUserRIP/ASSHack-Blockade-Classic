#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "RootMotion_FinalIK_IKSolver.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolver_Bone; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolver_Point; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct IKSolverHeuristic : Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Transform* target;
		float tolerance;
		int32_t maxIterations;
		bool useRotationLimits;
		bool XY;
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_Bone*>* bones;
		UnityEngine_CoreModule::UnityEngine::Vector3 lastLocalDirection;
		float chainLength;
		bool SetChain(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* hierarchy, UnityEngine_CoreModule::UnityEngine::Transform* root);
		void AddBone(UnityEngine_CoreModule::UnityEngine::Transform* bone);
		void StoreDefaultLocalState();
		void FixTransforms();
		bool IsValid(mscorlib::System::String& message);
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_Point*>* GetPoints();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_Point* GetPoint(UnityEngine_CoreModule::UnityEngine::Transform* transform);
		int32_t get_minBones();
		bool get_boneLengthCanBeZero();
		bool get_allowCommonParent();
		void OnInitiate();
		void OnUpdate();
		void InitiateBones();
		UnityEngine_CoreModule::UnityEngine::Vector3 get_localDirection();
		float get_positionOffset();
		UnityEngine_CoreModule::UnityEngine::Vector3 GetSingularityOffset();
		bool SingularityDetected();
		void _ctor();
	};
}

